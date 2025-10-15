#!/usr/bin/python3

import argparse
import copy
from enum import IntEnum, unique
import struct

from any_saves import ANY_PERCENT_SAVES

@unique
class Platform(IntEnum):
    GCN = 0
    WII = 1

def main():
    parser = argparse.ArgumentParser(description="Generate tpgz practice save metadata files")
    parser.add_argument(
        "-p",
        "--platform",
        type=str.upper,
        choices=[e.name for e in Platform],
        default=Platform.GCN.name,
        help="The platform to generate for."
    )
    parser.add_argument(
        "-c",
        "--category",
        type=str.lower,
        choices=['any'],
        help="The category to generate for."
    )
    args = parser.parse_args()

    args.platform = Platform[args.platform]

    default_entry = {
        "name": "",
        "description": "",
        "filename": "",
        "setflags": 0,
        "pos": (0.0, 0.0, 0.0),
        "angle": 0,
        "cam": {"center": (0, 0, 0), "eye": (0, 0, 0)},
    }

    entries = []
    def add_entry(data):
        e = copy.deepcopy(default_entry)
        e.update(data)
        entries.append(e)

    save_count = 0

    if args.category == 'any':
        save_count = len(ANY_PERCENT_SAVES)
        for e in ANY_PERCENT_SAVES:
            add_entry(e)

    if (save_count == 0):
        return

    file = open(f"{args.category}.bin", "wb")
    file.write(struct.pack(">i", save_count))
    file.write(int(0).to_bytes(28, "big", signed=False)) # padding

    for entry in entries:
        print(entry)
        file.write(struct.pack(">32s", entry["name"].encode("ascii")))
        file.write(struct.pack(">64s", entry["description"].encode("ascii")))
        file.write(struct.pack(">32s", entry["filename"].encode("ascii")))
        file.write(entry["setflags"].to_bytes(1, "big", signed=False))
        file.write(int(0).to_bytes(1, "big", signed=False))  # padding
        file.write(entry["angle"].to_bytes(2, "big", signed=False))
        file.write(struct.pack('>fff', *entry["pos"]))
        file.write(struct.pack('>fff', *entry["cam"]["center"]))
        file.write(struct.pack('>fff', *entry["cam"]["eye"]))

if __name__ == "__main__":
    main()
