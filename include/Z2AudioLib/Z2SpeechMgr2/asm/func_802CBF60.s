/* 802CBF60 002C8EA0  94 21 FF B0 */ stwu r1, -0x50(r1)
/* 802CBF64 002C8EA4  7C 08 02 A6 */ mflr r0
/* 802CBF68 002C8EA8  90 01 00 54 */ stw r0, 0x54(r1)
/* 802CBF6C 002C8EAC  93 E1 00 4C */ stw r31, 0x4c(r1)
/* 802CBF70 002C8EB0  7C 7F 1B 78 */ mr r31, r3
/* 802CBF74 002C8EB4  88 03 03 FE */ lbz r0, 0x3fe(r3)
/* 802CBF78 002C8EB8  28 00 00 63 */ cmplwi r0, 0x63
/* 802CBF7C 002C8EBC  41 82 02 00 */ beq lbl_802CC17C
/* 802CBF80 002C8EC0  38 00 00 00 */ li r0, 0
/* 802CBF84 002C8EC4  98 1F 03 FF */ stb r0, 0x3ff(r31)
/* 802CBF88 002C8EC8  7C 84 07 34 */ extsh r4, r4
/* 802CBF8C 002C8ECC  30 04 FF FF */ addic r0, r4, -1
/* 802CBF90 002C8ED0  7C 60 01 10 */ subfe r3, r0, r0
/* 802CBF94 002C8ED4  38 04 FF FF */ addi r0, r4, -1
/* 802CBF98 002C8ED8  7C 00 18 78 */ andc r0, r0, r3
/* 802CBF9C 002C8EDC  7C 03 07 34 */ extsh r3, r0
/* 802CBFA0 002C8EE0  38 80 00 00 */ li r4, 0
/* 802CBFA4 002C8EE4  A8 1F 03 FA */ lha r0, 0x3fa(r31)
/* 802CBFA8 002C8EE8  2C 00 00 00 */ cmpwi r0, 0
/* 802CBFAC 002C8EEC  40 82 00 14 */ bne lbl_802CBFC0
/* 802CBFB0 002C8EF0  A8 1F 03 F8 */ lha r0, 0x3f8(r31)
/* 802CBFB4 002C8EF4  7C 03 00 00 */ cmpw r3, r0
/* 802CBFB8 002C8EF8  41 80 00 08 */ blt lbl_802CBFC0
/* 802CBFBC 002C8EFC  38 80 00 01 */ li r4, 1
lbl_802CBFC0:
/* 802CBFC0 002C8F00  B0 7F 03 FA */ sth r3, 0x3fa(r31)
/* 802CBFC4 002C8F04  A8 1F 03 FA */ lha r0, 0x3fa(r31)
/* 802CBFC8 002C8F08  A8 7F 03 F8 */ lha r3, 0x3f8(r31)
/* 802CBFCC 002C8F0C  7C 00 18 00 */ cmpw r0, r3
/* 802CBFD0 002C8F10  41 80 00 08 */ blt lbl_802CBFD8
/* 802CBFD4 002C8F14  B0 7F 03 FA */ sth r3, 0x3fa(r31)
lbl_802CBFD8:
/* 802CBFD8 002C8F18  88 1F 03 FE */ lbz r0, 0x3fe(r31)
/* 802CBFDC 002C8F1C  28 00 00 01 */ cmplwi r0, 1
/* 802CBFE0 002C8F20  41 82 00 0C */ beq lbl_802CBFEC
/* 802CBFE4 002C8F24  28 00 00 02 */ cmplwi r0, 2
/* 802CBFE8 002C8F28  40 82 00 20 */ bne lbl_802CC008
lbl_802CBFEC:
/* 802CBFEC 002C8F2C  80 1F 00 00 */ lwz r0, 0(r31)
/* 802CBFF0 002C8F30  28 00 00 00 */ cmplwi r0, 0
/* 802CBFF4 002C8F34  40 82 01 88 */ bne lbl_802CC17C
/* 802CBFF8 002C8F38  7F E3 FB 78 */ mr r3, r31
/* 802CBFFC 002C8F3C  38 80 00 00 */ li r4, 0
/* 802CC000 002C8F40  48 00 01 91 */ bl Z2SpeechMgr2_NS_speakOneWord
/* 802CC004 002C8F44  48 00 01 78 */ b lbl_802CC17C
lbl_802CC008:
/* 802CC008 002C8F48  54 80 06 3F */ clrlwi. r0, r4, 0x18
/* 802CC00C 002C8F4C  41 82 00 58 */ beq lbl_802CC064
/* 802CC010 002C8F50  A0 1F 03 FC */ lhz r0, 0x3fc(r31)
/* 802CC014 002C8F54  28 00 00 00 */ cmplwi r0, 0
/* 802CC018 002C8F58  40 82 01 64 */ bne lbl_802CC17C
/* 802CC01C 002C8F5C  38 00 00 7A */ li r0, 0x7a
/* 802CC020 002C8F60  90 01 00 34 */ stw r0, 0x34(r1)
/* 802CC024 002C8F64  38 7F 00 0C */ addi r3, r31, 0xc
/* 802CC028 002C8F68  38 81 00 34 */ addi r4, r1, 0x34
/* 802CC02C 002C8F6C  38 BF 00 04 */ addi r5, r31, 4
/* 802CC030 002C8F70  38 C0 00 00 */ li r6, 0
/* 802CC034 002C8F74  38 E0 00 00 */ li r7, 0
/* 802CC038 002C8F78  C0 22 C5 30 */ lfs f1, lbl_80455F30-_SDA2_BASE_(r2)
/* 802CC03C 002C8F7C  C0 42 C5 34 */ lfs f2, lbl_80455F34-_SDA2_BASE_(r2)
/* 802CC040 002C8F80  FC 60 10 90 */ fmr f3, f2
/* 802CC044 002C8F84  C0 82 C5 38 */ lfs f4, lbl_80455F38-_SDA2_BASE_(r2)
/* 802CC048 002C8F88  FC A0 20 90 */ fmr f5, f4
/* 802CC04C 002C8F8C  39 00 00 00 */ li r8, 0
/* 802CC050 002C8F90  81 9F 00 0C */ lwz r12, 0xc(r31)
/* 802CC054 002C8F94  81 8C 00 10 */ lwz r12, 0x10(r12)
/* 802CC058 002C8F98  7D 89 03 A6 */ mtctr r12
/* 802CC05C 002C8F9C  4E 80 04 21 */ bctrl
/* 802CC060 002C8FA0  48 00 01 1C */ b lbl_802CC17C
lbl_802CC064:
/* 802CC064 002C8FA4  7F E3 FB 78 */ mr r3, r31
/* 802CC068 002C8FA8  48 00 02 95 */ bl Z2SpeechMgr2_NS_isNonVerbal
/* 802CC06C 002C8FAC  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 802CC070 002C8FB0  40 82 01 0C */ bne lbl_802CC17C
/* 802CC074 002C8FB4  88 7F 03 FE */ lbz r3, 0x3fe(r31)
/* 802CC078 002C8FB8  38 03 FF F5 */ addi r0, r3, -11
/* 802CC07C 002C8FBC  28 00 00 14 */ cmplwi r0, 0x14
/* 802CC080 002C8FC0  41 81 00 B8 */ bgt lbl_802CC138
/* 802CC084 002C8FC4  3C 60 80 3D */ lis r3, lbl_803CBED0@ha
/* 802CC088 002C8FC8  38 63 BE D0 */ addi r3, r3, lbl_803CBED0@l
/* 802CC08C 002C8FCC  54 00 10 3A */ slwi r0, r0, 2
/* 802CC090 002C8FD0  7C 03 00 2E */ lwzx r0, r3, r0
/* 802CC094 002C8FD4  7C 09 03 A6 */ mtctr r0
/* 802CC098 002C8FD8  4E 80 04 20 */ bctr
/* 802CC09C 002C8FDC  38 00 00 7B */ li r0, 0x7b
/* 802CC0A0 002C8FE0  90 01 00 30 */ stw r0, 0x30(r1)
/* 802CC0A4 002C8FE4  90 01 00 38 */ stw r0, 0x38(r1)
/* 802CC0A8 002C8FE8  48 00 00 90 */ b lbl_802CC138
/* 802CC0AC 002C8FEC  38 00 00 7C */ li r0, 0x7c
/* 802CC0B0 002C8FF0  90 01 00 2C */ stw r0, 0x2c(r1)
/* 802CC0B4 002C8FF4  90 01 00 38 */ stw r0, 0x38(r1)
/* 802CC0B8 002C8FF8  48 00 00 80 */ b lbl_802CC138
/* 802CC0BC 002C8FFC  38 00 00 7D */ li r0, 0x7d
/* 802CC0C0 002C9000  90 01 00 28 */ stw r0, 0x28(r1)
/* 802CC0C4 002C9004  90 01 00 38 */ stw r0, 0x38(r1)
/* 802CC0C8 002C9008  48 00 00 70 */ b lbl_802CC138
/* 802CC0CC 002C900C  38 00 00 7E */ li r0, 0x7e
/* 802CC0D0 002C9010  90 01 00 24 */ stw r0, 0x24(r1)
/* 802CC0D4 002C9014  90 01 00 38 */ stw r0, 0x38(r1)
/* 802CC0D8 002C9018  48 00 00 60 */ b lbl_802CC138
/* 802CC0DC 002C901C  38 00 00 7F */ li r0, 0x7f
/* 802CC0E0 002C9020  90 01 00 20 */ stw r0, 0x20(r1)
/* 802CC0E4 002C9024  90 01 00 38 */ stw r0, 0x38(r1)
/* 802CC0E8 002C9028  48 00 00 50 */ b lbl_802CC138
/* 802CC0EC 002C902C  38 00 00 80 */ li r0, 0x80
/* 802CC0F0 002C9030  90 01 00 1C */ stw r0, 0x1c(r1)
/* 802CC0F4 002C9034  90 01 00 38 */ stw r0, 0x38(r1)
/* 802CC0F8 002C9038  48 00 00 40 */ b lbl_802CC138
/* 802CC0FC 002C903C  38 00 00 81 */ li r0, 0x81
/* 802CC100 002C9040  90 01 00 18 */ stw r0, 0x18(r1)
/* 802CC104 002C9044  90 01 00 38 */ stw r0, 0x38(r1)
/* 802CC108 002C9048  48 00 00 30 */ b lbl_802CC138
/* 802CC10C 002C904C  38 00 00 82 */ li r0, 0x82
/* 802CC110 002C9050  90 01 00 14 */ stw r0, 0x14(r1)
/* 802CC114 002C9054  90 01 00 38 */ stw r0, 0x38(r1)
/* 802CC118 002C9058  48 00 00 20 */ b lbl_802CC138
/* 802CC11C 002C905C  38 00 00 83 */ li r0, 0x83
/* 802CC120 002C9060  90 01 00 10 */ stw r0, 0x10(r1)
/* 802CC124 002C9064  90 01 00 38 */ stw r0, 0x38(r1)
/* 802CC128 002C9068  48 00 00 10 */ b lbl_802CC138
/* 802CC12C 002C906C  38 00 00 84 */ li r0, 0x84
/* 802CC130 002C9070  90 01 00 0C */ stw r0, 0xc(r1)
/* 802CC134 002C9074  90 01 00 38 */ stw r0, 0x38(r1)
lbl_802CC138:
/* 802CC138 002C9078  80 01 00 38 */ lwz r0, 0x38(r1)
/* 802CC13C 002C907C  90 01 00 08 */ stw r0, 8(r1)
/* 802CC140 002C9080  38 7F 00 0C */ addi r3, r31, 0xc
/* 802CC144 002C9084  38 81 00 08 */ addi r4, r1, 8
/* 802CC148 002C9088  38 BF 00 04 */ addi r5, r31, 4
/* 802CC14C 002C908C  38 C0 00 00 */ li r6, 0
/* 802CC150 002C9090  38 E0 00 00 */ li r7, 0
/* 802CC154 002C9094  C0 22 C5 30 */ lfs f1, lbl_80455F30-_SDA2_BASE_(r2)
/* 802CC158 002C9098  C0 42 C5 34 */ lfs f2, lbl_80455F34-_SDA2_BASE_(r2)
/* 802CC15C 002C909C  FC 60 10 90 */ fmr f3, f2
/* 802CC160 002C90A0  C0 82 C5 38 */ lfs f4, lbl_80455F38-_SDA2_BASE_(r2)
/* 802CC164 002C90A4  FC A0 20 90 */ fmr f5, f4
/* 802CC168 002C90A8  39 00 00 00 */ li r8, 0
/* 802CC16C 002C90AC  81 9F 00 0C */ lwz r12, 0xc(r31)
/* 802CC170 002C90B0  81 8C 00 10 */ lwz r12, 0x10(r12)
/* 802CC174 002C90B4  7D 89 03 A6 */ mtctr r12
/* 802CC178 002C90B8  4E 80 04 21 */ bctrl
lbl_802CC17C:
/* 802CC17C 002C90BC  83 E1 00 4C */ lwz r31, 0x4c(r1)
/* 802CC180 002C90C0  80 01 00 54 */ lwz r0, 0x54(r1)
/* 802CC184 002C90C4  7C 08 03 A6 */ mtlr r0
/* 802CC188 002C90C8  38 21 00 50 */ addi r1, r1, 0x50
/* 802CC18C 002C90CC  4E 80 00 20 */ blr