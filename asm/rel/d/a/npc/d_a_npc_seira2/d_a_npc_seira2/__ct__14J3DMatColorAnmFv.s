lbl_80AD14F0:
/* 80AD14F0  38 80 00 00 */	li r4, 0
/* 80AD14F4  B0 83 00 00 */	sth r4, 0(r3)
/* 80AD14F8  38 00 00 01 */	li r0, 1
/* 80AD14FC  B0 03 00 02 */	sth r0, 2(r3)
/* 80AD1500  90 83 00 04 */	stw r4, 4(r3)
/* 80AD1504  4E 80 00 20 */	blr 