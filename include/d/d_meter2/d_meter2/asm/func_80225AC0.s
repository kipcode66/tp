/* 80225AC0 00222A00  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 80225AC4 00222A04  7C 08 02 A6 */ mflr r0
/* 80225AC8 00222A08  90 01 00 14 */ stw r0, 0x14(r1)
/* 80225ACC 00222A0C  4B FF 96 5D */ bl _execute__9dMeter2_cFv
/* 80225AD0 00222A10  80 01 00 14 */ lwz r0, 0x14(r1)
/* 80225AD4 00222A14  7C 08 03 A6 */ mtlr r0
/* 80225AD8 00222A18  38 21 00 10 */ addi r1, r1, 0x10
/* 80225ADC 00222A1C  4E 80 00 20 */ blr