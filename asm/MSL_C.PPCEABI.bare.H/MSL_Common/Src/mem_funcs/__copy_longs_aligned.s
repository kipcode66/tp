lbl_80366410:
/* 80366410  7C 03 00 D0 */	neg r0, r3
/* 80366414  38 84 FF FF */	addi r4, r4, -1
/* 80366418  54 06 07 BF */	clrlwi. r6, r0, 0x1e
/* 8036641C  38 63 FF FF */	addi r3, r3, -1
/* 80366420  41 82 00 18 */	beq lbl_80366438
/* 80366424  7C A6 28 50 */	subf r5, r6, r5
lbl_80366428:
/* 80366428  8C 04 00 01 */	lbzu r0, 1(r4)
/* 8036642C  34 C6 FF FF */	addic. r6, r6, -1
/* 80366430  9C 03 00 01 */	stbu r0, 1(r3)
/* 80366434  40 82 FF F4 */	bne lbl_80366428
lbl_80366438:
/* 80366438  54 A6 D9 7F */	rlwinm. r6, r5, 0x1b, 5, 0x1f
/* 8036643C  38 E4 FF FD */	addi r7, r4, -3
/* 80366440  38 83 FF FD */	addi r4, r3, -3
/* 80366444  41 82 00 4C */	beq lbl_80366490
lbl_80366448:
/* 80366448  80 67 00 04 */	lwz r3, 4(r7)
/* 8036644C  34 C6 FF FF */	addic. r6, r6, -1
/* 80366450  80 07 00 08 */	lwz r0, 8(r7)
/* 80366454  90 64 00 04 */	stw r3, 4(r4)
/* 80366458  80 67 00 0C */	lwz r3, 0xc(r7)
/* 8036645C  90 04 00 08 */	stw r0, 8(r4)
/* 80366460  80 07 00 10 */	lwz r0, 0x10(r7)
/* 80366464  90 64 00 0C */	stw r3, 0xc(r4)
/* 80366468  80 67 00 14 */	lwz r3, 0x14(r7)
/* 8036646C  90 04 00 10 */	stw r0, 0x10(r4)
/* 80366470  80 07 00 18 */	lwz r0, 0x18(r7)
/* 80366474  90 64 00 14 */	stw r3, 0x14(r4)
/* 80366478  80 67 00 1C */	lwz r3, 0x1c(r7)
/* 8036647C  90 04 00 18 */	stw r0, 0x18(r4)
/* 80366480  84 07 00 20 */	lwzu r0, 0x20(r7)
/* 80366484  90 64 00 1C */	stw r3, 0x1c(r4)
/* 80366488  94 04 00 20 */	stwu r0, 0x20(r4)
/* 8036648C  40 82 FF BC */	bne lbl_80366448
lbl_80366490:
/* 80366490  54 A3 F7 7F */	rlwinm. r3, r5, 0x1e, 0x1d, 0x1f
/* 80366494  41 82 00 14 */	beq lbl_803664A8
lbl_80366498:
/* 80366498  84 07 00 04 */	lwzu r0, 4(r7)
/* 8036649C  34 63 FF FF */	addic. r3, r3, -1
/* 803664A0  94 04 00 04 */	stwu r0, 4(r4)
/* 803664A4  40 82 FF F4 */	bne lbl_80366498
lbl_803664A8:
/* 803664A8  54 A5 07 BF */	clrlwi. r5, r5, 0x1e
/* 803664AC  38 C7 00 03 */	addi r6, r7, 3
/* 803664B0  38 64 00 03 */	addi r3, r4, 3
/* 803664B4  4D 82 00 20 */	beqlr 
lbl_803664B8:
/* 803664B8  8C 06 00 01 */	lbzu r0, 1(r6)
/* 803664BC  34 A5 FF FF */	addic. r5, r5, -1
/* 803664C0  9C 03 00 01 */	stbu r0, 1(r3)
/* 803664C4  40 82 FF F4 */	bne lbl_803664B8
/* 803664C8  4E 80 00 20 */	blr 
