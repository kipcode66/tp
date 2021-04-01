//
// Generated By: dol2asm
// Translation Unit: d_a_tag_Lv8Gate
//

#include "rel/d/a/tag/d_a_tag_Lv8Gate/d_a_tag_Lv8Gate.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct cXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
};

struct J3DAnmTransform {};

struct J3DModelData {};

struct mDoExt_bckAnm {
    /* 8000D7DC */ void init(J3DAnmTransform*, int, int, f32, s16, s16, bool);
    /* 8000D9CC */ void entry(J3DModelData*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTagLv8Gate_c {
    /* 80D51C58 */ void createHeap();
    /* 80D51F48 */ void execute();
};

struct dSv_event_c {
    /* 800349BC */ void isEventBit(u16) const;
};

struct dKy_tevstr_c {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dEvt_control_c {
    /* 80042468 */ void reset();
    /* 80042914 */ void setSkipProc(void*, int (*)(void*, int), int);
};

struct dEvent_manager_c {
    /* 80046800 */ void setObjectArchive(char*);
    /* 80047758 */ void getEventIdx(fopAc_ac_c*, char const*, u8);
    /* 80047A78 */ void endCheck(s16);
    /* 80047B1C */ void getMyStaffId(char const*, fopAc_ac_c*, int);
    /* 80047D4C */ void getIsAddvance(int);
    /* 80047F5C */ void getMyNowCutName(int);
    /* 8004817C */ void cutEnd(int);
};

struct dAttention_c {
    /* 80070880 */ void getActionBtnB();
    /* 80073734 */ void ActionTarget(s32);
};

struct Vec {};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80D51D80 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

static void createSolidHeap(fopAc_ac_c*);
static void daTagLv8Gate_Create(fopAc_ac_c*);
static void daTagLv8Gate_Execute(daTagLv8Gate_c*);
static void daTagLv8Gate_Draw(daTagLv8Gate_c*);
static bool daTagLv8Gate_IsDelete(daTagLv8Gate_c*);
static void daTagLv8Gate_Delete(daTagLv8Gate_c*);

extern "C" static void createSolidHeap__FP10fopAc_ac_c();
extern "C" void createHeap__14daTagLv8Gate_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daTagLv8Gate_Create__FP10fopAc_ac_c();
extern "C" static void daTagLv8Gate_Execute__FP14daTagLv8Gate_c();
extern "C" void execute__14daTagLv8Gate_cFv();
extern "C" static void daTagLv8Gate_Draw__FP14daTagLv8Gate_c();
extern "C" static bool daTagLv8Gate_IsDelete__FP14daTagLv8Gate_c();
extern "C" static void daTagLv8Gate_Delete__FP14daTagLv8Gate_c();
extern "C" extern u32 const lit_3805;
extern "C" extern u32 const lit_3806;
extern "C" extern u32 const lit_3807;
extern "C" extern u32 const lit_3808;
extern "C" extern u8 const lit_3891[4];
extern "C" extern u32 const lit_3892;
extern "C" extern u32 const lit_3893;
extern "C" extern u32 const lit_3894;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Tag_Lv8Gate[12];
extern "C" extern void* __vt__12J3DFrameCtrl[3];

//
// External References:
//

void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcIt_Judge(void* (*)(void*, void*), void*);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void fopAcM_orderOtherEventId(fopAc_ac_c*, s16, u8, u16, u16, u16);
void fopAcM_cancelCarryNow(fopAc_ac_c*);
void fpcSch_JudgeForPName(void*, void*);
void dStage_changeScene(int, f32, u32, s8, s16, int);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dEv_noFinishSkipProc(void*, int);
void* operator new(u32);
void operator delete(void*);

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void fopAcM_cancelCarryNow__FP10fopAc_ac_c();
extern "C" void fpcSch_JudgeForPName__FPvPv();
extern "C" void dStage_changeScene__FifUlScsi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void dEv_noFinishSkipProc__FPvi();
extern "C" void setSkipProc__14dEvt_control_cFPvPFPvi_ii();
extern "C" void setObjectArchive__16dEvent_manager_cFPc();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyNowCutName__16dEvent_manager_cFi();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void getActionBtnB__12dAttention_cFv();
extern "C" void ActionTarget__12dAttention_cFl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXMultVec();
extern "C" void _savegpr_24();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_29();
extern "C" void strcmp();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* 80D51C38-80D51C58 0020+00 s=1 e=0 z=0  None .text      createSolidHeap__FP10fopAc_ac_c */
//	80D51C44: 80D51C58 (createHeap__14daTagLv8Gate_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void createSolidHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv8Gate/d_a_tag_Lv8Gate/createSolidHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D524CC-80D524D0 0004+00 s=3 e=0 z=0  None .rodata    @3749 */
SECTION_RODATA static u32 const lit_3749 = 0x3F800000;

/* 80D524D0-80D524D4 0004+00 s=0 e=0 z=0  None .rodata    @3805 */
SECTION_RODATA u32 const lit_3805 = 0xC2C80000;

/* 80D524D4-80D524D8 0004+00 s=0 e=0 z=0  None .rodata    @3806 */
SECTION_RODATA u32 const lit_3806 = 0xC2480000;

/* 80D524D8-80D524DC 0004+00 s=0 e=0 z=0  None .rodata    @3807 */
SECTION_RODATA u32 const lit_3807 = 0x42C80000;

/* 80D524DC-80D524E0 0004+00 s=0 e=0 z=0  None .rodata    @3808 */
SECTION_RODATA u32 const lit_3808 = 0x435C0000;

/* 80D524E0-80D524E4 0004+00 s=0 e=0 z=0  None .rodata    @3891 */
SECTION_RODATA u8 const lit_3891[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80D524E4-80D524E8 0004+00 s=0 e=0 z=0  None .rodata    @3892 */
SECTION_RODATA u32 const lit_3892 = 0x43C80000;

/* 80D524E8-80D524EC 0004+00 s=0 e=0 z=0  None .rodata    @3893 */
SECTION_RODATA u32 const lit_3893 = 0x44AF0000;

/* 80D524EC-80D524F0 0004+00 s=0 e=0 z=0  None .rodata    @3894 */
SECTION_RODATA u32 const lit_3894 = 0xBF800000;

/* 80D524F0-80D5250E 001E+00 s=3 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80D524F0 = "Lv8Gate";
SECTION_DEAD char const* const stringBase_80D524F8 = "D_MN08";
SECTION_DEAD char const* const stringBase_80D524FF = "LV8_GATE_ENTRY";
#pragma pop

/* 80D52510-80D52514 0004+00 s=4 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80D52514-80D52534 0020+00 s=1 e=0 z=0  None .data      l_daTagLv8Gate_Method */
SECTION_DATA static void* l_daTagLv8Gate_Method[8] = {
    (void*)daTagLv8Gate_Create__FP10fopAc_ac_c,
    (void*)daTagLv8Gate_Delete__FP14daTagLv8Gate_c,
    (void*)daTagLv8Gate_Execute__FP14daTagLv8Gate_c,
    (void*)daTagLv8Gate_IsDelete__FP14daTagLv8Gate_c,
    (void*)daTagLv8Gate_Draw__FP14daTagLv8Gate_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D52534-80D52564 0030+00 s=0 e=0 z=1  None .data      g_profile_Tag_Lv8Gate */
SECTION_DATA void* g_profile_Tag_Lv8Gate[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02CB0000, (void*)&g_fpcLf_Method,
    (void*)0x0000057C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01080000, (void*)&l_daTagLv8Gate_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80D52564-80D52570 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl */
SECTION_DATA void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80D51C58-80D51D80 0128+00 s=1 e=0 z=0  None .text      createHeap__14daTagLv8Gate_cFv */
//	80D51C68: 803621DC (_savegpr_29)
//	80D51C70: 804061C0 (g_dComIfG_gameInfo)
//	80D51C74: 804061C0 (g_dComIfG_gameInfo)
//	80D51C7C: 80D524F0 (stringBase0)
//	80D51C80: 80D524F0 (stringBase0)
//	80D51C88: 80368994 (strcmp)
//	80D51C94: 80D52510 (l_arcName)
//	80D51C98: 80D52510 (l_arcName)
//	80D51CA4: 804061C0 (g_dComIfG_gameInfo)
//	80D51CA8: 804061C0 (g_dComIfG_gameInfo)
//	80D51CBC: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80D51CCC: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
//	80D51CD4: 80D52510 (l_arcName)
//	80D51CD8: 80D52510 (l_arcName)
//	80D51CEC: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80D51CF8: 802CEC4C (__nw__FUl)
//	80D51D04: 80D52564 (__vt__12J3DFrameCtrl)
//	80D51D08: 80D52564 (__vt__12J3DFrameCtrl)
//	80D51D14: 803283FC (init__12J3DFrameCtrlFs)
//	80D51D3C: 80D524CC (lit_3749)
//	80D51D40: 80D524CC (lit_3749)
//	80D51D50: 8000D7DC (init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb)
//	80D51D6C: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagLv8Gate_c::createHeap() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv8Gate/d_a_tag_Lv8Gate/createHeap__14daTagLv8Gate_cFv.s"
}
#pragma pop

/* 80D51D80-80D51DC8 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv */
//	80D51D98: 80D52564 (__vt__12J3DFrameCtrl)
//	80D51D9C: 80D52564 (__vt__12J3DFrameCtrl)
//	80D51DAC: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv8Gate/d_a_tag_Lv8Gate/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80D51DC8-80D51F28 0160+00 s=1 e=0 z=0  None .text      daTagLv8Gate_Create__FP10fopAc_ac_c */
//	80D51DD8: 803621DC (_savegpr_29)
//	80D51DDC: 80D524CC (lit_3749)
//	80D51DE0: 80D524CC (lit_3749)
//	80D51DFC: 80018B64 (__ct__10fopAc_ac_cFv)
//	80D51E0C: 804061C0 (g_dComIfG_gameInfo)
//	80D51E10: 804061C0 (g_dComIfG_gameInfo)
//	80D51E18: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	80D51E1C: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	80D51E24: 800349BC (isEventBit__11dSv_event_cCFUs)
//	80D51E3C: 80D52510 (l_arcName)
//	80D51E40: 80D52510 (l_arcName)
//	80D51E48: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80D51E5C: 80D51C38 (createSolidHeap__FP10fopAc_ac_c)
//	80D51E60: 80D51C38 (createSolidHeap__FP10fopAc_ac_c)
//	80D51E68: 8001A4B0 (fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl)
//	80D51E98: 8001A548 (fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff)
//	80D51ED8: 8000CD64 (transS__14mDoMtx_stack_cFRC4cXyz)
//	80D51EDC: 803DD470 (now__14mDoMtx_stack_c)
//	80D51EE0: 803DD470 (now__14mDoMtx_stack_c)
//	80D51EF4: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80D51EF8: 803DD470 (now__14mDoMtx_stack_c)
//	80D51EFC: 803DD470 (now__14mDoMtx_stack_c)
//	80D51F08: 803464B0 (PSMTXCopy)
//	80D51F14: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagLv8Gate_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv8Gate/d_a_tag_Lv8Gate/daTagLv8Gate_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D51F28-80D51F48 0020+00 s=1 e=0 z=0  None .text      daTagLv8Gate_Execute__FP14daTagLv8Gate_c
 */
//	80D51F34: 80D51F48 (execute__14daTagLv8Gate_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagLv8Gate_Execute(daTagLv8Gate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv8Gate/d_a_tag_Lv8Gate/daTagLv8Gate_Execute__FP14daTagLv8Gate_c.s"
}
#pragma pop

/* 80D51F48-80D522F0 03A8+00 s=1 e=0 z=0  None .text      execute__14daTagLv8Gate_cFv */
//	80D51F58: 803621C8 (_savegpr_24)
//	80D51F60: 80D524CC (lit_3749)
//	80D51F64: 80D524CC (lit_3749)
//	80D51F68: 804061C0 (g_dComIfG_gameInfo)
//	80D51F6C: 804061C0 (g_dComIfG_gameInfo)
//	80D51F90: 80D52510 (l_arcName)
//	80D51F94: 80D52510 (l_arcName)
//	80D51FA4: 80047B1C (getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci)
//	80D51FC0: 80047F5C (getMyNowCutName__16dEvent_manager_cFi)
//	80D51FD0: 80047D4C (getIsAddvance__16dEvent_manager_cFi)
//	80D5200C: 800428DC (dEv_noFinishSkipProc__FPvi)
//	80D52010: 800428DC (dEv_noFinishSkipProc__FPvi)
//	80D52018: 80042914 (setSkipProc__14dEvt_control_cFPvPFPvi_ii)
//	80D5201C: 804061C0 (g_dComIfG_gameInfo)
//	80D52020: 804061C0 (g_dComIfG_gameInfo)
//	80D5204C: 80023578 (fpcSch_JudgeForPName__FPvPv)
//	80D52050: 80023578 (fpcSch_JudgeForPName__FPvPv)
//	80D52058: 800197F8 (fopAcIt_Judge__FPFPvPv_PvPv)
//	80D52090: 80027170 (dStage_changeScene__FifUlScsi)
//	80D520A4: 80042468 (reset__14dEvt_control_cFv)
//	80D520C8: 80027170 (dStage_changeScene__FifUlScsi)
//	80D520F8: 8004817C (cutEnd__16dEvent_manager_cFi)
//	80D52118: 80047A78 (endCheck__16dEvent_manager_cFs)
//	80D52130: 804061C0 (g_dComIfG_gameInfo)
//	80D52134: 804061C0 (g_dComIfG_gameInfo)
//	80D52160: 804061C0 (g_dComIfG_gameInfo)
//	80D52164: 804061C0 (g_dComIfG_gameInfo)
//	80D5217C: 80073734 (ActionTarget__12dAttention_cFl)
//	80D5218C: 80070880 (getActionBtnB__12dAttention_cFv)
//	80D5219C: 80070880 (getActionBtnB__12dAttention_cFv)
//	80D521D4: 8001CBA0 (fopAcM_cancelCarryNow__FP10fopAc_ac_c)
//	80D521E4: 80D52510 (l_arcName)
//	80D521E8: 80D52510 (l_arcName)
//	80D521FC: 80046800 (setObjectArchive__16dEvent_manager_cFPc)
//	80D52208: 80D524F0 (stringBase0)
//	80D5220C: 80D524F0 (stringBase0)
//	80D52218: 80047758 (getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc)
//	80D5223C: 8001B67C (fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs)
//	80D5224C: 8000D428 (play__14mDoExt_baseAnmFv)
//	80D5226C: 8000CD64 (transS__14mDoMtx_stack_cFRC4cXyz)
//	80D52270: 803DD470 (now__14mDoMtx_stack_c)
//	80D52274: 803DD470 (now__14mDoMtx_stack_c)
//	80D5227C: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80D52280: 803DD470 (now__14mDoMtx_stack_c)
//	80D52284: 803DD470 (now__14mDoMtx_stack_c)
//	80D52290: 80346D6C (PSMTXMultVec)
//	80D522A0: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D522A4: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D522D0: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80D522DC: 80362214 (_restgpr_24)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagLv8Gate_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv8Gate/d_a_tag_Lv8Gate/execute__14daTagLv8Gate_cFv.s"
}
#pragma pop

/* 80D522F0-80D5246C 017C+00 s=1 e=0 z=0  None .text      daTagLv8Gate_Draw__FP14daTagLv8Gate_c */
//	80D52300: 803621DC (_savegpr_29)
//	80D523A0: 8042CA54 (g_env_light)
//	80D523A4: 8042CA54 (g_env_light)
//	80D523B4: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80D523B8: 8042CA54 (g_env_light)
//	80D523BC: 8042CA54 (g_env_light)
//	80D523CC: 801A4DA0
//(setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c) 	80D523E8:
// 8000D9CC (entry__13mDoExt_bckAnmFP12J3DModelDataf) 	80D523EC: 804061C0 (g_dComIfG_gameInfo)
//	80D523F0: 804061C0 (g_dComIfG_gameInfo)
//	80D523F8: 80434AC8 (j3dSys)
//	80D523FC: 80434AC8 (j3dSys)
//	80D52410: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	80D52414: 804061C0 (g_dComIfG_gameInfo)
//	80D52418: 804061C0 (g_dComIfG_gameInfo)
//	80D52458: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagLv8Gate_Draw(daTagLv8Gate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv8Gate/d_a_tag_Lv8Gate/daTagLv8Gate_Draw__FP14daTagLv8Gate_c.s"
}
#pragma pop

/* 80D5246C-80D52474 0008+00 s=1 e=0 z=0  None .text      daTagLv8Gate_IsDelete__FP14daTagLv8Gate_c
 */
static bool daTagLv8Gate_IsDelete(daTagLv8Gate_c* param_0) {
    return true;
}

/* 80D52474-80D524C4 0050+00 s=1 e=0 z=0  None .text      daTagLv8Gate_Delete__FP14daTagLv8Gate_c */
//	80D52490: 80D52510 (l_arcName)
//	80D52494: 80D52510 (l_arcName)
//	80D5249C: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
//	80D524A8: 80018C8C (__dt__10fopAc_ac_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagLv8Gate_Delete(daTagLv8Gate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv8Gate/d_a_tag_Lv8Gate/daTagLv8Gate_Delete__FP14daTagLv8Gate_c.s"
}
#pragma pop
