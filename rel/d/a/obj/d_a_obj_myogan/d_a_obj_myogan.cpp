//
// Generated By: dol2asm
// Translation Unit: d_a_obj_myogan
//

#include "rel/d/a/obj/d_a_obj_myogan/d_a_obj_myogan.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct obj_myogan_class {};

struct mDoMtx_stack_c {
    /* 8000CE38 */ void scaleM(f32, f32, f32);
};

struct J3DAnmTextureSRTKey {};

struct J3DMaterialTable {};

struct mDoExt_btkAnm {
    /* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
    /* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct J3DAnmTevRegKey {};

struct mDoExt_brkAnm {
    /* 8000D70C */ void init(J3DMaterialTable*, J3DAnmTevRegKey*, int, int, f32, s16, s16);
    /* 8000D7A8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daObj_Myogan_HIO_c {
    /* 80C9EBAC */ daObj_Myogan_HIO_c();
    /* 80C9F1F0 */ ~daObj_Myogan_HIO_c();
};

struct dSv_memBit_c {
    /* 80034934 */ void isDungeonItem(int) const;
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

struct dBgW_Base {};

struct dBgW {
    /* 8007B970 */ dBgW();
    /* 8007B9C0 */ void Move();
};

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct csXyz {};

struct cBgD_t {};

struct cBgW {
    /* 80079F38 */ void Set(cBgD_t*, u32, f32 (*)[3][4]);
};

struct cBgS_PolyInfo {};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80C9F064 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

static void daObj_Myogan_Draw(obj_myogan_class*);
static void action(obj_myogan_class*);
static void daObj_Myogan_Execute(obj_myogan_class*);
static bool daObj_Myogan_IsDelete(obj_myogan_class*);
static void daObj_Myogan_Delete(obj_myogan_class*);
static void useHeapInit(fopAc_ac_c*);
static void daObj_Myogan_Create(fopAc_ac_c*);

extern "C" void __ct__18daObj_Myogan_HIO_cFv();
extern "C" static void daObj_Myogan_Draw__FP16obj_myogan_class();
extern "C" static void action__FP16obj_myogan_class();
extern "C" static void daObj_Myogan_Execute__FP16obj_myogan_class();
extern "C" static bool daObj_Myogan_IsDelete__FP16obj_myogan_class();
extern "C" static void daObj_Myogan_Delete__FP16obj_myogan_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daObj_Myogan_Create__FP10fopAc_ac_c();
extern "C" void __dt__18daObj_Myogan_HIO_cFv();
extern "C" void __sinit_d_a_obj_myogan_cpp();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_OBJ_MYOGAN[12];
extern "C" extern void* __vt__12J3DFrameCtrl[3];
extern "C" extern void* __vt__18daObj_Myogan_HIO_c[3];

//
// External References:
//

void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dBgS_MoveBGProc_Typical(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void cM_rndF(f32);
void cLib_addCalc2(f32*, f32, f32, f32);
void* operator new(u32);
void operator delete(void*);

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isDungeonItem__12dSv_memBit_cCFi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cM_rndF__Ff();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80C9F288-80C9F28C 0004+00 s=2 e=0 z=0  None .rodata    @3762 */
SECTION_RODATA static u32 const lit_3762 = 0x3F800000;

/* 80C9F28C-80C9F290 0004+00 s=1 e=0 z=0  None .rodata    @3763 */
SECTION_RODATA static u8 const lit_3763[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80C9F2A8-80C9F2C8 0020+00 s=1 e=0 z=0  None .data      l_daObj_Myogan_Method */
SECTION_DATA static void* l_daObj_Myogan_Method[8] = {
    (void*)daObj_Myogan_Create__FP10fopAc_ac_c,
    (void*)daObj_Myogan_Delete__FP16obj_myogan_class,
    (void*)daObj_Myogan_Execute__FP16obj_myogan_class,
    (void*)daObj_Myogan_IsDelete__FP16obj_myogan_class,
    (void*)daObj_Myogan_Draw__FP16obj_myogan_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C9F2C8-80C9F2F8 0030+00 s=0 e=0 z=1  None .data      g_profile_OBJ_MYOGAN */
SECTION_DATA void* g_profile_OBJ_MYOGAN[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x007C0000, (void*)&g_fpcLf_Method,
    (void*)0x000005C4, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00340000, (void*)&l_daObj_Myogan_Method,
    (void*)0x00044000, (void*)0x000E0000,
};

/* 80C9F2F8-80C9F304 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl */
SECTION_DATA void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80C9F304-80C9F310 000C+00 s=2 e=0 z=0  None .data      __vt__18daObj_Myogan_HIO_c */
SECTION_DATA void* __vt__18daObj_Myogan_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18daObj_Myogan_HIO_cFv,
};

/* 80C9EBAC-80C9EBDC 0030+00 s=1 e=0 z=0  None .text      __ct__18daObj_Myogan_HIO_cFv */
//	80C9EBAC: 80C9F304 (__vt__18daObj_Myogan_HIO_c)
//	80C9EBB0: 80C9F304 (__vt__18daObj_Myogan_HIO_c)
//	80C9EBC0: 80C9F288 (lit_3762)
//	80C9EBC4: 80C9F288 (lit_3762)
//	80C9EBCC: 80C9F28C (lit_3763)
//	80C9EBD0: 80C9F28C (lit_3763)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_Myogan_HIO_c::daObj_Myogan_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_myogan/d_a_obj_myogan/__ct__18daObj_Myogan_HIO_cFv.s"
}
#pragma pop

/* 80C9EBDC-80C9EC70 0094+00 s=1 e=0 z=0  None .text      daObj_Myogan_Draw__FP16obj_myogan_class */
//	80C9EBF0: 8042CA54 (g_env_light)
//	80C9EBF4: 8042CA54 (g_env_light)
//	80C9EC04: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80C9EC08: 8042CA54 (g_env_light)
//	80C9EC0C: 8042CA54 (g_env_light)
//	80C9EC1C: 801A4DA0
//(setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c) 	80C9EC34:
// 8000D7A8 (entry__13mDoExt_brkAnmFP16J3DMaterialTablef) 	80C9EC4C: 8000D6D8
//(entry__13mDoExt_btkAnmFP16J3DMaterialTablef) 	80C9EC54: 8000DCC4
//(mDoExt_modelUpdateDL__FP8J3DModel)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Myogan_Draw(obj_myogan_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_myogan/d_a_obj_myogan/daObj_Myogan_Draw__FP16obj_myogan_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C9F290-80C9F294 0004+00 s=1 e=0 z=0  None .rodata    @3823 */
SECTION_RODATA static u32 const lit_3823 = 0x3D4CCCCD;

/* 80C9F294-80C9F298 0004+00 s=1 e=0 z=0  None .rodata    @3824 */
SECTION_RODATA static u32 const lit_3824 = 0x41200000;

/* 80C9F318-80C9F31C 0004+00 s=2 e=0 z=0  None .bss       None */
static u8 data_80C9F318[4];

/* 80C9F31C-80C9F328 000C+00 s=1 e=0 z=0  None .bss       @3757 */
static u8 lit_3757[12];

/* 80C9F328-80C9F338 0010+00 s=3 e=0 z=0  None .bss       l_HIO */
static u8 l_HIO[16];

/* 80C9EC70-80C9ED5C 00EC+00 s=1 e=0 z=0  None .text      action__FP16obj_myogan_class */
//	80C9ECA8: 80C9F328 (l_HIO)
//	80C9ECAC: 80C9F328 (l_HIO)
//	80C9ECB8: 80C9F290 (lit_3823)
//	80C9ECBC: 80C9F290 (lit_3823)
//	80C9ECC0: 80C9F294 (lit_3824)
//	80C9ECC4: 80C9F294 (lit_3824)
//	80C9ECC8: 8026FA3C (cLib_addCalc2__FPffff)
//	80C9ECCC: 803DD470 (now__14mDoMtx_stack_c)
//	80C9ECD0: 803DD470 (now__14mDoMtx_stack_c)
//	80C9ECE0: 803468E8 (PSMTXTrans)
//	80C9ECE4: 803DD470 (now__14mDoMtx_stack_c)
//	80C9ECE8: 803DD470 (now__14mDoMtx_stack_c)
//	80C9ECF0: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80C9ECF4: 80C9F328 (l_HIO)
//	80C9ECF8: 80C9F328 (l_HIO)
//	80C9ED08: 8000CE38 (scaleM__14mDoMtx_stack_cFfff)
//	80C9ED0C: 803DD470 (now__14mDoMtx_stack_c)
//	80C9ED10: 803DD470 (now__14mDoMtx_stack_c)
//	80C9ED1C: 803464B0 (PSMTXCopy)
//	80C9ED20: 803DD470 (now__14mDoMtx_stack_c)
//	80C9ED24: 803DD470 (now__14mDoMtx_stack_c)
//	80C9ED2C: 803464B0 (PSMTXCopy)
//	80C9ED34: 8007B9C0 (Move__4dBgWFv)
//	80C9ED3C: 8000D428 (play__14mDoExt_baseAnmFv)
//	80C9ED44: 8000D428 (play__14mDoExt_baseAnmFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void action(obj_myogan_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_myogan/d_a_obj_myogan/action__FP16obj_myogan_class.s"
}
#pragma pop

/* 80C9ED5C-80C9EDB8 005C+00 s=2 e=0 z=0  None .text      daObj_Myogan_Execute__FP16obj_myogan_class
 */
//	80C9EDA0: 80C9EC70 (action__FP16obj_myogan_class)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Myogan_Execute(obj_myogan_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_myogan/d_a_obj_myogan/daObj_Myogan_Execute__FP16obj_myogan_class.s"
}
#pragma pop

/* 80C9EDB8-80C9EDC0 0008+00 s=1 e=0 z=0  None .text daObj_Myogan_IsDelete__FP16obj_myogan_class
 */
static bool daObj_Myogan_IsDelete(obj_myogan_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80C9F298-80C9F29C 0004+00 s=1 e=0 z=0  None .rodata    @3966 */
SECTION_RODATA static u32 const lit_3966 = 0x47800000;

/* 80C9F29C-80C9F2A0 0004+00 s=1 e=0 z=0  None .rodata    @3967 */
SECTION_RODATA static u32 const lit_3967 = 0x448FC000;

/* 80C9F2A0-80C9F2A8 0008+00 s=3 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C9F2A0 = "S_YOGAN";
#pragma pop

/* 80C9EDC0-80C9EE28 0068+00 s=1 e=0 z=0  None .text      daObj_Myogan_Delete__FP16obj_myogan_class
 */
//	80C9EDD8: 80C9F2A0 (stringBase0)
//	80C9EDDC: 80C9F2A0 (stringBase0)
//	80C9EDE0: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
//	80C9EDF4: 80C9F318 (data_80C9F318)
//	80C9EDF8: 80C9F318 (data_80C9F318)
//	80C9EDFC: 804061C0 (g_dComIfG_gameInfo)
//	80C9EE00: 804061C0 (g_dComIfG_gameInfo)
//	80C9EE0C: 80074250 (Release__4cBgSFP9dBgW_Base)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Myogan_Delete(obj_myogan_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_myogan/d_a_obj_myogan/daObj_Myogan_Delete__FP16obj_myogan_class.s"
}
#pragma pop

/* 80C9EE28-80C9F064 023C+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c */
//	80C9EE38: 803621DC (_savegpr_29)
//	80C9EE40: 80C9F2A0 (stringBase0)
//	80C9EE44: 80C9F2A0 (stringBase0)
//	80C9EE4C: 804061C0 (g_dComIfG_gameInfo)
//	80C9EE50: 804061C0 (g_dComIfG_gameInfo)
//	80C9EE64: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80C9EE74: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
//	80C9EE94: 802CEC4C (__nw__FUl)
//	80C9EEA0: 80C9F2F8 (__vt__12J3DFrameCtrl)
//	80C9EEA4: 80C9F2F8 (__vt__12J3DFrameCtrl)
//	80C9EEB0: 803283FC (init__12J3DFrameCtrlFs)
//	80C9EED4: 80C9F2A0 (stringBase0)
//	80C9EED8: 80C9F2A0 (stringBase0)
//	80C9EEE8: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80C9EF08: 80C9F288 (lit_3762)
//	80C9EF0C: 80C9F288 (lit_3762)
//	80C9EF18: 8000D70C (init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss)
//	80C9EF30: 802CEC4C (__nw__FUl)
//	80C9EF3C: 80C9F2F8 (__vt__12J3DFrameCtrl)
//	80C9EF40: 80C9F2F8 (__vt__12J3DFrameCtrl)
//	80C9EF4C: 803283FC (init__12J3DFrameCtrlFs)
//	80C9EF70: 80C9F2A0 (stringBase0)
//	80C9EF74: 80C9F2A0 (stringBase0)
//	80C9EF84: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80C9EFA4: 80C9F288 (lit_3762)
//	80C9EFA8: 80C9F288 (lit_3762)
//	80C9EFB4: 8000D63C (init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss)
//	80C9EFCC: 802CEC4C (__nw__FUl)
//	80C9EFD8: 8007B970 (__ct__4dBgWFv)
//	80C9EFF8: 80C9F2A0 (stringBase0)
//	80C9EFFC: 80C9F2A0 (stringBase0)
//	80C9F00C: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80C9F020: 80079F38 (Set__4cBgWFP6cBgD_tUlPA3_A4_f)
//	80C9F038: 80075A24 (dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80C9F03C: 80075A24 (dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80C9F050: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_myogan/d_a_obj_myogan/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C9F064-80C9F0AC 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv */
//	80C9F07C: 80C9F2F8 (__vt__12J3DFrameCtrl)
//	80C9F080: 80C9F2F8 (__vt__12J3DFrameCtrl)
//	80C9F090: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_myogan/d_a_obj_myogan/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80C9F0AC-80C9F1F0 0144+00 s=1 e=0 z=0  None .text      daObj_Myogan_Create__FP10fopAc_ac_c */
//	80C9F0D8: 80018B64 (__ct__10fopAc_ac_cFv)
//	80C9F0EC: 80C9F2A0 (stringBase0)
//	80C9F0F0: 80C9F2A0 (stringBase0)
//	80C9F0F4: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80C9F108: 80C9EE28 (useHeapInit__FP10fopAc_ac_c)
//	80C9F10C: 80C9EE28 (useHeapInit__FP10fopAc_ac_c)
//	80C9F118: 8001A4B0 (fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl)
//	80C9F12C: 804061C0 (g_dComIfG_gameInfo)
//	80C9F130: 804061C0 (g_dComIfG_gameInfo)
//	80C9F140: 80074A08 (Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c)
//	80C9F154: 80C9F318 (data_80C9F318)
//	80C9F158: 80C9F318 (data_80C9F318)
//	80C9F174: 80C9F328 (l_HIO)
//	80C9F178: 80C9F328 (l_HIO)
//	80C9F180: 80C9F298 (lit_3966)
//	80C9F184: 80C9F298 (lit_3966)
//	80C9F188: 80267954 (cM_rndF__Ff)
//	80C9F19C: 804061C0 (g_dComIfG_gameInfo)
//	80C9F1A0: 804061C0 (g_dComIfG_gameInfo)
//	80C9F1AC: 80034934 (isDungeonItem__12dSv_memBit_cCFi)
//	80C9F1C0: 80C9F29C (lit_3967)
//	80C9F1C4: 80C9F29C (lit_3967)
//	80C9F1D0: 80C9ED5C (daObj_Myogan_Execute__FP16obj_myogan_class)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Myogan_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_myogan/d_a_obj_myogan/daObj_Myogan_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C9F1F0-80C9F238 0048+00 s=2 e=0 z=0  None .text      __dt__18daObj_Myogan_HIO_cFv */
//	80C9F208: 80C9F304 (__vt__18daObj_Myogan_HIO_c)
//	80C9F20C: 80C9F304 (__vt__18daObj_Myogan_HIO_c)
//	80C9F21C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_Myogan_HIO_c::~daObj_Myogan_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_myogan/d_a_obj_myogan/__dt__18daObj_Myogan_HIO_cFv.s"
}
#pragma pop

/* 80C9F238-80C9F274 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_myogan_cpp */
//	80C9F244: 80C9F328 (l_HIO)
//	80C9F248: 80C9F328 (l_HIO)
//	80C9F24C: 80C9EBAC (__ct__18daObj_Myogan_HIO_cFv)
//	80C9F250: 80C9F1F0 (__dt__18daObj_Myogan_HIO_cFv)
//	80C9F254: 80C9F1F0 (__dt__18daObj_Myogan_HIO_cFv)
//	80C9F258: 80C9F31C (lit_3757)
//	80C9F25C: 80C9F31C (lit_3757)
//	80C9F260: 80C9EB38 (__register_global_object)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_obj_myogan_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_myogan/d_a_obj_myogan/__sinit_d_a_obj_myogan_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80C9F238 = (void*)__sinit_d_a_obj_myogan_cpp;
#pragma pop
