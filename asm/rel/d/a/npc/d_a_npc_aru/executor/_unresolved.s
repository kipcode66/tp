lbl_809516F8:
/* 809516F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809516FC  7C 08 02 A6 */	mflr r0
/* 80951700  90 01 00 14 */	stw r0, 0x14(r1)
/* 80951704  4B 91 19 8C */	b ModuleUnresolved
/* 80951708  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8095170C  7C 08 03 A6 */	mtlr r0
/* 80951710  38 21 00 10 */	addi r1, r1, 0x10
/* 80951714  4E 80 00 20 */	blr 