lbl_807299EC:
/* 807299EC  3C 80 80 73 */	lis r4, lit_3789@ha
/* 807299F0  38 A4 C1 80 */	addi r5, r4, lit_3789@l
/* 807299F4  3C 80 80 73 */	lis r4, __vt__12daE_NZ_HIO_c@ha
/* 807299F8  38 04 C3 D4 */	addi r0, r4, __vt__12daE_NZ_HIO_c@l
/* 807299FC  90 03 00 00 */	stw r0, 0(r3)
/* 80729A00  38 00 FF FF */	li r0, -1
/* 80729A04  98 03 00 04 */	stb r0, 4(r3)
/* 80729A08  C0 05 00 2C */	lfs f0, 0x2c(r5)
/* 80729A0C  D0 03 00 08 */	stfs f0, 8(r3)
/* 80729A10  C0 05 00 30 */	lfs f0, 0x30(r5)
/* 80729A14  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80729A18  C0 05 00 34 */	lfs f0, 0x34(r5)
/* 80729A1C  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 80729A20  38 00 00 05 */	li r0, 5
/* 80729A24  B0 03 00 14 */	sth r0, 0x14(r3)
/* 80729A28  C0 05 00 38 */	lfs f0, 0x38(r5)
/* 80729A2C  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 80729A30  C0 05 00 3C */	lfs f0, 0x3c(r5)
/* 80729A34  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80729A38  4E 80 00 20 */	blr 