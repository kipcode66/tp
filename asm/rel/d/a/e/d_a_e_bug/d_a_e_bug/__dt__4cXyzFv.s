lbl_80694F58:
/* 80694F58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80694F5C  7C 08 02 A6 */	mflr r0
/* 80694F60  90 01 00 14 */	stw r0, 0x14(r1)
/* 80694F64  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80694F68  7C 7F 1B 79 */	or. r31, r3, r3
/* 80694F6C  41 82 00 10 */	beq lbl_80694F7C
/* 80694F70  7C 80 07 35 */	extsh. r0, r4
/* 80694F74  40 81 00 08 */	ble lbl_80694F7C
/* 80694F78  4B C3 9D C4 */	b __dl__FPv
lbl_80694F7C:
/* 80694F7C  7F E3 FB 78 */	mr r3, r31
/* 80694F80  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80694F84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80694F88  7C 08 03 A6 */	mtlr r0
/* 80694F8C  38 21 00 10 */	addi r1, r1, 0x10
/* 80694F90  4E 80 00 20 */	blr 