lbl_801AFE34:
/* 801AFE34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801AFE38  7C 08 02 A6 */	mflr r0
/* 801AFE3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801AFE40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801AFE44  93 C1 00 08 */	stw r30, 8(r1)
/* 801AFE48  7C 7E 1B 79 */	or. r30, r3, r3
/* 801AFE4C  7C 9F 23 78 */	mr r31, r4
/* 801AFE50  41 82 00 38 */	beq lbl_801AFE88
/* 801AFE54  3C 60 80 3C */	lis r3, __vt__17dMenu_Collect2D_c@ha /* 0x803BC7C4@ha */
/* 801AFE58  38 03 C7 C4 */	addi r0, r3, __vt__17dMenu_Collect2D_c@l /* 0x803BC7C4@l */
/* 801AFE5C  90 1E 00 00 */	stw r0, 0(r30)
/* 801AFE60  80 7E 00 08 */	lwz r3, 8(r30)
/* 801AFE64  28 03 00 00 */	cmplwi r3, 0
/* 801AFE68  41 82 00 10 */	beq lbl_801AFE78
/* 801AFE6C  4B E5 F3 41 */	bl mDoExt_destroyExpHeap__FP10JKRExpHeap
/* 801AFE70  38 00 00 00 */	li r0, 0
/* 801AFE74  90 1E 00 08 */	stw r0, 8(r30)
lbl_801AFE78:
/* 801AFE78  7F E0 07 35 */	extsh. r0, r31
/* 801AFE7C  40 81 00 0C */	ble lbl_801AFE88
/* 801AFE80  7F C3 F3 78 */	mr r3, r30
/* 801AFE84  48 11 EE B9 */	bl __dl__FPv
lbl_801AFE88:
/* 801AFE88  7F C3 F3 78 */	mr r3, r30
/* 801AFE8C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801AFE90  83 C1 00 08 */	lwz r30, 8(r1)
/* 801AFE94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801AFE98  7C 08 03 A6 */	mtlr r0
/* 801AFE9C  38 21 00 10 */	addi r1, r1, 0x10
/* 801AFEA0  4E 80 00 20 */	blr 
