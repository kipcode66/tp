lbl_801CDA74:
/* 801CDA74  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CDA78  7C 08 02 A6 */	mflr r0
/* 801CDA7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CDA80  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CDA84  3C 60 80 3C */	lis r3, cNullVec__6Z2Calc@ha
/* 801CDA88  3B E3 D0 90 */	addi r31, r3, cNullVec__6Z2Calc@l
/* 801CDA8C  3C 60 80 43 */	lis r3, g_fmHIO@ha
/* 801CDA90  38 63 E8 2C */	addi r3, r3, g_fmHIO@l
/* 801CDA94  4B FF 8B 65 */	bl __ct__9dMf_HIO_cFv
/* 801CDA98  3C 80 80 1D */	lis r4, __dt__9dMf_HIO_cFv@ha
/* 801CDA9C  38 84 DA 2C */	addi r4, r4, __dt__9dMf_HIO_cFv@l
/* 801CDAA0  3C A0 80 43 */	lis r5, lit_3989@ha
/* 801CDAA4  38 A5 E8 20 */	addi r5, r5, lit_3989@l
/* 801CDAA8  48 19 41 7D */	bl __register_global_object
/* 801CDAAC  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801CDAB0  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 801CDAB4  90 7F 01 74 */	stw r3, 0x174(r31)
/* 801CDAB8  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801CDABC  80 1F 00 14 */	lwz r0, 0x14(r31)
/* 801CDAC0  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 801CDAC4  38 7F 01 74 */	addi r3, r31, 0x174
/* 801CDAC8  80 9F 00 18 */	lwz r4, 0x18(r31)
/* 801CDACC  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 801CDAD0  90 83 00 0C */	stw r4, 0xc(r3)
/* 801CDAD4  90 03 00 10 */	stw r0, 0x10(r3)
/* 801CDAD8  80 1F 00 20 */	lwz r0, 0x20(r31)
/* 801CDADC  90 03 00 14 */	stw r0, 0x14(r3)
/* 801CDAE0  80 9F 00 24 */	lwz r4, 0x24(r31)
/* 801CDAE4  80 1F 00 28 */	lwz r0, 0x28(r31)
/* 801CDAE8  90 83 00 18 */	stw r4, 0x18(r3)
/* 801CDAEC  90 03 00 1C */	stw r0, 0x1c(r3)
/* 801CDAF0  80 1F 00 2C */	lwz r0, 0x2c(r31)
/* 801CDAF4  90 03 00 20 */	stw r0, 0x20(r3)
/* 801CDAF8  80 9F 00 30 */	lwz r4, 0x30(r31)
/* 801CDAFC  80 1F 00 34 */	lwz r0, 0x34(r31)
/* 801CDB00  90 83 00 24 */	stw r4, 0x24(r3)
/* 801CDB04  90 03 00 28 */	stw r0, 0x28(r3)
/* 801CDB08  80 1F 00 38 */	lwz r0, 0x38(r31)
/* 801CDB0C  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801CDB10  80 9F 00 3C */	lwz r4, 0x3c(r31)
/* 801CDB14  80 1F 00 40 */	lwz r0, 0x40(r31)
/* 801CDB18  90 83 00 30 */	stw r4, 0x30(r3)
/* 801CDB1C  90 03 00 34 */	stw r0, 0x34(r3)
/* 801CDB20  80 1F 00 44 */	lwz r0, 0x44(r31)
/* 801CDB24  90 03 00 38 */	stw r0, 0x38(r3)
/* 801CDB28  80 9F 00 48 */	lwz r4, 0x48(r31)
/* 801CDB2C  80 1F 00 4C */	lwz r0, 0x4c(r31)
/* 801CDB30  90 83 00 3C */	stw r4, 0x3c(r3)
/* 801CDB34  90 03 00 40 */	stw r0, 0x40(r3)
/* 801CDB38  80 1F 00 50 */	lwz r0, 0x50(r31)
/* 801CDB3C  90 03 00 44 */	stw r0, 0x44(r3)
/* 801CDB40  80 9F 00 54 */	lwz r4, 0x54(r31)
/* 801CDB44  80 1F 00 58 */	lwz r0, 0x58(r31)
/* 801CDB48  90 83 00 48 */	stw r4, 0x48(r3)
/* 801CDB4C  90 03 00 4C */	stw r0, 0x4c(r3)
/* 801CDB50  80 1F 00 5C */	lwz r0, 0x5c(r31)
/* 801CDB54  90 03 00 50 */	stw r0, 0x50(r3)
/* 801CDB58  80 9F 00 60 */	lwz r4, 0x60(r31)
/* 801CDB5C  80 1F 00 64 */	lwz r0, 0x64(r31)
/* 801CDB60  90 83 00 54 */	stw r4, 0x54(r3)
/* 801CDB64  90 03 00 58 */	stw r0, 0x58(r3)
/* 801CDB68  80 1F 00 68 */	lwz r0, 0x68(r31)
/* 801CDB6C  90 03 00 5C */	stw r0, 0x5c(r3)
/* 801CDB70  80 9F 00 6C */	lwz r4, 0x6c(r31)
/* 801CDB74  80 1F 00 70 */	lwz r0, 0x70(r31)
/* 801CDB78  90 83 00 60 */	stw r4, 0x60(r3)
/* 801CDB7C  90 03 00 64 */	stw r0, 0x64(r3)
/* 801CDB80  80 1F 00 74 */	lwz r0, 0x74(r31)
/* 801CDB84  90 03 00 68 */	stw r0, 0x68(r3)
/* 801CDB88  80 9F 00 78 */	lwz r4, 0x78(r31)
/* 801CDB8C  80 1F 00 7C */	lwz r0, 0x7c(r31)
/* 801CDB90  90 83 00 6C */	stw r4, 0x6c(r3)
/* 801CDB94  90 03 00 70 */	stw r0, 0x70(r3)
/* 801CDB98  80 1F 00 80 */	lwz r0, 0x80(r31)
/* 801CDB9C  90 03 00 74 */	stw r0, 0x74(r3)
/* 801CDBA0  80 9F 00 84 */	lwz r4, 0x84(r31)
/* 801CDBA4  80 1F 00 88 */	lwz r0, 0x88(r31)
/* 801CDBA8  90 83 00 78 */	stw r4, 0x78(r3)
/* 801CDBAC  90 03 00 7C */	stw r0, 0x7c(r3)
/* 801CDBB0  80 1F 00 8C */	lwz r0, 0x8c(r31)
/* 801CDBB4  90 03 00 80 */	stw r0, 0x80(r3)
/* 801CDBB8  80 9F 00 90 */	lwz r4, 0x90(r31)
/* 801CDBBC  80 1F 00 94 */	lwz r0, 0x94(r31)
/* 801CDBC0  90 83 00 84 */	stw r4, 0x84(r3)
/* 801CDBC4  90 03 00 88 */	stw r0, 0x88(r3)
/* 801CDBC8  80 1F 00 98 */	lwz r0, 0x98(r31)
/* 801CDBCC  90 03 00 8C */	stw r0, 0x8c(r3)
/* 801CDBD0  80 9F 00 9C */	lwz r4, 0x9c(r31)
/* 801CDBD4  80 1F 00 A0 */	lwz r0, 0xa0(r31)
/* 801CDBD8  90 83 00 90 */	stw r4, 0x90(r3)
/* 801CDBDC  90 03 00 94 */	stw r0, 0x94(r3)
/* 801CDBE0  80 1F 00 A4 */	lwz r0, 0xa4(r31)
/* 801CDBE4  90 03 00 98 */	stw r0, 0x98(r3)
/* 801CDBE8  80 9F 00 A8 */	lwz r4, 0xa8(r31)
/* 801CDBEC  80 1F 00 AC */	lwz r0, 0xac(r31)
/* 801CDBF0  90 83 00 9C */	stw r4, 0x9c(r3)
/* 801CDBF4  90 03 00 A0 */	stw r0, 0xa0(r3)
/* 801CDBF8  80 1F 00 B0 */	lwz r0, 0xb0(r31)
/* 801CDBFC  90 03 00 A4 */	stw r0, 0xa4(r3)
/* 801CDC00  80 9F 00 B4 */	lwz r4, 0xb4(r31)
/* 801CDC04  80 1F 00 B8 */	lwz r0, 0xb8(r31)
/* 801CDC08  90 83 00 A8 */	stw r4, 0xa8(r3)
/* 801CDC0C  90 03 00 AC */	stw r0, 0xac(r3)
/* 801CDC10  80 1F 00 BC */	lwz r0, 0xbc(r31)
/* 801CDC14  90 03 00 B0 */	stw r0, 0xb0(r3)
/* 801CDC18  80 9F 00 C0 */	lwz r4, 0xc0(r31)
/* 801CDC1C  80 1F 00 C4 */	lwz r0, 0xc4(r31)
/* 801CDC20  90 83 00 B4 */	stw r4, 0xb4(r3)
/* 801CDC24  90 03 00 B8 */	stw r0, 0xb8(r3)
/* 801CDC28  80 1F 00 C8 */	lwz r0, 0xc8(r31)
/* 801CDC2C  90 03 00 BC */	stw r0, 0xbc(r3)
/* 801CDC30  80 9F 00 CC */	lwz r4, 0xcc(r31)
/* 801CDC34  80 1F 00 D0 */	lwz r0, 0xd0(r31)
/* 801CDC38  90 83 00 C0 */	stw r4, 0xc0(r3)
/* 801CDC3C  90 03 00 C4 */	stw r0, 0xc4(r3)
/* 801CDC40  80 1F 00 D4 */	lwz r0, 0xd4(r31)
/* 801CDC44  90 03 00 C8 */	stw r0, 0xc8(r3)
/* 801CDC48  80 9F 00 D8 */	lwz r4, 0xd8(r31)
/* 801CDC4C  80 1F 00 DC */	lwz r0, 0xdc(r31)
/* 801CDC50  90 83 00 CC */	stw r4, 0xcc(r3)
/* 801CDC54  90 03 00 D0 */	stw r0, 0xd0(r3)
/* 801CDC58  80 1F 00 E0 */	lwz r0, 0xe0(r31)
/* 801CDC5C  90 03 00 D4 */	stw r0, 0xd4(r3)
/* 801CDC60  80 9F 00 E4 */	lwz r4, 0xe4(r31)
/* 801CDC64  80 1F 00 E8 */	lwz r0, 0xe8(r31)
/* 801CDC68  90 83 00 D8 */	stw r4, 0xd8(r3)
/* 801CDC6C  90 03 00 DC */	stw r0, 0xdc(r3)
/* 801CDC70  80 1F 00 EC */	lwz r0, 0xec(r31)
/* 801CDC74  90 03 00 E0 */	stw r0, 0xe0(r3)
/* 801CDC78  80 9F 00 F0 */	lwz r4, 0xf0(r31)
/* 801CDC7C  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 801CDC80  90 83 00 E4 */	stw r4, 0xe4(r3)
/* 801CDC84  90 03 00 E8 */	stw r0, 0xe8(r3)
/* 801CDC88  80 1F 00 F8 */	lwz r0, 0xf8(r31)
/* 801CDC8C  90 03 00 EC */	stw r0, 0xec(r3)
/* 801CDC90  80 9F 00 FC */	lwz r4, 0xfc(r31)
/* 801CDC94  80 1F 01 00 */	lwz r0, 0x100(r31)
/* 801CDC98  90 83 00 F0 */	stw r4, 0xf0(r3)
/* 801CDC9C  90 03 00 F4 */	stw r0, 0xf4(r3)
/* 801CDCA0  80 1F 01 04 */	lwz r0, 0x104(r31)
/* 801CDCA4  90 03 00 F8 */	stw r0, 0xf8(r3)
/* 801CDCA8  80 9F 01 08 */	lwz r4, 0x108(r31)
/* 801CDCAC  80 1F 01 0C */	lwz r0, 0x10c(r31)
/* 801CDCB0  90 83 00 FC */	stw r4, 0xfc(r3)
/* 801CDCB4  90 03 01 00 */	stw r0, 0x100(r3)
/* 801CDCB8  80 1F 01 10 */	lwz r0, 0x110(r31)
/* 801CDCBC  90 03 01 04 */	stw r0, 0x104(r3)
/* 801CDCC0  80 9F 01 14 */	lwz r4, 0x114(r31)
/* 801CDCC4  80 1F 01 18 */	lwz r0, 0x118(r31)
/* 801CDCC8  90 83 01 08 */	stw r4, 0x108(r3)
/* 801CDCCC  90 03 01 0C */	stw r0, 0x10c(r3)
/* 801CDCD0  80 1F 01 1C */	lwz r0, 0x11c(r31)
/* 801CDCD4  90 03 01 10 */	stw r0, 0x110(r3)
/* 801CDCD8  80 9F 01 20 */	lwz r4, 0x120(r31)
/* 801CDCDC  80 1F 01 24 */	lwz r0, 0x124(r31)
/* 801CDCE0  90 83 01 14 */	stw r4, 0x114(r3)
/* 801CDCE4  90 03 01 18 */	stw r0, 0x118(r3)
/* 801CDCE8  80 1F 01 28 */	lwz r0, 0x128(r31)
/* 801CDCEC  90 03 01 1C */	stw r0, 0x11c(r3)
/* 801CDCF0  80 9F 01 2C */	lwz r4, 0x12c(r31)
/* 801CDCF4  80 1F 01 30 */	lwz r0, 0x130(r31)
/* 801CDCF8  90 83 01 20 */	stw r4, 0x120(r3)
/* 801CDCFC  90 03 01 24 */	stw r0, 0x124(r3)
/* 801CDD00  80 1F 01 34 */	lwz r0, 0x134(r31)
/* 801CDD04  90 03 01 28 */	stw r0, 0x128(r3)
/* 801CDD08  80 9F 01 38 */	lwz r4, 0x138(r31)
/* 801CDD0C  80 1F 01 3C */	lwz r0, 0x13c(r31)
/* 801CDD10  90 83 01 2C */	stw r4, 0x12c(r3)
/* 801CDD14  90 03 01 30 */	stw r0, 0x130(r3)
/* 801CDD18  80 1F 01 40 */	lwz r0, 0x140(r31)
/* 801CDD1C  90 03 01 34 */	stw r0, 0x134(r3)
/* 801CDD20  80 9F 01 44 */	lwz r4, 0x144(r31)
/* 801CDD24  80 1F 01 48 */	lwz r0, 0x148(r31)
/* 801CDD28  90 83 01 38 */	stw r4, 0x138(r3)
/* 801CDD2C  90 03 01 3C */	stw r0, 0x13c(r3)
/* 801CDD30  80 1F 01 4C */	lwz r0, 0x14c(r31)
/* 801CDD34  90 03 01 40 */	stw r0, 0x140(r3)
/* 801CDD38  80 9F 01 50 */	lwz r4, 0x150(r31)
/* 801CDD3C  80 1F 01 54 */	lwz r0, 0x154(r31)
/* 801CDD40  90 83 01 44 */	stw r4, 0x144(r3)
/* 801CDD44  90 03 01 48 */	stw r0, 0x148(r3)
/* 801CDD48  80 1F 01 58 */	lwz r0, 0x158(r31)
/* 801CDD4C  90 03 01 4C */	stw r0, 0x14c(r3)
/* 801CDD50  80 9F 01 5C */	lwz r4, 0x15c(r31)
/* 801CDD54  80 1F 01 60 */	lwz r0, 0x160(r31)
/* 801CDD58  90 83 01 50 */	stw r4, 0x150(r3)
/* 801CDD5C  90 03 01 54 */	stw r0, 0x154(r3)
/* 801CDD60  80 1F 01 64 */	lwz r0, 0x164(r31)
/* 801CDD64  90 03 01 58 */	stw r0, 0x158(r3)
/* 801CDD68  80 9F 01 68 */	lwz r4, 0x168(r31)
/* 801CDD6C  80 1F 01 6C */	lwz r0, 0x16c(r31)
/* 801CDD70  90 83 01 5C */	stw r4, 0x15c(r3)
/* 801CDD74  90 03 01 60 */	stw r0, 0x160(r3)
/* 801CDD78  80 1F 01 70 */	lwz r0, 0x170(r31)
/* 801CDD7C  90 03 01 64 */	stw r0, 0x164(r3)
/* 801CDD80  80 7F 02 DC */	lwz r3, 0x2dc(r31)
/* 801CDD84  80 1F 02 E0 */	lwz r0, 0x2e0(r31)
/* 801CDD88  90 7F 04 44 */	stw r3, 0x444(r31)
/* 801CDD8C  90 1F 04 48 */	stw r0, 0x448(r31)
/* 801CDD90  80 1F 02 E4 */	lwz r0, 0x2e4(r31)
/* 801CDD94  90 1F 04 4C */	stw r0, 0x44c(r31)
/* 801CDD98  38 7F 04 44 */	addi r3, r31, 0x444
/* 801CDD9C  80 9F 02 E8 */	lwz r4, 0x2e8(r31)
/* 801CDDA0  80 1F 02 EC */	lwz r0, 0x2ec(r31)
/* 801CDDA4  90 83 00 0C */	stw r4, 0xc(r3)
/* 801CDDA8  90 03 00 10 */	stw r0, 0x10(r3)
/* 801CDDAC  80 1F 02 F0 */	lwz r0, 0x2f0(r31)
/* 801CDDB0  90 03 00 14 */	stw r0, 0x14(r3)
/* 801CDDB4  80 9F 02 F4 */	lwz r4, 0x2f4(r31)
/* 801CDDB8  80 1F 02 F8 */	lwz r0, 0x2f8(r31)
/* 801CDDBC  90 83 00 18 */	stw r4, 0x18(r3)
/* 801CDDC0  90 03 00 1C */	stw r0, 0x1c(r3)
/* 801CDDC4  80 1F 02 FC */	lwz r0, 0x2fc(r31)
/* 801CDDC8  90 03 00 20 */	stw r0, 0x20(r3)
/* 801CDDCC  80 9F 03 00 */	lwz r4, 0x300(r31)
/* 801CDDD0  80 1F 03 04 */	lwz r0, 0x304(r31)
/* 801CDDD4  90 83 00 24 */	stw r4, 0x24(r3)
/* 801CDDD8  90 03 00 28 */	stw r0, 0x28(r3)
/* 801CDDDC  80 1F 03 08 */	lwz r0, 0x308(r31)
/* 801CDDE0  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801CDDE4  80 9F 03 0C */	lwz r4, 0x30c(r31)
/* 801CDDE8  80 1F 03 10 */	lwz r0, 0x310(r31)
/* 801CDDEC  90 83 00 30 */	stw r4, 0x30(r3)
/* 801CDDF0  90 03 00 34 */	stw r0, 0x34(r3)
/* 801CDDF4  80 1F 03 14 */	lwz r0, 0x314(r31)
/* 801CDDF8  90 03 00 38 */	stw r0, 0x38(r3)
/* 801CDDFC  80 9F 03 18 */	lwz r4, 0x318(r31)
/* 801CDE00  80 1F 03 1C */	lwz r0, 0x31c(r31)
/* 801CDE04  90 83 00 3C */	stw r4, 0x3c(r3)
/* 801CDE08  90 03 00 40 */	stw r0, 0x40(r3)
/* 801CDE0C  80 1F 03 20 */	lwz r0, 0x320(r31)
/* 801CDE10  90 03 00 44 */	stw r0, 0x44(r3)
/* 801CDE14  80 9F 03 24 */	lwz r4, 0x324(r31)
/* 801CDE18  80 1F 03 28 */	lwz r0, 0x328(r31)
/* 801CDE1C  90 83 00 48 */	stw r4, 0x48(r3)
/* 801CDE20  90 03 00 4C */	stw r0, 0x4c(r3)
/* 801CDE24  80 1F 03 2C */	lwz r0, 0x32c(r31)
/* 801CDE28  90 03 00 50 */	stw r0, 0x50(r3)
/* 801CDE2C  80 9F 03 30 */	lwz r4, 0x330(r31)
/* 801CDE30  80 1F 03 34 */	lwz r0, 0x334(r31)
/* 801CDE34  90 83 00 54 */	stw r4, 0x54(r3)
/* 801CDE38  90 03 00 58 */	stw r0, 0x58(r3)
/* 801CDE3C  80 1F 03 38 */	lwz r0, 0x338(r31)
/* 801CDE40  90 03 00 5C */	stw r0, 0x5c(r3)
/* 801CDE44  80 9F 03 3C */	lwz r4, 0x33c(r31)
/* 801CDE48  80 1F 03 40 */	lwz r0, 0x340(r31)
/* 801CDE4C  90 83 00 60 */	stw r4, 0x60(r3)
/* 801CDE50  90 03 00 64 */	stw r0, 0x64(r3)
/* 801CDE54  80 1F 03 44 */	lwz r0, 0x344(r31)
/* 801CDE58  90 03 00 68 */	stw r0, 0x68(r3)
/* 801CDE5C  80 9F 03 48 */	lwz r4, 0x348(r31)
/* 801CDE60  80 1F 03 4C */	lwz r0, 0x34c(r31)
/* 801CDE64  90 83 00 6C */	stw r4, 0x6c(r3)
/* 801CDE68  90 03 00 70 */	stw r0, 0x70(r3)
/* 801CDE6C  80 1F 03 50 */	lwz r0, 0x350(r31)
/* 801CDE70  90 03 00 74 */	stw r0, 0x74(r3)
/* 801CDE74  80 9F 03 54 */	lwz r4, 0x354(r31)
/* 801CDE78  80 1F 03 58 */	lwz r0, 0x358(r31)
/* 801CDE7C  90 83 00 78 */	stw r4, 0x78(r3)
/* 801CDE80  90 03 00 7C */	stw r0, 0x7c(r3)
/* 801CDE84  80 1F 03 5C */	lwz r0, 0x35c(r31)
/* 801CDE88  90 03 00 80 */	stw r0, 0x80(r3)
/* 801CDE8C  80 9F 03 60 */	lwz r4, 0x360(r31)
/* 801CDE90  80 1F 03 64 */	lwz r0, 0x364(r31)
/* 801CDE94  90 83 00 84 */	stw r4, 0x84(r3)
/* 801CDE98  90 03 00 88 */	stw r0, 0x88(r3)
/* 801CDE9C  80 1F 03 68 */	lwz r0, 0x368(r31)
/* 801CDEA0  90 03 00 8C */	stw r0, 0x8c(r3)
/* 801CDEA4  80 9F 03 6C */	lwz r4, 0x36c(r31)
/* 801CDEA8  80 1F 03 70 */	lwz r0, 0x370(r31)
/* 801CDEAC  90 83 00 90 */	stw r4, 0x90(r3)
/* 801CDEB0  90 03 00 94 */	stw r0, 0x94(r3)
/* 801CDEB4  80 1F 03 74 */	lwz r0, 0x374(r31)
/* 801CDEB8  90 03 00 98 */	stw r0, 0x98(r3)
/* 801CDEBC  80 9F 03 78 */	lwz r4, 0x378(r31)
/* 801CDEC0  80 1F 03 7C */	lwz r0, 0x37c(r31)
/* 801CDEC4  90 83 00 9C */	stw r4, 0x9c(r3)
/* 801CDEC8  90 03 00 A0 */	stw r0, 0xa0(r3)
/* 801CDECC  80 1F 03 80 */	lwz r0, 0x380(r31)
/* 801CDED0  90 03 00 A4 */	stw r0, 0xa4(r3)
/* 801CDED4  80 9F 03 84 */	lwz r4, 0x384(r31)
/* 801CDED8  80 1F 03 88 */	lwz r0, 0x388(r31)
/* 801CDEDC  90 83 00 A8 */	stw r4, 0xa8(r3)
/* 801CDEE0  90 03 00 AC */	stw r0, 0xac(r3)
/* 801CDEE4  80 1F 03 8C */	lwz r0, 0x38c(r31)
/* 801CDEE8  90 03 00 B0 */	stw r0, 0xb0(r3)
/* 801CDEEC  80 9F 03 90 */	lwz r4, 0x390(r31)
/* 801CDEF0  80 1F 03 94 */	lwz r0, 0x394(r31)
/* 801CDEF4  90 83 00 B4 */	stw r4, 0xb4(r3)
/* 801CDEF8  90 03 00 B8 */	stw r0, 0xb8(r3)
/* 801CDEFC  80 1F 03 98 */	lwz r0, 0x398(r31)
/* 801CDF00  90 03 00 BC */	stw r0, 0xbc(r3)
/* 801CDF04  80 9F 03 9C */	lwz r4, 0x39c(r31)
/* 801CDF08  80 1F 03 A0 */	lwz r0, 0x3a0(r31)
/* 801CDF0C  90 83 00 C0 */	stw r4, 0xc0(r3)
/* 801CDF10  90 03 00 C4 */	stw r0, 0xc4(r3)
/* 801CDF14  80 1F 03 A4 */	lwz r0, 0x3a4(r31)
/* 801CDF18  90 03 00 C8 */	stw r0, 0xc8(r3)
/* 801CDF1C  80 9F 03 A8 */	lwz r4, 0x3a8(r31)
/* 801CDF20  80 1F 03 AC */	lwz r0, 0x3ac(r31)
/* 801CDF24  90 83 00 CC */	stw r4, 0xcc(r3)
/* 801CDF28  90 03 00 D0 */	stw r0, 0xd0(r3)
/* 801CDF2C  80 1F 03 B0 */	lwz r0, 0x3b0(r31)
/* 801CDF30  90 03 00 D4 */	stw r0, 0xd4(r3)
/* 801CDF34  80 9F 03 B4 */	lwz r4, 0x3b4(r31)
/* 801CDF38  80 1F 03 B8 */	lwz r0, 0x3b8(r31)
/* 801CDF3C  90 83 00 D8 */	stw r4, 0xd8(r3)
/* 801CDF40  90 03 00 DC */	stw r0, 0xdc(r3)
/* 801CDF44  80 1F 03 BC */	lwz r0, 0x3bc(r31)
/* 801CDF48  90 03 00 E0 */	stw r0, 0xe0(r3)
/* 801CDF4C  80 9F 03 C0 */	lwz r4, 0x3c0(r31)
/* 801CDF50  80 1F 03 C4 */	lwz r0, 0x3c4(r31)
/* 801CDF54  90 83 00 E4 */	stw r4, 0xe4(r3)
/* 801CDF58  90 03 00 E8 */	stw r0, 0xe8(r3)
/* 801CDF5C  80 1F 03 C8 */	lwz r0, 0x3c8(r31)
/* 801CDF60  90 03 00 EC */	stw r0, 0xec(r3)
/* 801CDF64  80 9F 03 CC */	lwz r4, 0x3cc(r31)
/* 801CDF68  80 1F 03 D0 */	lwz r0, 0x3d0(r31)
/* 801CDF6C  90 83 00 F0 */	stw r4, 0xf0(r3)
/* 801CDF70  90 03 00 F4 */	stw r0, 0xf4(r3)
/* 801CDF74  80 1F 03 D4 */	lwz r0, 0x3d4(r31)
/* 801CDF78  90 03 00 F8 */	stw r0, 0xf8(r3)
/* 801CDF7C  80 9F 03 D8 */	lwz r4, 0x3d8(r31)
/* 801CDF80  80 1F 03 DC */	lwz r0, 0x3dc(r31)
/* 801CDF84  90 83 00 FC */	stw r4, 0xfc(r3)
/* 801CDF88  90 03 01 00 */	stw r0, 0x100(r3)
/* 801CDF8C  80 1F 03 E0 */	lwz r0, 0x3e0(r31)
/* 801CDF90  90 03 01 04 */	stw r0, 0x104(r3)
/* 801CDF94  80 9F 03 E4 */	lwz r4, 0x3e4(r31)
/* 801CDF98  80 1F 03 E8 */	lwz r0, 0x3e8(r31)
/* 801CDF9C  90 83 01 08 */	stw r4, 0x108(r3)
/* 801CDFA0  90 03 01 0C */	stw r0, 0x10c(r3)
/* 801CDFA4  80 1F 03 EC */	lwz r0, 0x3ec(r31)
/* 801CDFA8  90 03 01 10 */	stw r0, 0x110(r3)
/* 801CDFAC  80 9F 03 F0 */	lwz r4, 0x3f0(r31)
/* 801CDFB0  80 1F 03 F4 */	lwz r0, 0x3f4(r31)
/* 801CDFB4  90 83 01 14 */	stw r4, 0x114(r3)
/* 801CDFB8  90 03 01 18 */	stw r0, 0x118(r3)
/* 801CDFBC  80 1F 03 F8 */	lwz r0, 0x3f8(r31)
/* 801CDFC0  90 03 01 1C */	stw r0, 0x11c(r3)
/* 801CDFC4  80 9F 03 FC */	lwz r4, 0x3fc(r31)
/* 801CDFC8  80 1F 04 00 */	lwz r0, 0x400(r31)
/* 801CDFCC  90 83 01 20 */	stw r4, 0x120(r3)
/* 801CDFD0  90 03 01 24 */	stw r0, 0x124(r3)
/* 801CDFD4  80 1F 04 04 */	lwz r0, 0x404(r31)
/* 801CDFD8  90 03 01 28 */	stw r0, 0x128(r3)
/* 801CDFDC  80 9F 04 08 */	lwz r4, 0x408(r31)
/* 801CDFE0  80 1F 04 0C */	lwz r0, 0x40c(r31)
/* 801CDFE4  90 83 01 2C */	stw r4, 0x12c(r3)
/* 801CDFE8  90 03 01 30 */	stw r0, 0x130(r3)
/* 801CDFEC  80 1F 04 10 */	lwz r0, 0x410(r31)
/* 801CDFF0  90 03 01 34 */	stw r0, 0x134(r3)
/* 801CDFF4  80 9F 04 14 */	lwz r4, 0x414(r31)
/* 801CDFF8  80 1F 04 18 */	lwz r0, 0x418(r31)
/* 801CDFFC  90 83 01 38 */	stw r4, 0x138(r3)
/* 801CE000  90 03 01 3C */	stw r0, 0x13c(r3)
/* 801CE004  80 1F 04 1C */	lwz r0, 0x41c(r31)
/* 801CE008  90 03 01 40 */	stw r0, 0x140(r3)
/* 801CE00C  80 9F 04 20 */	lwz r4, 0x420(r31)
/* 801CE010  80 1F 04 24 */	lwz r0, 0x424(r31)
/* 801CE014  90 83 01 44 */	stw r4, 0x144(r3)
/* 801CE018  90 03 01 48 */	stw r0, 0x148(r3)
/* 801CE01C  80 1F 04 28 */	lwz r0, 0x428(r31)
/* 801CE020  90 03 01 4C */	stw r0, 0x14c(r3)
/* 801CE024  80 9F 04 2C */	lwz r4, 0x42c(r31)
/* 801CE028  80 1F 04 30 */	lwz r0, 0x430(r31)
/* 801CE02C  90 83 01 50 */	stw r4, 0x150(r3)
/* 801CE030  90 03 01 54 */	stw r0, 0x154(r3)
/* 801CE034  80 1F 04 34 */	lwz r0, 0x434(r31)
/* 801CE038  90 03 01 58 */	stw r0, 0x158(r3)
/* 801CE03C  80 9F 04 38 */	lwz r4, 0x438(r31)
/* 801CE040  80 1F 04 3C */	lwz r0, 0x43c(r31)
/* 801CE044  90 83 01 5C */	stw r4, 0x15c(r3)
/* 801CE048  90 03 01 60 */	stw r0, 0x160(r3)
/* 801CE04C  80 1F 04 40 */	lwz r0, 0x440(r31)
/* 801CE050  90 03 01 64 */	stw r0, 0x164(r3)
/* 801CE054  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CE058  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CE05C  7C 08 03 A6 */	mtlr r0
/* 801CE060  38 21 00 10 */	addi r1, r1, 0x10
/* 801CE064  4E 80 00 20 */	blr 