lbl_80786154:
/* 80786154  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80786158  7C 08 02 A6 */	mflr r0
/* 8078615C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80786160  39 61 00 30 */	addi r11, r1, 0x30
/* 80786164  4B BD C0 78 */	b _savegpr_29
/* 80786168  7C 7E 1B 78 */	mr r30, r3
/* 8078616C  3C 80 80 79 */	lis r4, lit_3908@ha
/* 80786170  3B E4 9C 38 */	addi r31, r4, lit_3908@l
/* 80786174  80 83 05 D4 */	lwz r4, 0x5d4(r3)
/* 80786178  C0 04 00 1C */	lfs f0, 0x1c(r4)
/* 8078617C  FC 00 00 1E */	fctiwz f0, f0
/* 80786180  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80786184  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80786188  38 00 00 01 */	li r0, 1
/* 8078618C  98 03 06 AE */	stb r0, 0x6ae(r3)
/* 80786190  A8 03 05 B4 */	lha r0, 0x5b4(r3)
/* 80786194  2C 00 00 01 */	cmpwi r0, 1
/* 80786198  41 82 00 58 */	beq lbl_807861F0
/* 8078619C  40 80 00 E0 */	bge lbl_8078627C
/* 807861A0  2C 00 00 00 */	cmpwi r0, 0
/* 807861A4  40 80 00 08 */	bge lbl_807861AC
/* 807861A8  48 00 00 D4 */	b lbl_8078627C
lbl_807861AC:
/* 807861AC  38 80 00 05 */	li r4, 5
/* 807861B0  C0 3F 00 84 */	lfs f1, 0x84(r31)
/* 807861B4  38 A0 00 00 */	li r5, 0
/* 807861B8  C0 5F 00 08 */	lfs f2, 8(r31)
/* 807861BC  4B FF EF CD */	bl anm_init__FP10e_sf_classifUcf
/* 807861C0  3C 60 00 07 */	lis r3, 0x0007 /* 0x0007008E@ha */
/* 807861C4  38 03 00 8E */	addi r0, r3, 0x008E /* 0x0007008E@l */
/* 807861C8  90 01 00 0C */	stw r0, 0xc(r1)
/* 807861CC  38 7E 05 E4 */	addi r3, r30, 0x5e4
/* 807861D0  38 81 00 0C */	addi r4, r1, 0xc
/* 807861D4  38 A0 FF FF */	li r5, -1
/* 807861D8  81 9E 05 E4 */	lwz r12, 0x5e4(r30)
/* 807861DC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 807861E0  7D 89 03 A6 */	mtctr r12
/* 807861E4  4E 80 04 21 */	bctrl 
/* 807861E8  38 00 00 01 */	li r0, 1
/* 807861EC  B0 1E 05 B4 */	sth r0, 0x5b4(r30)
lbl_807861F0:
/* 807861F0  2C 1D 00 0F */	cmpwi r29, 0xf
/* 807861F4  41 80 00 14 */	blt lbl_80786208
/* 807861F8  2C 1D 00 16 */	cmpwi r29, 0x16
/* 807861FC  41 81 00 0C */	bgt lbl_80786208
/* 80786200  38 00 00 01 */	li r0, 1
/* 80786204  98 1E 06 A9 */	stb r0, 0x6a9(r30)
lbl_80786208:
/* 80786208  2C 1D 00 0F */	cmpwi r29, 0xf
/* 8078620C  40 82 00 30 */	bne lbl_8078623C
/* 80786210  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070099@ha */
/* 80786214  38 03 00 99 */	addi r0, r3, 0x0099 /* 0x00070099@l */
/* 80786218  90 01 00 08 */	stw r0, 8(r1)
/* 8078621C  38 7E 05 E4 */	addi r3, r30, 0x5e4
/* 80786220  38 81 00 08 */	addi r4, r1, 8
/* 80786224  38 A0 00 00 */	li r5, 0
/* 80786228  38 C0 FF FF */	li r6, -1
/* 8078622C  81 9E 05 E4 */	lwz r12, 0x5e4(r30)
/* 80786230  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80786234  7D 89 03 A6 */	mtctr r12
/* 80786238  4E 80 04 21 */	bctrl 
lbl_8078623C:
/* 8078623C  80 7E 05 D4 */	lwz r3, 0x5d4(r30)
/* 80786240  38 80 00 01 */	li r4, 1
/* 80786244  88 03 00 11 */	lbz r0, 0x11(r3)
/* 80786248  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8078624C  40 82 00 18 */	bne lbl_80786264
/* 80786250  C0 3F 00 04 */	lfs f1, 4(r31)
/* 80786254  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80786258  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8078625C  41 82 00 08 */	beq lbl_80786264
/* 80786260  38 80 00 00 */	li r4, 0
lbl_80786264:
/* 80786264  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80786268  41 82 00 14 */	beq lbl_8078627C
/* 8078626C  38 00 00 03 */	li r0, 3
/* 80786270  B0 1E 06 8A */	sth r0, 0x68a(r30)
/* 80786274  38 00 00 00 */	li r0, 0
/* 80786278  B0 1E 05 B4 */	sth r0, 0x5b4(r30)
lbl_8078627C:
/* 8078627C  38 7E 05 2C */	addi r3, r30, 0x52c
/* 80786280  C0 3F 00 08 */	lfs f1, 8(r31)
/* 80786284  C0 5F 00 30 */	lfs f2, 0x30(r31)
/* 80786288  4B AE 97 F8 */	b cLib_addCalc0__FPfff
/* 8078628C  88 1E 06 A9 */	lbz r0, 0x6a9(r30)
/* 80786290  7C 00 07 75 */	extsb. r0, r0
/* 80786294  41 82 00 80 */	beq lbl_80786314
/* 80786298  7F C3 F3 78 */	mr r3, r30
/* 8078629C  4B FF FE 59 */	bl at_hit_check__FP10e_sf_class
/* 807862A0  28 03 00 00 */	cmplwi r3, 0
/* 807862A4  41 82 00 70 */	beq lbl_80786314
/* 807862A8  A8 03 00 08 */	lha r0, 8(r3)
/* 807862AC  2C 00 00 FD */	cmpwi r0, 0xfd
/* 807862B0  40 82 00 64 */	bne lbl_80786314
/* 807862B4  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 807862B8  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 807862BC  80 63 5D AC */	lwz r3, 0x5dac(r3)
/* 807862C0  81 83 06 28 */	lwz r12, 0x628(r3)
/* 807862C4  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 807862C8  7D 89 03 A6 */	mtctr r12
/* 807862CC  4E 80 04 21 */	bctrl 
/* 807862D0  2C 03 00 00 */	cmpwi r3, 0
/* 807862D4  41 82 00 40 */	beq lbl_80786314
/* 807862D8  C0 1F 00 04 */	lfs f0, 4(r31)
/* 807862DC  80 7E 05 D4 */	lwz r3, 0x5d4(r30)
/* 807862E0  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 807862E4  38 00 00 03 */	li r0, 3
/* 807862E8  B0 1E 06 8A */	sth r0, 0x68a(r30)
/* 807862EC  38 00 00 00 */	li r0, 0
/* 807862F0  B0 1E 05 B4 */	sth r0, 0x5b4(r30)
/* 807862F4  C0 3F 00 78 */	lfs f1, 0x78(r31)
/* 807862F8  4B AE 16 5C */	b cM_rndF__Ff
/* 807862FC  C0 1F 00 38 */	lfs f0, 0x38(r31)
/* 80786300  EC 00 08 2A */	fadds f0, f0, f1
/* 80786304  FC 00 00 1E */	fctiwz f0, f0
/* 80786308  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8078630C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80786310  B0 1E 06 A0 */	sth r0, 0x6a0(r30)
lbl_80786314:
/* 80786314  39 61 00 30 */	addi r11, r1, 0x30
/* 80786318  4B BD BF 10 */	b _restgpr_29
/* 8078631C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80786320  7C 08 03 A6 */	mtlr r0
/* 80786324  38 21 00 30 */	addi r1, r1, 0x30
/* 80786328  4E 80 00 20 */	blr 