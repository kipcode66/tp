.include "macros.inc"

.section .text, "ax" # 80336794


/* 80336794 003336D4  38 A4 00 20 */	addi r5, r4, 0x20
/* 80336798 003336D8  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8033679C 003336DC  7C 09 03 A6 */	mtctr r0
/* 803367A0 003336E0  28 00 00 00 */	cmplwi r0, 0
/* 803367A4 003336E4  40 81 00 28 */	ble lbl_803367CC
lbl_803367A8:
/* 803367A8 003336E8  80 65 00 00 */	lwz r3, 0(r5)
/* 803367AC 003336EC  3C 03 B2 BF */	addis r0, r3, 0xb2bf
/* 803367B0 003336F0  28 00 54 33 */	cmplwi r0, 0x5433
/* 803367B4 003336F4  40 82 00 0C */	bne lbl_803367C0
/* 803367B8 003336F8  A0 65 00 08 */	lhz r3, 8(r5)
/* 803367BC 003336FC  4E 80 00 20 */	blr 
lbl_803367C0:
/* 803367C0 00333700  80 05 00 04 */	lwz r0, 4(r5)
/* 803367C4 00333704  7C A5 02 14 */	add r5, r5, r0
/* 803367C8 00333708  42 00 FF E0 */	bdnz lbl_803367A8
lbl_803367CC:
/* 803367CC 0033370C  38 60 00 00 */	li r3, 0
/* 803367D0 00333710  4E 80 00 20 */	blr 
/* 803367D4 00333714  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803367D8 00333718  7C 08 02 A6 */	mflr r0
/* 803367DC 0033371C  90 01 00 34 */	stw r0, 0x34(r1)
/* 803367E0 00333720  39 61 00 30 */	addi r11, r1, 0x30
/* 803367E4 00333724  48 02 B9 E9 */	bl _savegpr_25
/* 803367E8 00333728  7C 7A 1B 78 */	mr r26, r3
/* 803367EC 0033372C  3B 84 00 20 */	addi r28, r4, 0x20
/* 803367F0 00333730  3B 60 00 00 */	li r27, 0
/* 803367F4 00333734  7C BE 2B 78 */	mr r30, r5
/* 803367F8 00333738  3B A0 00 E4 */	li r29, 0xe4
/* 803367FC 0033373C  3C 60 4D 41 */	lis r3, 0x4D415432@ha
/* 80336800 00333740  3B E3 54 32 */	addi r31, r3, 0x4D415432@l
/* 80336804 00333744  83 24 00 0C */	lwz r25, 0xc(r4)
/* 80336808 00333748  48 00 01 74 */	b lbl_8033697C
lbl_8033680C:
/* 8033680C 0033374C  80 9C 00 00 */	lwz r4, 0(r28)
/* 80336810 00333750  7C 04 F8 00 */	cmpw r4, r31
/* 80336814 00333754  41 82 01 5C */	beq lbl_80336970
/* 80336818 00333758  40 80 00 54 */	bge lbl_8033686C
/* 8033681C 0033375C  3C 60 49 4E */	lis r3, 0x494E4631@ha
/* 80336820 00333760  38 03 46 31 */	addi r0, r3, 0x494E4631@l
/* 80336824 00333764  7C 04 00 00 */	cmpw r4, r0
/* 80336828 00333768  41 82 00 94 */	beq lbl_803368BC
/* 8033682C 0033376C  40 80 00 2C */	bge lbl_80336858
/* 80336830 00333770  3C 60 45 56 */	lis r3, 0x45565031@ha
/* 80336834 00333774  38 03 50 31 */	addi r0, r3, 0x45565031@l
/* 80336838 00333778  7C 04 00 00 */	cmpw r4, r0
/* 8033683C 0033377C  41 82 00 FC */	beq lbl_80336938
/* 80336840 00333780  40 80 01 20 */	bge lbl_80336960
/* 80336844 00333784  3C 60 44 52 */	lis r3, 0x44525731@ha
/* 80336848 00333788  38 03 57 31 */	addi r0, r3, 0x44525731@l
/* 8033684C 0033378C  7C 04 00 00 */	cmpw r4, r0
/* 80336850 00333790  41 82 00 FC */	beq lbl_8033694C
/* 80336854 00333794  48 00 01 0C */	b lbl_80336960
lbl_80336858:
/* 80336858 00333798  3C 60 4A 4E */	lis r3, 0x4A4E5431@ha
/* 8033685C 0033379C  38 03 54 31 */	addi r0, r3, 0x4A4E5431@l
/* 80336860 003337A0  7C 04 00 00 */	cmpw r4, r0
/* 80336864 003337A4  41 82 00 70 */	beq lbl_803368D4
/* 80336868 003337A8  48 00 00 F8 */	b lbl_80336960
lbl_8033686C:
/* 8033686C 003337AC  3C 60 54 45 */	lis r3, 0x54455831@ha
/* 80336870 003337B0  38 03 58 31 */	addi r0, r3, 0x54455831@l
/* 80336874 003337B4  7C 04 00 00 */	cmpw r4, r0
/* 80336878 003337B8  41 82 00 AC */	beq lbl_80336924
/* 8033687C 003337BC  40 80 00 2C */	bge lbl_803368A8
/* 80336880 003337C0  3C 60 53 48 */	lis r3, 0x53485031@ha
/* 80336884 003337C4  38 03 50 31 */	addi r0, r3, 0x53485031@l
/* 80336888 003337C8  7C 04 00 00 */	cmpw r4, r0
/* 8033688C 003337CC  41 82 00 80 */	beq lbl_8033690C
/* 80336890 003337D0  40 80 00 D0 */	bge lbl_80336960
/* 80336894 003337D4  3C 60 4D 41 */	lis r3, 0x4D415434@ha
/* 80336898 003337D8  38 03 54 34 */	addi r0, r3, 0x4D415434@l
/* 8033689C 003337DC  7C 04 00 00 */	cmpw r4, r0
/* 803368A0 003337E0  40 80 00 C0 */	bge lbl_80336960
/* 803368A4 003337E4  48 00 00 44 */	b lbl_803368E8
lbl_803368A8:
/* 803368A8 003337E8  3C 60 56 54 */	lis r3, 0x56545831@ha
/* 803368AC 003337EC  38 03 58 31 */	addi r0, r3, 0x56545831@l
/* 803368B0 003337F0  7C 04 00 00 */	cmpw r4, r0
/* 803368B4 003337F4  41 82 00 BC */	beq lbl_80336970
/* 803368B8 003337F8  48 00 00 A8 */	b lbl_80336960
lbl_803368BC:
/* 803368BC 003337FC  7F 43 D3 78 */	mr r3, r26
/* 803368C0 00333800  7F 84 E3 78 */	mr r4, r28
/* 803368C4 00333804  7F C5 F3 78 */	mr r5, r30
/* 803368C8 00333808  48 00 04 11 */	bl J3DModelLoader_NS_calcSizeInformation
/* 803368CC 0033380C  7F BD 1A 14 */	add r29, r29, r3
/* 803368D0 00333810  48 00 00 A0 */	b lbl_80336970
lbl_803368D4:
/* 803368D4 00333814  7F 43 D3 78 */	mr r3, r26
/* 803368D8 00333818  7F 84 E3 78 */	mr r4, r28
/* 803368DC 0033381C  48 00 04 89 */	bl J3DModelLoader_NS_calcSizeJoint
/* 803368E0 00333820  7F BD 1A 14 */	add r29, r29, r3
/* 803368E4 00333824  48 00 00 8C */	b lbl_80336970
lbl_803368E8:
/* 803368E8 00333828  7F 43 D3 78 */	mr r3, r26
/* 803368EC 0033382C  7F 84 E3 78 */	mr r4, r28
/* 803368F0 00333830  7F C5 F3 78 */	mr r5, r30
/* 803368F4 00333834  81 9A 00 00 */	lwz r12, 0(r26)
/* 803368F8 00333838  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803368FC 0033383C  7D 89 03 A6 */	mtctr r12
/* 80336900 00333840  4E 80 04 21 */	bctrl 
/* 80336904 00333844  7F BD 1A 14 */	add r29, r29, r3
/* 80336908 00333848  48 00 00 68 */	b lbl_80336970
lbl_8033690C:
/* 8033690C 0033384C  7F 43 D3 78 */	mr r3, r26
/* 80336910 00333850  7F 84 E3 78 */	mr r4, r28
/* 80336914 00333854  7F C5 F3 78 */	mr r5, r30
/* 80336918 00333858  48 00 05 89 */	bl J3DModelLoader_NS_calcSizeShape
/* 8033691C 0033385C  7F BD 1A 14 */	add r29, r29, r3
/* 80336920 00333860  48 00 00 50 */	b lbl_80336970
lbl_80336924:
/* 80336924 00333864  7F 43 D3 78 */	mr r3, r26
/* 80336928 00333868  7F 84 E3 78 */	mr r4, r28
/* 8033692C 0033386C  48 00 06 19 */	bl J3DModelLoader_NS_calcSizeTexture
/* 80336930 00333870  7F BD 1A 14 */	add r29, r29, r3
/* 80336934 00333874  48 00 00 3C */	b lbl_80336970
lbl_80336938:
/* 80336938 00333878  7F 43 D3 78 */	mr r3, r26
/* 8033693C 0033387C  7F 84 E3 78 */	mr r4, r28
/* 80336940 00333880  48 00 04 51 */	bl J3DModelLoader_NS_calcSizeEnvelope
/* 80336944 00333884  7F BD 1A 14 */	add r29, r29, r3
/* 80336948 00333888  48 00 00 28 */	b lbl_80336970
lbl_8033694C:
/* 8033694C 0033388C  7F 43 D3 78 */	mr r3, r26
/* 80336950 00333890  7F 84 E3 78 */	mr r4, r28
/* 80336954 00333894  48 00 04 4D */	bl J3DModelLoader_NS_calcSizeDraw
/* 80336958 00333898  7F BD 1A 14 */	add r29, r29, r3
/* 8033695C 0033389C  48 00 00 14 */	b lbl_80336970
lbl_80336960:
/* 80336960 003338A0  3C 60 80 3A */	lis r3, lbl_803A20E8@ha
/* 80336964 003338A4  38 63 20 E8 */	addi r3, r3, lbl_803A20E8@l
/* 80336968 003338A8  4C C6 31 82 */	crclr 6
/* 8033696C 003338AC  4B CD 01 51 */	bl OSReport
lbl_80336970:
/* 80336970 003338B0  80 1C 00 04 */	lwz r0, 4(r28)
/* 80336974 003338B4  7F 9C 02 14 */	add r28, r28, r0
/* 80336978 003338B8  3B 7B 00 01 */	addi r27, r27, 1
lbl_8033697C:
/* 8033697C 003338BC  7C 1B C8 40 */	cmplw r27, r25
/* 80336980 003338C0  41 80 FE 8C */	blt lbl_8033680C
/* 80336984 003338C4  7F A3 EB 78 */	mr r3, r29
/* 80336988 003338C8  39 61 00 30 */	addi r11, r1, 0x30
/* 8033698C 003338CC  48 02 B8 8D */	bl _restgpr_25
/* 80336990 003338D0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80336994 003338D4  7C 08 03 A6 */	mtlr r0
/* 80336998 003338D8  38 21 00 30 */	addi r1, r1, 0x30
/* 8033699C 003338DC  4E 80 00 20 */	blr 
/* 803369A0 003338E0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803369A4 003338E4  7C 08 02 A6 */	mflr r0
/* 803369A8 003338E8  90 01 00 34 */	stw r0, 0x34(r1)
/* 803369AC 003338EC  39 61 00 30 */	addi r11, r1, 0x30
/* 803369B0 003338F0  48 02 B8 1D */	bl _savegpr_25
/* 803369B4 003338F4  7C 79 1B 78 */	mr r25, r3
/* 803369B8 003338F8  3B 84 00 20 */	addi r28, r4, 0x20
/* 803369BC 003338FC  3B 60 00 00 */	li r27, 0
/* 803369C0 00333900  3B 40 00 00 */	li r26, 0
/* 803369C4 00333904  3B A0 00 20 */	li r29, 0x20
/* 803369C8 00333908  3C 60 4D 41 */	lis r3, 0x4D415433@ha
/* 803369CC 0033390C  3B C3 54 33 */	addi r30, r3, 0x4D415433@l
/* 803369D0 00333910  83 E4 00 0C */	lwz r31, 0xc(r4)
/* 803369D4 00333914  48 00 00 94 */	b lbl_80336A68
lbl_803369D8:
/* 803369D8 00333918  80 9C 00 00 */	lwz r4, 0(r28)
/* 803369DC 0033391C  7C 04 F0 00 */	cmpw r4, r30
/* 803369E0 00333920  41 82 00 30 */	beq lbl_80336A10
/* 803369E4 00333924  40 80 00 18 */	bge lbl_803369FC
/* 803369E8 00333928  3C 60 4D 41 */	lis r3, 0x4D415432@ha
/* 803369EC 0033392C  38 03 54 32 */	addi r0, r3, 0x4D415432@l
/* 803369F0 00333930  7C 04 00 00 */	cmpw r4, r0
/* 803369F4 00333934  40 80 00 68 */	bge lbl_80336A5C
/* 803369F8 00333938  48 00 00 54 */	b lbl_80336A4C
lbl_803369FC:
/* 803369FC 0033393C  3C 60 54 45 */	lis r3, 0x54455831@ha
/* 80336A00 00333940  38 03 58 31 */	addi r0, r3, 0x54455831@l
/* 80336A04 00333944  7C 04 00 00 */	cmpw r4, r0
/* 80336A08 00333948  41 82 00 2C */	beq lbl_80336A34
/* 80336A0C 0033394C  48 00 00 40 */	b lbl_80336A4C
lbl_80336A10:
/* 80336A10 00333950  7F 23 CB 78 */	mr r3, r25
/* 80336A14 00333954  7F 84 E3 78 */	mr r4, r28
/* 80336A18 00333958  3C A0 51 10 */	lis r5, 0x5110
/* 80336A1C 0033395C  81 99 00 00 */	lwz r12, 0(r25)
/* 80336A20 00333960  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80336A24 00333964  7D 89 03 A6 */	mtctr r12
/* 80336A28 00333968  4E 80 04 21 */	bctrl 
/* 80336A2C 0033396C  7F BD 1A 14 */	add r29, r29, r3
/* 80336A30 00333970  48 00 00 2C */	b lbl_80336A5C
lbl_80336A34:
/* 80336A34 00333974  7F 23 CB 78 */	mr r3, r25
/* 80336A38 00333978  7F 84 E3 78 */	mr r4, r28
/* 80336A3C 0033397C  48 00 05 B5 */	bl J3DModelLoader_NS_calcSizeTextureTable
/* 80336A40 00333980  7F BD 1A 14 */	add r29, r29, r3
/* 80336A44 00333984  3B 60 00 01 */	li r27, 1
/* 80336A48 00333988  48 00 00 14 */	b lbl_80336A5C
lbl_80336A4C:
/* 80336A4C 0033398C  3C 60 80 3A */	lis r3, lbl_803A20E8@ha
/* 80336A50 00333990  38 63 20 E8 */	addi r3, r3, lbl_803A20E8@l
/* 80336A54 00333994  4C C6 31 82 */	crclr 6
/* 80336A58 00333998  4B CD 00 65 */	bl OSReport
lbl_80336A5C:
/* 80336A5C 0033399C  80 1C 00 04 */	lwz r0, 4(r28)
/* 80336A60 003339A0  7F 9C 02 14 */	add r28, r28, r0
/* 80336A64 003339A4  3B 5A 00 01 */	addi r26, r26, 1
lbl_80336A68:
/* 80336A68 003339A8  7C 1A F8 40 */	cmplw r26, r31
/* 80336A6C 003339AC  41 80 FF 6C */	blt lbl_803369D8
/* 80336A70 003339B0  57 60 06 3F */	clrlwi. r0, r27, 0x18
/* 80336A74 003339B4  40 82 00 08 */	bne lbl_80336A7C
/* 80336A78 003339B8  3B BD 00 0C */	addi r29, r29, 0xc
lbl_80336A7C:
/* 80336A7C 003339BC  7F A3 EB 78 */	mr r3, r29
/* 80336A80 003339C0  39 61 00 30 */	addi r11, r1, 0x30
/* 80336A84 003339C4  48 02 B7 95 */	bl _restgpr_25
/* 80336A88 003339C8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80336A8C 003339CC  7C 08 03 A6 */	mtlr r0
/* 80336A90 003339D0  38 21 00 30 */	addi r1, r1, 0x30
/* 80336A94 003339D4  4E 80 00 20 */	blr 
/* 80336A98 003339D8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80336A9C 003339DC  7C 08 02 A6 */	mflr r0
/* 80336AA0 003339E0  90 01 00 34 */	stw r0, 0x34(r1)
/* 80336AA4 003339E4  39 61 00 30 */	addi r11, r1, 0x30
/* 80336AA8 003339E8  48 02 B7 19 */	bl _savegpr_22
/* 80336AAC 003339EC  7C 77 1B 78 */	mr r23, r3
/* 80336AB0 003339F0  7C B8 2B 78 */	mr r24, r5
/* 80336AB4 003339F4  3B 44 00 20 */	addi r26, r4, 0x20
/* 80336AB8 003339F8  3B 20 00 00 */	li r25, 0
/* 80336ABC 003339FC  7F 1C C3 78 */	mr r28, r24
/* 80336AC0 00333A00  54 BE 01 8E */	rlwinm r30, r5, 0, 6, 7
/* 80336AC4 00333A04  54 BD 04 A6 */	rlwinm r29, r5, 0, 0x12, 0x13
/* 80336AC8 00333A08  3B 60 00 E4 */	li r27, 0xe4
/* 80336ACC 00333A0C  3C 60 4D 41 */	lis r3, 0x4D415433@ha
/* 80336AD0 00333A10  3B E3 54 33 */	addi r31, r3, 0x4D415433@l
/* 80336AD4 00333A14  82 C4 00 0C */	lwz r22, 0xc(r4)
/* 80336AD8 00333A18  48 00 01 DC */	b lbl_80336CB4
lbl_80336ADC:
/* 80336ADC 00333A1C  80 1A 00 00 */	lwz r0, 0(r26)
/* 80336AE0 00333A20  7C 00 F8 00 */	cmpw r0, r31
/* 80336AE4 00333A24  41 82 01 2C */	beq lbl_80336C10
/* 80336AE8 00333A28  40 80 00 68 */	bge lbl_80336B50
/* 80336AEC 00333A2C  3C 60 49 4E */	lis r3, 0x494E4631@ha
/* 80336AF0 00333A30  38 63 46 31 */	addi r3, r3, 0x494E4631@l
/* 80336AF4 00333A34  7C 00 18 00 */	cmpw r0, r3
/* 80336AF8 00333A38  41 82 00 A8 */	beq lbl_80336BA0
/* 80336AFC 00333A3C  40 80 00 2C */	bge lbl_80336B28
/* 80336B00 00333A40  3C 60 45 56 */	lis r3, 0x45565031@ha
/* 80336B04 00333A44  38 63 50 31 */	addi r3, r3, 0x45565031@l
/* 80336B08 00333A48  7C 00 18 00 */	cmpw r0, r3
/* 80336B0C 00333A4C  41 82 01 64 */	beq lbl_80336C70
/* 80336B10 00333A50  40 80 01 88 */	bge lbl_80336C98
/* 80336B14 00333A54  3C 60 44 52 */	lis r3, 0x44525731@ha
/* 80336B18 00333A58  38 63 57 31 */	addi r3, r3, 0x44525731@l
/* 80336B1C 00333A5C  7C 00 18 00 */	cmpw r0, r3
/* 80336B20 00333A60  41 82 01 64 */	beq lbl_80336C84
/* 80336B24 00333A64  48 00 01 74 */	b lbl_80336C98
lbl_80336B28:
/* 80336B28 00333A68  3C 60 4A 4E */	lis r3, 0x4A4E5431@ha
/* 80336B2C 00333A6C  38 63 54 31 */	addi r3, r3, 0x4A4E5431@l
/* 80336B30 00333A70  7C 00 18 00 */	cmpw r0, r3
/* 80336B34 00333A74  41 82 00 84 */	beq lbl_80336BB8
/* 80336B38 00333A78  41 80 01 60 */	blt lbl_80336C98
/* 80336B3C 00333A7C  3C 60 4D 41 */	lis r3, 0x4D415432@ha
/* 80336B40 00333A80  38 63 54 32 */	addi r3, r3, 0x4D415432@l
/* 80336B44 00333A84  7C 00 18 00 */	cmpw r0, r3
/* 80336B48 00333A88  40 80 01 60 */	bge lbl_80336CA8
/* 80336B4C 00333A8C  48 00 01 4C */	b lbl_80336C98
lbl_80336B50:
/* 80336B50 00333A90  3C 60 54 45 */	lis r3, 0x54455831@ha
/* 80336B54 00333A94  38 63 58 31 */	addi r3, r3, 0x54455831@l
/* 80336B58 00333A98  7C 00 18 00 */	cmpw r0, r3
/* 80336B5C 00333A9C  41 82 00 88 */	beq lbl_80336BE4
/* 80336B60 00333AA0  40 80 00 2C */	bge lbl_80336B8C
/* 80336B64 00333AA4  3C 60 53 48 */	lis r3, 0x53485031@ha
/* 80336B68 00333AA8  38 63 50 31 */	addi r3, r3, 0x53485031@l
/* 80336B6C 00333AAC  7C 00 18 00 */	cmpw r0, r3
/* 80336B70 00333AB0  41 82 00 5C */	beq lbl_80336BCC
/* 80336B74 00333AB4  40 80 01 24 */	bge lbl_80336C98
/* 80336B78 00333AB8  3C 60 4D 44 */	lis r3, 0x4D444C33@ha
/* 80336B7C 00333ABC  38 63 4C 33 */	addi r3, r3, 0x4D444C33@l
/* 80336B80 00333AC0  7C 00 18 00 */	cmpw r0, r3
/* 80336B84 00333AC4  41 82 00 74 */	beq lbl_80336BF8
/* 80336B88 00333AC8  48 00 01 10 */	b lbl_80336C98
lbl_80336B8C:
/* 80336B8C 00333ACC  3C 60 56 54 */	lis r3, 0x56545831@ha
/* 80336B90 00333AD0  38 63 58 31 */	addi r3, r3, 0x56545831@l
/* 80336B94 00333AD4  7C 00 18 00 */	cmpw r0, r3
/* 80336B98 00333AD8  41 82 01 10 */	beq lbl_80336CA8
/* 80336B9C 00333ADC  48 00 00 FC */	b lbl_80336C98
lbl_80336BA0:
/* 80336BA0 00333AE0  7E E3 BB 78 */	mr r3, r23
/* 80336BA4 00333AE4  7F 44 D3 78 */	mr r4, r26
/* 80336BA8 00333AE8  7F 85 E3 78 */	mr r5, r28
/* 80336BAC 00333AEC  48 00 01 2D */	bl J3DModelLoader_NS_calcSizeInformation
/* 80336BB0 00333AF0  7F 7B 1A 14 */	add r27, r27, r3
/* 80336BB4 00333AF4  48 00 00 F4 */	b lbl_80336CA8
lbl_80336BB8:
/* 80336BB8 00333AF8  7E E3 BB 78 */	mr r3, r23
/* 80336BBC 00333AFC  7F 44 D3 78 */	mr r4, r26
/* 80336BC0 00333B00  48 00 01 A5 */	bl J3DModelLoader_NS_calcSizeJoint
/* 80336BC4 00333B04  7F 7B 1A 14 */	add r27, r27, r3
/* 80336BC8 00333B08  48 00 00 E0 */	b lbl_80336CA8
lbl_80336BCC:
/* 80336BCC 00333B0C  7E E3 BB 78 */	mr r3, r23
/* 80336BD0 00333B10  7F 44 D3 78 */	mr r4, r26
/* 80336BD4 00333B14  7F 85 E3 78 */	mr r5, r28
/* 80336BD8 00333B18  48 00 02 C9 */	bl J3DModelLoader_NS_calcSizeShape
/* 80336BDC 00333B1C  7F 7B 1A 14 */	add r27, r27, r3
/* 80336BE0 00333B20  48 00 00 C8 */	b lbl_80336CA8
lbl_80336BE4:
/* 80336BE4 00333B24  7E E3 BB 78 */	mr r3, r23
/* 80336BE8 00333B28  7F 44 D3 78 */	mr r4, r26
/* 80336BEC 00333B2C  48 00 03 59 */	bl J3DModelLoader_NS_calcSizeTexture
/* 80336BF0 00333B30  7F 7B 1A 14 */	add r27, r27, r3
/* 80336BF4 00333B34  48 00 00 B4 */	b lbl_80336CA8
lbl_80336BF8:
/* 80336BF8 00333B38  7E E3 BB 78 */	mr r3, r23
/* 80336BFC 00333B3C  7F 44 D3 78 */	mr r4, r26
/* 80336C00 00333B40  7F 05 C3 78 */	mr r5, r24
/* 80336C04 00333B44  48 00 04 9D */	bl J3DModelLoader_NS_calcSizeMaterialDL
/* 80336C08 00333B48  7F 7B 1A 14 */	add r27, r27, r3
/* 80336C0C 00333B4C  48 00 00 9C */	b lbl_80336CA8
lbl_80336C10:
/* 80336C10 00333B50  3C A0 50 10 */	lis r5, 0x5010
/* 80336C14 00333B54  7C A5 F3 78 */	or r5, r5, r30
/* 80336C18 00333B58  93 57 00 10 */	stw r26, 0x10(r23)
/* 80336C1C 00333B5C  28 1D 00 00 */	cmplwi r29, 0
/* 80336C20 00333B60  40 82 00 2C */	bne lbl_80336C4C
/* 80336C24 00333B64  38 00 00 01 */	li r0, 1
/* 80336C28 00333B68  98 17 00 18 */	stb r0, 0x18(r23)
/* 80336C2C 00333B6C  7E E3 BB 78 */	mr r3, r23
/* 80336C30 00333B70  7F 44 D3 78 */	mr r4, r26
/* 80336C34 00333B74  81 97 00 00 */	lwz r12, 0(r23)
/* 80336C38 00333B78  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80336C3C 00333B7C  7D 89 03 A6 */	mtctr r12
/* 80336C40 00333B80  4E 80 04 21 */	bctrl 
/* 80336C44 00333B84  7F 7B 1A 14 */	add r27, r27, r3
/* 80336C48 00333B88  48 00 00 60 */	b lbl_80336CA8
lbl_80336C4C:
/* 80336C4C 00333B8C  28 1D 20 00 */	cmplwi r29, 0x2000
/* 80336C50 00333B90  40 82 00 58 */	bne lbl_80336CA8
/* 80336C54 00333B94  38 00 00 01 */	li r0, 1
/* 80336C58 00333B98  98 17 00 18 */	stb r0, 0x18(r23)
/* 80336C5C 00333B9C  7E E3 BB 78 */	mr r3, r23
/* 80336C60 00333BA0  7F 44 D3 78 */	mr r4, r26
/* 80336C64 00333BA4  48 00 03 AD */	bl J3DModelLoader_NS_calcSizePatchedMaterial
/* 80336C68 00333BA8  7F 7B 1A 14 */	add r27, r27, r3
/* 80336C6C 00333BAC  48 00 00 3C */	b lbl_80336CA8
lbl_80336C70:
/* 80336C70 00333BB0  7E E3 BB 78 */	mr r3, r23
/* 80336C74 00333BB4  7F 44 D3 78 */	mr r4, r26
/* 80336C78 00333BB8  48 00 01 19 */	bl J3DModelLoader_NS_calcSizeEnvelope
/* 80336C7C 00333BBC  7F 7B 1A 14 */	add r27, r27, r3
/* 80336C80 00333BC0  48 00 00 28 */	b lbl_80336CA8
lbl_80336C84:
/* 80336C84 00333BC4  7E E3 BB 78 */	mr r3, r23
/* 80336C88 00333BC8  7F 44 D3 78 */	mr r4, r26
/* 80336C8C 00333BCC  48 00 01 15 */	bl J3DModelLoader_NS_calcSizeDraw
/* 80336C90 00333BD0  7F 7B 1A 14 */	add r27, r27, r3
/* 80336C94 00333BD4  48 00 00 14 */	b lbl_80336CA8
lbl_80336C98:
/* 80336C98 00333BD8  3C 60 80 3A */	lis r3, lbl_803A20E8@ha
/* 80336C9C 00333BDC  38 63 20 E8 */	addi r3, r3, lbl_803A20E8@l
/* 80336CA0 00333BE0  4C C6 31 82 */	crclr 6
/* 80336CA4 00333BE4  4B CC FE 19 */	bl OSReport
lbl_80336CA8:
/* 80336CA8 00333BE8  80 1A 00 04 */	lwz r0, 4(r26)
/* 80336CAC 00333BEC  7F 5A 02 14 */	add r26, r26, r0
/* 80336CB0 00333BF0  3B 39 00 01 */	addi r25, r25, 1
lbl_80336CB4:
/* 80336CB4 00333BF4  7C 19 B0 40 */	cmplw r25, r22
/* 80336CB8 00333BF8  41 80 FE 24 */	blt lbl_80336ADC
/* 80336CBC 00333BFC  7F 63 DB 78 */	mr r3, r27
/* 80336CC0 00333C00  39 61 00 30 */	addi r11, r1, 0x30
/* 80336CC4 00333C04  48 02 B5 49 */	bl _restgpr_22
/* 80336CC8 00333C08  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80336CCC 00333C0C  7C 08 03 A6 */	mtlr r0
/* 80336CD0 00333C10  38 21 00 30 */	addi r1, r1, 0x30
/* 80336CD4 00333C14  4E 80 00 20 */	blr 

.global J3DModelLoader_NS_calcSizeInformation
J3DModelLoader_NS_calcSizeInformation:
/* 80336CD8 00333C18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80336CDC 00333C1C  7C 08 02 A6 */	mflr r0
/* 80336CE0 00333C20  90 01 00 14 */	stw r0, 0x14(r1)
/* 80336CE4 00333C24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80336CE8 00333C28  93 C1 00 08 */	stw r30, 8(r1)
/* 80336CEC 00333C2C  7C 7E 1B 78 */	mr r30, r3
/* 80336CF0 00333C30  3B E0 00 00 */	li r31, 0
/* 80336CF4 00333C34  A0 04 00 08 */	lhz r0, 8(r4)
/* 80336CF8 00333C38  7C A0 03 78 */	or r0, r5, r0
/* 80336CFC 00333C3C  54 00 07 3E */	clrlwi r0, r0, 0x1c
/* 80336D00 00333C40  2C 00 00 01 */	cmpwi r0, 1
/* 80336D04 00333C44  41 82 00 28 */	beq lbl_80336D2C
/* 80336D08 00333C48  40 80 00 10 */	bge lbl_80336D18
/* 80336D0C 00333C4C  2C 00 00 00 */	cmpwi r0, 0
/* 80336D10 00333C50  40 80 00 14 */	bge lbl_80336D24
/* 80336D14 00333C54  48 00 00 24 */	b lbl_80336D38
lbl_80336D18:
/* 80336D18 00333C58  2C 00 00 03 */	cmpwi r0, 3
/* 80336D1C 00333C5C  40 80 00 1C */	bge lbl_80336D38
/* 80336D20 00333C60  48 00 00 14 */	b lbl_80336D34
lbl_80336D24:
/* 80336D24 00333C64  3B E0 00 04 */	li r31, 4
/* 80336D28 00333C68  48 00 00 10 */	b lbl_80336D38
lbl_80336D2C:
/* 80336D2C 00333C6C  3B E0 00 04 */	li r31, 4
/* 80336D30 00333C70  48 00 00 08 */	b lbl_80336D38
lbl_80336D34:
/* 80336D34 00333C74  3B E0 00 04 */	li r31, 4
lbl_80336D38:
/* 80336D38 00333C78  7C 83 23 78 */	mr r3, r4
/* 80336D3C 00333C7C  80 84 00 14 */	lwz r4, 0x14(r4)
/* 80336D40 00333C80  4B FF FA 0D */	bl JSUConvertOffsetToPtr_X70_
/* 80336D44 00333C84  90 7E 00 14 */	stw r3, 0x14(r30)
/* 80336D48 00333C88  7F E3 FB 78 */	mr r3, r31
/* 80336D4C 00333C8C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80336D50 00333C90  83 C1 00 08 */	lwz r30, 8(r1)
/* 80336D54 00333C94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80336D58 00333C98  7C 08 03 A6 */	mtlr r0
/* 80336D5C 00333C9C  38 21 00 10 */	addi r1, r1, 0x10
/* 80336D60 00333CA0  4E 80 00 20 */	blr 

.global J3DModelLoader_NS_calcSizeJoint
J3DModelLoader_NS_calcSizeJoint:
/* 80336D64 00333CA4  38 60 00 00 */	li r3, 0
/* 80336D68 00333CA8  80 04 00 14 */	lwz r0, 0x14(r4)
/* 80336D6C 00333CAC  28 00 00 00 */	cmplwi r0, 0
/* 80336D70 00333CB0  41 82 00 08 */	beq lbl_80336D78
/* 80336D74 00333CB4  38 60 00 10 */	li r3, 0x10
lbl_80336D78:
/* 80336D78 00333CB8  A0 84 00 08 */	lhz r4, 8(r4)
/* 80336D7C 00333CBC  54 80 10 3A */	slwi r0, r4, 2
/* 80336D80 00333CC0  7C 63 02 14 */	add r3, r3, r0
/* 80336D84 00333CC4  1C 04 00 5C */	mulli r0, r4, 0x5c
/* 80336D88 00333CC8  7C 63 02 14 */	add r3, r3, r0
/* 80336D8C 00333CCC  4E 80 00 20 */	blr 

.global J3DModelLoader_NS_calcSizeEnvelope
J3DModelLoader_NS_calcSizeEnvelope:
/* 80336D90 00333CD0  A0 04 00 08 */	lhz r0, 8(r4)
/* 80336D94 00333CD4  B0 03 00 1A */	sth r0, 0x1a(r3)
/* 80336D98 00333CD8  38 60 00 00 */	li r3, 0
/* 80336D9C 00333CDC  4E 80 00 20 */	blr 

.global J3DModelLoader_NS_calcSizeDraw
J3DModelLoader_NS_calcSizeDraw:
/* 80336DA0 00333CE0  A0 63 00 1A */	lhz r3, 0x1a(r3)
/* 80336DA4 00333CE4  A0 04 00 08 */	lhz r0, 8(r4)
/* 80336DA8 00333CE8  7C 03 00 50 */	subf r0, r3, r0
/* 80336DAC 00333CEC  54 03 08 3C */	slwi r3, r0, 1
/* 80336DB0 00333CF0  4E 80 00 20 */	blr 
/* 80336DB4 00333CF4  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 80336DB8 00333CF8  7C 08 02 A6 */	mflr r0
/* 80336DBC 00333CFC  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 80336DC0 00333D00  39 61 00 B0 */	addi r11, r1, 0xb0
/* 80336DC4 00333D04  48 02 B4 11 */	bl _savegpr_27
/* 80336DC8 00333D08  7C 9C 23 78 */	mr r28, r4
/* 80336DCC 00333D0C  7C BB 2B 78 */	mr r27, r5
/* 80336DD0 00333D10  3B E0 00 00 */	li r31, 0
/* 80336DD4 00333D14  38 61 00 08 */	addi r3, r1, 8
/* 80336DD8 00333D18  4B FF 92 15 */	bl J3DMaterialFactory
/* 80336DDC 00333D1C  A3 DC 00 08 */	lhz r30, 8(r28)
/* 80336DE0 00333D20  38 61 00 08 */	addi r3, r1, 8
/* 80336DE4 00333D24  4B FF 94 D9 */	bl J3DMaterialFactory_NS_countUniqueMaterials
/* 80336DE8 00333D28  54 7D 04 3E */	clrlwi r29, r3, 0x10
/* 80336DEC 00333D2C  80 1C 00 14 */	lwz r0, 0x14(r28)
/* 80336DF0 00333D30  28 00 00 00 */	cmplwi r0, 0
/* 80336DF4 00333D34  41 82 00 08 */	beq lbl_80336DFC
/* 80336DF8 00333D38  3B E0 00 10 */	li r31, 0x10
lbl_80336DFC:
/* 80336DFC 00333D3C  57 C0 10 3A */	slwi r0, r30, 2
/* 80336E00 00333D40  7F FF 02 14 */	add r31, r31, r0
/* 80336E04 00333D44  57 64 02 95 */	rlwinm. r4, r27, 0, 0xa, 0xa
/* 80336E08 00333D48  41 82 00 14 */	beq lbl_80336E1C
/* 80336E0C 00333D4C  1C 7D 00 4C */	mulli r3, r29, 0x4c
/* 80336E10 00333D50  38 03 00 1F */	addi r0, r3, 0x1f
/* 80336E14 00333D54  54 00 00 34 */	rlwinm r0, r0, 0, 0, 0x1a
/* 80336E18 00333D58  7F FF 02 14 */	add r31, r31, r0
lbl_80336E1C:
/* 80336E1C 00333D5C  28 04 00 00 */	cmplwi r4, 0
/* 80336E20 00333D60  41 82 00 34 */	beq lbl_80336E54
/* 80336E24 00333D64  3B 80 00 00 */	li r28, 0
/* 80336E28 00333D68  48 00 00 24 */	b lbl_80336E4C
lbl_80336E2C:
/* 80336E2C 00333D6C  38 61 00 08 */	addi r3, r1, 8
/* 80336E30 00333D70  38 80 00 00 */	li r4, 0
/* 80336E34 00333D74  38 A0 00 00 */	li r5, 0
/* 80336E38 00333D78  7F 86 E3 78 */	mr r6, r28
/* 80336E3C 00333D7C  7F 67 DB 78 */	mr r7, r27
/* 80336E40 00333D80  4B FF AC 3D */	bl J3DMaterialFactory_NS_calcSize
/* 80336E44 00333D84  7F FF 1A 14 */	add r31, r31, r3
/* 80336E48 00333D88  3B 9C 00 01 */	addi r28, r28, 1
lbl_80336E4C:
/* 80336E4C 00333D8C  7C 1C E8 40 */	cmplw r28, r29
/* 80336E50 00333D90  41 80 FF DC */	blt lbl_80336E2C
lbl_80336E54:
/* 80336E54 00333D94  3B 80 00 00 */	li r28, 0
/* 80336E58 00333D98  48 00 00 24 */	b lbl_80336E7C
lbl_80336E5C:
/* 80336E5C 00333D9C  38 61 00 08 */	addi r3, r1, 8
/* 80336E60 00333DA0  38 80 00 00 */	li r4, 0
/* 80336E64 00333DA4  38 A0 00 00 */	li r5, 0
/* 80336E68 00333DA8  7F 86 E3 78 */	mr r6, r28
/* 80336E6C 00333DAC  7F 67 DB 78 */	mr r7, r27
/* 80336E70 00333DB0  4B FF AC 0D */	bl J3DMaterialFactory_NS_calcSize
/* 80336E74 00333DB4  7F FF 1A 14 */	add r31, r31, r3
/* 80336E78 00333DB8  3B 9C 00 01 */	addi r28, r28, 1
lbl_80336E7C:
/* 80336E7C 00333DBC  7C 1C F0 40 */	cmplw r28, r30
/* 80336E80 00333DC0  41 80 FF DC */	blt lbl_80336E5C
/* 80336E84 00333DC4  7F E3 FB 78 */	mr r3, r31
/* 80336E88 00333DC8  39 61 00 B0 */	addi r11, r1, 0xb0
/* 80336E8C 00333DCC  48 02 B3 95 */	bl _restgpr_27
/* 80336E90 00333DD0  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 80336E94 00333DD4  7C 08 03 A6 */	mtlr r0
/* 80336E98 00333DD8  38 21 00 B0 */	addi r1, r1, 0xb0
/* 80336E9C 00333DDC  4E 80 00 20 */	blr 

.global J3DModelLoader_NS_calcSizeShape
J3DModelLoader_NS_calcSizeShape:
/* 80336EA0 00333DE0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80336EA4 00333DE4  7C 08 02 A6 */	mflr r0
/* 80336EA8 00333DE8  90 01 00 44 */	stw r0, 0x44(r1)
/* 80336EAC 00333DEC  39 61 00 40 */	addi r11, r1, 0x40
/* 80336EB0 00333DF0  48 02 B3 29 */	bl _savegpr_28
/* 80336EB4 00333DF4  7C 7C 1B 78 */	mr r28, r3
/* 80336EB8 00333DF8  7C 9E 23 78 */	mr r30, r4
/* 80336EBC 00333DFC  7C BD 2B 78 */	mr r29, r5
/* 80336EC0 00333E00  3B E0 00 00 */	li r31, 0
/* 80336EC4 00333E04  38 61 00 08 */	addi r3, r1, 8
/* 80336EC8 00333E08  48 00 04 89 */	bl J3DShapeFactory
/* 80336ECC 00333E0C  A0 9E 00 08 */	lhz r4, 8(r30)
/* 80336ED0 00333E10  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 80336ED4 00333E14  28 00 00 00 */	cmplwi r0, 0
/* 80336ED8 00333E18  41 82 00 08 */	beq lbl_80336EE0
/* 80336EDC 00333E1C  3B E0 00 10 */	li r31, 0x10
lbl_80336EE0:
/* 80336EE0 00333E20  54 80 10 3A */	slwi r0, r4, 2
/* 80336EE4 00333E24  7F FF 02 14 */	add r31, r31, r0
/* 80336EE8 00333E28  38 61 00 08 */	addi r3, r1, 8
/* 80336EEC 00333E2C  48 00 0A ED */	bl J3DShapeFactory_NS_calcSizeVcdVatCmdBuffer
/* 80336EF0 00333E30  7F FF 1A 14 */	add r31, r31, r3
/* 80336EF4 00333E34  83 DC 00 14 */	lwz r30, 0x14(r28)
/* 80336EF8 00333E38  48 00 00 24 */	b lbl_80336F1C
lbl_80336EFC:
/* 80336EFC 00333E3C  28 00 00 12 */	cmplwi r0, 0x12
/* 80336F00 00333E40  40 82 00 18 */	bne lbl_80336F18
/* 80336F04 00333E44  38 61 00 08 */	addi r3, r1, 8
/* 80336F08 00333E48  A0 9E 00 02 */	lhz r4, 2(r30)
/* 80336F0C 00333E4C  7F A5 EB 78 */	mr r5, r29
/* 80336F10 00333E50  48 00 0A 35 */	bl J3DShapeFactory_NS_calcSize
/* 80336F14 00333E54  7F FF 1A 14 */	add r31, r31, r3
lbl_80336F18:
/* 80336F18 00333E58  3B DE 00 04 */	addi r30, r30, 4
lbl_80336F1C:
/* 80336F1C 00333E5C  A0 1E 00 00 */	lhz r0, 0(r30)
/* 80336F20 00333E60  28 00 00 00 */	cmplwi r0, 0
/* 80336F24 00333E64  40 82 FF D8 */	bne lbl_80336EFC
/* 80336F28 00333E68  7F E3 FB 78 */	mr r3, r31
/* 80336F2C 00333E6C  39 61 00 40 */	addi r11, r1, 0x40
/* 80336F30 00333E70  48 02 B2 F5 */	bl _restgpr_28
/* 80336F34 00333E74  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80336F38 00333E78  7C 08 03 A6 */	mtlr r0
/* 80336F3C 00333E7C  38 21 00 40 */	addi r1, r1, 0x40
/* 80336F40 00333E80  4E 80 00 20 */	blr 

.global J3DModelLoader_NS_calcSizeTexture
J3DModelLoader_NS_calcSizeTexture:
/* 80336F44 00333E84  38 60 00 00 */	li r3, 0
/* 80336F48 00333E88  80 04 00 10 */	lwz r0, 0x10(r4)
/* 80336F4C 00333E8C  28 00 00 00 */	cmplwi r0, 0
/* 80336F50 00333E90  41 82 00 08 */	beq lbl_80336F58
/* 80336F54 00333E94  38 60 00 10 */	li r3, 0x10
lbl_80336F58:
/* 80336F58 00333E98  38 63 00 0C */	addi r3, r3, 0xc
/* 80336F5C 00333E9C  4E 80 00 20 */	blr 
/* 80336F60 00333EA0  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80336F64 00333EA4  7C 08 02 A6 */	mflr r0
/* 80336F68 00333EA8  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80336F6C 00333EAC  39 61 00 A0 */	addi r11, r1, 0xa0
/* 80336F70 00333EB0  48 02 B2 69 */	bl _savegpr_28
/* 80336F74 00333EB4  7C 9D 23 78 */	mr r29, r4
/* 80336F78 00333EB8  7C BC 2B 78 */	mr r28, r5
/* 80336F7C 00333EBC  3B E0 00 00 */	li r31, 0
/* 80336F80 00333EC0  A3 C4 00 08 */	lhz r30, 8(r4)
/* 80336F84 00333EC4  38 61 00 08 */	addi r3, r1, 8
/* 80336F88 00333EC8  4B FF 90 65 */	bl J3DMaterialFactory
/* 80336F8C 00333ECC  80 1D 00 14 */	lwz r0, 0x14(r29)
/* 80336F90 00333ED0  28 00 00 00 */	cmplwi r0, 0
/* 80336F94 00333ED4  41 82 00 08 */	beq lbl_80336F9C
/* 80336F98 00333ED8  3B E0 00 10 */	li r31, 0x10
lbl_80336F9C:
/* 80336F9C 00333EDC  57 C0 10 3A */	slwi r0, r30, 2
/* 80336FA0 00333EE0  7F FF 02 14 */	add r31, r31, r0
/* 80336FA4 00333EE4  3B A0 00 00 */	li r29, 0
/* 80336FA8 00333EE8  48 00 00 20 */	b lbl_80336FC8
lbl_80336FAC:
/* 80336FAC 00333EEC  38 61 00 08 */	addi r3, r1, 8
/* 80336FB0 00333EF0  38 80 00 00 */	li r4, 0
/* 80336FB4 00333EF4  38 A0 00 00 */	li r5, 0
/* 80336FB8 00333EF8  7F 87 E3 78 */	mr r7, r28
/* 80336FBC 00333EFC  4B FF AA C1 */	bl J3DMaterialFactory_NS_calcSize
/* 80336FC0 00333F00  7F FF 1A 14 */	add r31, r31, r3
/* 80336FC4 00333F04  3B BD 00 01 */	addi r29, r29, 1
lbl_80336FC8:
/* 80336FC8 00333F08  57 A6 04 3E */	clrlwi r6, r29, 0x10
/* 80336FCC 00333F0C  7C 06 F0 40 */	cmplw r6, r30
/* 80336FD0 00333F10  41 80 FF DC */	blt lbl_80336FAC
/* 80336FD4 00333F14  7F E3 FB 78 */	mr r3, r31
/* 80336FD8 00333F18  39 61 00 A0 */	addi r11, r1, 0xa0
/* 80336FDC 00333F1C  48 02 B2 49 */	bl _restgpr_28
/* 80336FE0 00333F20  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80336FE4 00333F24  7C 08 03 A6 */	mtlr r0
/* 80336FE8 00333F28  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80336FEC 00333F2C  4E 80 00 20 */	blr 

.global J3DModelLoader_NS_calcSizeTextureTable
J3DModelLoader_NS_calcSizeTextureTable:
/* 80336FF0 00333F30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80336FF4 00333F34  7C 08 02 A6 */	mflr r0
/* 80336FF8 00333F38  90 01 00 14 */	stw r0, 0x14(r1)
/* 80336FFC 00333F3C  4B FF FF 49 */	bl J3DModelLoader_NS_calcSizeTexture
/* 80337000 00333F40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80337004 00333F44  7C 08 03 A6 */	mtlr r0
/* 80337008 00333F48  38 21 00 10 */	addi r1, r1, 0x10
/* 8033700C 00333F4C  4E 80 00 20 */	blr 

.global J3DModelLoader_NS_calcSizePatchedMaterial
J3DModelLoader_NS_calcSizePatchedMaterial:
/* 80337010 00333F50  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 80337014 00333F54  7C 08 02 A6 */	mflr r0
/* 80337018 00333F58  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8033701C 00333F5C  39 61 00 A0 */	addi r11, r1, 0xa0
/* 80337020 00333F60  48 02 B1 B9 */	bl _savegpr_28
/* 80337024 00333F64  7C 9D 23 78 */	mr r29, r4
/* 80337028 00333F68  7C BC 2B 78 */	mr r28, r5
/* 8033702C 00333F6C  3B E0 00 00 */	li r31, 0
/* 80337030 00333F70  A3 C4 00 08 */	lhz r30, 8(r4)
/* 80337034 00333F74  38 61 00 08 */	addi r3, r1, 8
/* 80337038 00333F78  4B FF 8F B5 */	bl J3DMaterialFactory
/* 8033703C 00333F7C  80 1D 00 14 */	lwz r0, 0x14(r29)
/* 80337040 00333F80  28 00 00 00 */	cmplwi r0, 0
/* 80337044 00333F84  41 82 00 08 */	beq lbl_8033704C
/* 80337048 00333F88  3B E0 00 10 */	li r31, 0x10
lbl_8033704C:
/* 8033704C 00333F8C  57 C0 10 3A */	slwi r0, r30, 2
/* 80337050 00333F90  7F FF 02 14 */	add r31, r31, r0
/* 80337054 00333F94  3B A0 00 00 */	li r29, 0
/* 80337058 00333F98  48 00 00 20 */	b lbl_80337078
lbl_8033705C:
/* 8033705C 00333F9C  38 61 00 08 */	addi r3, r1, 8
/* 80337060 00333FA0  38 80 00 00 */	li r4, 0
/* 80337064 00333FA4  38 A0 00 02 */	li r5, 2
/* 80337068 00333FA8  7F 87 E3 78 */	mr r7, r28
/* 8033706C 00333FAC  4B FF AA 11 */	bl J3DMaterialFactory_NS_calcSize
/* 80337070 00333FB0  7F FF 1A 14 */	add r31, r31, r3
/* 80337074 00333FB4  3B BD 00 01 */	addi r29, r29, 1
lbl_80337078:
/* 80337078 00333FB8  57 A6 04 3E */	clrlwi r6, r29, 0x10
/* 8033707C 00333FBC  7C 06 F0 40 */	cmplw r6, r30
/* 80337080 00333FC0  41 80 FF DC */	blt lbl_8033705C
/* 80337084 00333FC4  7F E3 FB 78 */	mr r3, r31
/* 80337088 00333FC8  39 61 00 A0 */	addi r11, r1, 0xa0
/* 8033708C 00333FCC  48 02 B1 99 */	bl _restgpr_28
/* 80337090 00333FD0  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80337094 00333FD4  7C 08 03 A6 */	mtlr r0
/* 80337098 00333FD8  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8033709C 00333FDC  4E 80 00 20 */	blr 

.global J3DModelLoader_NS_calcSizeMaterialDL
J3DModelLoader_NS_calcSizeMaterialDL:
/* 803370A0 00333FE0  94 21 FF 50 */	stwu r1, -0xb0(r1)
/* 803370A4 00333FE4  7C 08 02 A6 */	mflr r0
/* 803370A8 00333FE8  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 803370AC 00333FEC  39 61 00 B0 */	addi r11, r1, 0xb0
/* 803370B0 00333FF0  48 02 B1 25 */	bl _savegpr_27
/* 803370B4 00333FF4  7C 7B 1B 78 */	mr r27, r3
/* 803370B8 00333FF8  7C 9C 23 78 */	mr r28, r4
/* 803370BC 00333FFC  7C BF 2B 78 */	mr r31, r5
/* 803370C0 00334000  3B C0 00 00 */	li r30, 0
/* 803370C4 00334004  38 61 00 08 */	addi r3, r1, 8
/* 803370C8 00334008  4B FF 91 6D */	bl J3DMaterialFactory_X1_
/* 803370CC 0033400C  88 1B 00 18 */	lbz r0, 0x18(r27)
/* 803370D0 00334010  28 00 00 00 */	cmplwi r0, 0
/* 803370D4 00334014  40 82 00 54 */	bne lbl_80337128
/* 803370D8 00334018  A3 BC 00 08 */	lhz r29, 8(r28)
/* 803370DC 0033401C  80 1C 00 20 */	lwz r0, 0x20(r28)
/* 803370E0 00334020  28 00 00 00 */	cmplwi r0, 0
/* 803370E4 00334024  41 82 00 08 */	beq lbl_803370EC
/* 803370E8 00334028  3B C0 00 10 */	li r30, 0x10
lbl_803370EC:
/* 803370EC 0033402C  57 A0 10 3A */	slwi r0, r29, 2
/* 803370F0 00334030  7F DE 02 14 */	add r30, r30, r0
/* 803370F4 00334034  3B 80 00 00 */	li r28, 0
/* 803370F8 00334038  48 00 00 20 */	b lbl_80337118
lbl_803370FC:
/* 803370FC 0033403C  38 61 00 08 */	addi r3, r1, 8
/* 80337100 00334040  38 80 00 00 */	li r4, 0
/* 80337104 00334044  38 A0 00 01 */	li r5, 1
/* 80337108 00334048  7F E7 FB 78 */	mr r7, r31
/* 8033710C 0033404C  4B FF A9 71 */	bl J3DMaterialFactory_NS_calcSize
/* 80337110 00334050  7F DE 1A 14 */	add r30, r30, r3
/* 80337114 00334054  3B 9C 00 01 */	addi r28, r28, 1
lbl_80337118:
/* 80337118 00334058  57 86 04 3E */	clrlwi r6, r28, 0x10
/* 8033711C 0033405C  7C 06 E8 40 */	cmplw r6, r29
/* 80337120 00334060  41 80 FF DC */	blt lbl_803370FC
/* 80337124 00334064  48 00 00 38 */	b lbl_8033715C
lbl_80337128:
/* 80337128 00334068  A3 9C 00 08 */	lhz r28, 8(r28)
/* 8033712C 0033406C  3B A0 00 00 */	li r29, 0
/* 80337130 00334070  48 00 00 20 */	b lbl_80337150
lbl_80337134:
/* 80337134 00334074  38 61 00 08 */	addi r3, r1, 8
/* 80337138 00334078  7F 64 DB 78 */	mr r4, r27
/* 8033713C 0033407C  38 A0 00 01 */	li r5, 1
/* 80337140 00334080  7F E7 FB 78 */	mr r7, r31
/* 80337144 00334084  4B FF A9 39 */	bl J3DMaterialFactory_NS_calcSize
/* 80337148 00334088  7F DE 1A 14 */	add r30, r30, r3
/* 8033714C 0033408C  3B BD 00 01 */	addi r29, r29, 1
lbl_80337150:
/* 80337150 00334090  57 A6 04 3E */	clrlwi r6, r29, 0x10
/* 80337154 00334094  7C 06 E0 40 */	cmplw r6, r28
/* 80337158 00334098  41 80 FF DC */	blt lbl_80337134
lbl_8033715C:
/* 8033715C 0033409C  7F C3 F3 78 */	mr r3, r30
/* 80337160 003340A0  39 61 00 B0 */	addi r11, r1, 0xb0
/* 80337164 003340A4  48 02 B0 BD */	bl _restgpr_27
/* 80337168 003340A8  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 8033716C 003340AC  7C 08 03 A6 */	mtlr r0
/* 80337170 003340B0  38 21 00 B0 */	addi r1, r1, 0xb0
/* 80337174 003340B4  4E 80 00 20 */	blr 
