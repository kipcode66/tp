//
// Generated By: dol2asm
// Translation Unit: d_a_obj_crvlh_up
//

#include "rel/d/a/obj/d_a_obj_crvlh_up/d_a_obj_crvlh_up.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct cXyz {
    /* 80BD56A4 */ ~cXyz();
    /* 80BD56E0 */ cXyz();
};

struct csXyz {
    /* 802673F4 */ csXyz(s16, s16, s16);
};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CD9C */ void transM(f32, f32, f32);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
};

struct fopAc_ac_c {};

struct daObjCRVLH_UP_c {
    /* 80BD4F1C */ void HakaiSet();
    /* 80BD4FB0 */ void UpMotion();
    /* 80BD4FD8 */ void Hakai();
    /* 80BD5254 */ void setBaseMtx();
    /* 80BD5378 */ void CreateHeap();
    /* 80BD53F0 */ void create();
    /* 80BD56EC */ void Create();
    /* 80BD5730 */ void Execute(f32 (**)[3][4]);
    /* 80BD593C */ void Draw();
    /* 80BD59C0 */ void Delete();
};

struct daObjCRVHAHEN_c {
    /* 80BD342C */ void HahenSet(cXyz, cXyz, cXyz, cXyz, f32);
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C37C */ void getRes(char const*, char const*, dRes_info_c*, int);
    /* 8003C6B8 */ void getObjectResName2Index(char const*, char const*);
};

struct dPa_levelEcallBack {};

struct _GXColor {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
};

struct dBgW_Base {};

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

struct cM3dGCyl {
    /* 80BD5614 */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80BD565C */ ~cM3dGAab();
};

struct cBgW_BgId {
    /* 802681D4 */ void ChkUsed() const;
};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct Vec {};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

//
// Forward References:
//

static void daObjCRVLH_UP_Create(fopAc_ac_c*);
static void daObjCRVLH_UP_Delete(daObjCRVLH_UP_c*);
static void daObjCRVLH_UP_Draw(daObjCRVLH_UP_c*);
static void daObjCRVLH_UP_Execute(daObjCRVLH_UP_c*);
static bool daObjCRVLH_UP_IsDelete(daObjCRVLH_UP_c*);

extern "C" static void daObjCRVLH_UP_Create__FP10fopAc_ac_c();
extern "C" static void daObjCRVLH_UP_Delete__FP15daObjCRVLH_UP_c();
extern "C" void HakaiSet__15daObjCRVLH_UP_cFv();
extern "C" void UpMotion__15daObjCRVLH_UP_cFv();
extern "C" void Hakai__15daObjCRVLH_UP_cFv();
extern "C" void setBaseMtx__15daObjCRVLH_UP_cFv();
extern "C" static void daObjCRVLH_UP_Draw__FP15daObjCRVLH_UP_c();
extern "C" static void daObjCRVLH_UP_Execute__FP15daObjCRVLH_UP_c();
extern "C" void CreateHeap__15daObjCRVLH_UP_cFv();
extern "C" void create__15daObjCRVLH_UP_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__4cXyzFv();
extern "C" void __ct__4cXyzFv();
extern "C" static bool daObjCRVLH_UP_IsDelete__FP15daObjCRVLH_UP_c();
extern "C" void Create__15daObjCRVLH_UP_cFv();
extern "C" void Execute__15daObjCRVLH_UP_cFPPA3_A4_f();
extern "C" void Draw__15daObjCRVLH_UP_cFv();
extern "C" void Delete__15daObjCRVLH_UP_cFv();
extern "C" extern u32 const lit_3723;
extern "C" extern u32 const lit_3724;
extern "C" extern u8 const lit_3725[4];
extern "C" extern u32 const lit_3726;
extern "C" extern u32 const lit_3727;
extern "C" extern u32 const lit_3728[1 + 1 /* padding */];
extern "C" extern u8 const lit_3730[8];
extern "C" extern u32 const lit_3769;
extern "C" extern u32 const lit_3857;
extern "C" extern u32 const lit_3858;
extern "C" extern u32 const lit_3859;
extern "C" extern u32 const lit_3860;
extern "C" extern u32 const lit_3861;
extern "C" extern u32 const lit_3940;
extern "C" extern u32 const lit_3941;
extern "C" extern u32 const lit_3997;
extern "C" extern u32 const lit_3998;
extern "C" extern u32 const lit_3999;
extern "C" extern u32 const lit_4000;
extern "C" extern u32 const lit_4001;
extern "C" extern u32 const lit_4002;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_CRVLH_UP[12];
extern "C" extern void* __vt__8cM3dGCyl[3];
extern "C" extern void* __vt__8cM3dGAab[3];
extern "C" extern void* __vt__15daObjCRVLH_UP_c[10];

//
// External References:
//

void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_SearchByID(unsigned int, fopAc_ac_c**);
void fopAcM_delete(fopAc_ac_c*);
void fopAcM_create(s16, u32, cXyz const*, int, csXyz const*, cXyz const*, s8);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dBgS_MoveBGProc_TypicalRotY(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void cM_rndFX(f32);
void cLib_chaseAngleS(s16*, s16, s16);
void operator delete(void*);

extern "C" void OSReport();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_SearchByID__FUiPP10fopAc_ac_c();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void getObjectResName2Index__14dRes_control_cFPCcPCc();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __ct__5csXyzFsss();
extern "C" void cM_rndFX__Ff();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void __construct_array();
extern "C" void _savegpr_24();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void HahenSet__15daObjCRVHAHEN_cF4cXyz4cXyz4cXyz4cXyzf();

//
// Declarations:
//

/* 80BD4ED8-80BD4EF8 0020+00 s=1 e=0 z=0  None .text      daObjCRVLH_UP_Create__FP10fopAc_ac_c */
//	80BD4EE4: 80BD53F0 (create__15daObjCRVLH_UP_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjCRVLH_UP_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvlh_up/d_a_obj_crvlh_up/daObjCRVLH_UP_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BD4EF8-80BD4F1C 0024+00 s=1 e=0 z=0  None .text      daObjCRVLH_UP_Delete__FP15daObjCRVLH_UP_c
 */
//	80BD4F04: 800788DC (MoveBGDelete__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjCRVLH_UP_Delete(daObjCRVLH_UP_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvlh_up/d_a_obj_crvlh_up/daObjCRVLH_UP_Delete__FP15daObjCRVLH_UP_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD59FC-80BD5A00 0004+00 s=6 e=0 z=0  None .rodata    @3672 */
SECTION_RODATA static u32 const lit_3672 = 0x467A0000;

/* 80BD5A00-80BD5A04 0004+00 s=1 e=0 z=0  None .rodata    @3681 */
SECTION_RODATA static u32 const lit_3681 = 0xC2F00000;

/* 80BD5A04-80BD5A08 0004+00 s=1 e=0 z=0  None .rodata    @3682 */
SECTION_RODATA static u32 const lit_3682 = 0xC0A00000;

/* 80BD5A08-80BD5A0C 0004+00 s=0 e=0 z=0  None .rodata    @3723 */
SECTION_RODATA u32 const lit_3723 = 0x3F800000;

/* 80BD5A0C-80BD5A10 0004+00 s=0 e=0 z=0  None .rodata    @3724 */
SECTION_RODATA u32 const lit_3724 = 0xBF800000;

/* 80BD5A10-80BD5A14 0004+00 s=0 e=0 z=0  None .rodata    @3725 */
SECTION_RODATA u8 const lit_3725[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80BD5A14-80BD5A18 0004+00 s=0 e=0 z=0  None .rodata    @3726 */
SECTION_RODATA u32 const lit_3726 = 0x43160000;

/* 80BD5A18-80BD5A1C 0004+00 s=0 e=0 z=0  None .rodata    @3727 */
SECTION_RODATA u32 const lit_3727 = 0x43AF0000;

/* 80BD5A1C-80BD5A24 0004+04 s=0 e=0 z=0  None .rodata    @3728 */
SECTION_RODATA u32 const lit_3728[1 + 1 /* padding */] = {
    0x43140000,
    /* padding */
    0x00000000,
};

/* 80BD5A24-80BD5A2C 0008+00 s=0 e=0 z=0  None .rodata    @3730 */
SECTION_RODATA u8 const lit_3730[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80BD5A2C-80BD5A30 0004+00 s=0 e=0 z=0  None .rodata    @3769 */
SECTION_RODATA u32 const lit_3769 = 0xC3160000;

/* 80BD5A30-80BD5A34 0004+00 s=0 e=0 z=0  None .rodata    @3857 */
SECTION_RODATA u32 const lit_3857 = 0xC1100000;

/* 80BD5A34-80BD5A38 0004+00 s=0 e=0 z=0  None .rodata    @3858 */
SECTION_RODATA u32 const lit_3858 = 0x42C80000;

/* 80BD5A38-80BD5A3C 0004+00 s=0 e=0 z=0  None .rodata    @3859 */
SECTION_RODATA u32 const lit_3859 = 0xC3FA0000;

/* 80BD5A3C-80BD5A40 0004+00 s=0 e=0 z=0  None .rodata    @3860 */
SECTION_RODATA u32 const lit_3860 = 0x43FA0000;

/* 80BD5A40-80BD5A44 0004+00 s=0 e=0 z=0  None .rodata    @3861 */
SECTION_RODATA u32 const lit_3861 = 0x44FA0000;

/* 80BD5A44-80BD5A48 0004+00 s=0 e=0 z=0  None .rodata    @3940 */
SECTION_RODATA u32 const lit_3940 = 0xC47A0000;

/* 80BD5A48-80BD5A4C 0004+00 s=0 e=0 z=0  None .rodata    @3941 */
SECTION_RODATA u32 const lit_3941 = 0x447A0000;

/* 80BD5A4C-80BD5A50 0004+00 s=0 e=0 z=0  None .rodata    @3997 */
SECTION_RODATA u32 const lit_3997 = 0x437A0000;

/* 80BD5A50-80BD5A54 0004+00 s=0 e=0 z=0  None .rodata    @3998 */
SECTION_RODATA u32 const lit_3998 = 0x42A00000;

/* 80BD5A54-80BD5A58 0004+00 s=0 e=0 z=0  None .rodata    @3999 */
SECTION_RODATA u32 const lit_3999 = 0x42700000;

/* 80BD5A58-80BD5A5C 0004+00 s=0 e=0 z=0  None .rodata    @4000 */
SECTION_RODATA u32 const lit_4000 = 0x41200000;

/* 80BD5A5C-80BD5A60 0004+00 s=0 e=0 z=0  None .rodata    @4001 */
SECTION_RODATA u32 const lit_4001 = 0x41A00000;

/* 80BD5A60-80BD5A64 0004+00 s=0 e=0 z=0  None .rodata    @4002 */
SECTION_RODATA u32 const lit_4002 = 0x453B8000;

/* 80BD5A64-80BD5A9A 0036+00 s=4 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80BD5A64 = "CrvLH_Up";
SECTION_DEAD char const* const stringBase_80BD5A6D = "Release Error\n";
SECTION_DEAD char const* const stringBase_80BD5A7C = "U_CrvLH_UP.bmd";
SECTION_DEAD char const* const stringBase_80BD5A8B = "U_CrvLH_Up.dzb";
#pragma pop

/* 80BD4F1C-80BD4FB0 0094+00 s=0 e=0 z=1  None .text      HakaiSet__15daObjCRVLH_UP_cFv */
//	80BD4F44: 802681D4 (ChkUsed__9cBgW_BgIdCFv)
//	80BD4F50: 804061C0 (g_dComIfG_gameInfo)
//	80BD4F54: 804061C0 (g_dComIfG_gameInfo)
//	80BD4F60: 80074250 (Release__4cBgSFP9dBgW_Base)
//	80BD4F6C: 80BD5A64 (stringBase0)
//	80BD4F70: 80BD5A64 (stringBase0)
//	80BD4F7C: 80006ABC (OSReport)
//	80BD4F80: 80BD59FC (lit_3672)
//	80BD4F84: 80BD59FC (lit_3672)
//	80BD4F88: 8026798C (cM_rndFX__Ff)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVLH_UP_c::HakaiSet() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvlh_up/d_a_obj_crvlh_up/HakaiSet__15daObjCRVLH_UP_cFv.s"
}
#pragma pop

/* 80BD4FB0-80BD4FD8 0028+00 s=1 e=0 z=0  None .text      UpMotion__15daObjCRVLH_UP_cFv */
//	80BD4FB4: 80BD5A00 (lit_3681)
//	80BD4FB8: 80BD5A00 (lit_3681)
//	80BD4FC4: 80BD5A04 (lit_3682)
//	80BD4FC8: 80BD5A04 (lit_3682)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVLH_UP_c::UpMotion() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvlh_up/d_a_obj_crvlh_up/UpMotion__15daObjCRVLH_UP_cFv.s"
}
#pragma pop

/* 80BD4FD8-80BD5254 027C+00 s=1 e=0 z=0  None .text      Hakai__15daObjCRVLH_UP_cFv */
//	80BD5000: 803621C8 (_savegpr_24)
//	80BD5008: 80BD59FC (lit_3672)
//	80BD500C: 80BD59FC (lit_3672)
//	80BD501C: 80270B90 (cLib_chaseAngleS__FPsss)
//	80BD5030: 8002D06C (dComIfGp_getReverb__Fi)
//	80BD5044: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BD5048: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BD5070: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80BD508C: 802673F4 (__ct__5csXyzFsss)
//	80BD50A0: 802673F4 (__ct__5csXyzFsss)
//	80BD50AC: 803DD470 (now__14mDoMtx_stack_c)
//	80BD50B0: 803DD470 (now__14mDoMtx_stack_c)
//	80BD50DC: 803468E8 (PSMTXTrans)
//	80BD50E8: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80BD5110: 8000CD9C (transM__14mDoMtx_stack_cFfff)
//	80BD5124: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80BD5138: 80346D6C (PSMTXMultVec)
//	80BD516C: 80019D98 (fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc)
//	80BD5194: 80019D98 (fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc)
//	80BD519C: 804061C0 (g_dComIfG_gameInfo)
//	80BD51A0: 804061C0 (g_dComIfG_gameInfo)
//	80BD51E8: 8004CA90
//(set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80BD5240: 80362214 (_restgpr_24)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVLH_UP_c::Hakai() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvlh_up/d_a_obj_crvlh_up/Hakai__15daObjCRVLH_UP_cFv.s"
}
#pragma pop

/* 80BD5254-80BD532C 00D8+00 s=1 e=0 z=0  None .text      setBaseMtx__15daObjCRVLH_UP_cFv */
//	80BD526C: 80BD59FC (lit_3672)
//	80BD5270: 80BD59FC (lit_3672)
//	80BD5278: 8000CD64 (transS__14mDoMtx_stack_cFRC4cXyz)
//	80BD5288: 8000CD9C (transM__14mDoMtx_stack_cFfff)
//	80BD528C: 803DD470 (now__14mDoMtx_stack_c)
//	80BD5290: 803DD470 (now__14mDoMtx_stack_c)
//	80BD52A4: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80BD52B4: 8000CD9C (transM__14mDoMtx_stack_cFfff)
//	80BD52BC: 8000CF44 (ZXYrotM__14mDoMtx_stack_cFRC5csXyz)
//	80BD52CC: 8000CD9C (transM__14mDoMtx_stack_cFfff)
//	80BD52D0: 803DD470 (now__14mDoMtx_stack_c)
//	80BD52D4: 803DD470 (now__14mDoMtx_stack_c)
//	80BD52EC: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80BD52F0: 803DD470 (now__14mDoMtx_stack_c)
//	80BD52F4: 803DD470 (now__14mDoMtx_stack_c)
//	80BD5300: 803464B0 (PSMTXCopy)
//	80BD5304: 803DD470 (now__14mDoMtx_stack_c)
//	80BD5308: 803DD470 (now__14mDoMtx_stack_c)
//	80BD5310: 803464B0 (PSMTXCopy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVLH_UP_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvlh_up/d_a_obj_crvlh_up/setBaseMtx__15daObjCRVLH_UP_cFv.s"
}
#pragma pop

/* 80BD532C-80BD5358 002C+00 s=1 e=0 z=0  None .text      daObjCRVLH_UP_Draw__FP15daObjCRVLH_UP_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjCRVLH_UP_Draw(daObjCRVLH_UP_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvlh_up/d_a_obj_crvlh_up/daObjCRVLH_UP_Draw__FP15daObjCRVLH_UP_c.s"
}
#pragma pop

/* 80BD5358-80BD5378 0020+00 s=2 e=0 z=0  None .text      daObjCRVLH_UP_Execute__FP15daObjCRVLH_UP_c
 */
//	80BD5364: 80078950 (MoveBGExecute__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjCRVLH_UP_Execute(daObjCRVLH_UP_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvlh_up/d_a_obj_crvlh_up/daObjCRVLH_UP_Execute__FP15daObjCRVLH_UP_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD5A9C-80BD5AA0 0004+00 s=3 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80BD5378-80BD53F0 0078+00 s=1 e=0 z=0  None .text      CreateHeap__15daObjCRVLH_UP_cFv */
//	80BD538C: 80BD5A9C (l_arcName)
//	80BD5390: 80BD5A9C (l_arcName)
//	80BD5398: 80BD5A64 (stringBase0)
//	80BD539C: 80BD5A64 (stringBase0)
//	80BD53A4: 804061C0 (g_dComIfG_gameInfo)
//	80BD53A8: 804061C0 (g_dComIfG_gameInfo)
//	80BD53B8: 8003C37C (getRes__14dRes_control_cFPCcPCcP11dRes_info_ci)
//	80BD53C8: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVLH_UP_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvlh_up/d_a_obj_crvlh_up/CreateHeap__15daObjCRVLH_UP_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BD5AA0-80BD5AC0 0020+00 s=1 e=0 z=0  None .data      l_daObjCRVLH_UP_Method */
SECTION_DATA static void* l_daObjCRVLH_UP_Method[8] = {
    (void*)daObjCRVLH_UP_Create__FP10fopAc_ac_c,
    (void*)daObjCRVLH_UP_Delete__FP15daObjCRVLH_UP_c,
    (void*)daObjCRVLH_UP_Execute__FP15daObjCRVLH_UP_c,
    (void*)daObjCRVLH_UP_IsDelete__FP15daObjCRVLH_UP_c,
    (void*)daObjCRVLH_UP_Draw__FP15daObjCRVLH_UP_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BD5AC0-80BD5AF0 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_CRVLH_UP */
SECTION_DATA void* g_profile_Obj_CRVLH_UP[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00730000, (void*)&g_fpcLf_Method,
    (void*)0x00000770, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01D60000, (void*)&l_daObjCRVLH_UP_Method,
    (void*)0x00040180, (void*)0x000E0000,
};

/* 80BD5AF0-80BD5AFC 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGCyl */
SECTION_DATA void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80BD5AFC-80BD5B08 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80BD5B08-80BD5B30 0028+00 s=1 e=0 z=0  None .data      __vt__15daObjCRVLH_UP_c */
SECTION_DATA void* __vt__15daObjCRVLH_UP_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__15daObjCRVLH_UP_cFv,
    (void*)Create__15daObjCRVLH_UP_cFv,
    (void*)Execute__15daObjCRVLH_UP_cFPPA3_A4_f,
    (void*)Draw__15daObjCRVLH_UP_cFv,
    (void*)Delete__15daObjCRVLH_UP_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80BD53F0-80BD5614 0224+00 s=1 e=0 z=0  None .text      create__15daObjCRVLH_UP_cFv */
//	80BD5400: 803621DC (_savegpr_29)
//	80BD5408: 80BD59FC (lit_3672)
//	80BD540C: 80BD59FC (lit_3672)
//	80BD5428: 80078624 (__ct__16dBgS_MoveBgActorFv)
//	80BD542C: 80BD5B08 (__vt__15daObjCRVLH_UP_c)
//	80BD5430: 80BD5B08 (__vt__15daObjCRVLH_UP_c)
//	80BD543C: 80BD56E0 (__ct__4cXyzFv)
//	80BD5440: 80BD56E0 (__ct__4cXyzFv)
//	80BD5444: 80BD56A4 (__dt__4cXyzFv)
//	80BD5448: 80BD56A4 (__dt__4cXyzFv)
//	80BD5454: 80361D60 (__construct_array)
//	80BD5458: 803C3728 (__vt__9cCcD_Stts)
//	80BD545C: 803C3728 (__vt__9cCcD_Stts)
//	80BD5468: 80083760 (__ct__10dCcD_GSttsFv)
//	80BD546C: 803AC2E4 (__vt__9dCcD_Stts)
//	80BD5470: 803AC2E4 (__vt__9dCcD_Stts)
//	80BD5488: 80083A28 (__ct__12dCcD_GObjInfFv)
//	80BD548C: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80BD5490: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80BD5498: 80BD5AFC (__vt__8cM3dGAab)
//	80BD549C: 80BD5AFC (__vt__8cM3dGAab)
//	80BD54A4: 80BD5AF0 (__vt__8cM3dGCyl)
//	80BD54A8: 80BD5AF0 (__vt__8cM3dGCyl)
//	80BD54B0: 803C35A4 (__vt__12cCcD_CylAttr)
//	80BD54B4: 803C35A4 (__vt__12cCcD_CylAttr)
//	80BD54C4: 803AC050 (__vt__8dCcD_Cyl)
//	80BD54C8: 803AC050 (__vt__8dCcD_Cyl)
//	80BD54F0: 80BD5A9C (l_arcName)
//	80BD54F4: 80BD5A9C (l_arcName)
//	80BD54FC: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80BD5514: 804061C0 (g_dComIfG_gameInfo)
//	80BD5518: 804061C0 (g_dComIfG_gameInfo)
//	80BD5520: 80BD5A9C (l_arcName)
//	80BD5524: 80BD5A9C (l_arcName)
//	80BD552C: 80BD5A64 (stringBase0)
//	80BD5530: 80BD5A64 (stringBase0)
//	80BD553C: 8003C6B8 (getObjectResName2Index__14dRes_control_cFPCcPCc)
//	80BD5548: 80BD5A9C (l_arcName)
//	80BD554C: 80BD5A9C (l_arcName)
//	80BD5554: 80075AD8
//(dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz) 	80BD5558:
//80075AD8
//(dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz) 	80BD5564:
//800787BC
//(MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f)
//	80BD55EC: 8001A548 (fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff)
//	80BD55F4: 80BD5358 (daObjCRVLH_UP_Execute__FP15daObjCRVLH_UP_c)
//	80BD5600: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVLH_UP_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvlh_up/d_a_obj_crvlh_up/create__15daObjCRVLH_UP_cFv.s"
}
#pragma pop

/* 80BD5614-80BD565C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv */
//	80BD562C: 80BD5AF0 (__vt__8cM3dGCyl)
//	80BD5630: 80BD5AF0 (__vt__8cM3dGCyl)
//	80BD5640: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvlh_up/d_a_obj_crvlh_up/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80BD565C-80BD56A4 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
//	80BD5674: 80BD5AFC (__vt__8cM3dGAab)
//	80BD5678: 80BD5AFC (__vt__8cM3dGAab)
//	80BD5688: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvlh_up/d_a_obj_crvlh_up/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80BD56A4-80BD56E0 003C+00 s=1 e=0 z=0  None .text      __dt__4cXyzFv */
//	80BD56C4: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvlh_up/d_a_obj_crvlh_up/__dt__4cXyzFv.s"
}
#pragma pop

/* 80BD56E0-80BD56E4 0004+00 s=1 e=0 z=0  None .text      __ct__4cXyzFv */
cXyz::cXyz() {
    /* empty function */
}

/* 80BD56E4-80BD56EC 0008+00 s=1 e=0 z=0  None .text daObjCRVLH_UP_IsDelete__FP15daObjCRVLH_UP_c
 */
static bool daObjCRVLH_UP_IsDelete(daObjCRVLH_UP_c* param_0) {
    return true;
}

/* 80BD56EC-80BD5730 0044+00 s=1 e=0 z=0  None .text      Create__15daObjCRVLH_UP_cFv */
//	80BD56F8: 80BD59FC (lit_3672)
//	80BD56FC: 80BD59FC (lit_3672)
//	80BD5718: 8001A548 (fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVLH_UP_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvlh_up/d_a_obj_crvlh_up/func_80BD56EC.s"
}
#pragma pop

/* 80BD5730-80BD593C 020C+00 s=1 e=0 z=0  None .text      Execute__15daObjCRVLH_UP_cFPPA3_A4_f */
//	80BD5740: 803621DC (_savegpr_29)
//	80BD574C: 80BD59FC (lit_3672)
//	80BD5750: 80BD59FC (lit_3672)
//	80BD5760: 80019C7C (fopAcM_delete__FP10fopAc_ac_c)
//	80BD5780: 80BD4FD8 (Hakai__15daObjCRVLH_UP_cFv)
//	80BD5788: 80BD4FB0 (UpMotion__15daObjCRVLH_UP_cFv)
//	80BD5798: 800199BC (fopAcM_SearchByID__FUiPP10fopAc_ac_c)
//	80BD57AC: 800199BC (fopAcM_SearchByID__FUiPP10fopAc_ac_c)
//	80BD5860: 80BD342C (HahenSet__15daObjCRVHAHEN_cF4cXyz4cXyz4cXyz4cXyzf)
//	80BD5904: 80BD342C (HahenSet__15daObjCRVHAHEN_cF4cXyz4cXyz4cXyz4cXyzf)
//	80BD591C: 80BD5254 (setBaseMtx__15daObjCRVLH_UP_cFv)
//	80BD5928: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVLH_UP_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvlh_up/d_a_obj_crvlh_up/Execute__15daObjCRVLH_UP_cFPPA3_A4_f.s"
}
#pragma pop

/* 80BD593C-80BD59C0 0084+00 s=1 e=0 z=0  None .text      Draw__15daObjCRVLH_UP_cFv */
//	80BD5950: 8042CA54 (g_env_light)
//	80BD5954: 8042CA54 (g_env_light)
//	80BD5964: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80BD5968: 8042CA54 (g_env_light)
//	80BD596C: 8042CA54 (g_env_light)
//	80BD597C: 801A4DA0
//(setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c) 	80BD5980:
// 804061C0 (g_dComIfG_gameInfo) 	80BD5984: 804061C0 (g_dComIfG_gameInfo) 	80BD598C: 80434AC8
// (j3dSys) 	80BD5990: 80434AC8 (j3dSys) 	80BD59A4: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVLH_UP_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvlh_up/d_a_obj_crvlh_up/Draw__15daObjCRVLH_UP_cFv.s"
}
#pragma pop

/* 80BD59C0-80BD59F4 0034+00 s=1 e=0 z=0  None .text      Delete__15daObjCRVLH_UP_cFv */
//	80BD59CC: 80BD5A9C (l_arcName)
//	80BD59D0: 80BD5A9C (l_arcName)
//	80BD59DC: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCRVLH_UP_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvlh_up/d_a_obj_crvlh_up/Delete__15daObjCRVLH_UP_cFv.s"
}
#pragma pop
