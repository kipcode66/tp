lbl_800620AC:
/* 800620AC  94 21 FE C0 */	stwu r1, -0x140(r1)
/* 800620B0  7C 08 02 A6 */	mflr r0
/* 800620B4  90 01 01 44 */	stw r0, 0x144(r1)
/* 800620B8  DB E1 01 30 */	stfd f31, 0x130(r1)
/* 800620BC  F3 E1 01 38 */	psq_st f31, 312(r1), 0, 0 /* qr0 */
/* 800620C0  DB C1 01 20 */	stfd f30, 0x120(r1)
/* 800620C4  F3 C1 01 28 */	psq_st f30, 296(r1), 0, 0 /* qr0 */
/* 800620C8  DB A1 01 10 */	stfd f29, 0x110(r1)
/* 800620CC  F3 A1 01 18 */	psq_st f29, 280(r1), 0, 0 /* qr0 */
/* 800620D0  DB 81 01 00 */	stfd f28, 0x100(r1)
/* 800620D4  F3 81 01 08 */	psq_st f28, 264(r1), 0, 0 /* qr0 */
/* 800620D8  DB 61 00 F0 */	stfd f27, 0xf0(r1)
/* 800620DC  F3 61 00 F8 */	psq_st f27, 248(r1), 0, 0 /* qr0 */
/* 800620E0  DB 41 00 E0 */	stfd f26, 0xe0(r1)
/* 800620E4  F3 41 00 E8 */	psq_st f26, 232(r1), 0, 0 /* qr0 */
/* 800620E8  DB 21 00 D0 */	stfd f25, 0xd0(r1)
/* 800620EC  F3 21 00 D8 */	psq_st f25, 216(r1), 0, 0 /* qr0 */
/* 800620F0  DB 01 00 C0 */	stfd f24, 0xc0(r1)
/* 800620F4  F3 01 00 C8 */	psq_st f24, 200(r1), 0, 0 /* qr0 */
/* 800620F8  DA E1 00 B0 */	stfd f23, 0xb0(r1)
/* 800620FC  F2 E1 00 B8 */	psq_st f23, 184(r1), 0, 0 /* qr0 */
/* 80062100  DA C1 00 A0 */	stfd f22, 0xa0(r1)
/* 80062104  F2 C1 00 A8 */	psq_st f22, 168(r1), 0, 0 /* qr0 */
/* 80062108  DA A1 00 90 */	stfd f21, 0x90(r1)
/* 8006210C  F2 A1 00 98 */	psq_st f21, 152(r1), 0, 0 /* qr0 */
/* 80062110  DA 81 00 80 */	stfd f20, 0x80(r1)
/* 80062114  F2 81 00 88 */	psq_st f20, 136(r1), 0, 0 /* qr0 */
/* 80062118  39 61 00 80 */	addi r11, r1, 0x80
/* 8006211C  48 30 00 A9 */	bl _savegpr_23
/* 80062120  38 61 00 14 */	addi r3, r1, 0x14
/* 80062124  4B FF 89 DD */	bl dKyw_get_wind_vecpow__Fv
/* 80062128  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8006212C  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 80062130  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80062134  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80062138  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8006213C  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80062140  3C 60 80 43 */	lis r3, g_env_light@ha /* 0x8042CA54@ha */
/* 80062144  38 63 CA 54 */	addi r3, r3, g_env_light@l /* 0x8042CA54@l */
/* 80062148  83 63 0E D0 */	lwz r27, 0xed0(r3)
/* 8006214C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80062150  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80062154  82 E3 5D 74 */	lwz r23, 0x5d74(r3)
/* 80062158  4B FF 89 89 */	bl dKyw_get_wind_vec__Fv
/* 8006215C  7C 7E 1B 78 */	mr r30, r3
/* 80062160  48 14 A4 1D */	bl dKy_darkworld_check__Fv
/* 80062164  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80062168  41 82 00 20 */	beq lbl_80062188
/* 8006216C  C3 C2 88 DC */	lfs f30, lit_5118(r2)
/* 80062170  C3 E2 87 B8 */	lfs f31, lit_3954(r2)
/* 80062174  FF 80 F8 90 */	fmr f28, f31
/* 80062178  FE 80 F0 90 */	fmr f20, f30
/* 8006217C  FE A0 F8 90 */	fmr f21, f31
/* 80062180  FE C0 F8 90 */	fmr f22, f31
/* 80062184  48 00 00 1C */	b lbl_800621A0
lbl_80062188:
/* 80062188  C3 C2 88 88 */	lfs f30, lit_5097(r2)
/* 8006218C  C3 E2 8A 28 */	lfs f31, lit_6947(r2)
/* 80062190  FF 80 F8 90 */	fmr f28, f31
/* 80062194  C2 82 8A 2C */	lfs f20, lit_6948(r2)
/* 80062198  C2 A2 88 9C */	lfs f21, lit_5102(r2)
/* 8006219C  FE C0 A8 90 */	fmr f22, f21
lbl_800621A0:
/* 800621A0  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 800621A4  3B 03 61 C0 */	addi r24, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 800621A8  3B B8 4E 00 */	addi r29, r24, 0x4e00
/* 800621AC  7F A3 EB 78 */	mr r3, r29
/* 800621B0  3C 80 80 38 */	lis r4, d_kankyo_d_kankyo_rain__stringBase0@ha /* 0x8037A578@ha */
/* 800621B4  38 84 A5 78 */	addi r4, r4, d_kankyo_d_kankyo_rain__stringBase0@l /* 0x8037A578@l */
/* 800621B8  38 84 00 5C */	addi r4, r4, 0x5c
/* 800621BC  48 30 67 D9 */	bl strcmp
/* 800621C0  2C 03 00 00 */	cmpwi r3, 0
/* 800621C4  40 82 00 0C */	bne lbl_800621D0
/* 800621C8  C2 A2 87 D4 */	lfs f21, lit_4104(r2)
/* 800621CC  C2 C2 89 A0 */	lfs f22, lit_5748(r2)
lbl_800621D0:
/* 800621D0  3C 60 80 43 */	lis r3, g_env_light@ha /* 0x8042CA54@ha */
/* 800621D4  38 63 CA 54 */	addi r3, r3, g_env_light@l /* 0x8042CA54@l */
/* 800621D8  C0 23 0E CC */	lfs f1, 0xecc(r3)
/* 800621DC  EC 14 F0 28 */	fsubs f0, f20, f30
/* 800621E0  EC 01 00 32 */	fmuls f0, f1, f0
/* 800621E4  EF DE 00 2A */	fadds f30, f30, f0
/* 800621E8  EC 15 F8 28 */	fsubs f0, f21, f31
/* 800621EC  EC 01 00 32 */	fmuls f0, f1, f0
/* 800621F0  EF FF 00 2A */	fadds f31, f31, f0
/* 800621F4  EC 16 E0 28 */	fsubs f0, f22, f28
/* 800621F8  EC 01 00 32 */	fmuls f0, f1, f0
/* 800621FC  EF 9C 00 2A */	fadds f28, f28, f0
/* 80062200  38 78 4E 20 */	addi r3, r24, 0x4e20
/* 80062204  81 98 4E 20 */	lwz r12, 0x4e20(r24)
/* 80062208  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 8006220C  7D 89 03 A6 */	mtctr r12
/* 80062210  4E 80 04 21 */	bctrl 
/* 80062214  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80062218  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 8006221C  80 03 61 B0 */	lwz r0, 0x61b0(r3)
/* 80062220  28 00 00 00 */	cmplwi r0, 0
/* 80062224  41 82 00 50 */	beq lbl_80062274
/* 80062228  C2 82 87 B8 */	lfs f20, lit_3954(r2)
/* 8006222C  38 60 00 00 */	li r3, 0
/* 80062230  88 8D 87 E4 */	lbz r4, struct_80450D64+0x0(r13)
/* 80062234  7C 84 07 75 */	extsb. r4, r4
/* 80062238  41 80 00 1C */	blt lbl_80062254
/* 8006223C  38 78 4E C4 */	addi r3, r24, 0x4ec4
/* 80062240  4B FC 21 45 */	bl getStatusRoomDt__20dStage_roomControl_cFi
/* 80062244  81 83 00 00 */	lwz r12, 0(r3)
/* 80062248  81 8C 01 0C */	lwz r12, 0x10c(r12)
/* 8006224C  7D 89 03 A6 */	mtctr r12
/* 80062250  4E 80 04 21 */	bctrl 
lbl_80062254:
/* 80062254  28 03 00 00 */	cmplwi r3, 0
/* 80062258  41 82 00 08 */	beq lbl_80062260
/* 8006225C  C2 83 00 04 */	lfs f20, 4(r3)
lbl_80062260:
/* 80062260  C0 22 8A 1C */	lfs f1, lit_6734(r2)
/* 80062264  C0 17 00 DC */	lfs f0, 0xdc(r23)
/* 80062268  EC 00 A0 28 */	fsubs f0, f0, f20
/* 8006226C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80062270  EF FF 00 28 */	fsubs f31, f31, f0
lbl_80062274:
/* 80062274  3B 40 00 00 */	li r26, 0
/* 80062278  3B 20 00 00 */	li r25, 0
/* 8006227C  3C 60 80 43 */	lis r3, g_env_light@ha /* 0x8042CA54@ha */
/* 80062280  3B E3 CA 54 */	addi r31, r3, g_env_light@l /* 0x8042CA54@l */
/* 80062284  C3 62 87 B8 */	lfs f27, lit_3954(r2)
/* 80062288  C3 A2 88 14 */	lfs f29, lit_4354(r2)
/* 8006228C  C3 02 8A 40 */	lfs f24, lit_6951(r2)
/* 80062290  C2 E2 88 E0 */	lfs f23, lit_5119(r2)
/* 80062294  CA C2 87 C8 */	lfd f22, lit_3995(r2)
/* 80062298  3F 00 43 30 */	lis r24, 0x4330
/* 8006229C  C2 A2 89 A4 */	lfs f21, lit_6355(r2)
/* 800622A0  FF 40 E8 90 */	fmr f26, f29
/* 800622A4  C2 82 89 54 */	lfs f20, lit_5729(r2)
/* 800622A8  C3 22 8A 50 */	lfs f25, lit_6955(r2)
lbl_800622AC:
/* 800622AC  7F 9B CA 14 */	add r28, r27, r25
/* 800622B0  88 1C 00 20 */	lbz r0, 0x20(r28)
/* 800622B4  7C 00 07 74 */	extsb r0, r0
/* 800622B8  2C 00 00 02 */	cmpwi r0, 2
/* 800622BC  41 82 05 D8 */	beq lbl_80062894
/* 800622C0  40 80 05 D4 */	bge lbl_80062894
/* 800622C4  2C 00 00 00 */	cmpwi r0, 0
/* 800622C8  41 82 00 10 */	beq lbl_800622D8
/* 800622CC  40 80 01 54 */	bge lbl_80062420
/* 800622D0  48 00 05 C4 */	b lbl_80062894
/* 800622D4  48 00 05 C0 */	b lbl_80062894
lbl_800622D8:
/* 800622D8  C0 22 89 F0 */	lfs f1, lit_6723(r2)
/* 800622DC  48 20 56 79 */	bl cM_rndF__Ff
/* 800622E0  FC 00 08 1E */	fctiwz f0, f1
/* 800622E4  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 800622E8  82 E1 00 4C */	lwz r23, 0x4c(r1)
/* 800622EC  C0 22 8A 30 */	lfs f1, lit_6949(r2)
/* 800622F0  48 20 56 65 */	bl cM_rndF__Ff
/* 800622F4  C0 02 8A 40 */	lfs f0, lit_6951(r2)
/* 800622F8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800622FC  40 81 00 18 */	ble lbl_80062314
/* 80062300  C0 22 89 3C */	lfs f1, lit_5723(r2)
/* 80062304  48 20 56 51 */	bl cM_rndF__Ff
/* 80062308  C8 02 8A 38 */	lfd f0, lit_6950(r2)
/* 8006230C  FC 20 08 2A */	fadd f1, f0, f1
/* 80062310  FC 20 08 18 */	frsp f1, f1
lbl_80062314:
/* 80062314  56 E4 04 38 */	rlwinm r4, r23, 0, 0x10, 0x1c
/* 80062318  3C 60 80 44 */	lis r3, sincosTable___5JMath@ha /* 0x80439A20@ha */
/* 8006231C  38 03 9A 20 */	addi r0, r3, sincosTable___5JMath@l /* 0x80439A20@l */
/* 80062320  7C 60 22 14 */	add r3, r0, r4
/* 80062324  C0 03 00 00 */	lfs f0, 0(r3)
/* 80062328  EC 81 00 32 */	fmuls f4, f1, f0
/* 8006232C  C0 62 8A 44 */	lfs f3, lit_6952(r2)
/* 80062330  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 80062334  7C 00 00 26 */	mfcr r0
/* 80062338  54 00 0F FE */	srwi r0, r0, 0x1f
/* 8006233C  C8 42 88 70 */	lfd f2, lit_4379(r2)
/* 80062340  90 01 00 54 */	stw r0, 0x54(r1)
/* 80062344  3C 00 43 30 */	lis r0, 0x4330
/* 80062348  90 01 00 50 */	stw r0, 0x50(r1)
/* 8006234C  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 80062350  FC 00 10 28 */	fsub f0, f0, f2
/* 80062354  FC 00 02 10 */	fabs f0, f0
/* 80062358  FC 40 00 18 */	frsp f2, f0
/* 8006235C  C0 02 87 B8 */	lfs f0, lit_3954(r2)
/* 80062360  FC 02 00 00 */	fcmpu cr0, f2, f0
/* 80062364  41 82 00 18 */	beq lbl_8006237C
/* 80062368  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8006236C  40 81 00 0C */	ble lbl_80062378
/* 80062370  EC 84 18 2A */	fadds f4, f4, f3
/* 80062374  48 00 00 08 */	b lbl_8006237C
lbl_80062378:
/* 80062378  EC 84 18 28 */	fsubs f4, f4, f3
lbl_8006237C:
/* 8006237C  D0 9C 00 24 */	stfs f4, 0x24(r28)
/* 80062380  C0 62 87 B8 */	lfs f3, lit_3954(r2)
/* 80062384  D0 7C 00 28 */	stfs f3, 0x28(r28)
/* 80062388  C0 03 00 04 */	lfs f0, 4(r3)
/* 8006238C  EC 81 00 32 */	fmuls f4, f1, f0
/* 80062390  C0 42 8A 44 */	lfs f2, lit_6952(r2)
/* 80062394  FC 04 10 40 */	fcmpo cr0, f4, f2
/* 80062398  7C 00 00 26 */	mfcr r0
/* 8006239C  54 00 0F FE */	srwi r0, r0, 0x1f
/* 800623A0  C8 22 88 70 */	lfd f1, lit_4379(r2)
/* 800623A4  90 01 00 54 */	stw r0, 0x54(r1)
/* 800623A8  3C 00 43 30 */	lis r0, 0x4330
/* 800623AC  90 01 00 50 */	stw r0, 0x50(r1)
/* 800623B0  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 800623B4  FC 00 08 28 */	fsub f0, f0, f1
/* 800623B8  FC 00 02 10 */	fabs f0, f0
/* 800623BC  FC 00 00 18 */	frsp f0, f0
/* 800623C0  FC 00 18 00 */	fcmpu cr0, f0, f3
/* 800623C4  41 82 00 18 */	beq lbl_800623DC
/* 800623C8  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 800623CC  40 81 00 0C */	ble lbl_800623D8
/* 800623D0  EC 84 10 2A */	fadds f4, f4, f2
/* 800623D4  48 00 00 08 */	b lbl_800623DC
lbl_800623D8:
/* 800623D8  EC 84 10 28 */	fsubs f4, f4, f2
lbl_800623DC:
/* 800623DC  D0 9C 00 2C */	stfs f4, 0x2c(r28)
/* 800623E0  C0 22 88 44 */	lfs f1, lit_4366(r2)
/* 800623E4  48 20 55 A9 */	bl cM_rndFX__Ff
/* 800623E8  C0 02 88 44 */	lfs f0, lit_4366(r2)
/* 800623EC  EC 00 00 72 */	fmuls f0, f0, f1
/* 800623F0  D0 1C 00 3C */	stfs f0, 0x3c(r28)
/* 800623F4  C0 02 87 B8 */	lfs f0, lit_3954(r2)
/* 800623F8  D0 1C 00 40 */	stfs f0, 0x40(r28)
/* 800623FC  C0 22 89 78 */	lfs f1, lit_5738(r2)
/* 80062400  48 20 55 55 */	bl cM_rndF__Ff
/* 80062404  C0 02 89 30 */	lfs f0, lit_5720(r2)
/* 80062408  EC 00 08 2A */	fadds f0, f0, f1
/* 8006240C  D0 1C 00 48 */	stfs f0, 0x48(r28)
/* 80062410  88 7C 00 20 */	lbz r3, 0x20(r28)
/* 80062414  38 03 00 01 */	addi r0, r3, 1
/* 80062418  98 1C 00 20 */	stb r0, 0x20(r28)
/* 8006241C  48 00 04 78 */	b lbl_80062894
lbl_80062420:
/* 80062420  C0 1C 00 24 */	lfs f0, 0x24(r28)
/* 80062424  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 80062428  C0 1C 00 28 */	lfs f0, 0x28(r28)
/* 8006242C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80062430  C0 1C 00 2C */	lfs f0, 0x2c(r28)
/* 80062434  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80062438  C0 02 87 B8 */	lfs f0, lit_3954(r2)
/* 8006243C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80062440  38 61 00 2C */	addi r3, r1, 0x2c
/* 80062444  48 2E 4C F5 */	bl PSVECSquareMag
/* 80062448  C0 02 87 B8 */	lfs f0, lit_3954(r2)
/* 8006244C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80062450  40 81 00 58 */	ble lbl_800624A8
/* 80062454  FC 00 08 34 */	frsqrte f0, f1
/* 80062458  C8 82 87 E8 */	lfd f4, lit_4109(r2)
/* 8006245C  FC 44 00 32 */	fmul f2, f4, f0
/* 80062460  C8 62 87 F0 */	lfd f3, lit_4110(r2)
/* 80062464  FC 00 00 32 */	fmul f0, f0, f0
/* 80062468  FC 01 00 32 */	fmul f0, f1, f0
/* 8006246C  FC 03 00 28 */	fsub f0, f3, f0
/* 80062470  FC 02 00 32 */	fmul f0, f2, f0
/* 80062474  FC 44 00 32 */	fmul f2, f4, f0
/* 80062478  FC 00 00 32 */	fmul f0, f0, f0
/* 8006247C  FC 01 00 32 */	fmul f0, f1, f0
/* 80062480  FC 03 00 28 */	fsub f0, f3, f0
/* 80062484  FC 02 00 32 */	fmul f0, f2, f0
/* 80062488  FC 44 00 32 */	fmul f2, f4, f0
/* 8006248C  FC 00 00 32 */	fmul f0, f0, f0
/* 80062490  FC 01 00 32 */	fmul f0, f1, f0
/* 80062494  FC 03 00 28 */	fsub f0, f3, f0
/* 80062498  FC 02 00 32 */	fmul f0, f2, f0
/* 8006249C  FC 21 00 32 */	fmul f1, f1, f0
/* 800624A0  FC 20 08 18 */	frsp f1, f1
/* 800624A4  48 00 00 88 */	b lbl_8006252C
lbl_800624A8:
/* 800624A8  C8 02 87 B0 */	lfd f0, lit_3953(r2)
/* 800624AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800624B0  40 80 00 10 */	bge lbl_800624C0
/* 800624B4  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 800624B8  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 800624BC  48 00 00 70 */	b lbl_8006252C
lbl_800624C0:
/* 800624C0  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 800624C4  80 81 00 10 */	lwz r4, 0x10(r1)
/* 800624C8  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 800624CC  3C 00 7F 80 */	lis r0, 0x7f80
/* 800624D0  7C 03 00 00 */	cmpw r3, r0
/* 800624D4  41 82 00 14 */	beq lbl_800624E8
/* 800624D8  40 80 00 40 */	bge lbl_80062518
/* 800624DC  2C 03 00 00 */	cmpwi r3, 0
/* 800624E0  41 82 00 20 */	beq lbl_80062500
/* 800624E4  48 00 00 34 */	b lbl_80062518
lbl_800624E8:
/* 800624E8  54 80 02 7F */	clrlwi. r0, r4, 9
/* 800624EC  41 82 00 0C */	beq lbl_800624F8
/* 800624F0  38 00 00 01 */	li r0, 1
/* 800624F4  48 00 00 28 */	b lbl_8006251C
lbl_800624F8:
/* 800624F8  38 00 00 02 */	li r0, 2
/* 800624FC  48 00 00 20 */	b lbl_8006251C
lbl_80062500:
/* 80062500  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80062504  41 82 00 0C */	beq lbl_80062510
/* 80062508  38 00 00 05 */	li r0, 5
/* 8006250C  48 00 00 10 */	b lbl_8006251C
lbl_80062510:
/* 80062510  38 00 00 03 */	li r0, 3
/* 80062514  48 00 00 08 */	b lbl_8006251C
lbl_80062518:
/* 80062518  38 00 00 04 */	li r0, 4
lbl_8006251C:
/* 8006251C  2C 00 00 01 */	cmpwi r0, 1
/* 80062520  40 82 00 0C */	bne lbl_8006252C
/* 80062524  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80062528  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_8006252C:
/* 8006252C  C0 02 8A 40 */	lfs f0, lit_6951(r2)
/* 80062530  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80062534  40 81 02 28 */	ble lbl_8006275C
/* 80062538  38 61 00 2C */	addi r3, r1, 0x2c
/* 8006253C  48 2E 4B FD */	bl PSVECSquareMag
/* 80062540  C0 02 87 B8 */	lfs f0, lit_3954(r2)
/* 80062544  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80062548  40 81 00 58 */	ble lbl_800625A0
/* 8006254C  FC 00 08 34 */	frsqrte f0, f1
/* 80062550  C8 82 87 E8 */	lfd f4, lit_4109(r2)
/* 80062554  FC 44 00 32 */	fmul f2, f4, f0
/* 80062558  C8 62 87 F0 */	lfd f3, lit_4110(r2)
/* 8006255C  FC 00 00 32 */	fmul f0, f0, f0
/* 80062560  FC 01 00 32 */	fmul f0, f1, f0
/* 80062564  FC 03 00 28 */	fsub f0, f3, f0
/* 80062568  FC 02 00 32 */	fmul f0, f2, f0
/* 8006256C  FC 44 00 32 */	fmul f2, f4, f0
/* 80062570  FC 00 00 32 */	fmul f0, f0, f0
/* 80062574  FC 01 00 32 */	fmul f0, f1, f0
/* 80062578  FC 03 00 28 */	fsub f0, f3, f0
/* 8006257C  FC 02 00 32 */	fmul f0, f2, f0
/* 80062580  FC 44 00 32 */	fmul f2, f4, f0
/* 80062584  FC 00 00 32 */	fmul f0, f0, f0
/* 80062588  FC 01 00 32 */	fmul f0, f1, f0
/* 8006258C  FC 03 00 28 */	fsub f0, f3, f0
/* 80062590  FC 02 00 32 */	fmul f0, f2, f0
/* 80062594  FC 21 00 32 */	fmul f1, f1, f0
/* 80062598  FC 20 08 18 */	frsp f1, f1
/* 8006259C  48 00 00 88 */	b lbl_80062624
lbl_800625A0:
/* 800625A0  C8 02 87 B0 */	lfd f0, lit_3953(r2)
/* 800625A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800625A8  40 80 00 10 */	bge lbl_800625B8
/* 800625AC  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 800625B0  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 800625B4  48 00 00 70 */	b lbl_80062624
lbl_800625B8:
/* 800625B8  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 800625BC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 800625C0  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 800625C4  3C 00 7F 80 */	lis r0, 0x7f80
/* 800625C8  7C 03 00 00 */	cmpw r3, r0
/* 800625CC  41 82 00 14 */	beq lbl_800625E0
/* 800625D0  40 80 00 40 */	bge lbl_80062610
/* 800625D4  2C 03 00 00 */	cmpwi r3, 0
/* 800625D8  41 82 00 20 */	beq lbl_800625F8
/* 800625DC  48 00 00 34 */	b lbl_80062610
lbl_800625E0:
/* 800625E0  54 80 02 7F */	clrlwi. r0, r4, 9
/* 800625E4  41 82 00 0C */	beq lbl_800625F0
/* 800625E8  38 00 00 01 */	li r0, 1
/* 800625EC  48 00 00 28 */	b lbl_80062614
lbl_800625F0:
/* 800625F0  38 00 00 02 */	li r0, 2
/* 800625F4  48 00 00 20 */	b lbl_80062614
lbl_800625F8:
/* 800625F8  54 80 02 7F */	clrlwi. r0, r4, 9
/* 800625FC  41 82 00 0C */	beq lbl_80062608
/* 80062600  38 00 00 05 */	li r0, 5
/* 80062604  48 00 00 10 */	b lbl_80062614
lbl_80062608:
/* 80062608  38 00 00 03 */	li r0, 3
/* 8006260C  48 00 00 08 */	b lbl_80062614
lbl_80062610:
/* 80062610  38 00 00 04 */	li r0, 4
lbl_80062614:
/* 80062614  2C 00 00 01 */	cmpwi r0, 1
/* 80062618  40 82 00 0C */	bne lbl_80062624
/* 8006261C  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80062620  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_80062624:
/* 80062624  C0 02 8A 48 */	lfs f0, lit_6953(r2)
/* 80062628  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8006262C  40 81 01 10 */	ble lbl_8006273C
/* 80062630  C0 22 89 F0 */	lfs f1, lit_6723(r2)
/* 80062634  48 20 53 21 */	bl cM_rndF__Ff
/* 80062638  FC 00 08 1E */	fctiwz f0, f1
/* 8006263C  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 80062640  82 E1 00 54 */	lwz r23, 0x54(r1)
/* 80062644  C0 22 8A 30 */	lfs f1, lit_6949(r2)
/* 80062648  48 20 53 0D */	bl cM_rndF__Ff
/* 8006264C  C0 02 8A 40 */	lfs f0, lit_6951(r2)
/* 80062650  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80062654  40 81 00 18 */	ble lbl_8006266C
/* 80062658  C0 22 89 3C */	lfs f1, lit_5723(r2)
/* 8006265C  48 20 52 F9 */	bl cM_rndF__Ff
/* 80062660  C8 02 8A 38 */	lfd f0, lit_6950(r2)
/* 80062664  FC 20 08 2A */	fadd f1, f0, f1
/* 80062668  FC 20 08 18 */	frsp f1, f1
lbl_8006266C:
/* 8006266C  56 E4 04 38 */	rlwinm r4, r23, 0, 0x10, 0x1c
/* 80062670  3C 60 80 44 */	lis r3, sincosTable___5JMath@ha /* 0x80439A20@ha */
/* 80062674  38 03 9A 20 */	addi r0, r3, sincosTable___5JMath@l /* 0x80439A20@l */
/* 80062678  7C 60 22 14 */	add r3, r0, r4
/* 8006267C  C0 03 00 00 */	lfs f0, 0(r3)
/* 80062680  EC 81 00 32 */	fmuls f4, f1, f0
/* 80062684  C0 62 8A 44 */	lfs f3, lit_6952(r2)
/* 80062688  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 8006268C  7C 00 00 26 */	mfcr r0
/* 80062690  54 00 0F FE */	srwi r0, r0, 0x1f
/* 80062694  C8 42 88 70 */	lfd f2, lit_4379(r2)
/* 80062698  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8006269C  3C 00 43 30 */	lis r0, 0x4330
/* 800626A0  90 01 00 48 */	stw r0, 0x48(r1)
/* 800626A4  C8 01 00 48 */	lfd f0, 0x48(r1)
/* 800626A8  FC 00 10 28 */	fsub f0, f0, f2
/* 800626AC  FC 00 02 10 */	fabs f0, f0
/* 800626B0  FC 40 00 18 */	frsp f2, f0
/* 800626B4  C0 02 87 B8 */	lfs f0, lit_3954(r2)
/* 800626B8  FC 02 00 00 */	fcmpu cr0, f2, f0
/* 800626BC  41 82 00 18 */	beq lbl_800626D4
/* 800626C0  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 800626C4  40 81 00 0C */	ble lbl_800626D0
/* 800626C8  EC 84 18 2A */	fadds f4, f4, f3
/* 800626CC  48 00 00 08 */	b lbl_800626D4
lbl_800626D0:
/* 800626D0  EC 84 18 28 */	fsubs f4, f4, f3
lbl_800626D4:
/* 800626D4  D0 9C 00 24 */	stfs f4, 0x24(r28)
/* 800626D8  C0 62 87 B8 */	lfs f3, lit_3954(r2)
/* 800626DC  D0 7C 00 28 */	stfs f3, 0x28(r28)
/* 800626E0  C0 03 00 04 */	lfs f0, 4(r3)
/* 800626E4  EC 81 00 32 */	fmuls f4, f1, f0
/* 800626E8  C0 42 8A 44 */	lfs f2, lit_6952(r2)
/* 800626EC  FC 04 10 40 */	fcmpo cr0, f4, f2
/* 800626F0  7C 00 00 26 */	mfcr r0
/* 800626F4  54 00 0F FE */	srwi r0, r0, 0x1f
/* 800626F8  C8 22 88 70 */	lfd f1, lit_4379(r2)
/* 800626FC  90 01 00 54 */	stw r0, 0x54(r1)
/* 80062700  3C 00 43 30 */	lis r0, 0x4330
/* 80062704  90 01 00 50 */	stw r0, 0x50(r1)
/* 80062708  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 8006270C  FC 00 08 28 */	fsub f0, f0, f1
/* 80062710  FC 00 02 10 */	fabs f0, f0
/* 80062714  FC 00 00 18 */	frsp f0, f0
/* 80062718  FC 00 18 00 */	fcmpu cr0, f0, f3
/* 8006271C  41 82 00 18 */	beq lbl_80062734
/* 80062720  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 80062724  40 81 00 0C */	ble lbl_80062730
/* 80062728  EC 84 10 2A */	fadds f4, f4, f2
/* 8006272C  48 00 00 08 */	b lbl_80062734
lbl_80062730:
/* 80062730  EC 84 10 28 */	fsubs f4, f4, f2
lbl_80062734:
/* 80062734  D0 9C 00 2C */	stfs f4, 0x2c(r28)
/* 80062738  48 00 00 1C */	b lbl_80062754
lbl_8006273C:
/* 8006273C  C0 1C 00 24 */	lfs f0, 0x24(r28)
/* 80062740  FC 00 00 50 */	fneg f0, f0
/* 80062744  D0 1C 00 24 */	stfs f0, 0x24(r28)
/* 80062748  C0 1C 00 2C */	lfs f0, 0x2c(r28)
/* 8006274C  FC 00 00 50 */	fneg f0, f0
/* 80062750  D0 1C 00 2C */	stfs f0, 0x2c(r28)
lbl_80062754:
/* 80062754  C0 02 87 B8 */	lfs f0, lit_3954(r2)
/* 80062758  D0 1C 00 40 */	stfs f0, 0x40(r28)
lbl_8006275C:
/* 8006275C  7F A3 EB 78 */	mr r3, r29
/* 80062760  3C 80 80 38 */	lis r4, d_kankyo_d_kankyo_rain__stringBase0@ha /* 0x8037A578@ha */
/* 80062764  38 84 A5 78 */	addi r4, r4, d_kankyo_d_kankyo_rain__stringBase0@l /* 0x8037A578@l */
/* 80062768  38 84 00 5C */	addi r4, r4, 0x5c
/* 8006276C  48 30 62 29 */	bl strcmp
/* 80062770  2C 03 00 00 */	cmpwi r3, 0
/* 80062774  40 82 00 18 */	bne lbl_8006278C
/* 80062778  C0 02 8A 4C */	lfs f0, lit_6954(r2)
/* 8006277C  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 80062780  C0 02 87 B8 */	lfs f0, lit_3954(r2)
/* 80062784  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 80062788  48 00 00 58 */	b lbl_800627E0
lbl_8006278C:
/* 8006278C  7F A3 EB 78 */	mr r3, r29
/* 80062790  3C 80 80 38 */	lis r4, d_kankyo_d_kankyo_rain__stringBase0@ha /* 0x8037A578@ha */
/* 80062794  38 84 A5 78 */	addi r4, r4, d_kankyo_d_kankyo_rain__stringBase0@l /* 0x8037A578@l */
/* 80062798  38 84 00 1F */	addi r4, r4, 0x1f
/* 8006279C  48 30 61 F9 */	bl strcmp
/* 800627A0  2C 03 00 00 */	cmpwi r3, 0
/* 800627A4  40 82 00 3C */	bne lbl_800627E0
/* 800627A8  C0 62 88 44 */	lfs f3, lit_4366(r2)
/* 800627AC  C0 1E 00 00 */	lfs f0, 0(r30)
/* 800627B0  EC 23 00 32 */	fmuls f1, f3, f0
/* 800627B4  C0 42 88 3C */	lfs f2, lit_4364(r2)
/* 800627B8  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 800627BC  EC 02 00 32 */	fmuls f0, f2, f0
/* 800627C0  EC 01 00 2A */	fadds f0, f1, f0
/* 800627C4  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 800627C8  C0 1E 00 08 */	lfs f0, 8(r30)
/* 800627CC  EC 23 00 32 */	fmuls f1, f3, f0
/* 800627D0  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 800627D4  EC 02 00 32 */	fmuls f0, f2, f0
/* 800627D8  EC 01 00 2A */	fadds f0, f1, f0
/* 800627DC  D0 01 00 40 */	stfs f0, 0x40(r1)
lbl_800627E0:
/* 800627E0  C0 3C 00 40 */	lfs f1, 0x40(r28)
/* 800627E4  C0 02 87 B8 */	lfs f0, lit_3954(r2)
/* 800627E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800627EC  4C 40 13 82 */	cror 2, 0, 2
/* 800627F0  40 82 00 5C */	bne lbl_8006284C
/* 800627F4  C0 7C 00 24 */	lfs f3, 0x24(r28)
/* 800627F8  C0 41 00 38 */	lfs f2, 0x38(r1)
/* 800627FC  C8 22 87 C8 */	lfd f1, lit_3995(r2)
/* 80062800  6F 40 80 00 */	xoris r0, r26, 0x8000
/* 80062804  90 01 00 54 */	stw r0, 0x54(r1)
/* 80062808  3C 00 43 30 */	lis r0, 0x4330
/* 8006280C  90 01 00 50 */	stw r0, 0x50(r1)
/* 80062810  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 80062814  EC 20 08 28 */	fsubs f1, f0, f1
/* 80062818  C0 02 89 A4 */	lfs f0, lit_6355(r2)
/* 8006281C  EC 01 00 24 */	fdivs f0, f1, f0
/* 80062820  EC 00 07 B2 */	fmuls f0, f0, f30
/* 80062824  EC 9E 00 2A */	fadds f4, f30, f0
/* 80062828  EC 02 01 32 */	fmuls f0, f2, f4
/* 8006282C  EC 03 00 2A */	fadds f0, f3, f0
/* 80062830  D0 1C 00 24 */	stfs f0, 0x24(r28)
/* 80062834  C0 3C 00 2C */	lfs f1, 0x2c(r28)
/* 80062838  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 8006283C  EC 00 01 32 */	fmuls f0, f0, f4
/* 80062840  EC 01 00 2A */	fadds f0, f1, f0
/* 80062844  D0 1C 00 2C */	stfs f0, 0x2c(r28)
/* 80062848  48 00 00 4C */	b lbl_80062894
lbl_8006284C:
/* 8006284C  C0 7C 00 24 */	lfs f3, 0x24(r28)
/* 80062850  C0 5C 00 44 */	lfs f2, 0x44(r28)
/* 80062854  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 80062858  C0 1C 00 48 */	lfs f0, 0x48(r28)
/* 8006285C  EC 1E 00 32 */	fmuls f0, f30, f0
/* 80062860  EC 01 00 32 */	fmuls f0, f1, f0
/* 80062864  EC 02 00 32 */	fmuls f0, f2, f0
/* 80062868  EC 03 00 2A */	fadds f0, f3, f0
/* 8006286C  D0 1C 00 24 */	stfs f0, 0x24(r28)
/* 80062870  C0 7C 00 2C */	lfs f3, 0x2c(r28)
/* 80062874  C0 5C 00 44 */	lfs f2, 0x44(r28)
/* 80062878  C0 21 00 40 */	lfs f1, 0x40(r1)
/* 8006287C  C0 1C 00 48 */	lfs f0, 0x48(r28)
/* 80062880  EC 1E 00 32 */	fmuls f0, f30, f0
/* 80062884  EC 01 00 32 */	fmuls f0, f1, f0
/* 80062888  EC 02 00 32 */	fmuls f0, f2, f0
/* 8006288C  EC 03 00 2A */	fadds f0, f3, f0
/* 80062890  D0 1C 00 2C */	stfs f0, 0x2c(r28)
lbl_80062894:
/* 80062894  C0 1C 00 24 */	lfs f0, 0x24(r28)
/* 80062898  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8006289C  C0 1C 00 28 */	lfs f0, 0x28(r28)
/* 800628A0  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 800628A4  C0 1C 00 2C */	lfs f0, 0x2c(r28)
/* 800628A8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 800628AC  D3 61 00 24 */	stfs f27, 0x24(r1)
/* 800628B0  38 61 00 20 */	addi r3, r1, 0x20
/* 800628B4  48 2E 48 85 */	bl PSVECSquareMag
/* 800628B8  FC 01 D8 40 */	fcmpo cr0, f1, f27
/* 800628BC  40 81 00 58 */	ble lbl_80062914
/* 800628C0  FC 00 08 34 */	frsqrte f0, f1
/* 800628C4  C8 82 87 E8 */	lfd f4, lit_4109(r2)
/* 800628C8  FC 44 00 32 */	fmul f2, f4, f0
/* 800628CC  C8 62 87 F0 */	lfd f3, lit_4110(r2)
/* 800628D0  FC 00 00 32 */	fmul f0, f0, f0
/* 800628D4  FC 01 00 32 */	fmul f0, f1, f0
/* 800628D8  FC 03 00 28 */	fsub f0, f3, f0
/* 800628DC  FC 02 00 32 */	fmul f0, f2, f0
/* 800628E0  FC 44 00 32 */	fmul f2, f4, f0
/* 800628E4  FC 00 00 32 */	fmul f0, f0, f0
/* 800628E8  FC 01 00 32 */	fmul f0, f1, f0
/* 800628EC  FC 03 00 28 */	fsub f0, f3, f0
/* 800628F0  FC 02 00 32 */	fmul f0, f2, f0
/* 800628F4  FC 44 00 32 */	fmul f2, f4, f0
/* 800628F8  FC 00 00 32 */	fmul f0, f0, f0
/* 800628FC  FC 01 00 32 */	fmul f0, f1, f0
/* 80062900  FC 03 00 28 */	fsub f0, f3, f0
/* 80062904  FC 02 00 32 */	fmul f0, f2, f0
/* 80062908  FC 21 00 32 */	fmul f1, f1, f0
/* 8006290C  FC 20 08 18 */	frsp f1, f1
/* 80062910  48 00 00 88 */	b lbl_80062998
lbl_80062914:
/* 80062914  C8 02 87 B0 */	lfd f0, lit_3953(r2)
/* 80062918  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8006291C  40 80 00 10 */	bge lbl_8006292C
/* 80062920  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80062924  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 80062928  48 00 00 70 */	b lbl_80062998
lbl_8006292C:
/* 8006292C  D0 21 00 08 */	stfs f1, 8(r1)
/* 80062930  80 81 00 08 */	lwz r4, 8(r1)
/* 80062934  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 80062938  3C 00 7F 80 */	lis r0, 0x7f80
/* 8006293C  7C 03 00 00 */	cmpw r3, r0
/* 80062940  41 82 00 14 */	beq lbl_80062954
/* 80062944  40 80 00 40 */	bge lbl_80062984
/* 80062948  2C 03 00 00 */	cmpwi r3, 0
/* 8006294C  41 82 00 20 */	beq lbl_8006296C
/* 80062950  48 00 00 34 */	b lbl_80062984
lbl_80062954:
/* 80062954  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80062958  41 82 00 0C */	beq lbl_80062964
/* 8006295C  38 00 00 01 */	li r0, 1
/* 80062960  48 00 00 28 */	b lbl_80062988
lbl_80062964:
/* 80062964  38 00 00 02 */	li r0, 2
/* 80062968  48 00 00 20 */	b lbl_80062988
lbl_8006296C:
/* 8006296C  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80062970  41 82 00 0C */	beq lbl_8006297C
/* 80062974  38 00 00 05 */	li r0, 5
/* 80062978  48 00 00 10 */	b lbl_80062988
lbl_8006297C:
/* 8006297C  38 00 00 03 */	li r0, 3
/* 80062980  48 00 00 08 */	b lbl_80062988
lbl_80062984:
/* 80062984  38 00 00 04 */	li r0, 4
lbl_80062988:
/* 80062988  2C 00 00 01 */	cmpwi r0, 1
/* 8006298C  40 82 00 0C */	bne lbl_80062998
/* 80062990  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80062994  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_80062998:
/* 80062998  EC 41 C0 24 */	fdivs f2, f1, f24
/* 8006299C  EC 1D 10 28 */	fsubs f0, f29, f2
/* 800629A0  FC 00 D8 40 */	fcmpo cr0, f0, f27
/* 800629A4  40 80 00 08 */	bge lbl_800629AC
/* 800629A8  FC 00 D8 90 */	fmr f0, f27
lbl_800629AC:
/* 800629AC  EC 3D 00 28 */	fsubs f1, f29, f0
/* 800629B0  EC 01 00 72 */	fmuls f0, f1, f1
/* 800629B4  EC 01 00 32 */	fmuls f0, f1, f0
/* 800629B8  EC 7D 00 28 */	fsubs f3, f29, f0
/* 800629BC  6F 40 80 00 */	xoris r0, r26, 0x8000
/* 800629C0  90 01 00 54 */	stw r0, 0x54(r1)
/* 800629C4  93 01 00 50 */	stw r24, 0x50(r1)
/* 800629C8  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 800629CC  EC 00 B0 28 */	fsubs f0, f0, f22
/* 800629D0  EC 00 A8 24 */	fdivs f0, f0, f21
/* 800629D4  EC 37 00 32 */	fmuls f1, f23, f0
/* 800629D8  EC 1C 00 F2 */	fmuls f0, f28, f3
/* 800629DC  EC 1F 00 2A */	fadds f0, f31, f0
/* 800629E0  EC 01 00 2A */	fadds f0, f1, f0
/* 800629E4  D0 1C 00 28 */	stfs f0, 0x28(r28)
/* 800629E8  FC 02 E8 40 */	fcmpo cr0, f2, f29
/* 800629EC  40 81 00 08 */	ble lbl_800629F4
/* 800629F0  FC 40 E8 90 */	fmr f2, f29
lbl_800629F4:
/* 800629F4  EC 02 00 B2 */	fmuls f0, f2, f2
/* 800629F8  EC 02 00 32 */	fmuls f0, f2, f0
/* 800629FC  EC 02 00 32 */	fmuls f0, f2, f0
/* 80062A00  EC 14 00 32 */	fmuls f0, f20, f0
/* 80062A04  EC 1A 00 28 */	fsubs f0, f26, f0
/* 80062A08  D0 1C 00 44 */	stfs f0, 0x44(r28)
/* 80062A0C  80 1F 0E C8 */	lwz r0, 0xec8(r31)
/* 80062A10  7C 1A 00 00 */	cmpw r26, r0
/* 80062A14  41 80 00 0C */	blt lbl_80062A20
/* 80062A18  C0 22 87 B8 */	lfs f1, lit_3954(r2)
/* 80062A1C  48 00 00 20 */	b lbl_80062A3C
lbl_80062A20:
/* 80062A20  C0 3C 00 44 */	lfs f1, 0x44(r28)
/* 80062A24  C0 02 88 3C */	lfs f0, lit_4364(r2)
/* 80062A28  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80062A2C  40 80 00 0C */	bge lbl_80062A38
/* 80062A30  C0 22 87 B8 */	lfs f1, lit_3954(r2)
/* 80062A34  48 00 00 08 */	b lbl_80062A3C
lbl_80062A38:
/* 80062A38  FC 20 D0 90 */	fmr f1, f26
lbl_80062A3C:
/* 80062A3C  EC 21 07 72 */	fmuls f1, f1, f29
/* 80062A40  38 7C 00 40 */	addi r3, r28, 0x40
/* 80062A44  C0 42 88 3C */	lfs f2, lit_4364(r2)
/* 80062A48  FC 60 C8 90 */	fmr f3, f25
/* 80062A4C  C0 82 88 38 */	lfs f4, lit_4363(r2)
/* 80062A50  48 20 CF 2D */	bl cLib_addCalc__FPfffff
/* 80062A54  3B 5A 00 01 */	addi r26, r26, 1
/* 80062A58  2C 1A 00 64 */	cmpwi r26, 0x64
/* 80062A5C  3B 39 00 2C */	addi r25, r25, 0x2c
/* 80062A60  41 80 F8 4C */	blt lbl_800622AC
/* 80062A64  E3 E1 01 38 */	psq_l f31, 312(r1), 0, 0 /* qr0 */
/* 80062A68  CB E1 01 30 */	lfd f31, 0x130(r1)
/* 80062A6C  E3 C1 01 28 */	psq_l f30, 296(r1), 0, 0 /* qr0 */
/* 80062A70  CB C1 01 20 */	lfd f30, 0x120(r1)
/* 80062A74  E3 A1 01 18 */	psq_l f29, 280(r1), 0, 0 /* qr0 */
/* 80062A78  CB A1 01 10 */	lfd f29, 0x110(r1)
/* 80062A7C  E3 81 01 08 */	psq_l f28, 264(r1), 0, 0 /* qr0 */
/* 80062A80  CB 81 01 00 */	lfd f28, 0x100(r1)
/* 80062A84  E3 61 00 F8 */	psq_l f27, 248(r1), 0, 0 /* qr0 */
/* 80062A88  CB 61 00 F0 */	lfd f27, 0xf0(r1)
/* 80062A8C  E3 41 00 E8 */	psq_l f26, 232(r1), 0, 0 /* qr0 */
/* 80062A90  CB 41 00 E0 */	lfd f26, 0xe0(r1)
/* 80062A94  E3 21 00 D8 */	psq_l f25, 216(r1), 0, 0 /* qr0 */
/* 80062A98  CB 21 00 D0 */	lfd f25, 0xd0(r1)
/* 80062A9C  E3 01 00 C8 */	psq_l f24, 200(r1), 0, 0 /* qr0 */
/* 80062AA0  CB 01 00 C0 */	lfd f24, 0xc0(r1)
/* 80062AA4  E2 E1 00 B8 */	psq_l f23, 184(r1), 0, 0 /* qr0 */
/* 80062AA8  CA E1 00 B0 */	lfd f23, 0xb0(r1)
/* 80062AAC  E2 C1 00 A8 */	psq_l f22, 168(r1), 0, 0 /* qr0 */
/* 80062AB0  CA C1 00 A0 */	lfd f22, 0xa0(r1)
/* 80062AB4  E2 A1 00 98 */	psq_l f21, 152(r1), 0, 0 /* qr0 */
/* 80062AB8  CA A1 00 90 */	lfd f21, 0x90(r1)
/* 80062ABC  E2 81 00 88 */	psq_l f20, 136(r1), 0, 0 /* qr0 */
/* 80062AC0  CA 81 00 80 */	lfd f20, 0x80(r1)
/* 80062AC4  39 61 00 80 */	addi r11, r1, 0x80
/* 80062AC8  48 2F F7 49 */	bl _restgpr_23
/* 80062ACC  80 01 01 44 */	lwz r0, 0x144(r1)
/* 80062AD0  7C 08 03 A6 */	mtlr r0
/* 80062AD4  38 21 01 40 */	addi r1, r1, 0x140
/* 80062AD8  4E 80 00 20 */	blr 
