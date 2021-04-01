//
// Generated By: dol2asm
// Translation Unit: d_a_crod
//

#include "rel/d/a/d_a_crod/d_a_crod.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
    /* 80267128 */ void atan2sX_Z() const;
};

struct csXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
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

struct daPy_actorKeep_c {
    /* 8015ECB8 */ void setData(fopAc_ac_c*);
    /* 8015ECFC */ void clearData();
};

struct daCrod_c {
    /* 804A2E38 */ void createHeap();
    /* 804A2F18 */ void create();
    /* 804A3304 */ ~daCrod_c();
    /* 804A34B0 */ void setRoomInfo();
    /* 804A34B4 */ void setMatrix();
    /* 804A3500 */ void posMove();
    /* 804A3580 */ void setBckAnm(u16);
    /* 804A35FC */ void setReturn();
    /* 804A365C */ void setLightPower();
    /* 804A36D8 */ void execute();
    /* 804A3FD4 */ void draw();
};

struct J3DAnmBase {};

struct daAlink_c {
    /* 8009D884 */ void getAlinkArcName();
    /* 800A9248 */ void simpleAnmPlay(J3DAnmBase*);
    /* 800E1310 */ void getCopyRodBallSpeed() const;
    /* 800E1320 */ void getCopyRodBallReturnSpeed() const;
    /* 800E1A30 */ void returnCopyRod();
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

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCps {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 804A3240 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
    /* 800842C0 */ void ChkAtHit();
    /* 80084318 */ void ResetAtHit();
};

struct dCcD_GAtTgCoCommonBase {
    /* 80083688 */ void GetAc();
};

struct dCcD_Cps {
    /* 800847D0 */ void Set(dCcD_SrcCps const&);
};

struct cM3dGLin {
    /* 8026F2E8 */ void SetStartEnd(cXyz const&, cXyz const&);
};

struct cM3dGCps {
    /* 8026EF88 */ cM3dGCps();
    /* 8026EFA4 */ ~cM3dGCps();
};

struct cM3dGAab {
    /* 804A31F8 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 804A409C */ ~cCcD_GStts();
};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct LIGHT_INFLUENCE {};

struct J3DModel {};

struct J3DAnmTextureSRTKey {
    /* 8032B1D4 */ void searchUpdateMaterialID(J3DModelData*);
};

struct J3DAnmTevRegKey {
    /* 8032B87C */ void searchUpdateMaterialID(J3DModelData*);
};

struct J3DMaterialTable {
    /* 8032FCC4 */ void entryTexMtxAnimator(J3DAnmTextureSRTKey*);
    /* 8032FE70 */ void entryTevRegAnimator(J3DAnmTevRegKey*);
};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 804A329C */ ~J3DFrameCtrl();
};

//
// Forward References:
//

static void daCrod_createHeap(fopAc_ac_c*);
static void daCrod_Create(fopAc_ac_c*);
static void daCrod_Delete(daCrod_c*);
static void daCrod_Execute(daCrod_c*);
static void daCrod_Draw(daCrod_c*);

extern "C" void createHeap__8daCrod_cFv();
extern "C" static void daCrod_createHeap__FP10fopAc_ac_c();
extern "C" void create__8daCrod_cFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daCrod_Create__FP10fopAc_ac_c();
extern "C" void __dt__8daCrod_cFv();
extern "C" static void daCrod_Delete__FP8daCrod_c();
extern "C" void setRoomInfo__8daCrod_cFv();
extern "C" void setMatrix__8daCrod_cFv();
extern "C" void posMove__8daCrod_cFv();
extern "C" void setBckAnm__8daCrod_cFUs();
extern "C" void setReturn__8daCrod_cFv();
extern "C" void setLightPower__8daCrod_cFv();
extern "C" void execute__8daCrod_cFv();
extern "C" static void daCrod_Execute__FP8daCrod_c();
extern "C" void draw__8daCrod_cFv();
extern "C" static void daCrod_Draw__FP8daCrod_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" extern u32 const lit_4489;
extern "C" extern u32 const lit_4490;
extern "C" extern u8 const lit_4491[4];
extern "C" extern u32 const lit_4774;
extern "C" extern u32 const lit_4775;
extern "C" extern u32 const lit_4776[1 + 1 /* padding */];
extern "C" extern u8 const lit_4777[8];
extern "C" extern u8 const lit_4778[8];
extern "C" extern u8 const lit_4779[8];
extern "C" extern void* g_profile_CROD[12];
extern "C" extern void* __vt__10cCcD_GStts[3];
extern "C" extern void* __vt__10dCcD_GStts[3];
extern "C" extern void* __vt__8cM3dGAab[3];
extern "C" extern void* __vt__12J3DFrameCtrl[3];

//
// External References:
//

void mDoMtx_ZXYrotM(f32 (*)[4], s16, s16, s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_setStageLayer(void*);
void fopAcM_delete(fopAc_ac_c*);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void dComIfGp_getReverb(int);
void dKy_plight_set(LIGHT_INFLUENCE*);
void dKy_plight_cut(LIGHT_INFLUENCE*);
void cM_atan2s(f32, f32);
void operator delete(void*);

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_setStageLayer__FPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void GetAc__22dCcD_GAtTgCoCommonBaseFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkAtHit__12dCcD_GObjInfFv();
extern "C" void ResetAtHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CpsFRC11dCcD_SrcCps();
extern "C" void getAlinkArcName__9daAlink_cFv();
extern "C" void simpleAnmPlay__9daAlink_cFP10J3DAnmBase();
extern "C" void getCopyRodBallSpeed__9daAlink_cCFv();
extern "C" void getCopyRodBallReturnSpeed__9daAlink_cCFv();
extern "C" void returnCopyRod__9daAlink_cFv();
extern "C" void setData__16daPy_actorKeep_cFP10fopAc_ac_c();
extern "C" void clearData__16daPy_actorKeep_cFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_plight_set__FP15LIGHT_INFLUENCE();
extern "C" void dKy_plight_cut__FP15LIGHT_INFLUENCE();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void atan2sX_Z__4cXyzCFv();
extern "C" void cM_atan2s__Fff();
extern "C" void __ct__8cM3dGCpsFv();
extern "C" void __dt__8cM3dGCpsFv();
extern "C" void SetStartEnd__8cM3dGLinFRC4cXyzRC4cXyz();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void searchUpdateMaterialID__19J3DAnmTextureSRTKeyFP12J3DModelData();
extern "C" void searchUpdateMaterialID__15J3DAnmTevRegKeyFP12J3DModelData();
extern "C" void entryTexMtxAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey();
extern "C" void entryTevRegAnimator__16J3DMaterialTableFP15J3DAnmTevRegKey();
extern "C" void PSMTXCopy();
extern "C" void PSMTXMultVec();
extern "C" void PSVECAdd();
extern "C" void PSVECSquareMag();
extern "C" void PSVECSquareDistance();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cps[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CpsAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u32 __float_nan;
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 data_804A4218[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 804A40EC-804A40F8 000C+00 s=2 e=0 z=0  None .rodata    @3759 */
SECTION_RODATA static u8 const lit_3759[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804A40F8-804A4104 000C+00 s=1 e=0 z=0  None .rodata    l_localRodPos */
SECTION_RODATA static u8 const l_localRodPos[12] = {
    0x42, 0xA2, 0x00, 0x00, 0xC1, 0x48, 0x00, 0x00, 0xC1, 0x40, 0x00, 0x00,
};

/* 804A4104-804A4108 0004+00 s=2 e=0 z=0  None .rodata    @4173 */
SECTION_RODATA static u32 const lit_4173 = 0x3F800000;

/* 804A2E38-804A2EF8 00C0+00 s=1 e=0 z=0  None .text      createHeap__8daCrod_cFv */
//	804A2E50: 8009D884 (getAlinkArcName__9daAlink_cFv)
//	804A2E58: 804061C0 (g_dComIfG_gameInfo)
//	804A2E5C: 804061C0 (g_dComIfG_gameInfo)
//	804A2E70: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	804A2E80: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
//	804A2E9C: 8009D884 (getAlinkArcName__9daAlink_cFv)
//	804A2EAC: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	804A2EC0: 804A4104 (lit_4173)
//	804A2EC4: 804A4104 (lit_4173)
//	804A2ED4: 8000D7DC (init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daCrod_c::createHeap() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/createHeap__8daCrod_cFv.s"
}
#pragma pop

/* 804A2EF8-804A2F18 0020+00 s=1 e=0 z=0  None .text      daCrod_createHeap__FP10fopAc_ac_c */
//	804A2F04: 804A2E38 (createHeap__8daCrod_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daCrod_createHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/daCrod_createHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 804A413C-804A4188 004C+00 s=1 e=0 z=0  None .data      l_atCpsSrc */
SECTION_DATA static u8 l_atCpsSrc[76] = {
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xA0, 0x00, 0x00,
};

/* 804A4188-804A4194 000C+00 s=1 e=0 z=0  None .data      shootInitLocalPos$4524 */
SECTION_DATA static u8 shootInitLocalPos[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804A4194-804A41B4 0020+00 s=1 e=0 z=0  None .data      l_daCrod_Method */
SECTION_DATA static void* l_daCrod_Method[8] = {
    (void*)daCrod_Create__FP10fopAc_ac_c,
    (void*)daCrod_Delete__FP8daCrod_c,
    (void*)daCrod_Execute__FP8daCrod_c,
    (void*)NULL,
    (void*)daCrod_Draw__FP8daCrod_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 804A41B4-804A41E4 0030+00 s=0 e=0 z=1  None .data      g_profile_CROD */
SECTION_DATA void* g_profile_CROD[12] = {
    (void*)0xFFFFFFFD, (void*)0x0008FFFD,
    (void*)0x02F40000, (void*)&g_fpcLf_Method,
    (void*)0x00000750, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02B00000, (void*)&l_daCrod_Method,
    (void*)0x00060000, (void*)0x05000000,
};

/* 804A41E4-804A41F0 000C+00 s=3 e=0 z=0  None .data      __vt__10cCcD_GStts */
SECTION_DATA void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 804A41F0-804A41FC 000C+00 s=2 e=0 z=0  None .data      __vt__10dCcD_GStts */
SECTION_DATA void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 804A41FC-804A4208 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 804A4208-804A4214 000C+00 s=3 e=0 z=0  None .data      __vt__12J3DFrameCtrl */
SECTION_DATA void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 804A2F18-804A31F8 02E0+00 s=1 e=0 z=0  None .text      create__8daCrod_cFv */
//	804A2F28: 803621DC (_savegpr_29)
//	804A2F48: 80018B64 (__ct__10fopAc_ac_cFv)
//	804A2F50: 804A4208 (__vt__12J3DFrameCtrl)
//	804A2F54: 804A4208 (__vt__12J3DFrameCtrl)
//	804A2F64: 803283FC (init__12J3DFrameCtrlFs)
//	804A2F70: 803C3728 (__vt__9cCcD_Stts)
//	804A2F74: 803C3728 (__vt__9cCcD_Stts)
//	804A2F80: 80083760 (__ct__10dCcD_GSttsFv)
//	804A2F84: 803AC2E4 (__vt__9dCcD_Stts)
//	804A2F88: 803AC2E4 (__vt__9dCcD_Stts)
//	804A2FA0: 80083A28 (__ct__12dCcD_GObjInfFv)
//	804A2FA4: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	804A2FA8: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	804A2FB0: 804A41FC (__vt__8cM3dGAab)
//	804A2FB4: 804A41FC (__vt__8cM3dGAab)
//	804A2FC0: 8026EF88 (__ct__8cM3dGCpsFv)
//	804A2FC4: 803C3608 (__vt__12cCcD_CpsAttr)
//	804A2FC8: 803C3608 (__vt__12cCcD_CpsAttr)
//	804A2FD8: 803AC170 (__vt__8dCcD_Cps)
//	804A2FDC: 803AC170 (__vt__8dCcD_Cps)
//	804A2FF8: 8015ECFC (clearData__16daPy_actorKeep_cFv)
//	804A3000: 8015ECFC (clearData__16daPy_actorKeep_cFv)
//	804A3020: 800198C4 (fopAcM_setStageLayer__FPv)
//	804A3034: 80083860 (Init__9dCcD_SttsFiiP10fopAc_ac_c)
//	804A3044: 804A2EF8 (daCrod_createHeap__FP10fopAc_ac_c)
//	804A3048: 804A2EF8 (daCrod_createHeap__FP10fopAc_ac_c)
//	804A3050: 8001A4B0 (fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl)
//	804A3074: 80083860 (Init__9dCcD_SttsFiiP10fopAc_ac_c)
//	804A307C: 804A413C (l_atCpsSrc)
//	804A3080: 804A413C (l_atCpsSrc)
//	804A3084: 800847D0 (Set__8dCcD_CpsFRC11dCcD_SrcCps)
//	804A30A0: 8009D884 (getAlinkArcName__9daAlink_cFv)
//	804A30A8: 804061C0 (g_dComIfG_gameInfo)
//	804A30AC: 804061C0 (g_dComIfG_gameInfo)
//	804A30C0: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	804A30D0: 8032B87C (searchUpdateMaterialID__15J3DAnmTevRegKeyFP12J3DModelData)
//	804A30DC: 8032FE70 (entryTevRegAnimator__16J3DMaterialTableFP15J3DAnmTevRegKey)
//	804A30E0: 8009D884 (getAlinkArcName__9daAlink_cFv)
//	804A30F0: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	804A3100: 8032B1D4 (searchUpdateMaterialID__19J3DAnmTextureSRTKeyFP12J3DModelData)
//	804A310C: 8032FCC4 (entryTexMtxAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey)
//	804A3114: 800198C4 (fopAcM_setStageLayer__FPv)
//	804A3118: 804061C0 (g_dComIfG_gameInfo)
//	804A311C: 804061C0 (g_dComIfG_gameInfo)
//	804A3160: 804A40F8 (l_localRodPos)
//	804A3164: 804A40F8 (l_localRodPos)
//	804A316C: 80346D6C (PSMTXMultVec)
//	804A3174: 8000D428 (play__14mDoExt_baseAnmFv)
//	804A3188: 8000D9CC (entry__13mDoExt_bckAnmFP12J3DModelDataf)
//	804A3190: 804A34B4 (setMatrix__8daCrod_cFv)
//	804A3198: 804A34B0 (setRoomInfo__8daCrod_cFv)
//	804A31D0: 804A365C (setLightPower__8daCrod_cFv)
//	804A31D8: 801A7790 (dKy_plight_set__FP15LIGHT_INFLUENCE)
//	804A31E4: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daCrod_c::create() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/create__8daCrod_cFv.s"
}
#pragma pop

/* 804A31F8-804A3240 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
//	804A3210: 804A41FC (__vt__8cM3dGAab)
//	804A3214: 804A41FC (__vt__8cM3dGAab)
//	804A3224: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 804A3240-804A329C 005C+00 s=1 e=0 z=0  None .text      __dt__10dCcD_GSttsFv */
//	804A3258: 804A41F0 (__vt__10dCcD_GStts)
//	804A325C: 804A41F0 (__vt__10dCcD_GStts)
//	804A3268: 804A41E4 (__vt__10cCcD_GStts)
//	804A326C: 804A41E4 (__vt__10cCcD_GStts)
//	804A3280: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 804A329C-804A32E4 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv */
//	804A32B4: 804A4208 (__vt__12J3DFrameCtrl)
//	804A32B8: 804A4208 (__vt__12J3DFrameCtrl)
//	804A32C8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 804A32E4-804A3304 0020+00 s=1 e=0 z=0  None .text      daCrod_Create__FP10fopAc_ac_c */
//	804A32F0: 804A2F18 (create__8daCrod_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daCrod_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/daCrod_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 804A3304-804A3488 0184+00 s=1 e=0 z=0  None .text      __dt__8daCrod_cFv */
//	804A3330: 804061C0 (g_dComIfG_gameInfo)
//	804A3334: 804061C0 (g_dComIfG_gameInfo)
//	804A3350: 801A792C (dKy_plight_cut__FP15LIGHT_INFLUENCE)
//	804A335C: 803AC170 (__vt__8dCcD_Cps)
//	804A3360: 803AC170 (__vt__8dCcD_Cps)
//	804A3380: 803C3608 (__vt__12cCcD_CpsAttr)
//	804A3384: 803C3608 (__vt__12cCcD_CpsAttr)
//	804A339C: 8026EFA4 (__dt__8cM3dGCpsFv)
//	804A33A8: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	804A33AC: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	804A33BC: 804A41FC (__vt__8cM3dGAab)
//	804A33C0: 804A41FC (__vt__8cM3dGAab)
//	804A33D0: 800840E4 (__dt__12dCcD_GObjInfFv)
//	804A33DC: 803AC2E4 (__vt__9dCcD_Stts)
//	804A33E0: 803AC2E4 (__vt__9dCcD_Stts)
//	804A33F8: 804A41F0 (__vt__10dCcD_GStts)
//	804A33FC: 804A41F0 (__vt__10dCcD_GStts)
//	804A340C: 804A41E4 (__vt__10cCcD_GStts)
//	804A3410: 804A41E4 (__vt__10cCcD_GStts)
//	804A3420: 803C3728 (__vt__9cCcD_Stts)
//	804A3424: 803C3728 (__vt__9cCcD_Stts)
//	804A3444: 804A4208 (__vt__12J3DFrameCtrl)
//	804A3448: 804A4208 (__vt__12J3DFrameCtrl)
//	804A3458: 80018C8C (__dt__10fopAc_ac_cFv)
//	804A3468: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daCrod_c::~daCrod_c() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/__dt__8daCrod_cFv.s"
}
#pragma pop

/* 804A3488-804A34B0 0028+00 s=1 e=0 z=0  None .text      daCrod_Delete__FP8daCrod_c */
//	804A3498: 804A3304 (__dt__8daCrod_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daCrod_Delete(daCrod_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/daCrod_Delete__FP8daCrod_c.s"
}
#pragma pop

/* 804A34B0-804A34B4 0004+00 s=2 e=0 z=0  None .text      setRoomInfo__8daCrod_cFv */
void daCrod_c::setRoomInfo() {
    /* empty function */
}

/* 804A34B4-804A3500 004C+00 s=2 e=0 z=0  None .text      setMatrix__8daCrod_cFv */
//	804A34CC: 8000CD64 (transS__14mDoMtx_stack_cFRC4cXyz)
//	804A34D4: 8000CF44 (ZXYrotM__14mDoMtx_stack_cFRC5csXyz)
//	804A34D8: 803DD470 (now__14mDoMtx_stack_c)
//	804A34DC: 803DD470 (now__14mDoMtx_stack_c)
//	804A34E8: 803464B0 (PSMTXCopy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daCrod_c::setMatrix() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/setMatrix__8daCrod_cFv.s"
}
#pragma pop

/* 804A3500-804A3580 0080+00 s=1 e=0 z=0  None .text      posMove__8daCrod_cFv */
//	804A3510: 80439A20 (sincosTable___5JMath)
//	804A3514: 80439A20 (sincosTable___5JMath)
//	804A356C: 80347090 (PSVECAdd)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daCrod_c::posMove() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/posMove__8daCrod_cFv.s"
}
#pragma pop

/* 804A3580-804A35FC 007C+00 s=2 e=0 z=0  None .text      setBckAnm__8daCrod_cFUs */
//	804A359C: 8009D884 (getAlinkArcName__9daAlink_cFv)
//	804A35A4: 804061C0 (g_dComIfG_gameInfo)
//	804A35A8: 804061C0 (g_dComIfG_gameInfo)
//	804A35B8: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	804A35CC: 804A4104 (lit_4173)
//	804A35D0: 804A4104 (lit_4173)
//	804A35E0: 8000D7DC (init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daCrod_c::setBckAnm(u16 param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/setBckAnm__8daCrod_cFUs.s"
}
#pragma pop

/* 804A35FC-804A365C 0060+00 s=1 e=0 z=0  None .text      setReturn__8daCrod_cFv */
//	804A3620: 804A3580 (setBckAnm__8daCrod_cFUs)
//	804A362C: 804061C0 (g_dComIfG_gameInfo)
//	804A3630: 804061C0 (g_dComIfG_gameInfo)
//	804A3638: 800E1320 (getCopyRodBallReturnSpeed__9daAlink_cCFv)
//	804A3644: 8015ECFC (clearData__16daPy_actorKeep_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daCrod_c::setReturn() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/setReturn__8daCrod_cFv.s"
}
#pragma pop

/* 804A365C-804A36D8 007C+00 s=2 e=0 z=0  None .text      setLightPower__8daCrod_cFv */
//	804A3674: 804A40EC (lit_3759)
//	804A3678: 804A40EC (lit_3759)
//	804A367C: 804061C0 (g_dComIfG_gameInfo)
//	804A3680: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daCrod_c::setLightPower() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/setLightPower__8daCrod_cFv.s"
}
#pragma pop

/* 804A36D8-804A3FB4 08DC+00 s=1 e=0 z=0  None .text      execute__8daCrod_cFv */
//	804A36F0: 803621D4 (_savegpr_27)
//	804A36F8: 804A40EC (lit_3759)
//	804A36FC: 804A40EC (lit_3759)
//	804A3700: 804061C0 (g_dComIfG_gameInfo)
//	804A3704: 804061C0 (g_dComIfG_gameInfo)
//	804A37CC: 804A3580 (setBckAnm__8daCrod_cFUs)
//	804A37F0: 804A3580 (setBckAnm__8daCrod_cFUs)
//	804A383C: 804A365C (setLightPower__8daCrod_cFv)
//	804A3844: 800842C0 (ChkAtHit__12dCcD_GObjInfFv)
//	804A3854: 80083688 (GetAc__22dCcD_GAtTgCoCommonBaseFv)
//	804A38A4: 8015ECB8 (setData__16daPy_actorKeep_cFP10fopAc_ac_c)
//	804A38B0: 8015ECB8 (setData__16daPy_actorKeep_cFP10fopAc_ac_c)
//	804A38F4: 804A3580 (setBckAnm__8daCrod_cFUs)
//	804A3900: 804A35FC (setReturn__8daCrod_cFv)
//	804A3924: 804A3580 (setBckAnm__8daCrod_cFUs)
//	804A3928: 804A4218 (data_804A4218)
//	804A392C: 804A4218 (data_804A4218)
//	804A3940: 804A4188 (shootInitLocalPos)
//	804A3944: 804A4188 (shootInitLocalPos)
//	804A3990: 800E1310 (getCopyRodBallSpeed__9daAlink_cCFv)
//	804A399C: 8000CD64 (transS__14mDoMtx_stack_cFRC4cXyz)
//	804A39A0: 803DD470 (now__14mDoMtx_stack_c)
//	804A39A4: 803DD470 (now__14mDoMtx_stack_c)
//	804A39BC: 8000C2A0 (mDoMtx_ZXYrotM__FPA4_fsss)
//	804A39C0: 803DD470 (now__14mDoMtx_stack_c)
//	804A39C4: 803DD470 (now__14mDoMtx_stack_c)
//	804A39C8: 804A4188 (shootInitLocalPos)
//	804A39CC: 804A4188 (shootInitLocalPos)
//	804A39D4: 80346D6C (PSMTXMultVec)
//	804A3A14: 804A35FC (setReturn__8daCrod_cFv)
//	804A3A24: 804061C0 (g_dComIfG_gameInfo)
//	804A3A28: 804061C0 (g_dComIfG_gameInfo)
//	804A3A48: 804A3580 (setBckAnm__8daCrod_cFUs)
//	804A3A58: 804061C0 (g_dComIfG_gameInfo)
//	804A3A5C: 804061C0 (g_dComIfG_gameInfo)
//	804A3A7C: 804A3580 (setBckAnm__8daCrod_cFUs)
//	804A3A98: 80266B34 (__mi__4cXyzCFRC3Vec)
//	804A3AB8: 80347138 (PSVECSquareMag)
//	804A3AD0: 8015ECFC (clearData__16daPy_actorKeep_cFv)
//	804A3AD8: 800E1A30 (returnCopyRod__9daAlink_cFv)
//	804A3AF4: 804A3580 (setBckAnm__8daCrod_cFUs)
//	804A3B00: 8002D06C (dComIfGp_getReverb__Fi)
//	804A3B14: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	804A3B18: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	804A3B40: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	804A3B4C: 80019C7C (fopAcM_delete__FP10fopAc_ac_c)
//	804A3B74: 80347138 (PSVECSquareMag)
//	804A3BE4: 80450AE0 (__float_nan)
//	804A3BE8: 80450AE0 (__float_nan)
//	804A3C54: 80450AE0 (__float_nan)
//	804A3C58: 80450AE0 (__float_nan)
//	804A3C68: 80267674 (cM_atan2s__Fff)
//	804A3C74: 80267128 (atan2sX_Z__4cXyzCFv)
//	804A3C94: 804A3500 (posMove__8daCrod_cFv)
//	804A3CB0: 8026F2E8 (SetStartEnd__8cM3dGLinFRC4cXyzRC4cXyz)
//	804A3CC0: 80266B34 (__mi__4cXyzCFRC3Vec)
//	804A3CF0: 804061C0 (g_dComIfG_gameInfo)
//	804A3CF4: 804061C0 (g_dComIfG_gameInfo)
//	804A3D00: 80264BA8 (Set__4cCcSFP8cCcD_Obj)
//	804A3D0C: 8002D06C (dComIfGp_getReverb__Fi)
//	804A3D20: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	804A3D24: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	804A3D4C: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	804A3D84: 8034739C (PSVECSquareDistance)
//	804A3D98: 804A35FC (setReturn__8daCrod_cFv)
//	804A3DA8: 8002D06C (dComIfGp_getReverb__Fi)
//	804A3DBC: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	804A3DC0: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	804A3DE8: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	804A3DF4: 80084318 (ResetAtHit__12dCcD_GObjInfFv)
//	804A3E90: 80346D6C (PSMTXMultVec)
//	804A3EC8: 8002D06C (dComIfGp_getReverb__Fi)
//	804A3EDC: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	804A3EE0: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	804A3F08: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	804A3F40: 800A9248 (simpleAnmPlay__9daAlink_cFP10J3DAnmBase)
//	804A3F48: 800A9248 (simpleAnmPlay__9daAlink_cFP10J3DAnmBase)
//	804A3F50: 8000D428 (play__14mDoExt_baseAnmFv)
//	804A3F64: 8000D9CC (entry__13mDoExt_bckAnmFP12J3DModelDataf)
//	804A3F6C: 804A34B0 (setRoomInfo__8daCrod_cFv)
//	804A3F74: 804A34B4 (setMatrix__8daCrod_cFv)
//	804A3FA0: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daCrod_c::execute() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/execute__8daCrod_cFv.s"
}
#pragma pop

/* 804A3FB4-804A3FD4 0020+00 s=1 e=0 z=0  None .text      daCrod_Execute__FP8daCrod_c */
//	804A3FC0: 804A36D8 (execute__8daCrod_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daCrod_Execute(daCrod_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/daCrod_Execute__FP8daCrod_c.s"
}
#pragma pop

/* 804A3FD4-804A407C 00A8+00 s=1 e=0 z=0  None .text      draw__8daCrod_cFv */
//	804A3FF4: 804061C0 (g_dComIfG_gameInfo)
//	804A3FF8: 804061C0 (g_dComIfG_gameInfo)
//	804A402C: 8042CA54 (g_env_light)
//	804A4030: 8042CA54 (g_env_light)
//	804A4040: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	804A4044: 8042CA54 (g_env_light)
//	804A4048: 8042CA54 (g_env_light)
//	804A4058: 801A4DA0
//(setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c) 	804A4060:
// 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daCrod_c::draw() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/draw__8daCrod_cFv.s"
}
#pragma pop

/* 804A407C-804A409C 0020+00 s=1 e=0 z=0  None .text      daCrod_Draw__FP8daCrod_c */
//	804A4088: 804A3FD4 (draw__8daCrod_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daCrod_Draw(daCrod_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/daCrod_Draw__FP8daCrod_c.s"
}
#pragma pop

/* 804A409C-804A40E4 0048+00 s=1 e=0 z=0  None .text      __dt__10cCcD_GSttsFv */
//	804A40B4: 804A41E4 (__vt__10cCcD_GStts)
//	804A40B8: 804A41E4 (__vt__10cCcD_GStts)
//	804A40C8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/d_a_crod/d_a_crod/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804A4108-804A410C 0004+00 s=0 e=0 z=0  None .rodata    @4489 */
SECTION_RODATA u32 const lit_4489 = 0x43960000;

/* 804A410C-804A4110 0004+00 s=0 e=0 z=0  None .rodata    @4490 */
SECTION_RODATA u32 const lit_4490 = 0x42480000;

/* 804A4110-804A4114 0004+00 s=0 e=0 z=0  None .rodata    @4491 */
SECTION_RODATA u8 const lit_4491[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 804A4114-804A4118 0004+00 s=0 e=0 z=0  None .rodata    @4774 */
SECTION_RODATA u32 const lit_4774 = 0x3D000000;

/* 804A4118-804A411C 0004+00 s=0 e=0 z=0  None .rodata    @4775 */
SECTION_RODATA u32 const lit_4775 = 0x42200000;

/* 804A411C-804A4124 0004+04 s=0 e=0 z=0  None .rodata    @4776 */
SECTION_RODATA u32 const lit_4776[1 + 1 /* padding */] = {
    0xBF800000,
    /* padding */
    0x00000000,
};

/* 804A4124-804A412C 0008+00 s=0 e=0 z=0  None .rodata    @4777 */
SECTION_RODATA u8 const lit_4777[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804A412C-804A4134 0008+00 s=0 e=0 z=0  None .rodata    @4778 */
SECTION_RODATA u8 const lit_4778[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804A4134-804A413C 0008+00 s=0 e=0 z=0  None .rodata    @4779 */
SECTION_RODATA u8 const lit_4779[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
