/* 80131DA0 0012ECE0  94 21 FF 00 */ stwu r1, -0x100(r1)
/* 80131DA4 0012ECE4  7C 08 02 A6 */ mflr r0
/* 80131DA8 0012ECE8  90 01 01 04 */ stw r0, 0x104(r1)
/* 80131DAC 0012ECEC  DB E1 00 F0 */ stfd f31, 0xf0(r1)
/* 80131DB0 0012ECF0  F3 E1 00 F8 */ psq_st f31, 248(r1), 0, 0
/* 80131DB4 0012ECF4  DB C1 00 E0 */ stfd f30, 0xe0(r1)
/* 80131DB8 0012ECF8  F3 C1 00 E8 */ psq_st f30, 232(r1), 0, 0
/* 80131DBC 0012ECFC  DB A1 00 D0 */ stfd f29, 0xd0(r1)
/* 80131DC0 0012ED00  F3 A1 00 D8 */ psq_st f29, 216(r1), 0, 0
/* 80131DC4 0012ED04  DB 81 00 C0 */ stfd f28, 0xc0(r1)
/* 80131DC8 0012ED08  F3 81 00 C8 */ psq_st f28, 200(r1), 0, 0
/* 80131DCC 0012ED0C  DB 61 00 B0 */ stfd f27, 0xb0(r1)
/* 80131DD0 0012ED10  F3 61 00 B8 */ psq_st f27, 184(r1), 0, 0
/* 80131DD4 0012ED14  39 61 00 B0 */ addi r11, r1, 0xb0
/* 80131DD8 0012ED18  48 23 03 F9 */ bl _savegpr_26
/* 80131DDC 0012ED1C  7C 7A 1B 78 */ mr r26, r3
/* 80131DE0 0012ED20  3B BA 1F D0 */ addi r29, r26, 0x1fd0
/* 80131DE4 0012ED24  83 83 28 10 */ lwz r28, 0x2810(r3)
/* 80131DE8 0012ED28  3B 60 00 00 */ li r27, 0
/* 80131DEC 0012ED2C  3C 60 80 39 */ lis r3, lbl_8038F46C@ha
/* 80131DF0 0012ED30  38 63 F4 6C */ addi r3, r3, lbl_8038F46C@l
/* 80131DF4 0012ED34  C0 23 00 18 */ lfs f1, 0x18(r3)
/* 80131DF8 0012ED38  C0 5A 33 A8 */ lfs f2, 0x33a8(r26)
/* 80131DFC 0012ED3C  C0 03 00 1C */ lfs f0, 0x1c(r3)
/* 80131E00 0012ED40  EC 00 08 28 */ fsubs f0, f0, f1
/* 80131E04 0012ED44  EC 02 00 32 */ fmuls f0, f2, f0
/* 80131E08 0012ED48  EF 81 00 2A */ fadds f28, f1, f0
/* 80131E0C 0012ED4C  C0 03 00 34 */ lfs f0, 0x34(r3)
/* 80131E10 0012ED50  EC 00 08 28 */ fsubs f0, f0, f1
/* 80131E14 0012ED54  EC 02 00 32 */ fmuls f0, f2, f0
/* 80131E18 0012ED58  EC 21 00 2A */ fadds f1, f1, f0
/* 80131E1C 0012ED5C  C0 02 92 BC */ lfs f0, lbl_80452CBC-_SDA2_BASE_(r2)
/* 80131E20 0012ED60  EF 60 00 72 */ fmuls f27, f0, f1
/* 80131E24 0012ED64  C0 3A 1F DC */ lfs f1, 0x1fdc(r26)
/* 80131E28 0012ED68  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 80131E2C 0012ED6C  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 80131E30 0012ED70  40 81 00 0C */ ble lbl_80131E3C
/* 80131E34 0012ED74  D3 9D 00 0C */ stfs f28, 0xc(r29)
/* 80131E38 0012ED78  48 00 00 14 */ b lbl_80131E4C
lbl_80131E3C:
/* 80131E3C 0012ED7C  40 80 00 0C */ bge lbl_80131E48
/* 80131E40 0012ED80  D3 7D 00 0C */ stfs f27, 0xc(r29)
/* 80131E44 0012ED84  48 00 00 08 */ b lbl_80131E4C
lbl_80131E48:
/* 80131E48 0012ED88  3B 60 00 01 */ li r27, 1
lbl_80131E4C:
/* 80131E4C 0012ED8C  80 7C 10 A8 */ lwz r3, 0x10a8(r28)
/* 80131E50 0012ED90  83 C3 00 00 */ lwz r30, 0(r3)
/* 80131E54 0012ED94  88 1C 07 14 */ lbz r0, 0x714(r28)
/* 80131E58 0012ED98  28 00 00 00 */ cmplwi r0, 0
/* 80131E5C 0012ED9C  41 82 00 1C */ beq lbl_80131E78
/* 80131E60 0012EDA0  C0 5C 07 24 */ lfs f2, 0x724(r28)
/* 80131E64 0012EDA4  C0 3A 04 D0 */ lfs f1, 0x4d0(r26)
/* 80131E68 0012EDA8  C0 1E 00 00 */ lfs f0, 0(r30)
/* 80131E6C 0012EDAC  EC 01 00 28 */ fsubs f0, f1, f0
/* 80131E70 0012EDB0  EF E2 00 32 */ fmuls f31, f2, f0
/* 80131E74 0012EDB4  48 00 00 18 */ b lbl_80131E8C
lbl_80131E78:
/* 80131E78 0012EDB8  C0 5C 07 24 */ lfs f2, 0x724(r28)
/* 80131E7C 0012EDBC  C0 3A 04 D8 */ lfs f1, 0x4d8(r26)
/* 80131E80 0012EDC0  C0 1E 00 08 */ lfs f0, 8(r30)
/* 80131E84 0012EDC4  EC 01 00 28 */ fsubs f0, f1, f0
/* 80131E88 0012EDC8  EF E2 00 32 */ fmuls f31, f2, f0
lbl_80131E8C:
/* 80131E8C 0012EDCC  7F 43 D3 78 */ mr r3, r26
/* 80131E90 0012EDD0  4B F8 2B 79 */ bl daAlink_c_NS_setTalkStatus
/* 80131E94 0012EDD4  2C 03 00 00 */ cmpwi r3, 0
/* 80131E98 0012EDD8  41 82 00 20 */ beq lbl_80131EB8
/* 80131E9C 0012EDDC  7F 43 D3 78 */ mr r3, r26
/* 80131EA0 0012EDE0  38 80 00 01 */ li r4, 1
/* 80131EA4 0012EDE4  4B F8 5D 55 */ bl daAlink_c_NS_orderTalk
/* 80131EA8 0012EDE8  2C 03 00 00 */ cmpwi r3, 0
/* 80131EAC 0012EDEC  41 82 00 40 */ beq lbl_80131EEC
/* 80131EB0 0012EDF0  38 60 00 01 */ li r3, 1
/* 80131EB4 0012EDF4  48 00 08 44 */ b lbl_801326F8
lbl_80131EB8:
/* 80131EB8 0012EDF8  80 1A 27 EC */ lwz r0, 0x27ec(r26)
/* 80131EBC 0012EDFC  28 00 00 00 */ cmplwi r0, 0
/* 80131EC0 0012EE00  41 82 00 2C */ beq lbl_80131EEC
/* 80131EC4 0012EE04  7F 43 D3 78 */ mr r3, r26
/* 80131EC8 0012EE08  38 80 00 8B */ li r4, 0x8b
/* 80131ECC 0012EE0C  4B F8 13 85 */ bl setDoStatus__9daAlink_cFUc
/* 80131ED0 0012EE10  88 1A 2F 8D */ lbz r0, 0x2f8d(r26)
/* 80131ED4 0012EE14  54 00 06 F7 */ rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 80131ED8 0012EE18  41 82 00 14 */ beq lbl_80131EEC
/* 80131EDC 0012EE1C  7F 43 D3 78 */ mr r3, r26
/* 80131EE0 0012EE20  38 80 00 01 */ li r4, 1
/* 80131EE4 0012EE24  48 00 7E FD */ bl daAlink_c_NS_procWolfJumpAttackInit
/* 80131EE8 0012EE28  48 00 08 10 */ b lbl_801326F8
lbl_80131EEC:
/* 80131EEC 0012EE2C  7F 43 D3 78 */ mr r3, r26
/* 80131EF0 0012EE30  4B FF FD 11 */ bl daAlink_c_NS_getDirectionRopeMove
/* 80131EF4 0012EE34  7C 7F 1B 78 */ mr r31, r3
/* 80131EF8 0012EE38  C0 5E 00 08 */ lfs f2, 8(r30)
/* 80131EFC 0012EE3C  C0 1E 00 00 */ lfs f0, 0(r30)
/* 80131F00 0012EE40  D0 01 00 34 */ stfs f0, 0x34(r1)
/* 80131F04 0012EE44  C0 22 92 C0 */ lfs f1, lbl_80452CC0-_SDA2_BASE_(r2)
/* 80131F08 0012EE48  D0 21 00 38 */ stfs f1, 0x38(r1)
/* 80131F0C 0012EE4C  D0 41 00 3C */ stfs f2, 0x3c(r1)
/* 80131F10 0012EE50  C0 5A 04 D8 */ lfs f2, 0x4d8(r26)
/* 80131F14 0012EE54  C0 1A 04 D0 */ lfs f0, 0x4d0(r26)
/* 80131F18 0012EE58  D0 01 00 40 */ stfs f0, 0x40(r1)
/* 80131F1C 0012EE5C  D0 21 00 44 */ stfs f1, 0x44(r1)
/* 80131F20 0012EE60  D0 41 00 48 */ stfs f2, 0x48(r1)
/* 80131F24 0012EE64  38 61 00 34 */ addi r3, r1, 0x34
/* 80131F28 0012EE68  38 81 00 40 */ addi r4, r1, 0x40
/* 80131F2C 0012EE6C  48 21 54 71 */ bl PSVECSquareDistance
/* 80131F30 0012EE70  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 80131F34 0012EE74  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 80131F38 0012EE78  40 81 00 58 */ ble lbl_80131F90
/* 80131F3C 0012EE7C  FC 00 08 34 */ frsqrte f0, f1
/* 80131F40 0012EE80  C8 82 92 E8 */ lfd f4, lbl_80452CE8-_SDA2_BASE_(r2)
/* 80131F44 0012EE84  FC 44 00 32 */ fmul f2, f4, f0
/* 80131F48 0012EE88  C8 62 92 F0 */ lfd f3, lbl_80452CF0-_SDA2_BASE_(r2)
/* 80131F4C 0012EE8C  FC 00 00 32 */ fmul f0, f0, f0
/* 80131F50 0012EE90  FC 01 00 32 */ fmul f0, f1, f0
/* 80131F54 0012EE94  FC 03 00 28 */ fsub f0, f3, f0
/* 80131F58 0012EE98  FC 02 00 32 */ fmul f0, f2, f0
/* 80131F5C 0012EE9C  FC 44 00 32 */ fmul f2, f4, f0
/* 80131F60 0012EEA0  FC 00 00 32 */ fmul f0, f0, f0
/* 80131F64 0012EEA4  FC 01 00 32 */ fmul f0, f1, f0
/* 80131F68 0012EEA8  FC 03 00 28 */ fsub f0, f3, f0
/* 80131F6C 0012EEAC  FC 02 00 32 */ fmul f0, f2, f0
/* 80131F70 0012EEB0  FC 44 00 32 */ fmul f2, f4, f0
/* 80131F74 0012EEB4  FC 00 00 32 */ fmul f0, f0, f0
/* 80131F78 0012EEB8  FC 01 00 32 */ fmul f0, f1, f0
/* 80131F7C 0012EEBC  FC 03 00 28 */ fsub f0, f3, f0
/* 80131F80 0012EEC0  FC 02 00 32 */ fmul f0, f2, f0
/* 80131F84 0012EEC4  FF C1 00 32 */ fmul f30, f1, f0
/* 80131F88 0012EEC8  FF C0 F0 18 */ frsp f30, f30
/* 80131F8C 0012EECC  48 00 00 90 */ b lbl_8013201C
lbl_80131F90:
/* 80131F90 0012EED0  C8 02 92 F8 */ lfd f0, lbl_80452CF8-_SDA2_BASE_(r2)
/* 80131F94 0012EED4  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 80131F98 0012EED8  40 80 00 10 */ bge lbl_80131FA8
/* 80131F9C 0012EEDC  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 80131FA0 0012EEE0  C3 C3 0A E0 */ lfs f30, lbl_80450AE0@l(r3)
/* 80131FA4 0012EEE4  48 00 00 78 */ b lbl_8013201C
lbl_80131FA8:
/* 80131FA8 0012EEE8  D0 21 00 0C */ stfs f1, 0xc(r1)
/* 80131FAC 0012EEEC  80 81 00 0C */ lwz r4, 0xc(r1)
/* 80131FB0 0012EEF0  54 83 00 50 */ rlwinm r3, r4, 0, 1, 8
/* 80131FB4 0012EEF4  3C 00 7F 80 */ lis r0, 0x7f80
/* 80131FB8 0012EEF8  7C 03 00 00 */ cmpw r3, r0
/* 80131FBC 0012EEFC  41 82 00 14 */ beq lbl_80131FD0
/* 80131FC0 0012EF00  40 80 00 40 */ bge lbl_80132000
/* 80131FC4 0012EF04  2C 03 00 00 */ cmpwi r3, 0
/* 80131FC8 0012EF08  41 82 00 20 */ beq lbl_80131FE8
/* 80131FCC 0012EF0C  48 00 00 34 */ b lbl_80132000
lbl_80131FD0:
/* 80131FD0 0012EF10  54 80 02 7F */ clrlwi. r0, r4, 9
/* 80131FD4 0012EF14  41 82 00 0C */ beq lbl_80131FE0
/* 80131FD8 0012EF18  38 00 00 01 */ li r0, 1
/* 80131FDC 0012EF1C  48 00 00 28 */ b lbl_80132004
lbl_80131FE0:
/* 80131FE0 0012EF20  38 00 00 02 */ li r0, 2
/* 80131FE4 0012EF24  48 00 00 20 */ b lbl_80132004
lbl_80131FE8:
/* 80131FE8 0012EF28  54 80 02 7F */ clrlwi. r0, r4, 9
/* 80131FEC 0012EF2C  41 82 00 0C */ beq lbl_80131FF8
/* 80131FF0 0012EF30  38 00 00 05 */ li r0, 5
/* 80131FF4 0012EF34  48 00 00 10 */ b lbl_80132004
lbl_80131FF8:
/* 80131FF8 0012EF38  38 00 00 03 */ li r0, 3
/* 80131FFC 0012EF3C  48 00 00 08 */ b lbl_80132004
lbl_80132000:
/* 80132000 0012EF40  38 00 00 04 */ li r0, 4
lbl_80132004:
/* 80132004 0012EF44  2C 00 00 01 */ cmpwi r0, 1
/* 80132008 0012EF48  40 82 00 10 */ bne lbl_80132018
/* 8013200C 0012EF4C  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 80132010 0012EF50  C3 C3 0A E0 */ lfs f30, lbl_80450AE0@l(r3)
/* 80132014 0012EF54  48 00 00 08 */ b lbl_8013201C
lbl_80132018:
/* 80132018 0012EF58  FF C0 08 90 */ fmr f30, f1
lbl_8013201C:
/* 8013201C 0012EF5C  C0 5E 04 AC */ lfs f2, 0x4ac(r30)
/* 80132020 0012EF60  C0 1E 04 A4 */ lfs f0, 0x4a4(r30)
/* 80132024 0012EF64  D0 01 00 1C */ stfs f0, 0x1c(r1)
/* 80132028 0012EF68  C0 22 92 C0 */ lfs f1, lbl_80452CC0-_SDA2_BASE_(r2)
/* 8013202C 0012EF6C  D0 21 00 20 */ stfs f1, 0x20(r1)
/* 80132030 0012EF70  D0 41 00 24 */ stfs f2, 0x24(r1)
/* 80132034 0012EF74  C0 5A 04 D8 */ lfs f2, 0x4d8(r26)
/* 80132038 0012EF78  C0 1A 04 D0 */ lfs f0, 0x4d0(r26)
/* 8013203C 0012EF7C  D0 01 00 28 */ stfs f0, 0x28(r1)
/* 80132040 0012EF80  D0 21 00 2C */ stfs f1, 0x2c(r1)
/* 80132044 0012EF84  D0 41 00 30 */ stfs f2, 0x30(r1)
/* 80132048 0012EF88  38 61 00 1C */ addi r3, r1, 0x1c
/* 8013204C 0012EF8C  38 81 00 28 */ addi r4, r1, 0x28
/* 80132050 0012EF90  48 21 53 4D */ bl PSVECSquareDistance
/* 80132054 0012EF94  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 80132058 0012EF98  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 8013205C 0012EF9C  40 81 00 58 */ ble lbl_801320B4
/* 80132060 0012EFA0  FC 00 08 34 */ frsqrte f0, f1
/* 80132064 0012EFA4  C8 82 92 E8 */ lfd f4, lbl_80452CE8-_SDA2_BASE_(r2)
/* 80132068 0012EFA8  FC 44 00 32 */ fmul f2, f4, f0
/* 8013206C 0012EFAC  C8 62 92 F0 */ lfd f3, lbl_80452CF0-_SDA2_BASE_(r2)
/* 80132070 0012EFB0  FC 00 00 32 */ fmul f0, f0, f0
/* 80132074 0012EFB4  FC 01 00 32 */ fmul f0, f1, f0
/* 80132078 0012EFB8  FC 03 00 28 */ fsub f0, f3, f0
/* 8013207C 0012EFBC  FC 02 00 32 */ fmul f0, f2, f0
/* 80132080 0012EFC0  FC 44 00 32 */ fmul f2, f4, f0
/* 80132084 0012EFC4  FC 00 00 32 */ fmul f0, f0, f0
/* 80132088 0012EFC8  FC 01 00 32 */ fmul f0, f1, f0
/* 8013208C 0012EFCC  FC 03 00 28 */ fsub f0, f3, f0
/* 80132090 0012EFD0  FC 02 00 32 */ fmul f0, f2, f0
/* 80132094 0012EFD4  FC 44 00 32 */ fmul f2, f4, f0
/* 80132098 0012EFD8  FC 00 00 32 */ fmul f0, f0, f0
/* 8013209C 0012EFDC  FC 01 00 32 */ fmul f0, f1, f0
/* 801320A0 0012EFE0  FC 03 00 28 */ fsub f0, f3, f0
/* 801320A4 0012EFE4  FC 02 00 32 */ fmul f0, f2, f0
/* 801320A8 0012EFE8  FF A1 00 32 */ fmul f29, f1, f0
/* 801320AC 0012EFEC  FF A0 E8 18 */ frsp f29, f29
/* 801320B0 0012EFF0  48 00 00 90 */ b lbl_80132140
lbl_801320B4:
/* 801320B4 0012EFF4  C8 02 92 F8 */ lfd f0, lbl_80452CF8-_SDA2_BASE_(r2)
/* 801320B8 0012EFF8  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 801320BC 0012EFFC  40 80 00 10 */ bge lbl_801320CC
/* 801320C0 0012F000  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 801320C4 0012F004  C3 A3 0A E0 */ lfs f29, lbl_80450AE0@l(r3)
/* 801320C8 0012F008  48 00 00 78 */ b lbl_80132140
lbl_801320CC:
/* 801320CC 0012F00C  D0 21 00 08 */ stfs f1, 8(r1)
/* 801320D0 0012F010  80 81 00 08 */ lwz r4, 8(r1)
/* 801320D4 0012F014  54 83 00 50 */ rlwinm r3, r4, 0, 1, 8
/* 801320D8 0012F018  3C 00 7F 80 */ lis r0, 0x7f80
/* 801320DC 0012F01C  7C 03 00 00 */ cmpw r3, r0
/* 801320E0 0012F020  41 82 00 14 */ beq lbl_801320F4
/* 801320E4 0012F024  40 80 00 40 */ bge lbl_80132124
/* 801320E8 0012F028  2C 03 00 00 */ cmpwi r3, 0
/* 801320EC 0012F02C  41 82 00 20 */ beq lbl_8013210C
/* 801320F0 0012F030  48 00 00 34 */ b lbl_80132124
lbl_801320F4:
/* 801320F4 0012F034  54 80 02 7F */ clrlwi. r0, r4, 9
/* 801320F8 0012F038  41 82 00 0C */ beq lbl_80132104
/* 801320FC 0012F03C  38 00 00 01 */ li r0, 1
/* 80132100 0012F040  48 00 00 28 */ b lbl_80132128
lbl_80132104:
/* 80132104 0012F044  38 00 00 02 */ li r0, 2
/* 80132108 0012F048  48 00 00 20 */ b lbl_80132128
lbl_8013210C:
/* 8013210C 0012F04C  54 80 02 7F */ clrlwi. r0, r4, 9
/* 80132110 0012F050  41 82 00 0C */ beq lbl_8013211C
/* 80132114 0012F054  38 00 00 05 */ li r0, 5
/* 80132118 0012F058  48 00 00 10 */ b lbl_80132128
lbl_8013211C:
/* 8013211C 0012F05C  38 00 00 03 */ li r0, 3
/* 80132120 0012F060  48 00 00 08 */ b lbl_80132128
lbl_80132124:
/* 80132124 0012F064  38 00 00 04 */ li r0, 4
lbl_80132128:
/* 80132128 0012F068  2C 00 00 01 */ cmpwi r0, 1
/* 8013212C 0012F06C  40 82 00 10 */ bne lbl_8013213C
/* 80132130 0012F070  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 80132134 0012F074  C3 A3 0A E0 */ lfs f29, lbl_80450AE0@l(r3)
/* 80132138 0012F078  48 00 00 08 */ b lbl_80132140
lbl_8013213C:
/* 8013213C 0012F07C  FF A0 08 90 */ fmr f29, f1
lbl_80132140:
/* 80132140 0012F080  C0 22 92 C0 */ lfs f1, lbl_80452CC0-_SDA2_BASE_(r2)
/* 80132144 0012F084  FC 1F 08 40 */ fcmpo cr0, f31, f1
/* 80132148 0012F088  40 81 01 30 */ ble lbl_80132278
/* 8013214C 0012F08C  C0 02 92 B8 */ lfs f0, lbl_80452CB8-_SDA2_BASE_(r2)
/* 80132150 0012F090  FC 1F 00 40 */ fcmpo cr0, f31, f0
/* 80132154 0012F094  40 80 01 24 */ bge lbl_80132278
/* 80132158 0012F098  C0 02 93 50 */ lfs f0, lbl_80452D50-_SDA2_BASE_(r2)
/* 8013215C 0012F09C  FC 1E 00 40 */ fcmpo cr0, f30, f0
/* 80132160 0012F0A0  40 81 01 18 */ ble lbl_80132278
/* 80132164 0012F0A4  FC 1D 00 40 */ fcmpo cr0, f29, f0
/* 80132168 0012F0A8  40 81 01 10 */ ble lbl_80132278
/* 8013216C 0012F0AC  C0 5A 08 1C */ lfs f2, 0x81c(r26)
/* 80132170 0012F0B0  C0 1A 08 14 */ lfs f0, 0x814(r26)
/* 80132174 0012F0B4  D0 01 00 7C */ stfs f0, 0x7c(r1)
/* 80132178 0012F0B8  D0 21 00 80 */ stfs f1, 0x80(r1)
/* 8013217C 0012F0BC  D0 41 00 84 */ stfs f2, 0x84(r1)
/* 80132180 0012F0C0  38 61 00 7C */ addi r3, r1, 0x7c
/* 80132184 0012F0C4  48 21 4F B5 */ bl PSVECSquareMag
/* 80132188 0012F0C8  C0 02 93 50 */ lfs f0, lbl_80452D50-_SDA2_BASE_(r2)
/* 8013218C 0012F0CC  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 80132190 0012F0D0  40 81 00 44 */ ble lbl_801321D4
/* 80132194 0012F0D4  38 7A 08 14 */ addi r3, r26, 0x814
/* 80132198 0012F0D8  48 13 17 C5 */ bl ClrCcMove__9cCcD_SttsFv
/* 8013219C 0012F0DC  38 7A 08 14 */ addi r3, r26, 0x814
/* 801321A0 0012F0E0  48 13 4F 89 */ bl atan2sX_Z__4cXyzCFv
/* 801321A4 0012F0E4  7C 63 07 34 */ extsh r3, r3
/* 801321A8 0012F0E8  A8 1A 04 E6 */ lha r0, 0x4e6(r26)
/* 801321AC 0012F0EC  7C 00 18 51 */ subf. r0, r0, r3
/* 801321B0 0012F0F0  40 81 00 14 */ ble lbl_801321C4
/* 801321B4 0012F0F4  7F 43 D3 78 */ mr r3, r26
/* 801321B8 0012F0F8  38 80 00 02 */ li r4, 2
/* 801321BC 0012F0FC  48 00 05 7D */ bl daAlink_c_NS_procWolfRopeHangInit
/* 801321C0 0012F100  48 00 05 38 */ b lbl_801326F8
lbl_801321C4:
/* 801321C4 0012F104  7F 43 D3 78 */ mr r3, r26
/* 801321C8 0012F108  38 80 00 03 */ li r4, 3
/* 801321CC 0012F10C  48 00 05 6D */ bl daAlink_c_NS_procWolfRopeHangInit
/* 801321D0 0012F110  48 00 05 28 */ b lbl_801326F8
lbl_801321D4:
/* 801321D4 0012F114  C0 3A 35 C0 */ lfs f1, 0x35c0(r26)
/* 801321D8 0012F118  C0 1A 35 B8 */ lfs f0, 0x35b8(r26)
/* 801321DC 0012F11C  D0 01 00 10 */ stfs f0, 0x10(r1)
/* 801321E0 0012F120  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 801321E4 0012F124  D0 01 00 14 */ stfs f0, 0x14(r1)
/* 801321E8 0012F128  D0 21 00 18 */ stfs f1, 0x18(r1)
/* 801321EC 0012F12C  38 61 00 10 */ addi r3, r1, 0x10
/* 801321F0 0012F130  48 21 4F 49 */ bl PSVECSquareMag
/* 801321F4 0012F134  C0 02 92 B8 */ lfs f0, lbl_80452CB8-_SDA2_BASE_(r2)
/* 801321F8 0012F138  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 801321FC 0012F13C  40 81 00 3C */ ble lbl_80132238
/* 80132200 0012F140  38 7A 35 B8 */ addi r3, r26, 0x35b8
/* 80132204 0012F144  48 13 4F 25 */ bl atan2sX_Z__4cXyzCFv
/* 80132208 0012F148  7C 63 07 34 */ extsh r3, r3
/* 8013220C 0012F14C  A8 1A 04 E6 */ lha r0, 0x4e6(r26)
/* 80132210 0012F150  7C 00 18 51 */ subf. r0, r0, r3
/* 80132214 0012F154  40 81 00 14 */ ble lbl_80132228
/* 80132218 0012F158  7F 43 D3 78 */ mr r3, r26
/* 8013221C 0012F15C  38 80 00 02 */ li r4, 2
/* 80132220 0012F160  48 00 05 19 */ bl daAlink_c_NS_procWolfRopeHangInit
/* 80132224 0012F164  48 00 04 D4 */ b lbl_801326F8
lbl_80132228:
/* 80132228 0012F168  7F 43 D3 78 */ mr r3, r26
/* 8013222C 0012F16C  38 80 00 03 */ li r4, 3
/* 80132230 0012F170  48 00 05 09 */ bl daAlink_c_NS_procWolfRopeHangInit
/* 80132234 0012F174  48 00 04 C4 */ b lbl_801326F8
lbl_80132238:
/* 80132238 0012F178  C0 3A 33 AC */ lfs f1, 0x33ac(r26)
/* 8013223C 0012F17C  C0 02 92 98 */ lfs f0, lbl_80452C98-_SDA2_BASE_(r2)
/* 80132240 0012F180  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 80132244 0012F184  40 81 00 34 */ ble lbl_80132278
/* 80132248 0012F188  2C 1F 00 02 */ cmpwi r31, 2
/* 8013224C 0012F18C  40 82 00 14 */ bne lbl_80132260
/* 80132250 0012F190  7F 43 D3 78 */ mr r3, r26
/* 80132254 0012F194  38 80 00 02 */ li r4, 2
/* 80132258 0012F198  48 00 0D FD */ bl daAlink_c_NS_procWolfRopeStaggerInit
/* 8013225C 0012F19C  48 00 04 9C */ b lbl_801326F8
lbl_80132260:
/* 80132260 0012F1A0  2C 1F 00 03 */ cmpwi r31, 3
/* 80132264 0012F1A4  40 82 00 14 */ bne lbl_80132278
/* 80132268 0012F1A8  7F 43 D3 78 */ mr r3, r26
/* 8013226C 0012F1AC  38 80 00 03 */ li r4, 3
/* 80132270 0012F1B0  48 00 0D E5 */ bl daAlink_c_NS_procWolfRopeStaggerInit
/* 80132274 0012F1B4  48 00 04 84 */ b lbl_801326F8
lbl_80132278:
/* 80132278 0012F1B8  38 7A 08 14 */ addi r3, r26, 0x814
/* 8013227C 0012F1BC  48 13 16 E1 */ bl ClrCcMove__9cCcD_SttsFv
/* 80132280 0012F1C0  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 80132284 0012F1C4  FC 1F 00 40 */ fcmpo cr0, f31, f0
/* 80132288 0012F1C8  40 81 00 80 */ ble lbl_80132308
/* 8013228C 0012F1CC  C0 02 92 B8 */ lfs f0, lbl_80452CB8-_SDA2_BASE_(r2)
/* 80132290 0012F1D0  FC 1F 00 40 */ fcmpo cr0, f31, f0
/* 80132294 0012F1D4  40 80 00 74 */ bge lbl_80132308
/* 80132298 0012F1D8  C0 02 97 80 */ lfs f0, lbl_80453180-_SDA2_BASE_(r2)
/* 8013229C 0012F1DC  FC 1E 00 40 */ fcmpo cr0, f30, f0
/* 801322A0 0012F1E0  40 81 00 68 */ ble lbl_80132308
/* 801322A4 0012F1E4  FC 1D 00 40 */ fcmpo cr0, f29, f0
/* 801322A8 0012F1E8  40 81 00 60 */ ble lbl_80132308
/* 801322AC 0012F1EC  C0 3A 33 AC */ lfs f1, 0x33ac(r26)
/* 801322B0 0012F1F0  C0 02 92 A4 */ lfs f0, lbl_80452CA4-_SDA2_BASE_(r2)
/* 801322B4 0012F1F4  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 801322B8 0012F1F8  41 81 00 44 */ bgt lbl_801322FC
/* 801322BC 0012F1FC  2C 1B 00 00 */ cmpwi r27, 0
/* 801322C0 0012F200  41 82 00 3C */ beq lbl_801322FC
/* 801322C4 0012F204  7F 43 D3 78 */ mr r3, r26
/* 801322C8 0012F208  4B F8 24 ED */ bl daAlink_c_NS_checkServiceWaitMode
/* 801322CC 0012F20C  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 801322D0 0012F210  41 82 00 2C */ beq lbl_801322FC
/* 801322D4 0012F214  A8 7A 30 CA */ lha r3, 0x30ca(r26)
/* 801322D8 0012F218  2C 03 00 00 */ cmpwi r3, 0
/* 801322DC 0012F21C  41 82 00 10 */ beq lbl_801322EC
/* 801322E0 0012F220  38 03 FF FF */ addi r0, r3, -1
/* 801322E4 0012F224  B0 1A 30 CA */ sth r0, 0x30ca(r26)
/* 801322E8 0012F228  48 00 00 28 */ b lbl_80132310
lbl_801322EC:
/* 801322EC 0012F22C  7F 43 D3 78 */ mr r3, r26
/* 801322F0 0012F230  38 80 00 04 */ li r4, 4
/* 801322F4 0012F234  48 00 0D 61 */ bl daAlink_c_NS_procWolfRopeStaggerInit
/* 801322F8 0012F238  48 00 04 00 */ b lbl_801326F8
lbl_801322FC:
/* 801322FC 0012F23C  7F 43 D3 78 */ mr r3, r26
/* 80132300 0012F240  4B F8 15 45 */ bl daAlink_c_NS_initServiceWaitTime
/* 80132304 0012F244  48 00 00 0C */ b lbl_80132310
lbl_80132308:
/* 80132308 0012F248  7F 43 D3 78 */ mr r3, r26
/* 8013230C 0012F24C  4B F8 15 39 */ bl daAlink_c_NS_initServiceWaitTime
lbl_80132310:
/* 80132310 0012F250  2C 1B 00 01 */ cmpwi r27, 1
/* 80132314 0012F254  41 82 00 2C */ beq lbl_80132340
/* 80132318 0012F258  7F A3 EB 78 */ mr r3, r29
/* 8013231C 0012F25C  C0 22 92 C0 */ lfs f1, lbl_80452CC0-_SDA2_BASE_(r2)
/* 80132320 0012F260  48 1F 61 0D */ bl J3DFrameCtrl_NS_checkPass
/* 80132324 0012F264  2C 03 00 00 */ cmpwi r3, 0
/* 80132328 0012F268  40 82 00 18 */ bne lbl_80132340
/* 8013232C 0012F26C  7F A3 EB 78 */ mr r3, r29
/* 80132330 0012F270  C0 22 94 64 */ lfs f1, lbl_80452E64-_SDA2_BASE_(r2)
/* 80132334 0012F274  48 1F 60 F9 */ bl J3DFrameCtrl_NS_checkPass
/* 80132338 0012F278  2C 03 00 00 */ cmpwi r3, 0
/* 8013233C 0012F27C  41 82 01 10 */ beq lbl_8013244C
lbl_80132340:
/* 80132340 0012F280  C0 3A 33 AC */ lfs f1, 0x33ac(r26)
/* 80132344 0012F284  C0 02 92 A4 */ lfs f0, lbl_80452CA4-_SDA2_BASE_(r2)
/* 80132348 0012F288  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 8013234C 0012F28C  40 81 00 BC */ ble lbl_80132408
/* 80132350 0012F290  2C 1F 00 03 */ cmpwi r31, 3
/* 80132354 0012F294  41 82 00 B4 */ beq lbl_80132408
/* 80132358 0012F298  2C 1F 00 02 */ cmpwi r31, 2
/* 8013235C 0012F29C  41 82 00 AC */ beq lbl_80132408
/* 80132360 0012F2A0  2C 1B 00 00 */ cmpwi r27, 0
/* 80132364 0012F2A4  41 82 00 60 */ beq lbl_801323C4
/* 80132368 0012F2A8  C0 02 92 98 */ lfs f0, lbl_80452C98-_SDA2_BASE_(r2)
/* 8013236C 0012F2AC  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 80132370 0012F2B0  40 81 00 54 */ ble lbl_801323C4
/* 80132374 0012F2B4  A8 7A 2F E2 */ lha r3, 0x2fe2(r26)
/* 80132378 0012F2B8  A8 9A 04 E6 */ lha r4, 0x4e6(r26)
/* 8013237C 0012F2BC  48 13 EA A9 */ bl cLib_distanceAngleS__Fss
/* 80132380 0012F2C0  2C 03 70 00 */ cmpwi r3, 0x7000
/* 80132384 0012F2C4  40 81 00 40 */ ble lbl_801323C4
/* 80132388 0012F2C8  A8 7A 04 E6 */ lha r3, 0x4e6(r26)
/* 8013238C 0012F2CC  A8 1C 04 E6 */ lha r0, 0x4e6(r28)
/* 80132390 0012F2D0  7C 03 00 00 */ cmpw r3, r0
/* 80132394 0012F2D4  40 82 00 10 */ bne lbl_801323A4
/* 80132398 0012F2D8  C0 02 93 10 */ lfs f0, lbl_80452D10-_SDA2_BASE_(r2)
/* 8013239C 0012F2DC  FC 1E 00 40 */ fcmpo cr0, f30, f0
/* 801323A0 0012F2E0  41 81 00 18 */ bgt lbl_801323B8
lbl_801323A4:
/* 801323A4 0012F2E4  7C 03 00 00 */ cmpw r3, r0
/* 801323A8 0012F2E8  41 82 00 1C */ beq lbl_801323C4
/* 801323AC 0012F2EC  C0 02 93 10 */ lfs f0, lbl_80452D10-_SDA2_BASE_(r2)
/* 801323B0 0012F2F0  FC 1D 00 40 */ fcmpo cr0, f29, f0
/* 801323B4 0012F2F4  40 81 00 10 */ ble lbl_801323C4
lbl_801323B8:
/* 801323B8 0012F2F8  7F 43 D3 78 */ mr r3, r26
/* 801323BC 0012F2FC  48 00 09 AD */ bl daAlink_c_NS_procWolfRopeTurnInit
/* 801323C0 0012F300  48 00 03 38 */ b lbl_801326F8
lbl_801323C4:
/* 801323C4 0012F304  2C 1F 00 01 */ cmpwi r31, 1
/* 801323C8 0012F308  41 82 00 14 */ beq lbl_801323DC
/* 801323CC 0012F30C  D3 9D 00 0C */ stfs f28, 0xc(r29)
/* 801323D0 0012F310  38 00 00 00 */ li r0, 0
/* 801323D4 0012F314  B0 1D 00 0A */ sth r0, 0xa(r29)
/* 801323D8 0012F318  48 00 00 10 */ b lbl_801323E8
lbl_801323DC:
/* 801323DC 0012F31C  D3 7D 00 0C */ stfs f27, 0xc(r29)
/* 801323E0 0012F320  A8 1D 00 08 */ lha r0, 8(r29)
/* 801323E4 0012F324  B0 1D 00 0A */ sth r0, 0xa(r29)
lbl_801323E8:
/* 801323E8 0012F328  7F 43 D3 78 */ mr r3, r26
/* 801323EC 0012F32C  4B F8 CF 91 */ bl daAlink_c_NS_initBasAnime
/* 801323F0 0012F330  7F 43 D3 78 */ mr r3, r26
/* 801323F4 0012F334  C0 22 93 30 */ lfs f1, lbl_80452D30-_SDA2_BASE_(r2)
/* 801323F8 0012F338  4B FF F6 75 */ bl daAlink_c_NS_wolfRopeSwingInc
/* 801323FC 0012F33C  38 00 00 00 */ li r0, 0
/* 80132400 0012F340  B0 1A 30 08 */ sth r0, 0x3008(r26)
/* 80132404 0012F344  48 00 00 48 */ b lbl_8013244C
lbl_80132408:
/* 80132408 0012F348  2C 1B 00 00 */ cmpwi r27, 0
/* 8013240C 0012F34C  40 82 00 28 */ bne lbl_80132434
/* 80132410 0012F350  7F 43 D3 78 */ mr r3, r26
/* 80132414 0012F354  C0 22 97 70 */ lfs f1, lbl_80453170-_SDA2_BASE_(r2)
/* 80132418 0012F358  4B FC 6A F1 */ bl daAlink_c_NS_stopHalfMoveAnime
/* 8013241C 0012F35C  7F 43 D3 78 */ mr r3, r26
/* 80132420 0012F360  C0 22 93 30 */ lfs f1, lbl_80452D30-_SDA2_BASE_(r2)
/* 80132424 0012F364  4B FF F6 49 */ bl daAlink_c_NS_wolfRopeSwingInc
/* 80132428 0012F368  38 00 00 00 */ li r0, 0
/* 8013242C 0012F36C  B0 1A 30 08 */ sth r0, 0x3008(r26)
/* 80132430 0012F370  48 00 00 1C */ b lbl_8013244C
lbl_80132434:
/* 80132434 0012F374  7F 43 D3 78 */ mr r3, r26
/* 80132438 0012F378  4B F9 C1 F1 */ bl daAlink_c_NS_checkSubjectAction
/* 8013243C 0012F37C  2C 03 00 00 */ cmpwi r3, 0
/* 80132440 0012F380  41 82 00 0C */ beq lbl_8013244C
/* 80132444 0012F384  38 60 00 01 */ li r3, 1
/* 80132448 0012F388  48 00 02 B0 */ b lbl_801326F8
lbl_8013244C:
/* 8013244C 0012F38C  7F 43 D3 78 */ mr r3, r26
/* 80132450 0012F390  4B FF F2 55 */ bl daAlink_c_NS_getWolfRopeMoveSpeed
/* 80132454 0012F394  D0 3A 33 98 */ stfs f1, 0x3398(r26)
/* 80132458 0012F398  C0 3A 33 98 */ lfs f1, 0x3398(r26)
/* 8013245C 0012F39C  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 80132460 0012F3A0  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 80132464 0012F3A4  40 80 00 90 */ bge lbl_801324F4
/* 80132468 0012F3A8  C0 02 92 BC */ lfs f0, lbl_80452CBC-_SDA2_BASE_(r2)
/* 8013246C 0012F3AC  EC 01 00 32 */ fmuls f0, f1, f0
/* 80132470 0012F3B0  D0 1A 33 98 */ stfs f0, 0x3398(r26)
/* 80132474 0012F3B4  A8 7A 04 E6 */ lha r3, 0x4e6(r26)
/* 80132478 0012F3B8  3C 63 00 01 */ addis r3, r3, 1
/* 8013247C 0012F3BC  38 03 80 00 */ addi r0, r3, -32768
/* 80132480 0012F3C0  B0 1A 04 DE */ sth r0, 0x4de(r26)
/* 80132484 0012F3C4  C0 3A 33 AC */ lfs f1, 0x33ac(r26)
/* 80132488 0012F3C8  C0 02 92 A4 */ lfs f0, lbl_80452CA4-_SDA2_BASE_(r2)
/* 8013248C 0012F3CC  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 80132490 0012F3D0  40 81 00 58 */ ble lbl_801324E8
/* 80132494 0012F3D4  83 7A 27 E0 */ lwz r27, 0x27e0(r26)
/* 80132498 0012F3D8  3B C0 00 01 */ li r30, 1
/* 8013249C 0012F3DC  7F 63 DB 78 */ mr r3, r27
/* 801324A0 0012F3E0  4B F4 13 45 */ bl dAttention_c_NS_LockonTruth
/* 801324A4 0012F3E4  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 801324A8 0012F3E8  40 82 00 14 */ bne lbl_801324BC
/* 801324AC 0012F3EC  80 1B 03 34 */ lwz r0, 0x334(r27)
/* 801324B0 0012F3F0  54 00 00 85 */ rlwinm. r0, r0, 0, 2, 2
/* 801324B4 0012F3F4  40 82 00 08 */ bne lbl_801324BC
/* 801324B8 0012F3F8  3B C0 00 00 */ li r30, 0
lbl_801324BC:
/* 801324BC 0012F3FC  57 C0 06 3F */ clrlwi. r0, r30, 0x18
/* 801324C0 0012F400  40 82 00 28 */ bne lbl_801324E8
/* 801324C4 0012F404  A8 7A 30 0E */ lha r3, 0x300e(r26)
/* 801324C8 0012F408  38 03 00 01 */ addi r0, r3, 1
/* 801324CC 0012F40C  B0 1A 30 0E */ sth r0, 0x300e(r26)
/* 801324D0 0012F410  A8 1A 30 0E */ lha r0, 0x300e(r26)
/* 801324D4 0012F414  2C 00 00 3C */ cmpwi r0, 0x3c
/* 801324D8 0012F418  40 82 00 2C */ bne lbl_80132504
/* 801324DC 0012F41C  7F 43 D3 78 */ mr r3, r26
/* 801324E0 0012F420  48 00 08 89 */ bl daAlink_c_NS_procWolfRopeTurnInit
/* 801324E4 0012F424  48 00 02 14 */ b lbl_801326F8
lbl_801324E8:
/* 801324E8 0012F428  38 00 00 00 */ li r0, 0
/* 801324EC 0012F42C  B0 1A 30 0E */ sth r0, 0x300e(r26)
/* 801324F0 0012F430  48 00 00 14 */ b lbl_80132504
lbl_801324F4:
/* 801324F4 0012F434  A8 1A 04 E6 */ lha r0, 0x4e6(r26)
/* 801324F8 0012F438  B0 1A 04 DE */ sth r0, 0x4de(r26)
/* 801324FC 0012F43C  38 00 00 00 */ li r0, 0
/* 80132500 0012F440  B0 1A 30 0E */ sth r0, 0x300e(r26)
lbl_80132504:
/* 80132504 0012F444  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 80132508 0012F448  FC 1F 00 40 */ fcmpo cr0, f31, f0
/* 8013250C 0012F44C  40 80 00 10 */ bge lbl_8013251C
/* 80132510 0012F450  C0 02 95 30 */ lfs f0, lbl_80452F30-_SDA2_BASE_(r2)
/* 80132514 0012F454  FC 1E 00 40 */ fcmpo cr0, f30, f0
/* 80132518 0012F458  41 81 00 1C */ bgt lbl_80132534
lbl_8013251C:
/* 8013251C 0012F45C  C0 02 92 B8 */ lfs f0, lbl_80452CB8-_SDA2_BASE_(r2)
/* 80132520 0012F460  FC 1F 00 40 */ fcmpo cr0, f31, f0
/* 80132524 0012F464  40 81 00 90 */ ble lbl_801325B4
/* 80132528 0012F468  C0 02 95 30 */ lfs f0, lbl_80452F30-_SDA2_BASE_(r2)
/* 8013252C 0012F46C  FC 1D 00 40 */ fcmpo cr0, f29, f0
/* 80132530 0012F470  40 81 00 84 */ ble lbl_801325B4
lbl_80132534:
/* 80132534 0012F474  38 00 FF FF */ li r0, -1
/* 80132538 0012F478  90 1C 07 18 */ stw r0, 0x718(r28)
/* 8013253C 0012F47C  90 1C 07 1C */ stw r0, 0x71c(r28)
/* 80132540 0012F480  A8 7A 04 DE */ lha r3, 0x4de(r26)
/* 80132544 0012F484  A8 1A 04 E6 */ lha r0, 0x4e6(r26)
/* 80132548 0012F488  7C 03 00 00 */ cmpw r3, r0
/* 8013254C 0012F48C  41 82 00 0C */ beq lbl_80132558
/* 80132550 0012F490  C0 42 93 B0 */ lfs f2, lbl_80452DB0-_SDA2_BASE_(r2)
/* 80132554 0012F494  48 00 00 08 */ b lbl_8013255C
lbl_80132558:
/* 80132558 0012F498  C0 42 93 D4 */ lfs f2, lbl_80452DD4-_SDA2_BASE_(r2)
lbl_8013255C:
/* 8013255C 0012F49C  54 60 04 38 */ rlwinm r0, r3, 0, 0x10, 0x1c
/* 80132560 0012F4A0  3C 60 80 44 */ lis r3, lbl_80439A20@ha
/* 80132564 0012F4A4  38 63 9A 20 */ addi r3, r3, lbl_80439A20@l
/* 80132568 0012F4A8  7C 03 04 2E */ lfsx f0, r3, r0
/* 8013256C 0012F4AC  C0 3A 04 D0 */ lfs f1, 0x4d0(r26)
/* 80132570 0012F4B0  EC 02 00 32 */ fmuls f0, f2, f0
/* 80132574 0012F4B4  EC 01 00 2A */ fadds f0, f1, f0
/* 80132578 0012F4B8  D0 1A 04 D0 */ stfs f0, 0x4d0(r26)
/* 8013257C 0012F4BC  A8 1A 04 DE */ lha r0, 0x4de(r26)
/* 80132580 0012F4C0  54 00 04 38 */ rlwinm r0, r0, 0, 0x10, 0x1c
/* 80132584 0012F4C4  7C 63 02 14 */ add r3, r3, r0
/* 80132588 0012F4C8  C0 03 00 04 */ lfs f0, 4(r3)
/* 8013258C 0012F4CC  C0 3A 04 D8 */ lfs f1, 0x4d8(r26)
/* 80132590 0012F4D0  EC 02 00 32 */ fmuls f0, f2, f0
/* 80132594 0012F4D4  EC 01 00 2A */ fadds f0, f1, f0
/* 80132598 0012F4D8  D0 1A 04 D8 */ stfs f0, 0x4d8(r26)
/* 8013259C 0012F4DC  A8 1A 04 E6 */ lha r0, 0x4e6(r26)
/* 801325A0 0012F4E0  B0 1A 04 DE */ sth r0, 0x4de(r26)
/* 801325A4 0012F4E4  7F 43 D3 78 */ mr r3, r26
/* 801325A8 0012F4E8  38 80 00 00 */ li r4, 0
/* 801325AC 0012F4EC  4B FF 75 99 */ bl daAlink_c_NS_checkNextActionWolf
/* 801325B0 0012F4F0  48 00 01 48 */ b lbl_801326F8
lbl_801325B4:
/* 801325B4 0012F4F4  7F 43 D3 78 */ mr r3, r26
/* 801325B8 0012F4F8  4B FF F1 61 */ bl daAlink_c_NS_setWolfRopePosY
/* 801325BC 0012F4FC  7C 64 1B 78 */ mr r4, r3
/* 801325C0 0012F500  7F 43 D3 78 */ mr r3, r26
/* 801325C4 0012F504  4B FF F5 39 */ bl daAlink_c_NS_setWolfRopeOffsetY
/* 801325C8 0012F508  C0 5D 00 10 */ lfs f2, 0x10(r29)
/* 801325CC 0012F50C  C0 02 92 B8 */ lfs f0, lbl_80452CB8-_SDA2_BASE_(r2)
/* 801325D0 0012F510  FC 02 00 40 */ fcmpo cr0, f2, f0
/* 801325D4 0012F514  41 80 00 4C */ blt lbl_80132620
/* 801325D8 0012F518  C0 02 97 84 */ lfs f0, lbl_80453184-_SDA2_BASE_(r2)
/* 801325DC 0012F51C  FC 02 00 40 */ fcmpo cr0, f2, f0
/* 801325E0 0012F520  40 81 00 10 */ ble lbl_801325F0
/* 801325E4 0012F524  C0 02 97 88 */ lfs f0, lbl_80453188-_SDA2_BASE_(r2)
/* 801325E8 0012F528  FC 02 00 40 */ fcmpo cr0, f2, f0
/* 801325EC 0012F52C  41 80 00 34 */ blt lbl_80132620
lbl_801325F0:
/* 801325F0 0012F530  A8 1D 00 08 */ lha r0, 8(r29)
/* 801325F4 0012F534  C8 22 92 B0 */ lfd f1, lbl_80452CB0-_SDA2_BASE_(r2)
/* 801325F8 0012F538  6C 00 80 00 */ xoris r0, r0, 0x8000
/* 801325FC 0012F53C  90 01 00 8C */ stw r0, 0x8c(r1)
/* 80132600 0012F540  3C 00 43 30 */ lis r0, 0x4330
/* 80132604 0012F544  90 01 00 88 */ stw r0, 0x88(r1)
/* 80132608 0012F548  C8 01 00 88 */ lfd f0, 0x88(r1)
/* 8013260C 0012F54C  EC 20 08 28 */ fsubs f1, f0, f1
/* 80132610 0012F550  C0 02 92 B8 */ lfs f0, lbl_80452CB8-_SDA2_BASE_(r2)
/* 80132614 0012F554  EC 01 00 28 */ fsubs f0, f1, f0
/* 80132618 0012F558  FC 02 00 40 */ fcmpo cr0, f2, f0
/* 8013261C 0012F55C  40 81 00 A8 */ ble lbl_801326C4
lbl_80132620:
/* 80132620 0012F560  C0 5A 05 D0 */ lfs f2, 0x5d0(r26)
/* 80132624 0012F564  C0 1A 05 C8 */ lfs f0, 0x5c8(r26)
/* 80132628 0012F568  D0 01 00 64 */ stfs f0, 0x64(r1)
/* 8013262C 0012F56C  C0 22 92 C0 */ lfs f1, lbl_80452CC0-_SDA2_BASE_(r2)
/* 80132630 0012F570  D0 21 00 68 */ stfs f1, 0x68(r1)
/* 80132634 0012F574  D0 41 00 6C */ stfs f2, 0x6c(r1)
/* 80132638 0012F578  C0 5A 04 D8 */ lfs f2, 0x4d8(r26)
/* 8013263C 0012F57C  C0 1A 04 D0 */ lfs f0, 0x4d0(r26)
/* 80132640 0012F580  D0 01 00 70 */ stfs f0, 0x70(r1)
/* 80132644 0012F584  D0 21 00 74 */ stfs f1, 0x74(r1)
/* 80132648 0012F588  D0 41 00 78 */ stfs f2, 0x78(r1)
/* 8013264C 0012F58C  38 61 00 64 */ addi r3, r1, 0x64
/* 80132650 0012F590  38 81 00 70 */ addi r4, r1, 0x70
/* 80132654 0012F594  48 21 4D 49 */ bl PSVECSquareDistance
/* 80132658 0012F598  FF 60 08 90 */ fmr f27, f1
/* 8013265C 0012F59C  C0 5A 05 DC */ lfs f2, 0x5dc(r26)
/* 80132660 0012F5A0  C0 1A 05 D4 */ lfs f0, 0x5d4(r26)
/* 80132664 0012F5A4  D0 01 00 4C */ stfs f0, 0x4c(r1)
/* 80132668 0012F5A8  C0 22 92 C0 */ lfs f1, lbl_80452CC0-_SDA2_BASE_(r2)
/* 8013266C 0012F5AC  D0 21 00 50 */ stfs f1, 0x50(r1)
/* 80132670 0012F5B0  D0 41 00 54 */ stfs f2, 0x54(r1)
/* 80132674 0012F5B4  C0 5A 04 D8 */ lfs f2, 0x4d8(r26)
/* 80132678 0012F5B8  C0 1A 04 D0 */ lfs f0, 0x4d0(r26)
/* 8013267C 0012F5BC  D0 01 00 58 */ stfs f0, 0x58(r1)
/* 80132680 0012F5C0  D0 21 00 5C */ stfs f1, 0x5c(r1)
/* 80132684 0012F5C4  D0 41 00 60 */ stfs f2, 0x60(r1)
/* 80132688 0012F5C8  38 61 00 4C */ addi r3, r1, 0x4c
/* 8013268C 0012F5CC  38 81 00 58 */ addi r4, r1, 0x58
/* 80132690 0012F5D0  48 21 4D 0D */ bl PSVECSquareDistance
/* 80132694 0012F5D4  FC 1B 08 40 */ fcmpo cr0, f27, f1
/* 80132698 0012F5D8  40 81 00 18 */ ble lbl_801326B0
/* 8013269C 0012F5DC  38 00 00 13 */ li r0, 0x13
/* 801326A0 0012F5E0  90 1C 07 18 */ stw r0, 0x718(r28)
/* 801326A4 0012F5E4  38 00 00 1F */ li r0, 0x1f
/* 801326A8 0012F5E8  90 1C 07 1C */ stw r0, 0x71c(r28)
/* 801326AC 0012F5EC  48 00 00 48 */ b lbl_801326F4
lbl_801326B0:
/* 801326B0 0012F5F0  38 00 00 18 */ li r0, 0x18
/* 801326B4 0012F5F4  90 1C 07 18 */ stw r0, 0x718(r28)
/* 801326B8 0012F5F8  38 00 00 24 */ li r0, 0x24
/* 801326BC 0012F5FC  90 1C 07 1C */ stw r0, 0x71c(r28)
/* 801326C0 0012F600  48 00 00 34 */ b lbl_801326F4
lbl_801326C4:
/* 801326C4 0012F604  C0 02 97 70 */ lfs f0, lbl_80453170-_SDA2_BASE_(r2)
/* 801326C8 0012F608  FC 02 00 40 */ fcmpo cr0, f2, f0
/* 801326CC 0012F60C  40 80 00 18 */ bge lbl_801326E4
/* 801326D0 0012F610  38 00 00 13 */ li r0, 0x13
/* 801326D4 0012F614  90 1C 07 18 */ stw r0, 0x718(r28)
/* 801326D8 0012F618  38 00 00 24 */ li r0, 0x24
/* 801326DC 0012F61C  90 1C 07 1C */ stw r0, 0x71c(r28)
/* 801326E0 0012F620  48 00 00 14 */ b lbl_801326F4
lbl_801326E4:
/* 801326E4 0012F624  38 00 00 18 */ li r0, 0x18
/* 801326E8 0012F628  90 1C 07 18 */ stw r0, 0x718(r28)
/* 801326EC 0012F62C  38 00 00 1F */ li r0, 0x1f
/* 801326F0 0012F630  90 1C 07 1C */ stw r0, 0x71c(r28)
lbl_801326F4:
/* 801326F4 0012F634  38 60 00 01 */ li r3, 1
lbl_801326F8:
/* 801326F8 0012F638  E3 E1 00 F8 */ psq_l f31, 248(r1), 0, 0
/* 801326FC 0012F63C  CB E1 00 F0 */ lfd f31, 0xf0(r1)
/* 80132700 0012F640  E3 C1 00 E8 */ psq_l f30, 232(r1), 0, 0
/* 80132704 0012F644  CB C1 00 E0 */ lfd f30, 0xe0(r1)
/* 80132708 0012F648  E3 A1 00 D8 */ psq_l f29, 216(r1), 0, 0
/* 8013270C 0012F64C  CB A1 00 D0 */ lfd f29, 0xd0(r1)
/* 80132710 0012F650  E3 81 00 C8 */ psq_l f28, 200(r1), 0, 0
/* 80132714 0012F654  CB 81 00 C0 */ lfd f28, 0xc0(r1)
/* 80132718 0012F658  E3 61 00 B8 */ psq_l f27, 184(r1), 0, 0
/* 8013271C 0012F65C  CB 61 00 B0 */ lfd f27, 0xb0(r1)
/* 80132720 0012F660  39 61 00 B0 */ addi r11, r1, 0xb0
/* 80132724 0012F664  48 22 FA F9 */ bl _restgpr_26
/* 80132728 0012F668  80 01 01 04 */ lwz r0, 0x104(r1)
/* 8013272C 0012F66C  7C 08 03 A6 */ mtlr r0
/* 80132730 0012F670  38 21 01 00 */ addi r1, r1, 0x100
/* 80132734 0012F674  4E 80 00 20 */ blr