lbl_80005518:
/* 80005518  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8000551C  7C 08 02 A6 */	mflr r0
/* 80005520  38 60 00 00 */	li r3, 0
/* 80005524  38 80 00 00 */	li r4, 0
/* 80005528  90 01 00 14 */	stw r0, 0x14(r1)
/* 8000552C  38 A0 00 00 */	li r5, 0
/* 80005530  48 33 A3 7D */	bl OSResetSystem
/* 80005534  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80005538  7C 08 03 A6 */	mtlr r0
/* 8000553C  38 21 00 10 */	addi r1, r1, 0x10
/* 80005540  4E 80 00 20 */	blr 