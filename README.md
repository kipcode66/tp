# umbra

A mod base for The Legend of Zelda: Twilight Princess, built on the [decompilation project](https://github.com/zeldaret/tp).

Umbra provides a platform abstraction layer and build system for creating mods that run on real hardware via [Nintendont](https://github.com/FIX94/Nintendont) (with our [custom fork](https://github.com/zsrtp/Nintendont)), Dolphin, or other loaders. It handles the boilerplate of hooking into the game loop, communicating with the Nintendont kernel, and persisting settings across platforms.

> [!IMPORTANT]
> This repository does **not** contain any game assets or assembly. An existing copy of the game is required.

## What's Included

- **Platform detection** -- detects whether the game is running on Nintendont (upstream or custom fork), Dolphin, or unknown
- **Kernel mailbox interface** -- direct PPC-to-ARM communication with the Nintendont kernel via shared mailbox
- **Storage abstraction** -- write/read settings via Nintendont kernel FatFS or physical memory card (CARD API)
- **Return to loader** -- clean exit back to the Nintendont loader
- **Game hooks** -- scaffolded `execute()`/`draw()`/`startInit()` entry points wired into the game loop
- **GDB remote debugging** -- on-device GDB stub via shared memory, with stepping and Python-based symbol loading
- **DWARF debug info** -- converts MetroWerks DWARF 1 to DWARF 2 for source-level debugging of DOL and REL modules
- **Build system** -- compiles custom code alongside the decomp, patches it into the DOL, and rebuilds the ISO

## Dependencies

### Windows

On Windows, it's **highly recommended** to use native tooling. WSL or msys2 are **not** required.

- Install [Python](https://www.python.org/downloads/) and add it to `%PATH%`.
  - Also available from the [Windows Store](https://apps.microsoft.com/store/detail/python-311/9NRWMJP3717K).
- Install [gclib](https://github.com/LagoLunatic/gclib):

  ```
  pip install "gclib[speedups] @ git+https://github.com/LagoLunatic/gclib.git"
  ```
- Download [ninja](https://github.com/ninja-build/ninja/releases) and add it to `%PATH%`.
  - Quick install via pip: `pip install ninja`

### macOS

- Install [ninja](https://github.com/ninja-build/ninja/wiki/Pre-built-Ninja-packages):

  ```sh
  brew install ninja
  ```

- Install [wine-crossover](https://github.com/Gcenx/homebrew-wine):

  ```sh
  brew install --cask --no-quarantine gcenx/wine/wine-crossover
  ```

- Install [gclib](https://github.com/LagoLunatic/gclib):

  ```
  pip install "gclib[speedups] @ git+https://github.com/LagoLunatic/gclib.git"
  ```

### Linux

- Install [ninja](https://github.com/ninja-build/ninja/wiki/Pre-built-Ninja-packages).
- Install [gclib](https://github.com/LagoLunatic/gclib):

  ```
  pip install "gclib[speedups] @ git+https://github.com/LagoLunatic/gclib.git"
  ```
- For non-x86(_64) platforms: install wine from your package manager.
  - For x86(_64), [wibo](https://github.com/decompals/wibo) will be automatically downloaded and used.

## Creating a Mod

The `setup_mod.py` script scaffolds a new mod on top of the umbra base:

```sh
python setup_mod.py mymod
```

Replace `mymod` with whatever you want to call the mod.

This will:

1. Create `src/mymod/` and `include/mymod/` directories with stub source files
2. Generate `mod_config.py` with your mod's build configuration
3. Apply game hooks so your mod's `execute()`, `draw()`, and `startInit()` functions are called by the game loop

The generated files give you a working starting point:

| File | Purpose |
|------|---------|
| `include/mymod/mymod.h` | Main mod header with `execute()`, `draw()`, `startInit()` declarations |
| `src/mymod/mymod.cpp` | Main mod source with stub implementations |
| `mod_config.py` | Build config: object list, ISO prefix, dependencies |

### Game Hooks

`setup_mod.py` patches these decomp source files to wire your mod into the game:

| Hook | File | What it does |
|------|------|-------------|
| Execute | `f_pc/f_pc_manager.cpp` | Calls `execute()` every frame before game actors run |
| Draw | `f_pc/f_pc_manager.cpp` | Calls `draw()` every frame after game actors render |
| Init | `d/d_s_logo.cpp` | Calls `startInit()` once after all game resources load |
| Input | `m_Do/m_Do_controller_pad.cpp` | Maps port 1 input to a mod-accessible pad struct |
| Dev mode | `m_Do/m_Do_main.cpp` | Sets `developmentMode = 1` to enable debug features |
| Debug draw | `m_Do/m_Do_ext.cpp` | Enables debug drawing primitives unconditionally |

To skip hook application (e.g. if you want to apply them manually):

```sh
python setup_mod.py mymod --no-hooks
```

## Building

- Copy your game's disc image to `orig/GZ2E01/`.
  - Supported formats: ISO (GCM)

- Configure and build:

  ```sh
  python configure.py
  ninja
  ```

  To target a version other than `GZ2E01` (GCN USA), use `--version`:

  ```sh
  python configure.py --version GZ2P01
  ```

  Currently supported versions: `GZ2E01`, `GZ2P01`, `GZ2J01`

- The output ISO is named `<iso_prefix>-<version>.iso` (e.g. `mymod-GZ2E01.iso`), where `iso_prefix` comes from `mod_config.py`.

## Adding Custom Code

- Create new `.cpp` or `.h` files in `src/mymod/` and `include/mymod/`
- Add source files to the `mod_objects` list in `mod_config.py`
- If your code depends on decomp functions not already linked into the DOL, add those source files to `extra_objects` in `mod_config.py`
- Re-run `python configure.py && ninja`

## Adding Custom Assets

Place files in the `mod_assets/` directory. The directory structure is copied 1:1 into the final disc image during ISO rebuild.

## GDB Remote Debugging

Umbra includes a GDB remote stub for source-level debugging of game code. It supports both real hardware via [umbra-nintendont](https://github.com/zsrtp/umbra-nintendont) (PPC-to-ARM communication over shared memory) and emulation via [umbra-dolphin](https://github.com/zsrtp/umbra-dolphin).

### Setup

To include debug info (DWARF 2 conversion + REL symbol loader) as part of the default build, configure with `--penumbra`:

```sh
python configure.py --penumbra
ninja
```

This converts MetroWerks DWARF 1 debug info to DWARF 2 and generates the GDB symbol loader script during the normal build. Debug info is regenerated automatically when source files change.

### Enabling GDB in your mod

```cpp
#include "umbra/umbra_gdb.h"

// Start the GDB server from your settings menu:
umbra_gdb_auto_start(2159);  // start GDB server on port 2159

// In your game loop:
umbra_gdb_poll();  // check for halt requests from GDB
```

`umbra_gdb_auto_start()` sends the GDB server start command to the kernel.

`umbra_gdb_poll()` should be called every frame. It checks for async halt requests (GDB's Ctrl-C) and handles stepping/resuming.

### Connecting

**VS Code (recommended):** Install the [GDB DAP](https://marketplace.visualstudio.com/items?itemName=OlegTolmatcev.gdb-dap) extension. Launch configurations are provided in `.vscode/launch.json` ("Attach to Nintendont" or "Attach to Dolphin"). Symbols are loaded automatically on connect.

**Command line:**

```sh
build/binutils/powerpc-eabi-gdb build/GZ2E01/framework.elf \
    -ex "source build/GZ2E01/load_rel_symbols.py" \
    -ex "target remote 192.168.1.100:2159"
```

### GDB Commands

DOL and REL symbols are loaded automatically on connect via a stop event handler. The following commands are also available manually in the GDB console:

| Command | Description |
|---------|-------------|
| `load-dol-symbols` | Load DOL (framework.elf) symbols + DWARF debug info |
| `load-rel-symbols` | Walk the OS module list and load PLF symbols for all RELs |
| `load-all-symbols` | Run both `load-dol-symbols` and `load-rel-symbols` |
| `load-debug-for <id>` | Load DWARF debug info for a specific REL module by ID |
| `dbg-<name>` | Shorthand for `load-debug-for` (e.g. `dbg-d_a_grass`) |

## Umbra Platform API

The umbra layer is always available to your mod code:

```cpp
#include "umbra/umbra_platform.h"
#include "umbra/umbra_nintendont.h"
#include "umbra/umbra_storage.h"
#include "umbra/umbra_net.h"

// Detect what platform we're running on
UmbraPlatform platform = umbraDetectPlatform();

// Send data to the Nintendont kernel (bypasses EXI)
ninMailboxTransfer(buf, len, mode);

// Persist settings to Nintendont SD card via kernel FatFS
umbraStorageNintendont sdStorage;
sdStorage.write(data, size);
sdStorage.read(data, size);

// Persist settings to physical memory card via CARD API
umbraStorageMemcard mcStorage("mymod_cfg");
mcStorage.write(data, size);
mcStorage.read(data, size);

// Networking (requires Nintendont kernel with network support)
umbraNet net;

// Persistent connection for state streaming
net.connect(umbraNet::makeIP(192, 168, 1, 100), 5000);
net.stateWrite(data, size);
net.stateRead(buf, maxLen);
net.disconnect();

// One-shot UDP send/recv
net.sendUDP(ip, port, data, len);
net.recvUDP(buf, maxLen);

// Start GDB server on the kernel (for programmatic use)
net.gdbStart(2159);

// GDB server + polling (see GDB section above)
umbra_gdb_auto_start(2159);
umbra_gdb_poll();

// Return to the Nintendont loader
ninReturnToLoader();
```

## Project Structure

```
umbra/
├── configure.py           # Build system configuration
├── setup_mod.py           # Mod scaffolding script
├── mod_config.py          # Generated mod build config (not checked in)
├── include/umbra/         # Umbra platform headers
├── src/umbra/             # Umbra platform source
├── include/<mod>/         # Your mod's headers
├── src/<mod>/             # Your mod's source
├── mod_assets/            # Custom assets copied into ISO
├── .vscode/launch.json        # VS Code debug configs (Nintendont + Dolphin)
├── tools/
│   ├── rebuild-decomp-tp.py    # ISO rebuild script
│   ├── patch_forceactive.py    # Auto-patches linker script with custom symbols
│   ├── check_mod_assets.py     # Asset checksum tracker
│   ├── gen_gdb_rel_loader.py   # Generates Python GDB symbol loader
│   └── gen_dwarf2_debug.py     # Converts MW DWARF 1 to DWARF 2 debug info
├── build/binutils/             # Cross-tools (powerpc-eabi-gdb, etc.)
└── orig/GZ2E01/           # Vanilla disc image (not checked in)
```
