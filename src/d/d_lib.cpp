//
// Generated By: dol2asm
// Translation Unit: d/d_lib
//

#include "d/d_lib.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {};

struct dLib_time_c {
    /* 80032804 */ void getTime();
    /* 80032880 */ void stopTime();
    /* 800328BC */ void startTime();
};

struct dEvt_control_c {
    /* 800434D8 */ void searchMapEventData(u8);
};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

struct STControl {
    /* 80032044 */ STControl(s16, s16, s16, s16, f32, f32, s16, s16);
    /* 80032088 */ void setWaitParm(s16, s16, s16, s16, f32, f32, s16, s16);
    /* 800320AC */ void init();
    /* 800320FC */ void Xinit();
    /* 8003212C */ void Yinit();
    /* 8003215C */ void getValueStick();
    /* 8003216C */ void getAngleStick();
    /* 8003219C */ void checkTrigger();
    /* 8003242C */ void checkLeftTrigger();
    /* 800324A8 */ void checkRightTrigger();
    /* 80032524 */ void checkUpTrigger();
    /* 800325A0 */ void checkDownTrigger();
};

struct JKRHeap {};

struct JKRExpandSwitch {};

struct JKRArchive {
    /* 802D65A4 */ void findFsResource(char const*, u32) const;
};

struct JKRAramArchive {
    /* 802D781C */ void getAramAddress(char const*);
};

struct JKRAram {
    /* 802D25B4 */ void aramToMainRam(u32, u8*, u32, JKRExpandSwitch, u32, JKRHeap*, int, u32*);
};

struct CSTControl {
    /* 8003217C */ void getValueStick();
    /* 8003218C */ void getAngleStick();
};

//
// Forward References:
//

void dLib_getEventSwitchNo(int);
void dLib_checkActorInRectangle(fopAc_ac_c*, fopAc_ac_c*, cXyz const*, cXyz const*);
void dLib_getExpandSizeFromAramArchive(JKRAramArchive*, char const*);

extern "C" void __ct__9STControlFssssffss();
extern "C" void setWaitParm__9STControlFssssffss();
extern "C" void init__9STControlFv();
extern "C" void Xinit__9STControlFv();
extern "C" void Yinit__9STControlFv();
extern "C" void getValueStick__9STControlFv();
extern "C" void getAngleStick__9STControlFv();
extern "C" void getValueStick__10CSTControlFv();
extern "C" void getAngleStick__10CSTControlFv();
extern "C" void checkTrigger__9STControlFv();
extern "C" void checkLeftTrigger__9STControlFv();
extern "C" void checkRightTrigger__9STControlFv();
extern "C" void checkUpTrigger__9STControlFv();
extern "C" void checkDownTrigger__9STControlFv();
extern "C" void dLib_getEventSwitchNo__Fi();
extern "C" void dLib_checkActorInRectangle__FP10fopAc_ac_cP10fopAc_ac_cPC4cXyzPC4cXyz();
extern "C" void dLib_getExpandSizeFromAramArchive__FP14JKRAramArchivePCc();
extern "C" void getTime__11dLib_time_cFv();
extern "C" void stopTime__11dLib_time_cFv();
extern "C" void startTime__11dLib_time_cFv();
extern "C" extern u8 ZeroQuat[16];
extern "C" extern void* __vt__10CSTControl[4];
extern "C" extern void* __vt__9STControl[4];
extern "C" extern u8 struct_80450DF0[8];

//
// External References:
//

void mDoMtx_YrotS(f32 (*)[4], s16);

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void searchMapEventData__14dEvt_control_cFUc();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void aramToMainRam__7JKRAramFUlPUcUl15JKRExpandSwitchUlP7JKRHeapiPUl();
extern "C" void findFsResource__10JKRArchiveCFPCcUl();
extern "C" void getAramAddress__14JKRAramArchiveFPCc();
extern "C" void OSGetTime();
extern "C" void PSMTXMultVec();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern f32 G_CM3D_F_ABS_MIN[1 + 1 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 803A7240-803A7250 0010+00 s=0 e=0 z=6  None .data      ZeroQuat */
SECTION_DATA u8 ZeroQuat[16] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
};

/* 803A7250-803A7260 0010+00 s=0 e=1 z=0  None .data      __vt__10CSTControl */
SECTION_DATA void* __vt__10CSTControl[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)getValueStick__10CSTControlFv,
    (void*)getAngleStick__10CSTControlFv,
};

/* 803A7260-803A7270 0010+00 s=1 e=1 z=0  None .data      __vt__9STControl */
SECTION_DATA void* __vt__9STControl[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)getValueStick__9STControlFv,
    (void*)getAngleStick__9STControlFv,
};

/* 80032044-80032088 0044+00 s=0 e=6 z=0  None .text      __ct__9STControlFssssffss */
//	80032058: 803A7260 (__vt__9STControl)
//	8003205C: 803A7260 (__vt__9STControl)
//	80032064: 80032088 (setWaitParm__9STControlFssssffss)
//	8003206C: 800320AC (init__9STControlFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm STControl::STControl(s16 param_0, s16 param_1, s16 param_2, s16 param_3, f32 param_4,
                         f32 param_5, s16 param_6, s16 param_7) {
    nofralloc
#include "asm/d/d_lib/__ct__9STControlFssssffss.s"
}
#pragma pop

/* 80032088-800320AC 0024+00 s=1 e=3 z=0  None .text      setWaitParm__9STControlFssssffss */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void STControl::setWaitParm(s16 param_0, s16 param_1, s16 param_2, s16 param_3, f32 param_4,
                                f32 param_5, s16 param_6, s16 param_7) {
    nofralloc
#include "asm/d/d_lib/setWaitParm__9STControlFssssffss.s"
}
#pragma pop

/* 800320AC-800320FC 0050+00 s=1 e=1 z=0  None .text      init__9STControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void STControl::init() {
    nofralloc
#include "asm/d/d_lib/init__9STControlFv.s"
}
#pragma pop

/* 800320FC-8003212C 0030+00 s=1 e=0 z=0  None .text      Xinit__9STControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void STControl::Xinit() {
    nofralloc
#include "asm/d/d_lib/Xinit__9STControlFv.s"
}
#pragma pop

/* 8003212C-8003215C 0030+00 s=1 e=0 z=0  None .text      Yinit__9STControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void STControl::Yinit() {
    nofralloc
#include "asm/d/d_lib/Yinit__9STControlFv.s"
}
#pragma pop

/* 8003215C-8003216C 0010+00 s=1 e=0 z=0  None .text      getValueStick__9STControlFv */
//	8003215C: 803DD2E8 (m_cpadInfo__8mDoCPd_c)
//	80032160: 803DD2E8 (m_cpadInfo__8mDoCPd_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void STControl::getValueStick() {
    nofralloc
#include "asm/d/d_lib/getValueStick__9STControlFv.s"
}
#pragma pop

/* 8003216C-8003217C 0010+00 s=1 e=0 z=0  None .text      getAngleStick__9STControlFv */
//	8003216C: 803DD2E8 (m_cpadInfo__8mDoCPd_c)
//	80032170: 803DD2E8 (m_cpadInfo__8mDoCPd_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void STControl::getAngleStick() {
    nofralloc
#include "asm/d/d_lib/getAngleStick__9STControlFv.s"
}
#pragma pop

/* 8003217C-8003218C 0010+00 s=1 e=0 z=0  None .text      getValueStick__10CSTControlFv */
//	8003217C: 803DD2E8 (m_cpadInfo__8mDoCPd_c)
//	80032180: 803DD2E8 (m_cpadInfo__8mDoCPd_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void CSTControl::getValueStick() {
    nofralloc
#include "asm/d/d_lib/getValueStick__10CSTControlFv.s"
}
#pragma pop

/* 8003218C-8003219C 0010+00 s=1 e=0 z=0  None .text      getAngleStick__10CSTControlFv */
//	8003218C: 803DD2E8 (m_cpadInfo__8mDoCPd_c)
//	80032190: 803DD2E8 (m_cpadInfo__8mDoCPd_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void CSTControl::getAngleStick() {
    nofralloc
#include "asm/d/d_lib/getAngleStick__10CSTControlFv.s"
}
#pragma pop

/* 8003219C-8003242C 0290+00 s=0 e=24 z=0  None .text      checkTrigger__9STControlFv */
//	80032204: 80451180 (G_CM3D_F_ABS_MIN)
//	80032388: 800320FC (Xinit__9STControlFv)
//	8003239C: 8003212C (Yinit__9STControlFv)
//	800323B0: 800320FC (Xinit__9STControlFv)
//	800323B8: 8003212C (Yinit__9STControlFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void STControl::checkTrigger() {
    nofralloc
#include "asm/d/d_lib/checkTrigger__9STControlFv.s"
}
#pragma pop

/* 8003242C-800324A8 007C+00 s=0 e=14 z=0  None .text      checkLeftTrigger__9STControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void STControl::checkLeftTrigger() {
    nofralloc
#include "asm/d/d_lib/checkLeftTrigger__9STControlFv.s"
}
#pragma pop

/* 800324A8-80032524 007C+00 s=0 e=14 z=0  None .text      checkRightTrigger__9STControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void STControl::checkRightTrigger() {
    nofralloc
#include "asm/d/d_lib/checkRightTrigger__9STControlFv.s"
}
#pragma pop

/* 80032524-800325A0 007C+00 s=0 e=20 z=0  None .text      checkUpTrigger__9STControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void STControl::checkUpTrigger() {
    nofralloc
#include "asm/d/d_lib/checkUpTrigger__9STControlFv.s"
}
#pragma pop

/* 800325A0-8003261C 007C+00 s=0 e=21 z=0  None .text      checkDownTrigger__9STControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void STControl::checkDownTrigger() {
    nofralloc
#include "asm/d/d_lib/checkDownTrigger__9STControlFv.s"
}
#pragma pop

/* 8003261C-80032654 0038+00 s=0 e=0 z=1  None .text      dLib_getEventSwitchNo__Fi */
//	8003262C: 800434D8 (searchMapEventData__14dEvt_control_cFUc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dLib_getEventSwitchNo(int param_0) {
    nofralloc
#include "asm/d/d_lib/dLib_getEventSwitchNo__Fi.s"
}
#pragma pop

/* 80032654-80032738 00E4+00 s=0 e=0 z=8  None .text
 * dLib_checkActorInRectangle__FP10fopAc_ac_cP10fopAc_ac_cPC4cXyzPC4cXyz */
//	80032664: 803621DC (_savegpr_29)
//	80032684: 80266B34 (__mi__4cXyzCFRC3Vec)
//	800326A0: 803DD470 (now__14mDoMtx_stack_c)
//	800326A4: 803DD470 (now__14mDoMtx_stack_c)
//	800326B4: 8000C3DC (mDoMtx_YrotS__FPA4_fs)
//	800326B8: 803DD470 (now__14mDoMtx_stack_c)
//	800326BC: 803DD470 (now__14mDoMtx_stack_c)
//	800326C8: 80346D6C (PSMTXMultVec)
//	80032724: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dLib_checkActorInRectangle(fopAc_ac_c* param_0, fopAc_ac_c* param_1, cXyz const* param_2,
                                    cXyz const* param_3) {
    nofralloc
#include "asm/d/d_lib/dLib_checkActorInRectangle__FP10fopAc_ac_cP10fopAc_ac_cPC4cXyzPC4cXyz.s"
}
#pragma pop

/* 80032738-80032804 00CC+00 s=0 e=4 z=0  None .text
 * dLib_getExpandSizeFromAramArchive__FP14JKRAramArchivePCc     */
//	80032760: 802D781C (getAramAddress__14JKRAramArchiveFPCc)
//	80032790: 802D25B4 (aramToMainRam__7JKRAramFUlPUcUl15JKRExpandSwitchUlP7JKRHeapiPUl)
//	800327A0: 802D65A4 (findFsResource__10JKRArchiveCFPCcUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dLib_getExpandSizeFromAramArchive(JKRAramArchive* param_0, char const* param_1) {
    nofralloc
#include "asm/d/d_lib/dLib_getExpandSizeFromAramArchive__FP14JKRAramArchivePCc.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450DD8-80450DDC 0004+00 s=2 e=0 z=0  None .sbss      m_diffTime__11dLib_time_c */
static u8 m_diffTime__11dLib_time_c[4];

/* 80450DDC-80450DE0 0004+00 s=2 e=0 z=0  None .sbss      None */
static u8 data_80450DDC[4];

/* 80450DE0-80450DE4 0004+00 s=3 e=0 z=0  None .sbss      m_stopTime__11dLib_time_c */
static u8 m_stopTime__11dLib_time_c[4];

/* 80450DE4-80450DE8 0004+00 s=3 e=0 z=0  None .sbss      None */
static u8 data_80450DE4[4];

/* 80450DE8-80450DF0 0008+00 s=3 e=0 z=0  None .sbss      None */
static u8 data_80450DE8[8];

/* 80032804-80032880 007C+00 s=0 e=8 z=0  None .text      getTime__11dLib_time_cFv */
//	80032810: 80450DE8 (data_80450DE8)
//	8003281C: 803426FC (OSGetTime)
//	80032820: 80450DD8 (m_diffTime__11dLib_time_c)
//	80032824: 80450DDC (data_80450DDC)
//	80032834: 803426FC (OSGetTime)
//	80032838: 80450DD8 (m_diffTime__11dLib_time_c)
//	8003283C: 80450DDC (data_80450DDC)
//	80032840: 80450DE0 (m_stopTime__11dLib_time_c)
//	80032844: 80450DE4 (data_80450DE4)
//	80032858: 80450DDC (data_80450DDC)
//	8003285C: 80450DD8 (m_diffTime__11dLib_time_c)
//	80032860: 80450DE4 (data_80450DE4)
//	80032864: 80450DE0 (m_stopTime__11dLib_time_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dLib_time_c::getTime() {
    nofralloc
#include "asm/d/d_lib/getTime__11dLib_time_cFv.s"
}
#pragma pop

/* 80032880-800328BC 003C+00 s=0 e=1 z=0  None .text      stopTime__11dLib_time_cFv */
//	8003288C: 80450DE8 (data_80450DE8)
//	80032898: 803426FC (OSGetTime)
//	8003289C: 80450DE4 (data_80450DE4)
//	800328A0: 80450DE0 (m_stopTime__11dLib_time_c)
//	800328A8: 80450DE8 (data_80450DE8)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dLib_time_c::stopTime() {
    nofralloc
#include "asm/d/d_lib/stopTime__11dLib_time_cFv.s"
}
#pragma pop

/* 800328BC-80032918 005C+00 s=0 e=1 z=0  None .text      startTime__11dLib_time_cFv */
//	800328C8: 80450DE8 (data_80450DE8)
//	800328D4: 803426FC (OSGetTime)
//	800328D8: 80450DE0 (m_stopTime__11dLib_time_c)
//	800328DC: 80450DE4 (data_80450DE4)
//	800328E8: 80450DD8 (m_diffTime__11dLib_time_c)
//	800328EC: 80450DDC (data_80450DDC)
//	800328F8: 80450DDC (data_80450DDC)
//	800328FC: 80450DD8 (m_diffTime__11dLib_time_c)
//	80032904: 80450DE8 (data_80450DE8)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dLib_time_c::startTime() {
    nofralloc
#include "asm/d/d_lib/startTime__11dLib_time_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450DF0-80450DF8 0008+00 s=0 e=4 z=0  None .sbss      None */
u8 struct_80450DF0[8];
