lbl_8031706C:
/* 8031706C  80 03 00 10 */	lwz r0, 0x10(r3)
/* 80317070  3C 60 80 43 */	lis r3, j3dSys@ha
/* 80317074  38 63 4A C8 */	addi r3, r3, j3dSys@l
/* 80317078  90 03 00 54 */	stw r0, 0x54(r3)
/* 8031707C  80 03 00 34 */	lwz r0, 0x34(r3)
/* 80317080  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 80317084  4E 80 00 20 */	blr 