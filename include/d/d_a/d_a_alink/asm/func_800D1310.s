/* 800D1310 000CE250  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800D1314 000CE254  7C 08 02 A6 */ mflr r0
/* 800D1318 000CE258  90 01 00 14 */ stw r0, 0x14(r1)
/* 800D131C 000CE25C  93 E1 00 0C */ stw r31, 0xc(r1)
/* 800D1320 000CE260  7C 7F 1B 78 */ mr r31, r3
/* 800D1324 000CE264  80 6D 8D E8 */ lwz r3, lbl_80451368-_SDA_BASE_(r13)
/* 800D1328 000CE268  38 63 03 D0 */ addi r3, r3, 0x3d0
/* 800D132C 000CE26C  38 80 00 00 */ li r4, 0
/* 800D1330 000CE270  48 1E 4B 55 */ bl bgmSetSwordUsing__8Z2SeqMgrFl
/* 800D1334 000CE274  80 7F 06 B8 */ lwz r3, 0x6b8(r31)
/* 800D1338 000CE278  80 1F 06 68 */ lwz r0, 0x668(r31)
/* 800D133C 000CE27C  7C 03 00 40 */ cmplw r3, r0
/* 800D1340 000CE280  41 82 00 10 */ beq lbl_800D1350
/* 800D1344 000CE284  80 1F 06 60 */ lwz r0, 0x660(r31)
/* 800D1348 000CE288  7C 03 00 40 */ cmplw r3, r0
/* 800D134C 000CE28C  40 82 00 24 */ bne lbl_800D1370
lbl_800D1350:
/* 800D1350 000CE290  80 63 00 04 */ lwz r3, 4(r3)
/* 800D1354 000CE294  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800D1358 000CE298  80 63 00 00 */ lwz r3, 0(r3)
/* 800D135C 000CE29C  80 63 00 08 */ lwz r3, 8(r3)
/* 800D1360 000CE2A0  80 03 00 0C */ lwz r0, 0xc(r3)
/* 800D1364 000CE2A4  60 00 00 01 */ ori r0, r0, 1
/* 800D1368 000CE2A8  90 03 00 0C */ stw r0, 0xc(r3)
/* 800D136C 000CE2AC  48 00 00 2C */ b lbl_800D1398
lbl_800D1370:
/* 800D1370 000CE2B0  80 9F 06 70 */ lwz r4, 0x670(r31)
/* 800D1374 000CE2B4  7C 03 20 40 */ cmplw r3, r4
/* 800D1378 000CE2B8  40 82 00 20 */ bne lbl_800D1398
/* 800D137C 000CE2BC  80 64 00 04 */ lwz r3, 4(r4)
/* 800D1380 000CE2C0  80 63 00 60 */ lwz r3, 0x60(r3)
/* 800D1384 000CE2C4  80 63 00 04 */ lwz r3, 4(r3)
/* 800D1388 000CE2C8  80 63 00 08 */ lwz r3, 8(r3)
/* 800D138C 000CE2CC  80 03 00 0C */ lwz r0, 0xc(r3)
/* 800D1390 000CE2D0  54 00 00 3C */ rlwinm r0, r0, 0, 0, 0x1e
/* 800D1394 000CE2D4  90 03 00 0C */ stw r0, 0xc(r3)
lbl_800D1398:
/* 800D1398 000CE2D8  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 800D139C 000CE2DC  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800D13A0 000CE2E0  7C 08 03 A6 */ mtlr r0
/* 800D13A4 000CE2E4  38 21 00 10 */ addi r1, r1, 0x10
/* 800D13A8 000CE2E8  4E 80 00 20 */ blr