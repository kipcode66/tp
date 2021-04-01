//
// Generated By: dol2asm
// Translation Unit: Z2SoundStarter
//

#include "Z2AudioLib/Z2SoundStarter.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JAISoundHandle {};

struct JGeometry {
    template <typename A1>
    struct TVec3 {};
    /* TVec3<f32> */
    struct TVec3__template0 {};
};

struct JAISoundID {};

struct Z2SoundStarter {
    /* 802AAB94 */ Z2SoundStarter(bool);
    /* 802AAC3C */ void startSound(JAISoundID, JAISoundHandle*, JGeometry::TVec3<f32> const*, u32,
                                   f32, f32, f32, f32, f32, u32);
    /* 802AABF4 */ void startSound(JAISoundID, JAISoundHandle*, JGeometry::TVec3<f32> const*);
    /* 802AAEDC */ void setPortData(JAISoundHandle*, u32, u16, s8);
    /* 802AAF74 */ void getPortData(JAISoundHandle*, u32, s8);
    /* 802AAFF0 */ ~Z2SoundStarter();
};

struct Z2EnvSeMgr {
    /* 802C93E4 */ void getFogDensity();
};

struct JASTrack {
    /* 80291C30 */ void openChild(u32);
    /* 80292918 */ void writePort(u32, u16);
    /* 8029297C */ void readPort(u32);
};

struct JAISoundStarter {
    /* 802A2F6C */ JAISoundStarter(bool);
    /* 802A2F88 */ ~JAISoundStarter();
};

struct JAISoundParamsMove {
    /* 802A2DB4 */ void moveVolume(f32, u32);
    /* 802A2E0C */ void movePitch(f32, u32);
    /* 802A2E64 */ void moveFxMix(f32, u32);
    /* 802A2EBC */ void movePan(f32, u32);
    /* 802A2F14 */ void moveDolby(f32, u32);
};

//
// Forward References:
//

extern "C" void __ct__14Z2SoundStarterFb();
extern "C" void func_802AABF4();
extern "C" void func_802AAC3C();
extern "C" void setPortData__14Z2SoundStarterFP14JAISoundHandleUlUsSc();
extern "C" void getPortData__14Z2SoundStarterFP14JAISoundHandleUlSc();
extern "C" void __dt__14Z2SoundStarterFv();
extern "C" extern void* __vt__14Z2SoundStarter[5 + 1 /* padding */];

//
// External References:
//

void operator delete(void*);

extern "C" void openChild__8JASTrackFUl();
extern "C" void writePort__8JASTrackFUlUs();
extern "C" void readPort__8JASTrackFUl();
extern "C" void moveVolume__18JAISoundParamsMoveFfUl();
extern "C" void movePitch__18JAISoundParamsMoveFfUl();
extern "C" void moveFxMix__18JAISoundParamsMoveFfUl();
extern "C" void movePan__18JAISoundParamsMoveFfUl();
extern "C" void moveDolby__18JAISoundParamsMoveFfUl();
extern "C" void __ct__15JAISoundStarterFb();
extern "C" void __dt__15JAISoundStarterFv();
extern "C" void getFogDensity__10Z2EnvSeMgrFv();
extern "C" void __dl__FPv();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" extern u8 data_80450B3C[4];
extern "C" extern u8 data_80450B74[4];
extern "C" extern u8 data_80450B7C[4];
extern "C" extern u8 data_80450B80[4];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 803C9D80-803C9D98 0014+04 s=2 e=6 z=0  None .data      __vt__14Z2SoundStarter */
SECTION_DATA void* __vt__14Z2SoundStarter[5 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14Z2SoundStarterFv,
    (void*)func_802AABF4,
    (void*)func_802AAC3C,
    /* padding */
    NULL,
};

/* 802AAB94-802AABF4 0060+00 s=0 e=4 z=0  None .text      __ct__14Z2SoundStarterFb */
//	802AABB0: 802A2F6C (__ct__15JAISoundStarterFb)
//	802AABC8: 80450B74 (data_80450B74)
//	802AABCC: 803C9D80 (__vt__14Z2SoundStarter)
//	802AABD0: 803C9D80 (__vt__14Z2SoundStarter)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Z2SoundStarter::Z2SoundStarter(bool param_0) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundStarter/__ct__14Z2SoundStarterFb.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455858-8045585C 0004+00 s=2 e=0 z=0  None .sdata2    @3597 */
SECTION_SDATA2 static u8 lit_3597[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8045585C-80455860 0004+00 s=2 e=0 z=0  None .sdata2    @3598 */
SECTION_SDATA2 static f32 lit_3598 = 1.0f;

/* 80455860-80455864 0004+00 s=2 e=0 z=0  None .sdata2    @3599 */
SECTION_SDATA2 static f32 lit_3599 = -1.0f;

/* 802AABF4-802AAC3C 0048+00 s=1 e=5 z=0  None .text
 * startSound__14Z2SoundStarterF10JAISoundIDP14JAISoundHandlePCQ29JGeometry8TVec3<f> */
//	802AAC10: 80455858 (lit_3597)
//	802AAC14: 8045585C (lit_3598)
//	802AAC1C: 80455860 (lit_3599)
//	802AAC28: 802AAC3C (func_802AAC3C)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundStarter::startSound(JAISoundID param_0, JAISoundHandle* param_1,
                                    JGeometry::TVec3<f32> const* param_2) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundStarter/func_802AABF4.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455864-80455868 0004+00 s=1 e=0 z=0  None .sdata2    @3713 */
SECTION_SDATA2 static f32 lit_3713 = 0.5f;

/* 80455868-80455870 0008+00 s=1 e=0 z=0  None .sdata2    @3717 */
SECTION_SDATA2 static f64 lit_3717 = 4503599627370496.0 /* cast u32 to float */;

/* 802AAC3C-802AAEDC 02A0+00 s=2 e=2 z=0  None .text
 * startSound__14Z2SoundStarterF10JAISoundIDP14JAISoundHandlePCQ29JGeometry8TVec3<f>UlfffffUl */
//	802AAC74: 803621D0 (_savegpr_26)
//	802AAD24: 80450B80 (data_80450B80)
//	802AAD34: 8045585C (lit_3598)
//	802AAD3C: 80450B7C (data_80450B7C)
//	802AAD44: 80455858 (lit_3597)
//	802AAD54: 80455868 (lit_3717)
//	802AAD7C: 80450B3C (data_80450B3C)
//	802AAD80: 802C93E4 (getFogDensity__10Z2EnvSeMgrFv)
//	802AAD84: 80455864 (lit_3713)
//	802AAD90: 8045585C (lit_3598)
//	802AADA8: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	802AADF4: 802AAEDC (setPortData__14Z2SoundStarterFP14JAISoundHandleUlUsSc)
//	802AADF8: 80455858 (lit_3597)
//	802AAE14: 802A2E64 (moveFxMix__18JAISoundParamsMoveFfUl)
//	802AAE18: 8045585C (lit_3598)
//	802AAE34: 802A2E0C (movePitch__18JAISoundParamsMoveFfUl)
//	802AAE38: 8045585C (lit_3598)
//	802AAE54: 802A2DB4 (moveVolume__18JAISoundParamsMoveFfUl)
//	802AAE58: 80455860 (lit_3599)
//	802AAE74: 802A2EBC (movePan__18JAISoundParamsMoveFfUl)
//	802AAE78: 80455860 (lit_3599)
//	802AAE94: 802A2F14 (moveDolby__18JAISoundParamsMoveFfUl)
//	802AAEC8: 8036221C (_restgpr_26)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundStarter::startSound(JAISoundID param_0, JAISoundHandle* param_1,
                                    JGeometry::TVec3<f32> const* param_2, u32 param_3, f32 param_4,
                                    f32 param_5, f32 param_6, f32 param_7, f32 param_8,
                                    u32 param_9) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundStarter/func_802AAC3C.s"
}
#pragma pop

/* 802AAEDC-802AAF74 0098+00 s=1 e=10 z=0  None .text
 * setPortData__14Z2SoundStarterFP14JAISoundHandleUlUsSc        */
//	802AAEEC: 803621DC (_savegpr_29)
//	802AAF44: 80291C30 (openChild__8JASTrackFUl)
//	802AAF58: 80292918 (writePort__8JASTrackFUlUs)
//	802AAF60: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundStarter::setPortData(JAISoundHandle* param_0, u32 param_1, u16 param_2,
                                     s8 param_3) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundStarter/setPortData__14Z2SoundStarterFP14JAISoundHandleUlUsSc.s"
}
#pragma pop

/* 802AAF74-802AAFF0 007C+00 s=0 e=1 z=0  None .text
 * getPortData__14Z2SoundStarterFP14JAISoundHandleUlSc          */
//	802AAFD0: 8029297C (readPort__8JASTrackFUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void Z2SoundStarter::getPortData(JAISoundHandle* param_0, u32 param_1, s8 param_2) {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundStarter/getPortData__14Z2SoundStarterFP14JAISoundHandleUlSc.s"
}
#pragma pop

/* 802AAFF0-802AB07C 008C+00 s=1 e=0 z=0  None .text      __dt__14Z2SoundStarterFv */
//	802AB010: 803C9D80 (__vt__14Z2SoundStarter)
//	802AB014: 803C9D80 (__vt__14Z2SoundStarter)
//	802AB030: 80450B74 (data_80450B74)
//	802AB040: 80450B74 (data_80450B74)
//	802AB04C: 802A2F88 (__dt__15JAISoundStarterFv)
//	802AB05C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm Z2SoundStarter::~Z2SoundStarter() {
    nofralloc
#include "asm/Z2AudioLib/Z2SoundStarter/__dt__14Z2SoundStarterFv.s"
}
#pragma pop
