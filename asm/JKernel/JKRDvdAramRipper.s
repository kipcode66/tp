.include "macros.inc"

.section .text, "ax" # 802DB5E8

.global __sinit_JKRDvdAramRipper_cpp
__sinit_JKRDvdAramRipper_cpp:
/* 802DB5E8 002D8528  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DB5EC 002D852C  7C 08 02 A6 */	mflr r0
/* 802DB5F0 002D8530  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DB5F4 002D8534  3C 60 80 43 */	lis r3, lbl_804343B4@ha
/* 802DB5F8 002D8538  38 63 43 B4 */	addi r3, r3, lbl_804343B4@l
/* 802DB5FC 002D853C  48 00 09 19 */	bl initiate__10JSUPtrListFv
/* 802DB600 002D8540  3C 60 80 43 */	lis r3, lbl_804343B4@ha
/* 802DB604 002D8544  38 63 43 B4 */	addi r3, r3, lbl_804343B4@l
.global JSUList_NS_dtor_X9_
/* 802DB608 002D8548  3C 80 80 2E */	lis r4, JSUList_NS_dtor_X9_@ha
.global JSUList_NS_dtor_X9_
/* 802DB60C 002D854C  38 84 B6 2C */	addi r4, r4, JSUList_NS_dtor_X9_@l
/* 802DB610 002D8550  3C A0 80 43 */	lis r5, lbl_804343A8@ha
/* 802DB614 002D8554  38 A5 43 A8 */	addi r5, r5, lbl_804343A8@l
/* 802DB618 002D8558  48 08 66 0D */	bl func_80361C24
/* 802DB61C 002D855C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DB620 002D8560  7C 08 03 A6 */	mtlr r0
/* 802DB624 002D8564  38 21 00 10 */	addi r1, r1, 0x10
/* 802DB628 002D8568  4E 80 00 20 */	blr 

.global JSUList_NS_dtor_X9_
JSUList_NS_dtor_X9_:
/* 802DB62C 002D856C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802DB630 002D8570  7C 08 02 A6 */	mflr r0
/* 802DB634 002D8574  90 01 00 14 */	stw r0, 0x14(r1)
/* 802DB638 002D8578  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802DB63C 002D857C  93 C1 00 08 */	stw r30, 8(r1)
/* 802DB640 002D8580  7C 7E 1B 79 */	or. r30, r3, r3
/* 802DB644 002D8584  7C 9F 23 78 */	mr r31, r4
/* 802DB648 002D8588  41 82 00 1C */	beq lbl_802DB664
/* 802DB64C 002D858C  38 80 00 00 */	li r4, 0
/* 802DB650 002D8590  48 00 08 5D */	bl __dt__10JSUPtrListFv
/* 802DB654 002D8594  7F E0 07 35 */	extsh. r0, r31
/* 802DB658 002D8598  40 81 00 0C */	ble lbl_802DB664
/* 802DB65C 002D859C  7F C3 F3 78 */	mr r3, r30
/* 802DB660 002D85A0  4B FF 36 DD */	bl __dl__FPv
lbl_802DB664:
/* 802DB664 002D85A4  7F C3 F3 78 */	mr r3, r30
/* 802DB668 002D85A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802DB66C 002D85AC  83 C1 00 08 */	lwz r30, 8(r1)
/* 802DB670 002D85B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802DB674 002D85B4  7C 08 03 A6 */	mtlr r0
/* 802DB678 002D85B8  38 21 00 10 */	addi r1, r1, 0x10
/* 802DB67C 002D85BC  4E 80 00 20 */	blr 
