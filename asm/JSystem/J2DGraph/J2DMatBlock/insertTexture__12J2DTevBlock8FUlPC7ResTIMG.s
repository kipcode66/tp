lbl_802F21C4:
/* 802F21C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F21C8  7C 08 02 A6 */	mflr r0
/* 802F21CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F21D0  38 C0 00 00 */	li r6, 0
/* 802F21D4  81 83 00 00 */	lwz r12, 0(r3)
/* 802F21D8  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 802F21DC  7D 89 03 A6 */	mtctr r12
/* 802F21E0  4E 80 04 21 */	bctrl 
/* 802F21E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F21E8  7C 08 03 A6 */	mtlr r0
/* 802F21EC  38 21 00 10 */	addi r1, r1, 0x10
/* 802F21F0  4E 80 00 20 */	blr 