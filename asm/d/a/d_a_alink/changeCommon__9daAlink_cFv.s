lbl_80126740:
/* 80126740  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80126744  7C 08 02 A6 */	mflr r0
/* 80126748  90 01 00 14 */	stw r0, 0x14(r1)
/* 8012674C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80126750  93 C1 00 08 */	stw r30, 8(r1)
/* 80126754  7C 7F 1B 78 */	mr r31, r3
/* 80126758  80 83 06 50 */	lwz r4, 0x650(r3)
/* 8012675C  38 04 00 24 */	addi r0, r4, 0x24
/* 80126760  90 03 05 04 */	stw r0, 0x504(r3)
/* 80126764  80 03 06 50 */	lwz r0, 0x650(r3)
/* 80126768  90 03 05 24 */	stw r0, 0x524(r3)
/* 8012676C  38 00 00 00 */	li r0, 0
/* 80126770  80 83 20 60 */	lwz r4, 0x2060(r3)
/* 80126774  98 04 00 00 */	stb r0, 0(r4)
/* 80126778  98 03 2F 8C */	stb r0, 0x2f8c(r3)
/* 8012677C  38 80 00 02 */	li r4, 2
/* 80126780  C0 22 92 BC */	lfs f1, lit_6041(r2)
/* 80126784  4B F8 6F A1 */	bl resetUpperAnime__9daAlink_cFQ29daAlink_c13daAlink_UPPERf
/* 80126788  80 1F 05 74 */	lwz r0, 0x574(r31)
/* 8012678C  54 00 00 C2 */	rlwinm r0, r0, 0, 3, 1
/* 80126790  90 1F 05 74 */	stw r0, 0x574(r31)
/* 80126794  7F E3 FB 78 */	mr r3, r31
/* 80126798  4B FE A0 A9 */	bl offKandelaarModel__9daAlink_cFv
/* 8012679C  38 60 00 00 */	li r3, 0
/* 801267A0  7C 69 1B 78 */	mr r9, r3
/* 801267A4  7C 68 1B 78 */	mr r8, r3
/* 801267A8  7C 67 1B 78 */	mr r7, r3
/* 801267AC  7C 66 1B 78 */	mr r6, r3
/* 801267B0  7C 65 1B 78 */	mr r5, r3
/* 801267B4  7C 64 1B 78 */	mr r4, r3
/* 801267B8  38 00 00 02 */	li r0, 2
/* 801267BC  7C 09 03 A6 */	mtctr r0
lbl_801267C0:
/* 801267C0  7D 5F 1A 14 */	add r10, r31, r3
/* 801267C4  B1 2A 29 06 */	sth r9, 0x2906(r10)
/* 801267C8  B1 0A 29 08 */	sth r8, 0x2908(r10)
/* 801267CC  B0 EA 29 0A */	sth r7, 0x290a(r10)
/* 801267D0  B0 CA 2A 4E */	sth r6, 0x2a4e(r10)
/* 801267D4  B0 AA 2A 50 */	sth r5, 0x2a50(r10)
/* 801267D8  B0 8A 2A 52 */	sth r4, 0x2a52(r10)
/* 801267DC  38 63 00 A4 */	addi r3, r3, 0xa4
/* 801267E0  42 00 FF E0 */	bdnz lbl_801267C0
/* 801267E4  38 A0 00 00 */	li r5, 0
/* 801267E8  38 60 00 00 */	li r3, 0
/* 801267EC  38 00 00 0A */	li r0, 0xa
/* 801267F0  7C 09 03 A6 */	mtctr r0
lbl_801267F4:
/* 801267F4  7C 9F 1A 14 */	add r4, r31, r3
/* 801267F8  B0 A4 30 2C */	sth r5, 0x302c(r4)
/* 801267FC  B0 A4 30 40 */	sth r5, 0x3040(r4)
/* 80126800  38 63 00 02 */	addi r3, r3, 2
/* 80126804  42 00 FF F0 */	bdnz lbl_801267F4
/* 80126808  38 A0 00 00 */	li r5, 0
/* 8012680C  38 60 00 00 */	li r3, 0
/* 80126810  38 00 00 03 */	li r0, 3
/* 80126814  7C 09 03 A6 */	mtctr r0
lbl_80126818:
/* 80126818  7C 9F 1A 14 */	add r4, r31, r3
/* 8012681C  B0 A4 30 54 */	sth r5, 0x3054(r4)
/* 80126820  B0 A4 30 5A */	sth r5, 0x305a(r4)
/* 80126824  38 63 00 02 */	addi r3, r3, 2
/* 80126828  42 00 FF F0 */	bdnz lbl_80126818
/* 8012682C  38 00 00 00 */	li r0, 0
/* 80126830  B0 1F 04 E8 */	sth r0, 0x4e8(r31)
/* 80126834  B0 1F 2F EC */	sth r0, 0x2fec(r31)
/* 80126838  B0 1F 2F EE */	sth r0, 0x2fee(r31)
/* 8012683C  B0 1F 05 9C */	sth r0, 0x59c(r31)
/* 80126840  B0 1F 05 9E */	sth r0, 0x59e(r31)
/* 80126844  B0 1F 05 A0 */	sth r0, 0x5a0(r31)
/* 80126848  B0 1F 30 80 */	sth r0, 0x3080(r31)
/* 8012684C  B0 1F 30 82 */	sth r0, 0x3082(r31)
/* 80126850  80 9F 05 74 */	lwz r4, 0x574(r31)
/* 80126854  3C 60 FF A0 */	lis r3, 0xFFA0 /* 0xFF9FFF7F@ha */
/* 80126858  38 03 FF 7F */	addi r0, r3, 0xFF7F /* 0xFF9FFF7F@l */
/* 8012685C  7C 80 00 38 */	and r0, r4, r0
/* 80126860  90 1F 05 74 */	stw r0, 0x574(r31)
/* 80126864  80 1F 05 78 */	lwz r0, 0x578(r31)
/* 80126868  54 00 01 46 */	rlwinm r0, r0, 0, 5, 3
/* 8012686C  90 1F 05 78 */	stw r0, 0x578(r31)
/* 80126870  80 7F 21 80 */	lwz r3, 0x2180(r31)
/* 80126874  4B F7 70 71 */	bl init__16daAlink_matAnm_cFv
/* 80126878  80 7F 21 84 */	lwz r3, 0x2184(r31)
/* 8012687C  4B F7 70 69 */	bl init__16daAlink_matAnm_cFv
/* 80126880  38 00 00 00 */	li r0, 0
/* 80126884  98 1F 2F A9 */	stb r0, 0x2fa9(r31)
/* 80126888  7F E3 FB 78 */	mr r3, r31
/* 8012688C  38 80 00 01 */	li r4, 1
/* 80126890  4B FA AB A1 */	bl resetCombo__9daAlink_cFi
/* 80126894  3B C0 00 00 */	li r30, 0
/* 80126898  9B DF 2F 8D */	stb r30, 0x2f8d(r31)
/* 8012689C  9B DF 2F 8E */	stb r30, 0x2f8e(r31)
/* 801268A0  C0 02 92 C0 */	lfs f0, lit_6108(r2)
/* 801268A4  D0 1F 2B A4 */	stfs f0, 0x2ba4(r31)
/* 801268A8  D0 1F 33 A0 */	stfs f0, 0x33a0(r31)
/* 801268AC  9B DF 2F CC */	stb r30, 0x2fcc(r31)
/* 801268B0  B3 DF 32 A0 */	sth r30, 0x32a0(r31)
/* 801268B4  B3 DF 32 A2 */	sth r30, 0x32a2(r31)
/* 801268B8  B3 DF 32 A4 */	sth r30, 0x32a4(r31)
/* 801268BC  B3 DF 32 A8 */	sth r30, 0x32a8(r31)
/* 801268C0  B3 DF 32 AA */	sth r30, 0x32aa(r31)
/* 801268C4  B3 DF 32 AC */	sth r30, 0x32ac(r31)
/* 801268C8  9B DF 2F C4 */	stb r30, 0x2fc4(r31)
/* 801268CC  3C 60 80 39 */	lis r3, m__19daAlinkHIO_basic_c0@ha
/* 801268D0  38 63 D6 64 */	addi r3, r3, m__19daAlinkHIO_basic_c0@l
/* 801268D4  A8 03 00 0A */	lha r0, 0xa(r3)
/* 801268D8  98 1F 2F BA */	stb r0, 0x2fba(r31)
/* 801268DC  38 00 00 10 */	li r0, 0x10
/* 801268E0  98 1F 2F C9 */	stb r0, 0x2fc9(r31)
lbl_801268E4:
/* 801268E4  7F E3 FB 78 */	mr r3, r31
/* 801268E8  7F C4 F3 78 */	mr r4, r30
/* 801268EC  4B FF E5 3D */	bl clearFirePointDamageEffect__9daAlink_cFi
/* 801268F0  3B DE 00 01 */	addi r30, r30, 1
/* 801268F4  2C 1E 00 04 */	cmpwi r30, 4
/* 801268F8  41 80 FF EC */	blt lbl_801268E4
/* 801268FC  38 00 00 00 */	li r0, 0
/* 80126900  B0 1F 30 D0 */	sth r0, 0x30d0(r31)
/* 80126904  B0 1F 30 D2 */	sth r0, 0x30d2(r31)
/* 80126908  38 00 00 0A */	li r0, 0xa
/* 8012690C  98 1F 2F C3 */	stb r0, 0x2fc3(r31)
/* 80126910  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80126914  83 C1 00 08 */	lwz r30, 8(r1)
/* 80126918  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8012691C  7C 08 03 A6 */	mtlr r0
/* 80126920  38 21 00 10 */	addi r1, r1, 0x10
/* 80126924  4E 80 00 20 */	blr 