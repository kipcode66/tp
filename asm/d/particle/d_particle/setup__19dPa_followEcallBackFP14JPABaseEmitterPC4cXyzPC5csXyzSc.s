lbl_800496B4:
/* 800496B4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800496B8  7C 08 02 A6 */	mflr r0
/* 800496BC  90 01 00 24 */	stw r0, 0x24(r1)
/* 800496C0  39 61 00 20 */	addi r11, r1, 0x20
/* 800496C4  48 31 8B 15 */	bl _savegpr_28
/* 800496C8  7C 7C 1B 78 */	mr r28, r3
/* 800496CC  7C 9D 23 78 */	mr r29, r4
/* 800496D0  7C BE 2B 78 */	mr r30, r5
/* 800496D4  7C DF 33 78 */	mr r31, r6
/* 800496D8  81 83 00 00 */	lwz r12, 0(r3)
/* 800496DC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 800496E0  7D 89 03 A6 */	mtctr r12
/* 800496E4  4E 80 04 21 */	bctrl 
/* 800496E8  88 1C 00 13 */	lbz r0, 0x13(r28)
/* 800496EC  28 00 00 00 */	cmplwi r0, 0
/* 800496F0  40 82 00 14 */	bne lbl_80049704
/* 800496F4  93 BC 00 04 */	stw r29, 4(r28)
/* 800496F8  80 1D 00 F4 */	lwz r0, 0xf4(r29)
/* 800496FC  60 00 00 40 */	ori r0, r0, 0x40
/* 80049700  90 1D 00 F4 */	stw r0, 0xf4(r29)
lbl_80049704:
/* 80049704  88 1C 00 12 */	lbz r0, 0x12(r28)
/* 80049708  28 00 00 00 */	cmplwi r0, 0
/* 8004970C  40 82 00 28 */	bne lbl_80049734
/* 80049710  88 1C 00 11 */	lbz r0, 0x11(r28)
/* 80049714  28 00 00 00 */	cmplwi r0, 0
/* 80049718  41 82 00 0C */	beq lbl_80049724
/* 8004971C  38 00 00 00 */	li r0, 0
/* 80049720  90 1D 00 24 */	stw r0, 0x24(r29)
lbl_80049724:
/* 80049724  93 DC 00 08 */	stw r30, 8(r28)
/* 80049728  93 FC 00 0C */	stw r31, 0xc(r28)
/* 8004972C  38 00 00 00 */	li r0, 0
/* 80049730  98 1C 00 10 */	stb r0, 0x10(r28)
lbl_80049734:
/* 80049734  39 61 00 20 */	addi r11, r1, 0x20
/* 80049738  48 31 8A ED */	bl _restgpr_28
/* 8004973C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80049740  7C 08 03 A6 */	mtlr r0
/* 80049744  38 21 00 20 */	addi r1, r1, 0x20
/* 80049748  4E 80 00 20 */	blr 