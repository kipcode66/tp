/* 8011EFB8 0011BEF8  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 8011EFBC 0011BEFC  7C 08 02 A6 */ mflr r0
/* 8011EFC0 0011BF00  90 01 00 24 */ stw r0, 0x24(r1)
/* 8011EFC4 0011BF04  93 E1 00 1C */ stw r31, 0x1c(r1)
/* 8011EFC8 0011BF08  93 C1 00 18 */ stw r30, 0x18(r1)
/* 8011EFCC 0011BF0C  7C 7E 1B 78 */ mr r30, r3
/* 8011EFD0 0011BF10  A8 03 30 0C */ lha r0, 0x300c(r3)
/* 8011EFD4 0011BF14  2C 00 00 00 */ cmpwi r0, 0
/* 8011EFD8 0011BF18  41 82 00 54 */ beq lbl_8011F02C
/* 8011EFDC 0011BF1C  80 1E 32 CC */ lwz r0, 0x32cc(r30)
/* 8011EFE0 0011BF20  90 01 00 08 */ stw r0, 8(r1)
/*.global fpcSch_JudgeByID*/
/* 8011EFE4 0011BF24  3C 60 80 02 */ lis r3, fpcSch_JudgeByID@ha
/*.global fpcSch_JudgeByID*/
/* 8011EFE8 0011BF28  38 63 35 90 */ addi r3, r3, fpcSch_JudgeByID@l
/* 8011EFEC 0011BF2C  38 81 00 08 */ addi r4, r1, 8
/* 8011EFF0 0011BF30  4B EF A8 09 */ bl fopAcIt_Judge__FPFPvPv_PvPv
/* 8011EFF4 0011BF34  7C 7F 1B 79 */ or. r31, r3, r3
/* 8011EFF8 0011BF38  41 82 00 70 */ beq lbl_8011F068
/* 8011EFFC 0011BF3C  38 7E 28 0C */ addi r3, r30, 0x280c
/* 8011F000 0011BF40  7F E4 FB 78 */ mr r4, r31
/* 8011F004 0011BF44  48 03 FC B5 */ bl daPy_actorKeep_c_NS_setData
/* 8011F008 0011BF48  A8 1F 00 08 */ lha r0, 8(r31)
/* 8011F00C 0011BF4C  2C 00 02 77 */ cmpwi r0, 0x277
/* 8011F010 0011BF50  40 82 00 10 */ bne lbl_8011F020
/* 8011F014 0011BF54  38 00 00 01 */ li r0, 1
/* 8011F018 0011BF58  98 1F 0D E0 */ stb r0, 0xde0(r31)
/* 8011F01C 0011BF5C  48 00 00 4C */ b lbl_8011F068
lbl_8011F020:
/* 8011F020 0011BF60  38 00 00 01 */ li r0, 1
/* 8011F024 0011BF64  98 1F 0D 7A */ stb r0, 0xd7a(r31)
/* 8011F028 0011BF68  48 00 00 40 */ b lbl_8011F068
lbl_8011F02C:
/* 8011F02C 0011BF6C  38 7E 1F D0 */ addi r3, r30, 0x1fd0
/* 8011F030 0011BF70  48 03 F4 9D */ bl daPy_frameCtrl_c_NS_checkAnmEnd
/* 8011F034 0011BF74  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 8011F038 0011BF78  41 82 00 28 */ beq lbl_8011F060
/* 8011F03C 0011BF7C  7F C3 F3 78 */ mr r3, r30
/* 8011F040 0011BF80  38 80 01 89 */ li r4, 0x189
/* 8011F044 0011BF84  4B F8 DF 3D */ bl daAlink_c_NS_setSingleAnimeBase
/* 8011F048 0011BF88  80 1E 31 A0 */ lwz r0, 0x31a0(r30)
/* 8011F04C 0011BF8C  60 00 01 00 */ ori r0, r0, 0x100
/* 8011F050 0011BF90  90 1E 31 A0 */ stw r0, 0x31a0(r30)
/* 8011F054 0011BF94  38 00 00 01 */ li r0, 1
/* 8011F058 0011BF98  B0 1E 30 0C */ sth r0, 0x300c(r30)
/* 8011F05C 0011BF9C  48 00 00 0C */ b lbl_8011F068
lbl_8011F060:
/* 8011F060 0011BFA0  7F C3 F3 78 */ mr r3, r30
/* 8011F064 0011BFA4  4B FF 97 15 */ bl daAlink_c_NS_setTradeItemOutHand
lbl_8011F068:
/* 8011F068 0011BFA8  38 60 00 01 */ li r3, 1
/* 8011F06C 0011BFAC  83 E1 00 1C */ lwz r31, 0x1c(r1)
/* 8011F070 0011BFB0  83 C1 00 18 */ lwz r30, 0x18(r1)
/* 8011F074 0011BFB4  80 01 00 24 */ lwz r0, 0x24(r1)
/* 8011F078 0011BFB8  7C 08 03 A6 */ mtlr r0
/* 8011F07C 0011BFBC  38 21 00 20 */ addi r1, r1, 0x20
/* 8011F080 0011BFC0  4E 80 00 20 */ blr