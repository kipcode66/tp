/* 800CD7AC 000CA6EC  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800CD7B0 000CA6F0  7C 08 02 A6 */ mflr r0
/* 800CD7B4 000CA6F4  90 01 00 14 */ stw r0, 0x14(r1)
/* 800CD7B8 000CA6F8  93 E1 00 0C */ stw r31, 0xc(r1)
/* 800CD7BC 000CA6FC  93 C1 00 08 */ stw r30, 8(r1)
/* 800CD7C0 000CA700  7C 7F 1B 79 */ or. r31, r3, r3
/* 800CD7C4 000CA704  7C 9E 23 78 */ mr r30, r4
/* 800CD7C8 000CA708  41 82 0A 24 */ beq lbl_800CE1EC
/* 800CD7CC 000CA70C  3C 60 80 3B */ lis r3, lbl_803B32B8@ha
/* 800CD7D0 000CA710  38 03 32 B8 */ addi r0, r3, lbl_803B32B8@l
/* 800CD7D4 000CA714  90 1F 06 28 */ stw r0, 0x628(r31)
/* 800CD7D8 000CA718  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800CD7DC 000CA71C  38 A3 61 C0 */ addi r5, r3, g_dComIfG_gameInfo@l
/* 800CD7E0 000CA720  80 85 5F 18 */ lwz r4, 0x5f18(r5)
/* 800CD7E4 000CA724  3C 60 00 40 */ lis r3, 0x00400030@ha
/* 800CD7E8 000CA728  38 03 00 30 */ addi r0, r3, 0x00400030@l
/* 800CD7EC 000CA72C  7C 80 00 38 */ and r0, r4, r0
/* 800CD7F0 000CA730  90 05 5F 18 */ stw r0, 0x5f18(r5)
/* 800CD7F4 000CA734  80 85 5F 1C */ lwz r4, 0x5f1c(r5)
/* 800CD7F8 000CA738  3C 60 F8 05 */ lis r3, 0xF8048487@ha
/* 800CD7FC 000CA73C  38 03 84 87 */ addi r0, r3, 0xF8048487@l
/* 800CD800 000CA740  7C 80 00 38 */ and r0, r4, r0
/* 800CD804 000CA744  90 05 5F 1C */ stw r0, 0x5f1c(r5)
/* 800CD808 000CA748  38 7F 2C A8 */ addi r3, r31, 0x2ca8
/* 800CD80C 000CA74C  48 1F 5F 41 */ bl deleteKantera__14Z2CreatureLinkFv
/* 800CD810 000CA750  38 7F 2C A8 */ addi r3, r31, 0x2ca8
/* 800CD814 000CA754  81 9F 2C A8 */ lwz r12, 0x2ca8(r31)
/* 800CD818 000CA758  81 8C 00 08 */ lwz r12, 8(r12)
/* 800CD81C 000CA75C  7D 89 03 A6 */ mtctr r12
/* 800CD820 000CA760  4E 80 04 21 */ bctrl
/* 800CD824 000CA764  80 7F 07 6C */ lwz r3, 0x76c(r31)
/* 800CD828 000CA768  28 03 00 00 */ cmplwi r3, 0
/* 800CD82C 000CA76C  41 82 00 10 */ beq lbl_800CD83C
/* 800CD830 000CA770  48 1F 07 C9 */ bl deleteObject__14Z2SoundObjBaseFv
/* 800CD834 000CA774  38 00 00 00 */ li r0, 0
/* 800CD838 000CA778  90 1F 07 6C */ stw r0, 0x76c(r31)
lbl_800CD83C:
/* 800CD83C 000CA77C  80 1F 05 78 */ lwz r0, 0x578(r31)
/* 800CD840 000CA780  54 00 06 31 */ rlwinm. r0, r0, 0, 0x18, 0x18
/* 800CD844 000CA784  41 82 00 20 */ beq lbl_800CD864
/* 800CD848 000CA788  80 1F 05 78 */ lwz r0, 0x578(r31)
/* 800CD84C 000CA78C  54 00 06 6E */ rlwinm r0, r0, 0, 0x19, 0x17
/* 800CD850 000CA790  90 1F 05 78 */ stw r0, 0x578(r31)
/* 800CD854 000CA794  38 00 00 01 */ li r0, 1
/* 800CD858 000CA798  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800CD85C 000CA79C  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 800CD860 000CA7A0  98 03 5E B8 */ stb r0, 0x5eb8(r3)
lbl_800CD864:
/* 800CD864 000CA7A4  A0 1F 2F E8 */ lhz r0, 0x2fe8(r31)
/* 800CD868 000CA7A8  28 00 01 4F */ cmplwi r0, 0x14f
/* 800CD86C 000CA7AC  41 82 00 18 */ beq lbl_800CD884
/* 800CD870 000CA7B0  28 00 01 3D */ cmplwi r0, 0x13d
/* 800CD874 000CA7B4  40 82 00 1C */ bne lbl_800CD890
/* 800CD878 000CA7B8  A8 1F 30 0C */ lha r0, 0x300c(r31)
/* 800CD87C 000CA7BC  2C 00 00 00 */ cmpwi r0, 0
/* 800CD880 000CA7C0  41 82 00 10 */ beq lbl_800CD890
lbl_800CD884:
/* 800CD884 000CA7C4  7F E3 FB 78 */ mr r3, r31
/* 800CD888 000CA7C8  38 80 00 01 */ li r4, 1
/* 800CD88C 000CA7CC  4B FF 45 81 */ bl daAlink_c_NS_changeWarpMaterial
lbl_800CD890:
/* 800CD890 000CA7D0  38 7F 06 2C */ addi r3, r31, 0x62c
/* 800CD894 000CA7D4  80 9F 06 34 */ lwz r4, 0x634(r31)
/* 800CD898 000CA7D8  4B F5 F7 71 */ bl dComIfG_resDelete
/* 800CD89C 000CA7DC  80 7F 06 38 */ lwz r3, 0x638(r31)
/* 800CD8A0 000CA7E0  28 03 00 00 */ cmplwi r3, 0
/* 800CD8A4 000CA7E4  41 82 00 08 */ beq lbl_800CD8AC
/* 800CD8A8 000CA7E8  4B F4 19 05 */ bl mDoExt_destroyExpHeap
lbl_800CD8AC:
/* 800CD8AC 000CA7EC  38 7F 06 3C */ addi r3, r31, 0x63c
/* 800CD8B0 000CA7F0  80 9F 06 44 */ lwz r4, 0x644(r31)
/* 800CD8B4 000CA7F4  4B F5 F7 55 */ bl dComIfG_resDelete
/* 800CD8B8 000CA7F8  80 7F 06 48 */ lwz r3, 0x648(r31)
/* 800CD8BC 000CA7FC  28 03 00 00 */ cmplwi r3, 0
/* 800CD8C0 000CA800  41 82 00 08 */ beq lbl_800CD8C8
/* 800CD8C4 000CA804  4B F4 18 E9 */ bl mDoExt_destroyExpHeap
lbl_800CD8C8:
/* 800CD8C8 000CA808  38 7F 2F 5C */ addi r3, r31, 0x2f5c
/* 800CD8CC 000CA80C  48 0D A0 61 */ bl dKy_plight_cut
/* 800CD8D0 000CA810  38 00 00 00 */ li r0, 0
/* 800CD8D4 000CA814  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800CD8D8 000CA818  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 800CD8DC 000CA81C  90 03 5D AC */ stw r0, 0x5dac(r3)
/* 800CD8E0 000CA820  90 03 5D B4 */ stw r0, 0x5db4(r3)
/* 800CD8E4 000CA824  38 7F 37 B0 */ addi r3, r31, 0x37b0
/* 800CD8E8 000CA828  3C 80 80 01 */ lis r4, cXyz_NS_dtor@ha
/* 800CD8EC 000CA82C  38 84 91 84 */ addi r4, r4, cXyz_NS_dtor@l
/* 800CD8F0 000CA830  38 A0 00 0C */ li r5, 0xc
/* 800CD8F4 000CA834  38 C0 00 02 */ li r6, 2
/* 800CD8F8 000CA838  48 29 43 F1 */ bl func_80361CE8
/* 800CD8FC 000CA83C  38 7F 36 F0 */ addi r3, r31, 0x36f0
/* 800CD900 000CA840  3C 80 80 01 */ lis r4, cXyz_NS_dtor@ha
/* 800CD904 000CA844  38 84 91 84 */ addi r4, r4, cXyz_NS_dtor@l
/* 800CD908 000CA848  38 A0 00 0C */ li r5, 0xc
/* 800CD90C 000CA84C  38 C0 00 04 */ li r6, 4
/* 800CD910 000CA850  48 29 43 D9 */ bl func_80361CE8
/* 800CD914 000CA854  38 7F 36 C0 */ addi r3, r31, 0x36c0
/* 800CD918 000CA858  3C 80 80 01 */ lis r4, cXyz_NS_dtor@ha
/* 800CD91C 000CA85C  38 84 91 84 */ addi r4, r4, cXyz_NS_dtor@l
/* 800CD920 000CA860  38 A0 00 0C */ li r5, 0xc
/* 800CD924 000CA864  38 C0 00 04 */ li r6, 4
/* 800CD928 000CA868  48 29 43 C1 */ bl func_80361CE8
/* 800CD92C 000CA86C  38 7F 36 6C */ addi r3, r31, 0x366c
/* 800CD930 000CA870  3C 80 80 01 */ lis r4, cXyz_NS_dtor@ha
/* 800CD934 000CA874  38 84 91 84 */ addi r4, r4, cXyz_NS_dtor@l
/* 800CD938 000CA878  38 A0 00 0C */ li r5, 0xc
/* 800CD93C 000CA87C  38 C0 00 04 */ li r6, 4
/* 800CD940 000CA880  48 29 43 A9 */ bl func_80361CE8
/* 800CD944 000CA884  38 7F 36 3C */ addi r3, r31, 0x363c
/* 800CD948 000CA888  3C 80 80 01 */ lis r4, cXyz_NS_dtor@ha
/* 800CD94C 000CA88C  38 84 91 84 */ addi r4, r4, cXyz_NS_dtor@l
/* 800CD950 000CA890  38 A0 00 0C */ li r5, 0xc
/* 800CD954 000CA894  38 C0 00 04 */ li r6, 4
/* 800CD958 000CA898  48 29 43 91 */ bl func_80361CE8
/* 800CD95C 000CA89C  38 7F 35 4C */ addi r3, r31, 0x354c
/* 800CD960 000CA8A0  3C 80 80 01 */ lis r4, cXyz_NS_dtor@ha
/* 800CD964 000CA8A4  38 84 91 84 */ addi r4, r4, cXyz_NS_dtor@l
/* 800CD968 000CA8A8  38 A0 00 0C */ li r5, 0xc
/* 800CD96C 000CA8AC  38 C0 00 04 */ li r6, 4
/* 800CD970 000CA8B0  48 29 43 79 */ bl func_80361CE8
/* 800CD974 000CA8B4  38 7F 32 D8 */ addi r3, r31, 0x32d8
/*.global daAlink_c_NS_firePointEff_c_NS_dtor*/
/* 800CD978 000CA8B8  3C 80 80 0D */ lis r4, daAlink_c_NS_firePointEff_c_NS_dtor@ha
/*.global daAlink_c_NS_firePointEff_c_NS_dtor*/
/* 800CD97C 000CA8BC  38 84 FC 3C */ addi r4, r4, daAlink_c_NS_firePointEff_c_NS_dtor@l
/* 800CD980 000CA8C0  38 A0 00 30 */ li r5, 0x30
/* 800CD984 000CA8C4  38 C0 00 04 */ li r6, 4
/* 800CD988 000CA8C8  48 29 43 61 */ bl func_80361CE8
/* 800CD98C 000CA8CC  38 7F 31 42 */ addi r3, r31, 0x3142
/*.global csXyz_NS_dtor*/
/* 800CD990 000CA8D0  3C 80 80 02 */ lis r4, csXyz_NS_dtor@ha
/*.global csXyz_NS_dtor*/
/* 800CD994 000CA8D4  38 84 8B D0 */ addi r4, r4, csXyz_NS_dtor@l
/* 800CD998 000CA8D8  38 A0 00 06 */ li r5, 6
/* 800CD99C 000CA8DC  38 C0 00 04 */ li r6, 4
/* 800CD9A0 000CA8E0  48 29 43 49 */ bl func_80361CE8
/* 800CD9A4 000CA8E4  38 7F 31 36 */ addi r3, r31, 0x3136
/*.global csXyz_NS_dtor*/
/* 800CD9A8 000CA8E8  3C 80 80 02 */ lis r4, csXyz_NS_dtor@ha
/*.global csXyz_NS_dtor*/
/* 800CD9AC 000CA8EC  38 84 8B D0 */ addi r4, r4, csXyz_NS_dtor@l
/* 800CD9B0 000CA8F0  38 A0 00 06 */ li r5, 6
/* 800CD9B4 000CA8F4  38 C0 00 02 */ li r6, 2
/* 800CD9B8 000CA8F8  48 29 43 31 */ bl func_80361CE8
/* 800CD9BC 000CA8FC  38 7F 31 2A */ addi r3, r31, 0x312a
/*.global csXyz_NS_dtor*/
/* 800CD9C0 000CA900  3C 80 80 02 */ lis r4, csXyz_NS_dtor@ha
/*.global csXyz_NS_dtor*/
/* 800CD9C4 000CA904  38 84 8B D0 */ addi r4, r4, csXyz_NS_dtor@l
/* 800CD9C8 000CA908  38 A0 00 06 */ li r5, 6
/* 800CD9CC 000CA90C  38 C0 00 02 */ li r6, 2
/* 800CD9D0 000CA910  48 29 43 19 */ bl func_80361CE8
/* 800CD9D4 000CA914  34 1F 2F 38 */ addic. r0, r31, 0x2f38
/* 800CD9D8 000CA918  41 82 00 44 */ beq lbl_800CDA1C
/* 800CD9DC 000CA91C  3C 60 80 3B */ lis r3, lbl_803A83A0@ha
/* 800CD9E0 000CA920  38 03 83 A0 */ addi r0, r3, lbl_803A83A0@l
/* 800CD9E4 000CA924  90 1F 2F 38 */ stw r0, 0x2f38(r31)
/* 800CD9E8 000CA928  34 1F 2F 38 */ addic. r0, r31, 0x2f38
/* 800CD9EC 000CA92C  41 82 00 30 */ beq lbl_800CDA1C
/* 800CD9F0 000CA930  3C 60 80 3B */ lis r3, lbl_803A8554@ha
/* 800CD9F4 000CA934  38 03 85 54 */ addi r0, r3, lbl_803A8554@l
/* 800CD9F8 000CA938  90 1F 2F 38 */ stw r0, 0x2f38(r31)
/* 800CD9FC 000CA93C  38 7F 2F 38 */ addi r3, r31, 0x2f38
/* 800CDA00 000CA940  81 9F 2F 38 */ lwz r12, 0x2f38(r31)
/* 800CDA04 000CA944  81 8C 00 20 */ lwz r12, 0x20(r12)
/* 800CDA08 000CA948  7D 89 03 A6 */ mtctr r12
/* 800CDA0C 000CA94C  4E 80 04 21 */ bctrl
/* 800CDA10 000CA950  38 7F 2F 38 */ addi r3, r31, 0x2f38
/* 800CDA14 000CA954  38 80 00 00 */ li r4, 0
/* 800CDA18 000CA958  48 1B 0C 8D */ bl JPAEmitterCallBack_NS_dtor
lbl_800CDA1C:
/* 800CDA1C 000CA95C  34 1F 2F 20 */ addic. r0, r31, 0x2f20
/* 800CDA20 000CA960  41 82 00 44 */ beq lbl_800CDA64
/* 800CDA24 000CA964  3C 60 80 3B */ lis r3, lbl_803A83A0@ha
/* 800CDA28 000CA968  38 03 83 A0 */ addi r0, r3, lbl_803A83A0@l
/* 800CDA2C 000CA96C  90 1F 2F 20 */ stw r0, 0x2f20(r31)
/* 800CDA30 000CA970  34 1F 2F 20 */ addic. r0, r31, 0x2f20
/* 800CDA34 000CA974  41 82 00 30 */ beq lbl_800CDA64
/* 800CDA38 000CA978  3C 60 80 3B */ lis r3, lbl_803A8554@ha
/* 800CDA3C 000CA97C  38 03 85 54 */ addi r0, r3, lbl_803A8554@l
/* 800CDA40 000CA980  90 1F 2F 20 */ stw r0, 0x2f20(r31)
/* 800CDA44 000CA984  38 7F 2F 20 */ addi r3, r31, 0x2f20
/* 800CDA48 000CA988  81 9F 2F 20 */ lwz r12, 0x2f20(r31)
/* 800CDA4C 000CA98C  81 8C 00 20 */ lwz r12, 0x20(r12)
/* 800CDA50 000CA990  7D 89 03 A6 */ mtctr r12
/* 800CDA54 000CA994  4E 80 04 21 */ bctrl
/* 800CDA58 000CA998  38 7F 2F 20 */ addi r3, r31, 0x2f20
/* 800CDA5C 000CA99C  38 80 00 00 */ li r4, 0
/* 800CDA60 000CA9A0  48 1B 0C 45 */ bl JPAEmitterCallBack_NS_dtor
lbl_800CDA64:
/* 800CDA64 000CA9A4  34 1F 2D 84 */ addic. r0, r31, 0x2d84
/* 800CDA68 000CA9A8  41 82 00 4C */ beq lbl_800CDAB4
/* 800CDA6C 000CA9AC  34 7F 2D 8C */ addic. r3, r31, 0x2d8c
/* 800CDA70 000CA9B0  41 82 00 08 */ beq lbl_800CDA78
/* 800CDA74 000CA9B4  48 1D 47 11 */ bl releaseSound__14JAISoundHandleFv
lbl_800CDA78:
/* 800CDA78 000CA9B8  34 7F 2D 88 */ addic. r3, r31, 0x2d88
/* 800CDA7C 000CA9BC  41 82 00 08 */ beq lbl_800CDA84
/* 800CDA80 000CA9C0  48 1D 47 05 */ bl releaseSound__14JAISoundHandleFv
lbl_800CDA84:
/* 800CDA84 000CA9C4  34 1F 2D 84 */ addic. r0, r31, 0x2d84
/* 800CDA88 000CA9C8  41 82 00 0C */ beq lbl_800CDA94
/* 800CDA8C 000CA9CC  38 7F 2D 84 */ addi r3, r31, 0x2d84
/* 800CDA90 000CA9D0  48 1D 46 F5 */ bl releaseSound__14JAISoundHandleFv
lbl_800CDA94:
/* 800CDA94 000CA9D4  34 1F 2D 84 */ addic. r0, r31, 0x2d84
/* 800CDA98 000CA9D8  41 82 00 1C */ beq lbl_800CDAB4
/* 800CDA9C 000CA9DC  80 6D 85 B8 */ lwz r3, lbl_80450B38-_SDA_BASE_(r13)
/* 800CDAA0 000CA9E0  38 1F 2D 84 */ addi r0, r31, 0x2d84
/* 800CDAA4 000CA9E4  7C 03 00 40 */ cmplw r3, r0
/* 800CDAA8 000CA9E8  40 82 00 0C */ bne lbl_800CDAB4
/* 800CDAAC 000CA9EC  38 00 00 00 */ li r0, 0
/* 800CDAB0 000CA9F0  90 0D 85 B8 */ stw r0, lbl_80450B38-_SDA_BASE_(r13)
lbl_800CDAB4:
/* 800CDAB4 000CA9F4  38 7F 2C A8 */ addi r3, r31, 0x2ca8
/* 800CDAB8 000CA9F8  38 80 FF FF */ li r4, -1
/* 800CDABC 000CA9FC  48 1F 5A 45 */ bl __dt__14Z2CreatureLinkFv
/* 800CDAC0 000CAA00  38 7F 2A 4C */ addi r3, r31, 0x2a4c
/*.global daAlink_footData_c_NS_dtor*/
/* 800CDAC4 000CAA04  3C 80 80 0D */ lis r4, daAlink_footData_c_NS_dtor@ha
/*.global daAlink_footData_c_NS_dtor*/
/* 800CDAC8 000CAA08  38 84 FC B8 */ addi r4, r4, daAlink_footData_c_NS_dtor@l
/* 800CDACC 000CAA0C  38 A0 00 A4 */ li r5, 0xa4
/* 800CDAD0 000CAA10  38 C0 00 02 */ li r6, 2
/* 800CDAD4 000CAA14  48 29 42 15 */ bl func_80361CE8
/* 800CDAD8 000CAA18  38 7F 29 04 */ addi r3, r31, 0x2904
/*.global daAlink_footData_c_NS_dtor*/
/* 800CDADC 000CAA1C  3C 80 80 0D */ lis r4, daAlink_footData_c_NS_dtor@ha
/*.global daAlink_footData_c_NS_dtor*/
/* 800CDAE0 000CAA20  38 84 FC B8 */ addi r4, r4, daAlink_footData_c_NS_dtor@l
/* 800CDAE4 000CAA24  38 A0 00 A4 */ li r5, 0xa4
/* 800CDAE8 000CAA28  38 C0 00 02 */ li r6, 2
/* 800CDAEC 000CAA2C  48 29 41 FD */ bl func_80361CE8
/* 800CDAF0 000CAA30  38 7F 28 64 */ addi r3, r31, 0x2864
/* 800CDAF4 000CAA34  38 80 FF FF */ li r4, -1
/* 800CDAF8 000CAA38  48 17 C4 51 */ bl dMsgFlow_c_NS_dtor
/* 800CDAFC 000CAA3C  34 1F 27 C8 */ addic. r0, r31, 0x27c8
/* 800CDB00 000CAA40  41 82 00 1C */ beq lbl_800CDB1C
/* 800CDB04 000CAA44  3C 60 80 3B */ lis r3, lbl_803B35B4@ha
/* 800CDB08 000CAA48  38 03 35 B4 */ addi r0, r3, lbl_803B35B4@l
/* 800CDB0C 000CAA4C  90 1F 27 C8 */ stw r0, 0x27c8(r31)
/* 800CDB10 000CAA50  38 7F 27 C8 */ addi r3, r31, 0x27c8
/* 800CDB14 000CAA54  38 80 00 00 */ li r4, 0
/* 800CDB18 000CAA58  48 1B 14 8D */ bl JPAParticleCallBack_NS_dtor
lbl_800CDB1C:
/* 800CDB1C 000CAA5C  34 1F 21 F0 */ addic. r0, r31, 0x21f0
/* 800CDB20 000CAA60  41 82 00 54 */ beq lbl_800CDB74
/* 800CDB24 000CAA64  3C 60 80 3B */ lis r3, lbl_803B35A0@ha
/* 800CDB28 000CAA68  38 03 35 A0 */ addi r0, r3, lbl_803B35A0@l
/* 800CDB2C 000CAA6C  90 1F 21 F0 */ stw r0, 0x21f0(r31)
/* 800CDB30 000CAA70  38 7F 24 F8 */ addi r3, r31, 0x24f8
/* 800CDB34 000CAA74  3C 80 80 01 */ lis r4, cXyz_NS_dtor@ha
/* 800CDB38 000CAA78  38 84 91 84 */ addi r4, r4, cXyz_NS_dtor@l
/* 800CDB3C 000CAA7C  38 A0 00 0C */ li r5, 0xc
/* 800CDB40 000CAA80  38 C0 00 3C */ li r6, 0x3c
/* 800CDB44 000CAA84  48 29 41 A5 */ bl func_80361CE8
/* 800CDB48 000CAA88  38 7F 22 28 */ addi r3, r31, 0x2228
/* 800CDB4C 000CAA8C  3C 80 80 01 */ lis r4, cXyz_NS_dtor@ha
/* 800CDB50 000CAA90  38 84 91 84 */ addi r4, r4, cXyz_NS_dtor@l
/* 800CDB54 000CAA94  38 A0 00 0C */ li r5, 0xc
/* 800CDB58 000CAA98  38 C0 00 3C */ li r6, 0x3c
/* 800CDB5C 000CAA9C  48 29 41 8D */ bl func_80361CE8
/* 800CDB60 000CAAA0  34 1F 21 F0 */ addic. r0, r31, 0x21f0
/* 800CDB64 000CAAA4  41 82 00 10 */ beq lbl_800CDB74
/* 800CDB68 000CAAA8  3C 60 80 3D */ lis r3, lbl_803CD97C@ha
/* 800CDB6C 000CAAAC  38 03 D9 7C */ addi r0, r3, lbl_803CD97C@l
/* 800CDB70 000CAAB0  90 1F 21 F0 */ stw r0, 0x21f0(r31)
lbl_800CDB74:
/* 800CDB74 000CAAB4  38 7F 21 D8 */ addi r3, r31, 0x21d8
/* 800CDB78 000CAAB8  38 80 FF FF */ li r4, -1
/* 800CDB7C 000CAABC  48 09 11 D5 */ bl daPy_anmHeap_c_NS_dtor
/* 800CDB80 000CAAC0  38 7F 21 B0 */ addi r3, r31, 0x21b0
/* 800CDB84 000CAAC4  3C 80 80 16 */ lis r4, daPy_anmHeap_c_NS_dtor@ha
/* 800CDB88 000CAAC8  38 84 ED 50 */ addi r4, r4, daPy_anmHeap_c_NS_dtor@l
/* 800CDB8C 000CAACC  38 A0 00 14 */ li r5, 0x14
/* 800CDB90 000CAAD0  38 C0 00 02 */ li r6, 2
/* 800CDB94 000CAAD4  48 29 41 55 */ bl func_80361CE8
/* 800CDB98 000CAAD8  34 1F 21 9C */ addic. r0, r31, 0x219c
/* 800CDB9C 000CAADC  41 82 00 18 */ beq lbl_800CDBB4
/* 800CDBA0 000CAAE0  3C 60 80 3B */ lis r3, lbl_803B2E80@ha
/* 800CDBA4 000CAAE4  38 03 2E 80 */ addi r0, r3, lbl_803B2E80@l
/* 800CDBA8 000CAAE8  90 1F 21 9C */ stw r0, 0x219c(r31)
/* 800CDBAC 000CAAEC  38 7F 21 9C */ addi r3, r31, 0x219c
/* 800CDBB0 000CAAF0  4B FC EE 79 */ bl dEyeHL_c_NS_remove
lbl_800CDBB4:
/* 800CDBB4 000CAAF4  34 1F 21 88 */ addic. r0, r31, 0x2188
/* 800CDBB8 000CAAF8  41 82 00 18 */ beq lbl_800CDBD0
/* 800CDBBC 000CAAFC  3C 60 80 3B */ lis r3, lbl_803B2E80@ha
/* 800CDBC0 000CAB00  38 03 2E 80 */ addi r0, r3, lbl_803B2E80@l
/* 800CDBC4 000CAB04  90 1F 21 88 */ stw r0, 0x2188(r31)
/* 800CDBC8 000CAB08  38 7F 21 88 */ addi r3, r31, 0x2188
/* 800CDBCC 000CAB0C  4B FC EE 5D */ bl dEyeHL_c_NS_remove
lbl_800CDBD0:
/* 800CDBD0 000CAB10  34 1F 21 64 */ addic. r0, r31, 0x2164
/* 800CDBD4 000CAB14  41 82 00 20 */ beq lbl_800CDBF4
/* 800CDBD8 000CAB18  34 1F 21 64 */ addic. r0, r31, 0x2164
/* 800CDBDC 000CAB1C  41 82 00 18 */ beq lbl_800CDBF4
/* 800CDBE0 000CAB20  34 1F 21 64 */ addic. r0, r31, 0x2164
/* 800CDBE4 000CAB24  41 82 00 10 */ beq lbl_800CDBF4
/* 800CDBE8 000CAB28  3C 60 80 3A */ lis r3, lbl_803A3354@ha
/* 800CDBEC 000CAB2C  38 03 33 54 */ addi r0, r3, lbl_803A3354@l
/* 800CDBF0 000CAB30  90 1F 21 64 */ stw r0, 0x2164(r31)
lbl_800CDBF4:
/* 800CDBF4 000CAB34  38 7F 21 40 */ addi r3, r31, 0x2140
/* 800CDBF8 000CAB38  38 80 FF FF */ li r4, -1
/* 800CDBFC 000CAB3C  48 09 11 55 */ bl daPy_anmHeap_c_NS_dtor
/* 800CDC00 000CAB40  38 7F 21 2C */ addi r3, r31, 0x212c
/* 800CDC04 000CAB44  38 80 FF FF */ li r4, -1
/* 800CDC08 000CAB48  48 09 11 49 */ bl daPy_anmHeap_c_NS_dtor
/* 800CDC0C 000CAB4C  38 7F 21 18 */ addi r3, r31, 0x2118
/* 800CDC10 000CAB50  38 80 FF FF */ li r4, -1
/* 800CDC14 000CAB54  48 09 11 3D */ bl daPy_anmHeap_c_NS_dtor
/* 800CDC18 000CAB58  38 7F 21 04 */ addi r3, r31, 0x2104
/* 800CDC1C 000CAB5C  38 80 FF FF */ li r4, -1
/* 800CDC20 000CAB60  48 09 11 31 */ bl daPy_anmHeap_c_NS_dtor
/* 800CDC24 000CAB64  38 7F 20 F0 */ addi r3, r31, 0x20f0
/* 800CDC28 000CAB68  38 80 FF FF */ li r4, -1
/* 800CDC2C 000CAB6C  48 09 11 25 */ bl daPy_anmHeap_c_NS_dtor
/* 800CDC30 000CAB70  34 1F 20 64 */ addic. r0, r31, 0x2064
/* 800CDC34 000CAB74  41 82 00 38 */ beq lbl_800CDC6C
/* 800CDC38 000CAB78  3C 60 80 3B */ lis r3, lbl_803B3580@ha
/* 800CDC3C 000CAB7C  38 03 35 80 */ addi r0, r3, lbl_803B3580@l
/* 800CDC40 000CAB80  90 1F 20 64 */ stw r0, 0x2064(r31)
/* 800CDC44 000CAB84  34 1F 20 B4 */ addic. r0, r31, 0x20b4
/* 800CDC48 000CAB88  41 82 00 10 */ beq lbl_800CDC58
/* 800CDC4C 000CAB8C  3C 60 80 3B */ lis r3, lbl_803B3590@ha
/* 800CDC50 000CAB90  38 03 35 90 */ addi r0, r3, lbl_803B3590@l
/* 800CDC54 000CAB94  90 1F 20 B4 */ stw r0, 0x20b4(r31)
lbl_800CDC58:
/* 800CDC58 000CAB98  34 1F 20 64 */ addic. r0, r31, 0x2064
/* 800CDC5C 000CAB9C  41 82 00 10 */ beq lbl_800CDC6C
/* 800CDC60 000CABA0  3C 60 80 3C */ lis r3, lbl_803BA14C@ha
/* 800CDC64 000CABA4  38 03 A1 4C */ addi r0, r3, lbl_803BA14C@l
/* 800CDC68 000CABA8  90 1F 20 64 */ stw r0, 0x2064(r31)
lbl_800CDC6C:
/* 800CDC6C 000CABAC  38 7F 20 18 */ addi r3, r31, 0x2018
/*.global daPy_frameCtrl_c_NS_dtor*/
/* 800CDC70 000CABB0  3C 80 80 14 */ lis r4, daPy_frameCtrl_c_NS_dtor@ha
/*.global daPy_frameCtrl_c_NS_dtor*/
/* 800CDC74 000CABB4  38 84 0D 24 */ addi r4, r4, daPy_frameCtrl_c_NS_dtor@l
/* 800CDC78 000CABB8  38 A0 00 18 */ li r5, 0x18
/* 800CDC7C 000CABBC  38 C0 00 03 */ li r6, 3
/* 800CDC80 000CABC0  48 29 40 69 */ bl func_80361CE8
/* 800CDC84 000CABC4  38 7F 1F D0 */ addi r3, r31, 0x1fd0
/*.global daPy_frameCtrl_c_NS_dtor*/
/* 800CDC88 000CABC8  3C 80 80 14 */ lis r4, daPy_frameCtrl_c_NS_dtor@ha
/*.global daPy_frameCtrl_c_NS_dtor*/
/* 800CDC8C 000CABCC  38 84 0D 24 */ addi r4, r4, daPy_frameCtrl_c_NS_dtor@l
/* 800CDC90 000CABD0  38 A0 00 18 */ li r5, 0x18
/* 800CDC94 000CABD4  38 C0 00 03 */ li r6, 3
/* 800CDC98 000CABD8  48 29 40 51 */ bl func_80361CE8
/* 800CDC9C 000CABDC  38 7F 1F 94 */ addi r3, r31, 0x1f94
/* 800CDCA0 000CABE0  3C 80 80 16 */ lis r4, daPy_anmHeap_c_NS_dtor@ha
/* 800CDCA4 000CABE4  38 84 ED 50 */ addi r4, r4, daPy_anmHeap_c_NS_dtor@l
/* 800CDCA8 000CABE8  38 A0 00 14 */ li r5, 0x14
/* 800CDCAC 000CABEC  38 C0 00 03 */ li r6, 3
/* 800CDCB0 000CABF0  48 29 40 39 */ bl func_80361CE8
/* 800CDCB4 000CABF4  38 7F 1F 58 */ addi r3, r31, 0x1f58
/* 800CDCB8 000CABF8  3C 80 80 16 */ lis r4, daPy_anmHeap_c_NS_dtor@ha
/* 800CDCBC 000CABFC  38 84 ED 50 */ addi r4, r4, daPy_anmHeap_c_NS_dtor@l
/* 800CDCC0 000CAC00  38 A0 00 14 */ li r5, 0x14
/* 800CDCC4 000CAC04  38 C0 00 03 */ li r6, 3
/* 800CDCC8 000CAC08  48 29 40 21 */ bl func_80361CE8
/* 800CDCCC 000CAC0C  38 7F 1F 40 */ addi r3, r31, 0x1f40
/*.global mDoExt_AnmRatioPack_NS_dtor*/
/* 800CDCD0 000CAC10  3C 80 80 14 */ lis r4, mDoExt_AnmRatioPack_NS_dtor@ha
/*.global mDoExt_AnmRatioPack_NS_dtor*/
/* 800CDCD4 000CAC14  38 84 0D F0 */ addi r4, r4, mDoExt_AnmRatioPack_NS_dtor@l
/* 800CDCD8 000CAC18  38 A0 00 08 */ li r5, 8
/* 800CDCDC 000CAC1C  38 C0 00 03 */ li r6, 3
/* 800CDCE0 000CAC20  48 29 40 09 */ bl func_80361CE8
/* 800CDCE4 000CAC24  38 7F 1F 28 */ addi r3, r31, 0x1f28
/*.global mDoExt_AnmRatioPack_NS_dtor*/
/* 800CDCE8 000CAC28  3C 80 80 14 */ lis r4, mDoExt_AnmRatioPack_NS_dtor@ha
/*.global mDoExt_AnmRatioPack_NS_dtor*/
/* 800CDCEC 000CAC2C  38 84 0D F0 */ addi r4, r4, mDoExt_AnmRatioPack_NS_dtor@l
/* 800CDCF0 000CAC30  38 A0 00 08 */ li r5, 8
/* 800CDCF4 000CAC34  38 C0 00 03 */ li r6, 3
/* 800CDCF8 000CAC38  48 29 3F F1 */ bl func_80361CE8
/* 800CDCFC 000CAC3C  34 1F 1E CC */ addic. r0, r31, 0x1ecc
/* 800CDD00 000CAC40  41 82 00 34 */ beq lbl_800CDD34
/* 800CDD04 000CAC44  3C 60 80 3A */ lis r3, lbl_803A382C@ha
/* 800CDD08 000CAC48  38 63 38 2C */ addi r3, r3, lbl_803A382C@l
/* 800CDD0C 000CAC4C  90 7F 1E DC */ stw r3, 0x1edc(r31)
/* 800CDD10 000CAC50  38 03 00 0C */ addi r0, r3, 0xc
/* 800CDD14 000CAC54  90 1F 1E EC */ stw r0, 0x1eec(r31)
/* 800CDD18 000CAC58  38 03 00 18 */ addi r0, r3, 0x18
/* 800CDD1C 000CAC5C  90 1F 1F 08 */ stw r0, 0x1f08(r31)
/* 800CDD20 000CAC60  38 03 00 24 */ addi r0, r3, 0x24
/* 800CDD24 000CAC64  90 1F 1F 18 */ stw r0, 0x1f18(r31)
/* 800CDD28 000CAC68  38 7F 1E CC */ addi r3, r31, 0x1ecc
/* 800CDD2C 000CAC6C  38 80 00 00 */ li r4, 0
/* 800CDD30 000CAC70  4B FA 98 C1 */ bl dBgS_GndChk_NS_dtor
lbl_800CDD34:
/* 800CDD34 000CAC74  38 7F 1E 5C */ addi r3, r31, 0x1e5c
/* 800CDD38 000CAC78  38 80 FF FF */ li r4, -1
/* 800CDD3C 000CAC7C  4B FA A2 7D */ bl dBgS_ObjLinChk_NS_dtor
/* 800CDD40 000CAC80  38 7F 1E 4C */ addi r3, r31, 0x1e4c
/* 800CDD44 000CAC84  38 80 FF FF */ li r4, -1
/* 800CDD48 000CAC88  48 19 A3 69 */ bl __dt__13cBgS_PolyInfoFv
/* 800CDD4C 000CAC8C  38 7F 1E 3C */ addi r3, r31, 0x1e3c
/* 800CDD50 000CAC90  38 80 FF FF */ li r4, -1
/* 800CDD54 000CAC94  48 19 A3 5D */ bl __dt__13cBgS_PolyInfoFv
/* 800CDD58 000CAC98  38 7F 1E 2C */ addi r3, r31, 0x1e2c
/* 800CDD5C 000CAC9C  38 80 FF FF */ li r4, -1
/* 800CDD60 000CACA0  48 19 A3 51 */ bl __dt__13cBgS_PolyInfoFv
/* 800CDD64 000CACA4  38 7F 1E 1C */ addi r3, r31, 0x1e1c
/* 800CDD68 000CACA8  38 80 FF FF */ li r4, -1
/* 800CDD6C 000CACAC  48 19 A3 45 */ bl __dt__13cBgS_PolyInfoFv
/* 800CDD70 000CACB0  38 7F 1D AC */ addi r3, r31, 0x1dac
/* 800CDD74 000CACB4  38 80 FF FF */ li r4, -1
/* 800CDD78 000CACB8  4B FA A3 15 */ bl dBgS_LinkLinChk_NS_dtor
/* 800CDD7C 000CACBC  34 1F 1D 5C */ addic. r0, r31, 0x1d5c
/* 800CDD80 000CACC0  41 82 00 34 */ beq lbl_800CDDB4
/* 800CDD84 000CACC4  3C 60 80 3B */ lis r3, lbl_803B2EC8@ha
/* 800CDD88 000CACC8  38 63 2E C8 */ addi r3, r3, lbl_803B2EC8@l
/* 800CDD8C 000CACCC  90 7F 1D 68 */ stw r3, 0x1d68(r31)
/* 800CDD90 000CACD0  38 03 00 0C */ addi r0, r3, 0xc
/* 800CDD94 000CACD4  90 1F 1D 7C */ stw r0, 0x1d7c(r31)
/* 800CDD98 000CACD8  38 03 00 18 */ addi r0, r3, 0x18
/* 800CDD9C 000CACDC  90 1F 1D 80 */ stw r0, 0x1d80(r31)
/* 800CDDA0 000CACE0  38 03 00 24 */ addi r0, r3, 0x24
/* 800CDDA4 000CACE4  90 1F 1D 90 */ stw r0, 0x1d90(r31)
/* 800CDDA8 000CACE8  38 7F 1D 5C */ addi r3, r31, 0x1d5c
/* 800CDDAC 000CACEC  38 80 00 00 */ li r4, 0
/* 800CDDB0 000CACF0  4B FA B2 E1 */ bl dBgS_RoofChk_NS_dtor
lbl_800CDDB4:
/* 800CDDB4 000CACF4  34 1F 1D 08 */ addic. r0, r31, 0x1d08
/* 800CDDB8 000CACF8  41 82 00 34 */ beq lbl_800CDDEC
/* 800CDDBC 000CACFC  3C 60 80 3B */ lis r3, lbl_803B2EF8@ha
/* 800CDDC0 000CAD00  38 63 2E F8 */ addi r3, r3, lbl_803B2EF8@l
/* 800CDDC4 000CAD04  90 7F 1D 18 */ stw r3, 0x1d18(r31)
/* 800CDDC8 000CAD08  38 03 00 0C */ addi r0, r3, 0xc
/* 800CDDCC 000CAD0C  90 1F 1D 28 */ stw r0, 0x1d28(r31)
/* 800CDDD0 000CAD10  38 03 00 18 */ addi r0, r3, 0x18
/* 800CDDD4 000CAD14  90 1F 1D 44 */ stw r0, 0x1d44(r31)
/* 800CDDD8 000CAD18  38 03 00 24 */ addi r0, r3, 0x24
/* 800CDDDC 000CAD1C  90 1F 1D 54 */ stw r0, 0x1d54(r31)
/* 800CDDE0 000CAD20  38 7F 1D 08 */ addi r3, r31, 0x1d08
/* 800CDDE4 000CAD24  38 80 00 00 */ li r4, 0
/* 800CDDE8 000CAD28  4B FA 98 09 */ bl dBgS_GndChk_NS_dtor
lbl_800CDDEC:
/* 800CDDEC 000CAD2C  38 7F 1C 98 */ addi r3, r31, 0x1c98
/* 800CDDF0 000CAD30  38 80 FF FF */ li r4, -1
/* 800CDDF4 000CAD34  4B FA A4 4D */ bl dBgS_ArrowLinChk_NS_dtor
/* 800CDDF8 000CAD38  38 7F 1C 28 */ addi r3, r31, 0x1c28
/* 800CDDFC 000CAD3C  38 80 FF FF */ li r4, -1
/* 800CDE00 000CAD40  4B FA A5 15 */ bl dBgS_BoomerangLinChk_NS_dtor
/* 800CDE04 000CAD44  38 7F 1B B8 */ addi r3, r31, 0x1bb8
/* 800CDE08 000CAD48  38 80 FF FF */ li r4, -1
/* 800CDE0C 000CAD4C  4B FA A5 DD */ bl dBgS_RopeLinChk_NS_dtor
/* 800CDE10 000CAD50  38 7F 1B 48 */ addi r3, r31, 0x1b48
/* 800CDE14 000CAD54  38 80 FF FF */ li r4, -1
/* 800CDE18 000CAD58  4B FA A2 75 */ bl dBgS_LinkLinChk_NS_dtor
/* 800CDE1C 000CAD5C  34 1F 19 70 */ addic. r0, r31, 0x1970
/* 800CDE20 000CAD60  41 82 00 2C */ beq lbl_800CDE4C
/* 800CDE24 000CAD64  3C 60 80 3B */ lis r3, lbl_803B2F28@ha
/* 800CDE28 000CAD68  38 63 2F 28 */ addi r3, r3, lbl_803B2F28@l
/* 800CDE2C 000CAD6C  90 7F 19 80 */ stw r3, 0x1980(r31)
/* 800CDE30 000CAD70  38 03 00 0C */ addi r0, r3, 0xc
/* 800CDE34 000CAD74  90 1F 19 84 */ stw r0, 0x1984(r31)
/* 800CDE38 000CAD78  38 03 00 18 */ addi r0, r3, 0x18
/* 800CDE3C 000CAD7C  90 1F 19 94 */ stw r0, 0x1994(r31)
/* 800CDE40 000CAD80  38 7F 19 70 */ addi r3, r31, 0x1970
/* 800CDE44 000CAD84  38 80 00 00 */ li r4, 0
/* 800CDE48 000CAD88  4B FA 81 4D */ bl dBgS_Acch_NS_dtor
lbl_800CDE4C:
/* 800CDE4C 000CAD8C  38 7F 18 B0 */ addi r3, r31, 0x18b0
/*.global dBgS_AcchCir_NS_dtor*/
/* 800CDE50 000CAD90  3C 80 80 07 */ lis r4, dBgS_AcchCir_NS_dtor@ha
/*.global dBgS_AcchCir_NS_dtor*/
/* 800CDE54 000CAD94  38 84 74 14 */ addi r4, r4, dBgS_AcchCir_NS_dtor@l
/* 800CDE58 000CAD98  38 A0 00 40 */ li r5, 0x40
/* 800CDE5C 000CAD9C  38 C0 00 03 */ li r6, 3
/* 800CDE60 000CADA0  48 29 3E 89 */ bl func_80361CE8
/* 800CDE64 000CADA4  34 1F 17 78 */ addic. r0, r31, 0x1778
/* 800CDE68 000CADA8  41 82 00 84 */ beq lbl_800CDEEC
/* 800CDE6C 000CADAC  3C 60 80 3B */ lis r3, lbl_803ABFC0@ha
/* 800CDE70 000CADB0  38 63 BF C0 */ addi r3, r3, lbl_803ABFC0@l
/* 800CDE74 000CADB4  90 7F 17 B4 */ stw r3, 0x17b4(r31)
/* 800CDE78 000CADB8  38 03 00 2C */ addi r0, r3, 0x2c
/* 800CDE7C 000CADBC  90 1F 18 98 */ stw r0, 0x1898(r31)
/* 800CDE80 000CADC0  38 03 00 84 */ addi r0, r3, 0x84
/* 800CDE84 000CADC4  90 1F 18 AC */ stw r0, 0x18ac(r31)
/* 800CDE88 000CADC8  34 1F 18 7C */ addic. r0, r31, 0x187c
/* 800CDE8C 000CADCC  41 82 00 54 */ beq lbl_800CDEE0
/* 800CDE90 000CADD0  3C 60 80 3C */ lis r3, lbl_803C3540@ha
/* 800CDE94 000CADD4  38 63 35 40 */ addi r3, r3, lbl_803C3540@l
/* 800CDE98 000CADD8  90 7F 18 98 */ stw r3, 0x1898(r31)
/* 800CDE9C 000CADDC  38 03 00 58 */ addi r0, r3, 0x58
/* 800CDEA0 000CADE0  90 1F 18 AC */ stw r0, 0x18ac(r31)
/* 800CDEA4 000CADE4  34 1F 18 9C */ addic. r0, r31, 0x189c
/* 800CDEA8 000CADE8  41 82 00 10 */ beq lbl_800CDEB8
/* 800CDEAC 000CADEC  3C 60 80 3A */ lis r3, lbl_803A7904@ha
/* 800CDEB0 000CADF0  38 03 79 04 */ addi r0, r3, lbl_803A7904@l
/* 800CDEB4 000CADF4  90 1F 18 AC */ stw r0, 0x18ac(r31)
lbl_800CDEB8:
/* 800CDEB8 000CADF8  34 1F 18 7C */ addic. r0, r31, 0x187c
/* 800CDEBC 000CADFC  41 82 00 24 */ beq lbl_800CDEE0
/* 800CDEC0 000CAE00  3C 60 80 3C */ lis r3, lbl_803C36D0@ha
/* 800CDEC4 000CAE04  38 03 36 D0 */ addi r0, r3, lbl_803C36D0@l
/* 800CDEC8 000CAE08  90 1F 18 98 */ stw r0, 0x1898(r31)
/* 800CDECC 000CAE0C  34 1F 18 7C */ addic. r0, r31, 0x187c
/* 800CDED0 000CAE10  41 82 00 10 */ beq lbl_800CDEE0
/* 800CDED4 000CAE14  3C 60 80 3A */ lis r3, lbl_803A7218@ha
/* 800CDED8 000CAE18  38 03 72 18 */ addi r0, r3, lbl_803A7218@l
/* 800CDEDC 000CAE1C  90 1F 18 94 */ stw r0, 0x1894(r31)
lbl_800CDEE0:
/* 800CDEE0 000CAE20  38 7F 17 78 */ addi r3, r31, 0x1778
/* 800CDEE4 000CAE24  38 80 00 00 */ li r4, 0
/* 800CDEE8 000CAE28  4B FB 61 FD */ bl dCcD_GObjInf_NS_dtor
lbl_800CDEEC:
/* 800CDEEC 000CAE2C  34 1F 17 3C */ addic. r0, r31, 0x173c
/* 800CDEF0 000CAE30  41 82 00 54 */ beq lbl_800CDF44
/* 800CDEF4 000CAE34  3C 60 80 3B */ lis r3, lbl_803AC2E4@ha
/* 800CDEF8 000CAE38  38 63 C2 E4 */ addi r3, r3, lbl_803AC2E4@l
/* 800CDEFC 000CAE3C  90 7F 17 54 */ stw r3, 0x1754(r31)
/* 800CDF00 000CAE40  38 03 00 20 */ addi r0, r3, 0x20
/* 800CDF04 000CAE44  90 1F 17 58 */ stw r0, 0x1758(r31)
/* 800CDF08 000CAE48  34 1F 17 58 */ addic. r0, r31, 0x1758
/* 800CDF0C 000CAE4C  41 82 00 24 */ beq lbl_800CDF30
/* 800CDF10 000CAE50  3C 60 80 3B */ lis r3, lbl_803AC310@ha
/* 800CDF14 000CAE54  38 03 C3 10 */ addi r0, r3, lbl_803AC310@l
/* 800CDF18 000CAE58  90 1F 17 58 */ stw r0, 0x1758(r31)
/* 800CDF1C 000CAE5C  34 1F 17 58 */ addic. r0, r31, 0x1758
/* 800CDF20 000CAE60  41 82 00 10 */ beq lbl_800CDF30
/* 800CDF24 000CAE64  3C 60 80 3B */ lis r3, lbl_803AC31C@ha
/* 800CDF28 000CAE68  38 03 C3 1C */ addi r0, r3, lbl_803AC31C@l
/* 800CDF2C 000CAE6C  90 1F 17 58 */ stw r0, 0x1758(r31)
lbl_800CDF30:
/* 800CDF30 000CAE70  34 1F 17 3C */ addic. r0, r31, 0x173c
/* 800CDF34 000CAE74  41 82 00 10 */ beq lbl_800CDF44
/* 800CDF38 000CAE78  3C 60 80 3C */ lis r3, lbl_803C3728@ha
/* 800CDF3C 000CAE7C  38 03 37 28 */ addi r0, r3, lbl_803C3728@l
/* 800CDF40 000CAE80  90 1F 17 54 */ stw r0, 0x1754(r31)
lbl_800CDF44:
/* 800CDF44 000CAE84  34 1F 15 F8 */ addic. r0, r31, 0x15f8
/* 800CDF48 000CAE88  41 82 00 7C */ beq lbl_800CDFC4
/* 800CDF4C 000CAE8C  3C 60 80 3B */ lis r3, lbl_803AC170@ha
/* 800CDF50 000CAE90  38 63 C1 70 */ addi r3, r3, lbl_803AC170@l
/* 800CDF54 000CAE94  90 7F 16 34 */ stw r3, 0x1634(r31)
/* 800CDF58 000CAE98  38 03 00 2C */ addi r0, r3, 0x2c
/* 800CDF5C 000CAE9C  90 1F 17 18 */ stw r0, 0x1718(r31)
/* 800CDF60 000CAEA0  38 03 00 84 */ addi r0, r3, 0x84
/* 800CDF64 000CAEA4  90 1F 17 34 */ stw r0, 0x1734(r31)
/* 800CDF68 000CAEA8  34 1F 16 FC */ addic. r0, r31, 0x16fc
/* 800CDF6C 000CAEAC  41 82 00 4C */ beq lbl_800CDFB8
/* 800CDF70 000CAEB0  3C 60 80 3C */ lis r3, lbl_803C3608@ha
/* 800CDF74 000CAEB4  38 63 36 08 */ addi r3, r3, lbl_803C3608@l
/* 800CDF78 000CAEB8  90 7F 17 18 */ stw r3, 0x1718(r31)
/* 800CDF7C 000CAEBC  38 03 00 58 */ addi r0, r3, 0x58
/* 800CDF80 000CAEC0  90 1F 17 34 */ stw r0, 0x1734(r31)
/* 800CDF84 000CAEC4  38 7F 17 1C */ addi r3, r31, 0x171c
/* 800CDF88 000CAEC8  38 80 00 00 */ li r4, 0
/* 800CDF8C 000CAECC  48 1A 10 19 */ bl __dt__8cM3dGCpsFv
/* 800CDF90 000CAED0  34 1F 16 FC */ addic. r0, r31, 0x16fc
/* 800CDF94 000CAED4  41 82 00 24 */ beq lbl_800CDFB8
/* 800CDF98 000CAED8  3C 60 80 3C */ lis r3, lbl_803C36D0@ha
/* 800CDF9C 000CAEDC  38 03 36 D0 */ addi r0, r3, lbl_803C36D0@l
/* 800CDFA0 000CAEE0  90 1F 17 18 */ stw r0, 0x1718(r31)
/* 800CDFA4 000CAEE4  34 1F 16 FC */ addic. r0, r31, 0x16fc
/* 800CDFA8 000CAEE8  41 82 00 10 */ beq lbl_800CDFB8
/* 800CDFAC 000CAEEC  3C 60 80 3A */ lis r3, lbl_803A7218@ha
/* 800CDFB0 000CAEF0  38 03 72 18 */ addi r0, r3, lbl_803A7218@l
/* 800CDFB4 000CAEF4  90 1F 17 14 */ stw r0, 0x1714(r31)
lbl_800CDFB8:
/* 800CDFB8 000CAEF8  38 7F 15 F8 */ addi r3, r31, 0x15f8
/* 800CDFBC 000CAEFC  38 80 00 00 */ li r4, 0
/* 800CDFC0 000CAF00  4B FB 61 25 */ bl dCcD_GObjInf_NS_dtor
lbl_800CDFC4:
/* 800CDFC4 000CAF04  38 7F 12 2C */ addi r3, r31, 0x122c
/*.global dCcD_Cps_NS_dtor*/
/* 800CDFC8 000CAF08  3C 80 80 08 */ lis r4, dCcD_Cps_NS_dtor@ha
/*.global dCcD_Cps_NS_dtor*/
/* 800CDFCC 000CAF0C  38 84 50 6C */ addi r4, r4, dCcD_Cps_NS_dtor@l
/* 800CDFD0 000CAF10  38 A0 01 44 */ li r5, 0x144
/* 800CDFD4 000CAF14  38 C0 00 03 */ li r6, 3
/* 800CDFD8 000CAF18  48 29 3D 11 */ bl func_80361CE8
/* 800CDFDC 000CAF1C  34 1F 10 F0 */ addic. r0, r31, 0x10f0
/* 800CDFE0 000CAF20  41 82 00 84 */ beq lbl_800CE064
/* 800CDFE4 000CAF24  3C 60 80 3B */ lis r3, lbl_803AC050@ha
/* 800CDFE8 000CAF28  38 63 C0 50 */ addi r3, r3, lbl_803AC050@l
/* 800CDFEC 000CAF2C  90 7F 11 2C */ stw r3, 0x112c(r31)
/* 800CDFF0 000CAF30  38 03 00 2C */ addi r0, r3, 0x2c
/* 800CDFF4 000CAF34  90 1F 12 10 */ stw r0, 0x1210(r31)
/* 800CDFF8 000CAF38  38 03 00 84 */ addi r0, r3, 0x84
/* 800CDFFC 000CAF3C  90 1F 12 28 */ stw r0, 0x1228(r31)
/* 800CE000 000CAF40  34 1F 11 F4 */ addic. r0, r31, 0x11f4
/* 800CE004 000CAF44  41 82 00 54 */ beq lbl_800CE058
/* 800CE008 000CAF48  3C 60 80 3C */ lis r3, lbl_803C35A4@ha
/* 800CE00C 000CAF4C  38 63 35 A4 */ addi r3, r3, lbl_803C35A4@l
/* 800CE010 000CAF50  90 7F 12 10 */ stw r3, 0x1210(r31)
/* 800CE014 000CAF54  38 03 00 58 */ addi r0, r3, 0x58
/* 800CE018 000CAF58  90 1F 12 28 */ stw r0, 0x1228(r31)
/* 800CE01C 000CAF5C  34 1F 12 14 */ addic. r0, r31, 0x1214
/* 800CE020 000CAF60  41 82 00 10 */ beq lbl_800CE030
/* 800CE024 000CAF64  3C 60 80 3A */ lis r3, lbl_803A720C@ha
/* 800CE028 000CAF68  38 03 72 0C */ addi r0, r3, lbl_803A720C@l
/* 800CE02C 000CAF6C  90 1F 12 28 */ stw r0, 0x1228(r31)
lbl_800CE030:
/* 800CE030 000CAF70  34 1F 11 F4 */ addic. r0, r31, 0x11f4
/* 800CE034 000CAF74  41 82 00 24 */ beq lbl_800CE058
/* 800CE038 000CAF78  3C 60 80 3C */ lis r3, lbl_803C36D0@ha
/* 800CE03C 000CAF7C  38 03 36 D0 */ addi r0, r3, lbl_803C36D0@l
/* 800CE040 000CAF80  90 1F 12 10 */ stw r0, 0x1210(r31)
/* 800CE044 000CAF84  34 1F 11 F4 */ addic. r0, r31, 0x11f4
/* 800CE048 000CAF88  41 82 00 10 */ beq lbl_800CE058
/* 800CE04C 000CAF8C  3C 60 80 3A */ lis r3, lbl_803A7218@ha
/* 800CE050 000CAF90  38 03 72 18 */ addi r0, r3, lbl_803A7218@l
/* 800CE054 000CAF94  90 1F 12 0C */ stw r0, 0x120c(r31)
lbl_800CE058:
/* 800CE058 000CAF98  38 7F 10 F0 */ addi r3, r31, 0x10f0
/* 800CE05C 000CAF9C  38 80 00 00 */ li r4, 0
/* 800CE060 000CAFA0  4B FB 60 85 */ bl dCcD_GObjInf_NS_dtor
lbl_800CE064:
/* 800CE064 000CAFA4  34 1F 0F B8 */ addic. r0, r31, 0xfb8
/* 800CE068 000CAFA8  41 82 00 84 */ beq lbl_800CE0EC
/* 800CE06C 000CAFAC  3C 60 80 3B */ lis r3, lbl_803ABFC0@ha
/* 800CE070 000CAFB0  38 63 BF C0 */ addi r3, r3, lbl_803ABFC0@l
/* 800CE074 000CAFB4  90 7F 0F F4 */ stw r3, 0xff4(r31)
/* 800CE078 000CAFB8  38 03 00 2C */ addi r0, r3, 0x2c
/* 800CE07C 000CAFBC  90 1F 10 D8 */ stw r0, 0x10d8(r31)
/* 800CE080 000CAFC0  38 03 00 84 */ addi r0, r3, 0x84
/* 800CE084 000CAFC4  90 1F 10 EC */ stw r0, 0x10ec(r31)
/* 800CE088 000CAFC8  34 1F 10 BC */ addic. r0, r31, 0x10bc
/* 800CE08C 000CAFCC  41 82 00 54 */ beq lbl_800CE0E0
/* 800CE090 000CAFD0  3C 60 80 3C */ lis r3, lbl_803C3540@ha
/* 800CE094 000CAFD4  38 63 35 40 */ addi r3, r3, lbl_803C3540@l
/* 800CE098 000CAFD8  90 7F 10 D8 */ stw r3, 0x10d8(r31)
/* 800CE09C 000CAFDC  38 03 00 58 */ addi r0, r3, 0x58
/* 800CE0A0 000CAFE0  90 1F 10 EC */ stw r0, 0x10ec(r31)
/* 800CE0A4 000CAFE4  34 1F 10 DC */ addic. r0, r31, 0x10dc
/* 800CE0A8 000CAFE8  41 82 00 10 */ beq lbl_800CE0B8
/* 800CE0AC 000CAFEC  3C 60 80 3A */ lis r3, lbl_803A7904@ha
/* 800CE0B0 000CAFF0  38 03 79 04 */ addi r0, r3, lbl_803A7904@l
/* 800CE0B4 000CAFF4  90 1F 10 EC */ stw r0, 0x10ec(r31)
lbl_800CE0B8:
/* 800CE0B8 000CAFF8  34 1F 10 BC */ addic. r0, r31, 0x10bc
/* 800CE0BC 000CAFFC  41 82 00 24 */ beq lbl_800CE0E0
/* 800CE0C0 000CB000  3C 60 80 3C */ lis r3, lbl_803C36D0@ha
/* 800CE0C4 000CB004  38 03 36 D0 */ addi r0, r3, lbl_803C36D0@l
/* 800CE0C8 000CB008  90 1F 10 D8 */ stw r0, 0x10d8(r31)
/* 800CE0CC 000CB00C  34 1F 10 BC */ addic. r0, r31, 0x10bc
/* 800CE0D0 000CB010  41 82 00 10 */ beq lbl_800CE0E0
/* 800CE0D4 000CB014  3C 60 80 3A */ lis r3, lbl_803A7218@ha
/* 800CE0D8 000CB018  38 03 72 18 */ addi r0, r3, lbl_803A7218@l
/* 800CE0DC 000CB01C  90 1F 10 D4 */ stw r0, 0x10d4(r31)
lbl_800CE0E0:
/* 800CE0E0 000CB020  38 7F 0F B8 */ addi r3, r31, 0xfb8
/* 800CE0E4 000CB024  38 80 00 00 */ li r4, 0
/* 800CE0E8 000CB028  4B FB 5F FD */ bl dCcD_GObjInf_NS_dtor
lbl_800CE0EC:
/* 800CE0EC 000CB02C  38 7F 0C 04 */ addi r3, r31, 0xc04
/*.global dCcD_Cyl_NS_dtor*/
/* 800CE0F0 000CB030  3C 80 80 08 */ lis r4, dCcD_Cyl_NS_dtor@ha
/*.global dCcD_Cyl_NS_dtor*/
/* 800CE0F4 000CB034  38 84 4D 60 */ addi r4, r4, dCcD_Cyl_NS_dtor@l
/* 800CE0F8 000CB038  38 A0 01 3C */ li r5, 0x13c
/* 800CE0FC 000CB03C  38 C0 00 03 */ li r6, 3
/* 800CE100 000CB040  48 29 3B E9 */ bl func_80361CE8
/* 800CE104 000CB044  38 7F 08 50 */ addi r3, r31, 0x850
/*.global dCcD_Cyl_NS_dtor*/
/* 800CE108 000CB048  3C 80 80 08 */ lis r4, dCcD_Cyl_NS_dtor@ha
/*.global dCcD_Cyl_NS_dtor*/
/* 800CE10C 000CB04C  38 84 4D 60 */ addi r4, r4, dCcD_Cyl_NS_dtor@l
/* 800CE110 000CB050  38 A0 01 3C */ li r5, 0x13c
/* 800CE114 000CB054  38 C0 00 03 */ li r6, 3
/* 800CE118 000CB058  48 29 3B D1 */ bl func_80361CE8
/* 800CE11C 000CB05C  34 1F 08 14 */ addic. r0, r31, 0x814
/* 800CE120 000CB060  41 82 00 54 */ beq lbl_800CE174
/* 800CE124 000CB064  3C 60 80 3B */ lis r3, lbl_803AC2E4@ha
/* 800CE128 000CB068  38 63 C2 E4 */ addi r3, r3, lbl_803AC2E4@l
/* 800CE12C 000CB06C  90 7F 08 2C */ stw r3, 0x82c(r31)
/* 800CE130 000CB070  38 03 00 20 */ addi r0, r3, 0x20
/* 800CE134 000CB074  90 1F 08 30 */ stw r0, 0x830(r31)
/* 800CE138 000CB078  34 1F 08 30 */ addic. r0, r31, 0x830
/* 800CE13C 000CB07C  41 82 00 24 */ beq lbl_800CE160
/* 800CE140 000CB080  3C 60 80 3B */ lis r3, lbl_803AC310@ha
/* 800CE144 000CB084  38 03 C3 10 */ addi r0, r3, lbl_803AC310@l
/* 800CE148 000CB088  90 1F 08 30 */ stw r0, 0x830(r31)
/* 800CE14C 000CB08C  34 1F 08 30 */ addic. r0, r31, 0x830
/* 800CE150 000CB090  41 82 00 10 */ beq lbl_800CE160
/* 800CE154 000CB094  3C 60 80 3B */ lis r3, lbl_803AC31C@ha
/* 800CE158 000CB098  38 03 C3 1C */ addi r0, r3, lbl_803AC31C@l
/* 800CE15C 000CB09C  90 1F 08 30 */ stw r0, 0x830(r31)
lbl_800CE160:
/* 800CE160 000CB0A0  34 1F 08 14 */ addic. r0, r31, 0x814
/* 800CE164 000CB0A4  41 82 00 10 */ beq lbl_800CE174
/* 800CE168 000CB0A8  3C 60 80 3C */ lis r3, lbl_803C3728@ha
/* 800CE16C 000CB0AC  38 03 37 28 */ addi r0, r3, lbl_803C3728@l
/* 800CE170 000CB0B0  90 1F 08 2C */ stw r0, 0x82c(r31)
lbl_800CE174:
/* 800CE174 000CB0B4  34 1F 07 4C */ addic. r0, r31, 0x74c
/* 800CE178 000CB0B8  41 82 00 20 */ beq lbl_800CE198
/* 800CE17C 000CB0BC  34 1F 07 4C */ addic. r0, r31, 0x74c
/* 800CE180 000CB0C0  41 82 00 18 */ beq lbl_800CE198
/* 800CE184 000CB0C4  34 1F 07 4C */ addic. r0, r31, 0x74c
/* 800CE188 000CB0C8  41 82 00 10 */ beq lbl_800CE198
/* 800CE18C 000CB0CC  3C 60 80 3A */ lis r3, lbl_803A3354@ha
/* 800CE190 000CB0D0  38 03 33 54 */ addi r0, r3, lbl_803A3354@l
/* 800CE194 000CB0D4  90 1F 07 4C */ stw r0, 0x74c(r31)
lbl_800CE198:
/* 800CE198 000CB0D8  34 1F 07 30 */ addic. r0, r31, 0x730
/* 800CE19C 000CB0DC  41 82 00 20 */ beq lbl_800CE1BC
/* 800CE1A0 000CB0E0  34 1F 07 30 */ addic. r0, r31, 0x730
/* 800CE1A4 000CB0E4  41 82 00 18 */ beq lbl_800CE1BC
/* 800CE1A8 000CB0E8  34 1F 07 30 */ addic. r0, r31, 0x730
/* 800CE1AC 000CB0EC  41 82 00 10 */ beq lbl_800CE1BC
/* 800CE1B0 000CB0F0  3C 60 80 3A */ lis r3, lbl_803A3354@ha
/* 800CE1B4 000CB0F4  38 03 33 54 */ addi r0, r3, lbl_803A3354@l
/* 800CE1B8 000CB0F8  90 1F 07 30 */ stw r0, 0x730(r31)
lbl_800CE1BC:
/* 800CE1BC 000CB0FC  28 1F 00 00 */ cmplwi r31, 0
/* 800CE1C0 000CB100  41 82 00 1C */ beq lbl_800CE1DC
/* 800CE1C4 000CB104  3C 60 80 3B */ lis r3, lbl_803B2F70@ha
/* 800CE1C8 000CB108  38 03 2F 70 */ addi r0, r3, lbl_803B2F70@l
/* 800CE1CC 000CB10C  90 1F 06 28 */ stw r0, 0x628(r31)
/* 800CE1D0 000CB110  7F E3 FB 78 */ mr r3, r31
/* 800CE1D4 000CB114  38 80 00 00 */ li r4, 0
/* 800CE1D8 000CB118  4B F4 AA B5 */ bl fopAc_ac_c_NS_dtor
lbl_800CE1DC:
/* 800CE1DC 000CB11C  7F C0 07 35 */ extsh. r0, r30
/* 800CE1E0 000CB120  40 81 00 0C */ ble lbl_800CE1EC
/* 800CE1E4 000CB124  7F E3 FB 78 */ mr r3, r31
/* 800CE1E8 000CB128  48 20 0B 55 */ bl __dl__FPv
lbl_800CE1EC:
/* 800CE1EC 000CB12C  7F E3 FB 78 */ mr r3, r31
/* 800CE1F0 000CB130  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 800CE1F4 000CB134  83 C1 00 08 */ lwz r30, 8(r1)
/* 800CE1F8 000CB138  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800CE1FC 000CB13C  7C 08 03 A6 */ mtlr r0
/* 800CE200 000CB140  38 21 00 10 */ addi r1, r1, 0x10
/* 800CE204 000CB144  4E 80 00 20 */ blr