lbl_802855AC:
/* 802855AC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802855B0  7C 08 02 A6 */	mflr r0
/* 802855B4  90 01 00 54 */	stw r0, 0x54(r1)
/* 802855B8  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802855BC  7C 9F 23 78 */	mr r31, r4
/* 802855C0  38 03 00 08 */	addi r0, r3, 8
/* 802855C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 802855C8  90 01 00 20 */	stw r0, 0x20(r1)
/* 802855CC  90 01 00 34 */	stw r0, 0x34(r1)
/* 802855D0  90 01 00 30 */	stw r0, 0x30(r1)
/* 802855D4  80 63 00 08 */	lwz r3, 8(r3)
/* 802855D8  90 61 00 1C */	stw r3, 0x1c(r1)
/* 802855DC  90 61 00 18 */	stw r3, 0x18(r1)
/* 802855E0  90 61 00 2C */	stw r3, 0x2c(r1)
/* 802855E4  90 61 00 28 */	stw r3, 0x28(r1)
/* 802855E8  90 61 00 3C */	stw r3, 0x3c(r1)
/* 802855EC  90 01 00 40 */	stw r0, 0x40(r1)
/* 802855F0  48 00 00 3C */	b lbl_8028562C
lbl_802855F4:
/* 802855F4  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 802855F8  38 64 FF FC */	addi r3, r4, -4
/* 802855FC  80 04 00 00 */	lwz r0, 0(r4)
/* 80285600  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80285604  38 81 00 38 */	addi r4, r1, 0x38
/* 80285608  7F E5 FB 78 */	mr r5, r31
/* 8028560C  81 83 00 00 */	lwz r12, 0(r3)
/* 80285610  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80285614  7D 89 03 A6 */	mtctr r12
/* 80285618  4E 80 04 21 */	bctrl 
/* 8028561C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80285620  41 82 00 0C */	beq lbl_8028562C
/* 80285624  80 61 00 38 */	lwz r3, 0x38(r1)
/* 80285628  48 00 00 30 */	b lbl_80285658
lbl_8028562C:
/* 8028562C  80 61 00 40 */	lwz r3, 0x40(r1)
/* 80285630  90 61 00 14 */	stw r3, 0x14(r1)
/* 80285634  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 80285638  90 01 00 10 */	stw r0, 0x10(r1)
/* 8028563C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80285640  90 01 00 08 */	stw r0, 8(r1)
/* 80285644  7C 00 18 50 */	subf r0, r0, r3
/* 80285648  7C 00 00 34 */	cntlzw r0, r0
/* 8028564C  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 80285650  41 82 FF A4 */	beq lbl_802855F4
/* 80285654  38 60 00 00 */	li r3, 0
lbl_80285658:
/* 80285658  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8028565C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80285660  7C 08 03 A6 */	mtlr r0
/* 80285664  38 21 00 50 */	addi r1, r1, 0x50
/* 80285668  4E 80 00 20 */	blr 