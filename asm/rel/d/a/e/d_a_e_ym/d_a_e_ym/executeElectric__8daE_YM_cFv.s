lbl_80810E64:
/* 80810E64  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80810E68  7C 08 02 A6 */	mflr r0
/* 80810E6C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80810E70  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80810E74  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80810E78  7C 7E 1B 78 */	mr r30, r3
/* 80810E7C  3C 80 80 81 */	lis r4, lit_3925@ha
/* 80810E80  3B E4 59 94 */	addi r31, r4, lit_3925@l
/* 80810E84  80 03 06 98 */	lwz r0, 0x698(r3)
/* 80810E88  2C 00 00 02 */	cmpwi r0, 2
/* 80810E8C  41 82 00 F0 */	beq lbl_80810F7C
/* 80810E90  40 80 00 14 */	bge lbl_80810EA4
/* 80810E94  2C 00 00 00 */	cmpwi r0, 0
/* 80810E98  41 82 00 18 */	beq lbl_80810EB0
/* 80810E9C  40 80 00 44 */	bge lbl_80810EE0
/* 80810EA0  48 00 01 A4 */	b lbl_80811044
lbl_80810EA4:
/* 80810EA4  2C 00 00 04 */	cmpwi r0, 4
/* 80810EA8  40 80 01 9C */	bge lbl_80811044
/* 80810EAC  48 00 01 84 */	b lbl_80811030
lbl_80810EB0:
/* 80810EB0  38 00 00 00 */	li r0, 0
/* 80810EB4  98 1E 06 C9 */	stb r0, 0x6c9(r30)
/* 80810EB8  38 80 00 09 */	li r4, 9
/* 80810EBC  38 A0 00 00 */	li r5, 0
/* 80810EC0  C0 3F 00 38 */	lfs f1, 0x38(r31)
/* 80810EC4  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80810EC8  4B FF 73 19 */	bl bckSet__8daE_YM_cFiUcff
/* 80810ECC  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80810ED0  D0 1E 05 2C */	stfs f0, 0x52c(r30)
/* 80810ED4  38 00 00 01 */	li r0, 1
/* 80810ED8  90 1E 06 98 */	stw r0, 0x698(r30)
/* 80810EDC  48 00 01 68 */	b lbl_80811044
lbl_80810EE0:
/* 80810EE0  80 9E 05 B4 */	lwz r4, 0x5b4(r30)
/* 80810EE4  C0 24 00 1C */	lfs f1, 0x1c(r4)
/* 80810EE8  C0 1F 01 20 */	lfs f0, 0x120(r31)
/* 80810EEC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80810EF0  40 80 00 38 */	bge lbl_80810F28
/* 80810EF4  4B FF 79 91 */	bl setElecEffect1__8daE_YM_cFv
/* 80810EF8  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070195@ha */
/* 80810EFC  38 03 01 95 */	addi r0, r3, 0x0195 /* 0x00070195@l */
/* 80810F00  90 01 00 10 */	stw r0, 0x10(r1)
/* 80810F04  38 7E 05 BC */	addi r3, r30, 0x5bc
/* 80810F08  38 81 00 10 */	addi r4, r1, 0x10
/* 80810F0C  38 A0 00 00 */	li r5, 0
/* 80810F10  38 C0 FF FF */	li r6, -1
/* 80810F14  81 9E 05 BC */	lwz r12, 0x5bc(r30)
/* 80810F18  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80810F1C  7D 89 03 A6 */	mtctr r12
/* 80810F20  4E 80 04 21 */	bctrl 
/* 80810F24  48 00 00 34 */	b lbl_80810F58
lbl_80810F28:
/* 80810F28  4B FF 7A B5 */	bl setElecEffect2__8daE_YM_cFv
/* 80810F2C  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070196@ha */
/* 80810F30  38 03 01 96 */	addi r0, r3, 0x0196 /* 0x00070196@l */
/* 80810F34  90 01 00 0C */	stw r0, 0xc(r1)
/* 80810F38  38 7E 05 BC */	addi r3, r30, 0x5bc
/* 80810F3C  38 81 00 0C */	addi r4, r1, 0xc
/* 80810F40  38 A0 00 00 */	li r5, 0
/* 80810F44  38 C0 FF FF */	li r6, -1
/* 80810F48  81 9E 05 BC */	lwz r12, 0x5bc(r30)
/* 80810F4C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80810F50  7D 89 03 A6 */	mtctr r12
/* 80810F54  4E 80 04 21 */	bctrl 
lbl_80810F58:
/* 80810F58  80 7E 05 B4 */	lwz r3, 0x5b4(r30)
/* 80810F5C  38 63 00 0C */	addi r3, r3, 0xc
/* 80810F60  C0 3F 00 94 */	lfs f1, 0x94(r31)
/* 80810F64  4B B1 74 C8 */	b checkPass__12J3DFrameCtrlFf
/* 80810F68  2C 03 00 00 */	cmpwi r3, 0
/* 80810F6C  41 82 00 D8 */	beq lbl_80811044
/* 80810F70  38 00 00 02 */	li r0, 2
/* 80810F74  90 1E 06 98 */	stw r0, 0x698(r30)
/* 80810F78  48 00 00 CC */	b lbl_80811044
lbl_80810F7C:
/* 80810F7C  4B FF 7A 61 */	bl setElecEffect2__8daE_YM_cFv
/* 80810F80  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070196@ha */
/* 80810F84  38 03 01 96 */	addi r0, r3, 0x0196 /* 0x00070196@l */
/* 80810F88  90 01 00 08 */	stw r0, 8(r1)
/* 80810F8C  38 7E 05 BC */	addi r3, r30, 0x5bc
/* 80810F90  38 81 00 08 */	addi r4, r1, 8
/* 80810F94  38 A0 00 00 */	li r5, 0
/* 80810F98  38 C0 FF FF */	li r6, -1
/* 80810F9C  81 9E 05 BC */	lwz r12, 0x5bc(r30)
/* 80810FA0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80810FA4  7D 89 03 A6 */	mtctr r12
/* 80810FA8  4E 80 04 21 */	bctrl 
/* 80810FAC  3C 60 80 81 */	lis r3, l_HIO@ha
/* 80810FB0  38 63 5D 38 */	addi r3, r3, l_HIO@l
/* 80810FB4  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80810FB8  FC 00 00 1E */	fctiwz f0, f0
/* 80810FBC  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80810FC0  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80810FC4  B0 1E 07 00 */	sth r0, 0x700(r30)
/* 80810FC8  80 1E 09 74 */	lwz r0, 0x974(r30)
/* 80810FCC  60 00 00 01 */	ori r0, r0, 1
/* 80810FD0  90 1E 09 74 */	stw r0, 0x974(r30)
/* 80810FD4  80 7E 05 B4 */	lwz r3, 0x5b4(r30)
/* 80810FD8  38 80 00 01 */	li r4, 1
/* 80810FDC  88 03 00 11 */	lbz r0, 0x11(r3)
/* 80810FE0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80810FE4  40 82 00 18 */	bne lbl_80810FFC
/* 80810FE8  C0 3F 00 04 */	lfs f1, 4(r31)
/* 80810FEC  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80810FF0  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80810FF4  41 82 00 08 */	beq lbl_80810FFC
/* 80810FF8  38 80 00 00 */	li r4, 0
lbl_80810FFC:
/* 80810FFC  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80811000  41 82 00 44 */	beq lbl_80811044
/* 80811004  38 00 00 03 */	li r0, 3
/* 80811008  90 1E 06 98 */	stw r0, 0x698(r30)
/* 8081100C  38 00 00 1E */	li r0, 0x1e
/* 80811010  B0 1E 06 F0 */	sth r0, 0x6f0(r30)
/* 80811014  7F C3 F3 78 */	mr r3, r30
/* 80811018  38 80 00 0F */	li r4, 0xf
/* 8081101C  38 A0 00 02 */	li r5, 2
/* 80811020  C0 3F 00 80 */	lfs f1, 0x80(r31)
/* 80811024  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80811028  4B FF 71 B9 */	bl bckSet__8daE_YM_cFiUcff
/* 8081102C  48 00 00 18 */	b lbl_80811044
lbl_80811030:
/* 80811030  A8 1E 06 F0 */	lha r0, 0x6f0(r30)
/* 80811034  2C 00 00 00 */	cmpwi r0, 0
/* 80811038  40 82 00 0C */	bne lbl_80811044
/* 8081103C  38 80 00 00 */	li r4, 0
/* 80811040  4B FF 8F 5D */	bl setActionMode__8daE_YM_cFi
lbl_80811044:
/* 80811044  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80811048  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8081104C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80811050  7C 08 03 A6 */	mtlr r0
/* 80811054  38 21 00 30 */	addi r1, r1, 0x30
/* 80811058  4E 80 00 20 */	blr 