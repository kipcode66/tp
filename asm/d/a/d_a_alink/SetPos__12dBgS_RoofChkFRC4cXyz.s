lbl_800B146C:
/* 800B146C  C0 04 00 00 */	lfs f0, 0(r4)
/* 800B1470  D0 03 00 3C */	stfs f0, 0x3c(r3)
/* 800B1474  C0 04 00 04 */	lfs f0, 4(r4)
/* 800B1478  D0 03 00 40 */	stfs f0, 0x40(r3)
/* 800B147C  C0 04 00 08 */	lfs f0, 8(r4)
/* 800B1480  D0 03 00 44 */	stfs f0, 0x44(r3)
/* 800B1484  4E 80 00 20 */	blr 
