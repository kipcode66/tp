lbl_80321F00:
/* 80321F00  88 05 00 00 */	lbz r0, 0(r5)
/* 80321F04  7C 63 22 14 */	add r3, r3, r4
/* 80321F08  98 03 01 2A */	stb r0, 0x12a(r3)
/* 80321F0C  4E 80 00 20 */	blr 