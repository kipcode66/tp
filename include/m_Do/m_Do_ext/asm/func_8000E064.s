/* 8000E064 0000AFA4  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8000E068 0000AFA8  7C 08 02 A6 */ mflr r0
/* 8000E06C 0000AFAC  90 01 00 14 */ stw r0, 0x14(r1)
/* 8000E070 0000AFB0  93 E1 00 0C */ stw r31, 0xc(r1)
/* 8000E074 0000AFB4  7C 7F 1B 79 */ or. r31, r3, r3
/* 8000E078 0000AFB8  41 82 00 10 */ beq lbl_8000E088
/* 8000E07C 0000AFBC  7C 80 07 35 */ extsh. r0, r4
/* 8000E080 0000AFC0  40 81 00 08 */ ble lbl_8000E088
/* 8000E084 0000AFC4  48 2C 0C B9 */ bl __dl__FPv
lbl_8000E088:
/* 8000E088 0000AFC8  7F E3 FB 78 */ mr r3, r31
/* 8000E08C 0000AFCC  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 8000E090 0000AFD0  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8000E094 0000AFD4  7C 08 03 A6 */ mtlr r0
/* 8000E098 0000AFD8  38 21 00 10 */ addi r1, r1, 0x10
/* 8000E09C 0000AFDC  4E 80 00 20 */ blr