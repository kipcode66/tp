/* check__10JKRExpHeapFv __ct__10JKRExpHeapFPvUlP7JKRHeapb::check(void) */
/* missing reference */
/* 802D0190 002CD0D0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802D0194 002CD0D4  7C 08 02 A6 */	mflr r0
/* 802D0198 002CD0D8  90 01 00 24 */	stw r0, 0x24(r1)
/* 802D019C 002CD0DC  39 61 00 20 */	addi r11, r1, 0x20
/* 802D01A0 002CD0E0  48 09 20 39 */	bl _savegpr_28
/* 802D01A4 002CD0E4  7C 7C 1B 78 */	mr r28, r3
/* 802D01A8 002CD0E8  38 7C 00 18 */	addi r3, r28, 0x18
/* 802D01AC 002CD0EC  48 06 EE 95 */	bl OSLockMutex
/* 802D01B0 002CD0F0  3B E0 00 00 */	li r31, 0
/* 802D01B4 002CD0F4  3B C0 00 01 */	li r30, 1
/* 802D01B8 002CD0F8  83 BC 00 80 */	lwz r29, 0x80(r28)
/* 802D01BC 002CD0FC  48 00 00 E0 */	b lbl_802D029C
lbl_802D01C0:
/* 802D01C0 002CD100  A0 1D 00 00 */	lhz r0, 0(r29)
/* 802D01C4 002CD104  28 00 48 4D */	cmplwi r0, 0x484d
/* 802D01C8 002CD108  41 82 00 28 */	beq lbl_802D01F0
/* 802D01CC 002CD10C  3B C0 00 00 */	li r30, 0
/* 802D01D0 002CD110  54 06 06 3E */	clrlwi r6, r0, 0x18
/* 802D01D4 002CD114  54 05 C6 3E */	rlwinm r5, r0, 0x18, 0x18, 0x1f
/* 802D01D8 002CD118  3C 60 80 3A */	lis r3, lbl_8039CAF0@ha
/* 802D01DC 002CD11C  38 63 CA F0 */	addi r3, r3, lbl_8039CAF0@l
/* 802D01E0 002CD120  38 63 00 7A */	addi r3, r3, 0x7a
/* 802D01E4 002CD124  7F A4 EB 78 */	mr r4, r29
/* 802D01E8 002CD128  4C C6 31 82 */	crclr 6
/* 802D01EC 002CD12C  48 01 84 91 */	bl JUTWarningConsole_f
lbl_802D01F0:
/* 802D01F0 002CD130  80 BD 00 0C */	lwz r5, 0xc(r29)
/* 802D01F4 002CD134  28 05 00 00 */	cmplwi r5, 0
/* 802D01F8 002CD138  41 82 00 60 */	beq lbl_802D0258
/* 802D01FC 002CD13C  A0 05 00 00 */	lhz r0, 0(r5)
/* 802D0200 002CD140  28 00 48 4D */	cmplwi r0, 0x484d
/* 802D0204 002CD144  41 82 00 24 */	beq lbl_802D0228
/* 802D0208 002CD148  3B C0 00 00 */	li r30, 0
/* 802D020C 002CD14C  3C 60 80 3A */	lis r3, lbl_8039CAF0@ha
/* 802D0210 002CD150  38 63 CA F0 */	addi r3, r3, lbl_8039CAF0@l
/* 802D0214 002CD154  38 63 00 A4 */	addi r3, r3, 0xa4
/* 802D0218 002CD158  7F A4 EB 78 */	mr r4, r29
/* 802D021C 002CD15C  4C C6 31 82 */	crclr 6
/* 802D0220 002CD160  48 01 84 5D */	bl JUTWarningConsole_f
/* 802D0224 002CD164  48 00 00 80 */	b lbl_802D02A4
lbl_802D0228:
/* 802D0228 002CD168  80 05 00 08 */	lwz r0, 8(r5)
/* 802D022C 002CD16C  7C 00 E8 40 */	cmplw r0, r29
/* 802D0230 002CD170  41 82 00 50 */	beq lbl_802D0280
/* 802D0234 002CD174  3B C0 00 00 */	li r30, 0
/* 802D0238 002CD178  3C 60 80 3A */	lis r3, lbl_8039CAF0@ha
/* 802D023C 002CD17C  38 63 CA F0 */	addi r3, r3, lbl_8039CAF0@l
/* 802D0240 002CD180  38 63 00 D1 */	addi r3, r3, 0xd1
/* 802D0244 002CD184  7C A4 2B 78 */	mr r4, r5
/* 802D0248 002CD188  7C 05 03 78 */	mr r5, r0
/* 802D024C 002CD18C  4C C6 31 82 */	crclr 6
/* 802D0250 002CD190  48 01 84 2D */	bl JUTWarningConsole_f
/* 802D0254 002CD194  48 00 00 2C */	b lbl_802D0280
lbl_802D0258:
/* 802D0258 002CD198  80 BC 00 84 */	lwz r5, 0x84(r28)
/* 802D025C 002CD19C  7C 05 E8 40 */	cmplw r5, r29
/* 802D0260 002CD1A0  41 82 00 20 */	beq lbl_802D0280
/* 802D0264 002CD1A4  3B C0 00 00 */	li r30, 0
/* 802D0268 002CD1A8  3C 60 80 3A */	lis r3, lbl_8039CAF0@ha
/* 802D026C 002CD1AC  38 63 CA F0 */	addi r3, r3, lbl_8039CAF0@l
/* 802D0270 002CD1B0  38 63 00 FC */	addi r3, r3, 0xfc
/* 802D0274 002CD1B4  7F A4 EB 78 */	mr r4, r29
/* 802D0278 002CD1B8  4C C6 31 82 */	crclr 6
/* 802D027C 002CD1BC  48 01 84 01 */	bl JUTWarningConsole_f
lbl_802D0280:
/* 802D0280 002CD1C0  80 7D 00 04 */	lwz r3, 4(r29)
/* 802D0284 002CD1C4  88 1D 00 02 */	lbz r0, 2(r29)
/* 802D0288 002CD1C8  54 00 06 7E */	clrlwi r0, r0, 0x19
/* 802D028C 002CD1CC  7C 03 02 14 */	add r0, r3, r0
/* 802D0290 002CD1D0  7F E0 FA 14 */	add r31, r0, r31
/* 802D0294 002CD1D4  83 BD 00 0C */	lwz r29, 0xc(r29)
/* 802D0298 002CD1D8  3B FF 00 10 */	addi r31, r31, 0x10
lbl_802D029C:
/* 802D029C 002CD1DC  28 1D 00 00 */	cmplwi r29, 0
/* 802D02A0 002CD1E0  40 82 FF 20 */	bne lbl_802D01C0
lbl_802D02A4:
/* 802D02A4 002CD1E4  83 BC 00 78 */	lwz r29, 0x78(r28)
/* 802D02A8 002CD1E8  48 00 00 A4 */	b lbl_802D034C
lbl_802D02AC:
/* 802D02AC 002CD1EC  80 1D 00 04 */	lwz r0, 4(r29)
/* 802D02B0 002CD1F0  7F E0 FA 14 */	add r31, r0, r31
/* 802D02B4 002CD1F4  80 9D 00 0C */	lwz r4, 0xc(r29)
/* 802D02B8 002CD1F8  28 04 00 00 */	cmplwi r4, 0
/* 802D02BC 002CD1FC  3B FF 00 10 */	addi r31, r31, 0x10
/* 802D02C0 002CD200  41 82 00 60 */	beq lbl_802D0320
/* 802D02C4 002CD204  80 A4 00 08 */	lwz r5, 8(r4)
/* 802D02C8 002CD208  7C 05 E8 40 */	cmplw r5, r29
/* 802D02CC 002CD20C  41 82 00 1C */	beq lbl_802D02E8
/* 802D02D0 002CD210  3B C0 00 00 */	li r30, 0
/* 802D02D4 002CD214  3C 60 80 3A */	lis r3, lbl_8039CAF0@ha
/* 802D02D8 002CD218  38 63 CA F0 */	addi r3, r3, lbl_8039CAF0@l
/* 802D02DC 002CD21C  38 63 00 D1 */	addi r3, r3, 0xd1
/* 802D02E0 002CD220  4C C6 31 82 */	crclr 6
/* 802D02E4 002CD224  48 01 83 99 */	bl JUTWarningConsole_f
lbl_802D02E8:
/* 802D02E8 002CD228  80 BD 00 04 */	lwz r5, 4(r29)
/* 802D02EC 002CD22C  38 05 00 10 */	addi r0, r5, 0x10
/* 802D02F0 002CD230  7C 7D 02 14 */	add r3, r29, r0
/* 802D02F4 002CD234  80 1D 00 0C */	lwz r0, 0xc(r29)
/* 802D02F8 002CD238  7C 03 00 40 */	cmplw r3, r0
/* 802D02FC 002CD23C  40 81 00 4C */	ble lbl_802D0348
/* 802D0300 002CD240  3B C0 00 00 */	li r30, 0
/* 802D0304 002CD244  3C 60 80 3A */	lis r3, lbl_8039CAF0@ha
/* 802D0308 002CD248  38 63 CA F0 */	addi r3, r3, lbl_8039CAF0@l
/* 802D030C 002CD24C  38 63 01 25 */	addi r3, r3, 0x125
/* 802D0310 002CD250  7F A4 EB 78 */	mr r4, r29
/* 802D0314 002CD254  4C C6 31 82 */	crclr 6
/* 802D0318 002CD258  48 01 83 65 */	bl JUTWarningConsole_f
/* 802D031C 002CD25C  48 00 00 2C */	b lbl_802D0348
lbl_802D0320:
/* 802D0320 002CD260  80 BC 00 7C */	lwz r5, 0x7c(r28)
/* 802D0324 002CD264  7C 05 E8 40 */	cmplw r5, r29
/* 802D0328 002CD268  41 82 00 20 */	beq lbl_802D0348
/* 802D032C 002CD26C  3B C0 00 00 */	li r30, 0
/* 802D0330 002CD270  3C 60 80 3A */	lis r3, lbl_8039CAF0@ha
/* 802D0334 002CD274  38 63 CA F0 */	addi r3, r3, lbl_8039CAF0@l
/* 802D0338 002CD278  38 63 00 FC */	addi r3, r3, 0xfc
/* 802D033C 002CD27C  7F A4 EB 78 */	mr r4, r29
/* 802D0340 002CD280  4C C6 31 82 */	crclr 6
/* 802D0344 002CD284  48 01 83 39 */	bl JUTWarningConsole_f
lbl_802D0348:
/* 802D0348 002CD288  83 BD 00 0C */	lwz r29, 0xc(r29)
lbl_802D034C:
/* 802D034C 002CD28C  28 1D 00 00 */	cmplwi r29, 0
/* 802D0350 002CD290  40 82 FF 5C */	bne lbl_802D02AC
/* 802D0354 002CD294  80 9C 00 38 */	lwz r4, 0x38(r28)
/* 802D0358 002CD298  7C 1F 20 40 */	cmplw r31, r4
/* 802D035C 002CD29C  41 82 00 20 */	beq lbl_802D037C
/* 802D0360 002CD2A0  3B C0 00 00 */	li r30, 0
/* 802D0364 002CD2A4  3C 60 80 3A */	lis r3, lbl_8039CAF0@ha
/* 802D0368 002CD2A8  38 63 CA F0 */	addi r3, r3, lbl_8039CAF0@l
/* 802D036C 002CD2AC  38 63 01 4A */	addi r3, r3, 0x14a
/* 802D0370 002CD2B0  7F E5 FB 78 */	mr r5, r31
/* 802D0374 002CD2B4  4C C6 31 82 */	crclr 6
/* 802D0378 002CD2B8  48 01 83 05 */	bl JUTWarningConsole_f
lbl_802D037C:
/* 802D037C 002CD2BC  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 802D0380 002CD2C0  40 82 00 14 */	bne lbl_802D0394
/* 802D0384 002CD2C4  3C 60 80 3A */	lis r3, lbl_8039CAF0@ha
/* 802D0388 002CD2C8  38 63 CA F0 */	addi r3, r3, lbl_8039CAF0@l
/* 802D038C 002CD2CC  38 63 01 77 */	addi r3, r3, 0x177
/* 802D0390 002CD2D0  48 01 83 6D */	bl JUTWarningConsole
lbl_802D0394:
/* 802D0394 002CD2D4  38 7C 00 18 */	addi r3, r28, 0x18
/* 802D0398 002CD2D8  48 06 ED 85 */	bl OSUnlockMutex
/* 802D039C 002CD2DC  7F C3 F3 78 */	mr r3, r30
/* 802D03A0 002CD2E0  39 61 00 20 */	addi r11, r1, 0x20
/* 802D03A4 002CD2E4  48 09 1E 81 */	bl _restgpr_28
/* 802D03A8 002CD2E8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802D03AC 002CD2EC  7C 08 03 A6 */	mtlr r0
/* 802D03B0 002CD2F0  38 21 00 20 */	addi r1, r1, 0x20
/* 802D03B4 002CD2F4  4E 80 00 20 */	blr