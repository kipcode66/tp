//
// Generated By: dol2asm
// Translation Unit: d_a_obj_tmoon
//

#include "rel/d/a/obj/d_a_obj_tmoon/d_a_obj_tmoon.h"
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

struct leafdraw_class {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daObjTMoon_c {
    /* 80D12BB8 */ void initBaseMtx();
    /* 80D12BF4 */ void setBaseMtx();
    /* 80D12C48 */ void Create();
    /* 80D12C9C */ void CreateHeap();
    /* 80D12D0C */ void create();
    /* 80D12DC0 */ void execute();
    /* 80D12EB4 */ void draw();
    /* 80D12EDC */ void _delete();
};

struct dSv_event_c {
    /* 800349BC */ void isEventBit(u16) const;
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct create_tag_class {};

struct J3DModelData {};

//
// Forward References:
//

static void CheckCreateHeap(fopAc_ac_c*);
static void daObjTMoon_Draw(daObjTMoon_c*);
static void daObjTMoon_Execute(daObjTMoon_c*);
static void daObjTMoon_Delete(daObjTMoon_c*);
static void daObjTMoon_Create(daObjTMoon_c*);

extern "C" static void CheckCreateHeap__FP10fopAc_ac_c();
extern "C" void initBaseMtx__12daObjTMoon_cFv();
extern "C" void setBaseMtx__12daObjTMoon_cFv();
extern "C" void Create__12daObjTMoon_cFv();
extern "C" void CreateHeap__12daObjTMoon_cFv();
extern "C" void create__12daObjTMoon_cFv();
extern "C" void execute__12daObjTMoon_cFv();
extern "C" void draw__12daObjTMoon_cFv();
extern "C" void _delete__12daObjTMoon_cFv();
extern "C" static void daObjTMoon_Draw__FP12daObjTMoon_c();
extern "C" static void daObjTMoon_Execute__FP12daObjTMoon_c();
extern "C" static void daObjTMoon_Delete__FP12daObjTMoon_c();
extern "C" static void daObjTMoon_Create__FP12daObjTMoon_c();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_TMoon[12];

//
// External References:
//

void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopDwTg_ToDrawQ(create_tag_class*, int);
void fopDwTg_DrawQTo(create_tag_class*);
void fpcLf_GetPriority(leafdraw_class const*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopDwTg_ToDrawQ__FP16create_tag_classi();
extern "C" void fopDwTg_DrawQTo__FP16create_tag_class();
extern "C" void fpcLf_GetPriority__FPC14leafdraw_class();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void PSMTXCopy();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];

//
// Declarations:
//

/* 80D12B98-80D12BB8 0020+00 s=1 e=0 z=0  None .text      CheckCreateHeap__FP10fopAc_ac_c */
//	80D12BA4: 80D12C9C (CreateHeap__12daObjTMoon_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void CheckCreateHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tmoon/d_a_obj_tmoon/CheckCreateHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D12BB8-80D12BF4 003C+00 s=1 e=0 z=0  None .text      initBaseMtx__12daObjTMoon_cFv */
//	80D12BE0: 80D12BF4 (setBaseMtx__12daObjTMoon_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTMoon_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tmoon/d_a_obj_tmoon/initBaseMtx__12daObjTMoon_cFv.s"
}
#pragma pop

/* 80D12BF4-80D12C48 0054+00 s=1 e=0 z=0  None .text      setBaseMtx__12daObjTMoon_cFv */
//	80D12C0C: 8000CD64 (transS__14mDoMtx_stack_cFRC4cXyz)
//	80D12C10: 803DD470 (now__14mDoMtx_stack_c)
//	80D12C14: 803DD470 (now__14mDoMtx_stack_c)
//	80D12C1C: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80D12C20: 803DD470 (now__14mDoMtx_stack_c)
//	80D12C24: 803DD470 (now__14mDoMtx_stack_c)
//	80D12C30: 803464B0 (PSMTXCopy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTMoon_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tmoon/d_a_obj_tmoon/setBaseMtx__12daObjTMoon_cFv.s"
}
#pragma pop

/* 80D12C48-80D12C9C 0054+00 s=1 e=0 z=0  None .text      Create__12daObjTMoon_cFv */
//	80D12C74: 80D12BB8 (initBaseMtx__12daObjTMoon_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTMoon_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tmoon/d_a_obj_tmoon/Create__12daObjTMoon_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D12F98-80D12FA0 0008+00 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80D12F98 = "A_TMoon";
#pragma pop

/* 80D12FA0-80D12FA4 0004+00 s=3 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80D12C9C-80D12D0C 0070+00 s=1 e=0 z=0  None .text      CreateHeap__12daObjTMoon_cFv */
//	80D12CB0: 80D12FA0 (l_arcName)
//	80D12CB4: 80D12FA0 (l_arcName)
//	80D12CC0: 804061C0 (g_dComIfG_gameInfo)
//	80D12CC4: 804061C0 (g_dComIfG_gameInfo)
//	80D12CD4: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80D12CE4: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTMoon_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tmoon/d_a_obj_tmoon/CreateHeap__12daObjTMoon_cFv.s"
}
#pragma pop

/* 80D12D0C-80D12DC0 00B4+00 s=1 e=0 z=0  None .text      create__12daObjTMoon_cFv */
//	80D12D38: 80018B64 (__ct__10fopAc_ac_cFv)
//	80D12D4C: 80D12FA0 (l_arcName)
//	80D12D50: 80D12FA0 (l_arcName)
//	80D12D58: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80D12D6C: 80D12B98 (CheckCreateHeap__FP10fopAc_ac_c)
//	80D12D70: 80D12B98 (CheckCreateHeap__FP10fopAc_ac_c)
//	80D12D78: 8001A4B0 (fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl)
//	80D12D90: 80D12C48 (Create__12daObjTMoon_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTMoon_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tmoon/d_a_obj_tmoon/func_80D12D0C.s"
}
#pragma pop

/* 80D12DC0-80D12EB4 00F4+00 s=1 e=0 z=0  None .text      execute__12daObjTMoon_cFv */
//	80D12DE0: 804061C0 (g_dComIfG_gameInfo)
//	80D12DE4: 804061C0 (g_dComIfG_gameInfo)
//	80D12DF0: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	80D12DF4: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	80D12DFC: 800349BC (isEventBit__11dSv_event_cCFUs)
//	80D12E14: 804061C0 (g_dComIfG_gameInfo)
//	80D12E18: 804061C0 (g_dComIfG_gameInfo)
//	80D12E24: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	80D12E28: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	80D12E30: 800349BC (isEventBit__11dSv_event_cCFUs)
//	80D12E40: 800204D4 (fopDwTg_DrawQTo__FP16create_tag_class)
//	80D12E58: 804061C0 (g_dComIfG_gameInfo)
//	80D12E5C: 804061C0 (g_dComIfG_gameInfo)
//	80D12E68: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	80D12E6C: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	80D12E74: 800349BC (isEventBit__11dSv_event_cCFUs)
//	80D12E84: 80021A00 (fpcLf_GetPriority__FPC14leafdraw_class)
//	80D12E90: 800204AC (fopDwTg_ToDrawQ__FP16create_tag_classi)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTMoon_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tmoon/d_a_obj_tmoon/execute__12daObjTMoon_cFv.s"
}
#pragma pop

/* 80D12EB4-80D12EDC 0028+00 s=1 e=0 z=0  None .text      draw__12daObjTMoon_cFv */
//	80D12EB8: 8042CA54 (g_env_light)
//	80D12EBC: 8042CA54 (g_env_light)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTMoon_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tmoon/d_a_obj_tmoon/draw__12daObjTMoon_cFv.s"
}
#pragma pop

/* 80D12EDC-80D12F10 0034+00 s=1 e=0 z=0  None .text      _delete__12daObjTMoon_cFv */
//	80D12EE8: 80D12FA0 (l_arcName)
//	80D12EEC: 80D12FA0 (l_arcName)
//	80D12EF8: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTMoon_c::_delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tmoon/d_a_obj_tmoon/_delete__12daObjTMoon_cFv.s"
}
#pragma pop

/* 80D12F10-80D12F30 0020+00 s=1 e=0 z=0  None .text      daObjTMoon_Draw__FP12daObjTMoon_c */
//	80D12F1C: 80D12EB4 (draw__12daObjTMoon_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjTMoon_Draw(daObjTMoon_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tmoon/d_a_obj_tmoon/daObjTMoon_Draw__FP12daObjTMoon_c.s"
}
#pragma pop

/* 80D12F30-80D12F50 0020+00 s=1 e=0 z=0  None .text      daObjTMoon_Execute__FP12daObjTMoon_c */
//	80D12F3C: 80D12DC0 (execute__12daObjTMoon_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjTMoon_Execute(daObjTMoon_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tmoon/d_a_obj_tmoon/daObjTMoon_Execute__FP12daObjTMoon_c.s"
}
#pragma pop

/* 80D12F50-80D12F70 0020+00 s=1 e=0 z=0  None .text      daObjTMoon_Delete__FP12daObjTMoon_c */
//	80D12F5C: 80D12EDC (_delete__12daObjTMoon_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjTMoon_Delete(daObjTMoon_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tmoon/d_a_obj_tmoon/daObjTMoon_Delete__FP12daObjTMoon_c.s"
}
#pragma pop

/* 80D12F70-80D12F90 0020+00 s=1 e=0 z=0  None .text      daObjTMoon_Create__FP12daObjTMoon_c */
//	80D12F7C: 80D12D0C (create__12daObjTMoon_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjTMoon_Create(daObjTMoon_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tmoon/d_a_obj_tmoon/daObjTMoon_Create__FP12daObjTMoon_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D12FA4-80D12FC4 0020+00 s=1 e=0 z=0  None .data      l_daObjTMoon_Method */
SECTION_DATA static void* l_daObjTMoon_Method[8] = {
    (void*)daObjTMoon_Create__FP12daObjTMoon_c,
    (void*)daObjTMoon_Delete__FP12daObjTMoon_c,
    (void*)daObjTMoon_Execute__FP12daObjTMoon_c,
    (void*)NULL,
    (void*)daObjTMoon_Draw__FP12daObjTMoon_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D12FC4-80D12FF4 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_TMoon */
SECTION_DATA void* g_profile_Obj_TMoon[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01950000, (void*)&g_fpcLf_Method,
    (void*)0x00000578, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02390000, (void*)&l_daObjTMoon_Method,
    (void*)0x00040000, (void*)0x000E0000,
};
