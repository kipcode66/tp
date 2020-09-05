.include "macros.inc"

.section .text, "ax" # 802d0a24


.global JKRSolidHeap_NS_create
JKRSolidHeap_NS_create:
/* 802D0A24 002CD964  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D0A28 002CD968  7C 08 02 A6 */	mflr r0
/* 802D0A2C 002CD96C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802D0A30 002CD970  39 61 00 20 */	addi r11, r1, 0x20
/* 802D0A34 002CD974  48 09 17 A9 */	bl _savegpr_29
/* 802D0A38 002CD978  7C 9D 23 79 */	or. r29, r4, r4
/* 802D0A3C 002CD97C  7C BE 2B 78 */	mr r30, r5
/* 802D0A40 002CD980  40 82 00 08 */	bne lbl_802D0A48
/* 802D0A44 002CD984  83 AD 8D F8 */	lwz r29, lbl_80451378-_SDA_BASE_(r13)
lbl_802D0A48:
/* 802D0A48 002CD988  3C 03 00 01 */	addis r0, r3, 1
/* 802D0A4C 002CD98C  28 00 FF FF */	cmplwi r0, 0xffff
/* 802D0A50 002CD990  40 82 00 10 */	bne lbl_802D0A60
/* 802D0A54 002CD994  7F A3 EB 78 */	mr r3, r29
/* 802D0A58 002CD998  38 80 00 10 */	li r4, 0x10
/* 802D0A5C 002CD99C  4B FF DD 81 */	bl JKRHeap_NS_getMaxAllocatableSize
lbl_802D0A60:
/* 802D0A60 002CD9A0  54 7F 00 36 */	rlwinm r31, r3, 0, 0, 0x1b
/* 802D0A64 002CD9A4  28 1F 00 80 */	cmplwi r31, 0x80
/* 802D0A68 002CD9A8  40 80 00 0C */	bge lbl_802D0A74
/* 802D0A6C 002CD9AC  38 60 00 00 */	li r3, 0
/* 802D0A70 002CD9B0  48 00 00 48 */	b lbl_802D0AB8
lbl_802D0A74:
/* 802D0A74 002CD9B4  7F E3 FB 78 */	mr r3, r31
/* 802D0A78 002CD9B8  38 80 00 10 */	li r4, 0x10
/* 802D0A7C 002CD9BC  7F A5 EB 78 */	mr r5, r29
/* 802D0A80 002CD9C0  4B FF D9 F5 */	bl JKRHeap_NS_alloc
/* 802D0A84 002CD9C4  7C 60 1B 78 */	mr r0, r3
/* 802D0A88 002CD9C8  7C 05 03 79 */	or. r5, r0, r0
/* 802D0A8C 002CD9CC  38 85 00 80 */	addi r4, r5, 0x80
/* 802D0A90 002CD9D0  40 82 00 0C */	bne lbl_802D0A9C
/* 802D0A94 002CD9D4  38 60 00 00 */	li r3, 0
/* 802D0A98 002CD9D8  48 00 00 20 */	b lbl_802D0AB8
lbl_802D0A9C:
/* 802D0A9C 002CD9DC  41 82 00 18 */	beq lbl_802D0AB4
/* 802D0AA0 002CD9E0  38 BF FF 80 */	addi r5, r31, -128
/* 802D0AA4 002CD9E4  7F A6 EB 78 */	mr r6, r29
/* 802D0AA8 002CD9E8  7F C7 F3 78 */	mr r7, r30
/* 802D0AAC 002CD9EC  48 00 00 85 */	bl JKRSolidHeap
/* 802D0AB0 002CD9F0  7C 60 1B 78 */	mr r0, r3
lbl_802D0AB4:
/* 802D0AB4 002CD9F4  7C 03 03 78 */	mr r3, r0
lbl_802D0AB8:
/* 802D0AB8 002CD9F8  39 61 00 20 */	addi r11, r1, 0x20
/* 802D0ABC 002CD9FC  48 09 17 6D */	bl _restgpr_29
/* 802D0AC0 002CDA00  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D0AC4 002CDA04  7C 08 03 A6 */	mtlr r0
/* 802D0AC8 002CDA08  38 21 00 20 */	addi r1, r1, 0x20
/* 802D0ACC 002CDA0C  4E 80 00 20 */	blr 
/* 802D0AD0 002CDA10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D0AD4 002CDA14  7C 08 02 A6 */	mflr r0
/* 802D0AD8 002CDA18  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D0ADC 002CDA1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D0AE0 002CDA20  93 C1 00 08 */	stw r30, 8(r1)
/* 802D0AE4 002CDA24  7C 7E 1B 78 */	mr r30, r3
/* 802D0AE8 002CDA28  80 83 00 50 */	lwz r4, 0x50(r3)
/* 802D0AEC 002CDA2C  83 E4 00 0C */	lwz r31, 0xc(r4)
/* 802D0AF0 002CDA30  28 1F 00 00 */	cmplwi r31, 0
/* 802D0AF4 002CDA34  41 82 00 24 */	beq lbl_802D0B18
/* 802D0AF8 002CDA38  38 80 FF FF */	li r4, -1
/* 802D0AFC 002CDA3C  81 83 00 00 */	lwz r12, 0(r3)
/* 802D0B00 002CDA40  81 8C 00 08 */	lwz r12, 8(r12)
/* 802D0B04 002CDA44  7D 89 03 A6 */	mtctr r12
/* 802D0B08 002CDA48  4E 80 04 21 */	bctrl 
/* 802D0B0C 002CDA4C  7F C3 F3 78 */	mr r3, r30
/* 802D0B10 002CDA50  7F E4 FB 78 */	mr r4, r31
/* 802D0B14 002CDA54  4B FF D9 ED */	bl JKRHeap_NS_free
lbl_802D0B18:
/* 802D0B18 002CDA58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D0B1C 002CDA5C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D0B20 002CDA60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D0B24 002CDA64  7C 08 03 A6 */	mtlr r0
/* 802D0B28 002CDA68  38 21 00 10 */	addi r1, r1, 0x10
/* 802D0B2C 002CDA6C  4E 80 00 20 */	blr 

.global JKRSolidHeap
JKRSolidHeap:
/* 802D0B30 002CDA70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D0B34 002CDA74  7C 08 02 A6 */	mflr r0
/* 802D0B38 002CDA78  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D0B3C 002CDA7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D0B40 002CDA80  7C 7F 1B 78 */	mr r31, r3
/* 802D0B44 002CDA84  4B FF D5 F5 */	bl JKRHeap
/* 802D0B48 002CDA88  3C 60 80 3D */	lis r3, lbl_803CC030@ha
/* 802D0B4C 002CDA8C  38 03 C0 30 */	addi r0, r3, lbl_803CC030@l
/* 802D0B50 002CDA90  90 1F 00 00 */	stw r0, 0(r31)
/* 802D0B54 002CDA94  80 1F 00 38 */	lwz r0, 0x38(r31)
/* 802D0B58 002CDA98  90 1F 00 6C */	stw r0, 0x6c(r31)
/* 802D0B5C 002CDA9C  80 1F 00 30 */	lwz r0, 0x30(r31)
/* 802D0B60 002CDAA0  90 1F 00 70 */	stw r0, 0x70(r31)
/* 802D0B64 002CDAA4  80 1F 00 34 */	lwz r0, 0x34(r31)
/* 802D0B68 002CDAA8  90 1F 00 74 */	stw r0, 0x74(r31)
/* 802D0B6C 002CDAAC  38 00 00 00 */	li r0, 0
/* 802D0B70 002CDAB0  90 1F 00 78 */	stw r0, 0x78(r31)
/* 802D0B74 002CDAB4  7F E3 FB 78 */	mr r3, r31
/* 802D0B78 002CDAB8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D0B7C 002CDABC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D0B80 002CDAC0  7C 08 03 A6 */	mtlr r0
/* 802D0B84 002CDAC4  38 21 00 10 */	addi r1, r1, 0x10
/* 802D0B88 002CDAC8  4E 80 00 20 */	blr 
/* 802D0B8C 002CDACC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D0B90 002CDAD0  7C 08 02 A6 */	mflr r0
/* 802D0B94 002CDAD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D0B98 002CDAD8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D0B9C 002CDADC  93 C1 00 08 */	stw r30, 8(r1)
/* 802D0BA0 002CDAE0  7C 7E 1B 79 */	or. r30, r3, r3
/* 802D0BA4 002CDAE4  7C 9F 23 78 */	mr r31, r4
/* 802D0BA8 002CDAE8  41 82 00 30 */	beq lbl_802D0BD8
/* 802D0BAC 002CDAEC  3C 80 80 3D */	lis r4, lbl_803CC030@ha
/* 802D0BB0 002CDAF0  38 04 C0 30 */	addi r0, r4, lbl_803CC030@l
/* 802D0BB4 002CDAF4  90 1E 00 00 */	stw r0, 0(r30)
/* 802D0BB8 002CDAF8  4B FF DF 09 */	bl JKRHeap_NS_dispose_X2_
/* 802D0BBC 002CDAFC  7F C3 F3 78 */	mr r3, r30
/* 802D0BC0 002CDB00  38 80 00 00 */	li r4, 0
/* 802D0BC4 002CDB04  4B FF D6 A1 */	bl JKRHeap_NS_dtor
/* 802D0BC8 002CDB08  7F E0 07 35 */	extsh. r0, r31
/* 802D0BCC 002CDB0C  40 81 00 0C */	ble lbl_802D0BD8
/* 802D0BD0 002CDB10  7F C3 F3 78 */	mr r3, r30
/* 802D0BD4 002CDB14  4B FF E1 69 */	bl __dl
lbl_802D0BD8:
/* 802D0BD8 002CDB18  7F C3 F3 78 */	mr r3, r30
/* 802D0BDC 002CDB1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D0BE0 002CDB20  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D0BE4 002CDB24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D0BE8 002CDB28  7C 08 03 A6 */	mtlr r0
/* 802D0BEC 002CDB2C  38 21 00 10 */	addi r1, r1, 0x10
/* 802D0BF0 002CDB30  4E 80 00 20 */	blr 

.global JKRSolidHeap_NS_adjustSize
JKRSolidHeap_NS_adjustSize:
/* 802D0BF4 002CDB34  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D0BF8 002CDB38  7C 08 02 A6 */	mflr r0
/* 802D0BFC 002CDB3C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802D0C00 002CDB40  39 61 00 20 */	addi r11, r1, 0x20
/* 802D0C04 002CDB44  48 09 15 D9 */	bl _savegpr_29
/* 802D0C08 002CDB48  7C 7D 1B 78 */	mr r29, r3
/* 802D0C0C 002CDB4C  80 63 00 50 */	lwz r3, 0x50(r3)
/* 802D0C10 002CDB50  83 E3 00 0C */	lwz r31, 0xc(r3)
/* 802D0C14 002CDB54  28 1F 00 00 */	cmplwi r31, 0
/* 802D0C18 002CDB58  41 82 00 7C */	beq lbl_802D0C94
/* 802D0C1C 002CDB5C  38 7D 00 18 */	addi r3, r29, 0x18
/* 802D0C20 002CDB60  48 06 E4 21 */	bl OSLockMutex
/* 802D0C24 002CDB64  80 7D 00 30 */	lwz r3, 0x30(r29)
/* 802D0C28 002CDB68  7C BD 18 50 */	subf r5, r29, r3
/* 802D0C2C 002CDB6C  80 1D 00 70 */	lwz r0, 0x70(r29)
/* 802D0C30 002CDB70  7C 63 00 50 */	subf r3, r3, r0
/* 802D0C34 002CDB74  38 03 00 1F */	addi r0, r3, 0x1f
/* 802D0C38 002CDB78  54 1E 00 34 */	rlwinm r30, r0, 0, 0, 0x1a
/* 802D0C3C 002CDB7C  7F E3 FB 78 */	mr r3, r31
/* 802D0C40 002CDB80  7F A4 EB 78 */	mr r4, r29
/* 802D0C44 002CDB84  7F E5 F2 14 */	add r31, r5, r30
/* 802D0C48 002CDB88  7F E5 FB 78 */	mr r5, r31
/* 802D0C4C 002CDB8C  4B FF DA 39 */	bl JKRHeap_NS_resize_X1_
/* 802D0C50 002CDB90  2C 03 FF FF */	cmpwi r3, -1
/* 802D0C54 002CDB94  41 82 00 30 */	beq lbl_802D0C84
/* 802D0C58 002CDB98  38 00 00 00 */	li r0, 0
/* 802D0C5C 002CDB9C  90 1D 00 6C */	stw r0, 0x6c(r29)
/* 802D0C60 002CDBA0  93 DD 00 38 */	stw r30, 0x38(r29)
/* 802D0C64 002CDBA4  80 7D 00 30 */	lwz r3, 0x30(r29)
/* 802D0C68 002CDBA8  80 1D 00 38 */	lwz r0, 0x38(r29)
/* 802D0C6C 002CDBAC  7C 03 02 14 */	add r0, r3, r0
/* 802D0C70 002CDBB0  90 1D 00 34 */	stw r0, 0x34(r29)
/* 802D0C74 002CDBB4  80 1D 00 34 */	lwz r0, 0x34(r29)
/* 802D0C78 002CDBB8  90 1D 00 70 */	stw r0, 0x70(r29)
/* 802D0C7C 002CDBBC  80 1D 00 34 */	lwz r0, 0x34(r29)
/* 802D0C80 002CDBC0  90 1D 00 74 */	stw r0, 0x74(r29)
lbl_802D0C84:
/* 802D0C84 002CDBC4  38 7D 00 18 */	addi r3, r29, 0x18
/* 802D0C88 002CDBC8  48 06 E4 95 */	bl OSUnlockMutex
/* 802D0C8C 002CDBCC  7F E3 FB 78 */	mr r3, r31
/* 802D0C90 002CDBD0  48 00 00 08 */	b lbl_802D0C98
lbl_802D0C94:
/* 802D0C94 002CDBD4  38 60 FF FF */	li r3, -1
lbl_802D0C98:
/* 802D0C98 002CDBD8  39 61 00 20 */	addi r11, r1, 0x20
/* 802D0C9C 002CDBDC  48 09 15 8D */	bl _restgpr_29
/* 802D0CA0 002CDBE0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D0CA4 002CDBE4  7C 08 03 A6 */	mtlr r0
/* 802D0CA8 002CDBE8  38 21 00 20 */	addi r1, r1, 0x20
/* 802D0CAC 002CDBEC  4E 80 00 20 */	blr 
/* 802D0CB0 002CDBF0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D0CB4 002CDBF4  7C 08 02 A6 */	mflr r0
/* 802D0CB8 002CDBF8  90 01 00 24 */	stw r0, 0x24(r1)
/* 802D0CBC 002CDBFC  39 61 00 20 */	addi r11, r1, 0x20
/* 802D0CC0 002CDC00  48 09 15 1D */	bl _savegpr_29
/* 802D0CC4 002CDC04  7C 7D 1B 78 */	mr r29, r3
/* 802D0CC8 002CDC08  7C 9E 23 78 */	mr r30, r4
/* 802D0CCC 002CDC0C  7C BF 2B 78 */	mr r31, r5
/* 802D0CD0 002CDC10  38 7D 00 18 */	addi r3, r29, 0x18
/* 802D0CD4 002CDC14  48 06 E3 6D */	bl OSLockMutex
/* 802D0CD8 002CDC18  28 1E 00 04 */	cmplwi r30, 4
/* 802D0CDC 002CDC1C  40 80 00 08 */	bge lbl_802D0CE4
/* 802D0CE0 002CDC20  3B C0 00 04 */	li r30, 4
lbl_802D0CE4:
/* 802D0CE4 002CDC24  2C 1F 00 00 */	cmpwi r31, 0
/* 802D0CE8 002CDC28  41 80 00 28 */	blt lbl_802D0D10
/* 802D0CEC 002CDC2C  7F A3 EB 78 */	mr r3, r29
/* 802D0CF0 002CDC30  7F C4 F3 78 */	mr r4, r30
/* 802D0CF4 002CDC34  2C 1F 00 04 */	cmpwi r31, 4
/* 802D0CF8 002CDC38  38 A0 00 04 */	li r5, 4
/* 802D0CFC 002CDC3C  41 80 00 08 */	blt lbl_802D0D04
/* 802D0D00 002CDC40  7F E5 FB 78 */	mr r5, r31
lbl_802D0D04:
/* 802D0D04 002CDC44  48 00 00 55 */	bl JKRSolidHeap_NS_allocFromHead
/* 802D0D08 002CDC48  7C 7F 1B 78 */	mr r31, r3
/* 802D0D0C 002CDC4C  48 00 00 28 */	b lbl_802D0D34
lbl_802D0D10:
/* 802D0D10 002CDC50  7C 1F 00 D0 */	neg r0, r31
/* 802D0D14 002CDC54  2C 00 00 04 */	cmpwi r0, 4
/* 802D0D18 002CDC58  38 A0 00 04 */	li r5, 4
/* 802D0D1C 002CDC5C  41 80 00 08 */	blt lbl_802D0D24
/* 802D0D20 002CDC60  7C 05 03 78 */	mr r5, r0
lbl_802D0D24:
/* 802D0D24 002CDC64  7F A3 EB 78 */	mr r3, r29
/* 802D0D28 002CDC68  7F C4 F3 78 */	mr r4, r30
/* 802D0D2C 002CDC6C  48 00 00 F5 */	bl JKRSolidHeap_NS_allocFromTail
/* 802D0D30 002CDC70  7C 7F 1B 78 */	mr r31, r3
lbl_802D0D34:
/* 802D0D34 002CDC74  38 7D 00 18 */	addi r3, r29, 0x18
/* 802D0D38 002CDC78  48 06 E3 E5 */	bl OSUnlockMutex
/* 802D0D3C 002CDC7C  7F E3 FB 78 */	mr r3, r31
/* 802D0D40 002CDC80  39 61 00 20 */	addi r11, r1, 0x20
/* 802D0D44 002CDC84  48 09 14 E5 */	bl _restgpr_29
/* 802D0D48 002CDC88  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D0D4C 002CDC8C  7C 08 03 A6 */	mtlr r0
/* 802D0D50 002CDC90  38 21 00 20 */	addi r1, r1, 0x20
/* 802D0D54 002CDC94  4E 80 00 20 */	blr 

.global JKRSolidHeap_NS_allocFromHead
JKRSolidHeap_NS_allocFromHead:
/* 802D0D58 002CDC98  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D0D5C 002CDC9C  7C 08 02 A6 */	mflr r0
/* 802D0D60 002CDCA0  90 01 00 24 */	stw r0, 0x24(r1)
/* 802D0D64 002CDCA4  39 61 00 20 */	addi r11, r1, 0x20
/* 802D0D68 002CDCA8  48 09 14 71 */	bl func_803621D8
/* 802D0D6C 002CDCAC  7C 7F 1B 78 */	mr r31, r3
/* 802D0D70 002CDCB0  7C BD 2B 78 */	mr r29, r5
/* 802D0D74 002CDCB4  38 04 00 03 */	addi r0, r4, 3
/* 802D0D78 002CDCB8  54 1C 00 3A */	rlwinm r28, r0, 0, 0, 0x1d
/* 802D0D7C 002CDCBC  3B C0 00 00 */	li r30, 0
/* 802D0D80 002CDCC0  38 1D FF FF */	addi r0, r29, -1
/* 802D0D84 002CDCC4  7C 04 00 F8 */	nor r4, r0, r0
/* 802D0D88 002CDCC8  80 A3 00 70 */	lwz r5, 0x70(r3)
/* 802D0D8C 002CDCCC  7C 7D 2A 14 */	add r3, r29, r5
/* 802D0D90 002CDCD0  38 03 FF FF */	addi r0, r3, -1
/* 802D0D94 002CDCD4  7C 83 00 38 */	and r3, r4, r0
/* 802D0D98 002CDCD8  7C 05 18 50 */	subf r0, r5, r3
/* 802D0D9C 002CDCDC  7C 9C 02 14 */	add r4, r28, r0
/* 802D0DA0 002CDCE0  80 1F 00 6C */	lwz r0, 0x6c(r31)
/* 802D0DA4 002CDCE4  7C 04 00 40 */	cmplw r4, r0
/* 802D0DA8 002CDCE8  41 81 00 20 */	bgt lbl_802D0DC8
/* 802D0DAC 002CDCEC  7C 7E 1B 78 */	mr r30, r3
/* 802D0DB0 002CDCF0  7C 05 22 14 */	add r0, r5, r4
/* 802D0DB4 002CDCF4  90 1F 00 70 */	stw r0, 0x70(r31)
/* 802D0DB8 002CDCF8  80 1F 00 6C */	lwz r0, 0x6c(r31)
/* 802D0DBC 002CDCFC  7C 04 00 50 */	subf r0, r4, r0
/* 802D0DC0 002CDD00  90 1F 00 6C */	stw r0, 0x6c(r31)
/* 802D0DC4 002CDD04  48 00 00 40 */	b lbl_802D0E04
lbl_802D0DC8:
/* 802D0DC8 002CDD08  3C 60 80 3A */	lis r3, lbl_8039CE50@ha
/* 802D0DCC 002CDD0C  38 63 CE 50 */	addi r3, r3, lbl_8039CE50@l
/* 802D0DD0 002CDD10  4C C6 31 82 */	crclr 6
/* 802D0DD4 002CDD14  48 01 78 A9 */	bl JUTWarningConsole_f
/* 802D0DD8 002CDD18  88 1F 00 68 */	lbz r0, 0x68(r31)
/* 802D0DDC 002CDD1C  28 00 00 01 */	cmplwi r0, 1
/* 802D0DE0 002CDD20  40 82 00 24 */	bne lbl_802D0E04
/* 802D0DE4 002CDD24  81 8D 8D FC */	lwz r12, lbl_8045137C-_SDA_BASE_(r13)
/* 802D0DE8 002CDD28  28 0C 00 00 */	cmplwi r12, 0
/* 802D0DEC 002CDD2C  41 82 00 18 */	beq lbl_802D0E04
/* 802D0DF0 002CDD30  7F E3 FB 78 */	mr r3, r31
/* 802D0DF4 002CDD34  7F 84 E3 78 */	mr r4, r28
/* 802D0DF8 002CDD38  7F A5 EB 78 */	mr r5, r29
/* 802D0DFC 002CDD3C  7D 89 03 A6 */	mtctr r12
/* 802D0E00 002CDD40  4E 80 04 21 */	bctrl 
lbl_802D0E04:
/* 802D0E04 002CDD44  7F C3 F3 78 */	mr r3, r30
/* 802D0E08 002CDD48  39 61 00 20 */	addi r11, r1, 0x20
/* 802D0E0C 002CDD4C  48 09 14 19 */	bl func_80362224
/* 802D0E10 002CDD50  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D0E14 002CDD54  7C 08 03 A6 */	mtlr r0
/* 802D0E18 002CDD58  38 21 00 20 */	addi r1, r1, 0x20
/* 802D0E1C 002CDD5C  4E 80 00 20 */	blr 

.global JKRSolidHeap_NS_allocFromTail
JKRSolidHeap_NS_allocFromTail:
/* 802D0E20 002CDD60  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D0E24 002CDD64  7C 08 02 A6 */	mflr r0
/* 802D0E28 002CDD68  90 01 00 24 */	stw r0, 0x24(r1)
/* 802D0E2C 002CDD6C  39 61 00 20 */	addi r11, r1, 0x20
/* 802D0E30 002CDD70  48 09 13 A9 */	bl func_803621D8
/* 802D0E34 002CDD74  7C 7F 1B 78 */	mr r31, r3
/* 802D0E38 002CDD78  7C BD 2B 78 */	mr r29, r5
/* 802D0E3C 002CDD7C  38 04 00 03 */	addi r0, r4, 3
/* 802D0E40 002CDD80  54 1C 00 3A */	rlwinm r28, r0, 0, 0, 0x1d
/* 802D0E44 002CDD84  3B C0 00 00 */	li r30, 0
/* 802D0E48 002CDD88  38 1D FF FF */	addi r0, r29, -1
/* 802D0E4C 002CDD8C  7C 03 00 F8 */	nor r3, r0, r0
/* 802D0E50 002CDD90  80 BF 00 74 */	lwz r5, 0x74(r31)
/* 802D0E54 002CDD94  7C 1C 28 50 */	subf r0, r28, r5
/* 802D0E58 002CDD98  7C 63 00 38 */	and r3, r3, r0
/* 802D0E5C 002CDD9C  7C 83 28 50 */	subf r4, r3, r5
/* 802D0E60 002CDDA0  80 1F 00 6C */	lwz r0, 0x6c(r31)
/* 802D0E64 002CDDA4  7C 04 00 40 */	cmplw r4, r0
/* 802D0E68 002CDDA8  41 81 00 20 */	bgt lbl_802D0E88
/* 802D0E6C 002CDDAC  7C 7E 1B 78 */	mr r30, r3
/* 802D0E70 002CDDB0  7C 04 28 50 */	subf r0, r4, r5
/* 802D0E74 002CDDB4  90 1F 00 74 */	stw r0, 0x74(r31)
/* 802D0E78 002CDDB8  80 1F 00 6C */	lwz r0, 0x6c(r31)
/* 802D0E7C 002CDDBC  7C 04 00 50 */	subf r0, r4, r0
/* 802D0E80 002CDDC0  90 1F 00 6C */	stw r0, 0x6c(r31)
/* 802D0E84 002CDDC4  48 00 00 44 */	b lbl_802D0EC8
lbl_802D0E88:
/* 802D0E88 002CDDC8  3C 60 80 3A */	lis r3, lbl_8039CE50@ha
/* 802D0E8C 002CDDCC  38 63 CE 50 */	addi r3, r3, lbl_8039CE50@l
/* 802D0E90 002CDDD0  38 63 00 31 */	addi r3, r3, 0x31
/* 802D0E94 002CDDD4  4C C6 31 82 */	crclr 6
/* 802D0E98 002CDDD8  48 01 77 E5 */	bl JUTWarningConsole_f
/* 802D0E9C 002CDDDC  88 1F 00 68 */	lbz r0, 0x68(r31)
/* 802D0EA0 002CDDE0  28 00 00 01 */	cmplwi r0, 1
/* 802D0EA4 002CDDE4  40 82 00 24 */	bne lbl_802D0EC8
/* 802D0EA8 002CDDE8  81 8D 8D FC */	lwz r12, lbl_8045137C-_SDA_BASE_(r13)
/* 802D0EAC 002CDDEC  28 0C 00 00 */	cmplwi r12, 0
/* 802D0EB0 002CDDF0  41 82 00 18 */	beq lbl_802D0EC8
/* 802D0EB4 002CDDF4  7F E3 FB 78 */	mr r3, r31
/* 802D0EB8 002CDDF8  7F 84 E3 78 */	mr r4, r28
/* 802D0EBC 002CDDFC  7F A5 EB 78 */	mr r5, r29
/* 802D0EC0 002CDE00  7D 89 03 A6 */	mtctr r12
/* 802D0EC4 002CDE04  4E 80 04 21 */	bctrl 
lbl_802D0EC8:
/* 802D0EC8 002CDE08  7F C3 F3 78 */	mr r3, r30
/* 802D0ECC 002CDE0C  39 61 00 20 */	addi r11, r1, 0x20
/* 802D0ED0 002CDE10  48 09 13 55 */	bl func_80362224
/* 802D0ED4 002CDE14  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D0ED8 002CDE18  7C 08 03 A6 */	mtlr r0
/* 802D0EDC 002CDE1C  38 21 00 20 */	addi r1, r1, 0x20
/* 802D0EE0 002CDE20  4E 80 00 20 */	blr 
/* 802D0EE4 002CDE24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D0EE8 002CDE28  7C 08 02 A6 */	mflr r0
/* 802D0EEC 002CDE2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D0EF0 002CDE30  3C 60 80 3A */	lis r3, lbl_8039CE50@ha
/* 802D0EF4 002CDE34  38 63 CE 50 */	addi r3, r3, lbl_8039CE50@l
/* 802D0EF8 002CDE38  38 63 00 62 */	addi r3, r3, 0x62
/* 802D0EFC 002CDE3C  4C C6 31 82 */	crclr 6
/* 802D0F00 002CDE40  48 01 77 7D */	bl JUTWarningConsole_f
/* 802D0F04 002CDE44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D0F08 002CDE48  7C 08 03 A6 */	mtlr r0
/* 802D0F0C 002CDE4C  38 21 00 10 */	addi r1, r1, 0x10
/* 802D0F10 002CDE50  4E 80 00 20 */	blr 
/* 802D0F14 002CDE54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D0F18 002CDE58  7C 08 02 A6 */	mflr r0
/* 802D0F1C 002CDE5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D0F20 002CDE60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D0F24 002CDE64  7C 7F 1B 78 */	mr r31, r3
/* 802D0F28 002CDE68  38 7F 00 18 */	addi r3, r31, 0x18
/* 802D0F2C 002CDE6C  48 06 E1 15 */	bl OSLockMutex
/* 802D0F30 002CDE70  7F E3 FB 78 */	mr r3, r31
/* 802D0F34 002CDE74  4B FF D6 41 */	bl JKRHeap_NS_callAllDisposer
/* 802D0F38 002CDE78  80 1F 00 38 */	lwz r0, 0x38(r31)
/* 802D0F3C 002CDE7C  90 1F 00 6C */	stw r0, 0x6c(r31)
/* 802D0F40 002CDE80  80 1F 00 30 */	lwz r0, 0x30(r31)
/* 802D0F44 002CDE84  90 1F 00 70 */	stw r0, 0x70(r31)
/* 802D0F48 002CDE88  80 1F 00 34 */	lwz r0, 0x34(r31)
/* 802D0F4C 002CDE8C  90 1F 00 74 */	stw r0, 0x74(r31)
/* 802D0F50 002CDE90  38 00 00 00 */	li r0, 0
/* 802D0F54 002CDE94  90 1F 00 78 */	stw r0, 0x78(r31)
/* 802D0F58 002CDE98  38 7F 00 18 */	addi r3, r31, 0x18
/* 802D0F5C 002CDE9C  48 06 E1 C1 */	bl OSUnlockMutex
/* 802D0F60 002CDEA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D0F64 002CDEA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D0F68 002CDEA8  7C 08 03 A6 */	mtlr r0
/* 802D0F6C 002CDEAC  38 21 00 10 */	addi r1, r1, 0x10
/* 802D0F70 002CDEB0  4E 80 00 20 */	blr 
/* 802D0F74 002CDEB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D0F78 002CDEB8  7C 08 02 A6 */	mflr r0
/* 802D0F7C 002CDEBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D0F80 002CDEC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D0F84 002CDEC4  7C 7F 1B 78 */	mr r31, r3
/* 802D0F88 002CDEC8  38 7F 00 18 */	addi r3, r31, 0x18
/* 802D0F8C 002CDECC  48 06 E0 B5 */	bl OSLockMutex
/* 802D0F90 002CDED0  80 9F 00 74 */	lwz r4, 0x74(r31)
/* 802D0F94 002CDED4  80 BF 00 34 */	lwz r5, 0x34(r31)
/* 802D0F98 002CDED8  7C 04 28 40 */	cmplw r4, r5
/* 802D0F9C 002CDEDC  41 82 00 0C */	beq lbl_802D0FA8
/* 802D0FA0 002CDEE0  7F E3 FB 78 */	mr r3, r31
/* 802D0FA4 002CDEE4  4B FF DA FD */	bl JKRHeap_NS_dispose_X1_
lbl_802D0FA8:
/* 802D0FA8 002CDEE8  80 9F 00 6C */	lwz r4, 0x6c(r31)
/* 802D0FAC 002CDEEC  80 7F 00 74 */	lwz r3, 0x74(r31)
/* 802D0FB0 002CDEF0  80 1F 00 34 */	lwz r0, 0x34(r31)
/* 802D0FB4 002CDEF4  7C 03 00 50 */	subf r0, r3, r0
/* 802D0FB8 002CDEF8  7C 04 02 14 */	add r0, r4, r0
/* 802D0FBC 002CDEFC  90 1F 00 6C */	stw r0, 0x6c(r31)
/* 802D0FC0 002CDF00  80 1F 00 34 */	lwz r0, 0x34(r31)
/* 802D0FC4 002CDF04  90 1F 00 74 */	stw r0, 0x74(r31)
/* 802D0FC8 002CDF08  80 7F 00 78 */	lwz r3, 0x78(r31)
/* 802D0FCC 002CDF0C  48 00 00 10 */	b lbl_802D0FDC
lbl_802D0FD0:
/* 802D0FD0 002CDF10  80 1F 00 34 */	lwz r0, 0x34(r31)
/* 802D0FD4 002CDF14  90 03 00 0C */	stw r0, 0xc(r3)
/* 802D0FD8 002CDF18  80 63 00 10 */	lwz r3, 0x10(r3)
lbl_802D0FDC:
/* 802D0FDC 002CDF1C  28 03 00 00 */	cmplwi r3, 0
/* 802D0FE0 002CDF20  40 82 FF F0 */	bne lbl_802D0FD0
/* 802D0FE4 002CDF24  38 7F 00 18 */	addi r3, r31, 0x18
/* 802D0FE8 002CDF28  48 06 E1 35 */	bl OSUnlockMutex
/* 802D0FEC 002CDF2C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D0FF0 002CDF30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D0FF4 002CDF34  7C 08 03 A6 */	mtlr r0
/* 802D0FF8 002CDF38  38 21 00 10 */	addi r1, r1, 0x10
/* 802D0FFC 002CDF3C  4E 80 00 20 */	blr 
/* 802D1000 002CDF40  4E 80 00 20 */	blr 
/* 802D1004 002CDF44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D1008 002CDF48  7C 08 02 A6 */	mflr r0
/* 802D100C 002CDF4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D1010 002CDF50  3C 60 80 3A */	lis r3, lbl_8039CE50@ha
/* 802D1014 002CDF54  38 63 CE 50 */	addi r3, r3, lbl_8039CE50@l
/* 802D1018 002CDF58  38 63 00 89 */	addi r3, r3, 0x89
/* 802D101C 002CDF5C  4C C6 31 82 */	crclr 6
/* 802D1020 002CDF60  48 01 76 5D */	bl JUTWarningConsole_f
/* 802D1024 002CDF64  38 60 FF FF */	li r3, -1
/* 802D1028 002CDF68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D102C 002CDF6C  7C 08 03 A6 */	mtlr r0
/* 802D1030 002CDF70  38 21 00 10 */	addi r1, r1, 0x10
/* 802D1034 002CDF74  4E 80 00 20 */	blr 
/* 802D1038 002CDF78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D103C 002CDF7C  7C 08 02 A6 */	mflr r0
/* 802D1040 002CDF80  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D1044 002CDF84  3C 60 80 3A */	lis r3, lbl_8039CE50@ha
/* 802D1048 002CDF88  38 63 CE 50 */	addi r3, r3, lbl_8039CE50@l
/* 802D104C 002CDF8C  38 63 00 B8 */	addi r3, r3, 0xb8
/* 802D1050 002CDF90  4C C6 31 82 */	crclr 6
/* 802D1054 002CDF94  48 01 76 29 */	bl JUTWarningConsole_f
/* 802D1058 002CDF98  38 60 FF FF */	li r3, -1
/* 802D105C 002CDF9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D1060 002CDFA0  7C 08 03 A6 */	mtlr r0
/* 802D1064 002CDFA4  38 21 00 10 */	addi r1, r1, 0x10
/* 802D1068 002CDFA8  4E 80 00 20 */	blr 
/* 802D106C 002CDFAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D1070 002CDFB0  7C 08 02 A6 */	mflr r0
/* 802D1074 002CDFB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D1078 002CDFB8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D107C 002CDFBC  93 C1 00 08 */	stw r30, 8(r1)
/* 802D1080 002CDFC0  7C 7E 1B 78 */	mr r30, r3
/* 802D1084 002CDFC4  38 7E 00 18 */	addi r3, r30, 0x18
/* 802D1088 002CDFC8  48 06 DF B9 */	bl OSLockMutex
/* 802D108C 002CDFCC  3B E0 00 01 */	li r31, 1
/* 802D1090 002CDFD0  80 DE 00 6C */	lwz r6, 0x6c(r30)
/* 802D1094 002CDFD4  80 7E 00 30 */	lwz r3, 0x30(r30)
/* 802D1098 002CDFD8  80 1E 00 70 */	lwz r0, 0x70(r30)
/* 802D109C 002CDFDC  7C 83 00 50 */	subf r4, r3, r0
/* 802D10A0 002CDFE0  80 7E 00 74 */	lwz r3, 0x74(r30)
/* 802D10A4 002CDFE4  80 1E 00 34 */	lwz r0, 0x34(r30)
/* 802D10A8 002CDFE8  7C 03 00 50 */	subf r0, r3, r0
/* 802D10AC 002CDFEC  7C A4 02 14 */	add r5, r4, r0
/* 802D10B0 002CDFF0  7C A6 2A 14 */	add r5, r6, r5
/* 802D10B4 002CDFF4  80 9E 00 38 */	lwz r4, 0x38(r30)
/* 802D10B8 002CDFF8  7C 05 20 40 */	cmplw r5, r4
/* 802D10BC 002CDFFC  41 82 00 1C */	beq lbl_802D10D8
/* 802D10C0 002CE000  3B E0 00 00 */	li r31, 0
/* 802D10C4 002CE004  3C 60 80 3A */	lis r3, lbl_8039CE50@ha
/* 802D10C8 002CE008  38 63 CE 50 */	addi r3, r3, lbl_8039CE50@l
/* 802D10CC 002CE00C  38 63 00 E6 */	addi r3, r3, 0xe6
/* 802D10D0 002CE010  4C C6 31 82 */	crclr 6
/* 802D10D4 002CE014  48 01 75 A9 */	bl JUTWarningConsole_f
lbl_802D10D8:
/* 802D10D8 002CE018  38 7E 00 18 */	addi r3, r30, 0x18
/* 802D10DC 002CE01C  48 06 E0 41 */	bl OSUnlockMutex
/* 802D10E0 002CE020  7F E3 FB 78 */	mr r3, r31
/* 802D10E4 002CE024  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D10E8 002CE028  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D10EC 002CE02C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D10F0 002CE030  7C 08 03 A6 */	mtlr r0
/* 802D10F4 002CE034  38 21 00 10 */	addi r1, r1, 0x10
/* 802D10F8 002CE038  4E 80 00 20 */	blr 
/* 802D10FC 002CE03C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802D1100 002CE040  7C 08 02 A6 */	mflr r0
/* 802D1104 002CE044  90 01 00 34 */	stw r0, 0x34(r1)
/* 802D1108 002CE048  39 61 00 30 */	addi r11, r1, 0x30
/* 802D110C 002CE04C  48 09 10 D1 */	bl _savegpr_29
/* 802D1110 002CE050  7C 7E 1B 78 */	mr r30, r3
/* 802D1114 002CE054  81 83 00 00 */	lwz r12, 0(r3)
/* 802D1118 002CE058  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802D111C 002CE05C  7D 89 03 A6 */	mtctr r12
/* 802D1120 002CE060  4E 80 04 21 */	bctrl 
/* 802D1124 002CE064  7C 7F 1B 78 */	mr r31, r3
/* 802D1128 002CE068  38 7E 00 18 */	addi r3, r30, 0x18
/* 802D112C 002CE06C  48 06 DF 15 */	bl OSLockMutex
/* 802D1130 002CE070  80 9E 00 30 */	lwz r4, 0x30(r30)
/* 802D1134 002CE074  80 1E 00 70 */	lwz r0, 0x70(r30)
/* 802D1138 002CE078  7C A4 00 50 */	subf r5, r4, r0
/* 802D113C 002CE07C  80 7E 00 74 */	lwz r3, 0x74(r30)
/* 802D1140 002CE080  80 1E 00 34 */	lwz r0, 0x34(r30)
/* 802D1144 002CE084  7C 03 00 50 */	subf r0, r3, r0
/* 802D1148 002CE088  7F A5 02 14 */	add r29, r5, r0
/* 802D114C 002CE08C  3C 60 80 3A */	lis r3, lbl_8039CE50@ha
/* 802D1150 002CE090  38 63 CE 50 */	addi r3, r3, lbl_8039CE50@l
/* 802D1154 002CE094  38 63 01 17 */	addi r3, r3, 0x117
/* 802D1158 002CE098  4C C6 31 82 */	crclr 6
/* 802D115C 002CE09C  48 01 74 6D */	bl JUTReportConsole_f
/* 802D1160 002CE0A0  80 9E 00 74 */	lwz r4, 0x74(r30)
/* 802D1164 002CE0A4  3C 60 80 3A */	lis r3, lbl_8039CE50@ha
/* 802D1168 002CE0A8  38 63 CE 50 */	addi r3, r3, lbl_8039CE50@l
/* 802D116C 002CE0AC  38 63 01 28 */	addi r3, r3, 0x128
/* 802D1170 002CE0B0  80 1E 00 34 */	lwz r0, 0x34(r30)
/* 802D1174 002CE0B4  7C A4 00 50 */	subf r5, r4, r0
/* 802D1178 002CE0B8  4C C6 31 82 */	crclr 6
/* 802D117C 002CE0BC  48 01 74 4D */	bl JUTReportConsole_f
/* 802D1180 002CE0C0  80 BE 00 38 */	lwz r5, 0x38(r30)
/* 802D1184 002CE0C4  3C 60 80 3A */	lis r3, lbl_8039CE50@ha
/* 802D1188 002CE0C8  38 63 CE 50 */	addi r3, r3, lbl_8039CE50@l
/* 802D118C 002CE0CC  38 63 01 39 */	addi r3, r3, 0x139
/* 802D1190 002CE0D0  7F A4 EB 78 */	mr r4, r29
/* 802D1194 002CE0D4  C0 62 C5 A8 */	lfs f3, lbl_80455FA8-_SDA2_BASE_(r2)
/* 802D1198 002CE0D8  C8 22 C5 B0 */	lfd f1, lbl_80455FB0-_SDA2_BASE_(r2)
/* 802D119C 002CE0DC  6F A0 80 00 */	xoris r0, r29, 0x8000
/* 802D11A0 002CE0E0  90 01 00 0C */	stw r0, 0xc(r1)
/* 802D11A4 002CE0E4  3C 00 43 30 */	lis r0, 0x4330
/* 802D11A8 002CE0E8  90 01 00 08 */	stw r0, 8(r1)
/* 802D11AC 002CE0EC  C8 01 00 08 */	lfd f0, 8(r1)
/* 802D11B0 002CE0F0  EC 40 08 28 */	fsubs f2, f0, f1
/* 802D11B4 002CE0F4  C8 22 C5 B8 */	lfd f1, lbl_80455FB8-_SDA2_BASE_(r2)
/* 802D11B8 002CE0F8  90 A1 00 14 */	stw r5, 0x14(r1)
/* 802D11BC 002CE0FC  90 01 00 10 */	stw r0, 0x10(r1)
/* 802D11C0 002CE100  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 802D11C4 002CE104  EC 00 08 28 */	fsubs f0, f0, f1
/* 802D11C8 002CE108  EC 02 00 24 */	fdivs f0, f2, f0
/* 802D11CC 002CE10C  EC 23 00 32 */	fmuls f1, f3, f0
/* 802D11D0 002CE110  4C C6 32 42 */	crset 6
/* 802D11D4 002CE114  48 01 73 F5 */	bl JUTReportConsole_f
/* 802D11D8 002CE118  38 7E 00 18 */	addi r3, r30, 0x18
/* 802D11DC 002CE11C  48 06 DF 41 */	bl OSUnlockMutex
/* 802D11E0 002CE120  7F E3 FB 78 */	mr r3, r31
/* 802D11E4 002CE124  39 61 00 30 */	addi r11, r1, 0x30
/* 802D11E8 002CE128  48 09 10 41 */	bl _restgpr_29
/* 802D11EC 002CE12C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802D11F0 002CE130  7C 08 03 A6 */	mtlr r0
/* 802D11F4 002CE134  38 21 00 30 */	addi r1, r1, 0x30
/* 802D11F8 002CE138  4E 80 00 20 */	blr 
/* 802D11FC 002CE13C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D1200 002CE140  7C 08 02 A6 */	mflr r0
/* 802D1204 002CE144  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D1208 002CE148  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D120C 002CE14C  93 C1 00 08 */	stw r30, 8(r1)
/* 802D1210 002CE150  7C 7E 1B 78 */	mr r30, r3
/* 802D1214 002CE154  7C 9F 23 78 */	mr r31, r4
/* 802D1218 002CE158  90 A4 00 14 */	stw r5, 0x14(r4)
/* 802D121C 002CE15C  4B FF D5 69 */	bl JKRHeap_NS_getTotalFreeSize
/* 802D1220 002CE160  80 1E 00 38 */	lwz r0, 0x38(r30)
/* 802D1224 002CE164  7C 03 00 50 */	subf r0, r3, r0
/* 802D1228 002CE168  90 1F 00 00 */	stw r0, 0(r31)
/* 802D122C 002CE16C  80 7E 00 70 */	lwz r3, 0x70(r30)
/* 802D1230 002CE170  80 1E 00 74 */	lwz r0, 0x74(r30)
/* 802D1234 002CE174  1C 00 00 03 */	mulli r0, r0, 3
/* 802D1238 002CE178  7C 63 02 14 */	add r3, r3, r0
/* 802D123C 002CE17C  90 7F 00 04 */	stw r3, 4(r31)
/* 802D1240 002CE180  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D1244 002CE184  83 C1 00 08 */	lwz r30, 8(r1)
/* 802D1248 002CE188  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D124C 002CE18C  7C 08 03 A6 */	mtlr r0
/* 802D1250 002CE190  38 21 00 10 */	addi r1, r1, 0x10
/* 802D1254 002CE194  4E 80 00 20 */	blr 
/* 802D1258 002CE198  38 60 00 01 */	li r3, 1
/* 802D125C 002CE19C  80 C4 00 04 */	lwz r6, 4(r4)
/* 802D1260 002CE1A0  80 05 00 04 */	lwz r0, 4(r5)
/* 802D1264 002CE1A4  7C 06 00 40 */	cmplw r6, r0
/* 802D1268 002CE1A8  41 82 00 08 */	beq lbl_802D1270
/* 802D126C 002CE1AC  38 60 00 00 */	li r3, 0
lbl_802D1270:
/* 802D1270 002CE1B0  80 84 00 00 */	lwz r4, 0(r4)
/* 802D1274 002CE1B4  80 05 00 00 */	lwz r0, 0(r5)
/* 802D1278 002CE1B8  7C 04 00 40 */	cmplw r4, r0
/* 802D127C 002CE1BC  4D 82 00 20 */	beqlr 
/* 802D1280 002CE1C0  38 60 00 00 */	li r3, 0
/* 802D1284 002CE1C4  4E 80 00 20 */	blr 
/* 802D1288 002CE1C8  3C 60 53 4C */	lis r3, 0x534C4944@ha
/* 802D128C 002CE1CC  38 63 49 44 */	addi r3, r3, 0x534C4944@l
/* 802D1290 002CE1D0  4E 80 00 20 */	blr 
/* 802D1294 002CE1D4  80 63 00 6C */	lwz r3, 0x6c(r3)
/* 802D1298 002CE1D8  4E 80 00 20 */	blr 
/* 802D129C 002CE1DC  80 63 00 70 */	lwz r3, 0x70(r3)
/* 802D12A0 002CE1E0  4E 80 00 20 */	blr 
/* 802D12A4 002CE1E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D12A8 002CE1E8  7C 08 02 A6 */	mflr r0
/* 802D12AC 002CE1EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D12B0 002CE1F0  4B FF D4 7D */	bl JKRHeap_NS_getFreeSize
/* 802D12B4 002CE1F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D12B8 002CE1F8  7C 08 03 A6 */	mtlr r0
/* 802D12BC 002CE1FC  38 21 00 10 */	addi r1, r1, 0x10
/* 802D12C0 002CE200  4E 80 00 20 */	blr 

