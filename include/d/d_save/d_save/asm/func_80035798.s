/* 80035798 000326D8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8003579C 000326DC  7C 08 02 A6 */	mflr r0
/* 800357A0 000326E0  90 01 00 34 */	stw r0, 0x34(r1)
/* 800357A4 000326E4  39 61 00 30 */	addi r11, r1, 0x30
/* 800357A8 000326E8  48 32 CA 19 */	bl _savegpr_22
/* 800357AC 000326EC  7C 9C 23 78 */	mr r28, r4
/* 800357B0 000326F0  7C B8 2B 78 */	mr r24, r5
/* 800357B4 000326F4  3A C0 00 00 */	li r22, 0
/* 800357B8 000326F8  3B C0 00 00 */	li r30, 0
/* 800357BC 000326FC  3B E0 00 00 */	li r31, 0
/* 800357C0 00032700  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 800357C4 00032704  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 800357C8 00032708  3B A3 07 F0 */	addi r29, r3, 0x7f0
/* 800357CC 0003270C  7F A3 EB 78 */	mr r3, r29
/* 800357D0 00032710  3C 80 80 3A */	lis r4, lbl_803A7288@ha
/* 800357D4 00032714  38 84 72 88 */	addi r4, r4, lbl_803A7288@l
/* 800357D8 00032718  A0 84 01 C4 */	lhz r4, 0x1c4(r4)
/* 800357DC 0003271C  4B FF F1 E1 */	bl isEventBit__11dSv_event_cCFUs
/* 800357E0 00032720  2C 03 00 00 */	cmpwi r3, 0
/* 800357E4 00032724  40 82 00 50 */	bne lbl_80035834
/* 800357E8 00032728  7F A3 EB 78 */	mr r3, r29
/* 800357EC 0003272C  3C 80 80 3A */	lis r4, lbl_803A7288@ha
/* 800357F0 00032730  3B 24 72 88 */	addi r25, r4, lbl_803A7288@l
/* 800357F4 00032734  A0 99 01 C0 */	lhz r4, 0x1c0(r25)
/* 800357F8 00032738  4B FF F1 C5 */	bl isEventBit__11dSv_event_cCFUs
/* 800357FC 0003273C  7C 7B 1B 78 */	mr r27, r3
/* 80035800 00032740  7F A3 EB 78 */	mr r3, r29
/* 80035804 00032744  3C 80 80 3A */	lis r4, lbl_803A7288@ha
/* 80035808 00032748  3A C4 72 88 */	addi r22, r4, lbl_803A7288@l
/* 8003580C 0003274C  A0 96 01 C2 */	lhz r4, 0x1c2(r22)
/* 80035810 00032750  4B FF F1 AD */	bl isEventBit__11dSv_event_cCFUs
/* 80035814 00032754  7C 77 1B 78 */	mr r23, r3
/* 80035818 00032758  7F A3 EB 78 */	mr r3, r29
/* 8003581C 0003275C  A0 99 01 C0 */	lhz r4, 0x1c0(r25)
/* 80035820 00032760  4B FF F1 85 */	bl offEventBit__11dSv_event_cFUs
/* 80035824 00032764  7F A3 EB 78 */	mr r3, r29
/* 80035828 00032768  A0 96 01 C2 */	lhz r4, 0x1c2(r22)
/* 8003582C 0003276C  4B FF F1 79 */	bl offEventBit__11dSv_event_cFUs
/* 80035830 00032770  3A C0 00 01 */	li r22, 1
lbl_80035834:
/* 80035834 00032774  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80035838 00032778  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 8003583C 0003277C  38 63 00 CC */	addi r3, r3, 0xcc
/* 80035840 00032780  38 80 00 48 */	li r4, 0x48
/* 80035844 00032784  4B FF E6 85 */	bl isFirstBit__21dSv_player_get_item_cCFUc
/* 80035848 00032788  2C 03 00 00 */	cmpwi r3, 0
/* 8003584C 0003278C  41 82 00 5C */	beq lbl_800358A8
/* 80035850 00032790  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80035854 00032794  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80035858 00032798  3B 23 00 9C */	addi r25, r3, 0x9c
/* 8003585C 0003279C  7F 23 CB 78 */	mr r3, r25
/* 80035860 000327A0  38 80 00 01 */	li r4, 1
/* 80035864 000327A4  38 A0 00 01 */	li r5, 1
/* 80035868 000327A8  4B FF D7 C9 */	bl getItem__17dSv_player_item_cCFib
/* 8003586C 000327AC  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80035870 000327B0  28 00 00 FF */	cmplwi r0, 0xff
/* 80035874 000327B4  40 82 00 34 */	bne lbl_800358A8
/* 80035878 000327B8  7F 23 CB 78 */	mr r3, r25
/* 8003587C 000327BC  38 80 00 01 */	li r4, 1
/* 80035880 000327C0  38 A0 00 48 */	li r5, 0x48
/* 80035884 000327C4  4B FF D7 35 */	bl setItem__17dSv_player_item_cFiUc
/* 80035888 000327C8  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 8003588C 000327CC  38 83 61 C0 */	addi r4, r3, g_dComIfG_gameInfo@l
/* 80035890 000327D0  A3 E4 00 08 */	lhz r31, 8(r4)
/* 80035894 000327D4  3C 60 80 43 */	lis r3, lbl_80430188@ha
/* 80035898 000327D8  38 63 01 88 */	addi r3, r3, lbl_80430188@l
/* 8003589C 000327DC  A0 03 00 B6 */	lhz r0, 0xb6(r3)
/* 800358A0 000327E0  B0 04 00 08 */	sth r0, 8(r4)
/* 800358A4 000327E4  3B C0 00 01 */	li r30, 1
lbl_800358A8:
/* 800358A8 000327E8  1C 18 0A 94 */	mulli r0, r24, 0xa94
/* 800358AC 000327EC  7F 9C 02 14 */	add r28, r28, r0
/* 800358B0 000327F0  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 800358B4 000327F4  3B 03 61 C0 */	addi r24, r3, g_dComIfG_gameInfo@l
/* 800358B8 000327F8  83 38 0F 28 */	lwz r25, 0xf28(r24)
/* 800358BC 000327FC  83 58 0F 2C */	lwz r26, 0xf2c(r24)
/* 800358C0 00032800  48 30 CE 3D */	bl OSGetTime
/* 800358C4 00032804  7C BA 20 10 */	subfc r5, r26, r4
/* 800358C8 00032808  7C 19 19 10 */	subfe r0, r25, r3
/* 800358CC 0003280C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 800358D0 00032810  38 83 61 C0 */	addi r4, r3, g_dComIfG_gameInfo@l
/* 800358D4 00032814  80 64 0F 30 */	lwz r3, 0xf30(r4)
/* 800358D8 00032818  80 84 0F 34 */	lwz r4, 0xf34(r4)
/* 800358DC 0003281C  7F 25 20 14 */	addc r25, r5, r4
/* 800358E0 00032820  7F 40 19 14 */	adde r26, r0, r3
/* 800358E4 00032824  3C A0 80 00 */	lis r5, 0x800000F8@ha
/* 800358E8 00032828  80 05 00 F8 */	lwz r0, 0x800000F8@l(r5)
/* 800358EC 0003282C  54 06 F0 BE */	srwi r6, r0, 2
/* 800358F0 00032830  38 A0 00 00 */	li r5, 0
/* 800358F4 00032834  48 32 CA 31 */	bl func_80362324
/* 800358F8 00032838  3C A0 00 37 */	lis r5, 0x0036EE44@ha
/* 800358FC 0003283C  38 C5 EE 44 */	addi r6, r5, 0x0036EE44@l
/* 80035900 00032840  38 00 00 00 */	li r0, 0
/* 80035904 00032844  6C 65 80 00 */	xoris r5, r3, 0x8000
/* 80035908 00032848  6C 03 80 00 */	xoris r3, r0, 0x8000
/* 8003590C 0003284C  7C 06 20 10 */	subfc r0, r6, r4
/* 80035910 00032850  7C 63 29 10 */	subfe r3, r3, r5
/* 80035914 00032854  7C 65 29 10 */	subfe r3, r5, r5
/* 80035918 00032858  7C 63 00 D1 */	neg. r3, r3
/* 8003591C 0003285C  41 82 00 0C */	beq lbl_80035928
/* 80035920 00032860  93 38 01 AC */	stw r25, 0x1ac(r24)
/* 80035924 00032864  93 58 01 A8 */	stw r26, 0x1a8(r24)
lbl_80035928:
/* 80035928 00032868  48 30 CD D5 */	bl OSGetTime
/* 8003592C 0003286C  90 98 00 2C */	stw r4, 0x2c(r24)
/* 80035930 00032870  90 78 00 28 */	stw r3, 0x28(r24)
/* 80035934 00032874  7F 83 E3 78 */	mr r3, r28
/* 80035938 00032878  7F 04 C3 78 */	mr r4, r24
/* 8003593C 0003287C  38 A0 09 58 */	li r5, 0x958
/* 80035940 00032880  4B FC DC 01 */	bl memcpy
/* 80035944 00032884  3C 60 80 38 */	lis r3, lbl_80379234@ha
/* 80035948 00032888  38 63 92 34 */	addi r3, r3, lbl_80379234@l
/* 8003594C 0003288C  38 63 00 29 */	addi r3, r3, 0x29
/* 80035950 00032890  38 80 09 58 */	li r4, 0x958
/* 80035954 00032894  4C C6 31 82 */	crclr 6
/* 80035958 00032898  48 33 0F 25 */	bl func_8036687C
/* 8003595C 0003289C  56 C0 06 3E */	clrlwi r0, r22, 0x18
/* 80035960 000328A0  28 00 00 01 */	cmplwi r0, 1
/* 80035964 000328A4  40 82 00 3C */	bne lbl_800359A0
/* 80035968 000328A8  2C 1B 00 00 */	cmpwi r27, 0
/* 8003596C 000328AC  41 82 00 18 */	beq lbl_80035984
/* 80035970 000328B0  7F A3 EB 78 */	mr r3, r29
/* 80035974 000328B4  3C 80 80 3A */	lis r4, lbl_803A7288@ha
/* 80035978 000328B8  38 84 72 88 */	addi r4, r4, lbl_803A7288@l
/* 8003597C 000328BC  A0 84 01 C0 */	lhz r4, 0x1c0(r4)
/* 80035980 000328C0  4B FF F0 0D */	bl onEventBit__11dSv_event_cFUs
lbl_80035984:
/* 80035984 000328C4  2C 17 00 00 */	cmpwi r23, 0
/* 80035988 000328C8  41 82 00 18 */	beq lbl_800359A0
/* 8003598C 000328CC  7F A3 EB 78 */	mr r3, r29
/* 80035990 000328D0  3C 80 80 3A */	lis r4, lbl_803A7288@ha
/* 80035994 000328D4  38 84 72 88 */	addi r4, r4, lbl_803A7288@l
/* 80035998 000328D8  A0 84 01 C2 */	lhz r4, 0x1c2(r4)
/* 8003599C 000328DC  4B FF EF F1 */	bl onEventBit__11dSv_event_cFUs
lbl_800359A0:
/* 800359A0 000328E0  57 C0 06 3E */	clrlwi r0, r30, 0x18
/* 800359A4 000328E4  28 00 00 01 */	cmplwi r0, 1
/* 800359A8 000328E8  40 82 00 28 */	bne lbl_800359D0
/* 800359AC 000328EC  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 800359B0 000328F0  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 800359B4 000328F4  38 63 00 9C */	addi r3, r3, 0x9c
/* 800359B8 000328F8  38 80 00 01 */	li r4, 1
/* 800359BC 000328FC  38 A0 00 FF */	li r5, 0xff
/* 800359C0 00032900  4B FF D5 F9 */	bl setItem__17dSv_player_item_cFiUc
/* 800359C4 00032904  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 800359C8 00032908  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 800359CC 0003290C  B3 E3 00 08 */	sth r31, 8(r3)
lbl_800359D0:
/* 800359D0 00032910  3C 60 80 38 */	lis r3, lbl_80379234@ha
/* 800359D4 00032914  38 63 92 34 */	addi r3, r3, lbl_80379234@l
/* 800359D8 00032918  38 63 00 38 */	addi r3, r3, 0x38
/* 800359DC 0003291C  38 80 09 58 */	li r4, 0x958
/* 800359E0 00032920  4C C6 31 82 */	crclr 6
/* 800359E4 00032924  48 33 0E 99 */	bl func_8036687C
/* 800359E8 00032928  38 60 00 00 */	li r3, 0
/* 800359EC 0003292C  39 61 00 30 */	addi r11, r1, 0x30
/* 800359F0 00032930  48 32 C8 1D */	bl _restgpr_22
/* 800359F4 00032934  80 01 00 34 */	lwz r0, 0x34(r1)
/* 800359F8 00032938  7C 08 03 A6 */	mtlr r0
/* 800359FC 0003293C  38 21 00 30 */	addi r1, r1, 0x30
/* 80035A00 00032940  4E 80 00 20 */	blr 