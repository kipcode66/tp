lbl_807161F8:
/* 807161F8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 807161FC  7C 08 02 A6 */	mflr r0
/* 80716200  90 01 00 24 */	stw r0, 0x24(r1)
/* 80716204  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80716208  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8071620C  7C 7F 1B 78 */	mr r31, r3
/* 80716210  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80716214  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80716218  83 C3 5D AC */	lwz r30, 0x5dac(r3)
/* 8071621C  A8 1F 07 04 */	lha r0, 0x704(r31)
/* 80716220  2C 00 00 00 */	cmpwi r0, 0
/* 80716224  40 82 01 40 */	bne lbl_80716364
/* 80716228  38 7F 09 78 */	addi r3, r31, 0x978
/* 8071622C  4B 96 D6 05 */	bl Move__10dCcD_GSttsFv
/* 80716230  A8 1F 06 B6 */	lha r0, 0x6b6(r31)
/* 80716234  2C 00 00 09 */	cmpwi r0, 9
/* 80716238  41 80 01 10 */	blt lbl_80716348
/* 8071623C  38 7F 0A D0 */	addi r3, r31, 0xad0
/* 80716240  4B 96 E2 21 */	bl ChkTgHit__12dCcD_GObjInfFv
/* 80716244  28 03 00 00 */	cmplwi r3, 0
/* 80716248  41 82 01 00 */	beq lbl_80716348
/* 8071624C  38 7F 0A D0 */	addi r3, r31, 0xad0
/* 80716250  4B 96 E2 A9 */	bl GetTgHitObj__12dCcD_GObjInfFv
/* 80716254  90 7F 09 38 */	stw r3, 0x938(r31)
/* 80716258  7F E3 FB 78 */	mr r3, r31
/* 8071625C  38 9F 09 38 */	addi r4, r31, 0x938
/* 80716260  4B 97 19 A5 */	bl cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo
/* 80716264  80 7F 09 38 */	lwz r3, 0x938(r31)
/* 80716268  80 03 00 10 */	lwz r0, 0x10(r3)
/* 8071626C  74 00 D8 00 */	andis. r0, r0, 0xd800
/* 80716270  41 82 00 10 */	beq lbl_80716280
/* 80716274  38 00 00 14 */	li r0, 0x14
/* 80716278  B0 1F 07 04 */	sth r0, 0x704(r31)
/* 8071627C  48 00 00 0C */	b lbl_80716288
lbl_80716280:
/* 80716280  38 00 00 0A */	li r0, 0xa
/* 80716284  B0 1F 07 04 */	sth r0, 0x704(r31)
lbl_80716288:
/* 80716288  A8 1F 05 62 */	lha r0, 0x562(r31)
/* 8071628C  2C 00 00 00 */	cmpwi r0, 0
/* 80716290  41 81 00 78 */	bgt lbl_80716308
/* 80716294  3C 60 80 71 */	lis r3, s_obj_delete__FPvPv@ha /* 0x807144D4@ha */
/* 80716298  38 63 44 D4 */	addi r3, r3, s_obj_delete__FPvPv@l /* 0x807144D4@l */
/* 8071629C  7F E4 FB 78 */	mr r4, r31
/* 807162A0  4B 90 B0 99 */	bl fpcEx_Search__FPFPvPv_PvPv
/* 807162A4  38 00 00 1E */	li r0, 0x1e
/* 807162A8  B0 1F 06 B6 */	sth r0, 0x6b6(r31)
/* 807162AC  38 00 00 00 */	li r0, 0
/* 807162B0  B0 1F 05 B4 */	sth r0, 0x5b4(r31)
/* 807162B4  3C 60 00 07 */	lis r3, 0x0007 /* 0x0007006E@ha */
/* 807162B8  38 03 00 6E */	addi r0, r3, 0x006E /* 0x0007006E@l */
/* 807162BC  90 01 00 08 */	stw r0, 8(r1)
/* 807162C0  38 7F 06 10 */	addi r3, r31, 0x610
/* 807162C4  38 81 00 08 */	addi r4, r1, 8
/* 807162C8  38 A0 FF FF */	li r5, -1
/* 807162CC  81 9F 06 10 */	lwz r12, 0x610(r31)
/* 807162D0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 807162D4  7D 89 03 A6 */	mtctr r12
/* 807162D8  4E 80 04 21 */	bctrl 
/* 807162DC  38 00 4E 20 */	li r0, 0x4e20
/* 807162E0  B0 1F 07 04 */	sth r0, 0x704(r31)
/* 807162E4  3C 60 80 45 */	lis r3, mAudioMgrPtr__10Z2AudioMgr@ha /* 0x80451368@ha */
/* 807162E8  38 63 13 68 */	addi r3, r3, mAudioMgrPtr__10Z2AudioMgr@l /* 0x80451368@l */
/* 807162EC  80 63 00 00 */	lwz r3, 0(r3)
/* 807162F0  38 63 03 D0 */	addi r3, r3, 0x3d0
/* 807162F4  4B B9 95 91 */	bl subBgmStop__8Z2SeqMgrFv
/* 807162F8  38 00 00 00 */	li r0, 0
/* 807162FC  3C 60 80 45 */	lis r3, pauseTimer__9dScnPly_c+0x1@ha /* 0x80451125@ha */
/* 80716300  98 03 11 25 */	stb r0, pauseTimer__9dScnPly_c+0x1@l(r3)  /* 0x80451125@l */
/* 80716304  48 00 00 44 */	b lbl_80716348
lbl_80716308:
/* 80716308  38 00 00 0A */	li r0, 0xa
/* 8071630C  B0 1F 06 B6 */	sth r0, 0x6b6(r31)
/* 80716310  38 00 00 00 */	li r0, 0
/* 80716314  B0 1F 05 B4 */	sth r0, 0x5b4(r31)
/* 80716318  88 1E 05 68 */	lbz r0, 0x568(r30)
/* 8071631C  28 00 00 0A */	cmplwi r0, 0xa
/* 80716320  40 82 00 28 */	bne lbl_80716348
/* 80716324  7F C3 F3 78 */	mr r3, r30
/* 80716328  81 9E 06 28 */	lwz r12, 0x628(r30)
/* 8071632C  81 8C 01 3C */	lwz r12, 0x13c(r12)
/* 80716330  7D 89 03 A6 */	mtctr r12
/* 80716334  4E 80 04 21 */	bctrl 
/* 80716338  2C 03 00 00 */	cmpwi r3, 0
/* 8071633C  41 82 00 0C */	beq lbl_80716348
/* 80716340  38 00 00 03 */	li r0, 3
/* 80716344  B0 1F 07 04 */	sth r0, 0x704(r31)
lbl_80716348:
/* 80716348  A8 1F 05 62 */	lha r0, 0x562(r31)
/* 8071634C  2C 00 00 01 */	cmpwi r0, 1
/* 80716350  41 81 00 14 */	bgt lbl_80716364
/* 80716354  38 00 00 00 */	li r0, 0
/* 80716358  B0 1F 05 62 */	sth r0, 0x562(r31)
/* 8071635C  38 00 00 03 */	li r0, 3
/* 80716360  98 1F 0B 8A */	stb r0, 0xb8a(r31)
lbl_80716364:
/* 80716364  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80716368  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8071636C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80716370  7C 08 03 A6 */	mtlr r0
/* 80716374  38 21 00 20 */	addi r1, r1, 0x20
/* 80716378  4E 80 00 20 */	blr 
