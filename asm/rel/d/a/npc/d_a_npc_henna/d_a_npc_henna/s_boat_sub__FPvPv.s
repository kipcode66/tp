lbl_80548640:
/* 80548640  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80548644  7C 08 02 A6 */	mflr r0
/* 80548648  90 01 00 14 */	stw r0, 0x14(r1)
/* 8054864C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80548650  7C 7F 1B 78 */	mr r31, r3
/* 80548654  4B AD 06 8C */	b fopAc_IsActor__FPv
/* 80548658  2C 03 00 00 */	cmpwi r3, 0
/* 8054865C  41 82 00 18 */	beq lbl_80548674
/* 80548660  A8 1F 00 08 */	lha r0, 8(r31)
/* 80548664  2C 00 00 ED */	cmpwi r0, 0xed
/* 80548668  40 82 00 0C */	bne lbl_80548674
/* 8054866C  7F E3 FB 78 */	mr r3, r31
/* 80548670  48 00 00 08 */	b lbl_80548678
lbl_80548674:
/* 80548674  38 60 00 00 */	li r3, 0
lbl_80548678:
/* 80548678  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8054867C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80548680  7C 08 03 A6 */	mtlr r0
/* 80548684  38 21 00 10 */	addi r1, r1, 0x10
/* 80548688  4E 80 00 20 */	blr 