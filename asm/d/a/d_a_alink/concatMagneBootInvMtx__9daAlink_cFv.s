lbl_800E243C:
/* 800E243C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800E2440  7C 08 02 A6 */	mflr r0
/* 800E2444  90 01 00 14 */	stw r0, 0x14(r1)
/* 800E2448  7C 64 1B 78 */	mr r4, r3
/* 800E244C  80 03 05 70 */	lwz r0, 0x570(r3)
/* 800E2450  54 00 04 E7 */	rlwinm. r0, r0, 0, 0x13, 0x13
/* 800E2454  41 82 00 18 */	beq lbl_800E246C
/* 800E2458  3C 60 80 3E */	lis r3, now__14mDoMtx_stack_c@ha
/* 800E245C  38 63 D4 70 */	addi r3, r3, now__14mDoMtx_stack_c@l
/* 800E2460  38 84 2C 78 */	addi r4, r4, 0x2c78
/* 800E2464  7C 65 1B 78 */	mr r5, r3
/* 800E2468  48 26 40 7D */	bl PSMTXConcat
lbl_800E246C:
/* 800E246C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800E2470  7C 08 03 A6 */	mtlr r0
/* 800E2474  38 21 00 10 */	addi r1, r1, 0x10
/* 800E2478  4E 80 00 20 */	blr 