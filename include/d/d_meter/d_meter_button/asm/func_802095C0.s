/* 802095C0 00206500  94 21 FF D0 */ stwu r1, -0x30(r1)
/* 802095C4 00206504  7C 08 02 A6 */ mflr r0
/* 802095C8 00206508  90 01 00 34 */ stw r0, 0x34(r1)
/* 802095CC 0020650C  39 61 00 30 */ addi r11, r1, 0x30
/* 802095D0 00206510  48 15 8B FD */ bl _savegpr_25
/* 802095D4 00206514  7C 79 1B 78 */ mr r25, r3
/* 802095D8 00206518  7C 9A 23 78 */ mr r26, r4
/* 802095DC 0020651C  7C BB 2B 78 */ mr r27, r5
/* 802095E0 00206520  7C DC 33 78 */ mr r28, r6
/* 802095E4 00206524  7C FD 3B 78 */ mr r29, r7
/* 802095E8 00206528  54 DF 06 3E */ clrlwi r31, r6, 0x18
/* 802095EC 0020652C  1C 7F 00 0F */ mulli r3, r31, 0xf
/* 802095F0 00206530  3B C3 01 14 */ addi r30, r3, 0x114
/* 802095F4 00206534  7F D9 F2 14 */ add r30, r25, r30
/* 802095F8 00206538  7F C3 F3 78 */ mr r3, r30
/* 802095FC 0020653C  48 15 F3 99 */ bl strcmp
/* 80209600 00206540  2C 03 00 00 */ cmpwi r3, 0
/* 80209604 00206544  40 82 00 18 */ bne lbl_8020961C
/* 80209608 00206548  7C 79 FA 14 */ add r3, r25, r31
/* 8020960C 0020654C  88 63 04 BE */ lbz r3, 0x4be(r3)
/* 80209610 00206550  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209614 00206554  7C 03 00 40 */ cmplw r3, r0
/* 80209618 00206558  41 82 06 04 */ beq lbl_80209C1C
lbl_8020961C:
/* 8020961C 0020655C  57 80 06 3F */ clrlwi. r0, r28, 0x18
/* 80209620 00206560  40 82 02 98 */ bne lbl_802098B8
/* 80209624 00206564  38 79 01 23 */ addi r3, r25, 0x123
/* 80209628 00206568  7F 44 D3 78 */ mr r4, r26
/* 8020962C 0020656C  48 15 F3 69 */ bl strcmp
/* 80209630 00206570  2C 03 00 00 */ cmpwi r3, 0
/* 80209634 00206574  40 82 02 84 */ bne lbl_802098B8
/* 80209638 00206578  57 60 06 3F */ clrlwi. r0, r27, 0x18
/* 8020963C 0020657C  40 82 00 10 */ bne lbl_8020964C
/* 80209640 00206580  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 80209644 00206584  28 00 00 00 */ cmplwi r0, 0
/* 80209648 00206588  41 82 01 FC */ beq lbl_80209844
lbl_8020964C:
/* 8020964C 0020658C  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209650 00206590  28 00 00 01 */ cmplwi r0, 1
/* 80209654 00206594  40 82 00 10 */ bne lbl_80209664
/* 80209658 00206598  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 8020965C 0020659C  28 00 00 01 */ cmplwi r0, 1
/* 80209660 002065A0  41 82 01 E4 */ beq lbl_80209844
lbl_80209664:
/* 80209664 002065A4  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209668 002065A8  28 00 00 02 */ cmplwi r0, 2
/* 8020966C 002065AC  40 82 00 10 */ bne lbl_8020967C
/* 80209670 002065B0  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 80209674 002065B4  28 00 00 02 */ cmplwi r0, 2
/* 80209678 002065B8  41 82 01 CC */ beq lbl_80209844
lbl_8020967C:
/* 8020967C 002065BC  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209680 002065C0  28 00 00 03 */ cmplwi r0, 3
/* 80209684 002065C4  40 82 00 10 */ bne lbl_80209694
/* 80209688 002065C8  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 8020968C 002065CC  28 00 00 03 */ cmplwi r0, 3
/* 80209690 002065D0  41 82 01 B4 */ beq lbl_80209844
lbl_80209694:
/* 80209694 002065D4  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209698 002065D8  28 00 00 04 */ cmplwi r0, 4
/* 8020969C 002065DC  40 82 00 10 */ bne lbl_802096AC
/* 802096A0 002065E0  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 802096A4 002065E4  28 00 00 04 */ cmplwi r0, 4
/* 802096A8 002065E8  41 82 01 9C */ beq lbl_80209844
lbl_802096AC:
/* 802096AC 002065EC  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 802096B0 002065F0  28 00 00 05 */ cmplwi r0, 5
/* 802096B4 002065F4  40 82 00 10 */ bne lbl_802096C4
/* 802096B8 002065F8  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 802096BC 002065FC  28 00 00 05 */ cmplwi r0, 5
/* 802096C0 00206600  41 82 01 84 */ beq lbl_80209844
lbl_802096C4:
/* 802096C4 00206604  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 802096C8 00206608  28 00 00 06 */ cmplwi r0, 6
/* 802096CC 0020660C  40 82 00 10 */ bne lbl_802096DC
/* 802096D0 00206610  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 802096D4 00206614  28 00 00 06 */ cmplwi r0, 6
/* 802096D8 00206618  41 82 01 6C */ beq lbl_80209844
lbl_802096DC:
/* 802096DC 0020661C  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 802096E0 00206620  28 00 00 07 */ cmplwi r0, 7
/* 802096E4 00206624  40 82 00 10 */ bne lbl_802096F4
/* 802096E8 00206628  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 802096EC 0020662C  28 00 00 07 */ cmplwi r0, 7
/* 802096F0 00206630  41 82 01 54 */ beq lbl_80209844
lbl_802096F4:
/* 802096F4 00206634  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 802096F8 00206638  28 00 00 08 */ cmplwi r0, 8
/* 802096FC 0020663C  40 82 00 10 */ bne lbl_8020970C
/* 80209700 00206640  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 80209704 00206644  28 00 00 08 */ cmplwi r0, 8
/* 80209708 00206648  41 82 01 3C */ beq lbl_80209844
lbl_8020970C:
/* 8020970C 0020664C  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209710 00206650  28 00 00 09 */ cmplwi r0, 9
/* 80209714 00206654  40 82 00 10 */ bne lbl_80209724
/* 80209718 00206658  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 8020971C 0020665C  28 00 00 09 */ cmplwi r0, 9
/* 80209720 00206660  41 82 01 24 */ beq lbl_80209844
lbl_80209724:
/* 80209724 00206664  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209728 00206668  28 00 00 0A */ cmplwi r0, 0xa
/* 8020972C 0020666C  40 82 00 10 */ bne lbl_8020973C
/* 80209730 00206670  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 80209734 00206674  28 00 00 0A */ cmplwi r0, 0xa
/* 80209738 00206678  41 82 01 0C */ beq lbl_80209844
lbl_8020973C:
/* 8020973C 0020667C  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209740 00206680  28 00 00 0B */ cmplwi r0, 0xb
/* 80209744 00206684  40 82 00 10 */ bne lbl_80209754
/* 80209748 00206688  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 8020974C 0020668C  28 00 00 0B */ cmplwi r0, 0xb
/* 80209750 00206690  41 82 00 F4 */ beq lbl_80209844
lbl_80209754:
/* 80209754 00206694  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209758 00206698  28 00 00 0C */ cmplwi r0, 0xc
/* 8020975C 0020669C  40 82 00 10 */ bne lbl_8020976C
/* 80209760 002066A0  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 80209764 002066A4  28 00 00 0C */ cmplwi r0, 0xc
/* 80209768 002066A8  41 82 00 DC */ beq lbl_80209844
lbl_8020976C:
/* 8020976C 002066AC  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209770 002066B0  28 00 00 0D */ cmplwi r0, 0xd
/* 80209774 002066B4  40 82 00 10 */ bne lbl_80209784
/* 80209778 002066B8  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 8020977C 002066BC  28 00 00 0D */ cmplwi r0, 0xd
/* 80209780 002066C0  41 82 00 C4 */ beq lbl_80209844
lbl_80209784:
/* 80209784 002066C4  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209788 002066C8  28 00 00 0E */ cmplwi r0, 0xe
/* 8020978C 002066CC  40 82 00 10 */ bne lbl_8020979C
/* 80209790 002066D0  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 80209794 002066D4  28 00 00 0E */ cmplwi r0, 0xe
/* 80209798 002066D8  41 82 00 AC */ beq lbl_80209844
lbl_8020979C:
/* 8020979C 002066DC  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 802097A0 002066E0  28 00 00 0F */ cmplwi r0, 0xf
/* 802097A4 002066E4  40 82 00 10 */ bne lbl_802097B4
/* 802097A8 002066E8  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 802097AC 002066EC  28 00 00 0F */ cmplwi r0, 0xf
/* 802097B0 002066F0  41 82 00 94 */ beq lbl_80209844
lbl_802097B4:
/* 802097B4 002066F4  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 802097B8 002066F8  28 00 00 10 */ cmplwi r0, 0x10
/* 802097BC 002066FC  40 82 00 10 */ bne lbl_802097CC
/* 802097C0 00206700  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 802097C4 00206704  28 00 00 10 */ cmplwi r0, 0x10
/* 802097C8 00206708  41 82 00 7C */ beq lbl_80209844
lbl_802097CC:
/* 802097CC 0020670C  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 802097D0 00206710  28 00 00 11 */ cmplwi r0, 0x11
/* 802097D4 00206714  40 82 00 10 */ bne lbl_802097E4
/* 802097D8 00206718  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 802097DC 0020671C  28 00 00 11 */ cmplwi r0, 0x11
/* 802097E0 00206720  41 82 00 64 */ beq lbl_80209844
lbl_802097E4:
/* 802097E4 00206724  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 802097E8 00206728  28 00 00 12 */ cmplwi r0, 0x12
/* 802097EC 0020672C  40 82 00 10 */ bne lbl_802097FC
/* 802097F0 00206730  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 802097F4 00206734  28 00 00 12 */ cmplwi r0, 0x12
/* 802097F8 00206738  41 82 00 4C */ beq lbl_80209844
lbl_802097FC:
/* 802097FC 0020673C  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209800 00206740  28 00 00 13 */ cmplwi r0, 0x13
/* 80209804 00206744  40 82 00 10 */ bne lbl_80209814
/* 80209808 00206748  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 8020980C 0020674C  28 00 00 13 */ cmplwi r0, 0x13
/* 80209810 00206750  41 82 00 34 */ beq lbl_80209844
lbl_80209814:
/* 80209814 00206754  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209818 00206758  28 00 00 14 */ cmplwi r0, 0x14
/* 8020981C 0020675C  40 82 00 10 */ bne lbl_8020982C
/* 80209820 00206760  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 80209824 00206764  28 00 00 14 */ cmplwi r0, 0x14
/* 80209828 00206768  41 82 00 1C */ beq lbl_80209844
lbl_8020982C:
/* 8020982C 0020676C  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209830 00206770  28 00 00 15 */ cmplwi r0, 0x15
/* 80209834 00206774  40 82 00 84 */ bne lbl_802098B8
/* 80209838 00206778  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 8020983C 0020677C  28 00 00 15 */ cmplwi r0, 0x15
/* 80209840 00206780  40 82 00 78 */ bne lbl_802098B8
lbl_80209844:
/* 80209844 00206784  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209848 00206788  28 00 00 01 */ cmplwi r0, 1
/* 8020984C 0020678C  40 82 00 10 */ bne lbl_8020985C
/* 80209850 00206790  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 80209854 00206794  28 00 00 01 */ cmplwi r0, 1
/* 80209858 00206798  41 82 04 7C */ beq lbl_80209CD4
lbl_8020985C:
/* 8020985C 0020679C  C0 19 03 00 */ lfs f0, 0x300(r25)
/* 80209860 002067A0  57 E0 10 3A */ slwi r0, r31, 2
/* 80209864 002067A4  7C D9 02 14 */ add r6, r25, r0
/* 80209868 002067A8  D0 06 02 FC */ stfs f0, 0x2fc(r6)
/* 8020986C 002067AC  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 80209870 002067B0  7C B9 FA 14 */ add r5, r25, r31
/* 80209874 002067B4  98 05 04 BE */ stb r0, 0x4be(r5)
/* 80209878 002067B8  A8 99 04 BA */ lha r4, 0x4ba(r25)
/* 8020987C 002067BC  57 E0 08 3C */ slwi r0, r31, 1
/* 80209880 002067C0  7C 79 02 14 */ add r3, r25, r0
/* 80209884 002067C4  B0 83 04 B8 */ sth r4, 0x4b8(r3)
/* 80209888 002067C8  88 19 04 BD */ lbz r0, 0x4bd(r25)
/* 8020988C 002067CC  98 05 04 BC */ stb r0, 0x4bc(r5)
/* 80209890 002067D0  C0 19 02 EC */ lfs f0, 0x2ec(r25)
/* 80209894 002067D4  D0 06 02 E8 */ stfs f0, 0x2e8(r6)
/* 80209898 002067D8  C0 19 02 A0 */ lfs f0, 0x2a0(r25)
/* 8020989C 002067DC  D0 06 02 9C */ stfs f0, 0x29c(r6)
/* 802098A0 002067E0  C0 19 02 E4 */ lfs f0, 0x2e4(r25)
/* 802098A4 002067E4  D0 06 02 E0 */ stfs f0, 0x2e0(r6)
/* 802098A8 002067E8  7F 23 CB 78 */ mr r3, r25
/* 802098AC 002067EC  88 99 04 BF */ lbz r4, 0x4bf(r25)
/* 802098B0 002067F0  48 00 10 9D */ bl dMeterButton_c_NS_hide_button
/* 802098B4 002067F4  48 00 02 C8 */ b lbl_80209B7C
lbl_802098B8:
/* 802098B8 002067F8  57 80 06 3E */ clrlwi r0, r28, 0x18
/* 802098BC 002067FC  28 00 00 01 */ cmplwi r0, 1
/* 802098C0 00206800  40 82 02 5C */ bne lbl_80209B1C
/* 802098C4 00206804  38 79 01 14 */ addi r3, r25, 0x114
/* 802098C8 00206808  7F 44 D3 78 */ mr r4, r26
/* 802098CC 0020680C  48 15 F0 C9 */ bl strcmp
/* 802098D0 00206810  2C 03 00 00 */ cmpwi r3, 0
/* 802098D4 00206814  40 82 02 48 */ bne lbl_80209B1C
/* 802098D8 00206818  57 60 06 3F */ clrlwi. r0, r27, 0x18
/* 802098DC 0020681C  40 82 00 10 */ bne lbl_802098EC
/* 802098E0 00206820  88 19 04 BE */ lbz r0, 0x4be(r25)
/* 802098E4 00206824  28 00 00 00 */ cmplwi r0, 0
/* 802098E8 00206828  41 82 01 FC */ beq lbl_80209AE4
lbl_802098EC:
/* 802098EC 0020682C  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 802098F0 00206830  28 00 00 01 */ cmplwi r0, 1
/* 802098F4 00206834  40 82 00 10 */ bne lbl_80209904
/* 802098F8 00206838  88 19 04 BE */ lbz r0, 0x4be(r25)
/* 802098FC 0020683C  28 00 00 01 */ cmplwi r0, 1
/* 80209900 00206840  41 82 01 E4 */ beq lbl_80209AE4
lbl_80209904:
/* 80209904 00206844  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209908 00206848  28 00 00 02 */ cmplwi r0, 2
/* 8020990C 0020684C  40 82 00 10 */ bne lbl_8020991C
/* 80209910 00206850  88 19 04 BE */ lbz r0, 0x4be(r25)
/* 80209914 00206854  28 00 00 02 */ cmplwi r0, 2
/* 80209918 00206858  41 82 01 CC */ beq lbl_80209AE4
lbl_8020991C:
/* 8020991C 0020685C  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209920 00206860  28 00 00 03 */ cmplwi r0, 3
/* 80209924 00206864  40 82 00 10 */ bne lbl_80209934
/* 80209928 00206868  88 19 04 BE */ lbz r0, 0x4be(r25)
/* 8020992C 0020686C  28 00 00 03 */ cmplwi r0, 3
/* 80209930 00206870  41 82 01 B4 */ beq lbl_80209AE4
lbl_80209934:
/* 80209934 00206874  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209938 00206878  28 00 00 04 */ cmplwi r0, 4
/* 8020993C 0020687C  40 82 00 10 */ bne lbl_8020994C
/* 80209940 00206880  88 19 04 BE */ lbz r0, 0x4be(r25)
/* 80209944 00206884  28 00 00 04 */ cmplwi r0, 4
/* 80209948 00206888  41 82 01 9C */ beq lbl_80209AE4
lbl_8020994C:
/* 8020994C 0020688C  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209950 00206890  28 00 00 05 */ cmplwi r0, 5
/* 80209954 00206894  40 82 00 10 */ bne lbl_80209964
/* 80209958 00206898  88 19 04 BE */ lbz r0, 0x4be(r25)
/* 8020995C 0020689C  28 00 00 05 */ cmplwi r0, 5
/* 80209960 002068A0  41 82 01 84 */ beq lbl_80209AE4
lbl_80209964:
/* 80209964 002068A4  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209968 002068A8  28 00 00 06 */ cmplwi r0, 6
/* 8020996C 002068AC  40 82 00 10 */ bne lbl_8020997C
/* 80209970 002068B0  88 19 04 BE */ lbz r0, 0x4be(r25)
/* 80209974 002068B4  28 00 00 06 */ cmplwi r0, 6
/* 80209978 002068B8  41 82 01 6C */ beq lbl_80209AE4
lbl_8020997C:
/* 8020997C 002068BC  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209980 002068C0  28 00 00 07 */ cmplwi r0, 7
/* 80209984 002068C4  40 82 00 10 */ bne lbl_80209994
/* 80209988 002068C8  88 19 04 BE */ lbz r0, 0x4be(r25)
/* 8020998C 002068CC  28 00 00 07 */ cmplwi r0, 7
/* 80209990 002068D0  41 82 01 54 */ beq lbl_80209AE4
lbl_80209994:
/* 80209994 002068D4  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209998 002068D8  28 00 00 08 */ cmplwi r0, 8
/* 8020999C 002068DC  40 82 00 10 */ bne lbl_802099AC
/* 802099A0 002068E0  88 19 04 BE */ lbz r0, 0x4be(r25)
/* 802099A4 002068E4  28 00 00 08 */ cmplwi r0, 8
/* 802099A8 002068E8  41 82 01 3C */ beq lbl_80209AE4
lbl_802099AC:
/* 802099AC 002068EC  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 802099B0 002068F0  28 00 00 09 */ cmplwi r0, 9
/* 802099B4 002068F4  40 82 00 10 */ bne lbl_802099C4
/* 802099B8 002068F8  88 19 04 BE */ lbz r0, 0x4be(r25)
/* 802099BC 002068FC  28 00 00 09 */ cmplwi r0, 9
/* 802099C0 00206900  41 82 01 24 */ beq lbl_80209AE4
lbl_802099C4:
/* 802099C4 00206904  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 802099C8 00206908  28 00 00 0A */ cmplwi r0, 0xa
/* 802099CC 0020690C  40 82 00 10 */ bne lbl_802099DC
/* 802099D0 00206910  88 19 04 BE */ lbz r0, 0x4be(r25)
/* 802099D4 00206914  28 00 00 0A */ cmplwi r0, 0xa
/* 802099D8 00206918  41 82 01 0C */ beq lbl_80209AE4
lbl_802099DC:
/* 802099DC 0020691C  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 802099E0 00206920  28 00 00 0B */ cmplwi r0, 0xb
/* 802099E4 00206924  40 82 00 10 */ bne lbl_802099F4
/* 802099E8 00206928  88 19 04 BE */ lbz r0, 0x4be(r25)
/* 802099EC 0020692C  28 00 00 0B */ cmplwi r0, 0xb
/* 802099F0 00206930  41 82 00 F4 */ beq lbl_80209AE4
lbl_802099F4:
/* 802099F4 00206934  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 802099F8 00206938  28 00 00 0C */ cmplwi r0, 0xc
/* 802099FC 0020693C  40 82 00 10 */ bne lbl_80209A0C
/* 80209A00 00206940  88 19 04 BE */ lbz r0, 0x4be(r25)
/* 80209A04 00206944  28 00 00 0C */ cmplwi r0, 0xc
/* 80209A08 00206948  41 82 00 DC */ beq lbl_80209AE4
lbl_80209A0C:
/* 80209A0C 0020694C  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209A10 00206950  28 00 00 0D */ cmplwi r0, 0xd
/* 80209A14 00206954  40 82 00 10 */ bne lbl_80209A24
/* 80209A18 00206958  88 19 04 BE */ lbz r0, 0x4be(r25)
/* 80209A1C 0020695C  28 00 00 0D */ cmplwi r0, 0xd
/* 80209A20 00206960  41 82 00 C4 */ beq lbl_80209AE4
lbl_80209A24:
/* 80209A24 00206964  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209A28 00206968  28 00 00 0E */ cmplwi r0, 0xe
/* 80209A2C 0020696C  40 82 00 10 */ bne lbl_80209A3C
/* 80209A30 00206970  88 19 04 BE */ lbz r0, 0x4be(r25)
/* 80209A34 00206974  28 00 00 0E */ cmplwi r0, 0xe
/* 80209A38 00206978  41 82 00 AC */ beq lbl_80209AE4
lbl_80209A3C:
/* 80209A3C 0020697C  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209A40 00206980  28 00 00 0F */ cmplwi r0, 0xf
/* 80209A44 00206984  40 82 00 10 */ bne lbl_80209A54
/* 80209A48 00206988  88 19 04 BE */ lbz r0, 0x4be(r25)
/* 80209A4C 0020698C  28 00 00 0F */ cmplwi r0, 0xf
/* 80209A50 00206990  41 82 00 94 */ beq lbl_80209AE4
lbl_80209A54:
/* 80209A54 00206994  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209A58 00206998  28 00 00 10 */ cmplwi r0, 0x10
/* 80209A5C 0020699C  40 82 00 10 */ bne lbl_80209A6C
/* 80209A60 002069A0  88 19 04 BE */ lbz r0, 0x4be(r25)
/* 80209A64 002069A4  28 00 00 10 */ cmplwi r0, 0x10
/* 80209A68 002069A8  41 82 00 7C */ beq lbl_80209AE4
lbl_80209A6C:
/* 80209A6C 002069AC  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209A70 002069B0  28 00 00 11 */ cmplwi r0, 0x11
/* 80209A74 002069B4  40 82 00 10 */ bne lbl_80209A84
/* 80209A78 002069B8  88 19 04 BE */ lbz r0, 0x4be(r25)
/* 80209A7C 002069BC  28 00 00 11 */ cmplwi r0, 0x11
/* 80209A80 002069C0  41 82 00 64 */ beq lbl_80209AE4
lbl_80209A84:
/* 80209A84 002069C4  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209A88 002069C8  28 00 00 12 */ cmplwi r0, 0x12
/* 80209A8C 002069CC  40 82 00 10 */ bne lbl_80209A9C
/* 80209A90 002069D0  88 19 04 BE */ lbz r0, 0x4be(r25)
/* 80209A94 002069D4  28 00 00 12 */ cmplwi r0, 0x12
/* 80209A98 002069D8  41 82 00 4C */ beq lbl_80209AE4
lbl_80209A9C:
/* 80209A9C 002069DC  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209AA0 002069E0  28 00 00 13 */ cmplwi r0, 0x13
/* 80209AA4 002069E4  40 82 00 10 */ bne lbl_80209AB4
/* 80209AA8 002069E8  88 19 04 BE */ lbz r0, 0x4be(r25)
/* 80209AAC 002069EC  28 00 00 13 */ cmplwi r0, 0x13
/* 80209AB0 002069F0  41 82 00 34 */ beq lbl_80209AE4
lbl_80209AB4:
/* 80209AB4 002069F4  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209AB8 002069F8  28 00 00 14 */ cmplwi r0, 0x14
/* 80209ABC 002069FC  40 82 00 10 */ bne lbl_80209ACC
/* 80209AC0 00206A00  88 19 04 BE */ lbz r0, 0x4be(r25)
/* 80209AC4 00206A04  28 00 00 14 */ cmplwi r0, 0x14
/* 80209AC8 00206A08  41 82 00 1C */ beq lbl_80209AE4
lbl_80209ACC:
/* 80209ACC 00206A0C  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80209AD0 00206A10  28 00 00 15 */ cmplwi r0, 0x15
/* 80209AD4 00206A14  40 82 00 48 */ bne lbl_80209B1C
/* 80209AD8 00206A18  88 19 04 BE */ lbz r0, 0x4be(r25)
/* 80209ADC 00206A1C  28 00 00 15 */ cmplwi r0, 0x15
/* 80209AE0 00206A20  40 82 00 3C */ bne lbl_80209B1C
lbl_80209AE4:
/* 80209AE4 00206A24  C0 19 02 FC */ lfs f0, 0x2fc(r25)
/* 80209AE8 00206A28  57 E0 10 3A */ slwi r0, r31, 2
/* 80209AEC 00206A2C  7C 99 02 14 */ add r4, r25, r0
/* 80209AF0 00206A30  D0 04 02 FC */ stfs f0, 0x2fc(r4)
/* 80209AF4 00206A34  88 19 04 BE */ lbz r0, 0x4be(r25)
/* 80209AF8 00206A38  7C 79 FA 14 */ add r3, r25, r31
/* 80209AFC 00206A3C  98 03 04 BE */ stb r0, 0x4be(r3)
/* 80209B00 00206A40  C0 19 02 E8 */ lfs f0, 0x2e8(r25)
/* 80209B04 00206A44  D0 04 02 E8 */ stfs f0, 0x2e8(r4)
/* 80209B08 00206A48  C0 19 02 9C */ lfs f0, 0x29c(r25)
/* 80209B0C 00206A4C  D0 04 02 9C */ stfs f0, 0x29c(r4)
/* 80209B10 00206A50  C0 19 02 E0 */ lfs f0, 0x2e0(r25)
/* 80209B14 00206A54  D0 04 02 E0 */ stfs f0, 0x2e0(r4)
/* 80209B18 00206A58  48 00 00 64 */ b lbl_80209B7C
lbl_80209B1C:
/* 80209B1C 00206A5C  7C B9 FA 14 */ add r5, r25, r31
/* 80209B20 00206A60  9B 65 04 BE */ stb r27, 0x4be(r5)
/* 80209B24 00206A64  38 80 00 00 */ li r4, 0
/* 80209B28 00206A68  57 E0 08 3C */ slwi r0, r31, 1
/* 80209B2C 00206A6C  7C 79 02 14 */ add r3, r25, r0
/* 80209B30 00206A70  B0 83 04 B8 */ sth r4, 0x4b8(r3)
/* 80209B34 00206A74  98 85 04 BC */ stb r4, 0x4bc(r5)
/* 80209B38 00206A78  C0 02 AD 48 */ lfs f0, lbl_80454748-_SDA2_BASE_(r2)
/* 80209B3C 00206A7C  57 E0 10 3A */ slwi r0, r31, 2
/* 80209B40 00206A80  7C 79 02 14 */ add r3, r25, r0
/* 80209B44 00206A84  D0 03 02 E8 */ stfs f0, 0x2e8(r3)
/* 80209B48 00206A88  38 79 01 14 */ addi r3, r25, 0x114
/* 80209B4C 00206A8C  7F 44 D3 78 */ mr r4, r26
/* 80209B50 00206A90  48 15 EE 45 */ bl strcmp
/* 80209B54 00206A94  2C 03 00 00 */ cmpwi r3, 0
/* 80209B58 00206A98  41 82 00 24 */ beq lbl_80209B7C
/* 80209B5C 00206A9C  38 79 01 23 */ addi r3, r25, 0x123
/* 80209B60 00206AA0  7F 44 D3 78 */ mr r4, r26
/* 80209B64 00206AA4  48 15 EE 31 */ bl strcmp
/* 80209B68 00206AA8  2C 03 00 00 */ cmpwi r3, 0
/* 80209B6C 00206AAC  41 82 00 10 */ beq lbl_80209B7C
/* 80209B70 00206AB0  38 00 00 01 */ li r0, 1
/* 80209B74 00206AB4  7C 79 FA 14 */ add r3, r25, r31
/* 80209B78 00206AB8  98 03 04 D7 */ stb r0, 0x4d7(r3)
lbl_80209B7C:
/* 80209B7C 00206ABC  7F 23 CB 78 */ mr r3, r25
/* 80209B80 00206AC0  7F 64 DB 78 */ mr r4, r27
/* 80209B84 00206AC4  7F 45 D3 78 */ mr r5, r26
/* 80209B88 00206AC8  57 86 06 3E */ clrlwi r6, r28, 0x18
/* 80209B8C 00206ACC  48 00 01 F1 */ bl dMeterButton_c_NS_getCenterPosCalc
/* 80209B90 00206AD0  57 80 06 3F */ clrlwi. r0, r28, 0x18
/* 80209B94 00206AD4  40 82 00 24 */ bne lbl_80209BB8
/* 80209B98 00206AD8  88 19 04 BF */ lbz r0, 0x4bf(r25)
/* 80209B9C 00206ADC  28 00 00 16 */ cmplwi r0, 0x16
/* 80209BA0 00206AE0  40 82 00 18 */ bne lbl_80209BB8
/* 80209BA4 00206AE4  C0 02 AD 48 */ lfs f0, lbl_80454748-_SDA2_BASE_(r2)
/* 80209BA8 00206AE8  57 E0 10 3A */ slwi r0, r31, 2
/* 80209BAC 00206AEC  7C 79 02 14 */ add r3, r25, r0
/* 80209BB0 00206AF0  D0 03 02 F4 */ stfs f0, 0x2f4(r3)
/* 80209BB4 00206AF4  48 00 00 68 */ b lbl_80209C1C
lbl_80209BB8:
/* 80209BB8 00206AF8  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 80209BBC 00206AFC  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 80209BC0 00206B00  88 03 5E 4B */ lbz r0, 0x5e4b(r3)
/* 80209BC4 00206B04  54 00 07 39 */ rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 80209BC8 00206B08  41 82 00 14 */ beq lbl_80209BDC
/* 80209BCC 00206B0C  C0 02 AD 48 */ lfs f0, lbl_80454748-_SDA2_BASE_(r2)
/* 80209BD0 00206B10  D0 19 02 F8 */ stfs f0, 0x2f8(r25)
/* 80209BD4 00206B14  D0 19 02 F4 */ stfs f0, 0x2f4(r25)
/* 80209BD8 00206B18  48 00 00 44 */ b lbl_80209C1C
lbl_80209BDC:
/* 80209BDC 00206B1C  3C 60 80 43 */ lis r3, lbl_8042EBC8@ha
/* 80209BE0 00206B20  38 63 EB C8 */ addi r3, r3, lbl_8042EBC8@l
/* 80209BE4 00206B24  C0 23 0E 64 */ lfs f1, 0xe64(r3)
/* 80209BE8 00206B28  C0 59 01 E4 */ lfs f2, 0x1e4(r25)
/* 80209BEC 00206B2C  C0 19 01 E8 */ lfs f0, 0x1e8(r25)
/* 80209BF0 00206B30  EC 02 00 2A */ fadds f0, f2, f0
/* 80209BF4 00206B34  EC 61 00 2A */ fadds f3, f1, f0
/* 80209BF8 00206B38  C0 22 AD 70 */ lfs f1, lbl_80454770-_SDA2_BASE_(r2)
/* 80209BFC 00206B3C  EC 01 00 B2 */ fmuls f0, f1, f2
/* 80209C00 00206B40  EC 41 00 F2 */ fmuls f2, f1, f3
/* 80209C04 00206B44  EC 00 10 28 */ fsubs f0, f0, f2
/* 80209C08 00206B48  D0 19 02 F4 */ stfs f0, 0x2f4(r25)
/* 80209C0C 00206B4C  C0 19 01 E8 */ lfs f0, 0x1e8(r25)
/* 80209C10 00206B50  EC 01 00 32 */ fmuls f0, f1, f0
/* 80209C14 00206B54  EC 02 00 28 */ fsubs f0, f2, f0
/* 80209C18 00206B58  D0 19 02 F8 */ stfs f0, 0x2f8(r25)
lbl_80209C1C:
/* 80209C1C 00206B5C  7F C3 F3 78 */ mr r3, r30
/* 80209C20 00206B60  7F 44 D3 78 */ mr r4, r26
/* 80209C24 00206B64  48 15 EF 09 */ bl strcpy
/* 80209C28 00206B68  57 80 06 3F */ clrlwi. r0, r28, 0x18
/* 80209C2C 00206B6C  40 82 00 58 */ bne lbl_80209C84
/* 80209C30 00206B70  57 A0 06 3F */ clrlwi. r0, r29, 0x18
/* 80209C34 00206B74  41 82 00 0C */ beq lbl_80209C40
/* 80209C38 00206B78  9B 99 04 D9 */ stb r28, 0x4d9(r25)
/* 80209C3C 00206B7C  48 00 00 18 */ b lbl_80209C54
lbl_80209C40:
/* 80209C40 00206B80  88 19 04 D9 */ lbz r0, 0x4d9(r25)
/* 80209C44 00206B84  28 00 00 00 */ cmplwi r0, 0
/* 80209C48 00206B88  40 82 00 0C */ bne lbl_80209C54
/* 80209C4C 00206B8C  38 00 00 FF */ li r0, 0xff
/* 80209C50 00206B90  98 19 04 D9 */ stb r0, 0x4d9(r25)
lbl_80209C54:
/* 80209C54 00206B94  3B 80 00 00 */ li r28, 0
/* 80209C58 00206B98  3B 60 00 00 */ li r27, 0
lbl_80209C5C:
/* 80209C5C 00206B9C  38 1B 00 84 */ addi r0, r27, 0x84
/* 80209C60 00206BA0  7C 79 00 2E */ lwzx r3, r25, r0
/* 80209C64 00206BA4  48 0F 69 F5 */ bl J2DTextBox_NS_getStringPtr
/* 80209C68 00206BA8  7F 44 D3 78 */ mr r4, r26
/* 80209C6C 00206BAC  48 15 EE C1 */ bl strcpy
/* 80209C70 00206BB0  3B 9C 00 01 */ addi r28, r28, 1
/* 80209C74 00206BB4  2C 1C 00 05 */ cmpwi r28, 5
/* 80209C78 00206BB8  3B 7B 00 04 */ addi r27, r27, 4
/* 80209C7C 00206BBC  41 80 FF E0 */ blt lbl_80209C5C
/* 80209C80 00206BC0  48 00 00 54 */ b lbl_80209CD4
lbl_80209C84:
/* 80209C84 00206BC4  57 A0 06 3F */ clrlwi. r0, r29, 0x18
/* 80209C88 00206BC8  41 82 00 0C */ beq lbl_80209C94
/* 80209C8C 00206BCC  9B 99 04 D9 */ stb r28, 0x4d9(r25)
/* 80209C90 00206BD0  48 00 00 18 */ b lbl_80209CA8
lbl_80209C94:
/* 80209C94 00206BD4  88 19 04 D9 */ lbz r0, 0x4d9(r25)
/* 80209C98 00206BD8  28 00 00 01 */ cmplwi r0, 1
/* 80209C9C 00206BDC  40 82 00 0C */ bne lbl_80209CA8
/* 80209CA0 00206BE0  38 00 00 FF */ li r0, 0xff
/* 80209CA4 00206BE4  98 19 04 D9 */ stb r0, 0x4d9(r25)
lbl_80209CA8:
/* 80209CA8 00206BE8  3B 80 00 00 */ li r28, 0
/* 80209CAC 00206BEC  3B 60 00 00 */ li r27, 0
lbl_80209CB0:
/* 80209CB0 00206BF0  38 1B 00 98 */ addi r0, r27, 0x98
/* 80209CB4 00206BF4  7C 79 00 2E */ lwzx r3, r25, r0
/* 80209CB8 00206BF8  48 0F 69 A1 */ bl J2DTextBox_NS_getStringPtr
/* 80209CBC 00206BFC  7F 44 D3 78 */ mr r4, r26
/* 80209CC0 00206C00  48 15 EE 6D */ bl strcpy
/* 80209CC4 00206C04  3B 9C 00 01 */ addi r28, r28, 1
/* 80209CC8 00206C08  2C 1C 00 05 */ cmpwi r28, 5
/* 80209CCC 00206C0C  3B 7B 00 04 */ addi r27, r27, 4
/* 80209CD0 00206C10  41 80 FF E0 */ blt lbl_80209CB0
lbl_80209CD4:
/* 80209CD4 00206C14  39 61 00 30 */ addi r11, r1, 0x30
/* 80209CD8 00206C18  48 15 85 41 */ bl _restgpr_25
/* 80209CDC 00206C1C  80 01 00 34 */ lwz r0, 0x34(r1)
/* 80209CE0 00206C20  7C 08 03 A6 */ mtlr r0
/* 80209CE4 00206C24  38 21 00 30 */ addi r1, r1, 0x30
/* 80209CE8 00206C28  4E 80 00 20 */ blr