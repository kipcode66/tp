/* 800FD8E8 000FA828  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800FD8EC 000FA82C  7C 08 02 A6 */ mflr r0
/* 800FD8F0 000FA830  90 01 00 14 */ stw r0, 0x14(r1)
/* 800FD8F4 000FA834  93 E1 00 0C */ stw r31, 0xc(r1)
/* 800FD8F8 000FA838  93 C1 00 08 */ stw r30, 8(r1)
/* 800FD8FC 000FA83C  7C 7E 1B 78 */ mr r30, r3
/* 800FD900 000FA840  3B FE 1F D0 */ addi r31, r30, 0x1fd0
/* 800FD904 000FA844  4B FF FB A5 */ bl daAlink_c_NS_setMoveBGLadderCorrect
/* 800FD908 000FA848  2C 03 00 00 */ cmpwi r3, 0
/* 800FD90C 000FA84C  41 82 00 0C */ beq lbl_800FD918
/* 800FD910 000FA850  38 60 00 01 */ li r3, 1
/* 800FD914 000FA854  48 00 00 A0 */ b lbl_800FD9B4
lbl_800FD918:
/* 800FD918 000FA858  7F E3 FB 78 */ mr r3, r31
/* 800FD91C 000FA85C  48 06 0B B1 */ bl daPy_frameCtrl_c_NS_checkAnmEnd
/* 800FD920 000FA860  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800FD924 000FA864  41 82 00 14 */ beq lbl_800FD938
/* 800FD928 000FA868  7F C3 F3 78 */ mr r3, r30
/* 800FD92C 000FA86C  38 80 00 00 */ li r4, 0
/* 800FD930 000FA870  4B FB C7 A1 */ bl daAlink_c_NS_checkNextAction
/* 800FD934 000FA874  48 00 00 7C */ b lbl_800FD9B0
lbl_800FD938:
/* 800FD938 000FA878  C0 3F 00 10 */ lfs f1, 0x10(r31)
/* 800FD93C 000FA87C  3C 60 80 39 */ lis r3, lbl_8038EB8C@ha
/* 800FD940 000FA880  38 63 EB 8C */ addi r3, r3, lbl_8038EB8C@l
/* 800FD944 000FA884  C0 03 00 58 */ lfs f0, 0x58(r3)
/* 800FD948 000FA888  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800FD94C 000FA88C  40 81 00 18 */ ble lbl_800FD964
/* 800FD950 000FA890  7F C3 F3 78 */ mr r3, r30
/* 800FD954 000FA894  38 80 00 01 */ li r4, 1
/* 800FD958 000FA898  4B FB C7 79 */ bl daAlink_c_NS_checkNextAction
/* 800FD95C 000FA89C  2C 03 00 00 */ cmpwi r3, 0
/* 800FD960 000FA8A0  40 82 00 50 */ bne lbl_800FD9B0
lbl_800FD964:
/* 800FD964 000FA8A4  C0 3F 00 10 */ lfs f1, 0x10(r31)
/* 800FD968 000FA8A8  C0 02 94 74 */ lfs f0, lbl_80452E74-_SDA2_BASE_(r2)
/* 800FD96C 000FA8AC  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800FD970 000FA8B0  4C 41 13 82 */ cror 2, 1, 2
/* 800FD974 000FA8B4  40 82 00 14 */ bne lbl_800FD988
/* 800FD978 000FA8B8  38 00 00 00 */ li r0, 0
/* 800FD97C 000FA8BC  B0 1E 30 0C */ sth r0, 0x300c(r30)
/* 800FD980 000FA8C0  B0 1E 30 10 */ sth r0, 0x3010(r30)
/* 800FD984 000FA8C4  48 00 00 24 */ b lbl_800FD9A8
lbl_800FD988:
/* 800FD988 000FA8C8  C0 02 94 B4 */ lfs f0, lbl_80452EB4-_SDA2_BASE_(r2)
/* 800FD98C 000FA8CC  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800FD990 000FA8D0  4C 41 13 82 */ cror 2, 1, 2
/* 800FD994 000FA8D4  40 82 00 14 */ bne lbl_800FD9A8
/* 800FD998 000FA8D8  38 00 00 00 */ li r0, 0
/* 800FD99C 000FA8DC  B0 1E 30 A0 */ sth r0, 0x30a0(r30)
/* 800FD9A0 000FA8E0  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800FD9A4 000FA8E4  D0 1E 33 F4 */ stfs f0, 0x33f4(r30)
lbl_800FD9A8:
/* 800FD9A8 000FA8E8  38 00 00 06 */ li r0, 6
/* 800FD9AC 000FA8EC  98 1E 2F 99 */ stb r0, 0x2f99(r30)
lbl_800FD9B0:
/* 800FD9B0 000FA8F0  38 60 00 01 */ li r3, 1
lbl_800FD9B4:
/* 800FD9B4 000FA8F4  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 800FD9B8 000FA8F8  83 C1 00 08 */ lwz r30, 8(r1)
/* 800FD9BC 000FA8FC  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800FD9C0 000FA900  7C 08 03 A6 */ mtlr r0
/* 800FD9C4 000FA904  38 21 00 10 */ addi r1, r1, 0x10
/* 800FD9C8 000FA908  4E 80 00 20 */ blr