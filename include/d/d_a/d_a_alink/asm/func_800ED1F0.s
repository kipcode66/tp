/* 800ED1F0 000EA130  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800ED1F4 000EA134  7C 08 02 A6 */ mflr r0
/* 800ED1F8 000EA138  90 01 00 14 */ stw r0, 0x14(r1)
/* 800ED1FC 000EA13C  93 E1 00 0C */ stw r31, 0xc(r1)
/* 800ED200 000EA140  93 C1 00 08 */ stw r30, 8(r1)
/* 800ED204 000EA144  7C 7E 1B 78 */ mr r30, r3
/* 800ED208 000EA148  3B E0 00 00 */ li r31, 0
/* 800ED20C 000EA14C  4B FF 17 DD */ bl daAlink_c_NS_checkBowAnime
/* 800ED210 000EA150  2C 03 00 00 */ cmpwi r3, 0
/* 800ED214 000EA154  40 82 00 DC */ bne lbl_800ED2F0
/* 800ED218 000EA158  A0 1E 2F E8 */ lhz r0, 0x2fe8(r30)
/* 800ED21C 000EA15C  28 00 00 4C */ cmplwi r0, 0x4c
/* 800ED220 000EA160  41 82 00 D0 */ beq lbl_800ED2F0
/* 800ED224 000EA164  28 00 00 4E */ cmplwi r0, 0x4e
/* 800ED228 000EA168  41 82 00 C8 */ beq lbl_800ED2F0
/* 800ED22C 000EA16C  28 00 00 4F */ cmplwi r0, 0x4f
/* 800ED230 000EA170  41 82 00 C0 */ beq lbl_800ED2F0
/* 800ED234 000EA174  28 00 00 50 */ cmplwi r0, 0x50
/* 800ED238 000EA178  41 82 00 B8 */ beq lbl_800ED2F0
/* 800ED23C 000EA17C  28 00 01 50 */ cmplwi r0, 0x150
/* 800ED240 000EA180  41 82 00 B0 */ beq lbl_800ED2F0
/* 800ED244 000EA184  28 00 01 48 */ cmplwi r0, 0x148
/* 800ED248 000EA188  41 82 00 A8 */ beq lbl_800ED2F0
/* 800ED24C 000EA18C  28 00 00 51 */ cmplwi r0, 0x51
/* 800ED250 000EA190  40 82 00 10 */ bne lbl_800ED260
/* 800ED254 000EA194  A8 1E 30 0C */ lha r0, 0x300c(r30)
/* 800ED258 000EA198  2C 00 00 00 */ cmpwi r0, 0
/* 800ED25C 000EA19C  40 82 00 94 */ bne lbl_800ED2F0
lbl_800ED260:
/* 800ED260 000EA1A0  7F C3 F3 78 */ mr r3, r30
/* 800ED264 000EA1A4  4B FE FB 8D */ bl daAlink_c_NS_checkUpperGuardAnime
/* 800ED268 000EA1A8  2C 03 00 00 */ cmpwi r3, 0
/* 800ED26C 000EA1AC  40 82 00 84 */ bne lbl_800ED2F0
/* 800ED270 000EA1B0  A0 1E 1F BC */ lhz r0, 0x1fbc(r30)
/* 800ED274 000EA1B4  28 00 02 45 */ cmplwi r0, 0x245
/* 800ED278 000EA1B8  41 82 00 78 */ beq lbl_800ED2F0
/* 800ED27C 000EA1BC  7F C3 F3 78 */ mr r3, r30
/* 800ED280 000EA1C0  4B FF 6A 1D */ bl daAlink_c_NS_checkGrabAnimeAndThrow
/* 800ED284 000EA1C4  2C 03 00 00 */ cmpwi r3, 0
/* 800ED288 000EA1C8  40 82 00 68 */ bne lbl_800ED2F0
/* 800ED28C 000EA1CC  7F C3 F3 78 */ mr r3, r30
/* 800ED290 000EA1D0  4B FF 32 1D */ bl daAlink_c_NS_checkBoomerangThrowAnime
/* 800ED294 000EA1D4  2C 03 00 00 */ cmpwi r3, 0
/* 800ED298 000EA1D8  40 82 00 58 */ bne lbl_800ED2F0
/* 800ED29C 000EA1DC  A0 1E 1F BC */ lhz r0, 0x1fbc(r30)
/* 800ED2A0 000EA1E0  28 00 00 52 */ cmplwi r0, 0x52
/* 800ED2A4 000EA1E4  41 82 00 4C */ beq lbl_800ED2F0
/* 800ED2A8 000EA1E8  38 60 00 00 */ li r3, 0
/* 800ED2AC 000EA1EC  28 00 01 8D */ cmplwi r0, 0x18d
/* 800ED2B0 000EA1F0  41 82 00 10 */ beq lbl_800ED2C0
/* 800ED2B4 000EA1F4  54 00 04 3E */ clrlwi r0, r0, 0x10
/* 800ED2B8 000EA1F8  28 00 01 8C */ cmplwi r0, 0x18c
/* 800ED2BC 000EA1FC  40 82 00 08 */ bne lbl_800ED2C4
lbl_800ED2C0:
/* 800ED2C0 000EA200  38 60 00 01 */ li r3, 1
lbl_800ED2C4:
/* 800ED2C4 000EA204  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800ED2C8 000EA208  40 82 00 28 */ bne lbl_800ED2F0
/* 800ED2CC 000EA20C  88 1E 2F AB */ lbz r0, 0x2fab(r30)
/* 800ED2D0 000EA210  54 00 06 F9 */ rlwinm. r0, r0, 0, 0x1b, 0x1c
/* 800ED2D4 000EA214  41 82 00 1C */ beq lbl_800ED2F0
/* 800ED2D8 000EA218  A0 1E 2F E8 */ lhz r0, 0x2fe8(r30)
/* 800ED2DC 000EA21C  28 00 00 53 */ cmplwi r0, 0x53
/* 800ED2E0 000EA220  40 82 00 14 */ bne lbl_800ED2F4
/* 800ED2E4 000EA224  A8 1E 30 0C */ lha r0, 0x300c(r30)
/* 800ED2E8 000EA228  2C 00 00 00 */ cmpwi r0, 0
/* 800ED2EC 000EA22C  41 82 00 08 */ beq lbl_800ED2F4
lbl_800ED2F0:
/* 800ED2F0 000EA230  3B E0 00 01 */ li r31, 1
lbl_800ED2F4:
/* 800ED2F4 000EA234  57 E3 06 3E */ clrlwi r3, r31, 0x18
/* 800ED2F8 000EA238  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 800ED2FC 000EA23C  83 C1 00 08 */ lwz r30, 8(r1)
/* 800ED300 000EA240  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800ED304 000EA244  7C 08 03 A6 */ mtlr r0
/* 800ED308 000EA248  38 21 00 10 */ addi r1, r1, 0x10
/* 800ED30C 000EA24C  4E 80 00 20 */ blr