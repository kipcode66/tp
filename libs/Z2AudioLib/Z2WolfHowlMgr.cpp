//
// Generated By: dol2asm
// Translation Unit: Z2WolfHowlMgr
//

#include "Z2AudioLib/Z2WolfHowlMgr.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct Z2WolfHowlData {};

struct Vec {};

struct Z2WolfHowlMgr {
    /* 802CAAC0 */ Z2WolfHowlMgr();
    /* 802CAB8C */ void resetState();
    /* 802CABEC */ void calcVolumeMod(f32);
    /* 802CACB0 */ void getNowPitch();
    /* 802CACCC */ void getNowInputValue();
    /* 802CACD4 */ void calcPitchMod(f32, f32);
    /* 802CAED4 */ void startWolfHowlSound(f32, f32, bool, f32);
    /* 802CB100 */ void setCorrectData(s8, Z2WolfHowlData*);
    /* 802CB320 */ void getCorrectLine(u8);
    /* 802CB370 */ void getCorrectLineNum();
    /* 802CB38C */ void checkLine();
    /* 802CB650 */ void getOnLineNum();
    /* 802CB6EC */ void startWindStoneSound(s8, Vec*);
    /* 802CBA88 */ void startGuideMelody(bool);
    /* 802CBB58 */ void skipCorrectDemo();
};

struct Z2SeqMgr {
    /* 802AF49C */ void subBgmStart(u32);
    /* 802B327C */ void stopWolfHowlSong();
};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2Calc {
    struct CurveSign {};

    /* 802A968C */ void linearTransform(f32, f32, f32, f32, f32, bool);
    /* 802A96F4 */ void getParamByExp(f32, f32, f32, f32, f32, f32, Z2Calc::CurveSign);
};

struct JGeometry {
    template <typename A1>
    struct TVec3 {};
    /* TVec3<f32> */
    struct TVec3__template0 {};
};

struct JAISoundHandle {};

struct JAISoundStarter {
    /* 802A2FEC */ void startLevelSound(JAISoundID, JAISoundHandle*, JGeometry::TVec3<f32> const*);
};

struct JAISoundParamsMove {
    /* 802A2DB4 */ void moveVolume(f32, u32);
    /* 802A2E0C */ void movePitch(f32, u32);
};

struct JAISound {
    /* 802A2598 */ void stop();
    /* 802A24DC */ void stop(u32);
};

//
// Forward References:
//

extern "C" void __ct__13Z2WolfHowlMgrFv();
extern "C" void resetState__13Z2WolfHowlMgrFv();
extern "C" void calcVolumeMod__13Z2WolfHowlMgrFf();
extern "C" void getNowPitch__13Z2WolfHowlMgrFv();
extern "C" void getNowInputValue__13Z2WolfHowlMgrFv();
extern "C" void calcPitchMod__13Z2WolfHowlMgrFff();
extern "C" void startWolfHowlSound__13Z2WolfHowlMgrFffbf();
extern "C" void setCorrectData__13Z2WolfHowlMgrFScP14Z2WolfHowlData();
extern "C" void getCorrectLine__13Z2WolfHowlMgrFUc();
extern "C" void getCorrectLineNum__13Z2WolfHowlMgrFv();
extern "C" void checkLine__13Z2WolfHowlMgrFv();
extern "C" void getOnLineNum__13Z2WolfHowlMgrFv();
extern "C" void startWindStoneSound__13Z2WolfHowlMgrFScP3Vec();
extern "C" void startGuideMelody__13Z2WolfHowlMgrFb();
extern "C" void skipCorrectDemo__13Z2WolfHowlMgrFv();
extern "C" void __sinit_Z2WolfHowlMgr_cpp();

//
// External References:
//

extern "C" void stop__8JAISoundFUl();
extern "C" void stop__8JAISoundFv();
extern "C" void moveVolume__18JAISoundParamsMoveFfUl();
extern "C" void movePitch__18JAISoundParamsMoveFfUl();
extern "C" void func_802A2FEC();
extern "C" void linearTransform__6Z2CalcFfffffb();
extern "C" void getParamByExp__6Z2CalcFffffffQ26Z2Calc9CurveSign();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void subBgmStart__8Z2SeqMgrFUl();
extern "C" void stopWolfHowlSong__8Z2SeqMgrFv();
extern "C" void PSVECSquareDistance();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern u32 __float_nan;
extern "C" extern u8 data_80450B38[4];
extern "C" extern u8 data_80450B44[4];
extern "C" extern u8 data_80450B60[4];
extern "C" extern u8 data_80450B74[4];
extern "C" extern u8 data_80450B80[4];
extern "C" extern u8 data_80450B84[4];
extern "C" extern u8 data_80450B88[4];
extern "C" extern u8 mLinkPtr__14Z2CreatureLink[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 804508A0-804508A8 0008+00 s=1 e=0 z=0  None .sdata     sHowlTobikusa */
extern "C" u8 sHowlTobikusa[8];

/* 803CBC50-803CBC5C 000C+00 s=1 e=0 z=0  None .data      sHowlUmakusa */
SECTION_DATA static u8 sHowlUmakusa[12] = {
    0x01, 0x0F, 0x02, 0x0F, 0x03, 0x3C, 0x01, 0x0F, 0x02, 0x0F, 0x03, 0x3C,
};

/* 803CBC5C-803CBC68 000C+00 s=1 e=0 z=0  None .data      sHowlZeldaSong */
SECTION_DATA static u8 sHowlZeldaSong[12] = {
    0x02, 0x1E, 0x01, 0x0F, 0x03, 0x2D, 0x02, 0x1E, 0x01, 0x0F, 0x03, 0x2D,
};

/* 803CBC68-803CBC74 000C+00 s=1 e=0 z=0  None .data      sHowlLightPrelude */
SECTION_DATA static u8 sHowlLightPrelude[12] = {
    0x01, 0x14, 0x03, 0x28, 0x01, 0x14, 0x03, 0x14, 0x02, 0x14, 0x01, 0x1E,
};

/* 803CBC74-803CBC80 000C+00 s=1 e=0 z=0  None .data      sHowlSoulRequiem */
SECTION_DATA static u8 sHowlSoulRequiem[12] = {
    0x03, 0x1E, 0x02, 0x0F, 0x03, 0x0F, 0x01, 0x1E, 0x02, 0x1E, 0x03, 0x1E,
};

/* 803CBC80-803CBC8C 000C+00 s=1 e=0 z=0  None .data      sHealingSong */
SECTION_DATA static u8 sHealingSong[12] = {
    0x01, 0x1E, 0x02, 0x1E, 0x03, 0x1E, 0x01, 0x1E, 0x02, 0x1E, 0x03, 0x1E,
};

/* 803CBC8C-803CBC9C 000E+02 s=1 e=0 z=0  None .data      sNewSong1 */
SECTION_DATA static u8 sNewSong1[14 + 2 /* padding */] = {
    0x03,
    0x1E,
    0x02,
    0x1E,
    0x01,
    0x1E,
    0x03,
    0x28,
    0x02,
    0x14,
    0x03,
    0x1E,
    0x01,
    0x1E,
    /* padding */
    0x00,
    0x00,
};

/* 803CBC9C-803CBCAC 0010+00 s=1 e=0 z=0  None .data      sNewSong2 */
SECTION_DATA static u8 sNewSong2[16] = {
    0x01, 0x14, 0x02, 0x14, 0x03, 0x14, 0x02, 0x3C, 0x03, 0x14, 0x01, 0x14, 0x02, 0x14, 0x03, 0x1E,
};

/* 803CBCAC-803CBCC0 0012+02 s=1 e=0 z=0  None .data      sNewSong3 */
SECTION_DATA static u8 sNewSong3[18 + 2 /* padding */] = {
    0x02,
    0x1E,
    0x03,
    0x3C,
    0x02,
    0x28,
    0x01,
    0x14,
    0x03,
    0x3C,
    0x01,
    0x14,
    0x02,
    0x14,
    0x01,
    0x14,
    0x02,
    0x2D,
    /* padding */
    0x00,
    0x00,
};

/* 803CBCC0-803CBD08 0048+00 s=1 e=0 z=0  None .data      sGuideData */
SECTION_DATA static void* sGuideData[18] = {
    (void*)0x04000000, (void*)&sHowlTobikusa,    (void*)0x06000000, (void*)&sHowlUmakusa,
    (void*)0x06000000, (void*)&sHowlZeldaSong,   (void*)0x06000000, (void*)&sHealingSong,
    (void*)0x06000000, (void*)&sHowlSoulRequiem, (void*)0x06000000, (void*)&sHowlLightPrelude,
    (void*)0x07000000, (void*)&sNewSong1,        (void*)0x08000000, (void*)&sNewSong2,
    (void*)0x09000000, (void*)&sNewSong3,
};

/* 80450880-80450884 0004+00 s=2 e=0 z=0  None .sdata     cPitchDown */
SECTION_SDATA static u32 cPitchDown = 0x3F641206;

/* 80450884-80450888 0004+00 s=4 e=0 z=0  None .sdata     cPitchCenter */
SECTION_SDATA static u32 cPitchCenter = 0x3F800000;

/* 80450888-8045088C 0004+00 s=2 e=0 z=0  None .sdata     cPitchUp */
SECTION_SDATA static u32 cPitchUp = 0x3F9837B5;

/* 8045088C-80450890 0004+00 s=4 e=0 z=0  None .sdata     None */
SECTION_SDATA static u8 struct_8045088C[4] = {
    /* 8045088C 0001 data_8045088C None */
    0x07,
    /* 8045088D 0001 data_8045088D None */
    0x07,
    /* 8045088E 0002 data_8045088E None */
    0x1E,
    0x00,
};

/* 80450890-80450894 0004+00 s=1 e=0 z=0  None .sdata     cR_FlatWidth */
SECTION_SDATA static f32 cR_FlatWidth = 0.9438700079917908f;

/* 80450894-80450898 0004+00 s=3 e=0 z=0  None .sdata     None */
SECTION_SDATA static u8 struct_80450894[4] = {
    /* 80450894 0001 data_80450894 None */
    0x05,
    /* 80450895 0003 data_80450895 None */
    0x1E,
    0x00,
    0x00,
};

/* 80450898-8045089C 0004+00 s=1 e=0 z=0  None .sdata     sStickHigh */
SECTION_SDATA static f32 sStickHigh = 0.5f;

/* 8045089C-804508A0 0004+00 s=1 e=0 z=0  None .sdata     sStickCenter */
SECTION_SDATA static f32 sStickCenter = 1.0f / 5.0f;

/* 804508A0-804508A8 0008+00 s=1 e=0 z=0  None .sdata     sHowlTobikusa */
SECTION_SDATA static u8 sHowlTobikusa[8] = {
    0x01, 0x1E, 0x03, 0x1E, 0x01, 0x1E, 0x03, 0x1E,
};

/* 80455E60-80455E64 0004+00 s=8 e=0 z=0  None .sdata2    @3485 */
SECTION_SDATA2 static u8 lit_3485[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80455E64-80455E68 0004+00 s=11 e=0 z=0  None .sdata2    @3486 */
SECTION_SDATA2 static f32 lit_3486 = 1.0f;

/* 802CAAC0-802CAB8C 00CC+00 s=0 e=1 z=0  None .text      __ct__13Z2WolfHowlMgrFv */
//	802CAAC0: 80450B38 (data_80450B38)
//	802CAAD8: 80455E60 (lit_3485)
//	802CAAE0: 80455E64 (lit_3486)
//	802CAAEC: 80450884 (cPitchCenter)
//	802CAAF4: 80450884 (cPitchCenter)
//	802CAB48: 80455E60 (lit_3485)
//	802CAB70: 80455E60 (lit_3485)
//	802CAB7C: 803CBCC0 (sGuideData)
//	802CAB80: 803CBCC0 (sGuideData)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Z2WolfHowlMgr::Z2WolfHowlMgr() {
    nofralloc
#include "asm/Z2AudioLib/Z2WolfHowlMgr/__ct__13Z2WolfHowlMgrFv.s"
}
#pragma pop

/* 802CAB8C-802CABEC 0060+00 s=1 e=0 z=0  None .text      resetState__13Z2WolfHowlMgrFv */
//	802CAB8C: 80455E64 (lit_3486)
//	802CAB94: 80450884 (cPitchCenter)
//	802CABB4: 80455E60 (lit_3485)
//	802CABDC: 80455E60 (lit_3485)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2WolfHowlMgr::resetState() {
    nofralloc
#include "asm/Z2AudioLib/Z2WolfHowlMgr/resetState__13Z2WolfHowlMgrFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455E68-80455E6C 0004+00 s=2 e=0 z=0  None .sdata2    @3527 */
SECTION_SDATA2 static f32 lit_3527 = 30.0f;

/* 80455E6C-80455E70 0004+00 s=1 e=0 z=0  None .sdata2    @3528 */
SECTION_SDATA2 static f32 lit_3528 = 2.0f;

/* 80455E70-80455E78 0008+00 s=2 e=0 z=0  None .sdata2    @3530 */
SECTION_SDATA2 static f64 lit_3530 = 4503599627370496.0 /* cast u32 to float */;

/* 802CABEC-802CACB0 00C4+00 s=1 e=0 z=0  None .text      calcVolumeMod__13Z2WolfHowlMgrFf */
//	802CAC10: 8045088E (struct_8045088C)
//	802CAC20: 80455E64 (lit_3486)
//	802CAC28: 802A2DB4 (moveVolume__18JAISoundParamsMoveFfUl)
//	802CAC30: 80455E64 (lit_3486)
//	802CAC40: 80455E70 (lit_3530)
//	802CAC58: 80455E68 (lit_3527)
//	802CAC5C: 80455E60 (lit_3485)
//	802CAC60: 80455E6C (lit_3528)
//	802CAC6C: 802A96F4 (getParamByExp__6Z2CalcFffffffQ26Z2Calc9CurveSign)
//	802CAC90: 802A2DB4 (moveVolume__18JAISoundParamsMoveFfUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2WolfHowlMgr::calcVolumeMod(f32 param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2WolfHowlMgr/calcVolumeMod__13Z2WolfHowlMgrFf.s"
}
#pragma pop

/* 802CACB0-802CACCC 001C+00 s=1 e=0 z=0  None .text      getNowPitch__13Z2WolfHowlMgrFv */
//	802CACC4: 80455E64 (lit_3486)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2WolfHowlMgr::getNowPitch() {
    nofralloc
#include "asm/Z2AudioLib/Z2WolfHowlMgr/getNowPitch__13Z2WolfHowlMgrFv.s"
}
#pragma pop

/* 802CACCC-802CACD4 0008+00 s=0 e=2 z=0  None .text      getNowInputValue__13Z2WolfHowlMgrFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2WolfHowlMgr::getNowInputValue() {
    nofralloc
#include "asm/Z2AudioLib/Z2WolfHowlMgr/getNowInputValue__13Z2WolfHowlMgrFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455E78-80455E7C 0004+00 s=1 e=0 z=0  None .sdata2    @3589 */
SECTION_SDATA2 static f32 lit_3589 = 97.0f / 100.0f;

/* 80455E7C-80455E80 0004+00 s=4 e=0 z=0  None .sdata2    @3590 */
SECTION_SDATA2 static f32 lit_3590 = -1.0f;

/* 802CACD4-802CAED4 0200+00 s=1 e=0 z=0  None .text      calcPitchMod__13Z2WolfHowlMgrFff */
//	802CACFC: 80455E64 (lit_3486)
//	802CAD00: 802CACB0 (getNowPitch__13Z2WolfHowlMgrFv)
//	802CAD14: 80455E70 (lit_3530)
//	802CAD2C: 80455E68 (lit_3527)
//	802CAD30: 80455E60 (lit_3485)
//	802CAD34: 80455E64 (lit_3486)
//	802CAD38: 80455E78 (lit_3589)
//	802CAD44: 802A96F4 (getParamByExp__6Z2CalcFffffffQ26Z2Calc9CurveSign)
//	802CAD64: 802A2E0C (movePitch__18JAISoundParamsMoveFfUl)
//	802CAD70: 8045088E (struct_8045088C)
//	802CAD7C: 80455E60 (lit_3485)
//	802CAD88: 80455E64 (lit_3486)
//	802CAD90: 80455E60 (lit_3485)
//	802CAD9C: 80455E7C (lit_3590)
//	802CADA0: 80450880 (cPitchDown)
//	802CADA8: 802A968C (linearTransform__6Z2CalcFfffffb)
//	802CADBC: 80450888 (cPitchUp)
//	802CADC4: 802A968C (linearTransform__6Z2CalcFfffffb)
//	802CADCC: 80450884 (cPitchCenter)
//	802CADDC: 80455E60 (lit_3485)
//	802CADF4: 8045088C (struct_8045088C)
//	802CADF8: 80455E70 (lit_3530)
//	802CAE1C: 8045088D (struct_8045088C)
//	802CAE20: 80455E70 (lit_3530)
//	802CAE48: 80455E60 (lit_3485)
//	802CAE4C: 80455E64 (lit_3486)
//	802CAE54: 80450890 (cR_FlatWidth)
//	802CAE5C: 802A968C (linearTransform__6Z2CalcFfffffb)
//	802CAE68: 80450894 (struct_80450894)
//	802CAE6C: 80455E70 (lit_3530)
//	802CAEAC: 802A2E0C (movePitch__18JAISoundParamsMoveFfUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2WolfHowlMgr::calcPitchMod(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/Z2AudioLib/Z2WolfHowlMgr/calcPitchMod__13Z2WolfHowlMgrFff.s"
}
#pragma pop

/* 802CAED4-802CB100 022C+00 s=0 e=1 z=0  None .text      startWolfHowlSound__13Z2WolfHowlMgrFffbf
 */
//	802CAF0C: 80450B84 (data_80450B84)
//	802CAF10: 80455E60 (lit_3485)
//	802CAF28: 80450B84 (data_80450B84)
//	802CAF68: 8045089C (sStickCenter)
//	802CAF7C: 80450898 (sStickHigh)
//	802CAF80: 80455E60 (lit_3485)
//	802CAF84: 80455E64 (lit_3486)
//	802CAF8C: 802A968C (linearTransform__6Z2CalcFfffffb)
//	802CAF98: 80455E7C (lit_3590)
//	802CAFB0: 80450898 (sStickHigh)
//	802CAFB8: 80455E60 (lit_3485)
//	802CAFC0: 802A968C (linearTransform__6Z2CalcFfffffb)
//	802CAFCC: 80455E60 (lit_3485)
//	802CAFE0: 8045088E (struct_8045088C)
//	802CAFF8: 80450B74 (data_80450B74)
//	802CB008: 802A2FEC (func_802A2FEC)
//	802CB01C: 80455E60 (lit_3485)
//	802CB024: 802CACD4 (calcPitchMod__13Z2WolfHowlMgrFff)
//	802CB030: 802CABEC (calcVolumeMod__13Z2WolfHowlMgrFf)
//	802CB048: 8045088E (struct_8045088C)
//	802CB06C: 80450B74 (data_80450B74)
//	802CB07C: 802A2FEC (func_802A2FEC)
//	802CB090: 80455E60 (lit_3485)
//	802CB098: 802CACD4 (calcPitchMod__13Z2WolfHowlMgrFff)
//	802CB0A4: 802CABEC (calcVolumeMod__13Z2WolfHowlMgrFf)
//	802CB0C8: 802CAB8C (resetState__13Z2WolfHowlMgrFv)
//	802CB0D4: 802CAB8C (resetState__13Z2WolfHowlMgrFv)
//	802CB0DC: 802CB38C (checkLine__13Z2WolfHowlMgrFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2WolfHowlMgr::startWolfHowlSound(f32 param_0, f32 param_1, bool param_2, f32 param_3) {
    nofralloc
#include "asm/Z2AudioLib/Z2WolfHowlMgr/startWolfHowlSound__13Z2WolfHowlMgrFffbf.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455E80-80455E84 0004+00 s=1 e=0 z=0  None .sdata2    @3711 */
SECTION_SDATA2 static f32 lit_3711 = 1.1224600076675415f;

/* 80455E84-80455E88 0004+00 s=1 e=0 z=0  None .sdata2    @3712 */
SECTION_SDATA2 static f32 lit_3712 = 1.0594600439071655f;

/* 80455E88-80455E8C 0004+00 s=1 e=0 z=0  None .sdata2    @3713 */
SECTION_SDATA2 static f32 lit_3713 = 0.7936859726905823f;

/* 80455E8C-80455E90 0004+00 s=1 e=0 z=0  None .sdata2    @3714 */
SECTION_SDATA2 static f32 lit_3714 = 1.2599060535430908f;

/* 80455E90-80455E94 0004+00 s=1 e=0 z=0  None .sdata2    @3715 */
SECTION_SDATA2 static f32 lit_3715 = 0.9438700079917908f;

/* 80455E94-80455E98 0004+00 s=1 e=0 z=0  None .sdata2    @3716 */
SECTION_SDATA2 static f32 lit_3716 = 0.8408849835395813f;

/* 80455E98-80455E9C 0004+00 s=1 e=0 z=0  None .sdata2    @3717 */
SECTION_SDATA2 static f32 lit_3717 = 1.3348400592803955f;

/* 80455E9C-80455EA0 0004+00 s=1 e=0 z=0  None .sdata2    @3718 */
SECTION_SDATA2 static f32 lit_3718 = 0.8909000158309937f;

/* 80455EA0-80455EA4 0004+00 s=1 e=0 z=0  None .sdata2    @3719 */
SECTION_SDATA2 static f32 lit_3719 = 0.7491499781608582f;

/* 80455EA4-80455EA8 0004+00 s=1 e=0 z=0  None .sdata2    @3720 */
SECTION_SDATA2 static f32 lit_3720 = 1.1892000436782837f;

/* 802CB100-802CB320 0220+00 s=0 e=1 z=0  None .text
 * setCorrectData__13Z2WolfHowlMgrFScP14Z2WolfHowlData          */
//	802CB110: 803621DC (_savegpr_29)
//	802CB1B8: 80455E80 (lit_3711)
//	802CB1BC: 80450888 (cPitchUp)
//	802CB1C0: 80455E84 (lit_3712)
//	802CB1C4: 80450884 (cPitchCenter)
//	802CB1C8: 80455E88 (lit_3713)
//	802CB1CC: 80450880 (cPitchDown)
//	802CB1D4: 80455E8C (lit_3714)
//	802CB1D8: 80450888 (cPitchUp)
//	802CB1DC: 80455E90 (lit_3715)
//	802CB1E0: 80450884 (cPitchCenter)
//	802CB1E4: 80455E94 (lit_3716)
//	802CB1E8: 80450880 (cPitchDown)
//	802CB1F0: 80455E98 (lit_3717)
//	802CB1F4: 80450888 (cPitchUp)
//	802CB1F8: 80455E9C (lit_3718)
//	802CB1FC: 80450884 (cPitchCenter)
//	802CB200: 80450880 (cPitchDown)
//	802CB208: 80455E8C (lit_3714)
//	802CB20C: 80450888 (cPitchUp)
//	802CB210: 80455E90 (lit_3715)
//	802CB214: 80450884 (cPitchCenter)
//	802CB218: 80455E9C (lit_3718)
//	802CB21C: 80450880 (cPitchDown)
//	802CB224: 80455E80 (lit_3711)
//	802CB228: 80450888 (cPitchUp)
//	802CB22C: 80455E90 (lit_3715)
//	802CB230: 80450884 (cPitchCenter)
//	802CB234: 80455EA0 (lit_3719)
//	802CB238: 80450880 (cPitchDown)
//	802CB240: 80455EA4 (lit_3720)
//	802CB244: 80450888 (cPitchUp)
//	802CB248: 80455E64 (lit_3486)
//	802CB24C: 80450884 (cPitchCenter)
//	802CB250: 80455E9C (lit_3718)
//	802CB254: 80450880 (cPitchDown)
//	802CB274: 802CB320 (getCorrectLine__13Z2WolfHowlMgrFUc)
//	802CB290: 802CB320 (getCorrectLine__13Z2WolfHowlMgrFUc)
//	802CB2AC: 80450895 (struct_80450894)
//	802CB2C0: 802CB320 (getCorrectLine__13Z2WolfHowlMgrFUc)
//	802CB2E4: 802CB370 (getCorrectLineNum__13Z2WolfHowlMgrFv)
//	802CB30C: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2WolfHowlMgr::setCorrectData(s8 param_0, Z2WolfHowlData* param_1) {
    nofralloc
#include "asm/Z2AudioLib/Z2WolfHowlMgr/setCorrectData__13Z2WolfHowlMgrFScP14Z2WolfHowlData.s"
}
#pragma pop

/* 802CB320-802CB370 0050+00 s=3 e=2 z=0  None .text      getCorrectLine__13Z2WolfHowlMgrFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2WolfHowlMgr::getCorrectLine(u8 param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2WolfHowlMgr/getCorrectLine__13Z2WolfHowlMgrFUc.s"
}
#pragma pop

/* 802CB370-802CB38C 001C+00 s=2 e=1 z=0  None .text      getCorrectLineNum__13Z2WolfHowlMgrFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2WolfHowlMgr::getCorrectLineNum() {
    nofralloc
#include "asm/Z2AudioLib/Z2WolfHowlMgr/getCorrectLineNum__13Z2WolfHowlMgrFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804341F8-8043421C 0024+00 s=2 e=0 z=0  None .bss       sCorrectPhrase */
static u8 sCorrectPhrase[36];

/* 8043421C-80434240 0024+00 s=2 e=0 z=0  None .bss       sWindStoneSound */
static u8 sWindStoneSound[36];

/* 80434240-80434268 0024+04 s=1 e=0 z=0  None .bss       sCorrectDuo */
static u8 sCorrectDuo[36 + 4 /* padding */];

/* 802CB38C-802CB650 02C4+00 s=1 e=0 z=0  None .text      checkLine__13Z2WolfHowlMgrFv */
//	802CB39C: 803621D8 (_savegpr_28)
//	802CB3C8: 80450B84 (data_80450B84)
//	802CB444: 802CB320 (getCorrectLine__13Z2WolfHowlMgrFUc)
//	802CB460: 802CB370 (getCorrectLineNum__13Z2WolfHowlMgrFv)
//	802CB474: 8045088E (struct_8045088C)
//	802CB498: 80450B88 (data_80450B88)
//	802CB4AC: 80455E64 (lit_3486)
//	802CB4B4: 80455E7C (lit_3590)
//	802CB4C0: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	802CB4D4: 80450B80 (data_80450B80)
//	802CB4E8: 80434240 (sCorrectDuo)
//	802CB4EC: 80434240 (sCorrectDuo)
//	802CB4F4: 80450B84 (data_80450B84)
//	802CB4F8: 802AF49C (subBgmStart__8Z2SeqMgrFUl)
//	802CB504: 804341F8 (sCorrectPhrase)
//	802CB508: 804341F8 (sCorrectPhrase)
//	802CB510: 80450B84 (data_80450B84)
//	802CB514: 802AF49C (subBgmStart__8Z2SeqMgrFUl)
//	802CB544: 8045088E (struct_8045088C)
//	802CB568: 802CB320 (getCorrectLine__13Z2WolfHowlMgrFUc)
//	802CB59C: 802CB370 (getCorrectLineNum__13Z2WolfHowlMgrFv)
//	802CB5C8: 802CB320 (getCorrectLine__13Z2WolfHowlMgrFUc)
//	802CB5F0: 80450895 (struct_80450894)
//	802CB618: 802CB650 (getOnLineNum__13Z2WolfHowlMgrFv)
//	802CB63C: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2WolfHowlMgr::checkLine() {
    nofralloc
#include "asm/Z2AudioLib/Z2WolfHowlMgr/checkLine__13Z2WolfHowlMgrFv.s"
}
#pragma pop

/* 802CB650-802CB6EC 009C+00 s=1 e=1 z=0  None .text      getOnLineNum__13Z2WolfHowlMgrFv */
//	802CB668: 802CB320 (getCorrectLine__13Z2WolfHowlMgrFUc)
//	802CB680: 80455E64 (lit_3486)
//	802CB69C: 80455E60 (lit_3485)
//	802CB6B8: 80455E7C (lit_3590)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2WolfHowlMgr::getOnLineNum() {
    nofralloc
#include "asm/Z2AudioLib/Z2WolfHowlMgr/getOnLineNum__13Z2WolfHowlMgrFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455EA8-80455EB0 0008+00 s=1 e=0 z=0  None .sdata2    @4032 */
SECTION_SDATA2 static f64 lit_4032 = 0.5;

/* 80455EB0-80455EB8 0008+00 s=1 e=0 z=0  None .sdata2    @4033 */
SECTION_SDATA2 static f64 lit_4033 = 3.0;

/* 80455EB8-80455EC0 0008+00 s=1 e=0 z=0  None .sdata2    @4034 */
SECTION_SDATA2 static u8 lit_4034[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80455EC0-80455EC4 0004+00 s=1 e=0 z=0  None .sdata2    @4035 */
SECTION_SDATA2 static f32 lit_4035 = 2100.0f;

/* 80455EC4-80455EC8 0004+00 s=1 e=0 z=0  None .sdata2    @4036 */
SECTION_SDATA2 static f32 lit_4036 = 150.0f;

/* 80455EC8-80455ECC 0004+00 s=1 e=0 z=0  None .sdata2    @4037 */
SECTION_SDATA2 static f32 lit_4037 = 2000.0f;

/* 80455ECC-80455ED0 0004+00 s=1 e=0 z=0  None .sdata2    @4038 */
SECTION_SDATA2 static f32 lit_4038 = 9.0f / 20.0f;

/* 80455ED0-80455ED4 0004+00 s=1 e=0 z=0  None .sdata2    @4039 */
SECTION_SDATA2 static f32 lit_4039 = 1.0f / 20.0f;

/* 80455ED4-80455ED8 0004+00 s=1 e=0 z=0  None .sdata2    @4040 */
SECTION_SDATA2 static f32 lit_4040 = 2.0f / 5.0f;

/* 80455ED8-80455EE0 0004+04 s=1 e=0 z=0  None .sdata2    @4041 */
SECTION_SDATA2 static f32 lit_4041[1 + 1 /* padding */] = {
    1.0f / 25.0f,
    /* padding */
    0.0f,
};

/* 802CB6EC-802CBA88 039C+00 s=0 e=0 z=2  None .text startWindStoneSound__13Z2WolfHowlMgrFScP3Vec
 */
//	802CB6FC: 803621DC (_savegpr_29)
//	802CB710: 80451360 (mLinkPtr__14Z2CreatureLink)
//	802CB72C: 80450B44 (data_80450B44)
//	802CB760: 8034739C (PSVECSquareDistance)
//	802CB764: 80455E60 (lit_3485)
//	802CB774: 80455EA8 (lit_4032)
//	802CB77C: 80455EB0 (lit_4033)
//	802CB7C4: 80455EB8 (lit_4034)
//	802CB7D0: 80450AE0 (__float_nan)
//	802CB7D4: 80450AE0 (__float_nan)
//	802CB840: 80450AE0 (__float_nan)
//	802CB844: 80450AE0 (__float_nan)
//	802CB848: 80455EC0 (lit_4035)
//	802CB860: 802A2598 (stop__8JAISoundFv)
//	802CB868: 80455EC0 (lit_4035)
//	802CB888: 8043421C (sWindStoneSound)
//	802CB88C: 8043421C (sWindStoneSound)
//	802CB898: 80450B60 (data_80450B60)
//	802CB8C4: 80455E60 (lit_3485)
//	802CB8CC: 80455E64 (lit_3486)
//	802CB8EC: 802A24DC (stop__8JAISoundFUl)
//	802CB8F0: 80451360 (mLinkPtr__14Z2CreatureLink)
//	802CB908: 8034739C (PSVECSquareDistance)
//	802CB90C: 80455E60 (lit_3485)
//	802CB91C: 80455EA8 (lit_4032)
//	802CB924: 80455EB0 (lit_4033)
//	802CB96C: 80455EB8 (lit_4034)
//	802CB978: 80450AE0 (__float_nan)
//	802CB97C: 80450AE0 (__float_nan)
//	802CB9E8: 80450AE0 (__float_nan)
//	802CB9EC: 80450AE0 (__float_nan)
//	802CB9F0: 80455E64 (lit_3486)
//	802CB9F4: 80455EC4 (lit_4036)
//	802CBA00: 80455E60 (lit_3485)
//	802CBA08: 80455EC8 (lit_4037)
//	802CBA14: 80455ECC (lit_4038)
//	802CBA18: 80455ED0 (lit_4039)
//	802CBA20: 802A96F4 (getParamByExp__6Z2CalcFffffffQ26Z2Calc9CurveSign)
//	802CBA28: 80450B84 (data_80450B84)
//	802CBA30: 80455E60 (lit_3485)
//	802CBA4C: 80455ED4 (lit_4040)
//	802CBA54: 802A2DB4 (moveVolume__18JAISoundParamsMoveFfUl)
//	802CBA64: 80455ED8 (lit_4041)
//	802CBA6C: 802A2DB4 (moveVolume__18JAISoundParamsMoveFfUl)
//	802CBA74: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2WolfHowlMgr::startWindStoneSound(s8 param_0, Vec* param_1) {
    nofralloc
#include "asm/Z2AudioLib/Z2WolfHowlMgr/startWindStoneSound__13Z2WolfHowlMgrFScP3Vec.s"
}
#pragma pop

/* 802CBA88-802CBB58 00D0+00 s=0 e=1 z=0  None .text      startGuideMelody__13Z2WolfHowlMgrFb */
//	802CBA9C: 80450B84 (data_80450B84)
//	802CBAA0: 80455E60 (lit_3485)
//	802CBACC: 8043421C (sWindStoneSound)
//	802CBAD0: 8043421C (sWindStoneSound)
//	802CBADC: 80450B60 (data_80450B60)
//	802CBB08: 80455E60 (lit_3485)
//	802CBB10: 80455E64 (lit_3486)
//	802CBB30: 802A24DC (stop__8JAISoundFUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2WolfHowlMgr::startGuideMelody(bool param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2WolfHowlMgr/startGuideMelody__13Z2WolfHowlMgrFb.s"
}
#pragma pop

/* 802CBB58-802CBB7C 0024+00 s=0 e=1 z=0  None .text      skipCorrectDemo__13Z2WolfHowlMgrFv */
//	802CBB64: 80450B84 (data_80450B84)
//	802CBB68: 802B327C (stopWolfHowlSong__8Z2SeqMgrFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2WolfHowlMgr::skipCorrectDemo() {
    nofralloc
#include "asm/Z2AudioLib/Z2WolfHowlMgr/skipCorrectDemo__13Z2WolfHowlMgrFv.s"
}
#pragma pop

/* 802CBB7C-802CBC60 00E4+00 s=0 e=0 z=0  None .text      __sinit_Z2WolfHowlMgr_cpp */
//	802CBB7C: 804341F8 (sCorrectPhrase)
//	802CBB80: 804341F8 (sCorrectPhrase)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_Z2WolfHowlMgr_cpp() {
    nofralloc
#include "asm/Z2AudioLib/Z2WolfHowlMgr/__sinit_Z2WolfHowlMgr_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_802CBB7C = (void*)__sinit_Z2WolfHowlMgr_cpp;
#pragma pop
