lbl_80075374:
/* 80075374  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80075378  7C 08 02 A6 */	mflr r0
/* 8007537C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80075380  39 61 00 20 */	addi r11, r1, 0x20
/* 80075384  48 2E CE 4D */	bl _savegpr_26
/* 80075388  7C 7A 1B 78 */	mr r26, r3
/* 8007538C  7C 9B 23 78 */	mr r27, r4
/* 80075390  7F 63 DB 78 */	mr r3, r27
/* 80075394  48 00 1F 99 */	bl CalcWallRR__9dBgS_AcchFv
/* 80075398  7F 63 DB 78 */	mr r3, r27
/* 8007539C  48 00 1F 4D */	bl CalcMovePosWork__9dBgS_AcchFv
/* 800753A0  3B E0 00 00 */	li r31, 0
lbl_800753A4:
/* 800753A4  7F 5E D3 78 */	mr r30, r26
/* 800753A8  3B A0 00 00 */	li r29, 0
lbl_800753AC:
/* 800753AC  88 1E 00 04 */	lbz r0, 4(r30)
/* 800753B0  28 00 00 00 */	cmplwi r0, 0
/* 800753B4  41 82 00 B4 */	beq lbl_80075468
/* 800753B8  80 7E 00 00 */	lwz r3, 0(r30)
/* 800753BC  81 83 00 04 */	lwz r12, 4(r3)
/* 800753C0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 800753C4  7D 89 03 A6 */	mtctr r12
/* 800753C8  4E 80 04 21 */	bctrl 
/* 800753CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800753D0  40 82 00 98 */	bne lbl_80075468
/* 800753D4  83 9E 00 00 */	lwz r28, 0(r30)
/* 800753D8  88 1C 00 08 */	lbz r0, 8(r28)
/* 800753DC  7C 00 F8 00 */	cmpw r0, r31
/* 800753E0  40 82 00 88 */	bne lbl_80075468
/* 800753E4  7F 63 DB 78 */	mr r3, r27
/* 800753E8  80 9E 00 08 */	lwz r4, 8(r30)
/* 800753EC  48 1F 27 F1 */	bl ChkSameActorPid__8cBgS_ChkCFUi
/* 800753F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 800753F4  40 82 00 74 */	bne lbl_80075468
/* 800753F8  80 1B 00 2C */	lwz r0, 0x2c(r27)
/* 800753FC  54 00 02 D7 */	rlwinm. r0, r0, 0, 0xb, 0xb
/* 80075400  41 82 00 3C */	beq lbl_8007543C
/* 80075404  7F 83 E3 78 */	mr r3, r28
/* 80075408  81 9C 00 04 */	lwz r12, 4(r28)
/* 8007540C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80075410  7D 89 03 A6 */	mtctr r12
/* 80075414  4E 80 04 21 */	bctrl 
/* 80075418  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8007541C  41 82 00 4C */	beq lbl_80075468
/* 80075420  7F 83 E3 78 */	mr r3, r28
/* 80075424  81 9C 00 04 */	lwz r12, 4(r28)
/* 80075428  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8007542C  7D 89 03 A6 */	mtctr r12
/* 80075430  4E 80 04 21 */	bctrl 
/* 80075434  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80075438  40 82 00 30 */	bne lbl_80075468
lbl_8007543C:
/* 8007543C  7F 63 DB 78 */	mr r3, r27
/* 80075440  7F A4 EB 78 */	mr r4, r29
/* 80075444  80 BE 00 00 */	lwz r5, 0(r30)
/* 80075448  80 DE 00 08 */	lwz r6, 8(r30)
/* 8007544C  48 00 1E 2D */	bl SetNowActorInfo__9dBgS_AcchFiPvUi
/* 80075450  7F 83 E3 78 */	mr r3, r28
/* 80075454  7F 64 DB 78 */	mr r4, r27
/* 80075458  81 9C 00 04 */	lwz r12, 4(r28)
/* 8007545C  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80075460  7D 89 03 A6 */	mtctr r12
/* 80075464  4E 80 04 21 */	bctrl 
lbl_80075468:
/* 80075468  3B BD 00 01 */	addi r29, r29, 1
/* 8007546C  2C 1D 01 00 */	cmpwi r29, 0x100
/* 80075470  3B DE 00 14 */	addi r30, r30, 0x14
/* 80075474  41 80 FF 38 */	blt lbl_800753AC
/* 80075478  3B FF 00 01 */	addi r31, r31, 1
/* 8007547C  2C 1F 00 03 */	cmpwi r31, 3
/* 80075480  41 80 FF 24 */	blt lbl_800753A4
/* 80075484  39 61 00 20 */	addi r11, r1, 0x20
/* 80075488  48 2E CD 95 */	bl _restgpr_26
/* 8007548C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80075490  7C 08 03 A6 */	mtlr r0
/* 80075494  38 21 00 20 */	addi r1, r1, 0x20
/* 80075498  4E 80 00 20 */	blr 