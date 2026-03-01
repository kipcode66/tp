set confirm off
file build/GZ2E01/framework.elf
source build/GZ2E01/load_rel_symbols.gdb
target remote 192.168.86.208:2159
load-all-symbols
