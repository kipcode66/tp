lbl_801F50C4:
/* 801F50C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F50C8  7C 08 02 A6 */	mflr r0
/* 801F50CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F50D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F50D4  7C 7F 1B 78 */	mr r31, r3
/* 801F50D8  54 84 04 3E */	clrlwi r4, r4, 0x10
/* 801F50DC  28 04 FF FF */	cmplwi r4, 0xffff
/* 801F50E0  40 82 00 2C */	bne lbl_801F510C
/* 801F50E4  88 1F 00 D0 */	lbz r0, 0xd0(r31)
/* 801F50E8  68 00 00 01 */	xori r0, r0, 1
/* 801F50EC  54 00 10 3A */	slwi r0, r0, 2
/* 801F50F0  7C 7F 02 14 */	add r3, r31, r0
/* 801F50F4  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 801F50F8  3C 80 80 39 */	lis r4, d_menu_d_menu_save__stringBase0@ha /* 0x80397960@ha */
/* 801F50FC  38 84 79 60 */	addi r4, r4, d_menu_d_menu_save__stringBase0@l /* 0x80397960@l */
/* 801F5100  38 84 00 A5 */	addi r4, r4, 0xa5
/* 801F5104  48 17 3A 29 */	bl strcpy
/* 801F5108  48 00 00 40 */	b lbl_801F5148
lbl_801F510C:
/* 801F510C  88 1F 00 D0 */	lbz r0, 0xd0(r31)
/* 801F5110  68 00 00 01 */	xori r0, r0, 1
/* 801F5114  54 00 10 3A */	slwi r0, r0, 2
/* 801F5118  7C 7F 02 14 */	add r3, r31, r0
/* 801F511C  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 801F5120  80 A3 00 04 */	lwz r5, 4(r3)
/* 801F5124  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 801F5128  38 C0 00 00 */	li r6, 0
/* 801F512C  80 FF 00 20 */	lwz r7, 0x20(r31)
/* 801F5130  39 00 00 00 */	li r8, 0
/* 801F5134  39 20 00 00 */	li r9, 0
/* 801F5138  81 83 00 00 */	lwz r12, 0(r3)
/* 801F513C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F5140  7D 89 03 A6 */	mtctr r12
/* 801F5144  4E 80 04 21 */	bctrl 
lbl_801F5148:
/* 801F5148  38 80 00 00 */	li r4, 0
/* 801F514C  88 1F 00 D0 */	lbz r0, 0xd0(r31)
/* 801F5150  54 00 10 3A */	slwi r0, r0, 2
/* 801F5154  7C 7F 02 14 */	add r3, r31, r0
/* 801F5158  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 801F515C  B0 83 00 16 */	sth r4, 0x16(r3)
/* 801F5160  88 1F 00 D0 */	lbz r0, 0xd0(r31)
/* 801F5164  68 00 00 01 */	xori r0, r0, 1
/* 801F5168  54 00 10 3A */	slwi r0, r0, 2
/* 801F516C  7C 7F 02 14 */	add r3, r31, r0
/* 801F5170  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 801F5174  B0 83 00 16 */	sth r4, 0x16(r3)
/* 801F5178  98 9F 00 D1 */	stb r4, 0xd1(r31)
/* 801F517C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F5180  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F5184  7C 08 03 A6 */	mtlr r0
/* 801F5188  38 21 00 10 */	addi r1, r1, 0x10
/* 801F518C  4E 80 00 20 */	blr 
