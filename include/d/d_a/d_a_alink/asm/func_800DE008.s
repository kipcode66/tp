/* 800DE008 000DAF48  94 21 FF B0 */ stwu r1, -0x50(r1)
/* 800DE00C 000DAF4C  7C 08 02 A6 */ mflr r0
/* 800DE010 000DAF50  90 01 00 54 */ stw r0, 0x54(r1)
/* 800DE014 000DAF54  39 61 00 50 */ addi r11, r1, 0x50
/* 800DE018 000DAF58  48 28 41 C1 */ bl _savegpr_28
/* 800DE01C 000DAF5C  7C 7C 1B 78 */ mr r28, r3
/* 800DE020 000DAF60  7C 9D 23 78 */ mr r29, r4
/* 800DE024 000DAF64  4B FF ED CD */ bl daAlink_c_NS_checkUpperGuardAnime
/* 800DE028 000DAF68  7C 7F 1B 78 */ mr r31, r3
/* 800DE02C 000DAF6C  83 DC 27 EC */ lwz r30, 0x27ec(r28)
/* 800DE030 000DAF70  7F 83 E3 78 */ mr r3, r28
/* 800DE034 000DAF74  38 80 00 20 */ li r4, 0x20
/* 800DE038 000DAF78  4B FE 3F 35 */ bl daAlink_c_NS_commonProcInit
/* 800DE03C 000DAF7C  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800DE040 000DAF80  D0 1C 33 98 */ stfs f0, 0x3398(r28)
/* 800DE044 000DAF84  2C 1D 00 02 */ cmpwi r29, 2
/* 800DE048 000DAF88  40 82 00 0C */ bne lbl_800DE054
/* 800DE04C 000DAF8C  3B A0 00 F0 */ li r29, 0xf0
/* 800DE050 000DAF90  48 00 00 4C */ b lbl_800DE09C
lbl_800DE054:
/* 800DE054 000DAF94  2C 1D 00 03 */ cmpwi r29, 3
/* 800DE058 000DAF98  40 82 00 0C */ bne lbl_800DE064
/* 800DE05C 000DAF9C  3B A0 00 F1 */ li r29, 0xf1
/* 800DE060 000DAFA0  48 00 00 3C */ b lbl_800DE09C
lbl_800DE064:
/* 800DE064 000DAFA4  C0 3C 33 AC */ lfs f1, 0x33ac(r28)
/* 800DE068 000DAFA8  C0 02 92 A4 */ lfs f0, lbl_80452CA4-_SDA2_BASE_(r2)
/* 800DE06C 000DAFAC  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800DE070 000DAFB0  40 81 00 28 */ ble lbl_800DE098
/* 800DE074 000DAFB4  A8 7C 04 E6 */ lha r3, 0x4e6(r28)
/* 800DE078 000DAFB8  A8 1C 2F E2 */ lha r0, 0x2fe2(r28)
/* 800DE07C 000DAFBC  7C 03 00 50 */ subf r0, r3, r0
/* 800DE080 000DAFC0  7C 00 07 35 */ extsh. r0, r0
/* 800DE084 000DAFC4  41 80 00 0C */ blt lbl_800DE090
/* 800DE088 000DAFC8  3B A0 00 F0 */ li r29, 0xf0
/* 800DE08C 000DAFCC  48 00 00 10 */ b lbl_800DE09C
lbl_800DE090:
/* 800DE090 000DAFD0  3B A0 00 F1 */ li r29, 0xf1
/* 800DE094 000DAFD4  48 00 00 08 */ b lbl_800DE09C
lbl_800DE098:
/* 800DE098 000DAFD8  3B A0 00 F0 */ li r29, 0xf0
lbl_800DE09C:
/* 800DE09C 000DAFDC  3C 60 80 39 */ lis r3, lbl_8038DF70@ha
/* 800DE0A0 000DAFE0  38 63 DF 70 */ addi r3, r3, lbl_8038DF70@l
/* 800DE0A4 000DAFE4  C0 23 00 04 */ lfs f1, 4(r3)
/* 800DE0A8 000DAFE8  A8 03 00 16 */ lha r0, 0x16(r3)
/* 800DE0AC 000DAFEC  B0 1C 30 0A */ sth r0, 0x300a(r28)
/* 800DE0B0 000DAFF0  80 1C 05 70 */ lwz r0, 0x570(r28)
/* 800DE0B4 000DAFF4  54 00 02 11 */ rlwinm. r0, r0, 0, 8, 8
/* 800DE0B8 000DAFF8  41 82 00 44 */ beq lbl_800DE0FC
/* 800DE0BC 000DAFFC  A8 1C 30 0A */ lha r0, 0x300a(r28)
/* 800DE0C0 000DB000  C8 42 92 B0 */ lfd f2, lbl_80452CB0-_SDA2_BASE_(r2)
/* 800DE0C4 000DB004  6C 00 80 00 */ xoris r0, r0, 0x8000
/* 800DE0C8 000DB008  90 01 00 34 */ stw r0, 0x34(r1)
/* 800DE0CC 000DB00C  3C 00 43 30 */ lis r0, 0x4330
/* 800DE0D0 000DB010  90 01 00 30 */ stw r0, 0x30(r1)
/* 800DE0D4 000DB014  C8 01 00 30 */ lfd f0, 0x30(r1)
/* 800DE0D8 000DB018  EC 40 10 28 */ fsubs f2, f0, f2
/* 800DE0DC 000DB01C  3C 60 80 39 */ lis r3, lbl_8038E7F4@ha
/* 800DE0E0 000DB020  38 63 E7 F4 */ addi r3, r3, lbl_8038E7F4@l
/* 800DE0E4 000DB024  C0 03 00 3C */ lfs f0, 0x3c(r3)
/* 800DE0E8 000DB028  EC 02 00 32 */ fmuls f0, f2, f0
/* 800DE0EC 000DB02C  FC 00 00 1E */ fctiwz f0, f0
/* 800DE0F0 000DB030  D8 01 00 38 */ stfd f0, 0x38(r1)
/* 800DE0F4 000DB034  80 01 00 3C */ lwz r0, 0x3c(r1)
/* 800DE0F8 000DB038  B0 1C 30 0A */ sth r0, 0x300a(r28)
lbl_800DE0FC:
/* 800DE0FC 000DB03C  7F 83 E3 78 */ mr r3, r28
/* 800DE100 000DB040  7F A4 EB 78 */ mr r4, r29
/* 800DE104 000DB044  3C A0 80 39 */ lis r5, lbl_8038DF70@ha
/* 800DE108 000DB048  38 C5 DF 70 */ addi r6, r5, lbl_8038DF70@l
/* 800DE10C 000DB04C  C0 46 00 08 */ lfs f2, 8(r6)
/* 800DE110 000DB050  A8 A6 00 00 */ lha r5, 0(r6)
/* 800DE114 000DB054  C0 66 00 0C */ lfs f3, 0xc(r6)
/* 800DE118 000DB058  4B FC EE F5 */ bl daAlink_c_NS_setSingleAnime
/* 800DE11C 000DB05C  2C 1D 00 F0 */ cmpwi r29, 0xf0
/* 800DE120 000DB060  40 82 00 18 */ bne lbl_800DE138
/* 800DE124 000DB064  38 00 80 10 */ li r0, -32752
/* 800DE128 000DB068  B0 1C 30 0C */ sth r0, 0x300c(r28)
/* 800DE12C 000DB06C  38 00 00 02 */ li r0, 2
/* 800DE130 000DB070  98 1C 2F 98 */ stb r0, 0x2f98(r28)
/* 800DE134 000DB074  48 00 00 14 */ b lbl_800DE148
lbl_800DE138:
/* 800DE138 000DB078  38 00 7F F0 */ li r0, 0x7ff0
/* 800DE13C 000DB07C  B0 1C 30 0C */ sth r0, 0x300c(r28)
/* 800DE140 000DB080  38 00 00 03 */ li r0, 3
/* 800DE144 000DB084  98 1C 2F 98 */ stb r0, 0x2f98(r28)
lbl_800DE148:
/* 800DE148 000DB088  28 1E 00 00 */ cmplwi r30, 0
/* 800DE14C 000DB08C  41 82 01 54 */ beq lbl_800DE2A0
/* 800DE150 000DB090  38 61 00 18 */ addi r3, r1, 0x18
/* 800DE154 000DB094  38 9C 04 D0 */ addi r4, r28, 0x4d0
/* 800DE158 000DB098  38 BE 04 D0 */ addi r5, r30, 0x4d0
/* 800DE15C 000DB09C  48 18 89 D9 */ bl __mi__4cXyzCFRC3Vec
/* 800DE160 000DB0A0  C0 01 00 18 */ lfs f0, 0x18(r1)
/* 800DE164 000DB0A4  D0 01 00 24 */ stfs f0, 0x24(r1)
/* 800DE168 000DB0A8  C0 01 00 1C */ lfs f0, 0x1c(r1)
/* 800DE16C 000DB0AC  D0 01 00 28 */ stfs f0, 0x28(r1)
/* 800DE170 000DB0B0  C0 01 00 20 */ lfs f0, 0x20(r1)
/* 800DE174 000DB0B4  D0 01 00 2C */ stfs f0, 0x2c(r1)
/* 800DE178 000DB0B8  7F 83 E3 78 */ mr r3, r28
/* 800DE17C 000DB0BC  7F C4 F3 78 */ mr r4, r30
/* 800DE180 000DB0C0  4B F3 C5 91 */ bl fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c
/* 800DE184 000DB0C4  B0 7C 04 E6 */ sth r3, 0x4e6(r28)
/* 800DE188 000DB0C8  C0 01 00 24 */ lfs f0, 0x24(r1)
/* 800DE18C 000DB0CC  D0 01 00 0C */ stfs f0, 0xc(r1)
/* 800DE190 000DB0D0  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800DE194 000DB0D4  D0 01 00 10 */ stfs f0, 0x10(r1)
/* 800DE198 000DB0D8  C0 01 00 2C */ lfs f0, 0x2c(r1)
/* 800DE19C 000DB0DC  D0 01 00 14 */ stfs f0, 0x14(r1)
/* 800DE1A0 000DB0E0  38 61 00 0C */ addi r3, r1, 0xc
/* 800DE1A4 000DB0E4  48 26 8F 95 */ bl PSVECSquareMag
/* 800DE1A8 000DB0E8  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800DE1AC 000DB0EC  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800DE1B0 000DB0F0  40 81 00 58 */ ble lbl_800DE208
/* 800DE1B4 000DB0F4  FC 00 08 34 */ frsqrte f0, f1
/* 800DE1B8 000DB0F8  C8 82 92 E8 */ lfd f4, lbl_80452CE8-_SDA2_BASE_(r2)
/* 800DE1BC 000DB0FC  FC 44 00 32 */ fmul f2, f4, f0
/* 800DE1C0 000DB100  C8 62 92 F0 */ lfd f3, lbl_80452CF0-_SDA2_BASE_(r2)
/* 800DE1C4 000DB104  FC 00 00 32 */ fmul f0, f0, f0
/* 800DE1C8 000DB108  FC 01 00 32 */ fmul f0, f1, f0
/* 800DE1CC 000DB10C  FC 03 00 28 */ fsub f0, f3, f0
/* 800DE1D0 000DB110  FC 02 00 32 */ fmul f0, f2, f0
/* 800DE1D4 000DB114  FC 44 00 32 */ fmul f2, f4, f0
/* 800DE1D8 000DB118  FC 00 00 32 */ fmul f0, f0, f0
/* 800DE1DC 000DB11C  FC 01 00 32 */ fmul f0, f1, f0
/* 800DE1E0 000DB120  FC 03 00 28 */ fsub f0, f3, f0
/* 800DE1E4 000DB124  FC 02 00 32 */ fmul f0, f2, f0
/* 800DE1E8 000DB128  FC 44 00 32 */ fmul f2, f4, f0
/* 800DE1EC 000DB12C  FC 00 00 32 */ fmul f0, f0, f0
/* 800DE1F0 000DB130  FC 01 00 32 */ fmul f0, f1, f0
/* 800DE1F4 000DB134  FC 03 00 28 */ fsub f0, f3, f0
/* 800DE1F8 000DB138  FC 02 00 32 */ fmul f0, f2, f0
/* 800DE1FC 000DB13C  FC 21 00 32 */ fmul f1, f1, f0
/* 800DE200 000DB140  FC 20 08 18 */ frsp f1, f1
/* 800DE204 000DB144  48 00 00 88 */ b lbl_800DE28C
lbl_800DE208:
/* 800DE208 000DB148  C8 02 92 F8 */ lfd f0, lbl_80452CF8-_SDA2_BASE_(r2)
/* 800DE20C 000DB14C  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800DE210 000DB150  40 80 00 10 */ bge lbl_800DE220
/* 800DE214 000DB154  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 800DE218 000DB158  C0 23 0A E0 */ lfs f1, lbl_80450AE0@l(r3)
/* 800DE21C 000DB15C  48 00 00 70 */ b lbl_800DE28C
lbl_800DE220:
/* 800DE220 000DB160  D0 21 00 08 */ stfs f1, 8(r1)
/* 800DE224 000DB164  80 81 00 08 */ lwz r4, 8(r1)
/* 800DE228 000DB168  54 83 00 50 */ rlwinm r3, r4, 0, 1, 8
/* 800DE22C 000DB16C  3C 00 7F 80 */ lis r0, 0x7f80
/* 800DE230 000DB170  7C 03 00 00 */ cmpw r3, r0
/* 800DE234 000DB174  41 82 00 14 */ beq lbl_800DE248
/* 800DE238 000DB178  40 80 00 40 */ bge lbl_800DE278
/* 800DE23C 000DB17C  2C 03 00 00 */ cmpwi r3, 0
/* 800DE240 000DB180  41 82 00 20 */ beq lbl_800DE260
/* 800DE244 000DB184  48 00 00 34 */ b lbl_800DE278
lbl_800DE248:
/* 800DE248 000DB188  54 80 02 7F */ clrlwi. r0, r4, 9
/* 800DE24C 000DB18C  41 82 00 0C */ beq lbl_800DE258
/* 800DE250 000DB190  38 00 00 01 */ li r0, 1
/* 800DE254 000DB194  48 00 00 28 */ b lbl_800DE27C
lbl_800DE258:
/* 800DE258 000DB198  38 00 00 02 */ li r0, 2
/* 800DE25C 000DB19C  48 00 00 20 */ b lbl_800DE27C
lbl_800DE260:
/* 800DE260 000DB1A0  54 80 02 7F */ clrlwi. r0, r4, 9
/* 800DE264 000DB1A4  41 82 00 0C */ beq lbl_800DE270
/* 800DE268 000DB1A8  38 00 00 05 */ li r0, 5
/* 800DE26C 000DB1AC  48 00 00 10 */ b lbl_800DE27C
lbl_800DE270:
/* 800DE270 000DB1B0  38 00 00 03 */ li r0, 3
/* 800DE274 000DB1B4  48 00 00 08 */ b lbl_800DE27C
lbl_800DE278:
/* 800DE278 000DB1B8  38 00 00 04 */ li r0, 4
lbl_800DE27C:
/* 800DE27C 000DB1BC  2C 00 00 01 */ cmpwi r0, 1
/* 800DE280 000DB1C0  40 82 00 0C */ bne lbl_800DE28C
/* 800DE284 000DB1C4  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 800DE288 000DB1C8  C0 23 0A E0 */ lfs f1, lbl_80450AE0@l(r3)
lbl_800DE28C:
/* 800DE28C 000DB1CC  D0 3C 34 78 */ stfs f1, 0x3478(r28)
/* 800DE290 000DB1D0  38 61 00 24 */ addi r3, r1, 0x24
/* 800DE294 000DB1D4  48 18 8E 95 */ bl atan2sX_Z__4cXyzCFv
/* 800DE298 000DB1D8  B0 7C 30 0E */ sth r3, 0x300e(r28)
/* 800DE29C 000DB1DC  48 00 00 1C */ b lbl_800DE2B8
lbl_800DE2A0:
/* 800DE2A0 000DB1E0  C0 02 93 68 */ lfs f0, lbl_80452D68-_SDA2_BASE_(r2)
/* 800DE2A4 000DB1E4  D0 1C 34 78 */ stfs f0, 0x3478(r28)
/* 800DE2A8 000DB1E8  A8 7C 04 E6 */ lha r3, 0x4e6(r28)
/* 800DE2AC 000DB1EC  3C 63 00 01 */ addis r3, r3, 1
/* 800DE2B0 000DB1F0  38 03 80 00 */ addi r0, r3, -32768
/* 800DE2B4 000DB1F4  B0 1C 30 0E */ sth r0, 0x300e(r28)
lbl_800DE2B8:
/* 800DE2B8 000DB1F8  C0 3C 34 78 */ lfs f1, 0x3478(r28)
/* 800DE2BC 000DB1FC  C0 02 93 E0 */ lfs f0, lbl_80452DE0-_SDA2_BASE_(r2)
/* 800DE2C0 000DB200  EC 41 00 28 */ fsubs f2, f1, f0
/* 800DE2C4 000DB204  A8 1C 30 0C */ lha r0, 0x300c(r28)
/* 800DE2C8 000DB208  C8 22 92 B0 */ lfd f1, lbl_80452CB0-_SDA2_BASE_(r2)
/* 800DE2CC 000DB20C  6C 00 80 00 */ xoris r0, r0, 0x8000
/* 800DE2D0 000DB210  90 01 00 3C */ stw r0, 0x3c(r1)
/* 800DE2D4 000DB214  3C 00 43 30 */ lis r0, 0x4330
/* 800DE2D8 000DB218  90 01 00 38 */ stw r0, 0x38(r1)
/* 800DE2DC 000DB21C  C8 01 00 38 */ lfd f0, 0x38(r1)
/* 800DE2E0 000DB220  EC 00 08 28 */ fsubs f0, f0, f1
/* 800DE2E4 000DB224  EC 02 00 24 */ fdivs f0, f2, f0
/* 800DE2E8 000DB228  D0 1C 34 7C */ stfs f0, 0x347c(r28)
/* 800DE2EC 000DB22C  7F 83 E3 78 */ mr r3, r28
/* 800DE2F0 000DB230  3C 80 00 01 */ lis r4, 0x00010096@ha
/* 800DE2F4 000DB234  38 84 00 96 */ addi r4, r4, 0x00010096@l
/* 800DE2F8 000DB238  81 9C 06 28 */ lwz r12, 0x628(r28)
/* 800DE2FC 000DB23C  81 8C 01 14 */ lwz r12, 0x114(r12)
/* 800DE300 000DB240  7D 89 03 A6 */ mtctr r12
/* 800DE304 000DB244  4E 80 04 21 */ bctrl
/* 800DE308 000DB248  80 1C 06 14 */ lwz r0, 0x614(r28)
/* 800DE30C 000DB24C  28 00 00 52 */ cmplwi r0, 0x52
/* 800DE310 000DB250  40 82 00 10 */ bne lbl_800DE320
/* 800DE314 000DB254  38 00 00 01 */ li r0, 1
/* 800DE318 000DB258  B0 1C 30 08 */ sth r0, 0x3008(r28)
/* 800DE31C 000DB25C  48 00 00 0C */ b lbl_800DE328
lbl_800DE320:
/* 800DE320 000DB260  38 00 00 00 */ li r0, 0
/* 800DE324 000DB264  B0 1C 30 08 */ sth r0, 0x3008(r28)
lbl_800DE328:
/* 800DE328 000DB268  7F 83 E3 78 */ mr r3, r28
/* 800DE32C 000DB26C  38 80 00 00 */ li r4, 0
/* 800DE330 000DB270  48 04 2E 91 */ bl daAlink_c_NS_setFootEffectProcType
/* 800DE334 000DB274  38 00 00 04 */ li r0, 4
/* 800DE338 000DB278  98 1C 2F 9D */ stb r0, 0x2f9d(r28)
/* 800DE33C 000DB27C  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800DE340 000DB280  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 800DE344 000DB284  80 03 5F 18 */ lwz r0, 0x5f18(r3)
/* 800DE348 000DB288  60 00 00 04 */ ori r0, r0, 4
/* 800DE34C 000DB28C  90 03 5F 18 */ stw r0, 0x5f18(r3)
/* 800DE350 000DB290  2C 1F 00 00 */ cmpwi r31, 0
/* 800DE354 000DB294  41 82 00 10 */ beq lbl_800DE364
/* 800DE358 000DB298  80 1C 05 70 */ lwz r0, 0x570(r28)
/* 800DE35C 000DB29C  60 00 00 02 */ ori r0, r0, 2
/* 800DE360 000DB2A0  90 1C 05 70 */ stw r0, 0x570(r28)
lbl_800DE364:
/* 800DE364 000DB2A4  38 60 00 01 */ li r3, 1
/* 800DE368 000DB2A8  39 61 00 50 */ addi r11, r1, 0x50
/* 800DE36C 000DB2AC  48 28 3E B9 */ bl _restgpr_28
/* 800DE370 000DB2B0  80 01 00 54 */ lwz r0, 0x54(r1)
/* 800DE374 000DB2B4  7C 08 03 A6 */ mtlr r0
/* 800DE378 000DB2B8  38 21 00 50 */ addi r1, r1, 0x50
/* 800DE37C 000DB2BC  4E 80 00 20 */ blr