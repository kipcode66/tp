lbl_801F9144:
/* 801F9144  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801F9148  7C 08 02 A6 */	mflr r0
/* 801F914C  90 01 00 34 */	stw r0, 0x34(r1)
/* 801F9150  39 61 00 30 */	addi r11, r1, 0x30
/* 801F9154  48 16 90 79 */	bl _savegpr_25
/* 801F9158  7C 79 1B 78 */	mr r25, r3
/* 801F915C  3B 40 00 00 */	li r26, 0
/* 801F9160  3B E0 00 00 */	li r31, 0
/* 801F9164  3B C0 00 00 */	li r30, 0
/* 801F9168  3C 60 80 39 */	lis r3, i_id0@ha /* 0x80397D80@ha */
/* 801F916C  3B 83 7D 80 */	addi r28, r3, i_id0@l /* 0x80397D80@l */
/* 801F9170  3C 60 80 39 */	lis r3, i_id1_4479@ha /* 0x80397D9C@ha */
/* 801F9174  3B A3 7D 9C */	addi r29, r3, i_id1_4479@l /* 0x80397D9C@l */
/* 801F9178  48 00 00 C4 */	b lbl_801F923C
lbl_801F917C:
/* 801F917C  80 79 01 9C */	lwz r3, 0x19c(r25)
/* 801F9180  7C 9C F0 2E */	lwzx r4, r28, r30
/* 801F9184  7F 79 FA 14 */	add r27, r25, r31
/* 801F9188  80 BB 00 B0 */	lwz r5, 0xb0(r27)
/* 801F918C  38 C0 00 00 */	li r6, 0
/* 801F9190  38 E0 00 00 */	li r7, 0
/* 801F9194  39 00 00 00 */	li r8, 0
/* 801F9198  39 20 00 00 */	li r9, 0
/* 801F919C  81 83 00 00 */	lwz r12, 0(r3)
/* 801F91A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F91A4  7D 89 03 A6 */	mtctr r12
/* 801F91A8  4E 80 04 21 */	bctrl 
/* 801F91AC  80 79 01 9C */	lwz r3, 0x19c(r25)
/* 801F91B0  7C 9C F0 2E */	lwzx r4, r28, r30
/* 801F91B4  80 BB 00 B4 */	lwz r5, 0xb4(r27)
/* 801F91B8  38 C0 00 00 */	li r6, 0
/* 801F91BC  38 E0 00 00 */	li r7, 0
/* 801F91C0  39 00 00 00 */	li r8, 0
/* 801F91C4  39 20 00 00 */	li r9, 0
/* 801F91C8  81 83 00 00 */	lwz r12, 0(r3)
/* 801F91CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F91D0  7D 89 03 A6 */	mtctr r12
/* 801F91D4  4E 80 04 21 */	bctrl 
/* 801F91D8  80 79 01 9C */	lwz r3, 0x19c(r25)
/* 801F91DC  7C 9D F0 2E */	lwzx r4, r29, r30
/* 801F91E0  80 BB 00 B8 */	lwz r5, 0xb8(r27)
/* 801F91E4  38 C0 00 00 */	li r6, 0
/* 801F91E8  38 E0 00 00 */	li r7, 0
/* 801F91EC  39 00 00 00 */	li r8, 0
/* 801F91F0  39 20 00 00 */	li r9, 0
/* 801F91F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801F91F8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F91FC  7D 89 03 A6 */	mtctr r12
/* 801F9200  4E 80 04 21 */	bctrl 
/* 801F9204  80 79 01 9C */	lwz r3, 0x19c(r25)
/* 801F9208  7C 9D F0 2E */	lwzx r4, r29, r30
/* 801F920C  80 BB 00 BC */	lwz r5, 0xbc(r27)
/* 801F9210  38 C0 00 00 */	li r6, 0
/* 801F9214  38 E0 00 00 */	li r7, 0
/* 801F9218  39 00 00 00 */	li r8, 0
/* 801F921C  39 20 00 00 */	li r9, 0
/* 801F9220  81 83 00 00 */	lwz r12, 0(r3)
/* 801F9224  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F9228  7D 89 03 A6 */	mtctr r12
/* 801F922C  4E 80 04 21 */	bctrl 
/* 801F9230  3B 5A 00 01 */	addi r26, r26, 1
/* 801F9234  3B FF 00 10 */	addi r31, r31, 0x10
/* 801F9238  3B DE 00 04 */	addi r30, r30, 4
lbl_801F923C:
/* 801F923C  88 19 02 07 */	lbz r0, 0x207(r25)
/* 801F9240  7C 1A 00 00 */	cmpw r26, r0
/* 801F9244  41 80 FF 38 */	blt lbl_801F917C
/* 801F9248  39 61 00 30 */	addi r11, r1, 0x30
/* 801F924C  48 16 8F CD */	bl _restgpr_25
/* 801F9250  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801F9254  7C 08 03 A6 */	mtlr r0
/* 801F9258  38 21 00 30 */	addi r1, r1, 0x30
/* 801F925C  4E 80 00 20 */	blr 
