lbl_80323080:
/* 80323080  88 05 00 00 */	lbz r0, 0(r5)
/* 80323084  54 84 10 3A */	slwi r4, r4, 2
/* 80323088  7C 63 22 14 */	add r3, r3, r4
/* 8032308C  98 03 00 20 */	stb r0, 0x20(r3)
/* 80323090  88 05 00 01 */	lbz r0, 1(r5)
/* 80323094  98 03 00 21 */	stb r0, 0x21(r3)
/* 80323098  88 05 00 02 */	lbz r0, 2(r5)
/* 8032309C  98 03 00 22 */	stb r0, 0x22(r3)
/* 803230A0  88 05 00 03 */	lbz r0, 3(r5)
/* 803230A4  98 03 00 23 */	stb r0, 0x23(r3)
/* 803230A8  4E 80 00 20 */	blr 