lbl_80037620:
/* 80037620  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80037624  7C 08 02 A6 */	mflr r0
/* 80037628  90 01 00 54 */	stw r0, 0x54(r1)
/* 8003762C  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80037630  F3 E1 00 48 */	psq_st f31, 72(r1), 0, 0 /* qr0 */
/* 80037634  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 80037638  F3 C1 00 38 */	psq_st f30, 56(r1), 0, 0 /* qr0 */
/* 8003763C  39 61 00 30 */	addi r11, r1, 0x30
/* 80037640  48 32 AB 99 */	bl _savegpr_28
/* 80037644  7C 7C 1B 78 */	mr r28, r3
/* 80037648  7C 9D 23 78 */	mr r29, r4
/* 8003764C  7C DE 33 78 */	mr r30, r6
/* 80037650  FF C0 18 90 */	fmr f30, f3
/* 80037654  FF E0 20 90 */	fmr f31, f4
/* 80037658  7C FF 3B 78 */	mr r31, r7
/* 8003765C  38 61 00 14 */	addi r3, r1, 0x14
/* 80037660  7F 84 E3 78 */	mr r4, r28
/* 80037664  4B FF FD 8D */	bl func_800373F0
/* 80037668  38 61 00 08 */	addi r3, r1, 8
/* 8003766C  7F 84 E3 78 */	mr r4, r28
/* 80037670  7F C5 F3 78 */	mr r5, r30
/* 80037674  FC 20 F0 90 */	fmr f1, f30
/* 80037678  FC 40 F8 90 */	fmr f2, f31
/* 8003767C  38 C1 00 14 */	addi r6, r1, 0x14
/* 80037680  7F E7 FB 78 */	mr r7, r31
/* 80037684  4B FF FE 69 */	bl func_800374EC
/* 80037688  C0 9C 05 2C */	lfs f4, 0x52c(r28)
/* 8003768C  C0 BC 05 30 */	lfs f5, 0x530(r28)
/* 80037690  A8 1C 04 DE */	lha r0, 0x4de(r28)
/* 80037694  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 80037698  3C 60 80 44 */	lis r3, sincosTable___5JMath@ha
/* 8003769C  38 63 9A 20 */	addi r3, r3, sincosTable___5JMath@l
/* 800376A0  7C 03 04 2E */	lfsx f0, r3, r0
/* 800376A4  C0 41 00 08 */	lfs f2, 8(r1)
/* 800376A8  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 800376AC  EC 04 00 32 */	fmuls f0, f4, f0
/* 800376B0  EC 01 00 2A */	fadds f0, f1, f0
/* 800376B4  EC 22 00 2A */	fadds f1, f2, f0
/* 800376B8  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 800376BC  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 800376C0  C0 1C 04 FC */	lfs f0, 0x4fc(r28)
/* 800376C4  EC 00 28 2A */	fadds f0, f0, f5
/* 800376C8  EC 02 00 2A */	fadds f0, f2, f0
/* 800376CC  EC A3 00 2A */	fadds f5, f3, f0
/* 800376D0  7C 63 02 14 */	add r3, r3, r0
/* 800376D4  C0 03 00 04 */	lfs f0, 4(r3)
/* 800376D8  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 800376DC  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 800376E0  EC 04 00 32 */	fmuls f0, f4, f0
/* 800376E4  EC 02 00 2A */	fadds f0, f2, f0
/* 800376E8  EC 43 00 2A */	fadds f2, f3, f0
/* 800376EC  28 1F 00 00 */	cmplwi r31, 0
/* 800376F0  41 82 00 1C */	beq lbl_8003770C
/* 800376F4  C0 1F 00 00 */	lfs f0, 0(r31)
/* 800376F8  EC 21 00 2A */	fadds f1, f1, f0
/* 800376FC  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80037700  EC A5 00 2A */	fadds f5, f5, f0
/* 80037704  C0 1F 00 08 */	lfs f0, 8(r31)
/* 80037708  EC 42 00 2A */	fadds f2, f2, f0
lbl_8003770C:
/* 8003770C  C0 1C 05 34 */	lfs f0, 0x534(r28)
/* 80037710  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 80037714  40 80 00 08 */	bge lbl_8003771C
/* 80037718  FC A0 00 90 */	fmr f5, f0
lbl_8003771C:
/* 8003771C  D0 3C 04 F8 */	stfs f1, 0x4f8(r28)
/* 80037720  D0 BC 04 FC */	stfs f5, 0x4fc(r28)
/* 80037724  D0 5C 05 00 */	stfs f2, 0x500(r28)
/* 80037728  EC 61 00 72 */	fmuls f3, f1, f1
/* 8003772C  EC 02 00 B2 */	fmuls f0, f2, f2
/* 80037730  EC 63 00 2A */	fadds f3, f3, f0
/* 80037734  C0 02 83 A0 */	lfs f0, lit_3801(r2)
/* 80037738  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8003773C  40 81 00 0C */	ble lbl_80037748
/* 80037740  FC 00 18 34 */	frsqrte f0, f3
/* 80037744  EC 60 00 F2 */	fmuls f3, f0, f3
lbl_80037748:
/* 80037748  D0 7C 05 2C */	stfs f3, 0x52c(r28)
/* 8003774C  48 22 FF 29 */	bl cM_atan2s__Fff
/* 80037750  B0 7C 04 DE */	sth r3, 0x4de(r28)
/* 80037754  7F 83 E3 78 */	mr r3, r28
/* 80037758  7F A4 EB 78 */	mr r4, r29
/* 8003775C  4B FE 2F 05 */	bl fopAcM_posMove__FP10fopAc_ac_cPC4cXyz
/* 80037760  E3 E1 00 48 */	psq_l f31, 72(r1), 0, 0 /* qr0 */
/* 80037764  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80037768  E3 C1 00 38 */	psq_l f30, 56(r1), 0, 0 /* qr0 */
/* 8003776C  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 80037770  39 61 00 30 */	addi r11, r1, 0x30
/* 80037774  48 32 AA B1 */	bl _restgpr_28
/* 80037778  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8003777C  7C 08 03 A6 */	mtlr r0
/* 80037780  38 21 00 50 */	addi r1, r1, 0x50
/* 80037784  4E 80 00 20 */	blr 