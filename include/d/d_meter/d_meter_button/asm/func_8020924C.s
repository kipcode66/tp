/* 8020924C 0020618C  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 80209250 00206190  7C 08 02 A6 */ mflr r0
/* 80209254 00206194  90 01 00 24 */ stw r0, 0x24(r1)
/* 80209258 00206198  39 61 00 20 */ addi r11, r1, 0x20
/* 8020925C 0020619C  48 15 8F 81 */ bl _savegpr_29
/* 80209260 002061A0  7C 7D 1B 78 */ mr r29, r3
/* 80209264 002061A4  7C 9E 23 78 */ mr r30, r4
/* 80209268 002061A8  54 80 10 3A */ slwi r0, r4, 2
/* 8020926C 002061AC  7F FD 02 14 */ add r31, r29, r0
/* 80209270 002061B0  80 7F 00 78 */ lwz r3, 0x78(r31)
/* 80209274 002061B4  48 04 C5 B5 */ bl CPaneMgrAlpha_NS_getAlphaRate
/* 80209278 002061B8  C0 02 AD 48 */ lfs f0, lbl_80454748-_SDA2_BASE_(r2)
/* 8020927C 002061BC  FC 00 08 00 */ fcmpu cr0, f0, f1
/* 80209280 002061C0  41 82 00 28 */ beq lbl_802092A8
/* 80209284 002061C4  7F A3 EB 78 */ mr r3, r29
/* 80209288 002061C8  7F C4 F3 78 */ mr r4, r30
/* 8020928C 002061CC  4B FF DA E5 */ bl dMeterButton_c_NS_isFastSet
/* 80209290 002061D0  80 7F 00 78 */ lwz r3, 0x78(r31)
/* 80209294 002061D4  C0 22 AD 48 */ lfs f1, lbl_80454748-_SDA2_BASE_(r2)
/* 80209298 002061D8  48 04 C5 39 */ bl CPaneMgrAlpha_NS_setAlphaRate
/* 8020929C 002061DC  38 00 00 00 */ li r0, 0
/* 802092A0 002061E0  80 7F 00 78 */ lwz r3, 0x78(r31)
/* 802092A4 002061E4  B0 03 00 16 */ sth r0, 0x16(r3)
lbl_802092A8:
/* 802092A8 002061E8  39 61 00 20 */ addi r11, r1, 0x20
/* 802092AC 002061EC  48 15 8F 7D */ bl _restgpr_29
/* 802092B0 002061F0  80 01 00 24 */ lwz r0, 0x24(r1)
/* 802092B4 002061F4  7C 08 03 A6 */ mtlr r0
/* 802092B8 002061F8  38 21 00 20 */ addi r1, r1, 0x20
/* 802092BC 002061FC  4E 80 00 20 */ blr