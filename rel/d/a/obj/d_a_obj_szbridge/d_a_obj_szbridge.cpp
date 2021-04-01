//
// Generated By: dol2asm
// Translation Unit: d_a_obj_szbridge
//

#include "rel/d/a/obj/d_a_obj_szbridge/d_a_obj_szbridge.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct fopAc_ac_c {
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daObjSZbridge_c {
    /* 80D04360 */ void rideActor(fopAc_ac_c*);
    /* 80D04424 */ void create1st();
    /* 80D044B8 */ void setMtx();
    /* 80D04528 */ void CreateHeap();
    /* 80D04598 */ void chkBg();
    /* 80D048C4 */ void Create();
    /* 80D04974 */ void Execute(f32 (**)[3][4]);
    /* 80D049E4 */ void Draw();
    /* 80D04A88 */ void Delete();
    /* 80D04B90 */ ~daObjSZbridge_c();
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

struct dBgW {};

struct dBgS_WtrChk {
    /* 80079164 */ dBgS_WtrChk();
    /* 80D047D4 */ ~dBgS_WtrChk();
};

struct dBgS_SplGrpChk {
    /* 80078B90 */ void Set(cXyz&, f32);
    /* 80078C78 */ ~dBgS_SplGrpChk();
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjGndChk {
    /* 80D0484C */ ~dBgS_ObjGndChk();
};

struct cBgS_PolyInfo {};

struct csXyz {};

struct dBgS_MoveBgActor {
    /* 80078624 */ dBgS_MoveBgActor();
    /* 800786B0 */ bool IsDelete();
    /* 800786B8 */ bool ToFore();
    /* 800786C0 */ bool ToBack();
    /* 800787BC */ void MoveBGCreate(char const*, int,
                                     void (*)(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*,
                                              csXyz*, csXyz*),
                                     u32, f32 (*)[3][4]);
    /* 800788DC */ void MoveBGDelete();
    /* 80078950 */ void MoveBGExecute();
};

struct dBgS_GndChk {
    /* 8007757C */ dBgS_GndChk();
    /* 800775F0 */ ~dBgS_GndChk();
};

struct dBgS {
    /* 80075564 */ void SplGrpChk(dBgS_SplGrpChk*);
};

struct cBgS_GndChk {
    /* 80267D28 */ void SetPos(cXyz const*);
};

struct cBgS {
    /* 800744A0 */ void GroundCross(cBgS_GndChk*);
};

struct J3DModel {};

//
// Forward References:
//

static void rideCallback(dBgW*, fopAc_ac_c*, fopAc_ac_c*);
static void daObjSZbridge_create1st(daObjSZbridge_c*);
static void daObjSZbridge_MoveBGDelete(daObjSZbridge_c*);
static void daObjSZbridge_MoveBGExecute(daObjSZbridge_c*);
static void daObjSZbridge_MoveBGDraw(daObjSZbridge_c*);

extern "C" static void rideCallback__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" void rideActor__15daObjSZbridge_cFP10fopAc_ac_c();
extern "C" void create1st__15daObjSZbridge_cFv();
extern "C" void setMtx__15daObjSZbridge_cFv();
extern "C" void CreateHeap__15daObjSZbridge_cFv();
extern "C" void chkBg__15daObjSZbridge_cFv();
extern "C" void __dt__11dBgS_WtrChkFv();
extern "C" void __dt__14dBgS_ObjGndChkFv();
extern "C" void Create__15daObjSZbridge_cFv();
extern "C" void Execute__15daObjSZbridge_cFPPA3_A4_f();
extern "C" void Draw__15daObjSZbridge_cFv();
extern "C" void Delete__15daObjSZbridge_cFv();
extern "C" static void daObjSZbridge_create1st__FP15daObjSZbridge_c();
extern "C" static void daObjSZbridge_MoveBGDelete__FP15daObjSZbridge_c();
extern "C" static void daObjSZbridge_MoveBGExecute__FP15daObjSZbridge_c();
extern "C" static void daObjSZbridge_MoveBGDraw__FP15daObjSZbridge_c();
extern "C" void __dt__15daObjSZbridge_cFv();
extern "C" static void func_80D04C00();
extern "C" static void func_80D04C08();
extern "C" static void func_80D04C10();
extern "C" static void func_80D04C18();
extern "C" static void func_80D04C20();
extern "C" static void func_80D04C28();
extern "C" extern u32 const lit_3642;
extern "C" extern u32 const lit_3643;
extern "C" extern u32 const lit_3644;
extern "C" extern u32 const lit_3645;
extern "C" extern u32 const lit_3646;
extern "C" extern u32 const lit_3715;
extern "C" extern u32 const lit_3716;
extern "C" extern u32 const lit_3717;
extern "C" extern u32 const lit_3718;
extern "C" extern u32 const lit_3719;
extern "C" extern u32 const lit_3720;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_SZbridge[12];
extern "C" extern void* __vt__11dBgS_WtrChk[12];
extern "C" extern void* __vt__14dBgS_ObjGndChk[12];
extern "C" extern void* __vt__15daObjSZbridge_c[11];

//
// External References:
//

void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void fopAcM_effHamonSet(u32*, cXyz const*, f32, f32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dBgS_MoveBGProc_Typical(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void cM_rndF(f32);
void operator delete(void*);

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_effHamonSet__FPUlPC4cXyzff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void SplGrpChk__4dBgSFP14dBgS_SplGrpChk();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void Set__14dBgS_SplGrpChkFR4cXyzf();
extern "C" void __dt__14dBgS_SplGrpChkFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__11dBgS_WtrChkFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cM_rndF__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSVECSquareMag();
extern "C" void _savegpr_26();
extern "C" void _restgpr_26();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__16dBgS_MoveBgActor[10];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern f32 G_CM3D_F_ABS_MIN[1 + 1 /* padding */];

//
// Declarations:
//

/* 80D04338-80D04360 0028+00 s=1 e=0 z=0  None .text
 * rideCallback__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c              */
//	80D0434C: 80D04360 (rideActor__15daObjSZbridge_cFP10fopAc_ac_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void rideCallback(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_szbridge/d_a_obj_szbridge/rideCallback__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D04C38-80D04C50 0018+00 s=3 e=0 z=0  None .rodata    l_cull_box */
SECTION_RODATA static u8 const l_cull_box[24] = {
    0xC3, 0x9B, 0x00, 0x00, 0xC1, 0xF0, 0x00, 0x00, 0xC4, 0x3E, 0x00, 0x00,
    0x43, 0x9B, 0x00, 0x00, 0x43, 0xB4, 0x00, 0x00, 0x44, 0x3E, 0x00, 0x00,
};

/* 80D04360-80D04424 00C4+00 s=1 e=0 z=0  None .text      rideActor__15daObjSZbridge_cFP10fopAc_ac_c
 */
//	80D04378: 80D04C38 (l_cull_box)
//	80D0437C: 80D04C38 (l_cull_box)
//	80D043A4: 80347138 (PSVECSquareMag)
//	80D043B0: 80451180 (G_CM3D_F_ABS_MIN)
//	80D043B4: 80451180 (G_CM3D_F_ABS_MIN)
//	80D043C4: 80267954 (cM_rndF__Ff)
//	80D043F0: 8001D10C (fopAcM_effHamonSet__FPUlPC4cXyzff)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSZbridge_c::rideActor(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_szbridge/d_a_obj_szbridge/rideActor__15daObjSZbridge_cFP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D04C50-80D04C54 0004+00 s=0 e=0 z=0  None .rodata    @3642 */
SECTION_RODATA u32 const lit_3642 = 0x3F800000;

/* 80D04C54-80D04C58 0004+00 s=0 e=0 z=0  None .rodata    @3643 */
SECTION_RODATA u32 const lit_3643 = 0x3E99999A;

/* 80D04C58-80D04C5C 0004+00 s=0 e=0 z=0  None .rodata    @3644 */
SECTION_RODATA u32 const lit_3644 = 0x40E00000;

/* 80D04C5C-80D04C60 0004+00 s=0 e=0 z=0  None .rodata    @3645 */
SECTION_RODATA u32 const lit_3645 = 0x3D23D70A;

/* 80D04C60-80D04C64 0004+00 s=0 e=0 z=0  None .rodata    @3646 */
SECTION_RODATA u32 const lit_3646 = 0x3E800000;

/* 80D04C64-80D04C68 0004+00 s=0 e=0 z=0  None .rodata    @3715 */
SECTION_RODATA u32 const lit_3715 = 0x442F0000;

/* 80D04C68-80D04C6C 0004+00 s=0 e=0 z=0  None .rodata    @3716 */
SECTION_RODATA u32 const lit_3716 = 0xCE6E6B28;

/* 80D04C6C-80D04C70 0004+00 s=0 e=0 z=0  None .rodata    @3717 */
SECTION_RODATA u32 const lit_3717 = 0x3D4CCCCD;

/* 80D04C70-80D04C74 0004+00 s=0 e=0 z=0  None .rodata    @3718 */
SECTION_RODATA u32 const lit_3718 = 0x428C0000;

/* 80D04C74-80D04C78 0004+00 s=0 e=0 z=0  None .rodata    @3719 */
SECTION_RODATA u32 const lit_3719 = 0x3F7C28F6;

/* 80D04C78-80D04C7C 0004+00 s=0 e=0 z=0  None .rodata    @3720 */
SECTION_RODATA u32 const lit_3720 = 0x40A00000;

/* 80D04C7C-80D04C80 0004+00 s=1 e=0 z=0  None .rodata    @3739 */
SECTION_RODATA static u8 const lit_3739[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80D04C80-80D04C8A 000A+00 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80D04C80 = "S_Zbridge";
#pragma pop

/* 80D04C8C-80D04C90 0004+00 s=3 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80D04424-80D044B8 0094+00 s=1 e=0 z=0  None .text      create1st__15daObjSZbridge_cFv */
//	80D04440: 80D04C8C (l_arcName)
//	80D04444: 80D04C8C (l_arcName)
//	80D0444C: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80D04460: 80D044B8 (setMtx__15daObjSZbridge_cFv)
//	80D04468: 80D04C8C (l_arcName)
//	80D0446C: 80D04C8C (l_arcName)
//	80D04478: 80075A24 (dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80D0447C: 80075A24 (dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80D0448C: 800787BC
//(MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSZbridge_c::create1st() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_szbridge/d_a_obj_szbridge/create1st__15daObjSZbridge_cFv.s"
}
#pragma pop

/* 80D044B8-80D04528 0070+00 s=2 e=0 z=0  None .text      setMtx__15daObjSZbridge_cFv */
//	80D044CC: 803DD470 (now__14mDoMtx_stack_c)
//	80D044D0: 803DD470 (now__14mDoMtx_stack_c)
//	80D044E0: 803468E8 (PSMTXTrans)
//	80D044E4: 803DD470 (now__14mDoMtx_stack_c)
//	80D044E8: 803DD470 (now__14mDoMtx_stack_c)
//	80D044F0: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80D044F4: 803DD470 (now__14mDoMtx_stack_c)
//	80D044F8: 803DD470 (now__14mDoMtx_stack_c)
//	80D04500: 803464B0 (PSMTXCopy)
//	80D04504: 803DD470 (now__14mDoMtx_stack_c)
//	80D04508: 803DD470 (now__14mDoMtx_stack_c)
//	80D04510: 803464B0 (PSMTXCopy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSZbridge_c::setMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_szbridge/d_a_obj_szbridge/setMtx__15daObjSZbridge_cFv.s"
}
#pragma pop

/* 80D04528-80D04598 0070+00 s=1 e=0 z=0  None .text      CreateHeap__15daObjSZbridge_cFv */
//	80D0453C: 80D04C8C (l_arcName)
//	80D04540: 80D04C8C (l_arcName)
//	80D0454C: 804061C0 (g_dComIfG_gameInfo)
//	80D04550: 804061C0 (g_dComIfG_gameInfo)
//	80D04560: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80D04570: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSZbridge_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_szbridge/d_a_obj_szbridge/CreateHeap__15daObjSZbridge_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D04C90-80D04CB0 0020+00 s=1 e=0 z=0  None .data      daObjSZbridge_METHODS */
SECTION_DATA static void* daObjSZbridge_METHODS[8] = {
    (void*)daObjSZbridge_create1st__FP15daObjSZbridge_c,
    (void*)daObjSZbridge_MoveBGDelete__FP15daObjSZbridge_c,
    (void*)daObjSZbridge_MoveBGExecute__FP15daObjSZbridge_c,
    (void*)NULL,
    (void*)daObjSZbridge_MoveBGDraw__FP15daObjSZbridge_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D04CB0-80D04CE0 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_SZbridge */
SECTION_DATA void* g_profile_Obj_SZbridge[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00D90000, (void*)&g_fpcLf_Method,
    (void*)0x00000624, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02A40000, (void*)&daObjSZbridge_METHODS,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80D04CE0-80D04D10 0030+00 s=2 e=0 z=0  None .data      __vt__11dBgS_WtrChk */
SECTION_DATA void* __vt__11dBgS_WtrChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__11dBgS_WtrChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80D04C18,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80D04C28,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80D04C20,
};

/* 80D04D10-80D04D40 0030+00 s=2 e=0 z=0  None .data      __vt__14dBgS_ObjGndChk */
SECTION_DATA void* __vt__14dBgS_ObjGndChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14dBgS_ObjGndChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80D04C00,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80D04C10,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80D04C08,
};

/* 80D04598-80D047D4 023C+00 s=2 e=0 z=0  None .text      chkBg__15daObjSZbridge_cFv */
//	80D045B0: 803621D0 (_savegpr_26)
//	80D045B8: 80D04C38 (l_cull_box)
//	80D045BC: 80D04C38 (l_cull_box)
//	80D045C8: 8007757C (__ct__11dBgS_GndChkFv)
//	80D045CC: 80D04D10 (__vt__14dBgS_ObjGndChk)
//	80D045D0: 80D04D10 (__vt__14dBgS_ObjGndChk)
//	80D045F4: 80078E68 (SetObj__16dBgS_PolyPassChkFv)
//	80D04624: 80267D28 (SetPos__11cBgS_GndChkFPC4cXyz)
//	80D04630: 804061C0 (g_dComIfG_gameInfo)
//	80D04634: 804061C0 (g_dComIfG_gameInfo)
//	80D04644: 800744A0 (GroundCross__4cBgSFP11cBgS_GndChk)
//	80D04664: 80079164 (__ct__11dBgS_WtrChkFv)
//	80D04674: 80078B90 (Set__14dBgS_SplGrpChkFR4cXyzf)
//	80D04680: 80075564 (SplGrpChk__4dBgSFP14dBgS_SplGrpChk)
//	80D04760: 80D04CE0 (__vt__11dBgS_WtrChk)
//	80D04764: 80D04CE0 (__vt__11dBgS_WtrChk)
//	80D0478C: 80078C78 (__dt__14dBgS_SplGrpChkFv)
//	80D04790: 80D04D10 (__vt__14dBgS_ObjGndChk)
//	80D04794: 80D04D10 (__vt__14dBgS_ObjGndChk)
//	80D047B0: 800775F0 (__dt__11dBgS_GndChkFv)
//	80D047C0: 8036221C (_restgpr_26)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSZbridge_c::chkBg() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_szbridge/d_a_obj_szbridge/chkBg__15daObjSZbridge_cFv.s"
}
#pragma pop

/* 80D047D4-80D0484C 0078+00 s=4 e=0 z=0  None .text      __dt__11dBgS_WtrChkFv */
//	80D047F4: 80D04CE0 (__vt__11dBgS_WtrChk)
//	80D047F8: 80D04CE0 (__vt__11dBgS_WtrChk)
//	80D0481C: 80078C78 (__dt__14dBgS_SplGrpChkFv)
//	80D0482C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_WtrChk::~dBgS_WtrChk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_szbridge/d_a_obj_szbridge/__dt__11dBgS_WtrChkFv.s"
}
#pragma pop

/* 80D0484C-80D048C4 0078+00 s=4 e=0 z=0  None .text      __dt__14dBgS_ObjGndChkFv */
//	80D0486C: 80D04D10 (__vt__14dBgS_ObjGndChk)
//	80D04870: 80D04D10 (__vt__14dBgS_ObjGndChk)
//	80D04894: 800775F0 (__dt__11dBgS_GndChkFv)
//	80D048A4: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjGndChk::~dBgS_ObjGndChk() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_szbridge/d_a_obj_szbridge/__dt__14dBgS_ObjGndChkFv.s"
}
#pragma pop

/* 80D048C4-80D04974 00B0+00 s=1 e=0 z=0  None .text      Create__15daObjSZbridge_cFv */
//	80D048D8: 80D04338 (rideCallback__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c)
//	80D048DC: 80D04338 (rideCallback__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c)
//	80D048E8: 80D04598 (chkBg__15daObjSZbridge_cFv)
//	80D048EC: 80D04C7C (lit_3739)
//	80D048F0: 80D04C7C (lit_3739)
//	80D04904: 803464B0 (PSMTXCopy)
//	80D04914: 80D04C38 (l_cull_box)
//	80D04918: 80D04C38 (l_cull_box)
//	80D04930: 8001A548 (fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSZbridge_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_szbridge/d_a_obj_szbridge/Create__15daObjSZbridge_cFv.s"
}
#pragma pop

/* 80D04974-80D049E4 0070+00 s=1 e=0 z=0  None .text      Execute__15daObjSZbridge_cFPPA3_A4_f */
//	80D04990: 80D04598 (chkBg__15daObjSZbridge_cFv)
//	80D049AC: 80D044B8 (setMtx__15daObjSZbridge_cFv)
//	80D049BC: 803464B0 (PSMTXCopy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSZbridge_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_szbridge/d_a_obj_szbridge/Execute__15daObjSZbridge_cFPPA3_A4_f.s"
}
#pragma pop

/* 80D049E4-80D04A88 00A4+00 s=1 e=0 z=0  None .text      Draw__15daObjSZbridge_cFv */
//	80D049FC: 8042CA54 (g_env_light)
//	80D04A00: 8042CA54 (g_env_light)
//	80D04A10: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80D04A14: 8042CA54 (g_env_light)
//	80D04A18: 8042CA54 (g_env_light)
//	80D04A28: 801A4DA0
//(setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c) 	80D04A2C:
// 804061C0 (g_dComIfG_gameInfo) 	80D04A30: 804061C0 (g_dComIfG_gameInfo) 	80D04A38: 80434AC8
// (j3dSys) 	80D04A3C: 80434AC8 (j3dSys) 	80D04A50: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	80D04A54: 804061C0 (g_dComIfG_gameInfo)
//	80D04A58: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSZbridge_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_szbridge/d_a_obj_szbridge/Draw__15daObjSZbridge_cFv.s"
}
#pragma pop

/* 80D04A88-80D04AC4 003C+00 s=1 e=0 z=0  None .text      Delete__15daObjSZbridge_cFv */
//	80D04AA0: 80D04C8C (l_arcName)
//	80D04AA4: 80D04C8C (l_arcName)
//	80D04AAC: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSZbridge_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_szbridge/d_a_obj_szbridge/Delete__15daObjSZbridge_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D04D40-80D04D6C 002C+00 s=2 e=0 z=0  None .data      __vt__15daObjSZbridge_c */
SECTION_DATA void* __vt__15daObjSZbridge_c[11] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__15daObjSZbridge_cFv,
    (void*)Create__15daObjSZbridge_cFv,
    (void*)Execute__15daObjSZbridge_cFPPA3_A4_f,
    (void*)Draw__15daObjSZbridge_cFv,
    (void*)Delete__15daObjSZbridge_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
    (void*)__dt__15daObjSZbridge_cFv,
};

/* 80D04AC4-80D04B24 0060+00 s=1 e=0 z=0  None .text daObjSZbridge_create1st__FP15daObjSZbridge_c
 */
//	80D04AEC: 80078624 (__ct__16dBgS_MoveBgActorFv)
//	80D04AF0: 80D04D40 (__vt__15daObjSZbridge_c)
//	80D04AF4: 80D04D40 (__vt__15daObjSZbridge_c)
//	80D04B0C: 80D04424 (create1st__15daObjSZbridge_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjSZbridge_create1st(daObjSZbridge_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_szbridge/d_a_obj_szbridge/daObjSZbridge_create1st__FP15daObjSZbridge_c.s"
}
#pragma pop

/* 80D04B24-80D04B44 0020+00 s=1 e=0 z=0  None .text
 * daObjSZbridge_MoveBGDelete__FP15daObjSZbridge_c              */
//	80D04B30: 800788DC (MoveBGDelete__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjSZbridge_MoveBGDelete(daObjSZbridge_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_szbridge/d_a_obj_szbridge/daObjSZbridge_MoveBGDelete__FP15daObjSZbridge_c.s"
}
#pragma pop

/* 80D04B44-80D04B64 0020+00 s=1 e=0 z=0  None .text
 * daObjSZbridge_MoveBGExecute__FP15daObjSZbridge_c             */
//	80D04B50: 80078950 (MoveBGExecute__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjSZbridge_MoveBGExecute(daObjSZbridge_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_szbridge/d_a_obj_szbridge/daObjSZbridge_MoveBGExecute__FP15daObjSZbridge_c.s"
}
#pragma pop

/* 80D04B64-80D04B90 002C+00 s=1 e=0 z=0  None .text daObjSZbridge_MoveBGDraw__FP15daObjSZbridge_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjSZbridge_MoveBGDraw(daObjSZbridge_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_szbridge/d_a_obj_szbridge/daObjSZbridge_MoveBGDraw__FP15daObjSZbridge_c.s"
}
#pragma pop

/* 80D04B90-80D04C00 0070+00 s=1 e=0 z=0  None .text      __dt__15daObjSZbridge_cFv */
//	80D04BB0: 80D04D40 (__vt__15daObjSZbridge_c)
//	80D04BB4: 80D04D40 (__vt__15daObjSZbridge_c)
//	80D04BC0: 803AB9A0 (__vt__16dBgS_MoveBgActor)
//	80D04BC4: 803AB9A0 (__vt__16dBgS_MoveBgActor)
//	80D04BD0: 80018C8C (__dt__10fopAc_ac_cFv)
//	80D04BE0: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjSZbridge_c::~daObjSZbridge_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_szbridge/d_a_obj_szbridge/__dt__15daObjSZbridge_cFv.s"
}
#pragma pop

/* 80D04C00-80D04C08 0008+00 s=1 e=0 z=0  None .text      @20@__dt__14dBgS_ObjGndChkFv */
//	80D04C04: 80D0484C (__dt__14dBgS_ObjGndChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80D04C00() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_szbridge/d_a_obj_szbridge/func_80D04C00.s"
}
#pragma pop

/* 80D04C08-80D04C10 0008+00 s=1 e=0 z=0  None .text      @76@__dt__14dBgS_ObjGndChkFv */
//	80D04C0C: 80D0484C (__dt__14dBgS_ObjGndChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80D04C08() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_szbridge/d_a_obj_szbridge/func_80D04C08.s"
}
#pragma pop

/* 80D04C10-80D04C18 0008+00 s=1 e=0 z=0  None .text      @60@__dt__14dBgS_ObjGndChkFv */
//	80D04C14: 80D0484C (__dt__14dBgS_ObjGndChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80D04C10() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_szbridge/d_a_obj_szbridge/func_80D04C10.s"
}
#pragma pop

/* 80D04C18-80D04C20 0008+00 s=1 e=0 z=0  None .text      @16@__dt__11dBgS_WtrChkFv */
//	80D04C1C: 80D047D4 (__dt__11dBgS_WtrChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80D04C18() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_szbridge/d_a_obj_szbridge/func_80D04C18.s"
}
#pragma pop

/* 80D04C20-80D04C28 0008+00 s=1 e=0 z=0  None .text      @52@__dt__11dBgS_WtrChkFv */
//	80D04C24: 80D047D4 (__dt__11dBgS_WtrChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80D04C20() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_szbridge/d_a_obj_szbridge/func_80D04C20.s"
}
#pragma pop

/* 80D04C28-80D04C30 0008+00 s=1 e=0 z=0  None .text      @36@__dt__11dBgS_WtrChkFv */
//	80D04C2C: 80D047D4 (__dt__11dBgS_WtrChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80D04C28() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_szbridge/d_a_obj_szbridge/func_80D04C28.s"
}
#pragma pop
