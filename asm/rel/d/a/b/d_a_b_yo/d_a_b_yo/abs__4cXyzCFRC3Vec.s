lbl_806396CC:
/* 806396CC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 806396D0  7C 08 02 A6 */	mflr r0
/* 806396D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 806396D8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 806396DC  3C A0 80 64 */	lis r5, lit_3788@ha
/* 806396E0  3B E5 97 F4 */	addi r31, r5, lit_3788@l
/* 806396E4  4B D0 DC B8 */	b PSVECSquareDistance
/* 806396E8  C0 1F 00 30 */	lfs f0, 0x30(r31)
/* 806396EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 806396F0  40 81 00 58 */	ble lbl_80639748
/* 806396F4  FC 00 08 34 */	frsqrte f0, f1
/* 806396F8  C8 9F 01 40 */	lfd f4, 0x140(r31)
/* 806396FC  FC 44 00 32 */	fmul f2, f4, f0
/* 80639700  C8 7F 01 48 */	lfd f3, 0x148(r31)
/* 80639704  FC 00 00 32 */	fmul f0, f0, f0
/* 80639708  FC 01 00 32 */	fmul f0, f1, f0
/* 8063970C  FC 03 00 28 */	fsub f0, f3, f0
/* 80639710  FC 02 00 32 */	fmul f0, f2, f0
/* 80639714  FC 44 00 32 */	fmul f2, f4, f0
/* 80639718  FC 00 00 32 */	fmul f0, f0, f0
/* 8063971C  FC 01 00 32 */	fmul f0, f1, f0
/* 80639720  FC 03 00 28 */	fsub f0, f3, f0
/* 80639724  FC 02 00 32 */	fmul f0, f2, f0
/* 80639728  FC 44 00 32 */	fmul f2, f4, f0
/* 8063972C  FC 00 00 32 */	fmul f0, f0, f0
/* 80639730  FC 01 00 32 */	fmul f0, f1, f0
/* 80639734  FC 03 00 28 */	fsub f0, f3, f0
/* 80639738  FC 02 00 32 */	fmul f0, f2, f0
/* 8063973C  FC 21 00 32 */	fmul f1, f1, f0
/* 80639740  FC 20 08 18 */	frsp f1, f1
/* 80639744  48 00 00 88 */	b lbl_806397CC
lbl_80639748:
/* 80639748  C8 1F 01 50 */	lfd f0, 0x150(r31)
/* 8063974C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80639750  40 80 00 10 */	bge lbl_80639760
/* 80639754  3C 60 80 45 */	lis r3, __float_nan@ha
/* 80639758  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
/* 8063975C  48 00 00 70 */	b lbl_806397CC
lbl_80639760:
/* 80639760  D0 21 00 08 */	stfs f1, 8(r1)
/* 80639764  80 81 00 08 */	lwz r4, 8(r1)
/* 80639768  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 8063976C  3C 00 7F 80 */	lis r0, 0x7f80
/* 80639770  7C 03 00 00 */	cmpw r3, r0
/* 80639774  41 82 00 14 */	beq lbl_80639788
/* 80639778  40 80 00 40 */	bge lbl_806397B8
/* 8063977C  2C 03 00 00 */	cmpwi r3, 0
/* 80639780  41 82 00 20 */	beq lbl_806397A0
/* 80639784  48 00 00 34 */	b lbl_806397B8
lbl_80639788:
/* 80639788  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8063978C  41 82 00 0C */	beq lbl_80639798
/* 80639790  38 00 00 01 */	li r0, 1
/* 80639794  48 00 00 28 */	b lbl_806397BC
lbl_80639798:
/* 80639798  38 00 00 02 */	li r0, 2
/* 8063979C  48 00 00 20 */	b lbl_806397BC
lbl_806397A0:
/* 806397A0  54 80 02 7F */	clrlwi. r0, r4, 9
/* 806397A4  41 82 00 0C */	beq lbl_806397B0
/* 806397A8  38 00 00 05 */	li r0, 5
/* 806397AC  48 00 00 10 */	b lbl_806397BC
lbl_806397B0:
/* 806397B0  38 00 00 03 */	li r0, 3
/* 806397B4  48 00 00 08 */	b lbl_806397BC
lbl_806397B8:
/* 806397B8  38 00 00 04 */	li r0, 4
lbl_806397BC:
/* 806397BC  2C 00 00 01 */	cmpwi r0, 1
/* 806397C0  40 82 00 0C */	bne lbl_806397CC
/* 806397C4  3C 60 80 45 */	lis r3, __float_nan@ha
/* 806397C8  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)
lbl_806397CC:
/* 806397CC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 806397D0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 806397D4  7C 08 03 A6 */	mtlr r0
/* 806397D8  38 21 00 20 */	addi r1, r1, 0x20
/* 806397DC  4E 80 00 20 */	blr 