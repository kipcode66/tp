lbl_8030B200:
/* 8030B200  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8030B204  7C 08 02 A6 */	mflr r0
/* 8030B208  90 01 00 44 */	stw r0, 0x44(r1)
/* 8030B20C  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8030B210  F3 E1 00 38 */	psq_st f31, 56(r1), 0, 0 /* qr0 */
/* 8030B214  39 61 00 30 */	addi r11, r1, 0x30
/* 8030B218  48 05 6F C5 */	bl _savegpr_29
/* 8030B21C  7C 7D 1B 78 */	mr r29, r3
/* 8030B220  7C BE 2B 78 */	mr r30, r5
/* 8030B224  80 63 00 40 */	lwz r3, 0x40(r3)
/* 8030B228  54 80 04 3E */	clrlwi r0, r4, 0x10
/* 8030B22C  1C 00 00 18 */	mulli r0, r0, 0x18
/* 8030B230  7F E3 02 14 */	add r31, r3, r0
/* 8030B234  A0 1F 00 00 */	lhz r0, 0(r31)
/* 8030B238  2C 00 00 01 */	cmpwi r0, 1
/* 8030B23C  41 82 00 20 */	beq lbl_8030B25C
/* 8030B240  40 80 00 34 */	bge lbl_8030B274
/* 8030B244  2C 00 00 00 */	cmpwi r0, 0
/* 8030B248  40 80 00 08 */	bge lbl_8030B250
/* 8030B24C  48 00 00 28 */	b lbl_8030B274
lbl_8030B250:
/* 8030B250  38 00 00 00 */	li r0, 0
/* 8030B254  98 1E 00 00 */	stb r0, 0(r30)
/* 8030B258  48 00 00 78 */	b lbl_8030B2D0
lbl_8030B25C:
/* 8030B25C  80 7D 00 30 */	lwz r3, 0x30(r29)
/* 8030B260  A0 1F 00 02 */	lhz r0, 2(r31)
/* 8030B264  54 00 08 3C */	slwi r0, r0, 1
/* 8030B268  7C 03 02 AE */	lhax r0, r3, r0
/* 8030B26C  98 1E 00 00 */	stb r0, 0(r30)
/* 8030B270  48 00 00 60 */	b lbl_8030B2D0
lbl_8030B274:
/* 8030B274  C0 3D 00 08 */	lfs f1, 8(r29)
/* 8030B278  7F E3 FB 78 */	mr r3, r31
/* 8030B27C  80 9D 00 30 */	lwz r4, 0x30(r29)
/* 8030B280  A0 1F 00 02 */	lhz r0, 2(r31)
/* 8030B284  54 00 08 3C */	slwi r0, r0, 1
/* 8030B288  7C 84 02 14 */	add r4, r4, r0
/* 8030B28C  48 00 14 F1 */	bl func_8030C77C
/* 8030B290  FF E0 08 90 */	fmr f31, f1
/* 8030B294  C0 02 C9 00 */	lfs f0, lit_1573(r2)
/* 8030B298  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8030B29C  40 80 00 10 */	bge lbl_8030B2AC
/* 8030B2A0  38 00 00 00 */	li r0, 0
/* 8030B2A4  98 1E 00 00 */	stb r0, 0(r30)
/* 8030B2A8  48 00 00 28 */	b lbl_8030B2D0
lbl_8030B2AC:
/* 8030B2AC  C0 02 C9 14 */	lfs f0, lit_1748(r2)
/* 8030B2B0  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8030B2B4  40 81 00 10 */	ble lbl_8030B2C4
/* 8030B2B8  38 00 00 FF */	li r0, 0xff
/* 8030B2BC  98 1E 00 00 */	stb r0, 0(r30)
/* 8030B2C0  48 00 00 10 */	b lbl_8030B2D0
lbl_8030B2C4:
/* 8030B2C4  F3 E1 A0 14 */	psq_st f31, 20(r1), 1, 2 /* qr2 */
/* 8030B2C8  88 01 00 14 */	lbz r0, 0x14(r1)
/* 8030B2CC  98 1E 00 00 */	stb r0, 0(r30)
lbl_8030B2D0:
/* 8030B2D0  A0 1F 00 06 */	lhz r0, 6(r31)
/* 8030B2D4  2C 00 00 01 */	cmpwi r0, 1
/* 8030B2D8  41 82 00 20 */	beq lbl_8030B2F8
/* 8030B2DC  40 80 00 34 */	bge lbl_8030B310
/* 8030B2E0  2C 00 00 00 */	cmpwi r0, 0
/* 8030B2E4  40 80 00 08 */	bge lbl_8030B2EC
/* 8030B2E8  48 00 00 28 */	b lbl_8030B310
lbl_8030B2EC:
/* 8030B2EC  38 00 00 00 */	li r0, 0
/* 8030B2F0  98 1E 00 01 */	stb r0, 1(r30)
/* 8030B2F4  48 00 00 78 */	b lbl_8030B36C
lbl_8030B2F8:
/* 8030B2F8  80 7D 00 34 */	lwz r3, 0x34(r29)
/* 8030B2FC  A0 1F 00 08 */	lhz r0, 8(r31)
/* 8030B300  54 00 08 3C */	slwi r0, r0, 1
/* 8030B304  7C 03 02 AE */	lhax r0, r3, r0
/* 8030B308  98 1E 00 01 */	stb r0, 1(r30)
/* 8030B30C  48 00 00 60 */	b lbl_8030B36C
lbl_8030B310:
/* 8030B310  C0 3D 00 08 */	lfs f1, 8(r29)
/* 8030B314  38 7F 00 06 */	addi r3, r31, 6
/* 8030B318  80 9D 00 34 */	lwz r4, 0x34(r29)
/* 8030B31C  A0 1F 00 08 */	lhz r0, 8(r31)
/* 8030B320  54 00 08 3C */	slwi r0, r0, 1
/* 8030B324  7C 84 02 14 */	add r4, r4, r0
/* 8030B328  48 00 14 55 */	bl func_8030C77C
/* 8030B32C  FF E0 08 90 */	fmr f31, f1
/* 8030B330  C0 02 C9 00 */	lfs f0, lit_1573(r2)
/* 8030B334  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8030B338  40 80 00 10 */	bge lbl_8030B348
/* 8030B33C  38 00 00 00 */	li r0, 0
/* 8030B340  98 1E 00 01 */	stb r0, 1(r30)
/* 8030B344  48 00 00 28 */	b lbl_8030B36C
lbl_8030B348:
/* 8030B348  C0 02 C9 14 */	lfs f0, lit_1748(r2)
/* 8030B34C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8030B350  40 81 00 10 */	ble lbl_8030B360
/* 8030B354  38 00 00 FF */	li r0, 0xff
/* 8030B358  98 1E 00 01 */	stb r0, 1(r30)
/* 8030B35C  48 00 00 10 */	b lbl_8030B36C
lbl_8030B360:
/* 8030B360  F3 E1 A0 10 */	psq_st f31, 16(r1), 1, 2 /* qr2 */
/* 8030B364  88 01 00 10 */	lbz r0, 0x10(r1)
/* 8030B368  98 1E 00 01 */	stb r0, 1(r30)
lbl_8030B36C:
/* 8030B36C  A0 1F 00 0C */	lhz r0, 0xc(r31)
/* 8030B370  2C 00 00 01 */	cmpwi r0, 1
/* 8030B374  41 82 00 20 */	beq lbl_8030B394
/* 8030B378  40 80 00 34 */	bge lbl_8030B3AC
/* 8030B37C  2C 00 00 00 */	cmpwi r0, 0
/* 8030B380  40 80 00 08 */	bge lbl_8030B388
/* 8030B384  48 00 00 28 */	b lbl_8030B3AC
lbl_8030B388:
/* 8030B388  38 00 00 00 */	li r0, 0
/* 8030B38C  98 1E 00 02 */	stb r0, 2(r30)
/* 8030B390  48 00 00 78 */	b lbl_8030B408
lbl_8030B394:
/* 8030B394  80 7D 00 38 */	lwz r3, 0x38(r29)
/* 8030B398  A0 1F 00 0E */	lhz r0, 0xe(r31)
/* 8030B39C  54 00 08 3C */	slwi r0, r0, 1
/* 8030B3A0  7C 03 02 AE */	lhax r0, r3, r0
/* 8030B3A4  98 1E 00 02 */	stb r0, 2(r30)
/* 8030B3A8  48 00 00 60 */	b lbl_8030B408
lbl_8030B3AC:
/* 8030B3AC  C0 3D 00 08 */	lfs f1, 8(r29)
/* 8030B3B0  38 7F 00 0C */	addi r3, r31, 0xc
/* 8030B3B4  80 9D 00 38 */	lwz r4, 0x38(r29)
/* 8030B3B8  A0 1F 00 0E */	lhz r0, 0xe(r31)
/* 8030B3BC  54 00 08 3C */	slwi r0, r0, 1
/* 8030B3C0  7C 84 02 14 */	add r4, r4, r0
/* 8030B3C4  48 00 13 B9 */	bl func_8030C77C
/* 8030B3C8  FF E0 08 90 */	fmr f31, f1
/* 8030B3CC  C0 02 C9 00 */	lfs f0, lit_1573(r2)
/* 8030B3D0  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8030B3D4  40 80 00 10 */	bge lbl_8030B3E4
/* 8030B3D8  38 00 00 00 */	li r0, 0
/* 8030B3DC  98 1E 00 02 */	stb r0, 2(r30)
/* 8030B3E0  48 00 00 28 */	b lbl_8030B408
lbl_8030B3E4:
/* 8030B3E4  C0 02 C9 14 */	lfs f0, lit_1748(r2)
/* 8030B3E8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8030B3EC  40 81 00 10 */	ble lbl_8030B3FC
/* 8030B3F0  38 00 00 FF */	li r0, 0xff
/* 8030B3F4  98 1E 00 02 */	stb r0, 2(r30)
/* 8030B3F8  48 00 00 10 */	b lbl_8030B408
lbl_8030B3FC:
/* 8030B3FC  F3 E1 A0 0C */	psq_st f31, 12(r1), 1, 2 /* qr2 */
/* 8030B400  88 01 00 0C */	lbz r0, 0xc(r1)
/* 8030B404  98 1E 00 02 */	stb r0, 2(r30)
lbl_8030B408:
/* 8030B408  A0 1F 00 12 */	lhz r0, 0x12(r31)
/* 8030B40C  2C 00 00 01 */	cmpwi r0, 1
/* 8030B410  41 82 00 20 */	beq lbl_8030B430
/* 8030B414  40 80 00 34 */	bge lbl_8030B448
/* 8030B418  2C 00 00 00 */	cmpwi r0, 0
/* 8030B41C  40 80 00 08 */	bge lbl_8030B424
/* 8030B420  48 00 00 28 */	b lbl_8030B448
lbl_8030B424:
/* 8030B424  38 00 00 00 */	li r0, 0
/* 8030B428  98 1E 00 03 */	stb r0, 3(r30)
/* 8030B42C  48 00 00 78 */	b lbl_8030B4A4
lbl_8030B430:
/* 8030B430  80 7D 00 3C */	lwz r3, 0x3c(r29)
/* 8030B434  A0 1F 00 14 */	lhz r0, 0x14(r31)
/* 8030B438  54 00 08 3C */	slwi r0, r0, 1
/* 8030B43C  7C 03 02 AE */	lhax r0, r3, r0
/* 8030B440  98 1E 00 03 */	stb r0, 3(r30)
/* 8030B444  48 00 00 60 */	b lbl_8030B4A4
lbl_8030B448:
/* 8030B448  C0 3D 00 08 */	lfs f1, 8(r29)
/* 8030B44C  38 7F 00 12 */	addi r3, r31, 0x12
/* 8030B450  80 9D 00 3C */	lwz r4, 0x3c(r29)
/* 8030B454  A0 1F 00 14 */	lhz r0, 0x14(r31)
/* 8030B458  54 00 08 3C */	slwi r0, r0, 1
/* 8030B45C  7C 84 02 14 */	add r4, r4, r0
/* 8030B460  48 00 13 1D */	bl func_8030C77C
/* 8030B464  FF E0 08 90 */	fmr f31, f1
/* 8030B468  C0 02 C9 00 */	lfs f0, lit_1573(r2)
/* 8030B46C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8030B470  40 80 00 10 */	bge lbl_8030B480
/* 8030B474  38 00 00 00 */	li r0, 0
/* 8030B478  98 1E 00 03 */	stb r0, 3(r30)
/* 8030B47C  48 00 00 28 */	b lbl_8030B4A4
lbl_8030B480:
/* 8030B480  C0 02 C9 14 */	lfs f0, lit_1748(r2)
/* 8030B484  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8030B488  40 81 00 10 */	ble lbl_8030B498
/* 8030B48C  38 00 00 FF */	li r0, 0xff
/* 8030B490  98 1E 00 03 */	stb r0, 3(r30)
/* 8030B494  48 00 00 10 */	b lbl_8030B4A4
lbl_8030B498:
/* 8030B498  F3 E1 A0 08 */	psq_st f31, 8(r1), 1, 2 /* qr2 */
/* 8030B49C  88 01 00 08 */	lbz r0, 8(r1)
/* 8030B4A0  98 1E 00 03 */	stb r0, 3(r30)
lbl_8030B4A4:
/* 8030B4A4  E3 E1 00 38 */	psq_l f31, 56(r1), 0, 0 /* qr0 */
/* 8030B4A8  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8030B4AC  39 61 00 30 */	addi r11, r1, 0x30
/* 8030B4B0  48 05 6D 79 */	bl _restgpr_29
/* 8030B4B4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8030B4B8  7C 08 03 A6 */	mtlr r0
/* 8030B4BC  38 21 00 40 */	addi r1, r1, 0x40
/* 8030B4C0  4E 80 00 20 */	blr 
