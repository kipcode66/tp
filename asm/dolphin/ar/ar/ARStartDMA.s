lbl_803505D4:
/* 803505D4  7C 08 02 A6 */	mflr r0
/* 803505D8  90 01 00 04 */	stw r0, 4(r1)
/* 803505DC  94 21 FF D8 */	stwu r1, -0x28(r1)
/* 803505E0  93 E1 00 24 */	stw r31, 0x24(r1)
/* 803505E4  3B E6 00 00 */	addi r31, r6, 0
/* 803505E8  93 C1 00 20 */	stw r30, 0x20(r1)
/* 803505EC  3B C5 00 00 */	addi r30, r5, 0
/* 803505F0  93 A1 00 1C */	stw r29, 0x1c(r1)
/* 803505F4  3B A3 00 00 */	addi r29, r3, 0
/* 803505F8  93 81 00 18 */	stw r28, 0x18(r1)
/* 803505FC  3B 84 00 00 */	addi r28, r4, 0
/* 80350600  4B FE D0 F5 */	bl OSDisableInterrupts
/* 80350604  3C C0 CC 00 */	lis r6, 0xCC00 /* 0xCC005020@ha */
/* 80350608  A0 06 50 20 */	lhz r0, 0x5020(r6)  /* 0xCC005020@l */
/* 8035060C  39 06 50 00 */	addi r8, r6, 0x5000
/* 80350610  39 26 50 00 */	addi r9, r6, 0x5000
/* 80350614  54 04 00 2A */	rlwinm r4, r0, 0, 0, 0x15
/* 80350618  57 80 84 3E */	srwi r0, r28, 0x10
/* 8035061C  7C 80 03 78 */	or r0, r4, r0
/* 80350620  B0 06 50 20 */	sth r0, 0x5020(r6)
/* 80350624  57 80 04 3E */	clrlwi r0, r28, 0x10
/* 80350628  38 86 50 00 */	addi r4, r6, 0x5000
/* 8035062C  A0 A6 50 22 */	lhz r5, 0x5022(r6)
/* 80350630  54 A5 06 DE */	rlwinm r5, r5, 0, 0x1b, 0xf
/* 80350634  7C A0 03 78 */	or r0, r5, r0
/* 80350638  B0 06 50 22 */	sth r0, 0x5022(r6)
/* 8035063C  38 A6 50 00 */	addi r5, r6, 0x5000
/* 80350640  57 C0 84 3E */	srwi r0, r30, 0x10
/* 80350644  A0 C6 50 24 */	lhz r6, 0x5024(r6)
/* 80350648  54 C6 00 2A */	rlwinm r6, r6, 0, 0, 0x15
/* 8035064C  7C C0 03 78 */	or r0, r6, r0
/* 80350650  B0 08 00 24 */	sth r0, 0x24(r8)
/* 80350654  57 C0 04 3E */	clrlwi r0, r30, 0x10
/* 80350658  A0 C9 00 26 */	lhz r6, 0x26(r9)
/* 8035065C  54 C6 06 DE */	rlwinm r6, r6, 0, 0x1b, 0xf
/* 80350660  7C C0 03 78 */	or r0, r6, r0
/* 80350664  B0 09 00 26 */	sth r0, 0x26(r9)
/* 80350668  57 E6 84 3E */	srwi r6, r31, 0x10
/* 8035066C  57 E0 04 3E */	clrlwi r0, r31, 0x10
/* 80350670  A0 E4 00 28 */	lhz r7, 0x28(r4)
/* 80350674  54 E7 04 5E */	rlwinm r7, r7, 0, 0x11, 0xf
/* 80350678  53 A7 78 20 */	rlwimi r7, r29, 0xf, 0, 0x10
/* 8035067C  B0 E4 00 28 */	sth r7, 0x28(r4)
/* 80350680  A0 E4 00 28 */	lhz r7, 0x28(r4)
/* 80350684  54 E7 00 2A */	rlwinm r7, r7, 0, 0, 0x15
/* 80350688  7C E6 33 78 */	or r6, r7, r6
/* 8035068C  B0 C4 00 28 */	sth r6, 0x28(r4)
/* 80350690  A0 85 00 2A */	lhz r4, 0x2a(r5)
/* 80350694  54 84 06 DE */	rlwinm r4, r4, 0, 0x1b, 0xf
/* 80350698  7C 80 03 78 */	or r0, r4, r0
/* 8035069C  B0 05 00 2A */	sth r0, 0x2a(r5)
/* 803506A0  4B FE D0 7D */	bl OSRestoreInterrupts
/* 803506A4  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 803506A8  83 E1 00 24 */	lwz r31, 0x24(r1)
/* 803506AC  83 C1 00 20 */	lwz r30, 0x20(r1)
/* 803506B0  83 A1 00 1C */	lwz r29, 0x1c(r1)
/* 803506B4  83 81 00 18 */	lwz r28, 0x18(r1)
/* 803506B8  38 21 00 28 */	addi r1, r1, 0x28
/* 803506BC  7C 08 03 A6 */	mtlr r0
/* 803506C0  4E 80 00 20 */	blr 
