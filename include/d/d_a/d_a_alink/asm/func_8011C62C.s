/* 8011C62C 0011956C  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8011C630 00119570  7C 08 02 A6 */ mflr r0
/* 8011C634 00119574  90 01 00 14 */ stw r0, 0x14(r1)
/* 8011C638 00119578  93 E1 00 0C */ stw r31, 0xc(r1)
/* 8011C63C 0011957C  93 C1 00 08 */ stw r30, 8(r1)
/* 8011C640 00119580  7C 7E 1B 78 */ mr r30, r3
/* 8011C644 00119584  3C 80 80 42 */ lis r4, lbl_80425508@ha
/* 8011C648 00119588  3B E4 55 08 */ addi r31, r4, lbl_80425508@l
/* 8011C64C 0011958C  38 80 01 52 */ li r4, 0x152
/* 8011C650 00119590  4B FA 67 55 */ bl commonProcInitNotSameProc__9daAlink_cFQ29daAlink_c12daAlink_PROC
/* 8011C654 00119594  2C 03 00 00 */ cmpwi r3, 0
/* 8011C658 00119598  40 82 00 0C */ bne lbl_8011C664
/* 8011C65C 0011959C  38 60 00 00 */ li r3, 0
/* 8011C660 001195A0  48 00 00 E8 */ b lbl_8011C748
lbl_8011C664:
/* 8011C664 001195A4  38 00 00 00 */ li r0, 0
/* 8011C668 001195A8  B0 1E 30 0E */ sth r0, 0x300e(r30)
/* 8011C66C 001195AC  80 1E 05 74 */ lwz r0, 0x574(r30)
/* 8011C670 001195B0  54 00 01 8D */ rlwinm. r0, r0, 0, 6, 6
/* 8011C674 001195B4  41 82 00 58 */ beq lbl_8011C6CC
/* 8011C678 001195B8  7F C3 F3 78 */ mr r3, r30
/* 8011C67C 001195BC  38 80 00 82 */ li r4, 0x82
/* 8011C680 001195C0  48 00 CF F9 */ bl setSingleAnimeWolfBase__9daAlink_cFQ29daAlink_c12daAlink_WANM
/* 8011C684 001195C4  7F C3 F3 78 */ mr r3, r30
/* 8011C688 001195C8  38 80 00 A0 */ li r4, 0xa0
/* 8011C68C 001195CC  4B F9 32 15 */ bl setFaceBasicTexture__9daAlink_cFQ29daAlink_c13daAlink_FTANM
/* 8011C690 001195D0  C0 1F 01 14 */ lfs f0, 0x114(r31)
/* 8011C694 001195D4  D0 1E 35 88 */ stfs f0, 0x3588(r30)
/* 8011C698 001195D8  38 7F 01 14 */ addi r3, r31, 0x114
/* 8011C69C 001195DC  C0 03 00 04 */ lfs f0, 4(r3)
/* 8011C6A0 001195E0  D0 1E 35 8C */ stfs f0, 0x358c(r30)
/* 8011C6A4 001195E4  C0 03 00 08 */ lfs f0, 8(r3)
/* 8011C6A8 001195E8  D0 1E 35 90 */ stfs f0, 0x3590(r30)
/* 8011C6AC 001195EC  7F C3 F3 78 */ mr r3, r30
/* 8011C6B0 001195F0  3C 80 00 01 */ lis r4, 0x000100BB@ha
/* 8011C6B4 001195F4  38 84 00 BB */ addi r4, r4, 0x000100BB@l
/* 8011C6B8 001195F8  81 9E 06 28 */ lwz r12, 0x628(r30)
/* 8011C6BC 001195FC  81 8C 01 14 */ lwz r12, 0x114(r12)
/* 8011C6C0 00119600  7D 89 03 A6 */ mtctr r12
/* 8011C6C4 00119604  4E 80 04 21 */ bctrl
/* 8011C6C8 00119608  48 00 00 6C */ b lbl_8011C734
lbl_8011C6CC:
/* 8011C6CC 0011960C  80 1E 06 0C */ lwz r0, 0x60c(r30)
/* 8011C6D0 00119610  2C 00 00 01 */ cmpwi r0, 1
/* 8011C6D4 00119614  40 82 00 30 */ bne lbl_8011C704
/* 8011C6D8 00119618  7F C3 F3 78 */ mr r3, r30
/* 8011C6DC 0011961C  38 80 01 9C */ li r4, 0x19c
/* 8011C6E0 00119620  4B F9 08 A1 */ bl setSingleAnimeBase__9daAlink_cFQ29daAlink_c11daAlink_ANM
/* 8011C6E4 00119624  C0 1F 00 3C */ lfs f0, 0x3c(r31)
/* 8011C6E8 00119628  D0 1E 35 88 */ stfs f0, 0x3588(r30)
/* 8011C6EC 0011962C  38 7F 00 3C */ addi r3, r31, 0x3c
/* 8011C6F0 00119630  C0 03 00 04 */ lfs f0, 4(r3)
/* 8011C6F4 00119634  D0 1E 35 8C */ stfs f0, 0x358c(r30)
/* 8011C6F8 00119638  C0 03 00 08 */ lfs f0, 8(r3)
/* 8011C6FC 0011963C  D0 1E 35 90 */ stfs f0, 0x3590(r30)
/* 8011C700 00119640  48 00 00 34 */ b lbl_8011C734
lbl_8011C704:
/* 8011C704 00119644  7F C3 F3 78 */ mr r3, r30
/* 8011C708 00119648  38 80 01 24 */ li r4, 0x124
/* 8011C70C 0011964C  4B F9 08 75 */ bl setSingleAnimeBase__9daAlink_cFQ29daAlink_c11daAlink_ANM
/* 8011C710 00119650  C0 1F 00 0C */ lfs f0, 0xc(r31)
/* 8011C714 00119654  D0 1E 35 88 */ stfs f0, 0x3588(r30)
/* 8011C718 00119658  38 7F 00 0C */ addi r3, r31, 0xc
/* 8011C71C 0011965C  C0 03 00 04 */ lfs f0, 4(r3)
/* 8011C720 00119660  D0 1E 35 8C */ stfs f0, 0x358c(r30)
/* 8011C724 00119664  C0 03 00 08 */ lfs f0, 8(r3)
/* 8011C728 00119668  D0 1E 35 90 */ stfs f0, 0x3590(r30)
/* 8011C72C 0011966C  38 00 00 01 */ li r0, 1
/* 8011C730 00119670  B0 1E 30 0E */ sth r0, 0x300e(r30)
lbl_8011C734:
/* 8011C734 00119674  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 8011C738 00119678  D0 1E 33 98 */ stfs f0, 0x3398(r30)
/* 8011C73C 0011967C  38 00 00 00 */ li r0, 0
/* 8011C740 00119680  B0 1E 30 0C */ sth r0, 0x300c(r30)
/* 8011C744 00119684  38 60 00 01 */ li r3, 1
lbl_8011C748:
/* 8011C748 00119688  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 8011C74C 0011968C  83 C1 00 08 */ lwz r30, 8(r1)
/* 8011C750 00119690  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8011C754 00119694  7C 08 03 A6 */ mtlr r0
/* 8011C758 00119698  38 21 00 10 */ addi r1, r1, 0x10
/* 8011C75C 0011969C  4E 80 00 20 */ blr