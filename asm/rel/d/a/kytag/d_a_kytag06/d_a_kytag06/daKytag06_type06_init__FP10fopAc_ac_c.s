lbl_80859AF0:
/* 80859AF0  80 03 00 B0 */	lwz r0, 0xb0(r3)
/* 80859AF4  54 00 C6 3E */	rlwinm r0, r0, 0x18, 0x18, 0x1f
/* 80859AF8  98 03 05 95 */	stb r0, 0x595(r3)
/* 80859AFC  80 03 00 B0 */	lwz r0, 0xb0(r3)
/* 80859B00  98 03 05 91 */	stb r0, 0x591(r3)
/* 80859B04  38 00 00 00 */	li r0, 0
/* 80859B08  98 03 05 90 */	stb r0, 0x590(r3)
/* 80859B0C  98 03 05 98 */	stb r0, 0x598(r3)
/* 80859B10  4E 80 00 20 */	blr 
