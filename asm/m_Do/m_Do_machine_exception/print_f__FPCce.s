lbl_80017D7C:
/* 80017D7C  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80017D80  7C 08 02 A6 */	mflr r0
/* 80017D84  90 01 00 84 */	stw r0, 0x84(r1)
/* 80017D88  7C 6B 1B 78 */	mr r11, r3
/* 80017D8C  40 86 00 24 */	bne cr1, lbl_80017DB0
/* 80017D90  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 80017D94  D8 41 00 30 */	stfd f2, 0x30(r1)
/* 80017D98  D8 61 00 38 */	stfd f3, 0x38(r1)
/* 80017D9C  D8 81 00 40 */	stfd f4, 0x40(r1)
/* 80017DA0  D8 A1 00 48 */	stfd f5, 0x48(r1)
/* 80017DA4  D8 C1 00 50 */	stfd f6, 0x50(r1)
/* 80017DA8  D8 E1 00 58 */	stfd f7, 0x58(r1)
/* 80017DAC  D9 01 00 60 */	stfd f8, 0x60(r1)
lbl_80017DB0:
/* 80017DB0  90 61 00 08 */	stw r3, 8(r1)
/* 80017DB4  90 81 00 0C */	stw r4, 0xc(r1)
/* 80017DB8  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80017DBC  90 C1 00 14 */	stw r6, 0x14(r1)
/* 80017DC0  90 E1 00 18 */	stw r7, 0x18(r1)
/* 80017DC4  91 01 00 1C */	stw r8, 0x1c(r1)
/* 80017DC8  91 21 00 20 */	stw r9, 0x20(r1)
/* 80017DCC  91 41 00 24 */	stw r10, 0x24(r1)
/* 80017DD0  38 A1 00 68 */	addi r5, r1, 0x68
/* 80017DD4  3C 00 01 00 */	lis r0, 0x100
/* 80017DD8  90 01 00 68 */	stw r0, 0x68(r1)
/* 80017DDC  38 01 00 88 */	addi r0, r1, 0x88
/* 80017DE0  90 01 00 6C */	stw r0, 0x6c(r1)
/* 80017DE4  38 01 00 08 */	addi r0, r1, 8
/* 80017DE8  90 01 00 70 */	stw r0, 0x70(r1)
/* 80017DEC  80 6D 87 10 */	lwz r3, sConsole(r13)
/* 80017DF0  7D 64 5B 78 */	mr r4, r11
/* 80017DF4  48 2D 01 3D */	bl JUTConsole_print_f_va_
/* 80017DF8  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80017DFC  7C 08 03 A6 */	mtlr r0
/* 80017E00  38 21 00 80 */	addi r1, r1, 0x80
/* 80017E04  4E 80 00 20 */	blr 
