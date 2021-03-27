.include "macros.inc"

.section .text, "ax" # 80346484


.global PSMTXIdentity
PSMTXIdentity:
/* 80346484 003433C4  C0 02 CB 0C */	lfs f0, lbl_8045650C-_SDA2_BASE_(r2)
/* 80346488 003433C8  C0 22 CB 08 */	lfs f1, lbl_80456508-_SDA2_BASE_(r2)
/* 8034648C 003433CC  F0 03 00 08 */	psq_st f0, 8(r3), 0, qr0
/* 80346490 003433D0  10 40 0C 60 */	ps_merge01 f2, f0, f1
/* 80346494 003433D4  F0 03 00 18 */	psq_st f0, 24(r3), 0, qr0
/* 80346498 003433D8  10 21 04 A0 */	ps_merge10 f1, f1, f0
/* 8034649C 003433DC  F0 03 00 20 */	psq_st f0, 32(r3), 0, qr0
/* 803464A0 003433E0  F0 43 00 10 */	psq_st f2, 16(r3), 0, qr0
/* 803464A4 003433E4  F0 23 00 00 */	psq_st f1, 0(r3), 0, qr0
/* 803464A8 003433E8  F0 23 00 28 */	psq_st f1, 40(r3), 0, qr0
/* 803464AC 003433EC  4E 80 00 20 */	blr 

.global PSMTXCopy
PSMTXCopy:
/* 803464B0 003433F0  E0 03 00 00 */	psq_l f0, 0(r3), 0, qr0
/* 803464B4 003433F4  F0 04 00 00 */	psq_st f0, 0(r4), 0, qr0
/* 803464B8 003433F8  E0 23 00 08 */	psq_l f1, 8(r3), 0, qr0
/* 803464BC 003433FC  F0 24 00 08 */	psq_st f1, 8(r4), 0, qr0
/* 803464C0 00343400  E0 43 00 10 */	psq_l f2, 16(r3), 0, qr0
/* 803464C4 00343404  F0 44 00 10 */	psq_st f2, 16(r4), 0, qr0
/* 803464C8 00343408  E0 63 00 18 */	psq_l f3, 24(r3), 0, qr0
/* 803464CC 0034340C  F0 64 00 18 */	psq_st f3, 24(r4), 0, qr0
/* 803464D0 00343410  E0 83 00 20 */	psq_l f4, 32(r3), 0, qr0
/* 803464D4 00343414  F0 84 00 20 */	psq_st f4, 32(r4), 0, qr0
/* 803464D8 00343418  E0 A3 00 28 */	psq_l f5, 40(r3), 0, qr0
/* 803464DC 0034341C  F0 A4 00 28 */	psq_st f5, 40(r4), 0, qr0
/* 803464E0 00343420  4E 80 00 20 */	blr 

.global PSMTXConcat
PSMTXConcat:
/* 803464E4 00343424  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803464E8 00343428  E0 03 00 00 */	psq_l f0, 0(r3), 0, qr0
/* 803464EC 0034342C  D9 C1 00 08 */	stfd f14, 8(r1)
/* 803464F0 00343430  E0 C4 00 00 */	psq_l f6, 0(r4), 0, qr0
/* 803464F4 00343434  3C C0 80 45 */	lis r6, lbl_804509D0@ha
/* 803464F8 00343438  E0 E4 00 08 */	psq_l f7, 8(r4), 0, qr0
/* 803464FC 0034343C  D9 E1 00 10 */	stfd f15, 0x10(r1)
/* 80346500 00343440  38 C6 09 D0 */	addi r6, r6, lbl_804509D0@l
/* 80346504 00343444  DB E1 00 28 */	stfd f31, 0x28(r1)
/* 80346508 00343448  E1 04 00 10 */	psq_l f8, 16(r4), 0, qr0
/* 8034650C 0034344C  11 86 00 18 */	ps_muls0 f12, f6, f0
/* 80346510 00343450  E0 43 00 10 */	psq_l f2, 16(r3), 0, qr0
/* 80346514 00343454  11 A7 00 18 */	ps_muls0 f13, f7, f0
/* 80346518 00343458  E3 E6 00 00 */	psq_l f31, 0(r6), 0, qr0
/* 8034651C 0034345C  11 C6 00 98 */	ps_muls0 f14, f6, f2
/* 80346520 00343460  E1 24 00 18 */	psq_l f9, 24(r4), 0, qr0
/* 80346524 00343464  11 E7 00 98 */	ps_muls0 f15, f7, f2
/* 80346528 00343468  E0 23 00 08 */	psq_l f1, 8(r3), 0, qr0
/* 8034652C 0034346C  11 88 60 1E */	ps_madds1 f12, f8, f0, f12
/* 80346530 00343470  E0 63 00 18 */	psq_l f3, 24(r3), 0, qr0
/* 80346534 00343474  11 C8 70 9E */	ps_madds1 f14, f8, f2, f14
/* 80346538 00343478  E1 44 00 20 */	psq_l f10, 32(r4), 0, qr0
/* 8034653C 0034347C  11 A9 68 1E */	ps_madds1 f13, f9, f0, f13
/* 80346540 00343480  E1 64 00 28 */	psq_l f11, 40(r4), 0, qr0
/* 80346544 00343484  11 E9 78 9E */	ps_madds1 f15, f9, f2, f15
/* 80346548 00343488  E0 83 00 20 */	psq_l f4, 32(r3), 0, qr0
/* 8034654C 0034348C  E0 A3 00 28 */	psq_l f5, 40(r3), 0, qr0
/* 80346550 00343490  11 8A 60 5C */	ps_madds0 f12, f10, f1, f12
/* 80346554 00343494  11 AB 68 5C */	ps_madds0 f13, f11, f1, f13
/* 80346558 00343498  11 CA 70 DC */	ps_madds0 f14, f10, f3, f14
/* 8034655C 0034349C  11 EB 78 DC */	ps_madds0 f15, f11, f3, f15
/* 80346560 003434A0  F1 85 00 00 */	psq_st f12, 0(r5), 0, qr0
/* 80346564 003434A4  10 46 01 18 */	ps_muls0 f2, f6, f4
/* 80346568 003434A8  11 BF 68 5E */	ps_madds1 f13, f31, f1, f13
/* 8034656C 003434AC  10 07 01 18 */	ps_muls0 f0, f7, f4
/* 80346570 003434B0  F1 C5 00 10 */	psq_st f14, 16(r5), 0, qr0
/* 80346574 003434B4  11 FF 78 DE */	ps_madds1 f15, f31, f3, f15
/* 80346578 003434B8  F1 A5 00 08 */	psq_st f13, 8(r5), 0, qr0
/* 8034657C 003434BC  10 48 11 1E */	ps_madds1 f2, f8, f4, f2
/* 80346580 003434C0  10 09 01 1E */	ps_madds1 f0, f9, f4, f0
/* 80346584 003434C4  10 4A 11 5C */	ps_madds0 f2, f10, f5, f2
/* 80346588 003434C8  C9 C1 00 08 */	lfd f14, 8(r1)
/* 8034658C 003434CC  F1 E5 00 18 */	psq_st f15, 24(r5), 0, qr0
/* 80346590 003434D0  10 0B 01 5C */	ps_madds0 f0, f11, f5, f0
/* 80346594 003434D4  F0 45 00 20 */	psq_st f2, 32(r5), 0, qr0
/* 80346598 003434D8  10 1F 01 5E */	ps_madds1 f0, f31, f5, f0
/* 8034659C 003434DC  C9 E1 00 10 */	lfd f15, 0x10(r1)
/* 803465A0 003434E0  F0 05 00 28 */	psq_st f0, 40(r5), 0, qr0
/* 803465A4 003434E4  CB E1 00 28 */	lfd f31, 0x28(r1)
/* 803465A8 003434E8  38 21 00 40 */	addi r1, r1, 0x40
/* 803465AC 003434EC  4E 80 00 20 */	blr 

.global PSMTXInverse
PSMTXInverse:
/* 803465B0 003434F0  E0 03 80 00 */	psq_l f0, 0(r3), 1, qr0
/* 803465B4 003434F4  E0 23 00 04 */	psq_l f1, 4(r3), 0, qr0
/* 803465B8 003434F8  E0 43 80 10 */	psq_l f2, 16(r3), 1, qr0
/* 803465BC 003434FC  10 C1 04 A0 */	ps_merge10 f6, f1, f0
/* 803465C0 00343500  E0 63 00 14 */	psq_l f3, 20(r3), 0, qr0
/* 803465C4 00343504  E0 83 80 20 */	psq_l f4, 32(r3), 1, qr0
/* 803465C8 00343508  10 E3 14 A0 */	ps_merge10 f7, f3, f2
/* 803465CC 0034350C  E0 A3 00 24 */	psq_l f5, 36(r3), 0, qr0
/* 803465D0 00343510  11 63 01 B2 */	ps_mul f11, f3, f6
/* 803465D4 00343514  11 A5 01 F2 */	ps_mul f13, f5, f7
/* 803465D8 00343518  11 05 24 A0 */	ps_merge10 f8, f5, f4
/* 803465DC 0034351C  11 61 59 F8 */	ps_msub f11, f1, f7, f11
/* 803465E0 00343520  11 81 02 32 */	ps_mul f12, f1, f8
/* 803465E4 00343524  11 A3 6A 38 */	ps_msub f13, f3, f8, f13
/* 803465E8 00343528  11 43 01 32 */	ps_mul f10, f3, f4
/* 803465EC 0034352C  11 85 61 B8 */	ps_msub f12, f5, f6, f12
/* 803465F0 00343530  11 20 01 72 */	ps_mul f9, f0, f5
/* 803465F4 00343534  11 01 00 B2 */	ps_mul f8, f1, f2
/* 803465F8 00343538  10 C6 30 28 */	ps_sub f6, f6, f6
/* 803465FC 0034353C  11 42 51 78 */	ps_msub f10, f2, f5, f10
/* 80346600 00343540  10 E0 03 72 */	ps_mul f7, f0, f13
/* 80346604 00343544  11 21 49 38 */	ps_msub f9, f1, f4, f9
/* 80346608 00343548  10 E2 3B 3A */	ps_madd f7, f2, f12, f7
/* 8034660C 0034354C  11 00 40 F8 */	ps_msub f8, f0, f3, f8
/* 80346610 00343550  10 E4 3A FA */	ps_madd f7, f4, f11, f7
/* 80346614 00343554  10 07 30 40 */	ps_cmpo0 cr0, f7, f6
/* 80346618 00343558  40 82 00 0C */	bne lbl_80346624
/* 8034661C 0034355C  38 60 00 00 */	li r3, 0
/* 80346620 00343560  4E 80 00 20 */	blr 
lbl_80346624:
/* 80346624 00343564  EC 00 38 30 */	fres f0, f7
/* 80346628 00343568  10 C0 00 2A */	ps_add f6, f0, f0
/* 8034662C 0034356C  10 A0 00 32 */	ps_mul f5, f0, f0
/* 80346630 00343570  10 07 31 7C */	ps_nmsub f0, f7, f5, f6
/* 80346634 00343574  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 80346638 00343578  11 AD 00 18 */	ps_muls0 f13, f13, f0
/* 8034663C 0034357C  C0 43 00 1C */	lfs f2, 0x1c(r3)
/* 80346640 00343580  11 8C 00 18 */	ps_muls0 f12, f12, f0
/* 80346644 00343584  C0 63 00 2C */	lfs f3, 0x2c(r3)
/* 80346648 00343588  11 6B 00 18 */	ps_muls0 f11, f11, f0
/* 8034664C 0034358C  10 AD 64 20 */	ps_merge00 f5, f13, f12
/* 80346650 00343590  11 4A 00 18 */	ps_muls0 f10, f10, f0
/* 80346654 00343594  10 8D 64 E0 */	ps_merge11 f4, f13, f12
/* 80346658 00343598  11 29 00 18 */	ps_muls0 f9, f9, f0
/* 8034665C 0034359C  F0 A4 00 00 */	psq_st f5, 0(r4), 0, qr0
/* 80346660 003435A0  10 CD 00 72 */	ps_mul f6, f13, f1
/* 80346664 003435A4  F0 84 00 10 */	psq_st f4, 16(r4), 0, qr0
/* 80346668 003435A8  11 08 00 18 */	ps_muls0 f8, f8, f0
/* 8034666C 003435AC  10 CC 30 BA */	ps_madd f6, f12, f2, f6
/* 80346670 003435B0  F1 44 80 20 */	psq_st f10, 32(r4), 1, qr0
/* 80346674 003435B4  10 CB 30 FE */	ps_nmadd f6, f11, f3, f6
/* 80346678 003435B8  F1 24 80 24 */	psq_st f9, 36(r4), 1, qr0
/* 8034667C 003435BC  10 EA 00 72 */	ps_mul f7, f10, f1
/* 80346680 003435C0  10 AB 34 20 */	ps_merge00 f5, f11, f6
/* 80346684 003435C4  F1 04 80 28 */	psq_st f8, 40(r4), 1, qr0
/* 80346688 003435C8  10 8B 34 E0 */	ps_merge11 f4, f11, f6
/* 8034668C 003435CC  F0 A4 00 08 */	psq_st f5, 8(r4), 0, qr0
/* 80346690 003435D0  10 E9 38 BA */	ps_madd f7, f9, f2, f7
/* 80346694 003435D4  F0 84 00 18 */	psq_st f4, 24(r4), 0, qr0
/* 80346698 003435D8  10 E8 38 FE */	ps_nmadd f7, f8, f3, f7
/* 8034669C 003435DC  38 60 00 01 */	li r3, 1
/* 803466A0 003435E0  F0 E4 80 2C */	psq_st f7, 44(r4), 1, qr0
/* 803466A4 003435E4  4E 80 00 20 */	blr 

.global PSMTXRotRad
PSMTXRotRad:
/* 803466A8 003435E8  7C 08 02 A6 */	mflr r0
/* 803466AC 003435EC  90 01 00 04 */	stw r0, 4(r1)
/* 803466B0 003435F0  94 21 FF D8 */	stwu r1, -0x28(r1)
/* 803466B4 003435F4  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 803466B8 003435F8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803466BC 003435FC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803466C0 00343600  FF E0 08 90 */	fmr f31, f1
/* 803466C4 00343604  7C 7E 1B 78 */	mr r30, r3
/* 803466C8 00343608  7C 9F 23 78 */	mr r31, r4
/* 803466CC 0034360C  FC 20 F8 90 */	fmr f1, f31
/* 803466D0 00343610  48 02 63 19 */	bl sinf
/* 803466D4 00343614  FC 00 08 90 */	fmr f0, f1
/* 803466D8 00343618  FC 20 F8 90 */	fmr f1, f31
/* 803466DC 0034361C  FF E0 00 90 */	fmr f31, f0
/* 803466E0 00343620  48 02 63 2D */	bl cosf
/* 803466E4 00343624  FC 00 08 90 */	fmr f0, f1
/* 803466E8 00343628  7F C3 F3 78 */	mr r3, r30
/* 803466EC 0034362C  FC 20 F8 90 */	fmr f1, f31
/* 803466F0 00343630  7F E4 FB 78 */	mr r4, r31
/* 803466F4 00343634  FC 40 00 90 */	fmr f2, f0
/* 803466F8 00343638  48 00 00 21 */	bl PSMTXRotTrig
/* 803466FC 0034363C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80346700 00343640  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 80346704 00343644  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80346708 00343648  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8034670C 0034364C  38 21 00 28 */	addi r1, r1, 0x28
/* 80346710 00343650  7C 08 03 A6 */	mtlr r0
/* 80346714 00343654  4E 80 00 20 */	blr 

.global PSMTXRotTrig
PSMTXRotTrig:
/* 80346718 00343658  FC A0 08 18 */	frsp f5, f1
/* 8034671C 0034365C  FC 80 10 18 */	frsp f4, f2
/* 80346720 00343660  C0 02 CB 0C */	lfs f0, lbl_8045650C-_SDA2_BASE_(r2)
/* 80346724 00343664  C0 22 CB 08 */	lfs f1, lbl_80456508-_SDA2_BASE_(r2)
/* 80346728 00343668  60 80 00 20 */	ori r0, r4, 0x20
/* 8034672C 0034366C  10 40 28 50 */	ps_neg f2, f5
/* 80346730 00343670  28 00 00 78 */	cmplwi r0, 0x78
/* 80346734 00343674  41 82 00 18 */	beq lbl_8034674C
/* 80346738 00343678  28 00 00 79 */	cmplwi r0, 0x79
/* 8034673C 0034367C  41 82 00 38 */	beq lbl_80346774
/* 80346740 00343680  28 00 00 7A */	cmplwi r0, 0x7a
/* 80346744 00343684  41 82 00 5C */	beq lbl_803467A0
/* 80346748 00343688  48 00 00 7C */	b lbl_803467C4
lbl_8034674C:
/* 8034674C 0034368C  F0 23 80 00 */	psq_st f1, 0(r3), 1, qr0
/* 80346750 00343690  F0 03 00 04 */	psq_st f0, 4(r3), 0, qr0
/* 80346754 00343694  10 65 24 20 */	ps_merge00 f3, f5, f4
/* 80346758 00343698  F0 03 00 0C */	psq_st f0, 12(r3), 0, qr0
/* 8034675C 0034369C  10 24 14 20 */	ps_merge00 f1, f4, f2
/* 80346760 003436A0  F0 03 00 1C */	psq_st f0, 28(r3), 0, qr0
/* 80346764 003436A4  F0 03 80 2C */	psq_st f0, 44(r3), 1, qr0
/* 80346768 003436A8  F0 63 00 24 */	psq_st f3, 36(r3), 0, qr0
/* 8034676C 003436AC  F0 23 00 14 */	psq_st f1, 20(r3), 0, qr0
/* 80346770 003436B0  48 00 00 54 */	b lbl_803467C4
lbl_80346774:
/* 80346774 003436B4  10 64 04 20 */	ps_merge00 f3, f4, f0
/* 80346778 003436B8  10 20 0C 20 */	ps_merge00 f1, f0, f1
/* 8034677C 003436BC  F0 03 00 18 */	psq_st f0, 24(r3), 0, qr0
/* 80346780 003436C0  F0 63 00 00 */	psq_st f3, 0(r3), 0, qr0
/* 80346784 003436C4  10 42 04 20 */	ps_merge00 f2, f2, f0
/* 80346788 003436C8  10 05 04 20 */	ps_merge00 f0, f5, f0
/* 8034678C 003436CC  F0 63 00 28 */	psq_st f3, 40(r3), 0, qr0
/* 80346790 003436D0  F0 23 00 10 */	psq_st f1, 16(r3), 0, qr0
/* 80346794 003436D4  F0 03 00 08 */	psq_st f0, 8(r3), 0, qr0
/* 80346798 003436D8  F0 43 00 20 */	psq_st f2, 32(r3), 0, qr0
/* 8034679C 003436DC  48 00 00 28 */	b lbl_803467C4
lbl_803467A0:
/* 803467A0 003436E0  F0 03 00 08 */	psq_st f0, 8(r3), 0, qr0
/* 803467A4 003436E4  10 65 24 20 */	ps_merge00 f3, f5, f4
/* 803467A8 003436E8  10 44 14 20 */	ps_merge00 f2, f4, f2
/* 803467AC 003436EC  F0 03 00 18 */	psq_st f0, 24(r3), 0, qr0
/* 803467B0 003436F0  F0 03 00 20 */	psq_st f0, 32(r3), 0, qr0
/* 803467B4 003436F4  10 21 04 20 */	ps_merge00 f1, f1, f0
/* 803467B8 003436F8  F0 63 00 10 */	psq_st f3, 16(r3), 0, qr0
/* 803467BC 003436FC  F0 43 00 00 */	psq_st f2, 0(r3), 0, qr0
/* 803467C0 00343700  F0 23 00 28 */	psq_st f1, 40(r3), 0, qr0
lbl_803467C4:
/* 803467C4 00343704  4E 80 00 20 */	blr 

.global __PSMTXRotAxisRadInternal
__PSMTXRotAxisRadInternal:
/* 803467C8 00343708  C1 42 CB 10 */	lfs f10, lbl_80456510-_SDA2_BASE_(r2)
/* 803467CC 0034370C  C1 22 CB 14 */	lfs f9, lbl_80456514-_SDA2_BASE_(r2)
/* 803467D0 00343710  FD 60 10 18 */	frsp f11, f2
/* 803467D4 00343714  E0 44 00 00 */	psq_l f2, 0(r4), 0, qr0
/* 803467D8 00343718  FD 80 08 18 */	frsp f12, f1
/* 803467DC 0034371C  C0 64 00 08 */	lfs f3, 8(r4)
/* 803467E0 00343720  10 82 00 B2 */	ps_mul f4, f2, f2
/* 803467E4 00343724  ED 0A 50 2A */	fadds f8, f10, f10
/* 803467E8 00343728  10 A3 20 FA */	ps_madd f5, f3, f3, f4
/* 803467EC 0034372C  EC 2A 50 28 */	fsubs f1, f10, f10
/* 803467F0 00343730  10 C5 20 D4 */	ps_sum0 f6, f5, f3, f4
/* 803467F4 00343734  EC 08 58 28 */	fsubs f0, f8, f11
/* 803467F8 00343738  FC E0 30 34 */	frsqrte f7, f6
/* 803467FC 0034373C  EC 87 01 F2 */	fmuls f4, f7, f7
/* 80346800 00343740  EC A7 02 B2 */	fmuls f5, f7, f10
/* 80346804 00343744  EC 84 49 BC */	fnmsubs f4, f4, f6, f9
/* 80346808 00343748  EC E4 01 72 */	fmuls f7, f4, f5
/* 8034680C 0034374C  11 6B 5C 20 */	ps_merge00 f11, f11, f11
/* 80346810 00343750  10 42 01 D8 */	ps_muls0 f2, f2, f7
/* 80346814 00343754  10 63 01 D8 */	ps_muls0 f3, f3, f7
/* 80346818 00343758  10 C2 00 18 */	ps_muls0 f6, f2, f0
/* 8034681C 0034375C  11 42 03 18 */	ps_muls0 f10, f2, f12
/* 80346820 00343760  10 E3 00 18 */	ps_muls0 f7, f3, f0
/* 80346824 00343764  10 A6 00 9A */	ps_muls1 f5, f6, f2
/* 80346828 00343768  10 86 00 98 */	ps_muls0 f4, f6, f2
/* 8034682C 0034376C  10 C6 00 D8 */	ps_muls0 f6, f6, f3
/* 80346830 00343770  EC 03 2B 3C */	fnmsubs f0, f3, f12, f5
/* 80346834 00343774  ED 03 2B 3A */	fmadds f8, f3, f12, f5
/* 80346838 00343778  10 40 50 50 */	ps_neg f2, f10
/* 8034683C 0034377C  11 26 50 54 */	ps_sum0 f9, f6, f1, f10
/* 80346840 00343780  10 84 58 14 */	ps_sum0 f4, f4, f0, f11
/* 80346844 00343784  10 AB 2A 16 */	ps_sum1 f5, f11, f8, f5
/* 80346848 00343788  10 02 30 54 */	ps_sum0 f0, f2, f1, f6
/* 8034684C 0034378C  F1 23 00 08 */	psq_st f9, 8(r3), 0, qr0
/* 80346850 00343790  10 46 11 94 */	ps_sum0 f2, f6, f6, f2
/* 80346854 00343794  F0 83 00 00 */	psq_st f4, 0(r3), 0, qr0
/* 80346858 00343798  10 E7 00 D8 */	ps_muls0 f7, f7, f3
/* 8034685C 0034379C  F0 A3 00 10 */	psq_st f5, 16(r3), 0, qr0
/* 80346860 003437A0  10 CA 30 96 */	ps_sum1 f6, f10, f2, f6
/* 80346864 003437A4  F0 03 00 18 */	psq_st f0, 24(r3), 0, qr0
/* 80346868 003437A8  10 E7 58 54 */	ps_sum0 f7, f7, f1, f11
/* 8034686C 003437AC  F0 C3 00 20 */	psq_st f6, 32(r3), 0, qr0
/* 80346870 003437B0  F0 E3 00 28 */	psq_st f7, 40(r3), 0, qr0
/* 80346874 003437B4  4E 80 00 20 */	blr 

.global PSMTXRotAxisRad
PSMTXRotAxisRad:
/* 80346878 003437B8  7C 08 02 A6 */	mflr r0
/* 8034687C 003437BC  90 01 00 04 */	stw r0, 4(r1)
/* 80346880 003437C0  94 21 FF D8 */	stwu r1, -0x28(r1)
/* 80346884 003437C4  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80346888 003437C8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8034688C 003437CC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80346890 003437D0  FF E0 08 90 */	fmr f31, f1
/* 80346894 003437D4  7C 7E 1B 78 */	mr r30, r3
/* 80346898 003437D8  7C 9F 23 78 */	mr r31, r4
/* 8034689C 003437DC  FC 20 F8 90 */	fmr f1, f31
/* 803468A0 003437E0  48 02 61 49 */	bl sinf
/* 803468A4 003437E4  FC 00 08 90 */	fmr f0, f1
/* 803468A8 003437E8  FC 20 F8 90 */	fmr f1, f31
/* 803468AC 003437EC  FF E0 00 90 */	fmr f31, f0
/* 803468B0 003437F0  48 02 61 5D */	bl cosf
/* 803468B4 003437F4  FC 00 08 90 */	fmr f0, f1
/* 803468B8 003437F8  7F C3 F3 78 */	mr r3, r30
/* 803468BC 003437FC  FC 20 F8 90 */	fmr f1, f31
/* 803468C0 00343800  7F E4 FB 78 */	mr r4, r31
/* 803468C4 00343804  FC 40 00 90 */	fmr f2, f0
/* 803468C8 00343808  4B FF FF 01 */	bl __PSMTXRotAxisRadInternal
/* 803468CC 0034380C  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 803468D0 00343810  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 803468D4 00343814  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803468D8 00343818  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803468DC 0034381C  38 21 00 28 */	addi r1, r1, 0x28
/* 803468E0 00343820  7C 08 03 A6 */	mtlr r0
/* 803468E4 00343824  4E 80 00 20 */	blr 

.global PSMTXTrans
PSMTXTrans:
/* 803468E8 00343828  C0 02 CB 0C */	lfs f0, lbl_8045650C-_SDA2_BASE_(r2)
/* 803468EC 0034382C  C0 82 CB 08 */	lfs f4, lbl_80456508-_SDA2_BASE_(r2)
/* 803468F0 00343830  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 803468F4 00343834  D0 43 00 1C */	stfs f2, 0x1c(r3)
/* 803468F8 00343838  F0 03 00 04 */	psq_st f0, 4(r3), 0, qr0
/* 803468FC 0034383C  F0 03 00 20 */	psq_st f0, 32(r3), 0, qr0
/* 80346900 00343840  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 80346904 00343844  D0 83 00 14 */	stfs f4, 0x14(r3)
/* 80346908 00343848  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 8034690C 0034384C  D0 83 00 28 */	stfs f4, 0x28(r3)
/* 80346910 00343850  D0 63 00 2C */	stfs f3, 0x2c(r3)
/* 80346914 00343854  D0 83 00 00 */	stfs f4, 0(r3)
/* 80346918 00343858  4E 80 00 20 */	blr 

.global PSMTXTransApply
PSMTXTransApply:
/* 8034691C 0034385C  E0 83 00 00 */	psq_l f4, 0(r3), 0, qr0
/* 80346920 00343860  FC 20 08 18 */	frsp f1, f1
/* 80346924 00343864  E0 A3 00 08 */	psq_l f5, 8(r3), 0, qr0
/* 80346928 00343868  FC 40 10 18 */	frsp f2, f2
/* 8034692C 0034386C  E0 E3 00 18 */	psq_l f7, 24(r3), 0, qr0
/* 80346930 00343870  FC 60 18 18 */	frsp f3, f3
/* 80346934 00343874  E1 03 00 28 */	psq_l f8, 40(r3), 0, qr0
/* 80346938 00343878  F0 84 00 00 */	psq_st f4, 0(r4), 0, qr0
/* 8034693C 0034387C  10 A1 29 56 */	ps_sum1 f5, f1, f5, f5
/* 80346940 00343880  E0 C3 00 10 */	psq_l f6, 16(r3), 0, qr0
/* 80346944 00343884  F0 A4 00 08 */	psq_st f5, 8(r4), 0, qr0
/* 80346948 00343888  10 E2 39 D6 */	ps_sum1 f7, f2, f7, f7
/* 8034694C 0034388C  E1 23 00 20 */	psq_l f9, 32(r3), 0, qr0
/* 80346950 00343890  F0 C4 00 10 */	psq_st f6, 16(r4), 0, qr0
/* 80346954 00343894  11 03 42 16 */	ps_sum1 f8, f3, f8, f8
/* 80346958 00343898  F0 E4 00 18 */	psq_st f7, 24(r4), 0, qr0
/* 8034695C 0034389C  F1 24 00 20 */	psq_st f9, 32(r4), 0, qr0
/* 80346960 003438A0  F1 04 00 28 */	psq_st f8, 40(r4), 0, qr0
/* 80346964 003438A4  4E 80 00 20 */	blr 

.global PSMTXScale
PSMTXScale:
/* 80346968 003438A8  C0 02 CB 0C */	lfs f0, lbl_8045650C-_SDA2_BASE_(r2)
/* 8034696C 003438AC  D0 23 00 00 */	stfs f1, 0(r3)
/* 80346970 003438B0  F0 03 00 04 */	psq_st f0, 4(r3), 0, qr0
/* 80346974 003438B4  F0 03 00 0C */	psq_st f0, 12(r3), 0, qr0
/* 80346978 003438B8  D0 43 00 14 */	stfs f2, 0x14(r3)
/* 8034697C 003438BC  F0 03 00 18 */	psq_st f0, 24(r3), 0, qr0
/* 80346980 003438C0  F0 03 00 20 */	psq_st f0, 32(r3), 0, qr0
/* 80346984 003438C4  D0 63 00 28 */	stfs f3, 0x28(r3)
/* 80346988 003438C8  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 8034698C 003438CC  4E 80 00 20 */	blr 

.global PSMTXScaleApply
PSMTXScaleApply:
/* 80346990 003438D0  FC 20 08 18 */	frsp f1, f1
/* 80346994 003438D4  E0 83 00 00 */	psq_l f4, 0(r3), 0, qr0
/* 80346998 003438D8  FC 40 10 18 */	frsp f2, f2
/* 8034699C 003438DC  E0 A3 00 08 */	psq_l f5, 8(r3), 0, qr0
/* 803469A0 003438E0  FC 60 18 18 */	frsp f3, f3
/* 803469A4 003438E4  10 84 00 58 */	ps_muls0 f4, f4, f1
/* 803469A8 003438E8  E0 C3 00 10 */	psq_l f6, 16(r3), 0, qr0
/* 803469AC 003438EC  10 A5 00 58 */	ps_muls0 f5, f5, f1
/* 803469B0 003438F0  E0 E3 00 18 */	psq_l f7, 24(r3), 0, qr0
/* 803469B4 003438F4  10 C6 00 98 */	ps_muls0 f6, f6, f2
/* 803469B8 003438F8  E1 03 00 20 */	psq_l f8, 32(r3), 0, qr0
/* 803469BC 003438FC  F0 84 00 00 */	psq_st f4, 0(r4), 0, qr0
/* 803469C0 00343900  10 E7 00 98 */	ps_muls0 f7, f7, f2
/* 803469C4 00343904  E0 43 00 28 */	psq_l f2, 40(r3), 0, qr0
/* 803469C8 00343908  F0 A4 00 08 */	psq_st f5, 8(r4), 0, qr0
/* 803469CC 0034390C  11 08 00 D8 */	ps_muls0 f8, f8, f3
/* 803469D0 00343910  F0 C4 00 10 */	psq_st f6, 16(r4), 0, qr0
/* 803469D4 00343914  10 42 00 D8 */	ps_muls0 f2, f2, f3
/* 803469D8 00343918  F0 E4 00 18 */	psq_st f7, 24(r4), 0, qr0
/* 803469DC 0034391C  F1 04 00 20 */	psq_st f8, 32(r4), 0, qr0
/* 803469E0 00343920  F0 44 00 28 */	psq_st f2, 40(r4), 0, qr0
/* 803469E4 00343924  4E 80 00 20 */	blr 

.global PSMTXQuat
PSMTXQuat:
/* 803469E8 00343928  C0 22 CB 08 */	lfs f1, lbl_80456508-_SDA2_BASE_(r2)
/* 803469EC 0034392C  E0 84 00 00 */	psq_l f4, 0(r4), 0, qr0
/* 803469F0 00343930  E0 A4 00 08 */	psq_l f5, 8(r4), 0, qr0
/* 803469F4 00343934  EC 01 08 28 */	fsubs f0, f1, f1
/* 803469F8 00343938  EC 41 08 2A */	fadds f2, f1, f1
/* 803469FC 0034393C  10 C4 01 32 */	ps_mul f6, f4, f4
/* 80346A00 00343940  11 24 24 A0 */	ps_merge10 f9, f4, f4
/* 80346A04 00343944  11 05 31 7A */	ps_madd f8, f5, f5, f6
/* 80346A08 00343948  10 E5 01 72 */	ps_mul f7, f5, f5
/* 80346A0C 0034394C  10 68 42 14 */	ps_sum0 f3, f8, f8, f8
/* 80346A10 00343950  11 49 01 5A */	ps_muls1 f10, f9, f5
/* 80346A14 00343954  ED 60 18 30 */	fres f11, f3
/* 80346A18 00343958  11 07 32 16 */	ps_sum1 f8, f7, f8, f6
/* 80346A1C 0034395C  10 63 12 FC */	ps_nmsub f3, f3, f11, f2
/* 80346A20 00343960  10 E5 01 5A */	ps_muls1 f7, f5, f5
/* 80346A24 00343964  10 6B 00 F2 */	ps_mul f3, f11, f3
/* 80346A28 00343968  10 C6 31 94 */	ps_sum0 f6, f6, f6, f6
/* 80346A2C 0034396C  EC 63 00 B2 */	fmuls f3, f3, f2
/* 80346A30 00343970  11 64 3A 7A */	ps_madd f11, f4, f9, f7
/* 80346A34 00343974  10 E4 3A 78 */	ps_msub f7, f4, f9, f7
/* 80346A38 00343978  F0 03 80 0C */	psq_st f0, 12(r3), 1, qr0
/* 80346A3C 0034397C  10 C6 08 FC */	ps_nmsub f6, f6, f3, f1
/* 80346A40 00343980  11 08 08 FC */	ps_nmsub f8, f8, f3, f1
/* 80346A44 00343984  F0 03 80 2C */	psq_st f0, 44(r3), 1, qr0
/* 80346A48 00343988  11 6B 00 F2 */	ps_mul f11, f11, f3
/* 80346A4C 0034398C  10 E7 00 F2 */	ps_mul f7, f7, f3
/* 80346A50 00343990  F0 C3 80 28 */	psq_st f6, 40(r3), 1, qr0
/* 80346A54 00343994  11 24 51 5C */	ps_madds0 f9, f4, f5, f10
/* 80346A58 00343998  10 AB 44 20 */	ps_merge00 f5, f11, f8
/* 80346A5C 0034399C  11 4A 48 BC */	ps_nmsub f10, f10, f2, f9
/* 80346A60 003439A0  10 88 3C A0 */	ps_merge10 f4, f8, f7
/* 80346A64 003439A4  F0 A3 00 10 */	psq_st f5, 16(r3), 0, qr0
/* 80346A68 003439A8  11 29 00 F2 */	ps_mul f9, f9, f3
/* 80346A6C 003439AC  11 4A 00 F2 */	ps_mul f10, f10, f3
/* 80346A70 003439B0  F0 83 00 00 */	psq_st f4, 0(r3), 0, qr0
/* 80346A74 003439B4  F1 23 80 08 */	psq_st f9, 8(r3), 1, qr0
/* 80346A78 003439B8  10 EA 04 A0 */	ps_merge10 f7, f10, f0
/* 80346A7C 003439BC  11 6A 4C 60 */	ps_merge01 f11, f10, f9
/* 80346A80 003439C0  F0 E3 00 18 */	psq_st f7, 24(r3), 0, qr0
/* 80346A84 003439C4  F1 63 00 20 */	psq_st f11, 32(r3), 0, qr0
/* 80346A88 003439C8  4E 80 00 20 */	blr 

.global C_MTXLookAt
C_MTXLookAt:
/* 80346A8C 003439CC  7C 08 02 A6 */	mflr r0
/* 80346A90 003439D0  90 01 00 04 */	stw r0, 4(r1)
/* 80346A94 003439D4  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80346A98 003439D8  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80346A9C 003439DC  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80346AA0 003439E0  93 A1 00 44 */	stw r29, 0x44(r1)
/* 80346AA4 003439E4  7C 7D 1B 78 */	mr r29, r3
/* 80346AA8 003439E8  7C 9E 23 78 */	mr r30, r4
/* 80346AAC 003439EC  7C BF 2B 78 */	mr r31, r5
/* 80346AB0 003439F0  C0 3E 00 00 */	lfs f1, 0(r30)
/* 80346AB4 003439F4  38 61 00 30 */	addi r3, r1, 0x30
/* 80346AB8 003439F8  C0 06 00 00 */	lfs f0, 0(r6)
/* 80346ABC 003439FC  7C 64 1B 78 */	mr r4, r3
/* 80346AC0 00343A00  EC 01 00 28 */	fsubs f0, f1, f0
/* 80346AC4 00343A04  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80346AC8 00343A08  C0 3E 00 04 */	lfs f1, 4(r30)
/* 80346ACC 00343A0C  C0 06 00 04 */	lfs f0, 4(r6)
/* 80346AD0 00343A10  EC 01 00 28 */	fsubs f0, f1, f0
/* 80346AD4 00343A14  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80346AD8 00343A18  C0 3E 00 08 */	lfs f1, 8(r30)
/* 80346ADC 00343A1C  C0 06 00 08 */	lfs f0, 8(r6)
/* 80346AE0 00343A20  EC 01 00 28 */	fsubs f0, f1, f0
/* 80346AE4 00343A24  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 80346AE8 00343A28  48 00 06 0D */	bl PSVECNormalize
/* 80346AEC 00343A2C  7F E3 FB 78 */	mr r3, r31
/* 80346AF0 00343A30  38 81 00 30 */	addi r4, r1, 0x30
/* 80346AF4 00343A34  38 A1 00 24 */	addi r5, r1, 0x24
/* 80346AF8 00343A38  48 00 06 BD */	bl PSVECCrossProduct
/* 80346AFC 00343A3C  38 61 00 24 */	addi r3, r1, 0x24
/* 80346B00 00343A40  7C 64 1B 78 */	mr r4, r3
/* 80346B04 00343A44  48 00 05 F1 */	bl PSVECNormalize
/* 80346B08 00343A48  38 61 00 30 */	addi r3, r1, 0x30
/* 80346B0C 00343A4C  38 81 00 24 */	addi r4, r1, 0x24
/* 80346B10 00343A50  38 A1 00 18 */	addi r5, r1, 0x18
/* 80346B14 00343A54  48 00 06 A1 */	bl PSVECCrossProduct
/* 80346B18 00343A58  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80346B1C 00343A5C  D0 1D 00 00 */	stfs f0, 0(r29)
/* 80346B20 00343A60  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80346B24 00343A64  D0 1D 00 04 */	stfs f0, 4(r29)
/* 80346B28 00343A68  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 80346B2C 00343A6C  D0 1D 00 08 */	stfs f0, 8(r29)
/* 80346B30 00343A70  C0 7E 00 00 */	lfs f3, 0(r30)
/* 80346B34 00343A74  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 80346B38 00343A78  C0 3E 00 04 */	lfs f1, 4(r30)
/* 80346B3C 00343A7C  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80346B40 00343A80  EC 43 00 B2 */	fmuls f2, f3, f2
/* 80346B44 00343A84  C0 7E 00 08 */	lfs f3, 8(r30)
/* 80346B48 00343A88  EC 01 00 32 */	fmuls f0, f1, f0
/* 80346B4C 00343A8C  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 80346B50 00343A90  EC 23 00 72 */	fmuls f1, f3, f1
/* 80346B54 00343A94  EC 02 00 2A */	fadds f0, f2, f0
/* 80346B58 00343A98  EC 01 00 2A */	fadds f0, f1, f0
/* 80346B5C 00343A9C  FC 00 00 50 */	fneg f0, f0
/* 80346B60 00343AA0  D0 1D 00 0C */	stfs f0, 0xc(r29)
/* 80346B64 00343AA4  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80346B68 00343AA8  D0 1D 00 10 */	stfs f0, 0x10(r29)
/* 80346B6C 00343AAC  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80346B70 00343AB0  D0 1D 00 14 */	stfs f0, 0x14(r29)
/* 80346B74 00343AB4  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 80346B78 00343AB8  D0 1D 00 18 */	stfs f0, 0x18(r29)
/* 80346B7C 00343ABC  C0 7E 00 00 */	lfs f3, 0(r30)
/* 80346B80 00343AC0  C0 41 00 18 */	lfs f2, 0x18(r1)
/* 80346B84 00343AC4  C0 3E 00 04 */	lfs f1, 4(r30)
/* 80346B88 00343AC8  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80346B8C 00343ACC  EC 43 00 B2 */	fmuls f2, f3, f2
/* 80346B90 00343AD0  C0 7E 00 08 */	lfs f3, 8(r30)
/* 80346B94 00343AD4  EC 01 00 32 */	fmuls f0, f1, f0
/* 80346B98 00343AD8  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 80346B9C 00343ADC  EC 23 00 72 */	fmuls f1, f3, f1
/* 80346BA0 00343AE0  EC 02 00 2A */	fadds f0, f2, f0
/* 80346BA4 00343AE4  EC 01 00 2A */	fadds f0, f1, f0
/* 80346BA8 00343AE8  FC 00 00 50 */	fneg f0, f0
/* 80346BAC 00343AEC  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 80346BB0 00343AF0  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 80346BB4 00343AF4  D0 1D 00 20 */	stfs f0, 0x20(r29)
/* 80346BB8 00343AF8  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 80346BBC 00343AFC  D0 1D 00 24 */	stfs f0, 0x24(r29)
/* 80346BC0 00343B00  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 80346BC4 00343B04  D0 1D 00 28 */	stfs f0, 0x28(r29)
/* 80346BC8 00343B08  C0 7E 00 00 */	lfs f3, 0(r30)
/* 80346BCC 00343B0C  C0 41 00 30 */	lfs f2, 0x30(r1)
/* 80346BD0 00343B10  C0 3E 00 04 */	lfs f1, 4(r30)
/* 80346BD4 00343B14  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 80346BD8 00343B18  EC 43 00 B2 */	fmuls f2, f3, f2
/* 80346BDC 00343B1C  C0 7E 00 08 */	lfs f3, 8(r30)
/* 80346BE0 00343B20  EC 01 00 32 */	fmuls f0, f1, f0
/* 80346BE4 00343B24  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 80346BE8 00343B28  EC 23 00 72 */	fmuls f1, f3, f1
/* 80346BEC 00343B2C  EC 02 00 2A */	fadds f0, f2, f0
/* 80346BF0 00343B30  EC 01 00 2A */	fadds f0, f1, f0
/* 80346BF4 00343B34  FC 00 00 50 */	fneg f0, f0
/* 80346BF8 00343B38  D0 1D 00 2C */	stfs f0, 0x2c(r29)
/* 80346BFC 00343B3C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80346C00 00343B40  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80346C04 00343B44  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80346C08 00343B48  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 80346C0C 00343B4C  38 21 00 50 */	addi r1, r1, 0x50
/* 80346C10 00343B50  7C 08 03 A6 */	mtlr r0
/* 80346C14 00343B54  4E 80 00 20 */	blr 

.global C_MTXLightPerspective
C_MTXLightPerspective:
/* 80346C18 00343B58  7C 08 02 A6 */	mflr r0
/* 80346C1C 00343B5C  90 01 00 04 */	stw r0, 4(r1)
/* 80346C20 00343B60  94 21 FF A8 */	stwu r1, -0x58(r1)
/* 80346C24 00343B64  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80346C28 00343B68  DB C1 00 48 */	stfd f30, 0x48(r1)
/* 80346C2C 00343B6C  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 80346C30 00343B70  DB 81 00 38 */	stfd f28, 0x38(r1)
/* 80346C34 00343B74  DB 61 00 30 */	stfd f27, 0x30(r1)
/* 80346C38 00343B78  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80346C3C 00343B7C  FF 60 10 90 */	fmr f27, f2
/* 80346C40 00343B80  7C 7F 1B 78 */	mr r31, r3
/* 80346C44 00343B84  FF 80 18 90 */	fmr f28, f3
/* 80346C48 00343B88  FF A0 20 90 */	fmr f29, f4
/* 80346C4C 00343B8C  FF C0 28 90 */	fmr f30, f5
/* 80346C50 00343B90  FF E0 30 90 */	fmr f31, f6
/* 80346C54 00343B94  C0 42 CB 10 */	lfs f2, lbl_80456510-_SDA2_BASE_(r2)
/* 80346C58 00343B98  C0 02 CB 20 */	lfs f0, lbl_80456520-_SDA2_BASE_(r2)
/* 80346C5C 00343B9C  EC 22 00 72 */	fmuls f1, f2, f1
/* 80346C60 00343BA0  EC 20 00 72 */	fmuls f1, f0, f1
/* 80346C64 00343BA4  48 02 5D 61 */	bl tanf
/* 80346C68 00343BA8  C0 62 CB 08 */	lfs f3, lbl_80456508-_SDA2_BASE_(r2)
/* 80346C6C 00343BAC  FC 40 F0 50 */	fneg f2, f30
/* 80346C70 00343BB0  FC 00 F8 50 */	fneg f0, f31
/* 80346C74 00343BB4  EC 83 08 24 */	fdivs f4, f3, f1
/* 80346C78 00343BB8  EC 24 D8 24 */	fdivs f1, f4, f27
/* 80346C7C 00343BBC  EC 7C 00 72 */	fmuls f3, f28, f1
/* 80346C80 00343BC0  EC 24 07 72 */	fmuls f1, f4, f29
/* 80346C84 00343BC4  D0 7F 00 00 */	stfs f3, 0(r31)
/* 80346C88 00343BC8  C0 62 CB 0C */	lfs f3, lbl_8045650C-_SDA2_BASE_(r2)
/* 80346C8C 00343BCC  D0 7F 00 04 */	stfs f3, 4(r31)
/* 80346C90 00343BD0  D0 5F 00 08 */	stfs f2, 8(r31)
/* 80346C94 00343BD4  D0 7F 00 0C */	stfs f3, 0xc(r31)
/* 80346C98 00343BD8  D0 7F 00 10 */	stfs f3, 0x10(r31)
/* 80346C9C 00343BDC  D0 3F 00 14 */	stfs f1, 0x14(r31)
/* 80346CA0 00343BE0  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 80346CA4 00343BE4  D0 7F 00 1C */	stfs f3, 0x1c(r31)
/* 80346CA8 00343BE8  D0 7F 00 20 */	stfs f3, 0x20(r31)
/* 80346CAC 00343BEC  D0 7F 00 24 */	stfs f3, 0x24(r31)
/* 80346CB0 00343BF0  C0 02 CB 1C */	lfs f0, lbl_8045651C-_SDA2_BASE_(r2)
/* 80346CB4 00343BF4  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 80346CB8 00343BF8  D0 7F 00 2C */	stfs f3, 0x2c(r31)
/* 80346CBC 00343BFC  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 80346CC0 00343C00  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80346CC4 00343C04  CB C1 00 48 */	lfd f30, 0x48(r1)
/* 80346CC8 00343C08  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 80346CCC 00343C0C  CB 81 00 38 */	lfd f28, 0x38(r1)
/* 80346CD0 00343C10  CB 61 00 30 */	lfd f27, 0x30(r1)
/* 80346CD4 00343C14  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80346CD8 00343C18  38 21 00 58 */	addi r1, r1, 0x58
/* 80346CDC 00343C1C  7C 08 03 A6 */	mtlr r0
/* 80346CE0 00343C20  4E 80 00 20 */	blr 

.global C_MTXLightOrtho
C_MTXLightOrtho:
/* 80346CE4 00343C24  ED 44 18 28 */	fsubs f10, f4, f3
/* 80346CE8 00343C28  C1 62 CB 08 */	lfs f11, lbl_80456508-_SDA2_BASE_(r2)
/* 80346CEC 00343C2C  EC 01 10 28 */	fsubs f0, f1, f2
/* 80346CF0 00343C30  C1 22 CB 18 */	lfs f9, lbl_80456518-_SDA2_BASE_(r2)
/* 80346CF4 00343C34  EC 64 18 2A */	fadds f3, f4, f3
/* 80346CF8 00343C38  ED 8B 50 24 */	fdivs f12, f11, f10
/* 80346CFC 00343C3C  ED 4B 00 24 */	fdivs f10, f11, f0
/* 80346D00 00343C40  EC 89 03 32 */	fmuls f4, f9, f12
/* 80346D04 00343C44  FC 60 18 50 */	fneg f3, f3
/* 80346D08 00343C48  EC 01 10 2A */	fadds f0, f1, f2
/* 80346D0C 00343C4C  EC 24 01 72 */	fmuls f1, f4, f5
/* 80346D10 00343C50  EC 4C 00 F2 */	fmuls f2, f12, f3
/* 80346D14 00343C54  FC 00 00 50 */	fneg f0, f0
/* 80346D18 00343C58  D0 23 00 00 */	stfs f1, 0(r3)
/* 80346D1C 00343C5C  EC 29 02 B2 */	fmuls f1, f9, f10
/* 80346D20 00343C60  EC 45 00 B2 */	fmuls f2, f5, f2
/* 80346D24 00343C64  C0 62 CB 0C */	lfs f3, lbl_8045650C-_SDA2_BASE_(r2)
/* 80346D28 00343C68  EC 0A 00 32 */	fmuls f0, f10, f0
/* 80346D2C 00343C6C  D0 63 00 04 */	stfs f3, 4(r3)
/* 80346D30 00343C70  EC 47 10 2A */	fadds f2, f7, f2
/* 80346D34 00343C74  EC 21 01 B2 */	fmuls f1, f1, f6
/* 80346D38 00343C78  D0 63 00 08 */	stfs f3, 8(r3)
/* 80346D3C 00343C7C  EC 06 00 32 */	fmuls f0, f6, f0
/* 80346D40 00343C80  D0 43 00 0C */	stfs f2, 0xc(r3)
/* 80346D44 00343C84  D0 63 00 10 */	stfs f3, 0x10(r3)
/* 80346D48 00343C88  EC 08 00 2A */	fadds f0, f8, f0
/* 80346D4C 00343C8C  D0 23 00 14 */	stfs f1, 0x14(r3)
/* 80346D50 00343C90  D0 63 00 18 */	stfs f3, 0x18(r3)
/* 80346D54 00343C94  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80346D58 00343C98  D0 63 00 20 */	stfs f3, 0x20(r3)
/* 80346D5C 00343C9C  D0 63 00 24 */	stfs f3, 0x24(r3)
/* 80346D60 00343CA0  D0 63 00 28 */	stfs f3, 0x28(r3)
/* 80346D64 00343CA4  D1 63 00 2C */	stfs f11, 0x2c(r3)
/* 80346D68 00343CA8  4E 80 00 20 */	blr 
