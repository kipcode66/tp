lbl_8003F810:
/* 8003F810  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8003F814  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8003F818  38 C0 00 00 */	li r6, 0
/* 8003F81C  80 E3 00 04 */	lwz r7, 4(r3)
/* 8003F820  3C 00 80 00 */	lis r0, 0x8000
/* 8003F824  7C 07 00 40 */	cmplw r7, r0
/* 8003F828  41 80 00 E0 */	blt lbl_8003F908
/* 8003F82C  7C E8 3B 78 */	mr r8, r7
/* 8003F830  39 20 00 00 */	li r9, 0
/* 8003F834  48 00 00 44 */	b lbl_8003F878
lbl_8003F838:
/* 8003F838  88 E8 00 00 */	lbz r7, 0(r8)
/* 8003F83C  7C E6 07 74 */	extsb r6, r7
/* 8003F840  88 04 00 00 */	lbz r0, 0(r4)
/* 8003F844  7C 00 07 74 */	extsb r0, r0
/* 8003F848  7C 06 00 00 */	cmpw r6, r0
/* 8003F84C  40 80 00 08 */	bge lbl_8003F854
/* 8003F850  98 E4 00 00 */	stb r7, 0(r4)
lbl_8003F854:
/* 8003F854  88 E8 00 00 */	lbz r7, 0(r8)
/* 8003F858  7C E6 07 74 */	extsb r6, r7
/* 8003F85C  88 05 00 00 */	lbz r0, 0(r5)
/* 8003F860  7C 00 07 74 */	extsb r0, r0
/* 8003F864  7C 06 00 00 */	cmpw r6, r0
/* 8003F868  40 81 00 08 */	ble lbl_8003F870
/* 8003F86C  98 E5 00 00 */	stb r7, 0(r5)
lbl_8003F870:
/* 8003F870  39 08 00 08 */	addi r8, r8, 8
/* 8003F874  39 29 00 01 */	addi r9, r9, 1
lbl_8003F878:
/* 8003F878  88 C3 00 00 */	lbz r6, 0(r3)
/* 8003F87C  7C 09 30 00 */	cmpw r9, r6
/* 8003F880  41 80 FF B8 */	blt lbl_8003F838
/* 8003F884  80 83 00 04 */	lwz r4, 4(r3)
/* 8003F888  38 06 FF FF */	addi r0, r6, -1
/* 8003F88C  54 00 18 38 */	slwi r0, r0, 3
/* 8003F890  7C 84 02 14 */	add r4, r4, r0
/* 8003F894  80 A4 00 04 */	lwz r5, 4(r4)
/* 8003F898  88 84 00 01 */	lbz r4, 1(r4)
/* 8003F89C  38 04 FF FF */	addi r0, r4, -1
/* 8003F8A0  1C 00 00 14 */	mulli r0, r0, 0x14
/* 8003F8A4  7C 85 02 14 */	add r4, r5, r0
/* 8003F8A8  88 A4 00 04 */	lbz r5, 4(r4)
/* 8003F8AC  28 05 00 00 */	cmplwi r5, 0
/* 8003F8B0  41 82 00 2C */	beq lbl_8003F8DC
/* 8003F8B4  80 84 00 10 */	lwz r4, 0x10(r4)
/* 8003F8B8  38 05 FF FF */	addi r0, r5, -1
/* 8003F8BC  54 00 18 38 */	slwi r0, r0, 3
/* 8003F8C0  7C A4 02 14 */	add r5, r4, r0
/* 8003F8C4  80 85 00 04 */	lwz r4, 4(r5)
/* 8003F8C8  88 05 00 01 */	lbz r0, 1(r5)
/* 8003F8CC  54 00 08 3C */	slwi r0, r0, 1
/* 8003F8D0  7C 04 02 14 */	add r0, r4, r0
/* 8003F8D4  7C 63 00 50 */	subf r3, r3, r0
/* 8003F8D8  48 00 01 5C */	b lbl_8003FA34
lbl_8003F8DC:
/* 8003F8DC  80 A4 00 08 */	lwz r5, 8(r4)
/* 8003F8E0  88 84 00 02 */	lbz r4, 2(r4)
/* 8003F8E4  38 04 FF FF */	addi r0, r4, -1
/* 8003F8E8  54 00 18 38 */	slwi r0, r0, 3
/* 8003F8EC  7C A5 02 14 */	add r5, r5, r0
/* 8003F8F0  80 85 00 04 */	lwz r4, 4(r5)
/* 8003F8F4  88 05 00 02 */	lbz r0, 2(r5)
/* 8003F8F8  54 00 08 3C */	slwi r0, r0, 1
/* 8003F8FC  7C 04 02 14 */	add r0, r4, r0
/* 8003F900  7C 63 00 50 */	subf r3, r3, r0
/* 8003F904  48 00 01 30 */	b lbl_8003FA34
lbl_8003F908:
/* 8003F908  7C 03 3A 14 */	add r0, r3, r7
/* 8003F90C  90 03 00 04 */	stw r0, 4(r3)
/* 8003F910  80 03 00 08 */	lwz r0, 8(r3)
/* 8003F914  7C 03 02 14 */	add r0, r3, r0
/* 8003F918  90 03 00 08 */	stw r0, 8(r3)
/* 8003F91C  80 E3 00 04 */	lwz r7, 4(r3)
/* 8003F920  39 00 00 00 */	li r8, 0
/* 8003F924  7C 60 1B 78 */	mr r0, r3
/* 8003F928  48 00 00 FC */	b lbl_8003FA24
lbl_8003F92C:
/* 8003F92C  81 27 00 04 */	lwz r9, 4(r7)
/* 8003F930  7D 20 4A 14 */	add r9, r0, r9
/* 8003F934  91 27 00 04 */	stw r9, 4(r7)
/* 8003F938  81 47 00 04 */	lwz r10, 4(r7)
/* 8003F93C  39 60 00 00 */	li r11, 0
/* 8003F940  48 00 00 98 */	b lbl_8003F9D8
lbl_8003F944:
/* 8003F944  80 CA 00 10 */	lwz r6, 0x10(r10)
/* 8003F948  81 2A 00 08 */	lwz r9, 8(r10)
/* 8003F94C  7D 20 4A 14 */	add r9, r0, r9
/* 8003F950  91 2A 00 08 */	stw r9, 8(r10)
/* 8003F954  81 8A 00 08 */	lwz r12, 8(r10)
/* 8003F958  3B E0 00 00 */	li r31, 0
/* 8003F95C  48 00 00 24 */	b lbl_8003F980
lbl_8003F960:
/* 8003F960  81 2C 00 04 */	lwz r9, 4(r12)
/* 8003F964  88 CC 00 02 */	lbz r6, 2(r12)
/* 8003F968  54 C6 08 3C */	slwi r6, r6, 1
/* 8003F96C  7C C9 32 14 */	add r6, r9, r6
/* 8003F970  7D 20 4A 14 */	add r9, r0, r9
/* 8003F974  91 2C 00 04 */	stw r9, 4(r12)
/* 8003F978  39 8C 00 08 */	addi r12, r12, 8
/* 8003F97C  3B FF 00 01 */	addi r31, r31, 1
lbl_8003F980:
/* 8003F980  89 2A 00 02 */	lbz r9, 2(r10)
/* 8003F984  7C 1F 48 00 */	cmpw r31, r9
/* 8003F988  41 80 FF D8 */	blt lbl_8003F960
/* 8003F98C  81 2A 00 10 */	lwz r9, 0x10(r10)
/* 8003F990  7D 20 4A 14 */	add r9, r0, r9
/* 8003F994  91 2A 00 10 */	stw r9, 0x10(r10)
/* 8003F998  81 8A 00 10 */	lwz r12, 0x10(r10)
/* 8003F99C  3B E0 00 00 */	li r31, 0
/* 8003F9A0  48 00 00 24 */	b lbl_8003F9C4
lbl_8003F9A4:
/* 8003F9A4  81 2C 00 04 */	lwz r9, 4(r12)
/* 8003F9A8  88 CC 00 01 */	lbz r6, 1(r12)
/* 8003F9AC  54 C6 08 3C */	slwi r6, r6, 1
/* 8003F9B0  7C C9 32 14 */	add r6, r9, r6
/* 8003F9B4  7D 20 4A 14 */	add r9, r0, r9
/* 8003F9B8  91 2C 00 04 */	stw r9, 4(r12)
/* 8003F9BC  39 8C 00 08 */	addi r12, r12, 8
/* 8003F9C0  3B FF 00 01 */	addi r31, r31, 1
lbl_8003F9C4:
/* 8003F9C4  89 2A 00 04 */	lbz r9, 4(r10)
/* 8003F9C8  7C 1F 48 00 */	cmpw r31, r9
/* 8003F9CC  41 80 FF D8 */	blt lbl_8003F9A4
/* 8003F9D0  39 4A 00 14 */	addi r10, r10, 0x14
/* 8003F9D4  39 6B 00 01 */	addi r11, r11, 1
lbl_8003F9D8:
/* 8003F9D8  89 27 00 01 */	lbz r9, 1(r7)
/* 8003F9DC  7C 0B 48 00 */	cmpw r11, r9
/* 8003F9E0  41 80 FF 64 */	blt lbl_8003F944
/* 8003F9E4  89 67 00 00 */	lbz r11, 0(r7)
/* 8003F9E8  7D 6A 07 74 */	extsb r10, r11
/* 8003F9EC  89 24 00 00 */	lbz r9, 0(r4)
/* 8003F9F0  7D 29 07 74 */	extsb r9, r9
/* 8003F9F4  7C 0A 48 00 */	cmpw r10, r9
/* 8003F9F8  40 80 00 08 */	bge lbl_8003FA00
/* 8003F9FC  99 64 00 00 */	stb r11, 0(r4)
lbl_8003FA00:
/* 8003FA00  89 67 00 00 */	lbz r11, 0(r7)
/* 8003FA04  7D 6A 07 74 */	extsb r10, r11
/* 8003FA08  89 25 00 00 */	lbz r9, 0(r5)
/* 8003FA0C  7D 29 07 74 */	extsb r9, r9
/* 8003FA10  7C 0A 48 00 */	cmpw r10, r9
/* 8003FA14  40 81 00 08 */	ble lbl_8003FA1C
/* 8003FA18  99 65 00 00 */	stb r11, 0(r5)
lbl_8003FA1C:
/* 8003FA1C  38 E7 00 08 */	addi r7, r7, 8
/* 8003FA20  39 08 00 01 */	addi r8, r8, 1
lbl_8003FA24:
/* 8003FA24  89 23 00 00 */	lbz r9, 0(r3)
/* 8003FA28  7C 08 48 00 */	cmpw r8, r9
/* 8003FA2C  41 80 FF 00 */	blt lbl_8003F92C
/* 8003FA30  7C C3 33 78 */	mr r3, r6
lbl_8003FA34:
/* 8003FA34  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8003FA38  38 21 00 10 */	addi r1, r1, 0x10
/* 8003FA3C  4E 80 00 20 */	blr 
