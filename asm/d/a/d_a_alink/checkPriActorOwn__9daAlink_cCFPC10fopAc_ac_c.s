lbl_800D0948:
/* 800D0948  80 03 27 F4 */	lwz r0, 0x27f4(r3)
/* 800D094C  7C 00 20 50 */	subf r0, r0, r4
/* 800D0950  7C 00 00 34 */	cntlzw r0, r0
/* 800D0954  54 03 D9 7E */	srwi r3, r0, 5
/* 800D0958  4E 80 00 20 */	blr 
