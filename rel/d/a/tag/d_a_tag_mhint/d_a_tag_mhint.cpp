//
// Generated By: dol2asm
// Translation Unit: d_a_tag_mhint
//

#include "rel/d/a/tag/d_a_tag_mhint/d_a_tag_mhint.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTagMhint_c {
    /* 805A56B8 */ void create();
    /* 805A58E8 */ ~daTagMhint_c();
    /* 805A5974 */ void eventOrder();
    /* 805A5AE4 */ void execute();
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dSv_event_c {
    /* 800349BC */ void isEventBit(u16) const;
};

struct dMsgFlow_c {
    /* 80249F00 */ dMsgFlow_c();
    /* 80249F48 */ ~dMsgFlow_c();
    /* 80249F90 */ void init(fopAc_ac_c*, int, int, fopAc_ac_c**);
    /* 8024A2D8 */ void doFlow(fopAc_ac_c*, fopAc_ac_c**, int);
    /* 8024A528 */ void getEventId(int*);
};

struct dEvt_control_c {
    /* 80042468 */ void reset();
};

struct dEvent_manager_c {
    /* 80047698 */ void getEventIdx(fopAc_ac_c*, u8);
    /* 80047A78 */ void endCheck(s16);
};

struct dAttHint_c {
    /* 800738FC */ void request(fopAc_ac_c*, int);
};

struct Vec {};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

//
// Forward References:
//

static void daTagMhint_Create(fopAc_ac_c*);
static void daTagMhint_Delete(daTagMhint_c*);
static void daTagMhint_Execute(daTagMhint_c*);
static bool daTagMhint_Draw(daTagMhint_c*);

extern "C" void create__12daTagMhint_cFv();
extern "C" static void daTagMhint_Create__FP10fopAc_ac_c();
extern "C" void __dt__12daTagMhint_cFv();
extern "C" static void daTagMhint_Delete__FP12daTagMhint_c();
extern "C" void eventOrder__12daTagMhint_cFv();
extern "C" void execute__12daTagMhint_cFv();
extern "C" static void daTagMhint_Execute__FP12daTagMhint_c();
extern "C" static bool daTagMhint_Draw__FP12daTagMhint_c();
extern "C" extern u32 const lit_3742;
extern "C" extern u32 const lit_3743;
extern "C" extern u8 const lit_3956[4];
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Tag_Mhint[12];

//
// External References:
//

void fopAcM_delete(fopAc_ac_c*);
void fopAcM_searchActorAngleY(fopAc_ac_c const*, fopAc_ac_c const*);
void fopAcM_searchActorDistanceXZ2(fopAc_ac_c const*, fopAc_ac_c const*);
void fopAcM_orderSpeakEvent(fopAc_ac_c*, u16, u16);
void fopAcM_orderOtherEventId(fopAc_ac_c*, s16, u8, u16, u16, u16);
void dComIfGp_getRoomCamera(int);
void dComIfGp_getRoomArrow(int);
void operator delete(void*);

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ2__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderSpeakEvent__FP10fopAc_ac_cUsUs();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void dComIfGp_getRoomCamera__Fi();
extern "C" void dComIfGp_getRoomArrow__Fi();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void request__10dAttHint_cFP10fopAc_ac_ci();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void __dt__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void getEventId__10dMsgFlow_cFPi();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" void strcmp();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_meter2_info[248];
extern "C" extern u8 m_midnaActor__9daPy_py_c[4];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 805A6034-805A6038 0004+00 s=2 e=0 z=0  None .rodata    @3741 */
SECTION_RODATA static u32 const lit_3741 = 0x41200000;

/* 805A56B8-805A58C8 0210+00 s=1 e=0 z=0  None .text      create__12daTagMhint_cFv */
//	805A56C8: 803621DC (_savegpr_29)
//	805A56D0: 805A6034 (lit_3741)
//	805A56D4: 805A6034 (lit_3741)
//	805A56F0: 80018B64 (__ct__10fopAc_ac_cFv)
//	805A56F8: 80249F00 (__ct__10dMsgFlow_cFv)
//	805A5760: 804061C0 (g_dComIfG_gameInfo)
//	805A5764: 804061C0 (g_dComIfG_gameInfo)
//	805A57CC: 804061C0 (g_dComIfG_gameInfo)
//	805A57D0: 804061C0 (g_dComIfG_gameInfo)
//	805A57E0: 80047698 (getEventIdx__16dEvent_manager_cFP10fopAc_ac_cUc)
//	805A5854: 8002D25C (dComIfGp_getRoomCamera__Fi)
//	805A5870: 8002D2AC (dComIfGp_getRoomArrow__Fi)
//	805A58B4: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagMhint_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_mhint/d_a_tag_mhint/create__12daTagMhint_cFv.s"
}
#pragma pop

/* 805A58C8-805A58E8 0020+00 s=1 e=0 z=0  None .text      daTagMhint_Create__FP10fopAc_ac_c */
//	805A58D4: 805A56B8 (create__12daTagMhint_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagMhint_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_mhint/d_a_tag_mhint/daTagMhint_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 805A58E8-805A594C 0064+00 s=1 e=0 z=0  None .text      __dt__12daTagMhint_cFv */
//	805A5910: 80249F48 (__dt__10dMsgFlow_cFv)
//	805A591C: 80018C8C (__dt__10fopAc_ac_cFv)
//	805A592C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTagMhint_c::~daTagMhint_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_mhint/d_a_tag_mhint/__dt__12daTagMhint_cFv.s"
}
#pragma pop

/* 805A594C-805A5974 0028+00 s=1 e=0 z=0  None .text      daTagMhint_Delete__FP12daTagMhint_c */
//	805A595C: 805A58E8 (__dt__12daTagMhint_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagMhint_Delete(daTagMhint_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_mhint/d_a_tag_mhint/daTagMhint_Delete__FP12daTagMhint_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 805A6038-805A603C 0004+00 s=0 e=0 z=0  None .rodata    @3742 */
SECTION_RODATA u32 const lit_3742 = 0x461C4000;

/* 805A603C-805A6040 0004+00 s=0 e=0 z=0  None .rodata    @3743 */
SECTION_RODATA u32 const lit_3743 = 0x42C80000;

/* 805A6040-805A6044 0004+00 s=1 e=0 z=0  None .rodata    @3803 */
SECTION_RODATA static u32 const lit_3803 = 0x3F800000;

/* 805A6044-805A6048 0004+00 s=1 e=0 z=0  None .rodata    @3804 */
SECTION_RODATA static u32 const lit_3804 = 0xBF800000;

/* 805A6048-805A604C 0004+00 s=0 e=0 z=0  None .rodata    @3956 */
SECTION_RODATA u8 const lit_3956[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 805A604C-805A6054 0008+00 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_805A604C = "D_MN04B";
#pragma pop

/* 805A5974-805A5AE4 0170+00 s=1 e=0 z=0  None .text      eventOrder__12daTagMhint_cFv */
//	805A598C: 804061C0 (g_dComIfG_gameInfo)
//	805A5990: 804061C0 (g_dComIfG_gameInfo)
//	805A59C8: 804061C0 (g_dComIfG_gameInfo)
//	805A59CC: 804061C0 (g_dComIfG_gameInfo)
//	805A5A0C: 8001B67C (fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs)
//	805A5A20: 8001B19C (fopAcM_orderSpeakEvent__FP10fopAc_ac_cUsUs)
//	805A5A3C: 805A604C (stringBase0)
//	805A5A40: 805A604C (stringBase0)
//	805A5A44: 80368994 (strcmp)
//	805A5A5C: 800738FC (request__10dAttHint_cFP10fopAc_ac_ci)
//	805A5A88: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	805A5A8C: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	805A5AA4: 805A6040 (lit_3803)
//	805A5AA8: 805A6040 (lit_3803)
//	805A5AB0: 805A6044 (lit_3804)
//	805A5AB4: 805A6044 (lit_3804)
//	805A5AC0: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagMhint_c::eventOrder() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_mhint/d_a_tag_mhint/eventOrder__12daTagMhint_cFv.s"
}
#pragma pop

/* 805A5AE4-805A6004 0520+00 s=1 e=0 z=0  None .text      execute__12daTagMhint_cFv */
//	805A5AF4: 803621DC (_savegpr_29)
//	805A5AFC: 805A6034 (lit_3741)
//	805A5B00: 805A6034 (lit_3741)
//	805A5B04: 80451018 (m_midnaActor__9daPy_py_c)
//	805A5B08: 80451018 (m_midnaActor__9daPy_py_c)
//	805A5B7C: 804061C0 (g_dComIfG_gameInfo)
//	805A5B80: 804061C0 (g_dComIfG_gameInfo)
//	805A5B88: 8001A710 (fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c)
//	805A5B9C: 804061C0 (g_dComIfG_gameInfo)
//	805A5BA0: 804061C0 (g_dComIfG_gameInfo)
//	805A5BAC: 80047A78 (endCheck__16dEvent_manager_cFs)
//	805A5BBC: 80042468 (reset__14dEvt_control_cFv)
//	805A5BCC: 8001B19C (fopAcM_orderSpeakEvent__FP10fopAc_ac_cUsUs)
//	805A5C2C: 80249F90 (init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c)
//	805A5C40: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	805A5C44: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	805A5C70: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	805A5C90: 8024A2D8 (doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci)
//	805A5CA4: 8024A528 (getEventId__10dMsgFlow_cFPi)
//	805A5CB8: 80430188 (g_meter2_info)
//	805A5CBC: 80430188 (g_meter2_info)
//	805A5CE0: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	805A5CE4: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	805A5D10: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	805A5DAC: 804061C0 (g_dComIfG_gameInfo)
//	805A5DB0: 804061C0 (g_dComIfG_gameInfo)
//	805A5DB8: 80042468 (reset__14dEvt_control_cFv)
//	805A5DF4: 804061C0 (g_dComIfG_gameInfo)
//	805A5DF8: 804061C0 (g_dComIfG_gameInfo)
//	805A5E08: 80035200 (onSwitch__10dSv_info_cFii)
//	805A5E10: 80019C7C (fopAcM_delete__FP10fopAc_ac_c)
//	805A5E44: 8001B19C (fopAcM_orderSpeakEvent__FP10fopAc_ac_cUsUs)
//	805A5E5C: 804061C0 (g_dComIfG_gameInfo)
//	805A5E60: 804061C0 (g_dComIfG_gameInfo)
//	805A5E6C: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	805A5E70: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	805A5E78: 800349BC (isEventBit__11dSv_event_cCFUs)
//	805A5E98: 804061C0 (g_dComIfG_gameInfo)
//	805A5E9C: 804061C0 (g_dComIfG_gameInfo)
//	805A5EA8: 80035360 (isSwitch__10dSv_info_cCFii)
//	805A5EB8: 80019C7C (fopAcM_delete__FP10fopAc_ac_c)
//	805A5ECC: 804061C0 (g_dComIfG_gameInfo)
//	805A5ED0: 804061C0 (g_dComIfG_gameInfo)
//	805A5F00: 8001AA94 (fopAcM_searchActorDistanceXZ2__FPC10fopAc_ac_cPC10fopAc_ac_c)
//	805A5F1C: 804061C0 (g_dComIfG_gameInfo)
//	805A5F20: 804061C0 (g_dComIfG_gameInfo)
//	805A5F2C: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	805A5F30: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	805A5F38: 800349BC (isEventBit__11dSv_event_cCFUs)
//	805A5F50: 804061C0 (g_dComIfG_gameInfo)
//	805A5F54: 804061C0 (g_dComIfG_gameInfo)
//	805A5F60: 80035360 (isSwitch__10dSv_info_cCFii)
//	805A5F80: 804061C0 (g_dComIfG_gameInfo)
//	805A5F84: 804061C0 (g_dComIfG_gameInfo)
//	805A5FB4: 805A5974 (eventOrder__12daTagMhint_cFv)
//	805A5FF0: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagMhint_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_mhint/d_a_tag_mhint/execute__12daTagMhint_cFv.s"
}
#pragma pop

/* 805A6004-805A6024 0020+00 s=1 e=0 z=0  None .text      daTagMhint_Execute__FP12daTagMhint_c */
//	805A6010: 805A5AE4 (execute__12daTagMhint_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagMhint_Execute(daTagMhint_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_mhint/d_a_tag_mhint/daTagMhint_Execute__FP12daTagMhint_c.s"
}
#pragma pop

/* 805A6024-805A602C 0008+00 s=1 e=0 z=0  None .text      daTagMhint_Draw__FP12daTagMhint_c */
static bool daTagMhint_Draw(daTagMhint_c* param_0) {
    return true;
}

/* ############################################################################################## */
/* 805A6054-805A6074 0020+00 s=1 e=0 z=0  None .data      l_daTagMhint_Method */
SECTION_DATA static void* l_daTagMhint_Method[8] = {
    (void*)daTagMhint_Create__FP10fopAc_ac_c,
    (void*)daTagMhint_Delete__FP12daTagMhint_c,
    (void*)daTagMhint_Execute__FP12daTagMhint_c,
    (void*)NULL,
    (void*)daTagMhint_Draw__FP12daTagMhint_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 805A6074-805A60A4 0030+00 s=0 e=0 z=1  None .data      g_profile_Tag_Mhint */
SECTION_DATA void* g_profile_Tag_Mhint[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02C10000, (void*)&g_fpcLf_Method,
    (void*)0x000005D4, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00FE0000, (void*)&l_daTagMhint_Method,
    (void*)0x00044000, (void*)0x030E0000,
};
