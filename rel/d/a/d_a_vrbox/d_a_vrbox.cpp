//
// Generated By: dol2asm
// Translation Unit: d_a_vrbox
//

#include "rel/d/a/d_a_vrbox/d_a_vrbox.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct vrbox_class {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct dStage_roomControl_c {
    /* 80024384 */ void getStatusRoomDt(int);
};

struct J3DModelData {};

struct J3DModel {};

//
// Forward References:
//

static void daVrbox_Draw(vrbox_class*);
static void daVrbox_color_set(vrbox_class*);
static bool daVrbox_Execute(vrbox_class*);
static bool daVrbox_IsDelete(vrbox_class*);
static bool daVrbox_Delete(vrbox_class*);
static void daVrbox_solidHeapCB(fopAc_ac_c*);
static void daVrbox_Create(fopAc_ac_c*);

extern "C" static void daVrbox_Draw__FP11vrbox_class();
extern "C" static void daVrbox_color_set__FP11vrbox_class();
extern "C" static bool daVrbox_Execute__FP11vrbox_class();
extern "C" static bool daVrbox_IsDelete__FP11vrbox_class();
extern "C" static bool daVrbox_Delete__FP11vrbox_class();
extern "C" static void daVrbox_solidHeapCB__FP10fopAc_ac_c();
extern "C" static void daVrbox_Create__FP10fopAc_ac_c();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_VRBOX[12];

//
// External References:
//

void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void dComIfG_getStageRes(char const*);
void dKy_GxFog_set();

extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void getStatusRoomDt__20dStage_roomControl_cFi();
extern "C" void dComIfG_getStageRes__FPCc();
extern "C" void dKy_GxFog_set__Fv();
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
extern "C" extern u8 struct_80450D64[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80498990-80498994 0004+00 s=1 e=0 z=0  None .rodata    @3695 */
SECTION_RODATA static u8 const lit_3695[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80498994-80498998 0004+00 s=1 e=0 z=0  None .rodata    @3696 */
SECTION_RODATA static u32 const lit_3696 = 0x3DB851EC;

/* 80498518-804986B8 01A0+00 s=1 e=0 z=0  None .text      daVrbox_Draw__FP11vrbox_class */
//	80498530: 803621D8 (_savegpr_28)
//	80498538: 80498990 (lit_3695)
//	8049853C: 80498990 (lit_3695)
//	80498544: 804986B8 (daVrbox_color_set__FP11vrbox_class)
//	80498548: 8042CA54 (g_env_light)
//	8049854C: 8042CA54 (g_env_light)
//	80498564: 80450D64 (struct_80450D64)
//	80498568: 80450D64 (struct_80450D64)
//	80498574: 804061C0 (g_dComIfG_gameInfo)
//	80498578: 804061C0 (g_dComIfG_gameInfo)
//	80498580: 80024384 (getStatusRoomDt__20dStage_roomControl_cFi)
//	804985A4: 804061C0 (g_dComIfG_gameInfo)
//	804985A8: 804061C0 (g_dComIfG_gameInfo)
//	804985B8: 80498994 (lit_3696)
//	804985BC: 80498994 (lit_3696)
//	804985D0: 80498990 (lit_3695)
//	804985D4: 80498990 (lit_3695)
//	804985D8: 803DD470 (now__14mDoMtx_stack_c)
//	804985DC: 803DD470 (now__14mDoMtx_stack_c)
//	804985F0: 803468E8 (PSMTXTrans)
//	804985F4: 803DD470 (now__14mDoMtx_stack_c)
//	804985F8: 803DD470 (now__14mDoMtx_stack_c)
//	80498600: 803464B0 (PSMTXCopy)
//	80498604: 801A862C (dKy_GxFog_set__Fv)
//	80498654: 804061C0 (g_dComIfG_gameInfo)
//	80498658: 804061C0 (g_dComIfG_gameInfo)
//	80498660: 80434AC8 (j3dSys)
//	80498664: 80434AC8 (j3dSys)
//	80498678: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	8049867C: 804061C0 (g_dComIfG_gameInfo)
//	80498680: 804061C0 (g_dComIfG_gameInfo)
//	804986A4: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daVrbox_Draw(vrbox_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_vrbox/d_a_vrbox/daVrbox_Draw__FP11vrbox_class.s"
}
#pragma pop

/* 804986B8-80498850 0198+00 s=1 e=0 z=0  None .text      daVrbox_color_set__FP11vrbox_class */
//	804986C8: 803621DC (_savegpr_29)
//	804986CC: 8042CA54 (g_env_light)
//	804986D0: 8042CA54 (g_env_light)
//	804987F0: 8042CA54 (g_env_light)
//	804987F4: 8042CA54 (g_env_light)
//	8049883C: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daVrbox_color_set(vrbox_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_vrbox/d_a_vrbox/daVrbox_color_set__FP11vrbox_class.s"
}
#pragma pop

/* 80498850-80498858 0008+00 s=1 e=0 z=0  None .text      daVrbox_Execute__FP11vrbox_class */
static bool daVrbox_Execute(vrbox_class* param_0) {
    return true;
}

/* 80498858-80498860 0008+00 s=1 e=0 z=0  None .text      daVrbox_IsDelete__FP11vrbox_class */
static bool daVrbox_IsDelete(vrbox_class* param_0) {
    return true;
}

/* 80498860-80498868 0008+00 s=1 e=0 z=0  None .text      daVrbox_Delete__FP11vrbox_class */
static bool daVrbox_Delete(vrbox_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80498998-804989A7 000F+00 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80498998 = "vrbox_sora.bmd";
#pragma pop

/* 80498868-804988DC 0074+00 s=1 e=0 z=0  None .text      daVrbox_solidHeapCB__FP10fopAc_ac_c */
//	80498880: 80498998 (stringBase0)
//	80498884: 80498998 (stringBase0)
//	80498888: 8002F434 (dComIfG_getStageRes__FPCc)
//	8049889C: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daVrbox_solidHeapCB(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_vrbox/d_a_vrbox/daVrbox_solidHeapCB__FP10fopAc_ac_c.s"
}
#pragma pop

/* 804988DC-80498988 00AC+00 s=1 e=0 z=0  None .text      daVrbox_Create__FP10fopAc_ac_c */
//	80498908: 80018B64 (__ct__10fopAc_ac_cFv)
//	80498928: 80498868 (daVrbox_solidHeapCB__FP10fopAc_ac_c)
//	8049892C: 80498868 (daVrbox_solidHeapCB__FP10fopAc_ac_c)
//	80498934: 8001A4B0 (fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl)
//	80498940: 804061C0 (g_dComIfG_gameInfo)
//	80498944: 804061C0 (g_dComIfG_gameInfo)
//	80498958: 8042CA54 (g_env_light)
//	8049895C: 8042CA54 (g_env_light)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daVrbox_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_vrbox/d_a_vrbox/daVrbox_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 804989A8-804989C8 0020+00 s=1 e=0 z=0  None .data      l_daVrbox_Method */
SECTION_DATA static void* l_daVrbox_Method[8] = {
    (void*)daVrbox_Create__FP10fopAc_ac_c,
    (void*)daVrbox_Delete__FP11vrbox_class,
    (void*)daVrbox_Execute__FP11vrbox_class,
    (void*)daVrbox_IsDelete__FP11vrbox_class,
    (void*)daVrbox_Draw__FP11vrbox_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 804989C8-804989F8 0030+00 s=0 e=0 z=1  None .data      g_profile_VRBOX */
SECTION_DATA void* g_profile_VRBOX[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02DA0000, (void*)&g_fpcLf_Method,
    (void*)0x00000578, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00070000, (void*)&l_daVrbox_Method,
    (void*)0x00044000, (void*)NULL,
};
