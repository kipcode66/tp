lbl_802885DC:
/* 802885DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802885E0  7C 08 02 A6 */	mflr r0
/* 802885E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802885E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802885EC  93 C1 00 08 */	stw r30, 8(r1)
/* 802885F0  7C 7E 1B 79 */	or. r30, r3, r3
/* 802885F4  7C 9F 23 78 */	mr r31, r4
/* 802885F8  41 82 00 28 */	beq lbl_80288620
/* 802885FC  3C 80 80 3C */	lis r4, data_803C5650@ha
/* 80288600  38 04 56 50 */	addi r0, r4, data_803C5650@l
/* 80288604  90 1E 00 00 */	stw r0, 0(r30)
/* 80288608  38 80 00 00 */	li r4, 0
/* 8028860C  4B FF D8 01 */	bl __dt__Q37JStudio14TVariableValue7TOutputFv
/* 80288610  7F E0 07 35 */	extsh. r0, r31
/* 80288614  40 81 00 0C */	ble lbl_80288620
/* 80288618  7F C3 F3 78 */	mr r3, r30
/* 8028861C  48 04 67 21 */	bl __dl__FPv
lbl_80288620:
/* 80288620  7F C3 F3 78 */	mr r3, r30
/* 80288624  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80288628  83 C1 00 08 */	lwz r30, 8(r1)
/* 8028862C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80288630  7C 08 03 A6 */	mtlr r0
/* 80288634  38 21 00 10 */	addi r1, r1, 0x10
/* 80288638  4E 80 00 20 */	blr 