//
// Generated By: dol2asm
// Translation Unit: d_a_kytag09
//

#include "rel/d/a/kytag/d_a_kytag09/d_a_kytag09.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct J3DAnmTextureSRTKey {};

struct J3DMaterialTable {};

struct mDoExt_btkAnm {
    /* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
    /* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct kytag09_class {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct dSv_player_status_b_c {
    /* 80032BB0 */ void isDarkClearLV(int) const;
};

struct cXyz {};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 8085B9F4 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

static void daKytag09_Draw(kytag09_class*);
static bool daKytag09_Execute(kytag09_class*);
static bool daKytag09_IsDelete(kytag09_class*);
static void daKytag09_Delete(kytag09_class*);
static void useHeapInit(fopAc_ac_c*);
static void useHeapInit2(fopAc_ac_c*);
static void daKytag09_Create(fopAc_ac_c*);

extern "C" static void daKytag09_Draw__FP13kytag09_class();
extern "C" static bool daKytag09_Execute__FP13kytag09_class();
extern "C" static bool daKytag09_IsDelete__FP13kytag09_class();
extern "C" static void daKytag09_Delete__FP13kytag09_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void useHeapInit2__FP10fopAc_ac_c();
extern "C" static void daKytag09_Create__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_KYTAG09[12];
extern "C" extern void* __vt__12J3DFrameCtrl[3];

//
// External References:
//

void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void operator delete(void*);

extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isDarkClearLV__21dSv_player_status_b_cCFi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];

//
// Declarations:
//

/* ############################################################################################## */
/* 8085BA44-8085BA48 0004+00 s=1 e=0 z=0  None .rodata    @3863 */
SECTION_RODATA static u8 const lit_3863[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8085B3F8-8085B5F4 01FC+00 s=1 e=0 z=0  None .text      daKytag09_Draw__FP13kytag09_class */
//	8085B408: 803621DC (_savegpr_29)
//	8085B418: 8042CA54 (g_env_light)
//	8085B41C: 8042CA54 (g_env_light)
//	8085B42C: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	8085B430: 8042CA54 (g_env_light)
//	8085B434: 8042CA54 (g_env_light)
//	8085B440: 801A4DA0
//(setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c) 	8085B458:
// 8042CA54 (g_env_light) 	8085B45C: 8042CA54 (g_env_light) 	8085B464: 801A4DA0
//(setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c) 	8085B468:
// 803DD470 (now__14mDoMtx_stack_c) 	8085B46C: 803DD470 (now__14mDoMtx_stack_c) 	8085B470:
// 8085BA44
//(lit_3863) 	8085B474: 8085BA44 (lit_3863) 	8085B480: 803468E8 (PSMTXTrans) 	8085B484:
//803DD470 (now__14mDoMtx_stack_c) 	8085B488: 803DD470 (now__14mDoMtx_stack_c) 	8085B490: 803464B0
//(PSMTXCopy) 	8085B494: 804061C0 (g_dComIfG_gameInfo) 	8085B498: 804061C0 (g_dComIfG_gameInfo)
//	8085B4A0: 80434AC8 (j3dSys)
//	8085B4A4: 80434AC8 (j3dSys)
//	8085B4CC: 803464B0 (PSMTXCopy)
//	8085B4DC: 803464B0 (PSMTXCopy)
//	8085B4E0: 804061C0 (g_dComIfG_gameInfo)
//	8085B4E4: 804061C0 (g_dComIfG_gameInfo)
//	8085B4F4: 80032BB0 (isDarkClearLV__21dSv_player_status_b_cCFi)
//	8085B514: 8000D6D8 (entry__13mDoExt_btkAnmFP16J3DMaterialTablef)
//	8085B51C: 8000D428 (play__14mDoExt_baseAnmFv)
//	8085B524: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	8085B534: 80032BB0 (isDarkClearLV__21dSv_player_status_b_cCFi)
//	8085B554: 8000D6D8 (entry__13mDoExt_btkAnmFP16J3DMaterialTablef)
//	8085B55C: 8000D428 (play__14mDoExt_baseAnmFv)
//	8085B564: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	8085B578: 803464B0 (PSMTXCopy)
//	8085B57C: 804061C0 (g_dComIfG_gameInfo)
//	8085B580: 804061C0 (g_dComIfG_gameInfo)
//	8085B58C: 80032BB0 (isDarkClearLV__21dSv_player_status_b_cCFi)
//	8085B5AC: 8000D6D8 (entry__13mDoExt_btkAnmFP16J3DMaterialTablef)
//	8085B5B4: 8000D428 (play__14mDoExt_baseAnmFv)
//	8085B5BC: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	8085B5C0: 804061C0 (g_dComIfG_gameInfo)
//	8085B5C4: 804061C0 (g_dComIfG_gameInfo)
//	8085B5E0: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daKytag09_Draw(kytag09_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag09/d_a_kytag09/daKytag09_Draw__FP13kytag09_class.s"
}
#pragma pop

/* 8085B5F4-8085B5FC 0008+00 s=1 e=0 z=0  None .text      daKytag09_Execute__FP13kytag09_class */
static bool daKytag09_Execute(kytag09_class* param_0) {
    return true;
}

/* 8085B5FC-8085B604 0008+00 s=1 e=0 z=0  None .text      daKytag09_IsDelete__FP13kytag09_class */
static bool daKytag09_IsDelete(kytag09_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 8085BA48-8085BA4C 0004+00 s=2 e=0 z=0  None .rodata    @3906 */
SECTION_RODATA static u32 const lit_3906 = 0x3F800000;

/* 8085BA4C-8085BA5E 0012+00 s=4 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_8085BA4C = "Kytag09";
SECTION_DEAD char const* const stringBase_8085BA54 = "kytag09_2";
#pragma pop

/* 8085B604-8085B658 0054+00 s=1 e=0 z=0  None .text      daKytag09_Delete__FP13kytag09_class */
//	8085B620: 8085BA4C (stringBase0)
//	8085B624: 8085BA4C (stringBase0)
//	8085B628: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
//	8085B634: 8085BA4C (stringBase0)
//	8085B638: 8085BA4C (stringBase0)
//	8085B640: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daKytag09_Delete(kytag09_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag09/d_a_kytag09/daKytag09_Delete__FP13kytag09_class.s"
}
#pragma pop

/* 8085B658-8085B7C0 0168+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c */
//	8085B668: 803621D8 (_savegpr_28)
//	8085B670: 8085BA4C (stringBase0)
//	8085B674: 8085BA4C (stringBase0)
//	8085B67C: 804061C0 (g_dComIfG_gameInfo)
//	8085B680: 804061C0 (g_dComIfG_gameInfo)
//	8085B694: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	8085B69C: 8085BA4C (stringBase0)
//	8085B6A0: 8085BA4C (stringBase0)
//	8085B6B0: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	8085B6C8: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
//	8085B6E4: 8085BA4C (stringBase0)
//	8085B6E8: 8085BA4C (stringBase0)
//	8085B6F8: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	8085B710: 8085BA48 (lit_3906)
//	8085B714: 8085BA48 (lit_3906)
//	8085B720: 8000D63C (init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss)
//	8085B744: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
//	8085B760: 8085BA4C (stringBase0)
//	8085B764: 8085BA4C (stringBase0)
//	8085B774: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	8085B78C: 8085BA48 (lit_3906)
//	8085B790: 8085BA48 (lit_3906)
//	8085B79C: 8000D63C (init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss)
//	8085B7AC: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag09/d_a_kytag09/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 8085B7C0-8085B894 00D4+00 s=1 e=0 z=0  None .text      useHeapInit2__FP10fopAc_ac_c */
//	8085B7D0: 803621DC (_savegpr_29)
//	8085B7D8: 8085BA4C (stringBase0)
//	8085B7DC: 8085BA4C (stringBase0)
//	8085B7E8: 804061C0 (g_dComIfG_gameInfo)
//	8085B7EC: 804061C0 (g_dComIfG_gameInfo)
//	8085B800: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	8085B814: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
//	8085B830: 8085BA4C (stringBase0)
//	8085B834: 8085BA4C (stringBase0)
//	8085B848: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	8085B860: 8085BA48 (lit_3906)
//	8085B864: 8085BA48 (lit_3906)
//	8085B870: 8000D63C (init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss)
//	8085B880: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit2(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag09/d_a_kytag09/useHeapInit2__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 8085BA60-8085BA80 0020+00 s=1 e=0 z=0  None .data      l_daKytag09_Method */
SECTION_DATA static void* l_daKytag09_Method[8] = {
    (void*)daKytag09_Create__FP10fopAc_ac_c,
    (void*)daKytag09_Delete__FP13kytag09_class,
    (void*)daKytag09_Execute__FP13kytag09_class,
    (void*)daKytag09_IsDelete__FP13kytag09_class,
    (void*)daKytag09_Draw__FP13kytag09_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8085BA80-8085BAB0 0030+00 s=0 e=0 z=1  None .data      g_profile_KYTAG09 */
SECTION_DATA void* g_profile_KYTAG09[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02B30000, (void*)&g_fpcLf_Method,
    (void*)0x000005C8, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00670000, (void*)&l_daKytag09_Method,
    (void*)0x00060000, (void*)NULL,
};

/* 8085BAB0-8085BABC 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl */
SECTION_DATA void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 8085B894-8085B9F4 0160+00 s=1 e=0 z=0  None .text      daKytag09_Create__FP10fopAc_ac_c */
//	8085B8A4: 803621DC (_savegpr_29)
//	8085B8CC: 80018B64 (__ct__10fopAc_ac_cFv)
//	8085B8D4: 8085BAB0 (__vt__12J3DFrameCtrl)
//	8085B8D8: 8085BAB0 (__vt__12J3DFrameCtrl)
//	8085B8E8: 803283FC (init__12J3DFrameCtrlFs)
//	8085B8F8: 8085BAB0 (__vt__12J3DFrameCtrl)
//	8085B8FC: 8085BAB0 (__vt__12J3DFrameCtrl)
//	8085B90C: 803283FC (init__12J3DFrameCtrlFs)
//	8085B91C: 8085BAB0 (__vt__12J3DFrameCtrl)
//	8085B920: 8085BAB0 (__vt__12J3DFrameCtrl)
//	8085B930: 803283FC (init__12J3DFrameCtrlFs)
//	8085B958: 8085BA4C (stringBase0)
//	8085B95C: 8085BA4C (stringBase0)
//	8085B960: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	8085B974: 8085B658 (useHeapInit__FP10fopAc_ac_c)
//	8085B978: 8085B658 (useHeapInit__FP10fopAc_ac_c)
//	8085B980: 8001A4B0 (fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl)
//	8085B998: 8085BA4C (stringBase0)
//	8085B99C: 8085BA4C (stringBase0)
//	8085B9A4: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	8085B9B8: 8085B7C0 (useHeapInit2__FP10fopAc_ac_c)
//	8085B9BC: 8085B7C0 (useHeapInit2__FP10fopAc_ac_c)
//	8085B9C4: 8001A4B0 (fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl)
//	8085B9E0: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daKytag09_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag09/d_a_kytag09/daKytag09_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 8085B9F4-8085BA3C 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv */
//	8085BA0C: 8085BAB0 (__vt__12J3DFrameCtrl)
//	8085BA10: 8085BAB0 (__vt__12J3DFrameCtrl)
//	8085BA20: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag09/d_a_kytag09/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop
