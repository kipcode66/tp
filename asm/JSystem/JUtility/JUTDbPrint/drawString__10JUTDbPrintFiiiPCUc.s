lbl_802E0440:
/* 802E0440  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802E0444  7C 08 02 A6 */	mflr r0
/* 802E0448  90 01 00 54 */	stw r0, 0x54(r1)
/* 802E044C  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 802E0450  F3 E1 00 48 */	psq_st f31, 72(r1), 0, 0 /* qr0 */
/* 802E0454  39 61 00 40 */	addi r11, r1, 0x40
/* 802E0458  48 08 1D 7D */	bl _savegpr_27
/* 802E045C  7C 9B 23 78 */	mr r27, r4
/* 802E0460  7C BC 2B 78 */	mr r28, r5
/* 802E0464  7C DD 33 78 */	mr r29, r6
/* 802E0468  7C FE 3B 78 */	mr r30, r7
/* 802E046C  83 E3 00 04 */	lwz r31, 4(r3)
/* 802E0470  7F E3 FB 78 */	mr r3, r31
/* 802E0474  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E0478  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 802E047C  7D 89 03 A6 */	mtctr r12
/* 802E0480  4E 80 04 21 */	bctrl 
/* 802E0484  C8 22 C6 10 */	lfd f1, lit_838(r2)
/* 802E0488  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 802E048C  90 01 00 0C */	stw r0, 0xc(r1)
/* 802E0490  3C 00 43 30 */	lis r0, 0x4330
/* 802E0494  90 01 00 08 */	stw r0, 8(r1)
/* 802E0498  C8 01 00 08 */	lfd f0, 8(r1)
/* 802E049C  EF E0 08 28 */	fsubs f31, f0, f1
/* 802E04A0  7F E3 FB 78 */	mr r3, r31
/* 802E04A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802E04A8  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802E04AC  7D 89 03 A6 */	mtctr r12
/* 802E04B0  4E 80 04 21 */	bctrl 
/* 802E04B4  C8 42 C6 10 */	lfd f2, lit_838(r2)
/* 802E04B8  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 802E04BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E04C0  3C 80 43 30 */	lis r4, 0x4330
/* 802E04C4  90 81 00 10 */	stw r4, 0x10(r1)
/* 802E04C8  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 802E04CC  EC 60 10 28 */	fsubs f3, f0, f2
/* 802E04D0  7F E3 FB 78 */	mr r3, r31
/* 802E04D4  6F 60 80 00 */	xoris r0, r27, 0x8000
/* 802E04D8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 802E04DC  90 81 00 18 */	stw r4, 0x18(r1)
/* 802E04E0  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 802E04E4  EC 20 10 28 */	fsubs f1, f0, f2
/* 802E04E8  6F 80 80 00 */	xoris r0, r28, 0x8000
/* 802E04EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802E04F0  90 81 00 20 */	stw r4, 0x20(r1)
/* 802E04F4  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 802E04F8  EC 40 10 28 */	fsubs f2, f0, f2
/* 802E04FC  FC 80 F8 90 */	fmr f4, f31
/* 802E0500  7F C4 F3 78 */	mr r4, r30
/* 802E0504  7F A5 EB 78 */	mr r5, r29
/* 802E0508  38 C0 00 01 */	li r6, 1
/* 802E050C  4B FF E9 1D */	bl drawString_size_scale__7JUTFontFffffPCcUlb
/* 802E0510  E3 E1 00 48 */	psq_l f31, 72(r1), 0, 0 /* qr0 */
/* 802E0514  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 802E0518  39 61 00 40 */	addi r11, r1, 0x40
/* 802E051C  48 08 1D 05 */	bl _restgpr_27
/* 802E0520  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802E0524  7C 08 03 A6 */	mtlr r0
/* 802E0528  38 21 00 50 */	addi r1, r1, 0x50
/* 802E052C  4E 80 00 20 */	blr 