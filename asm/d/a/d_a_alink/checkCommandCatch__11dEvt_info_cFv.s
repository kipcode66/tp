lbl_80141388:
/* 80141388  A0 03 00 04 */	lhz r0, 4(r3)
/* 8014138C  20 00 00 06 */	subfic r0, r0, 6
/* 80141390  7C 00 00 34 */	cntlzw r0, r0
/* 80141394  54 03 DE 3E */	rlwinm r3, r0, 0x1b, 0x18, 0x1f
/* 80141398  4E 80 00 20 */	blr 