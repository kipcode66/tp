/* 8002DD3C 0002AC7C  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8002DD40 0002AC80  7C 08 02 A6 */ mflr r0
/* 8002DD44 0002AC84  90 01 00 14 */ stw r0, 0x14(r1)
/* 8002DD48 0002AC88  93 E1 00 0C */ stw r31, 0xc(r1)
/* 8002DD4C 0002AC8C  93 C1 00 08 */ stw r30, 8(r1)
/* 8002DD50 0002AC90  7C 7E 1B 78 */ mr r30, r3
/* 8002DD54 0002AC94  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 8002DD58 0002AC98  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 8002DD5C 0002AC9C  7F C4 F3 78 */ mr r4, r30
/* 8002DD60 0002ACA0  48 00 4C FD */ bl getSelectItemIndex__21dSv_player_status_a_cCFi
/* 8002DD64 0002ACA4  7C 7F 1B 78 */ mr r31, r3
/* 8002DD68 0002ACA8  7F C3 F3 78 */ mr r3, r30
/* 8002DD6C 0002ACAC  48 00 00 5D */ bl dComIfGs_getMixItemIndex
/* 8002DD70 0002ACB0  57 E0 06 3E */ clrlwi r0, r31, 0x18
/* 8002DD74 0002ACB4  28 00 00 0F */ cmplwi r0, 0xf
/* 8002DD78 0002ACB8  41 80 00 14 */ blt lbl_8002DD8C
/* 8002DD7C 0002ACBC  28 00 00 12 */ cmplwi r0, 0x12
/* 8002DD80 0002ACC0  40 80 00 0C */ bge lbl_8002DD8C
/* 8002DD84 0002ACC4  7F E3 FB 78 */ mr r3, r31
/* 8002DD88 0002ACC8  48 00 00 28 */ b lbl_8002DDB0
lbl_8002DD8C:
/* 8002DD8C 0002ACCC  54 60 06 3E */ clrlwi r0, r3, 0x18
/* 8002DD90 0002ACD0  28 00 00 FF */ cmplwi r0, 0xff
/* 8002DD94 0002ACD4  41 82 00 18 */ beq lbl_8002DDAC
/* 8002DD98 0002ACD8  28 00 00 0F */ cmplwi r0, 0xf
/* 8002DD9C 0002ACDC  41 80 00 10 */ blt lbl_8002DDAC
/* 8002DDA0 0002ACE0  28 00 00 12 */ cmplwi r0, 0x12
/* 8002DDA4 0002ACE4  40 80 00 08 */ bge lbl_8002DDAC
/* 8002DDA8 0002ACE8  48 00 00 08 */ b lbl_8002DDB0
lbl_8002DDAC:
/* 8002DDAC 0002ACEC  38 60 00 FF */ li r3, 0xff
lbl_8002DDB0:
/* 8002DDB0 0002ACF0  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 8002DDB4 0002ACF4  83 C1 00 08 */ lwz r30, 8(r1)
/* 8002DDB8 0002ACF8  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8002DDBC 0002ACFC  7C 08 03 A6 */ mtlr r0
/* 8002DDC0 0002AD00  38 21 00 10 */ addi r1, r1, 0x10
/* 8002DDC4 0002AD04  4E 80 00 20 */ blr