//
// Generated By: dol2asm
// Translation Unit: d_a_obj_fallobj
//

#include "rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct cXyz {};

struct csXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
};

struct fopAc_ac_c {};

struct daObjFallObj_c {
    /* 80BE39B8 */ void initBaseMtx();
    /* 80BE3A24 */ void setBaseMtx();
    /* 80BE3A88 */ void Create();
    /* 80BE3BA8 */ void getFallTime();
    /* 80BE3BD4 */ void getFallHeight();
    /* 80BE3C28 */ void CreateHeap();
    /* 80BE3C98 */ void create1st();
    /* 80BE3D24 */ void Execute(f32 (**)[3][4]);
    /* 80BE4138 */ void action();
    /* 80BE4228 */ void action_wait(bool);
    /* 80BE42C0 */ void action_fallStart();
    /* 80BE43E4 */ void action_countdown();
    /* 80BE45F4 */ void action_fall();
    /* 80BE466C */ void action_end();
    /* 80BE4670 */ void action_follow_fall();
    /* 80BE4700 */ void checkHang();
    /* 80BE47A0 */ void checkHang2();
    /* 80BE48A4 */ void Draw();
    /* 80BE4948 */ void Delete();
};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
    /* 8006FB10 */ void StartQuake(int, int, cXyz);
    /* 8006FD94 */ void StopQuake(int);
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

struct dBgW {};

struct cBgS_PolyInfo {};

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

struct dBgS_LinChk {
    /* 80077C68 */ dBgS_LinChk();
    /* 80077CDC */ ~dBgS_LinChk();
    /* 80077D64 */ void Set(cXyz const*, cXyz const*, fopAc_ac_c const*);
};

struct cBgS_LinChk {};

struct cBgS {
    /* 800743B4 */ void LineCross(cBgS_LinChk*);
};

struct Z2SoundObjSimple {
    /* 802BE844 */ Z2SoundObjSimple();
};

struct Z2SoundObjBase {
    /* 802BDFF8 */ void deleteObject();
};

struct J3DModel {};

//
// Forward References:
//

static void daObjFallObj_create1st(daObjFallObj_c*);
static void daObjFallObj_MoveBGDelete(daObjFallObj_c*);
static void daObjFallObj_MoveBGExecute(daObjFallObj_c*);
static void daObjFallObj_MoveBGDraw(daObjFallObj_c*);
void cLib_calcTimer__template0(s16*);
void cLib_calcTimer__template1(u8*);

extern "C" void initBaseMtx__14daObjFallObj_cFv();
extern "C" void setBaseMtx__14daObjFallObj_cFv();
extern "C" void Create__14daObjFallObj_cFv();
extern "C" void getFallTime__14daObjFallObj_cFv();
extern "C" void getFallHeight__14daObjFallObj_cFv();
extern "C" void CreateHeap__14daObjFallObj_cFv();
extern "C" void create1st__14daObjFallObj_cFv();
extern "C" void Execute__14daObjFallObj_cFPPA3_A4_f();
extern "C" void action__14daObjFallObj_cFv();
extern "C" void action_wait__14daObjFallObj_cFb();
extern "C" void action_fallStart__14daObjFallObj_cFv();
extern "C" void action_countdown__14daObjFallObj_cFv();
extern "C" void action_fall__14daObjFallObj_cFv();
extern "C" void action_end__14daObjFallObj_cFv();
extern "C" void action_follow_fall__14daObjFallObj_cFv();
extern "C" void checkHang__14daObjFallObj_cFv();
extern "C" void checkHang2__14daObjFallObj_cFv();
extern "C" void Draw__14daObjFallObj_cFv();
extern "C" void Delete__14daObjFallObj_cFv();
extern "C" static void daObjFallObj_create1st__FP14daObjFallObj_c();
extern "C" static void daObjFallObj_MoveBGDelete__FP14daObjFallObj_c();
extern "C" static void daObjFallObj_MoveBGExecute__FP14daObjFallObj_c();
extern "C" static void daObjFallObj_MoveBGDraw__FP14daObjFallObj_c();
extern "C" void func_80BE4A70();
extern "C" void func_80BE4A8C();
extern "C" extern u32 const lit_3678;
extern "C" extern u32 const lit_3679;
extern "C" extern u32 const lit_3705;
extern "C" extern u32 const lit_3706;
extern "C" extern u8 const lit_3709[8];
extern "C" extern u32 const lit_3818;
extern "C" extern u32 const lit_3819;
extern "C" extern u8 const lit_3820[8];
extern "C" extern u8 const lit_3821[8];
extern "C" extern u8 const lit_3822[8];
extern "C" extern u32 const lit_3823;
extern "C" extern u32 const lit_3882;
extern "C" extern u32 const lit_3883[1 + 1 /* padding */];
extern "C" extern u32 const lit_3990;
extern "C" extern u32 const lit_3991;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_FallObj[12];
extern "C" extern void* __vt__14daObjFallObj_c[10];

//
// External References:
//

void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcIt_Judge(void* (*)(void*, void*), void*);
void fopAcM_delete(fopAc_ac_c*);
void fopAcM_createChildFromOffset(s16, unsigned int, u32, cXyz const*, int, csXyz const*,
                                  cXyz const*, s8, int (*)(void*));
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void fopAcM_searchActorDistanceXZ(fopAc_ac_c const*, fopAc_ac_c const*);
void fpcSch_JudgeByID(void*, void*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dBgS_MoveBGProc_Typical(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void cLib_chaseS(s16*, s16, s16);

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_createChildFromOffset__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void StartQuake__12dVibration_cFii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cLib_chaseS__FPsss();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXMultVec();
extern "C" void PSVECSquareDistance();
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
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u32 __float_nan;

//
// Declarations:
//

/* 80BE39B8-80BE3A24 006C+00 s=1 e=0 z=0  None .text      initBaseMtx__14daObjFallObj_cFv */
//	80BE39D0: 8000CD64 (transS__14mDoMtx_stack_cFRC4cXyz)
//	80BE39D8: 8000CF44 (ZXYrotM__14mDoMtx_stack_cFRC5csXyz)
//	80BE39DC: 803DD470 (now__14mDoMtx_stack_c)
//	80BE39E0: 803DD470 (now__14mDoMtx_stack_c)
//	80BE39E8: 803464B0 (PSMTXCopy)
//	80BE3A0C: 80BE3A24 (setBaseMtx__14daObjFallObj_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFallObj_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj/initBaseMtx__14daObjFallObj_cFv.s"
}
#pragma pop

/* 80BE3A24-80BE3A88 0064+00 s=2 e=0 z=0  None .text      setBaseMtx__14daObjFallObj_cFv */
//	80BE3A3C: 8000CD64 (transS__14mDoMtx_stack_cFRC4cXyz)
//	80BE3A40: 803DD470 (now__14mDoMtx_stack_c)
//	80BE3A44: 803DD470 (now__14mDoMtx_stack_c)
//	80BE3A4C: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80BE3A50: 803DD470 (now__14mDoMtx_stack_c)
//	80BE3A54: 803DD470 (now__14mDoMtx_stack_c)
//	80BE3A60: 803464B0 (PSMTXCopy)
//	80BE3A64: 803DD470 (now__14mDoMtx_stack_c)
//	80BE3A68: 803DD470 (now__14mDoMtx_stack_c)
//	80BE3A70: 803464B0 (PSMTXCopy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFallObj_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj/setBaseMtx__14daObjFallObj_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BE4AB0-80BE4AB4 0004+00 s=7 e=0 z=0  None .rodata    @3677 */
SECTION_RODATA static u8 const lit_3677[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80BE4AB4-80BE4AB8 0004+00 s=0 e=0 z=0  None .rodata    @3678 */
SECTION_RODATA u32 const lit_3678 = 0xC3960000;

/* 80BE4AB8-80BE4ABC 0004+00 s=0 e=0 z=0  None .rodata    @3679 */
SECTION_RODATA u32 const lit_3679 = 0xC0C00000;

/* 80BE4ABC-80BE4AC0 0004+00 s=0 e=0 z=0  None .rodata    @3705 */
SECTION_RODATA u32 const lit_3705 = 0x43E10000;

/* 80BE4AC0-80BE4AC4 0004+00 s=0 e=0 z=0  None .rodata    @3706 */
SECTION_RODATA u32 const lit_3706 = 0x43960000;

/* 80BE4AC4-80BE4AC8 0004+00 s=1 e=0 z=0  None .rodata    @3707 */
SECTION_RODATA static u32 const lit_3707 = 0x42480000;

/* 80BE4AC8-80BE4AD0 0008+00 s=0 e=0 z=0  None .rodata    @3709 */
SECTION_RODATA u8 const lit_3709[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BE4AD0-80BE4AD4 0004+00 s=0 e=0 z=0  None .rodata    @3818 */
SECTION_RODATA u32 const lit_3818 = 0x43160000;

/* 80BE4AD4-80BE4AD8 0004+00 s=0 e=0 z=0  None .rodata    @3819 */
SECTION_RODATA u32 const lit_3819 = 0x43200000;

/* 80BE4AD8-80BE4AE0 0008+00 s=0 e=0 z=0  None .rodata    @3820 */
SECTION_RODATA u8 const lit_3820[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BE4AE0-80BE4AE8 0008+00 s=0 e=0 z=0  None .rodata    @3821 */
SECTION_RODATA u8 const lit_3821[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BE4AE8-80BE4AF0 0008+00 s=0 e=0 z=0  None .rodata    @3822 */
SECTION_RODATA u8 const lit_3822[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BE4AF0-80BE4AF4 0004+00 s=0 e=0 z=0  None .rodata    @3823 */
SECTION_RODATA u32 const lit_3823 = 0x45066000;

/* 80BE4AF4-80BE4AF8 0004+00 s=0 e=0 z=0  None .rodata    @3882 */
SECTION_RODATA u32 const lit_3882 = 0xC1C80000;

/* 80BE4AF8-80BE4B00 0004+04 s=0 e=0 z=0  None .rodata    @3883 */
SECTION_RODATA u32 const lit_3883[1 + 1 /* padding */] = {
    0x3F800000,
    /* padding */
    0x00000000,
};

/* 80BE4B00-80BE4B08 0008+00 s=1 e=0 z=0  None .rodata    @3930 */
SECTION_RODATA static u8 const lit_3930[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80BE4B08-80BE4B0C 0004+00 s=2 e=0 z=0  None .rodata    @3949 */
SECTION_RODATA static u32 const lit_3949 = 0x461C4000;

/* 80BE4B0C-80BE4B10 0004+00 s=0 e=0 z=0  None .rodata    @3990 */
SECTION_RODATA u32 const lit_3990 = 0x437A0000;

/* 80BE4B10-80BE4B14 0004+00 s=0 e=0 z=0  None .rodata    @3991 */
SECTION_RODATA u32 const lit_3991 = 0x42C80000;

/* 80BE4B14-80BE4B1E 000A+00 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80BE4B14 = "K_drock00";
#pragma pop

/* 80BE4B20-80BE4B24 0004+00 s=3 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80BE4B24-80BE4B3C 0018+00 s=1 e=0 z=0  None .data      l_cull_box */
SECTION_DATA static u8 l_cull_box[24] = {
    0xC3, 0x48, 0x00, 0x00, 0xC6, 0x1C, 0x40, 0x00, 0xC3, 0x48, 0x00, 0x00,
    0x43, 0x48, 0x00, 0x00, 0x44, 0x16, 0x00, 0x00, 0x43, 0x48, 0x00, 0x00,
};

/* 80BE3A88-80BE3BA8 0120+00 s=1 e=0 z=0  None .text      Create__14daObjFallObj_cFv */
//	80BE3AA0: 80BE4AB0 (lit_3677)
//	80BE3AA4: 80BE4AB0 (lit_3677)
//	80BE3B14: 80019F78 (fopAcM_createChildFromOffset__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i)
//	80BE3B2C: 80BE3BA8 (getFallTime__14daObjFallObj_cFv)
//	80BE3B38: 80BE39B8 (initBaseMtx__14daObjFallObj_cFv)
//	80BE3B48: 80BE4B24 (l_cull_box)
//	80BE3B4C: 80BE4B24 (l_cull_box)
//	80BE3B64: 8001A548 (fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFallObj_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj/Create__14daObjFallObj_cFv.s"
}
#pragma pop

/* 80BE3BA8-80BE3BD4 002C+00 s=2 e=0 z=0  None .text      getFallTime__14daObjFallObj_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFallObj_c::getFallTime() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj/getFallTime__14daObjFallObj_cFv.s"
}
#pragma pop

/* 80BE3BD4-80BE3C28 0054+00 s=1 e=0 z=0  None .text      getFallHeight__14daObjFallObj_cFv */
//	80BE3BD8: 80BE4AB0 (lit_3677)
//	80BE3BDC: 80BE4AB0 (lit_3677)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFallObj_c::getFallHeight() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj/getFallHeight__14daObjFallObj_cFv.s"
}
#pragma pop

/* 80BE3C28-80BE3C98 0070+00 s=1 e=0 z=0  None .text      CreateHeap__14daObjFallObj_cFv */
//	80BE3C3C: 80BE4B20 (l_arcName)
//	80BE3C40: 80BE4B20 (l_arcName)
//	80BE3C4C: 804061C0 (g_dComIfG_gameInfo)
//	80BE3C50: 804061C0 (g_dComIfG_gameInfo)
//	80BE3C60: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80BE3C70: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFallObj_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj/CreateHeap__14daObjFallObj_cFv.s"
}
#pragma pop

/* 80BE3C98-80BE3D24 008C+00 s=1 e=0 z=0  None .text      create1st__14daObjFallObj_cFv */
//	80BE3CB8: 80BE4B20 (l_arcName)
//	80BE3CBC: 80BE4B20 (l_arcName)
//	80BE3CC4: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80BE3CD8: 80BE4B20 (l_arcName)
//	80BE3CDC: 80BE4B20 (l_arcName)
//	80BE3CE8: 80075A24 (dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80BE3CEC: 80075A24 (dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80BE3CF8: 800787BC
//(MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFallObj_c::create1st() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj/create1st__14daObjFallObj_cFv.s"
}
#pragma pop

/* 80BE3D24-80BE4138 0414+00 s=1 e=0 z=0  None .text      Execute__14daObjFallObj_cFPPA3_A4_f */
//	80BE3D4C: 803621D8 (_savegpr_28)
//	80BE3D58: 80BE4AB0 (lit_3677)
//	80BE3D5C: 80BE4AB0 (lit_3677)
//	80BE3D7C: 8000CD64 (transS__14mDoMtx_stack_cFRC4cXyz)
//	80BE3D84: 8000CF44 (ZXYrotM__14mDoMtx_stack_cFRC5csXyz)
//	80BE3D88: 803DD470 (now__14mDoMtx_stack_c)
//	80BE3D8C: 803DD470 (now__14mDoMtx_stack_c)
//	80BE3D98: 80346D6C (PSMTXMultVec)
//	80BE3DCC: 804061C0 (g_dComIfG_gameInfo)
//	80BE3DD0: 804061C0 (g_dComIfG_gameInfo)
//	80BE3E20: 8034739C (PSVECSquareDistance)
//	80BE3E90: 80450AE0 (__float_nan)
//	80BE3E94: 80450AE0 (__float_nan)
//	80BE3F00: 80450AE0 (__float_nan)
//	80BE3F04: 80450AE0 (__float_nan)
//	80BE3F18: 8034739C (PSVECSquareDistance)
//	80BE3F88: 80450AE0 (__float_nan)
//	80BE3F8C: 80450AE0 (__float_nan)
//	80BE3FF8: 80450AE0 (__float_nan)
//	80BE3FFC: 80450AE0 (__float_nan)
//	80BE400C: 80077C68 (__ct__11dBgS_LinChkFv)
//	80BE4020: 80077D64 (Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c)
//	80BE4028: 804061C0 (g_dComIfG_gameInfo)
//	80BE402C: 804061C0 (g_dComIfG_gameInfo)
//	80BE4038: 800743B4 (LineCross__4cBgSFP11cBgS_LinChk)
//	80BE4048: 80BE47A0 (checkHang2__14daObjFallObj_cFv)
//	80BE40BC: 80BE4138 (action__14daObjFallObj_cFv)
//	80BE40CC: 80BE3A24 (setBaseMtx__14daObjFallObj_cFv)
//	80BE40D8: 8002D06C (dComIfGp_getReverb__Fi)
//	80BE4100: 80077CDC (__dt__11dBgS_LinChkFv)
//	80BE4124: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFallObj_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj/Execute__14daObjFallObj_cFPPA3_A4_f.s"
}
#pragma pop

/* 80BE4138-80BE4228 00F0+00 s=1 e=0 z=0  None .text      action__14daObjFallObj_cFv */
//	80BE414C: 80BE4700 (checkHang__14daObjFallObj_cFv)
//	80BE4190: 80BE4228 (action_wait__14daObjFallObj_cFb)
//	80BE419C: 80BE43E4 (action_countdown__14daObjFallObj_cFv)
//	80BE41A8: 80BE45F4 (action_fall__14daObjFallObj_cFv)
//	80BE41B4: 80BE42C0 (action_fallStart__14daObjFallObj_cFv)
//	80BE41C0: 80BE466C (action_end__14daObjFallObj_cFv)
//	80BE41CC: 80BE4670 (action_follow_fall__14daObjFallObj_cFv)
//	80BE41E8: 804061C0 (g_dComIfG_gameInfo)
//	80BE41EC: 804061C0 (g_dComIfG_gameInfo)
//	80BE41F8: 8006FD94 (StopQuake__12dVibration_cFi)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFallObj_c::action() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj/action__14daObjFallObj_cFv.s"
}
#pragma pop

/* 80BE4228-80BE42C0 0098+00 s=1 e=0 z=0  None .text      action_wait__14daObjFallObj_cFb */
//	80BE4270: 80023590 (fpcSch_JudgeByID__FPvPv)
//	80BE4274: 80023590 (fpcSch_JudgeByID__FPvPv)
//	80BE427C: 800197F8 (fopAcIt_Judge__FPFPvPv_PvPv)
//	80BE4288: 80BE4AB0 (lit_3677)
//	80BE428C: 80BE4AB0 (lit_3677)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFallObj_c::action_wait(bool param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj/action_wait__14daObjFallObj_cFb.s"
}
#pragma pop

/* 80BE42C0-80BE43E4 0124+00 s=1 e=0 z=0  None .text      action_fallStart__14daObjFallObj_cFv */
//	80BE42D8: 80BE4AB0 (lit_3677)
//	80BE42DC: 80BE4AB0 (lit_3677)
//	80BE42E4: 80BE4A8C (func_80BE4A8C)
//	80BE4364: 804061C0 (g_dComIfG_gameInfo)
//	80BE4368: 804061C0 (g_dComIfG_gameInfo)
//	80BE437C: 8006FA24 (StartShock__12dVibration_cFii4cXyz)
//	80BE43A0: 804061C0 (g_dComIfG_gameInfo)
//	80BE43A4: 804061C0 (g_dComIfG_gameInfo)
//	80BE43B8: 8006FB10 (StartQuake__12dVibration_cFii4cXyz)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFallObj_c::action_fallStart() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj/action_fallStart__14daObjFallObj_cFv.s"
}
#pragma pop

/* 80BE43E4-80BE45F4 0210+00 s=1 e=0 z=0  None .text      action_countdown__14daObjFallObj_cFv */
//	80BE4404: 804061C0 (g_dComIfG_gameInfo)
//	80BE4408: 804061C0 (g_dComIfG_gameInfo)
//	80BE4410: 80BE3BA8 (getFallTime__14daObjFallObj_cFv)
//	80BE4418: 80BE4B00 (lit_3930)
//	80BE441C: 80BE4B00 (lit_3930)
//	80BE443C: 80BE3BD4 (getFallHeight__14daObjFallObj_cFv)
//	80BE4440: 80BE4AC4 (lit_3707)
//	80BE4444: 80BE4AC4 (lit_3707)
//	80BE4498: 80BE4A70 (func_80BE4A70)
//	80BE44B0: 80BE4AB0 (lit_3677)
//	80BE44B4: 80BE4AB0 (lit_3677)
//	80BE44C4: 80BE4AB0 (lit_3677)
//	80BE44C8: 80BE4AB0 (lit_3677)
//	80BE44F8: 802706D0 (cLib_chaseS__FPsss)
//	80BE44FC: 80439A20 (sincosTable___5JMath)
//	80BE4500: 80439A20 (sincosTable___5JMath)
//	80BE451C: 80BE4B00 (lit_3930)
//	80BE4520: 80BE4B00 (lit_3930)
//	80BE45A0: 80023590 (fpcSch_JudgeByID__FPvPv)
//	80BE45A4: 80023590 (fpcSch_JudgeByID__FPvPv)
//	80BE45AC: 800197F8 (fopAcIt_Judge__FPFPvPv_PvPv)
//	80BE45B8: 80BE4AB0 (lit_3677)
//	80BE45BC: 80BE4AB0 (lit_3677)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFallObj_c::action_countdown() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj/action_countdown__14daObjFallObj_cFv.s"
}
#pragma pop

/* 80BE45F4-80BE466C 0078+00 s=1 e=0 z=0  None .text      action_fall__14daObjFallObj_cFv */
//	80BE4648: 80BE4B08 (lit_3949)
//	80BE464C: 80BE4B08 (lit_3949)
//	80BE4658: 80019C7C (fopAcM_delete__FP10fopAc_ac_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFallObj_c::action_fall() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj/action_fall__14daObjFallObj_cFv.s"
}
#pragma pop

/* 80BE466C-80BE4670 0004+00 s=1 e=0 z=0  None .text      action_end__14daObjFallObj_cFv */
void daObjFallObj_c::action_end() {
    /* empty function */
}

/* 80BE4670-80BE4700 0090+00 s=1 e=0 z=0  None .text      action_follow_fall__14daObjFallObj_cFv */
//	80BE4698: 80023590 (fpcSch_JudgeByID__FPvPv)
//	80BE469C: 80023590 (fpcSch_JudgeByID__FPvPv)
//	80BE46A4: 800197F8 (fopAcIt_Judge__FPFPvPv_PvPv)
//	80BE46D4: 80BE4B08 (lit_3949)
//	80BE46D8: 80BE4B08 (lit_3949)
//	80BE46E8: 80019C7C (fopAcM_delete__FP10fopAc_ac_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFallObj_c::action_follow_fall() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj/action_follow_fall__14daObjFallObj_cFv.s"
}
#pragma pop

/* 80BE4700-80BE47A0 00A0+00 s=2 e=0 z=0  None .text      checkHang__14daObjFallObj_cFv */
//	80BE4710: 803621D8 (_savegpr_28)
//	80BE4718: 80BE4AB0 (lit_3677)
//	80BE471C: 80BE4AB0 (lit_3677)
//	80BE4724: 804061C0 (g_dComIfG_gameInfo)
//	80BE4728: 804061C0 (g_dComIfG_gameInfo)
//	80BE4740: 8001A964 (fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c)
//	80BE478C: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFallObj_c::checkHang() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj/checkHang__14daObjFallObj_cFv.s"
}
#pragma pop

/* 80BE47A0-80BE48A4 0104+00 s=1 e=0 z=0  None .text      checkHang2__14daObjFallObj_cFv */
//	80BE47B0: 803621DC (_savegpr_29)
//	80BE47F4: 80023590 (fpcSch_JudgeByID__FPvPv)
//	80BE47F8: 80023590 (fpcSch_JudgeByID__FPvPv)
//	80BE4808: 800197F8 (fopAcIt_Judge__FPFPvPv_PvPv)
//	80BE483C: 80023590 (fpcSch_JudgeByID__FPvPv)
//	80BE4840: 80023590 (fpcSch_JudgeByID__FPvPv)
//	80BE4850: 800197F8 (fopAcIt_Judge__FPFPvPv_PvPv)
//	80BE4864: 80BE4700 (checkHang__14daObjFallObj_cFv)
//	80BE4890: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFallObj_c::checkHang2() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj/checkHang2__14daObjFallObj_cFv.s"
}
#pragma pop

/* 80BE48A4-80BE4948 00A4+00 s=1 e=0 z=0  None .text      Draw__14daObjFallObj_cFv */
//	80BE48BC: 8042CA54 (g_env_light)
//	80BE48C0: 8042CA54 (g_env_light)
//	80BE48D0: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80BE48D4: 8042CA54 (g_env_light)
//	80BE48D8: 8042CA54 (g_env_light)
//	80BE48E8: 801A4DA0
//(setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c) 	80BE48EC:
// 804061C0 (g_dComIfG_gameInfo) 	80BE48F0: 804061C0 (g_dComIfG_gameInfo) 	80BE48F8: 80434AC8
// (j3dSys) 	80BE48FC: 80434AC8 (j3dSys) 	80BE4910: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	80BE4914: 804061C0 (g_dComIfG_gameInfo)
//	80BE4918: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFallObj_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj/Draw__14daObjFallObj_cFv.s"
}
#pragma pop

/* 80BE4948-80BE4990 0048+00 s=1 e=0 z=0  None .text      Delete__14daObjFallObj_cFv */
//	80BE4960: 802BDFF8 (deleteObject__14Z2SoundObjBaseFv)
//	80BE4968: 80BE4B20 (l_arcName)
//	80BE496C: 80BE4B20 (l_arcName)
//	80BE4974: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjFallObj_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj/Delete__14daObjFallObj_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BE4B3C-80BE4B5C 0020+00 s=1 e=0 z=0  None .data      daObjFallObj_METHODS */
SECTION_DATA static void* daObjFallObj_METHODS[8] = {
    (void*)daObjFallObj_create1st__FP14daObjFallObj_c,
    (void*)daObjFallObj_MoveBGDelete__FP14daObjFallObj_c,
    (void*)daObjFallObj_MoveBGExecute__FP14daObjFallObj_c,
    (void*)NULL,
    (void*)daObjFallObj_MoveBGDraw__FP14daObjFallObj_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BE4B5C-80BE4B8C 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_FallObj */
SECTION_DATA void* g_profile_Obj_FallObj[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00AA0000, (void*)&g_fpcLf_Method,
    (void*)0x00000614, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02280000, (void*)&daObjFallObj_METHODS,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80BE4B8C-80BE4BB4 0028+00 s=1 e=0 z=0  None .data      __vt__14daObjFallObj_c */
SECTION_DATA void* __vt__14daObjFallObj_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__14daObjFallObj_cFv,
    (void*)Create__14daObjFallObj_cFv,
    (void*)Execute__14daObjFallObj_cFPPA3_A4_f,
    (void*)Draw__14daObjFallObj_cFv,
    (void*)Delete__14daObjFallObj_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80BE4990-80BE4A04 0074+00 s=1 e=0 z=0  None .text      daObjFallObj_create1st__FP14daObjFallObj_c
 */
//	80BE49C0: 80078624 (__ct__16dBgS_MoveBgActorFv)
//	80BE49C4: 80BE4B8C (__vt__14daObjFallObj_c)
//	80BE49C8: 80BE4B8C (__vt__14daObjFallObj_c)
//	80BE49D4: 802BE844 (__ct__16Z2SoundObjSimpleFv)
//	80BE49E8: 80BE3C98 (create1st__14daObjFallObj_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjFallObj_create1st(daObjFallObj_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj/daObjFallObj_create1st__FP14daObjFallObj_c.s"
}
#pragma pop

/* 80BE4A04-80BE4A24 0020+00 s=1 e=0 z=0  None .text daObjFallObj_MoveBGDelete__FP14daObjFallObj_c
 */
//	80BE4A10: 800788DC (MoveBGDelete__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjFallObj_MoveBGDelete(daObjFallObj_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj/daObjFallObj_MoveBGDelete__FP14daObjFallObj_c.s"
}
#pragma pop

/* 80BE4A24-80BE4A44 0020+00 s=1 e=0 z=0  None .text
 * daObjFallObj_MoveBGExecute__FP14daObjFallObj_c               */
//	80BE4A30: 80078950 (MoveBGExecute__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjFallObj_MoveBGExecute(daObjFallObj_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj/daObjFallObj_MoveBGExecute__FP14daObjFallObj_c.s"
}
#pragma pop

/* 80BE4A44-80BE4A70 002C+00 s=1 e=0 z=0  None .text daObjFallObj_MoveBGDraw__FP14daObjFallObj_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjFallObj_MoveBGDraw(daObjFallObj_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj/daObjFallObj_MoveBGDraw__FP14daObjFallObj_c.s"
}
#pragma pop

/* 80BE4A70-80BE4A8C 001C+00 s=1 e=0 z=0  None .text      cLib_calcTimer<s>__FPs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cLib_calcTimer__template0(s16* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj/func_80BE4A70.s"
}
#pragma pop

/* 80BE4A8C-80BE4AA8 001C+00 s=1 e=0 z=0  None .text      cLib_calcTimer<Uc>__FPUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cLib_calcTimer__template1(u8* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fallobj/d_a_obj_fallobj/func_80BE4A8C.s"
}
#pragma pop
