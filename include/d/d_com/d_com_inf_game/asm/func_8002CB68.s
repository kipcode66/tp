/* 8002CB68 00029AA8  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8002CB6C 00029AAC  7C 08 02 A6 */ mflr r0
/* 8002CB70 00029AB0  90 01 00 14 */ stw r0, 0x14(r1)
/* 8002CB74 00029AB4  80 63 4E 08 */ lwz r3, 0x4e08(r3)
/* 8002CB78 00029AB8  28 03 00 00 */ cmplwi r3, 0
/* 8002CB7C 00029ABC  41 82 00 08 */ beq lbl_8002CB84
/* 8002CB80 00029AC0  48 01 C3 3D */ bl entry__15dSmplMdl_draw_cFP8J3DModeli
lbl_8002CB84:
/* 8002CB84 00029AC4  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8002CB88 00029AC8  7C 08 03 A6 */ mtlr r0
/* 8002CB8C 00029ACC  38 21 00 10 */ addi r1, r1, 0x10
/* 8002CB90 00029AD0  4E 80 00 20 */ blr