#!/usr/bin/env python3
"""Convert DWARF 1 debug info from MW .o files into DWARF 2 assembly files.

MW's mwcceppc emits DWARF 1.1 (.line/.debug sections) which GDB 8.2+ cannot
read.  This script parses the DWARF 1 line info from each .o, cross-references
with the linker MAP to find per-object .text offsets, and emits .s files using
.file/.loc directives that powerpc-eabi-as assembles into DWARF 2 line tables.

Processes both the DOL (framework.elf) and all REL modules.

Usage:
    python3 tools/gen_dwarf2_debug.py <build_dir>
    # e.g. python3 tools/gen_dwarf2_debug.py build/GZ2E01
"""

import os
import re
import struct
import subprocess
import sys

# DWARF 1 form sizes (low nibble of attr word)
FORM_SIZES = {
    0x1: 4,   # FORM_ADDR
    0x2: 4,   # FORM_REF
    # 0x3: FORM_BLOCK2 — variable
    # 0x4: FORM_BLOCK4 — variable
    0x5: 2,   # FORM_DATA2
    0x6: 4,   # FORM_DATA4
    0x7: 8,   # FORM_DATA8
    # 0x8: FORM_STRING — variable (null-terminated)
}

TAG_COMPILE_UNIT = 0x0011
AT_NAME_WITH_STRING = 0x0038  # AT_name (0x0030) | FORM_STRING (0x8)


def read_elf_sections(path):
    """Parse ELF section headers, return dict of {name: (offset, size, addr)}.

    Note: for duplicate section names (e.g. multiple .text), only the first
    is returned.  Use read_elf_sections_all() if you need all of them.
    """
    sections = {}
    with open(path, "rb") as f:
        magic = f.read(4)
        if magic != b"\x7fELF":
            return sections
        f.seek(0)
        ehdr = f.read(52)
        e_shoff = struct.unpack(">I", ehdr[32:36])[0]
        e_shentsize = struct.unpack(">H", ehdr[46:48])[0]
        e_shnum = struct.unpack(">H", ehdr[48:50])[0]
        e_shstrndx = struct.unpack(">H", ehdr[50:52])[0]

        # Read shstrtab
        f.seek(e_shoff + e_shstrndx * e_shentsize)
        shdr = f.read(e_shentsize)
        strtab_off = struct.unpack(">I", shdr[16:20])[0]
        strtab_sz = struct.unpack(">I", shdr[20:24])[0]
        f.seek(strtab_off)
        strtab = f.read(strtab_sz)

        for i in range(e_shnum):
            f.seek(e_shoff + i * e_shentsize)
            shdr = f.read(e_shentsize)
            name_idx = struct.unpack(">I", shdr[0:4])[0]
            end = strtab.index(b"\x00", name_idx)
            name = strtab[name_idx:end].decode("ascii", errors="replace")
            sh_addr = struct.unpack(">I", shdr[12:16])[0]
            sh_off = struct.unpack(">I", shdr[16:20])[0]
            sh_size = struct.unpack(">I", shdr[20:24])[0]
            if name and name not in sections:
                sections[name] = (sh_off, sh_size, sh_addr)
    return sections


def get_text_base(elf_path):
    """Get the .text section virtual address from an ELF."""
    sections = read_elf_sections(elf_path)
    if ".text" in sections:
        return sections[".text"][2]  # sh_addr
    return None


def parse_dwarf1_source_name(f, debug_off, debug_size):
    """Extract AT_name (source filename) from first compile_unit DIE."""
    f.seek(debug_off)
    if debug_size < 6:
        return None

    die_len = struct.unpack(">I", f.read(4))[0]
    tag = struct.unpack(">H", f.read(2))[0]
    if tag != TAG_COMPILE_UNIT:
        return None

    die_end = debug_off + 4 + die_len
    while f.tell() < die_end:
        if f.tell() + 2 > die_end:
            break
        attr_word = struct.unpack(">H", f.read(2))[0]
        if attr_word == 0:
            break

        form = attr_word & 0xF

        if attr_word == AT_NAME_WITH_STRING:
            # Read null-terminated string
            chars = []
            while True:
                c = f.read(1)
                if c == b"\x00" or c == b"":
                    break
                chars.append(c)
            return b"".join(chars).decode("ascii", errors="replace")

        # Skip this attribute's value
        if form == 0x8:  # FORM_STRING
            while True:
                c = f.read(1)
                if c == b"\x00" or c == b"":
                    break
        elif form == 0x3:  # FORM_BLOCK2
            blen = struct.unpack(">H", f.read(2))[0]
            f.seek(blen, 1)
        elif form == 0x4:  # FORM_BLOCK4
            blen = struct.unpack(">I", f.read(4))[0]
            f.seek(blen, 1)
        elif form in FORM_SIZES:
            f.seek(FORM_SIZES[form], 1)
        else:
            # Unknown form, bail
            break

    return None


def parse_dwarf1_line(f, line_off, line_size):
    """Parse DWARF 1 .line section (all sub-sections).

    MW objects with multiple .text sections have multiple sub-sections in .line,
    each with its own header.  Returns list of entry-lists, one per sub-section:
        [[(line_number, pc_address), ...], ...]
    """
    all_subsections = []
    if line_size < 8:
        return all_subsections

    offset = 0
    while offset + 8 <= line_size:
        f.seek(line_off + offset)
        total_length = struct.unpack(">I", f.read(4))[0]
        _base_address = struct.unpack(">I", f.read(4))[0]

        if total_length < 8:
            break

        entries = []
        pos = 8
        while pos + 10 <= total_length:
            line_no = struct.unpack(">I", f.read(4))[0]
            src_idx = struct.unpack(">H", f.read(2))[0]
            pc_addr = struct.unpack(">I", f.read(4))[0]
            pos += 10

            if line_no == 0:
                break

            if src_idx == 0xFFFF:
                entries.append((line_no, pc_addr))

        all_subsections.append(entries)
        offset += total_length

    return all_subsections


def parse_object_debug(o_path):
    """Parse DWARF 1 from a .o file.

    Returns (source_name, [[(line, pc), ...], ...]) — one list per .line
    sub-section (one per .text section in the object).
    """
    sections = read_elf_sections(o_path)
    if ".line" not in sections or ".debug" not in sections:
        return None, []

    line_off, line_size, _ = sections[".line"]
    debug_off, debug_size, _ = sections[".debug"]

    with open(o_path, "rb") as f:
        source_name = parse_dwarf1_source_name(f, debug_off, debug_size)
        line_subsections = parse_dwarf1_line(f, line_off, line_size)

    return source_name, line_subsections


def parse_map_file(map_path):
    """Parse MAP file .text section layout.

    Returns {obj_basename: [(starting_address, size), ...]} with all .text
    entries per object in order.  MW can split an object's code into multiple
    .text sections; each gets its own alignment-1 entry and matches a
    sub-section in the DWARF 1 .line section.
    """
    obj_offsets = {}
    in_text_layout = False
    past_header = False

    with open(map_path) as f:
        for line in f:
            line = line.rstrip()

            if ".text section layout" in line:
                in_text_layout = True
                past_header = False
                continue

            if in_text_layout:
                if line.strip().startswith("---"):
                    past_header = True
                    continue

                if not past_header:
                    continue

                # Empty line or new section ends .text layout
                if not line.strip():
                    continue
                if line.strip() and not line.startswith("  "):
                    in_text_layout = False
                    continue

                m = re.match(
                    r"\s+([0-9a-fA-F]+)\s+([0-9a-fA-F]+)\s+[0-9a-fA-F]+\s+[0-9a-fA-F]+\s+"
                    r"(\d+)\s+(\S+)\s+(\S+)",
                    line,
                )
                if m:
                    start_addr = int(m.group(1), 16)
                    size = int(m.group(2), 16)
                    alignment = int(m.group(3))
                    section_name = m.group(4)
                    obj_name = m.group(5)

                    if alignment == 1 and section_name == ".text" and size > 0:
                        obj_offsets.setdefault(obj_name, []).append(
                            (start_addr, size)
                        )

    return obj_offsets


def build_o_index(search_dirs):
    """Build {basename: path} index of .o files, preferring src/ over obj/."""
    o_by_basename = {}
    for search_dir in search_dirs:
        if not os.path.isdir(search_dir):
            continue
        for dirpath, _, filenames in os.walk(search_dir):
            for fn in filenames:
                if fn.endswith(".o") and fn != "debug_info.o":
                    full = os.path.join(dirpath, fn)
                    # Prefer src/ over obj/ (rebuilt sources have debug info)
                    if fn not in o_by_basename or "/src/" in full:
                        o_by_basename[fn] = full
    return o_by_basename


def generate_debug_obj(map_path, o_index, out_s, out_o, build_dir, label=""):
    """Generate a debug_info.o from a MAP file and .o file index.

    Returns (processed, skipped, n_entries) or None if no entries found.
    """
    obj_offsets = parse_map_file(map_path)
    if not obj_offsets:
        return None

    file_table = {}  # source_path -> file_index (1-based)
    all_entries = []  # [(global_pc, file_index, line_number)]
    skipped = 0
    processed = 0

    for obj_basename, map_entries in obj_offsets.items():
        if obj_basename not in o_index:
            skipped += 1
            continue

        o_path = o_index[obj_basename]

        # Parse DWARF 1 — returns sub-sections matching .text sections
        source_name, line_subsections = parse_object_debug(o_path)
        if not source_name or not line_subsections:
            skipped += 1
            continue

        # Construct full source path from .o path
        o_rel_norm = os.path.relpath(o_path, build_dir)
        parts = o_rel_norm.split(os.sep)
        if len(parts) >= 2:
            src_dir = os.path.join(*parts[:-1])
        else:
            src_dir = "."

        source_path = os.path.join(src_dir, source_name)

        # Assign file index
        if source_path not in file_table:
            file_table[source_path] = len(file_table) + 1

        file_idx = file_table[source_path]

        # Match .line sub-sections to MAP .text entries by index
        for i, sub_entries in enumerate(line_subsections):
            if i < len(map_entries):
                map_offset = map_entries[i][0]
            else:
                # More .line sub-sections than MAP entries; skip extras
                break

            for line_no, pc_addr in sub_entries:
                global_pc = map_offset + pc_addr
                all_entries.append((global_pc, file_idx, line_no))

        processed += 1

    if not all_entries:
        return None

    # Sort entries by global PC address
    all_entries.sort(key=lambda e: e[0])

    # Emit .s file
    with open(out_s, "w") as f:
        f.write("# Auto-generated DWARF 2 line info — do not edit\n\n")

        for source_path, idx in sorted(file_table.items(), key=lambda x: x[1]):
            f.write('    .file %d "%s"\n' % (idx, source_path))
        f.write("\n    .section .text\n")

        prev_pc = -1
        for global_pc, file_idx, line_no in all_entries:
            if global_pc == prev_pc or global_pc < prev_pc:
                continue
            f.write("    .org 0x%x\n    .loc %d %d\n    nop\n" %
                    (global_pc, file_idx, line_no))
            prev_pc = global_pc + 4

    # Assemble
    as_cmd = ["powerpc-eabi-as", "-o", out_o, out_s]
    result = subprocess.run(as_cmd, capture_output=True, text=True)
    if result.returncode != 0:
        print("  Assembly failed for %s: %s" % (label or out_o, result.stderr.strip()))
        return None

    return (processed, skipped, len(all_entries))


def main():
    if len(sys.argv) < 2:
        print("Usage: %s <build_dir>" % sys.argv[0])
        print("  e.g. %s build/GZ2E01" % sys.argv[0])
        sys.exit(1)

    build_dir = os.path.abspath(sys.argv[1])

    # --- DOL ---
    dol_map = os.path.join(build_dir, "framework.elf.MAP")
    elf_path = os.path.join(build_dir, "framework.elf")
    dol_s = os.path.join(build_dir, "debug_info.s")
    dol_o = os.path.join(build_dir, "debug_info.o")

    if not os.path.exists(dol_map):
        print("Error: MAP file not found: %s" % dol_map)
        sys.exit(1)

    # Build .o index from the whole build tree (src/ preferred over obj/)
    o_index = build_o_index([build_dir])

    text_base = get_text_base(elf_path) if os.path.exists(elf_path) else None
    if text_base is not None:
        print("DOL .text base: 0x%08X" % text_base)

    result = generate_debug_obj(dol_map, o_index, dol_s, dol_o, build_dir, "DOL")
    if result:
        processed, skipped, n_entries = result
        print("DOL: %d files, %d entries (%d skipped)" %
              (processed, n_entries, skipped))
    else:
        print("DOL: no debug entries (MAP may be empty)")

    # --- RELs ---
    rel_count = 0
    rel_skipped = 0

    for entry in sorted(os.listdir(build_dir)):
        module_dir = os.path.join(build_dir, entry)
        if not os.path.isdir(module_dir):
            continue

        plf_map = os.path.join(module_dir, "%s.plf.MAP" % entry)
        if not os.path.exists(plf_map):
            continue

        rel_s = os.path.join(module_dir, "debug_info.s")
        rel_o = os.path.join(module_dir, "debug_info.o")

        # For RELs, search both the global src/ tree and the module's obj/ dir
        rel_o_index = build_o_index([
            os.path.join(build_dir, "src"),
            os.path.join(module_dir, "obj"),
        ])

        result = generate_debug_obj(plf_map, rel_o_index, rel_s, rel_o,
                                    build_dir, entry)
        if result:
            rel_count += 1
        else:
            rel_skipped += 1
            # Clean up empty files
            for p in (rel_s, rel_o):
                if os.path.exists(p):
                    os.remove(p)

    print("RELs: %d with debug info, %d without" % (rel_count, rel_skipped))


if __name__ == "__main__":
    main()
