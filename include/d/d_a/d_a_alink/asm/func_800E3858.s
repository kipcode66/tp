/* 800E3858 000E0798  A8 03 00 08 */ lha r0, 8(r3)
/* 800E385C 000E079C  2C 00 02 FC */ cmpwi r0, 0x2fc
/* 800E3860 000E07A0  40 82 00 18 */ bne lbl_800E3878
/* 800E3864 000E07A4  88 03 0C F0 */ lbz r0, 0xcf0(r3)
/* 800E3868 000E07A8  2C 00 00 09 */ cmpwi r0, 9
/* 800E386C 000E07AC  40 82 00 0C */ bne lbl_800E3878
/* 800E3870 000E07B0  38 60 00 01 */ li r3, 1
/* 800E3874 000E07B4  4E 80 00 20 */ blr
lbl_800E3878:
/* 800E3878 000E07B8  38 60 00 00 */ li r3, 0
/* 800E387C 000E07BC  4E 80 00 20 */ blr