lbl_8058A9FC:
/* 8058A9FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8058AA00  7C 08 02 A6 */	mflr r0
/* 8058AA04  90 01 00 14 */	stw r0, 0x14(r1)
/* 8058AA08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8058AA0C  7C 7F 1B 79 */	or. r31, r3, r3
/* 8058AA10  41 82 00 30 */	beq lbl_8058AA40
/* 8058AA14  3C 60 80 59 */	lis r3, __vt__10dCcD_GStts@ha
/* 8058AA18  38 03 AE 58 */	addi r0, r3, __vt__10dCcD_GStts@l
/* 8058AA1C  90 1F 00 00 */	stw r0, 0(r31)
/* 8058AA20  41 82 00 10 */	beq lbl_8058AA30
/* 8058AA24  3C 60 80 59 */	lis r3, __vt__10cCcD_GStts@ha
/* 8058AA28  38 03 AE 4C */	addi r0, r3, __vt__10cCcD_GStts@l
/* 8058AA2C  90 1F 00 00 */	stw r0, 0(r31)
lbl_8058AA30:
/* 8058AA30  7C 80 07 35 */	extsh. r0, r4
/* 8058AA34  40 81 00 0C */	ble lbl_8058AA40
/* 8058AA38  7F E3 FB 78 */	mr r3, r31
/* 8058AA3C  4B D4 43 00 */	b __dl__FPv
lbl_8058AA40:
/* 8058AA40  7F E3 FB 78 */	mr r3, r31
/* 8058AA44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8058AA48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8058AA4C  7C 08 03 A6 */	mtlr r0
/* 8058AA50  38 21 00 10 */	addi r1, r1, 0x10
/* 8058AA54  4E 80 00 20 */	blr 