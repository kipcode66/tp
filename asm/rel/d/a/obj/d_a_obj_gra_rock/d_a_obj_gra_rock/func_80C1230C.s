lbl_80C1230C:
/* 80C1230C  88 83 00 00 */	lbz r4, 0(r3)
/* 80C12310  28 04 00 00 */	cmplwi r4, 0
/* 80C12314  41 82 00 0C */	beq lbl_80C12320
/* 80C12318  38 04 FF FF */	addi r0, r4, -1
/* 80C1231C  98 03 00 00 */	stb r0, 0(r3)
lbl_80C12320:
/* 80C12320  88 63 00 00 */	lbz r3, 0(r3)
/* 80C12324  4E 80 00 20 */	blr 