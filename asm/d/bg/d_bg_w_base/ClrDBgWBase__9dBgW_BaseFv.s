lbl_8007E69C:
/* 8007E69C  38 80 00 FF */	li r4, 0xff
/* 8007E6A0  98 83 00 09 */	stb r4, 9(r3)
/* 8007E6A4  38 00 00 02 */	li r0, 2
/* 8007E6A8  98 03 00 08 */	stb r0, 8(r3)
/* 8007E6AC  98 83 00 0A */	stb r4, 0xa(r3)
/* 8007E6B0  38 80 00 00 */	li r4, 0
/* 8007E6B4  B0 83 00 0E */	sth r4, 0xe(r3)
/* 8007E6B8  B0 83 00 0C */	sth r4, 0xc(r3)
/* 8007E6BC  90 83 00 10 */	stw r4, 0x10(r3)
/* 8007E6C0  38 00 00 01 */	li r0, 1
/* 8007E6C4  98 03 00 14 */	stb r0, 0x14(r3)
/* 8007E6C8  98 83 00 0B */	stb r4, 0xb(r3)
/* 8007E6CC  4E 80 00 20 */	blr 
