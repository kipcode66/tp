//
// Generated By: dol2asm
// Translation Unit: d_a_obj_gb
//

#include "rel/d/a/obj/d_a_obj_gb/d_a_obj_gb.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct obj_gb_class {};

struct mDoMtx_stack_c {
    /* 8000CD9C */ void transM(f32, f32, f32);
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

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct cXyz {
    /* 80BF678C */ ~cXyz();
    /* 80BF6DB0 */ cXyz();
};

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

struct cBgD_t {};

struct cBgW {
    /* 80079F38 */ void Set(cBgD_t*, u32, f32 (*)[3][4]);
};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct Vec {};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80BF6A98 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

static void daObj_Gb_Draw(obj_gb_class*);
static void daObj_Gb_Execute(obj_gb_class*);
static bool daObj_Gb_IsDelete(obj_gb_class*);
static void daObj_Gb_Delete(obj_gb_class*);
static void useHeapInit(fopAc_ac_c*);
static void daObj_Gb_Create(fopAc_ac_c*);

extern "C" static void daObj_Gb_Draw__FP12obj_gb_class();
extern "C" static void daObj_Gb_Execute__FP12obj_gb_class();
extern "C" void __dt__4cXyzFv();
extern "C" static bool daObj_Gb_IsDelete__FP12obj_gb_class();
extern "C" static void daObj_Gb_Delete__FP12obj_gb_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daObj_Gb_Create__FP10fopAc_ac_c();
extern "C" void __ct__4cXyzFv();
extern "C" extern u32 const lit_3892;
extern "C" extern u32 const lit_3893;
extern "C" extern u32 const lit_3895;
extern "C" extern u32 const lit_4083;
extern "C" extern u32 const lit_4084;
extern "C" extern u32 const lit_4085;
extern "C" extern u32 const lit_4086;
extern "C" extern u8 const lit_4088[8];
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern u8 data_80BF6E1C[8];
extern "C" extern u8 data_80BF6E24[8];
extern "C" extern u8 data_80BF6E2C[8];
extern "C" extern u8 data_80BF6E34[8];
extern "C" extern void* g_profile_OBJ_GB[12];
extern "C" extern void* __vt__12J3DFrameCtrl[3];

//
// External References:
//

void mDoMtx_YrotS(f32 (*)[4], s16);
void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dKy_bg_MAxx_proc(void*);
void cM_rndF(f32);
void cLib_addCalc2(f32*, f32, f32, f32);
void MtxPosition(cXyz*, cXyz*);
void* operator new(u32);
void operator delete(void*);

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
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
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_bg_MAxx_proc__FPv();
extern "C" void cM_rndF__Ff();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSVECAdd();
extern "C" void __construct_array();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void strcmp();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* 80BF6318-80BF63F8 00E0+00 s=1 e=0 z=0  None .text      daObj_Gb_Draw__FP12obj_gb_class */
//	80BF6328: 803621DC (_savegpr_29)
//	80BF6330: 8042CA54 (g_env_light)
//	80BF6334: 8042CA54 (g_env_light)
//	80BF6344: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80BF6348: 8042CA54 (g_env_light)
//	80BF634C: 8042CA54 (g_env_light)
//	80BF635C: 801A4DA0
//(setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c) 	80BF63B0:
// 801ACD24 (dKy_bg_MAxx_proc__FPv) 	80BF63C0: 8000D6D8
// (entry__13mDoExt_btkAnmFP16J3DMaterialTablef) 	80BF63D0: 8000D7A8
//(entry__13mDoExt_brkAnmFP16J3DMaterialTablef) 	80BF63D8: 8000DCC4
//(mDoExt_modelUpdateDL__FP8J3DModel) 	80BF63E4: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Gb_Draw(obj_gb_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gb/d_a_obj_gb/daObj_Gb_Draw__FP12obj_gb_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BF6DBC-80BF6DC0 0004+00 s=2 e=0 z=0  None .rodata    @3890 */
SECTION_RODATA static u32 const lit_3890 = 0x3F000000;

/* 80BF6DC0-80BF6DC4 0004+00 s=1 e=0 z=0  None .rodata    @3891 */
SECTION_RODATA static u32 const lit_3891 = 0x3F800000;

/* 80BF6DC4-80BF6DC8 0004+00 s=0 e=0 z=0  None .rodata    @3892 */
SECTION_RODATA u32 const lit_3892 = 0xBF800000;

/* 80BF6DC8-80BF6DCC 0004+00 s=0 e=0 z=0  None .rodata    @3893 */
SECTION_RODATA u32 const lit_3893 = 0x41E80000;

/* 80BF6DCC-80BF6DD0 0004+00 s=1 e=0 z=0  None .rodata    @3894 */
SECTION_RODATA static u8 const lit_3894[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80BF6DD0-80BF6DD4 0004+00 s=0 e=0 z=0  None .rodata    @3895 */
SECTION_RODATA u32 const lit_3895 = 0xC3480000;

/* 80BF6DD4-80BF6DD8 0004+00 s=0 e=0 z=0  None .rodata    @4083 */
SECTION_RODATA u32 const lit_4083 = 0x3C23D70A;

/* 80BF6DD8-80BF6DDC 0004+00 s=0 e=0 z=0  None .rodata    @4084 */
SECTION_RODATA u32 const lit_4084 = 0x3EAAAA9F;

/* 80BF6DDC-80BF6DE0 0004+00 s=0 e=0 z=0  None .rodata    @4085 */
SECTION_RODATA u32 const lit_4085 = 0x47800000;

/* 80BF6DE0-80BF6DE4 0004+00 s=0 e=0 z=0  None .rodata    @4086 */
SECTION_RODATA u32 const lit_4086 = 0x447A0000;

/* 80BF6DE4-80BF6DEC 0008+00 s=0 e=0 z=0  None .rodata    @4088 */
SECTION_RODATA u8 const lit_4088[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BF6DEC-80BF6DFB 000F+00 s=4 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80BF6DEC = "D_MN09B";
SECTION_DEAD char const* const stringBase_80BF6DF4 = "Obj_gb";
#pragma pop

/* 80BF63F8-80BF678C 0394+00 s=2 e=0 z=0  None .text      daObj_Gb_Execute__FP12obj_gb_class */
//	80BF6410: 803621D0 (_savegpr_26)
//	80BF6418: 80BF6DBC (lit_3890)
//	80BF641C: 80BF6DBC (lit_3890)
//	80BF6494: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BF6498: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BF64B4: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BF64B8: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BF64E8: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80BF651C: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80BF6550: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BF6554: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BF6580: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80BF6590: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BF6594: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BF65C0: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80BF65D4: 8026FA3C (cLib_addCalc2__FPffff)
//	80BF65D8: 804061C0 (g_dComIfG_gameInfo)
//	80BF65DC: 804061C0 (g_dComIfG_gameInfo)
//	80BF65E4: 80BF6DEC (stringBase0)
//	80BF65E8: 80BF6DEC (stringBase0)
//	80BF65EC: 80368994 (strcmp)
//	80BF65F8: 804061C0 (g_dComIfG_gameInfo)
//	80BF65FC: 804061C0 (g_dComIfG_gameInfo)
//	80BF660C: 80035360 (isSwitch__10dSv_info_cCFii)
//	80BF6618: 804061C0 (g_dComIfG_gameInfo)
//	80BF661C: 804061C0 (g_dComIfG_gameInfo)
//	80BF662C: 80035360 (isSwitch__10dSv_info_cCFii)
//	80BF6654: 8026FA3C (cLib_addCalc2__FPffff)
//	80BF6658: 804061C0 (g_dComIfG_gameInfo)
//	80BF665C: 804061C0 (g_dComIfG_gameInfo)
//	80BF666C: 80035360 (isSwitch__10dSv_info_cCFii)
//	80BF6678: 804061C0 (g_dComIfG_gameInfo)
//	80BF667C: 804061C0 (g_dComIfG_gameInfo)
//	80BF668C: 80035360 (isSwitch__10dSv_info_cCFii)
//	80BF66A0: 803DD470 (now__14mDoMtx_stack_c)
//	80BF66A4: 803DD470 (now__14mDoMtx_stack_c)
//	80BF66B4: 803468E8 (PSMTXTrans)
//	80BF66B8: 803DD470 (now__14mDoMtx_stack_c)
//	80BF66BC: 803DD470 (now__14mDoMtx_stack_c)
//	80BF66C4: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80BF66E0: 8000CE38 (scaleM__14mDoMtx_stack_cFfff)
//	80BF66F4: 8000CE38 (scaleM__14mDoMtx_stack_cFfff)
//	80BF66F8: 803DD470 (now__14mDoMtx_stack_c)
//	80BF66FC: 803DD470 (now__14mDoMtx_stack_c)
//	80BF6708: 803464B0 (PSMTXCopy)
//	80BF6710: 8000D428 (play__14mDoExt_baseAnmFv)
//	80BF673C: 8000CD9C (transM__14mDoMtx_stack_cFfff)
//	80BF674C: 8000CE38 (scaleM__14mDoMtx_stack_cFfff)
//	80BF6750: 803DD470 (now__14mDoMtx_stack_c)
//	80BF6754: 803DD470 (now__14mDoMtx_stack_c)
//	80BF675C: 803464B0 (PSMTXCopy)
//	80BF6764: 8007B9C0 (Move__4dBgWFv)
//	80BF6778: 8036221C (_restgpr_26)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Gb_Execute(obj_gb_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gb/d_a_obj_gb/daObj_Gb_Execute__FP12obj_gb_class.s"
}
#pragma pop

/* 80BF678C-80BF67C8 003C+00 s=1 e=0 z=0  None .text      __dt__4cXyzFv */
//	80BF67AC: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gb/d_a_obj_gb/__dt__4cXyzFv.s"
}
#pragma pop

/* 80BF67C8-80BF67D0 0008+00 s=1 e=0 z=0  None .text      daObj_Gb_IsDelete__FP12obj_gb_class */
static bool daObj_Gb_IsDelete(obj_gb_class* param_0) {
    return true;
}

/* 80BF67D0-80BF682C 005C+00 s=1 e=0 z=0  None .text      daObj_Gb_Delete__FP12obj_gb_class */
//	80BF67E8: 80BF6DEC (stringBase0)
//	80BF67EC: 80BF6DEC (stringBase0)
//	80BF67F4: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
//	80BF6804: 804061C0 (g_dComIfG_gameInfo)
//	80BF6808: 804061C0 (g_dComIfG_gameInfo)
//	80BF6810: 80074250 (Release__4cBgSFP9dBgW_Base)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Gb_Delete(obj_gb_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gb/d_a_obj_gb/daObj_Gb_Delete__FP12obj_gb_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BF6DFC-80BF6E08 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BF6E08-80BF6E1C 0004+10 s=0 e=0 z=0  None .data      @1787 */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};

/* 80BF6E1C-80BF6E24 0008+00 s=0 e=0 z=0  None .data      bmd$3914 */
SECTION_DATA u8 data_80BF6E1C[8] = {
    0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07,
};

/* 80BF6E24-80BF6E2C 0008+00 s=0 e=0 z=0  None .data      brk$3915 */
SECTION_DATA u8 data_80BF6E24[8] = {
    0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x0B,
};

/* 80BF6E2C-80BF6E34 0008+00 s=0 e=0 z=0  None .data      btk$3916 */
SECTION_DATA u8 data_80BF6E2C[8] = {
    0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x0F,
};

/* 80BF6E34-80BF6E3C 0008+00 s=0 e=0 z=0  None .data      dzb$3917 */
SECTION_DATA u8 data_80BF6E34[8] = {
    0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x13,
};

/* 80BF6E3C-80BF6E5C 0020+00 s=1 e=0 z=0  None .data      l_daObj_Gb_Method */
SECTION_DATA static void* l_daObj_Gb_Method[8] = {
    (void*)daObj_Gb_Create__FP10fopAc_ac_c,
    (void*)daObj_Gb_Delete__FP12obj_gb_class,
    (void*)daObj_Gb_Execute__FP12obj_gb_class,
    (void*)daObj_Gb_IsDelete__FP12obj_gb_class,
    (void*)daObj_Gb_Draw__FP12obj_gb_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BF6E5C-80BF6E8C 0030+00 s=0 e=0 z=1  None .data      g_profile_OBJ_GB */
SECTION_DATA void* g_profile_OBJ_GB[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x002D0000, (void*)&g_fpcLf_Method,
    (void*)0x000006BC, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00380000, (void*)&l_daObj_Gb_Method,
    (void*)0x00044000, (void*)0x000E0000,
};

/* 80BF6E8C-80BF6E98 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl */
SECTION_DATA void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80BF682C-80BF6A98 026C+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c */
//	80BF683C: 803621D8 (_savegpr_28)
//	80BF6844: 80BF6DFC (cNullVec__6Z2Calc)
//	80BF6848: 80BF6DFC (cNullVec__6Z2Calc)
//	80BF684C: 80BF6DEC (stringBase0)
//	80BF6850: 80BF6DEC (stringBase0)
//	80BF6868: 804061C0 (g_dComIfG_gameInfo)
//	80BF686C: 804061C0 (g_dComIfG_gameInfo)
//	80BF6880: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80BF6890: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
//	80BF68B0: 802CEC4C (__nw__FUl)
//	80BF68BC: 80BF6E8C (__vt__12J3DFrameCtrl)
//	80BF68C0: 80BF6E8C (__vt__12J3DFrameCtrl)
//	80BF68CC: 803283FC (init__12J3DFrameCtrlFs)
//	80BF68F0: 80BF6DEC (stringBase0)
//	80BF68F4: 80BF6DEC (stringBase0)
//	80BF6914: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80BF6934: 80BF6DC0 (lit_3891)
//	80BF6938: 80BF6DC0 (lit_3891)
//	80BF6944: 8000D63C (init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss)
//	80BF695C: 802CEC4C (__nw__FUl)
//	80BF6968: 80BF6E8C (__vt__12J3DFrameCtrl)
//	80BF696C: 80BF6E8C (__vt__12J3DFrameCtrl)
//	80BF6978: 803283FC (init__12J3DFrameCtrlFs)
//	80BF699C: 80BF6DEC (stringBase0)
//	80BF69A0: 80BF6DEC (stringBase0)
//	80BF69C0: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80BF69E0: 80BF6DCC (lit_3894)
//	80BF69E4: 80BF6DCC (lit_3894)
//	80BF69F0: 8000D70C (init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss)
//	80BF6A08: 802CEC4C (__nw__FUl)
//	80BF6A14: 8007B970 (__ct__4dBgWFv)
//	80BF6A34: 80BF6DEC (stringBase0)
//	80BF6A38: 80BF6DEC (stringBase0)
//	80BF6A58: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80BF6A6C: 80079F38 (Set__4cBgWFP6cBgD_tUlPA3_A4_f)
//	80BF6A84: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gb/d_a_obj_gb/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BF6A98-80BF6AE0 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv */
//	80BF6AB0: 80BF6E8C (__vt__12J3DFrameCtrl)
//	80BF6AB4: 80BF6E8C (__vt__12J3DFrameCtrl)
//	80BF6AC4: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gb/d_a_obj_gb/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80BF6AE0-80BF6DB0 02D0+00 s=1 e=0 z=0  None .text      daObj_Gb_Create__FP10fopAc_ac_c */
//	80BF6AF0: 803621CC (_savegpr_25)
//	80BF6AF8: 80BF6DBC (lit_3890)
//	80BF6AFC: 80BF6DBC (lit_3890)
//	80BF6B18: 80018B64 (__ct__10fopAc_ac_cFv)
//	80BF6B20: 80BF6DB0 (__ct__4cXyzFv)
//	80BF6B24: 80BF6DB0 (__ct__4cXyzFv)
//	80BF6B28: 80BF678C (__dt__4cXyzFv)
//	80BF6B2C: 80BF678C (__dt__4cXyzFv)
//	80BF6B38: 80361D60 (__construct_array)
//	80BF6B4C: 80BF6DEC (stringBase0)
//	80BF6B50: 80BF6DEC (stringBase0)
//	80BF6B58: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80BF6C78: 80BF682C (useHeapInit__FP10fopAc_ac_c)
//	80BF6C7C: 80BF682C (useHeapInit__FP10fopAc_ac_c)
//	80BF6C94: 8001A4B0 (fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl)
//	80BF6CB4: 804061C0 (g_dComIfG_gameInfo)
//	80BF6CB8: 804061C0 (g_dComIfG_gameInfo)
//	80BF6CC4: 80074A08 (Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c)
//	80BF6CDC: 80267954 (cM_rndF__Ff)
//	80BF6CF0: 804061C0 (g_dComIfG_gameInfo)
//	80BF6CF4: 804061C0 (g_dComIfG_gameInfo)
//	80BF6CFC: 80BF6DEC (stringBase0)
//	80BF6D00: 80BF6DEC (stringBase0)
//	80BF6D04: 80368994 (strcmp)
//	80BF6D40: 80450768 (calc_mtx)
//	80BF6D44: 80450768 (calc_mtx)
//	80BF6D50: 8000C3DC (mDoMtx_YrotS__FPA4_fs)
//	80BF6D64: 80270EEC (MtxPosition__FP4cXyzP4cXyz)
//	80BF6D74: 80347090 (PSVECAdd)
//	80BF6D90: 80BF63F8 (daObj_Gb_Execute__FP12obj_gb_class)
//	80BF6D9C: 80362218 (_restgpr_25)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_Gb_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gb/d_a_obj_gb/daObj_Gb_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BF6DB0-80BF6DB4 0004+00 s=1 e=0 z=0  None .text      __ct__4cXyzFv */
cXyz::cXyz() {
    /* empty function */
}
