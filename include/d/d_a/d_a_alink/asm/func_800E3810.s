/* 800E3810 000E0750  3C 60 80 39 */ lis r3, lbl_8038E714@ha
/* 800E3814 000E0754  38 63 E7 14 */ addi r3, r3, lbl_8038E714@l
/* 800E3818 000E0758  C0 23 00 48 */ lfs f1, 0x48(r3)
/* 800E381C 000E075C  4E 80 00 20 */ blr