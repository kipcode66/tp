lbl_80478D78:
/* 80478D78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80478D7C  7C 08 02 A6 */	mflr r0
/* 80478D80  90 01 00 14 */	stw r0, 0x14(r1)
/* 80478D84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80478D88  7C 7F 1B 78 */	mr r31, r3
/* 80478D8C  3C 60 80 48 */	lis r3, cNullVec__6Z2Calc@ha
/* 80478D90  38 A3 A6 50 */	addi r5, r3, cNullVec__6Z2Calc@l
/* 80478D94  3C 60 80 48 */	lis r3, struct_8047B1DC+0x1@ha
/* 80478D98  38 83 B1 DD */	addi r4, r3, struct_8047B1DC+0x1@l
/* 80478D9C  88 04 00 00 */	lbz r0, 0(r4)
/* 80478DA0  7C 00 07 75 */	extsb. r0, r0
/* 80478DA4  40 82 01 60 */	bne lbl_80478F04
/* 80478DA8  80 65 02 70 */	lwz r3, 0x270(r5)
/* 80478DAC  80 05 02 74 */	lwz r0, 0x274(r5)
/* 80478DB0  90 65 03 18 */	stw r3, 0x318(r5)
/* 80478DB4  90 05 03 1C */	stw r0, 0x31c(r5)
/* 80478DB8  80 05 02 78 */	lwz r0, 0x278(r5)
/* 80478DBC  90 05 03 20 */	stw r0, 0x320(r5)
/* 80478DC0  38 65 03 18 */	addi r3, r5, 0x318
/* 80478DC4  80 C5 02 7C */	lwz r6, 0x27c(r5)
/* 80478DC8  80 05 02 80 */	lwz r0, 0x280(r5)
/* 80478DCC  90 C3 00 0C */	stw r6, 0xc(r3)
/* 80478DD0  90 03 00 10 */	stw r0, 0x10(r3)
/* 80478DD4  80 05 02 84 */	lwz r0, 0x284(r5)
/* 80478DD8  90 03 00 14 */	stw r0, 0x14(r3)
/* 80478DDC  80 C5 02 88 */	lwz r6, 0x288(r5)
/* 80478DE0  80 05 02 8C */	lwz r0, 0x28c(r5)
/* 80478DE4  90 C3 00 18 */	stw r6, 0x18(r3)
/* 80478DE8  90 03 00 1C */	stw r0, 0x1c(r3)
/* 80478DEC  80 05 02 90 */	lwz r0, 0x290(r5)
/* 80478DF0  90 03 00 20 */	stw r0, 0x20(r3)
/* 80478DF4  80 C5 02 94 */	lwz r6, 0x294(r5)
/* 80478DF8  80 05 02 98 */	lwz r0, 0x298(r5)
/* 80478DFC  90 C3 00 24 */	stw r6, 0x24(r3)
/* 80478E00  90 03 00 28 */	stw r0, 0x28(r3)
/* 80478E04  80 05 02 9C */	lwz r0, 0x29c(r5)
/* 80478E08  90 03 00 2C */	stw r0, 0x2c(r3)
/* 80478E0C  80 C5 02 A0 */	lwz r6, 0x2a0(r5)
/* 80478E10  80 05 02 A4 */	lwz r0, 0x2a4(r5)
/* 80478E14  90 C3 00 30 */	stw r6, 0x30(r3)
/* 80478E18  90 03 00 34 */	stw r0, 0x34(r3)
/* 80478E1C  80 05 02 A8 */	lwz r0, 0x2a8(r5)
/* 80478E20  90 03 00 38 */	stw r0, 0x38(r3)
/* 80478E24  80 C5 02 AC */	lwz r6, 0x2ac(r5)
/* 80478E28  80 05 02 B0 */	lwz r0, 0x2b0(r5)
/* 80478E2C  90 C3 00 3C */	stw r6, 0x3c(r3)
/* 80478E30  90 03 00 40 */	stw r0, 0x40(r3)
/* 80478E34  80 05 02 B4 */	lwz r0, 0x2b4(r5)
/* 80478E38  90 03 00 44 */	stw r0, 0x44(r3)
/* 80478E3C  80 C5 02 B8 */	lwz r6, 0x2b8(r5)
/* 80478E40  80 05 02 BC */	lwz r0, 0x2bc(r5)
/* 80478E44  90 C3 00 48 */	stw r6, 0x48(r3)
/* 80478E48  90 03 00 4C */	stw r0, 0x4c(r3)
/* 80478E4C  80 05 02 C0 */	lwz r0, 0x2c0(r5)
/* 80478E50  90 03 00 50 */	stw r0, 0x50(r3)
/* 80478E54  80 C5 02 C4 */	lwz r6, 0x2c4(r5)
/* 80478E58  80 05 02 C8 */	lwz r0, 0x2c8(r5)
/* 80478E5C  90 C3 00 54 */	stw r6, 0x54(r3)
/* 80478E60  90 03 00 58 */	stw r0, 0x58(r3)
/* 80478E64  80 05 02 CC */	lwz r0, 0x2cc(r5)
/* 80478E68  90 03 00 5C */	stw r0, 0x5c(r3)
/* 80478E6C  80 C5 02 D0 */	lwz r6, 0x2d0(r5)
/* 80478E70  80 05 02 D4 */	lwz r0, 0x2d4(r5)
/* 80478E74  90 C3 00 60 */	stw r6, 0x60(r3)
/* 80478E78  90 03 00 64 */	stw r0, 0x64(r3)
/* 80478E7C  80 05 02 D8 */	lwz r0, 0x2d8(r5)
/* 80478E80  90 03 00 68 */	stw r0, 0x68(r3)
/* 80478E84  80 C5 02 DC */	lwz r6, 0x2dc(r5)
/* 80478E88  80 05 02 E0 */	lwz r0, 0x2e0(r5)
/* 80478E8C  90 C3 00 6C */	stw r6, 0x6c(r3)
/* 80478E90  90 03 00 70 */	stw r0, 0x70(r3)
/* 80478E94  80 05 02 E4 */	lwz r0, 0x2e4(r5)
/* 80478E98  90 03 00 74 */	stw r0, 0x74(r3)
/* 80478E9C  80 C5 02 E8 */	lwz r6, 0x2e8(r5)
/* 80478EA0  80 05 02 EC */	lwz r0, 0x2ec(r5)
/* 80478EA4  90 C3 00 78 */	stw r6, 0x78(r3)
/* 80478EA8  90 03 00 7C */	stw r0, 0x7c(r3)
/* 80478EAC  80 05 02 F0 */	lwz r0, 0x2f0(r5)
/* 80478EB0  90 03 00 80 */	stw r0, 0x80(r3)
/* 80478EB4  80 C5 02 F4 */	lwz r6, 0x2f4(r5)
/* 80478EB8  80 05 02 F8 */	lwz r0, 0x2f8(r5)
/* 80478EBC  90 C3 00 84 */	stw r6, 0x84(r3)
/* 80478EC0  90 03 00 88 */	stw r0, 0x88(r3)
/* 80478EC4  80 05 02 FC */	lwz r0, 0x2fc(r5)
/* 80478EC8  90 03 00 8C */	stw r0, 0x8c(r3)
/* 80478ECC  80 C5 03 00 */	lwz r6, 0x300(r5)
/* 80478ED0  80 05 03 04 */	lwz r0, 0x304(r5)
/* 80478ED4  90 C3 00 90 */	stw r6, 0x90(r3)
/* 80478ED8  90 03 00 94 */	stw r0, 0x94(r3)
/* 80478EDC  80 05 03 08 */	lwz r0, 0x308(r5)
/* 80478EE0  90 03 00 98 */	stw r0, 0x98(r3)
/* 80478EE4  80 C5 03 0C */	lwz r6, 0x30c(r5)
/* 80478EE8  80 05 03 10 */	lwz r0, 0x310(r5)
/* 80478EEC  90 C3 00 9C */	stw r6, 0x9c(r3)
/* 80478EF0  90 03 00 A0 */	stw r0, 0xa0(r3)
/* 80478EF4  80 05 03 14 */	lwz r0, 0x314(r5)
/* 80478EF8  90 03 00 A4 */	stw r0, 0xa4(r3)
/* 80478EFC  38 00 00 01 */	li r0, 1
/* 80478F00  98 04 00 00 */	stb r0, 0(r4)
lbl_80478F04:
/* 80478F04  88 1F 0D AE */	lbz r0, 0xdae(r31)
/* 80478F08  28 00 00 00 */	cmplwi r0, 0
/* 80478F0C  40 82 00 30 */	bne lbl_80478F3C
/* 80478F10  7F E3 FB 78 */	mr r3, r31
/* 80478F14  88 1F 0C F0 */	lbz r0, 0xcf0(r31)
/* 80478F18  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80478F1C  39 85 03 18 */	addi r12, r5, 0x318
/* 80478F20  7D 8C 02 14 */	add r12, r12, r0
/* 80478F24  4B EE 91 60 */	b __ptmf_scall
/* 80478F28  60 00 00 00 */	nop 
/* 80478F2C  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 80478F30  88 1F 0D AE */	lbz r0, 0xdae(r31)
/* 80478F34  7C 00 1B 78 */	or r0, r0, r3
/* 80478F38  98 1F 0D AE */	stb r0, 0xdae(r31)
lbl_80478F3C:
/* 80478F3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80478F40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80478F44  7C 08 03 A6 */	mtlr r0
/* 80478F48  38 21 00 10 */	addi r1, r1, 0x10
/* 80478F4C  4E 80 00 20 */	blr 