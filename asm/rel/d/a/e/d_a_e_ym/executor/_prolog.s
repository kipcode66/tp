lbl_80808040:
/* 80808040  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80808044  7C 08 02 A6 */	mflr r0
/* 80808048  90 01 00 14 */	stw r0, 0x14(r1)
/* 8080804C  3C 60 80 81 */	lis r3, data_80815980@ha
/* 80808050  38 63 59 80 */	addi r3, r3, data_80815980@l
/* 80808054  4B A5 B0 F8 */	b ModuleConstructorsX
/* 80808058  4B A5 B0 30 */	b ModuleProlog
/* 8080805C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80808060  7C 08 03 A6 */	mtlr r0
/* 80808064  38 21 00 10 */	addi r1, r1, 0x10
/* 80808068  4E 80 00 20 */	blr 