/* 800B1BAC 000AEAEC  94 21 FF B0 */ stwu r1, -0x50(r1)
/* 800B1BB0 000AEAF0  7C 08 02 A6 */ mflr r0
/* 800B1BB4 000AEAF4  90 01 00 54 */ stw r0, 0x54(r1)
/* 800B1BB8 000AEAF8  DB E1 00 40 */ stfd f31, 0x40(r1)
/* 800B1BBC 000AEAFC  F3 E1 00 48 */ psq_st f31, 72(r1), 0, 0
/* 800B1BC0 000AEB00  DB C1 00 30 */ stfd f30, 0x30(r1)
/* 800B1BC4 000AEB04  F3 C1 00 38 */ psq_st f30, 56(r1), 0, 0
/* 800B1BC8 000AEB08  DB A1 00 20 */ stfd f29, 0x20(r1)
/* 800B1BCC 000AEB0C  F3 A1 00 28 */ psq_st f29, 40(r1), 0, 0
/* 800B1BD0 000AEB10  93 E1 00 1C */ stw r31, 0x1c(r1)
/* 800B1BD4 000AEB14  93 C1 00 18 */ stw r30, 0x18(r1)
/* 800B1BD8 000AEB18  7C 7E 1B 78 */ mr r30, r3
/* 800B1BDC 000AEB1C  C3 C2 92 C0 */ lfs f30, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800B1BE0 000AEB20  FF A0 F0 90 */ fmr f29, f30
/* 800B1BE4 000AEB24  C3 E3 2B A8 */ lfs f31, 0x2ba8(r3)
/* 800B1BE8 000AEB28  48 06 40 39 */ bl daAlink_c_NS_checkEventRun
/* 800B1BEC 000AEB2C  7C 7F 1B 78 */ mr r31, r3
/* 800B1BF0 000AEB30  80 1E 19 9C */ lwz r0, 0x199c(r30)
/* 800B1BF4 000AEB34  54 00 06 B5 */ rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 800B1BF8 000AEB38  41 82 01 EC */ beq lbl_800B1DE4
/* 800B1BFC 000AEB3C  88 1E 2F BB */ lbz r0, 0x2fbb(r30)
/* 800B1C00 000AEB40  28 00 00 03 */ cmplwi r0, 3
/* 800B1C04 000AEB44  41 82 00 14 */ beq lbl_800B1C18
/* 800B1C08 000AEB48  7F C3 F3 78 */ mr r3, r30
/* 800B1C0C 000AEB4C  48 05 3E 8D */ bl daAlink_c_NS_checkSnowCode
/* 800B1C10 000AEB50  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800B1C14 000AEB54  41 82 01 D0 */ beq lbl_800B1DE4
lbl_800B1C18:
/* 800B1C18 000AEB58  80 7E 31 A0 */ lwz r3, 0x31a0(r30)
/* 800B1C1C 000AEB5C  70 60 04 40 */ andi. r0, r3, 0x440
/* 800B1C20 000AEB60  40 82 01 C4 */ bne lbl_800B1DE4
/* 800B1C24 000AEB64  2C 1F 00 00 */ cmpwi r31, 0
/* 800B1C28 000AEB68  40 82 01 C4 */ bne lbl_800B1DEC
/* 800B1C2C 000AEB6C  54 60 01 8D */ rlwinm. r0, r3, 0, 6, 6
/* 800B1C30 000AEB70  40 82 01 BC */ bne lbl_800B1DEC
/* 800B1C34 000AEB74  7F C3 F3 78 */ mr r3, r30
/* 800B1C38 000AEB78  48 05 3E 61 */ bl daAlink_c_NS_checkSnowCode
/* 800B1C3C 000AEB7C  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800B1C40 000AEB80  41 82 00 54 */ beq lbl_800B1C94
/* 800B1C44 000AEB84  7F C3 F3 78 */ mr r3, r30
/* 800B1C48 000AEB88  48 00 1C BD */ bl daAlink_c_NS_checkZeroSpeedF
/* 800B1C4C 000AEB8C  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800B1C50 000AEB90  41 82 00 10 */ beq lbl_800B1C60
/* 800B1C54 000AEB94  A0 1E 2F E8 */ lhz r0, 0x2fe8(r30)
/* 800B1C58 000AEB98  28 00 00 20 */ cmplwi r0, 0x20
/* 800B1C5C 000AEB9C  40 82 01 90 */ bne lbl_800B1DEC
lbl_800B1C60:
/* 800B1C60 000AEBA0  C3 A2 92 B8 */ lfs f29, lbl_80452CB8-_SDA2_BASE_(r2)
/* 800B1C64 000AEBA4  88 1E 2F A8 */ lbz r0, 0x2fa8(r30)
/* 800B1C68 000AEBA8  28 00 00 05 */ cmplwi r0, 5
/* 800B1C6C 000AEBAC  40 82 00 0C */ bne lbl_800B1C78
/* 800B1C70 000AEBB0  C3 C2 94 34 */ lfs f30, lbl_80452E34-_SDA2_BASE_(r2)
/* 800B1C74 000AEBB4  48 00 01 78 */ b lbl_800B1DEC
lbl_800B1C78:
/* 800B1C78 000AEBB8  C0 3E 2B A8 */ lfs f1, 0x2ba8(r30)
/* 800B1C7C 000AEBBC  C0 02 94 34 */ lfs f0, lbl_80452E34-_SDA2_BASE_(r2)
/* 800B1C80 000AEBC0  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800B1C84 000AEBC4  40 81 00 08 */ ble lbl_800B1C8C
/* 800B1C88 000AEBC8  C3 A2 93 30 */ lfs f29, lbl_80452D30-_SDA2_BASE_(r2)
lbl_800B1C8C:
/* 800B1C8C 000AEBCC  C3 C2 95 14 */ lfs f30, lbl_80452F14-_SDA2_BASE_(r2)
/* 800B1C90 000AEBD0  48 00 01 5C */ b lbl_800B1DEC
lbl_800B1C94:
/* 800B1C94 000AEBD4  88 1E 2F BD */ lbz r0, 0x2fbd(r30)
/* 800B1C98 000AEBD8  28 00 00 04 */ cmplwi r0, 4
/* 800B1C9C 000AEBDC  40 82 00 30 */ bne lbl_800B1CCC
/* 800B1CA0 000AEBE0  C3 C2 92 A0 */ lfs f30, lbl_80452CA0-_SDA2_BASE_(r2)
/* 800B1CA4 000AEBE4  C0 3E 2B A8 */ lfs f1, 0x2ba8(r30)
/* 800B1CA8 000AEBE8  C0 02 94 34 */ lfs f0, lbl_80452E34-_SDA2_BASE_(r2)
/* 800B1CAC 000AEBEC  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800B1CB0 000AEBF0  40 81 00 0C */ ble lbl_800B1CBC
/* 800B1CB4 000AEBF4  C3 A2 93 30 */ lfs f29, lbl_80452D30-_SDA2_BASE_(r2)
/* 800B1CB8 000AEBF8  48 00 01 34 */ b lbl_800B1DEC
lbl_800B1CBC:
/* 800B1CBC 000AEBFC  3C 60 80 39 */ lis r3, lbl_8038D664@ha
/* 800B1CC0 000AEC00  38 63 D6 64 */ addi r3, r3, lbl_8038D664@l
/* 800B1CC4 000AEC04  C3 A3 00 48 */ lfs f29, 0x48(r3)
/* 800B1CC8 000AEC08  48 00 01 24 */ b lbl_800B1DEC
lbl_800B1CCC:
/* 800B1CCC 000AEC0C  28 00 00 02 */ cmplwi r0, 2
/* 800B1CD0 000AEC10  40 82 00 10 */ bne lbl_800B1CE0
/* 800B1CD4 000AEC14  C3 DE 34 5C */ lfs f30, 0x345c(r30)
/* 800B1CD8 000AEC18  C3 A2 93 44 */ lfs f29, lbl_80452D44-_SDA2_BASE_(r2)
/* 800B1CDC 000AEC1C  48 00 01 10 */ b lbl_800B1DEC
lbl_800B1CE0:
/* 800B1CE0 000AEC20  28 00 00 03 */ cmplwi r0, 3
/* 800B1CE4 000AEC24  40 82 00 44 */ bne lbl_800B1D28
/* 800B1CE8 000AEC28  C3 DE 34 58 */ lfs f30, 0x3458(r30)
/* 800B1CEC 000AEC2C  C0 3E 2B A8 */ lfs f1, 0x2ba8(r30)
/* 800B1CF0 000AEC30  C0 02 94 34 */ lfs f0, lbl_80452E34-_SDA2_BASE_(r2)
/* 800B1CF4 000AEC34  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800B1CF8 000AEC38  40 81 00 0C */ ble lbl_800B1D04
/* 800B1CFC 000AEC3C  C3 A2 93 30 */ lfs f29, lbl_80452D30-_SDA2_BASE_(r2)
/* 800B1D00 000AEC40  48 00 00 EC */ b lbl_800B1DEC
lbl_800B1D04:
/* 800B1D04 000AEC44  3C 60 80 39 */ lis r3, lbl_8038D664@ha
/* 800B1D08 000AEC48  38 63 D6 64 */ addi r3, r3, lbl_8038D664@l
/* 800B1D0C 000AEC4C  C3 A3 00 48 */ lfs f29, 0x48(r3)
/* 800B1D10 000AEC50  80 1E 05 74 */ lwz r0, 0x574(r30)
/* 800B1D14 000AEC54  54 00 01 8D */ rlwinm. r0, r0, 0, 6, 6
/* 800B1D18 000AEC58  41 82 00 D4 */ beq lbl_800B1DEC
/* 800B1D1C 000AEC5C  C0 02 98 A8 */ lfs f0, lbl_804532A8-_SDA2_BASE_(r2)
/* 800B1D20 000AEC60  EF BD 00 32 */ fmuls f29, f29, f0
/* 800B1D24 000AEC64  48 00 00 C8 */ b lbl_800B1DEC
lbl_800B1D28:
/* 800B1D28 000AEC68  28 00 00 01 */ cmplwi r0, 1
/* 800B1D2C 000AEC6C  40 82 00 68 */ bne lbl_800B1D94
/* 800B1D30 000AEC70  C0 3E 33 98 */ lfs f1, 0x3398(r30)
/* 800B1D34 000AEC74  C0 02 93 14 */ lfs f0, lbl_80452D14-_SDA2_BASE_(r2)
/* 800B1D38 000AEC78  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800B1D3C 000AEC7C  40 80 00 44 */ bge lbl_800B1D80
/* 800B1D40 000AEC80  C3 DE 34 58 */ lfs f30, 0x3458(r30)
/* 800B1D44 000AEC84  C0 3E 2B A8 */ lfs f1, 0x2ba8(r30)
/* 800B1D48 000AEC88  C0 02 94 34 */ lfs f0, lbl_80452E34-_SDA2_BASE_(r2)
/* 800B1D4C 000AEC8C  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800B1D50 000AEC90  40 81 00 0C */ ble lbl_800B1D5C
/* 800B1D54 000AEC94  C3 A2 93 30 */ lfs f29, lbl_80452D30-_SDA2_BASE_(r2)
/* 800B1D58 000AEC98  48 00 00 10 */ b lbl_800B1D68
lbl_800B1D5C:
/* 800B1D5C 000AEC9C  3C 60 80 39 */ lis r3, lbl_8038D664@ha
/* 800B1D60 000AECA0  38 63 D6 64 */ addi r3, r3, lbl_8038D664@l
/* 800B1D64 000AECA4  C3 A3 00 48 */ lfs f29, 0x48(r3)
lbl_800B1D68:
/* 800B1D68 000AECA8  80 1E 05 74 */ lwz r0, 0x574(r30)
/* 800B1D6C 000AECAC  54 00 01 8D */ rlwinm. r0, r0, 0, 6, 6
/* 800B1D70 000AECB0  41 82 00 7C */ beq lbl_800B1DEC
/* 800B1D74 000AECB4  C0 02 98 A8 */ lfs f0, lbl_804532A8-_SDA2_BASE_(r2)
/* 800B1D78 000AECB8  EF BD 00 32 */ fmuls f29, f29, f0
/* 800B1D7C 000AECBC  48 00 00 70 */ b lbl_800B1DEC
lbl_800B1D80:
/* 800B1D80 000AECC0  C3 C2 94 34 */ lfs f30, lbl_80452E34-_SDA2_BASE_(r2)
/* 800B1D84 000AECC4  3C 60 80 39 */ lis r3, lbl_8038D664@ha
/* 800B1D88 000AECC8  38 63 D6 64 */ addi r3, r3, lbl_8038D664@l
/* 800B1D8C 000AECCC  C3 A3 00 4C */ lfs f29, 0x4c(r3)
/* 800B1D90 000AECD0  48 00 00 5C */ b lbl_800B1DEC
lbl_800B1D94:
/* 800B1D94 000AECD4  C0 3E 33 98 */ lfs f1, 0x3398(r30)
/* 800B1D98 000AECD8  C0 02 93 14 */ lfs f0, lbl_80452D14-_SDA2_BASE_(r2)
/* 800B1D9C 000AECDC  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800B1DA0 000AECE0  40 80 00 14 */ bge lbl_800B1DB4
/* 800B1DA4 000AECE4  C0 3E 2B A8 */ lfs f1, 0x2ba8(r30)
/* 800B1DA8 000AECE8  C0 02 94 34 */ lfs f0, lbl_80452E34-_SDA2_BASE_(r2)
/* 800B1DAC 000AECEC  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800B1DB0 000AECF0  41 80 00 3C */ blt lbl_800B1DEC
lbl_800B1DB4:
/* 800B1DB4 000AECF4  C3 C2 94 34 */ lfs f30, lbl_80452E34-_SDA2_BASE_(r2)
/* 800B1DB8 000AECF8  C0 1E 2B A8 */ lfs f0, 0x2ba8(r30)
/* 800B1DBC 000AECFC  FC 00 F0 40 */ fcmpo cr0, f0, f30
/* 800B1DC0 000AED00  40 80 00 14 */ bge lbl_800B1DD4
/* 800B1DC4 000AED04  3C 60 80 39 */ lis r3, lbl_8038D664@ha
/* 800B1DC8 000AED08  38 63 D6 64 */ addi r3, r3, lbl_8038D664@l
/* 800B1DCC 000AED0C  C3 A3 00 4C */ lfs f29, 0x4c(r3)
/* 800B1DD0 000AED10  48 00 00 1C */ b lbl_800B1DEC
lbl_800B1DD4:
/* 800B1DD4 000AED14  3C 60 80 39 */ lis r3, lbl_8038D664@ha
/* 800B1DD8 000AED18  38 63 D6 64 */ addi r3, r3, lbl_8038D664@l
/* 800B1DDC 000AED1C  C3 A3 00 48 */ lfs f29, 0x48(r3)
/* 800B1DE0 000AED20  48 00 00 0C */ b lbl_800B1DEC
lbl_800B1DE4:
/* 800B1DE4 000AED24  C3 C2 92 C0 */ lfs f30, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800B1DE8 000AED28  C3 A2 93 30 */ lfs f29, lbl_80452D30-_SDA2_BASE_(r2)
lbl_800B1DEC:
/* 800B1DEC 000AED2C  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800B1DF0 000AED30  FC 1D 00 40 */ fcmpo cr0, f29, f0
/* 800B1DF4 000AED34  40 81 00 14 */ ble lbl_800B1E08
/* 800B1DF8 000AED38  38 7E 2B A8 */ addi r3, r30, 0x2ba8
/* 800B1DFC 000AED3C  FC 20 F0 90 */ fmr f1, f30
/* 800B1E00 000AED40  FC 40 E8 90 */ fmr f2, f29
/* 800B1E04 000AED44  48 1B E9 3D */ bl cLib_chaseF__FPfff
lbl_800B1E08:
/* 800B1E08 000AED48  C0 1E 2B A8 */ lfs f0, 0x2ba8(r30)
/* 800B1E0C 000AED4C  C0 62 94 34 */ lfs f3, lbl_80452E34-_SDA2_BASE_(r2)
/* 800B1E10 000AED50  FC 00 18 40 */ fcmpo cr0, f0, f3
/* 800B1E14 000AED54  40 80 00 E8 */ bge lbl_800B1EFC
/* 800B1E18 000AED58  88 1E 2F BB */ lbz r0, 0x2fbb(r30)
/* 800B1E1C 000AED5C  98 1E 2F C9 */ stb r0, 0x2fc9(r30)
/* 800B1E20 000AED60  A0 1E 2F E8 */ lhz r0, 0x2fe8(r30)
/* 800B1E24 000AED64  28 00 01 55 */ cmplwi r0, 0x155
/* 800B1E28 000AED68  40 82 00 0C */ bne lbl_800B1E34
/* 800B1E2C 000AED6C  38 00 00 7F */ li r0, 0x7f
/* 800B1E30 000AED70  48 00 00 58 */ b lbl_800B1E88
lbl_800B1E34:
/* 800B1E34 000AED74  C0 42 98 AC */ lfs f2, lbl_804532AC-_SDA2_BASE_(r2)
/* 800B1E38 000AED78  C0 1E 2B A8 */ lfs f0, 0x2ba8(r30)
/* 800B1E3C 000AED7C  EC 20 18 28 */ fsubs f1, f0, f3
/* 800B1E40 000AED80  C0 1E 34 58 */ lfs f0, 0x3458(r30)
/* 800B1E44 000AED84  EC 00 18 28 */ fsubs f0, f0, f3
/* 800B1E48 000AED88  EC 01 00 24 */ fdivs f0, f1, f0
/* 800B1E4C 000AED8C  EC 22 00 32 */ fmuls f1, f2, f0
/* 800B1E50 000AED90  C0 02 92 B8 */ lfs f0, lbl_80452CB8-_SDA2_BASE_(r2)
/* 800B1E54 000AED94  EC 01 00 28 */ fsubs f0, f1, f0
/* 800B1E58 000AED98  FC 00 00 1E */ fctiwz f0, f0
/* 800B1E5C 000AED9C  D8 01 00 08 */ stfd f0, 8(r1)
/* 800B1E60 000AEDA0  80 01 00 0C */ lwz r0, 0xc(r1)
/* 800B1E64 000AEDA4  2C 00 FF FF */ cmpwi r0, -1
/* 800B1E68 000AEDA8  40 80 00 0C */ bge lbl_800B1E74
/* 800B1E6C 000AEDAC  38 60 FF FF */ li r3, -1
/* 800B1E70 000AEDB0  48 00 00 14 */ b lbl_800B1E84
lbl_800B1E74:
/* 800B1E74 000AEDB4  2C 00 00 7F */ cmpwi r0, 0x7f
/* 800B1E78 000AEDB8  38 60 00 7F */ li r3, 0x7f
/* 800B1E7C 000AEDBC  41 81 00 08 */ bgt lbl_800B1E84
/* 800B1E80 000AEDC0  7C 03 03 78 */ mr r3, r0
lbl_800B1E84:
/* 800B1E84 000AEDC4  7C 60 1B 78 */ mr r0, r3
lbl_800B1E88:
/* 800B1E88 000AEDC8  38 7E 2C A8 */ addi r3, r30, 0x2ca8
/* 800B1E8C 000AEDCC  7C 04 07 74 */ extsb r4, r0
/* 800B1E90 000AEDD0  48 21 1B D5 */ bl setSinkDepth__14Z2CreatureLinkFSc
/* 800B1E94 000AEDD4  C0 1E 2B A8 */ lfs f0, 0x2ba8(r30)
/* 800B1E98 000AEDD8  EC 1F 00 28 */ fsubs f0, f31, f0
/* 800B1E9C 000AEDDC  FC 00 02 10 */ fabs f0, f0
/* 800B1EA0 000AEDE0  FC 20 00 18 */ frsp f1, f0
/* 800B1EA4 000AEDE4  C0 02 93 88 */ lfs f0, lbl_80452D88-_SDA2_BASE_(r2)
/* 800B1EA8 000AEDE8  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800B1EAC 000AEDEC  40 81 00 A8 */ ble lbl_800B1F54
/* 800B1EB0 000AEDF0  88 1E 2F BB */ lbz r0, 0x2fbb(r30)
/* 800B1EB4 000AEDF4  28 00 00 0D */ cmplwi r0, 0xd
/* 800B1EB8 000AEDF8  40 82 00 24 */ bne lbl_800B1EDC
/* 800B1EBC 000AEDFC  7F C3 F3 78 */ mr r3, r30
/* 800B1EC0 000AEE00  3C 80 00 02 */ lis r4, 0x00020073@ha
/* 800B1EC4 000AEE04  38 84 00 73 */ addi r4, r4, 0x00020073@l
/* 800B1EC8 000AEE08  81 9E 06 28 */ lwz r12, 0x628(r30)
/* 800B1ECC 000AEE0C  81 8C 01 1C */ lwz r12, 0x11c(r12)
/* 800B1ED0 000AEE10  7D 89 03 A6 */ mtctr r12
/* 800B1ED4 000AEE14  4E 80 04 21 */ bctrl
/* 800B1ED8 000AEE18  48 00 00 7C */ b lbl_800B1F54
lbl_800B1EDC:
/* 800B1EDC 000AEE1C  7F C3 F3 78 */ mr r3, r30
/* 800B1EE0 000AEE20  3C 80 00 02 */ lis r4, 0x00020070@ha
/* 800B1EE4 000AEE24  38 84 00 70 */ addi r4, r4, 0x00020070@l
/* 800B1EE8 000AEE28  81 9E 06 28 */ lwz r12, 0x628(r30)
/* 800B1EEC 000AEE2C  81 8C 01 1C */ lwz r12, 0x11c(r12)
/* 800B1EF0 000AEE30  7D 89 03 A6 */ mtctr r12
/* 800B1EF4 000AEE34  4E 80 04 21 */ bctrl
/* 800B1EF8 000AEE38  48 00 00 5C */ b lbl_800B1F54
lbl_800B1EFC:
/* 800B1EFC 000AEE3C  88 1E 2F C9 */ lbz r0, 0x2fc9(r30)
/* 800B1F00 000AEE40  28 00 00 10 */ cmplwi r0, 0x10
/* 800B1F04 000AEE44  41 82 00 50 */ beq lbl_800B1F54
/* 800B1F08 000AEE48  28 00 00 0D */ cmplwi r0, 0xd
/* 800B1F0C 000AEE4C  40 82 00 24 */ bne lbl_800B1F30
/* 800B1F10 000AEE50  7F C3 F3 78 */ mr r3, r30
/* 800B1F14 000AEE54  3C 80 00 02 */ lis r4, 0x00020074@ha
/* 800B1F18 000AEE58  38 84 00 74 */ addi r4, r4, 0x00020074@l
/* 800B1F1C 000AEE5C  81 9E 06 28 */ lwz r12, 0x628(r30)
/* 800B1F20 000AEE60  81 8C 01 18 */ lwz r12, 0x118(r12)
/* 800B1F24 000AEE64  7D 89 03 A6 */ mtctr r12
/* 800B1F28 000AEE68  4E 80 04 21 */ bctrl
/* 800B1F2C 000AEE6C  48 00 00 20 */ b lbl_800B1F4C
lbl_800B1F30:
/* 800B1F30 000AEE70  7F C3 F3 78 */ mr r3, r30
/* 800B1F34 000AEE74  3C 80 00 02 */ lis r4, 0x00020071@ha
/* 800B1F38 000AEE78  38 84 00 71 */ addi r4, r4, 0x00020071@l
/* 800B1F3C 000AEE7C  81 9E 06 28 */ lwz r12, 0x628(r30)
/* 800B1F40 000AEE80  81 8C 01 18 */ lwz r12, 0x118(r12)
/* 800B1F44 000AEE84  7D 89 03 A6 */ mtctr r12
/* 800B1F48 000AEE88  4E 80 04 21 */ bctrl
lbl_800B1F4C:
/* 800B1F4C 000AEE8C  38 00 00 10 */ li r0, 0x10
/* 800B1F50 000AEE90  98 1E 2F C9 */ stb r0, 0x2fc9(r30)
lbl_800B1F54:
/* 800B1F54 000AEE94  80 1E 05 74 */ lwz r0, 0x574(r30)
/* 800B1F58 000AEE98  54 00 01 8D */ rlwinm. r0, r0, 0, 6, 6
/* 800B1F5C 000AEE9C  41 82 00 2C */ beq lbl_800B1F88
/* 800B1F60 000AEEA0  2C 1F 00 00 */ cmpwi r31, 0
/* 800B1F64 000AEEA4  40 82 00 24 */ bne lbl_800B1F88
/* 800B1F68 000AEEA8  C0 3E 2B A8 */ lfs f1, 0x2ba8(r30)
/* 800B1F6C 000AEEAC  C0 02 94 0C */ lfs f0, lbl_80452E0C-_SDA2_BASE_(r2)
/* 800B1F70 000AEEB0  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800B1F74 000AEEB4  40 80 00 14 */ bge lbl_800B1F88
/* 800B1F78 000AEEB8  80 6D 8A 98 */ lwz r3, lbl_80451018-_SDA_BASE_(r13)
/* 800B1F7C 000AEEBC  80 03 08 98 */ lwz r0, 0x898(r3)
/* 800B1F80 000AEEC0  60 00 00 08 */ ori r0, r0, 8
/* 800B1F84 000AEEC4  90 03 08 98 */ stw r0, 0x898(r3)
lbl_800B1F88:
/* 800B1F88 000AEEC8  E3 E1 00 48 */ psq_l f31, 72(r1), 0, 0
/* 800B1F8C 000AEECC  CB E1 00 40 */ lfd f31, 0x40(r1)
/* 800B1F90 000AEED0  E3 C1 00 38 */ psq_l f30, 56(r1), 0, 0
/* 800B1F94 000AEED4  CB C1 00 30 */ lfd f30, 0x30(r1)
/* 800B1F98 000AEED8  E3 A1 00 28 */ psq_l f29, 40(r1), 0, 0
/* 800B1F9C 000AEEDC  CB A1 00 20 */ lfd f29, 0x20(r1)
/* 800B1FA0 000AEEE0  83 E1 00 1C */ lwz r31, 0x1c(r1)
/* 800B1FA4 000AEEE4  83 C1 00 18 */ lwz r30, 0x18(r1)
/* 800B1FA8 000AEEE8  80 01 00 54 */ lwz r0, 0x54(r1)
/* 800B1FAC 000AEEEC  7C 08 03 A6 */ mtlr r0
/* 800B1FB0 000AEEF0  38 21 00 50 */ addi r1, r1, 0x50
/* 800B1FB4 000AEEF4  4E 80 00 20 */ blr