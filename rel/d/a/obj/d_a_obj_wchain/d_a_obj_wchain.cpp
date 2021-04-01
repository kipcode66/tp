//
// Generated By: dol2asm
// Translation Unit: d_a_obj_wchain
//

#include "rel/d/a/obj/d_a_obj_wchain/d_a_obj_wchain.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct Vec {};

struct cXyz {
    /* 80266AE4 */ void operator+(Vec const&) const;
    /* 80266B34 */ void operator-(Vec const&) const;
    /* 80266B84 */ void operator*(f32) const;
    /* 80266F48 */ void normalizeZP();
    /* 80267150 */ void atan2sY_XZ() const;
    /* 80D303D4 */ cXyz();
    /* 80D303D8 */ ~cXyz();
};

struct csXyz {
    /* 80D303D0 */ csXyz();
    /* 802673F4 */ csXyz(s16, s16, s16);
    /* 80D30394 */ ~csXyz();
};

struct mDoMtx_stack_c {
    /* 8000CDD4 */ void transM(cXyz const&);
    /* 8000CD9C */ void transM(f32, f32, f32);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct fopAcM_rc_c {
    /* 8001DD1C */ void roofCheck(cXyz const*);
};

struct daObjWchain_shape_c {
    /* 80D31418 */ void draw();
    /* 80D318C0 */ ~daObjWchain_shape_c();
};

struct daObjWchain_c {
    /* 80D2FEF8 */ void createHeap();
    /* 80D2FFBC */ void create();
    /* 80D30434 */ ~daObjWchain_c();
    /* 80D30534 */ void setMatrix();
    /* 80D305E4 */ void getChainAngleZ(cXyz*, int);
    /* 80D3080C */ void setChainPos();
    /* 80D310AC */ void execute();
    /* 80D31810 */ void draw();
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 800352B0 */ void offSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
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

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DShape {
    /* 80315300 */ void loadPreDrawSetting() const;
};

struct J3DPacket;
struct J3DDrawBuffer {
    /* 8032548C */ void entryImm(J3DPacket*, u16);
};

struct J3DPacket {
    /* 80312750 */ bool entry(J3DDrawBuffer*);
};

struct J3DModel {};

//
// Forward References:
//

static void daObjWchain_createHeap(fopAc_ac_c*);
static void daObjWchain_Create(fopAc_ac_c*);
static void daObjWchain_Delete(daObjWchain_c*);
static void daObjWchain_Execute(daObjWchain_c*);
static void daObjWchain_Draw(daObjWchain_c*);

extern "C" void createHeap__13daObjWchain_cFv();
extern "C" static void daObjWchain_createHeap__FP10fopAc_ac_c();
extern "C" void create__13daObjWchain_cFv();
extern "C" void __dt__5csXyzFv();
extern "C" void __ct__5csXyzFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__4cXyzFv();
extern "C" static void daObjWchain_Create__FP10fopAc_ac_c();
extern "C" void __dt__13daObjWchain_cFv();
extern "C" static void daObjWchain_Delete__FP13daObjWchain_c();
extern "C" void setMatrix__13daObjWchain_cFv();
extern "C" void getChainAngleZ__13daObjWchain_cFP4cXyzi();
extern "C" void setChainPos__13daObjWchain_cFv();
extern "C" void execute__13daObjWchain_cFv();
extern "C" static void daObjWchain_Execute__FP13daObjWchain_c();
extern "C" void draw__19daObjWchain_shape_cFv();
extern "C" void draw__13daObjWchain_cFv();
extern "C" static void daObjWchain_Draw__FP13daObjWchain_c();
extern "C" void __dt__19daObjWchain_shape_cFv();
extern "C" extern u32 const lit_3744;
extern "C" extern u32 const lit_3745;
extern "C" extern u32 const lit_3746;
extern "C" extern u32 const lit_3747;
extern "C" extern u32 const lit_3748;
extern "C" extern u32 const lit_3749;
extern "C" extern u32 const lit_3750;
extern "C" extern u32 const lit_3751;
extern "C" extern u32 const lit_3752;
extern "C" extern u8 const lit_3753[4];
extern "C" extern u32 const lit_3754;
extern "C" extern u32 const lit_3755;
extern "C" extern u32 const lit_3756;
extern "C" extern u32 const lit_3757;
extern "C" extern u8 const lit_3759[8];
extern "C" extern u8 const data_80D3196C[12];
extern "C" extern u32 const lit_3819;
extern "C" extern u8 const lit_3863[8];
extern "C" extern u8 const lit_3864[8];
extern "C" extern u8 const lit_3865[8];
extern "C" extern u32 const lit_3866;
extern "C" extern u32 const lit_3867;
extern "C" extern u8 const data_80D3199C[12];
extern "C" extern u8 const data_80D319A8[12];
extern "C" extern u32 const lit_4154;
extern "C" extern u32 const lit_4155;
extern "C" extern u32 const lit_4156;
extern "C" extern u32 const lit_4157;
extern "C" extern u32 const lit_4158;
extern "C" extern u32 const lit_4159;
extern "C" extern u32 const lit_4160;
extern "C" extern u32 const lit_4161;
extern "C" extern u32 const lit_4252;
extern "C" extern u32 const lit_4253;
extern "C" extern u32 const lit_4254;
extern "C" extern u32 const lit_4364;
extern "C" extern void* g_profile_Obj_Wchain[12];
extern "C" extern void* __vt__19daObjWchain_shape_c[5];

//
// External References:
//

void mDoMtx_ZXYrotM(f32 (*)[4], s16, s16, s16);
void mDoMtx_YrotS(f32 (*)[4], s16);
void mDoMtx_ZrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_SetMin(fopAc_ac_c*, f32, f32, f32);
void fopAcM_SetMax(fopAc_ac_c*, f32, f32, f32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dKy_setLight_again();
void dKy_GxFog_tevstr_set(dKy_tevstr_c*);
void cM_rad2s(f32);
void cM_atan2s(f32, f32);
void cM_rnd();
void cM_rndF(f32);
void cM_rndFX(f32);
void cLib_chaseF(f32*, f32, f32);
void operator delete(void*);

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void transM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void roofCheck__11fopAcM_rc_cFPC4cXyz();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_setLight_again__Fv();
extern "C" void dKy_GxFog_tevstr_set__FP12dKy_tevstr_c();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void normalizeZP__4cXyzFv();
extern "C" void atan2sY_XZ__4cXyzCFv();
extern "C" void __ct__5csXyzFsss();
extern "C" void cM_rad2s__Ff();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rnd__Fv();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void cLib_chaseF__FPfff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" bool entry__9J3DPacketFP13J3DDrawBuffer();
extern "C" void loadPreDrawSetting__8J3DShapeCFv();
extern "C" void entryImm__13J3DDrawBufferFP9J3DPacketUs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void PSVECAdd();
extern "C" void PSVECScale();
extern "C" void PSVECSquareMag();
extern "C" void GXLoadLightObjImm();
extern "C" void GXSetChanAmbColor();
extern "C" void GXSetChanMatColor();
extern "C" void GXLoadPosMtxImm();
extern "C" void GXLoadNrmMtxImm();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void _savegpr_20();
extern "C" void _savegpr_22();
extern "C" void _restgpr_20();
extern "C" void _restgpr_22();
extern "C" void abs();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__9J3DPacket[5];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern f32 Zero__4cXyz[3];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u32 g_whiteColor;
extern "C" extern u32 __float_nan;
extern "C" extern u8 mRoofY__11fopAcM_rc_c[4];
extern "C" extern u8 struct_80450D64[4];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 sOldVcdVatCmd__8J3DShape[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80D31924-80D3192C 0007+01 s=8 e=0 z=0  None .rodata    l_arcName */
SECTION_RODATA static u8 const l_arcName[7 + 1 /* padding */] = {
    0x57,
    0x63,
    0x68,
    0x61,
    0x69,
    0x6E,
    0x00,
    /* padding */
    0x00,
};

/* 80D2FEF8-80D2FF9C 00A4+00 s=1 e=0 z=0  None .text      createHeap__13daObjWchain_cFv */
//	80D2FF10: 80D31924 (l_arcName)
//	80D2FF14: 80D31924 (l_arcName)
//	80D2FF1C: 804061C0 (g_dComIfG_gameInfo)
//	80D2FF20: 804061C0 (g_dComIfG_gameInfo)
//	80D2FF34: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80D2FF44: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
//	80D2FF60: 80D31924 (l_arcName)
//	80D2FF64: 80D31924 (l_arcName)
//	80D2FF74: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWchain_c::createHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wchain/d_a_obj_wchain/createHeap__13daObjWchain_cFv.s"
}
#pragma pop

/* 80D2FF9C-80D2FFBC 0020+00 s=1 e=0 z=0  None .text      daObjWchain_createHeap__FP10fopAc_ac_c */
//	80D2FFA8: 80D2FEF8 (createHeap__13daObjWchain_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjWchain_createHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wchain/d_a_obj_wchain/daObjWchain_createHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D319E4-80D31A04 0020+00 s=1 e=0 z=0  None .data      l_daObjWchain_Method */
SECTION_DATA static void* l_daObjWchain_Method[8] = {
    (void*)daObjWchain_Create__FP10fopAc_ac_c,
    (void*)daObjWchain_Delete__FP13daObjWchain_c,
    (void*)daObjWchain_Execute__FP13daObjWchain_c,
    (void*)NULL,
    (void*)daObjWchain_Draw__FP13daObjWchain_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D31A04-80D31A34 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Wchain */
SECTION_DATA void* g_profile_Obj_Wchain[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01590000, (void*)&g_fpcLf_Method,
    (void*)0x000007BC, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00F70000, (void*)&l_daObjWchain_Method,
    (void*)0x00060100, (void*)0x030E0000,
};

/* 80D31A34-80D31A48 0014+00 s=3 e=0 z=0  None .data      __vt__19daObjWchain_shape_c */
SECTION_DATA void* __vt__19daObjWchain_shape_c[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)entry__9J3DPacketFP13J3DDrawBuffer,
    (void*)draw__19daObjWchain_shape_cFv,
    (void*)__dt__19daObjWchain_shape_cFv,
};

/* 80D2FFBC-80D30394 03D8+00 s=1 e=0 z=0  None .text      create__13daObjWchain_cFv */
//	80D2FFEC: 803621C0 (_savegpr_22)
//	80D2FFF4: 80D31924 (l_arcName)
//	80D2FFF8: 80D31924 (l_arcName)
//	80D30014: 80018B64 (__ct__10fopAc_ac_cFv)
//	80D30018: 803CD97C (__vt__9J3DPacket)
//	80D3001C: 803CD97C (__vt__9J3DPacket)
//	80D30034: 80D31A34 (__vt__19daObjWchain_shape_c)
//	80D30038: 80D31A34 (__vt__19daObjWchain_shape_c)
//	80D30044: 80D303D4 (__ct__4cXyzFv)
//	80D30048: 80D303D4 (__ct__4cXyzFv)
//	80D3004C: 80D303D8 (__dt__4cXyzFv)
//	80D30050: 80D303D8 (__dt__4cXyzFv)
//	80D3005C: 80361D60 (__construct_array)
//	80D30064: 80D303D4 (__ct__4cXyzFv)
//	80D30068: 80D303D4 (__ct__4cXyzFv)
//	80D3006C: 80D303D8 (__dt__4cXyzFv)
//	80D30070: 80D303D8 (__dt__4cXyzFv)
//	80D3007C: 80361D60 (__construct_array)
//	80D30084: 80D303D0 (__ct__5csXyzFv)
//	80D30088: 80D303D0 (__ct__5csXyzFv)
//	80D3008C: 80D30394 (__dt__5csXyzFv)
//	80D30090: 80D30394 (__dt__5csXyzFv)
//	80D3009C: 80361D60 (__construct_array)
//	80D300BC: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80D300F0: 80D2FF9C (daObjWchain_createHeap__FP10fopAc_ac_c)
//	80D300F4: 80D2FF9C (daObjWchain_createHeap__FP10fopAc_ac_c)
//	80D300FC: 8001A4B0 (fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl)
//	80D30110: 80450D64 (struct_80450D64)
//	80D30114: 80450D64 (struct_80450D64)
//	80D30170: 8001A528 (fopAcM_SetMin__FP10fopAc_ac_cfff)
//	80D30184: 8001A538 (fopAcM_SetMax__FP10fopAc_ac_cfff)
//	80D30204: 804061C0 (g_dComIfG_gameInfo)
//	80D30208: 804061C0 (g_dComIfG_gameInfo)
//	80D30218: 80035360 (isSwitch__10dSv_info_cCFii)
//	80D30274: 8026798C (cM_rndFX__Ff)
//	80D30294: 80430CF4 (Zero__4cXyz)
//	80D30298: 80430CF4 (Zero__4cXyz)
//	80D302EC: 8026798C (cM_rndFX__Ff)
//	80D30334: 80430CF4 (Zero__4cXyz)
//	80D30338: 80430CF4 (Zero__4cXyz)
//	80D30354: 80D30534 (setMatrix__13daObjWchain_cFv)
//	80D30380: 8036220C (_restgpr_22)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWchain_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wchain/d_a_obj_wchain/create__13daObjWchain_cFv.s"
}
#pragma pop

/* 80D30394-80D303D0 003C+00 s=2 e=0 z=0  None .text      __dt__5csXyzFv */
//	80D303B4: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm csXyz::~csXyz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wchain/d_a_obj_wchain/__dt__5csXyzFv.s"
}
#pragma pop

/* 80D303D0-80D303D4 0004+00 s=1 e=0 z=0  None .text      __ct__5csXyzFv */
csXyz::csXyz() {
    /* empty function */
}

/* 80D303D4-80D303D8 0004+00 s=1 e=0 z=0  None .text      __ct__4cXyzFv */
cXyz::cXyz() {
    /* empty function */
}

/* 80D303D8-80D30414 003C+00 s=2 e=0 z=0  None .text      __dt__4cXyzFv */
//	80D303F8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wchain/d_a_obj_wchain/__dt__4cXyzFv.s"
}
#pragma pop

/* 80D30414-80D30434 0020+00 s=1 e=0 z=0  None .text      daObjWchain_Create__FP10fopAc_ac_c */
//	80D30420: 80D2FFBC (create__13daObjWchain_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjWchain_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wchain/d_a_obj_wchain/daObjWchain_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D30434-80D3050C 00D8+00 s=1 e=0 z=0  None .text      __dt__13daObjWchain_cFv */
//	80D30458: 80D31924 (l_arcName)
//	80D3045C: 80D31924 (l_arcName)
//	80D30460: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
//	80D30468: 80D30394 (__dt__5csXyzFv)
//	80D3046C: 80D30394 (__dt__5csXyzFv)
//	80D30478: 80361CE8 (__destroy_arr)
//	80D30480: 80D303D8 (__dt__4cXyzFv)
//	80D30484: 80D303D8 (__dt__4cXyzFv)
//	80D30490: 80361CE8 (__destroy_arr)
//	80D30498: 80D303D8 (__dt__4cXyzFv)
//	80D3049C: 80D303D8 (__dt__4cXyzFv)
//	80D304A8: 80361CE8 (__destroy_arr)
//	80D304B4: 80D31A34 (__vt__19daObjWchain_shape_c)
//	80D304B8: 80D31A34 (__vt__19daObjWchain_shape_c)
//	80D304C8: 803CD97C (__vt__9J3DPacket)
//	80D304CC: 803CD97C (__vt__9J3DPacket)
//	80D304DC: 80018C8C (__dt__10fopAc_ac_cFv)
//	80D304EC: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjWchain_c::~daObjWchain_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wchain/d_a_obj_wchain/__dt__13daObjWchain_cFv.s"
}
#pragma pop

/* 80D3050C-80D30534 0028+00 s=1 e=0 z=0  None .text      daObjWchain_Delete__FP13daObjWchain_c */
//	80D3051C: 80D30434 (__dt__13daObjWchain_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjWchain_Delete(daObjWchain_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wchain/d_a_obj_wchain/daObjWchain_Delete__FP13daObjWchain_c.s"
}
#pragma pop

/* 80D30534-80D305E4 00B0+00 s=2 e=0 z=0  None .text      setMatrix__13daObjWchain_cFv */
//	80D3054C: 80D31924 (l_arcName)
//	80D30550: 80D31924 (l_arcName)
//	80D30554: 803DD470 (now__14mDoMtx_stack_c)
//	80D30558: 803DD470 (now__14mDoMtx_stack_c)
//	80D30568: 803468E8 (PSMTXTrans)
//	80D3056C: 803DD470 (now__14mDoMtx_stack_c)
//	80D30570: 803DD470 (now__14mDoMtx_stack_c)
//	80D30578: 8000C4CC (mDoMtx_ZrotM__FPA4_fs)
//	80D3057C: 803DD470 (now__14mDoMtx_stack_c)
//	80D30580: 803DD470 (now__14mDoMtx_stack_c)
//	80D30590: 8000C2A0 (mDoMtx_ZXYrotM__FPA4_fsss)
//	80D305A0: 8000CD9C (transM__14mDoMtx_stack_cFfff)
//	80D305A4: 803DD470 (now__14mDoMtx_stack_c)
//	80D305A8: 803DD470 (now__14mDoMtx_stack_c)
//	80D305B4: 803464B0 (PSMTXCopy)
//	80D305B8: 803DD470 (now__14mDoMtx_stack_c)
//	80D305BC: 803DD470 (now__14mDoMtx_stack_c)
//	80D305C8: 80346D6C (PSMTXMultVec)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWchain_c::setMatrix() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wchain/d_a_obj_wchain/setMatrix__13daObjWchain_cFv.s"
}
#pragma pop

/* 80D305E4-80D3080C 0228+00 s=1 e=0 z=0  None .text      getChainAngleZ__13daObjWchain_cFP4cXyzi */
//	80D30604: 80D31924 (l_arcName)
//	80D30608: 80D31924 (l_arcName)
//	80D30628: 80347138 (PSVECSquareMag)
//	80D30698: 80450AE0 (__float_nan)
//	80D3069C: 80450AE0 (__float_nan)
//	80D30708: 80450AE0 (__float_nan)
//	80D3070C: 80450AE0 (__float_nan)
//	80D30724: 80267954 (cM_rndF__Ff)
//	80D3075C: 80267954 (cM_rndF__Ff)
//	80D30784: 8026786C (cM_rnd__Fv)
//	80D30798: 80267954 (cM_rndF__Ff)
//	80D307C8: 80267954 (cM_rndF__Ff)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWchain_c::getChainAngleZ(cXyz* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wchain/d_a_obj_wchain/getChainAngleZ__13daObjWchain_cFP4cXyzi.s"
}
#pragma pop

/* 80D3080C-80D310AC 08A0+00 s=1 e=0 z=0  None .text      setChainPos__13daObjWchain_cFv */
//	80D30834: 803621C0 (_savegpr_22)
//	80D3083C: 80D31924 (l_arcName)
//	80D30840: 80D31924 (l_arcName)
//	80D30850: 804061C0 (g_dComIfG_gameInfo)
//	80D30854: 804061C0 (g_dComIfG_gameInfo)
//	80D308AC: 80266B34 (__mi__4cXyzCFRC3Vec)
//	80D308BC: 80266B84 (__ml__4cXyzCFf)
//	80D308E4: 80266B34 (__mi__4cXyzCFRC3Vec)
//	80D30900: 803DD470 (now__14mDoMtx_stack_c)
//	80D30904: 803DD470 (now__14mDoMtx_stack_c)
//	80D30914: 8000C3DC (mDoMtx_YrotS__FPA4_fs)
//	80D30918: 803DD470 (now__14mDoMtx_stack_c)
//	80D3091C: 803DD470 (now__14mDoMtx_stack_c)
//	80D30928: 80346D6C (PSMTXMultVec)
//	80D3093C: 80267674 (cM_atan2s__Fff)
//	80D30974: 80267674 (cM_atan2s__Fff)
//	80D3097C: 803DD470 (now__14mDoMtx_stack_c)
//	80D30980: 803DD470 (now__14mDoMtx_stack_c)
//	80D30990: 803468E8 (PSMTXTrans)
//	80D30994: 803DD470 (now__14mDoMtx_stack_c)
//	80D30998: 803DD470 (now__14mDoMtx_stack_c)
//	80D309A0: 8000C4CC (mDoMtx_ZrotM__FPA4_fs)
//	80D309A4: 803DD470 (now__14mDoMtx_stack_c)
//	80D309A8: 803DD470 (now__14mDoMtx_stack_c)
//	80D309B8: 8000C2A0 (mDoMtx_ZXYrotM__FPA4_fsss)
//	80D309BC: 803DD470 (now__14mDoMtx_stack_c)
//	80D309C0: 803DD470 (now__14mDoMtx_stack_c)
//	80D309CC: 80346D6C (PSMTXMultVec)
//	80D30A00: 803DD470 (now__14mDoMtx_stack_c)
//	80D30A04: 803DD470 (now__14mDoMtx_stack_c)
//	80D30A1C: 803650D0 (abs)
//	80D30A2C: 80D305E4 (getChainAngleZ__13daObjWchain_cFP4cXyzi)
//	80D30A48: 80266B34 (__mi__4cXyzCFRC3Vec)
//	80D30A58: 80266B84 (__ml__4cXyzCFf)
//	80D30AAC: 803468E8 (PSMTXTrans)
//	80D30AB8: 8000C4CC (mDoMtx_ZrotM__FPA4_fs)
//	80D30ACC: 8000C2A0 (mDoMtx_ZXYrotM__FPA4_fsss)
//	80D30ADC: 80346D6C (PSMTXMultVec)
//	80D30B18: 80270740 (cLib_chaseF__FPfff)
//	80D30B40: 804061C0 (g_dComIfG_gameInfo)
//	80D30B44: 804061C0 (g_dComIfG_gameInfo)
//	80D30B54: 80035360 (isSwitch__10dSv_info_cCFii)
//	80D30B6C: 80270740 (cLib_chaseF__FPfff)
//	80D30B9C: 80270740 (cLib_chaseF__FPfff)
//	80D30C5C: 803DD470 (now__14mDoMtx_stack_c)
//	80D30C60: 803DD470 (now__14mDoMtx_stack_c)
//	80D30C80: 8000C3DC (mDoMtx_YrotS__FPA4_fs)
//	80D30C94: 8026786C (cM_rnd__Fv)
//	80D30CA4: 8026786C (cM_rnd__Fv)
//	80D30CB4: 802675E4 (cM_rad2s__Ff)
//	80D30CB8: 80439A20 (sincosTable___5JMath)
//	80D30CBC: 80439A20 (sincosTable___5JMath)
//	80D30CD0: 802675E4 (cM_rad2s__Ff)
//	80D30CD8: 80439A20 (sincosTable___5JMath)
//	80D30CDC: 80439A20 (sincosTable___5JMath)
//	80D30CF8: 80430CF4 (Zero__4cXyz)
//	80D30CFC: 80430CF4 (Zero__4cXyz)
//	80D30D20: 803DD470 (now__14mDoMtx_stack_c)
//	80D30D24: 803DD470 (now__14mDoMtx_stack_c)
//	80D30D50: 80266B34 (__mi__4cXyzCFRC3Vec)
//	80D30D84: 80347138 (PSVECSquareMag)
//	80D30D90: 8026786C (cM_rnd__Fv)
//	80D30DA8: 80347090 (PSVECAdd)
//	80D30DD0: 80347090 (PSVECAdd)
//	80D30DE4: 803650D0 (abs)
//	80D30DF4: 80D305E4 (getChainAngleZ__13daObjWchain_cFP4cXyzi)
//	80D30E0C: 80266F48 (normalizeZP__4cXyzFv)
//	80D30E1C: 80266B84 (__ml__4cXyzCFf)
//	80D30E2C: 80266AE4 (__pl__4cXyzCFRC3Vec)
//	80D30E54: 80266B34 (__mi__4cXyzCFRC3Vec)
//	80D30E64: 80266B84 (__ml__4cXyzCFf)
//	80D30E8C: 80346D6C (PSMTXMultVec)
//	80D30EA0: 80267674 (cM_atan2s__Fff)
//	80D30ED4: 80267674 (cM_atan2s__Fff)
//	80D30F20: 803650D0 (abs)
//	80D30F30: 80D305E4 (getChainAngleZ__13daObjWchain_cFP4cXyzi)
//	80D30F64: 80266B34 (__mi__4cXyzCFRC3Vec)
//	80D30F98: 80347090 (PSVECAdd)
//	80D30FA4: 80266F48 (normalizeZP__4cXyzFv)
//	80D30FB4: 80266B84 (__ml__4cXyzCFf)
//	80D30FC4: 80266AE4 (__pl__4cXyzCFRC3Vec)
//	80D30FEC: 80266B34 (__mi__4cXyzCFRC3Vec)
//	80D30FFC: 80266B84 (__ml__4cXyzCFf)
//	80D31018: 803DD470 (now__14mDoMtx_stack_c)
//	80D3101C: 803DD470 (now__14mDoMtx_stack_c)
//	80D31028: 80346D6C (PSMTXMultVec)
//	80D3103C: 80267674 (cM_atan2s__Fff)
//	80D31074: 80267674 (cM_atan2s__Fff)
//	80D31098: 8036220C (_restgpr_22)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWchain_c::setChainPos() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wchain/d_a_obj_wchain/setChainPos__13daObjWchain_cFv.s"
}
#pragma pop

/* 80D310AC-80D313F8 034C+00 s=1 e=0 z=0  None .text      execute__13daObjWchain_cFv */
//	80D310C4: 80D31924 (l_arcName)
//	80D310C8: 80D31924 (l_arcName)
//	80D310EC: 8002D06C (dComIfGp_getReverb__Fi)
//	80D31100: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D31104: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D3112C: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80D31150: 8002D06C (dComIfGp_getReverb__Fi)
//	80D31164: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D31168: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D31190: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80D311AC: 8001DD1C (roofCheck__11fopAcM_rc_cFPC4cXyz)
//	80D311B8: 80450CD4 (mRoofY__11fopAcM_rc_c)
//	80D311BC: 80450CD4 (mRoofY__11fopAcM_rc_c)
//	80D311FC: 80D3080C (setChainPos__13daObjWchain_cFv)
//	80D31200: 804061C0 (g_dComIfG_gameInfo)
//	80D31204: 804061C0 (g_dComIfG_gameInfo)
//	80D3127C: 80D30534 (setMatrix__13daObjWchain_cFv)
//	80D31294: 8002D06C (dComIfGp_getReverb__Fi)
//	80D312A8: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D312AC: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D312D4: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80D312F4: 804061C0 (g_dComIfG_gameInfo)
//	80D312F8: 804061C0 (g_dComIfG_gameInfo)
//	80D31308: 80035360 (isSwitch__10dSv_info_cCFii)
//	80D31314: 804061C0 (g_dComIfG_gameInfo)
//	80D31318: 804061C0 (g_dComIfG_gameInfo)
//	80D31328: 800352B0 (offSwitch__10dSv_info_cFii)
//	80D31330: 804061C0 (g_dComIfG_gameInfo)
//	80D31334: 804061C0 (g_dComIfG_gameInfo)
//	80D31344: 80035200 (onSwitch__10dSv_info_cFii)
//	80D3134C: 804061C0 (g_dComIfG_gameInfo)
//	80D31350: 804061C0 (g_dComIfG_gameInfo)
//	80D31360: 80035200 (onSwitch__10dSv_info_cFii)
//	80D31390: 8002D06C (dComIfGp_getReverb__Fi)
//	80D313A4: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D313A8: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D313D0: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWchain_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wchain/d_a_obj_wchain/execute__13daObjWchain_cFv.s"
}
#pragma pop

/* 80D313F8-80D31418 0020+00 s=1 e=0 z=0  None .text      daObjWchain_Execute__FP13daObjWchain_c */
//	80D31404: 80D310AC (execute__13daObjWchain_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjWchain_Execute(daObjWchain_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wchain/d_a_obj_wchain/daObjWchain_Execute__FP13daObjWchain_c.s"
}
#pragma pop

/* 80D31418-80D31810 03F8+00 s=1 e=0 z=0  None .text      draw__19daObjWchain_shape_cFv */
//	80D31438: 803621B8 (_savegpr_20)
//	80D3143C: 80D31924 (l_arcName)
//	80D31440: 80D31924 (l_arcName)
//	80D31468: 80434AC8 (j3dSys)
//	80D3146C: 80434AC8 (j3dSys)
//	80D31488: 804515D0 (sOldVcdVatCmd__8J3DShape)
//	80D3148C: 804515D0 (sOldVcdVatCmd__8J3DShape)
//	80D314A8: 80315300 (loadPreDrawSetting__8J3DShapeCFv)
//	80D314DC: 8035D960 (GXSetChanAmbColor)
//	80D314E0: 80450608 (g_whiteColor)
//	80D314E4: 80450608 (g_whiteColor)
//	80D314F4: 8035DA48 (GXSetChanMatColor)
//	80D314F8: 801A75C0 (dKy_setLight_again__Fv)
//	80D31500: 801A8650 (dKy_GxFog_tevstr_set__FP12dKy_tevstr_c)
//	80D3150C: 8035D8E4 (GXLoadLightObjImm)
//	80D31514: 80434AC8 (j3dSys)
//	80D31518: 80434AC8 (j3dSys)
//	80D3151C: 803DD470 (now__14mDoMtx_stack_c)
//	80D31520: 803DD470 (now__14mDoMtx_stack_c)
//	80D31538: 803464B0 (PSMTXCopy)
//	80D31540: 8000CDD4 (transM__14mDoMtx_stack_cFRC4cXyz)
//	80D3154C: 8000C4CC (mDoMtx_ZrotM__FPA4_fs)
//	80D31560: 8000C2A0 (mDoMtx_ZXYrotM__FPA4_fsss)
//	80D31570: 8000CD9C (transM__14mDoMtx_stack_cFfff)
//	80D3157C: 8036024C (GXLoadPosMtxImm)
//	80D31588: 8036029C (GXLoadNrmMtxImm)
//	80D315DC: 80266B34 (__mi__4cXyzCFRC3Vec)
//	80D315FC: 80347138 (PSVECSquareMag)
//	80D3166C: 80450AE0 (__float_nan)
//	80D31670: 80450AE0 (__float_nan)
//	80D316DC: 80450AE0 (__float_nan)
//	80D316E0: 80450AE0 (__float_nan)
//	80D31718: 80267150 (atan2sY_XZ__4cXyzCFv)
//	80D31734: 802673F4 (__ct__5csXyzFsss)
//	80D31748: 803470D8 (PSVECScale)
//	80D3174C: 80434AC8 (j3dSys)
//	80D31750: 80434AC8 (j3dSys)
//	80D31754: 803DD470 (now__14mDoMtx_stack_c)
//	80D31758: 803DD470 (now__14mDoMtx_stack_c)
//	80D31770: 803464B0 (PSMTXCopy)
//	80D31778: 8000CDD4 (transM__14mDoMtx_stack_cFRC4cXyz)
//	80D31780: 8000CF44 (ZXYrotM__14mDoMtx_stack_cFRC5csXyz)
//	80D31790: 8000CD9C (transM__14mDoMtx_stack_cFfff)
//	80D3179C: 8036024C (GXLoadPosMtxImm)
//	80D317A8: 8036029C (GXLoadNrmMtxImm)
//	80D317D0: 80347090 (PSVECAdd)
//	80D317FC: 80362204 (_restgpr_20)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWchain_shape_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wchain/d_a_obj_wchain/draw__19daObjWchain_shape_cFv.s"
}
#pragma pop

/* 80D31810-80D318A0 0090+00 s=1 e=0 z=0  None .text      draw__13daObjWchain_cFv */
//	80D31824: 8042CA54 (g_env_light)
//	80D31828: 8042CA54 (g_env_light)
//	80D31838: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80D3183C: 8042CA54 (g_env_light)
//	80D31840: 8042CA54 (g_env_light)
//	80D31850: 801A4DA0
//(setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c) 	80D31858:
// 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel) 	80D3185C: 8042CA54 (g_env_light) 	80D31860:
// 8042CA54 (g_env_light) 	80D3186C: 801A4DA0
//(setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c) 	80D31870:
// 804061C0 (g_dComIfG_gameInfo) 	80D31874: 804061C0 (g_dComIfG_gameInfo) 	80D31884: 8032548C
//(entryImm__13J3DDrawBufferFP9J3DPacketUs)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWchain_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wchain/d_a_obj_wchain/draw__13daObjWchain_cFv.s"
}
#pragma pop

/* 80D318A0-80D318C0 0020+00 s=1 e=0 z=0  None .text      daObjWchain_Draw__FP13daObjWchain_c */
//	80D318AC: 80D31810 (draw__13daObjWchain_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjWchain_Draw(daObjWchain_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wchain/d_a_obj_wchain/daObjWchain_Draw__FP13daObjWchain_c.s"
}
#pragma pop

/* 80D318C0-80D3191C 005C+00 s=1 e=0 z=0  None .text      __dt__19daObjWchain_shape_cFv */
//	80D318D8: 80D31A34 (__vt__19daObjWchain_shape_c)
//	80D318DC: 80D31A34 (__vt__19daObjWchain_shape_c)
//	80D318E8: 803CD97C (__vt__9J3DPacket)
//	80D318EC: 803CD97C (__vt__9J3DPacket)
//	80D31900: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjWchain_shape_c::~daObjWchain_shape_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wchain/d_a_obj_wchain/__dt__19daObjWchain_shape_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D3192C-80D31930 0004+00 s=0 e=0 z=0  None .rodata    @3744 */
SECTION_RODATA u32 const lit_3744 = 0xC3480000;

/* 80D31930-80D31934 0004+00 s=0 e=0 z=0  None .rodata    @3745 */
SECTION_RODATA u32 const lit_3745 = 0xC2340000;

/* 80D31934-80D31938 0004+00 s=0 e=0 z=0  None .rodata    @3746 */
SECTION_RODATA u32 const lit_3746 = 0x43480000;

/* 80D31938-80D3193C 0004+00 s=0 e=0 z=0  None .rodata    @3747 */
SECTION_RODATA u32 const lit_3747 = 0x44480000;

/* 80D3193C-80D31940 0004+00 s=0 e=0 z=0  None .rodata    @3748 */
SECTION_RODATA u32 const lit_3748 = 0x42570000;

/* 80D31940-80D31944 0004+00 s=0 e=0 z=0  None .rodata    @3749 */
SECTION_RODATA u32 const lit_3749 = 0x438C0000;

/* 80D31944-80D31948 0004+00 s=0 e=0 z=0  None .rodata    @3750 */
SECTION_RODATA u32 const lit_3750 = 0x42C80000;

/* 80D31948-80D3194C 0004+00 s=0 e=0 z=0  None .rodata    @3751 */
SECTION_RODATA u32 const lit_3751 = 0x437A0000;

/* 80D3194C-80D31950 0004+00 s=0 e=0 z=0  None .rodata    @3752 */
SECTION_RODATA u32 const lit_3752 = 0x44160000;

/* 80D31950-80D31954 0004+00 s=0 e=0 z=0  None .rodata    @3753 */
SECTION_RODATA u8 const lit_3753[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80D31954-80D31958 0004+00 s=0 e=0 z=0  None .rodata    @3754 */
SECTION_RODATA u32 const lit_3754 = 0xC0E00000;

/* 80D31958-80D3195C 0004+00 s=0 e=0 z=0  None .rodata    @3755 */
SECTION_RODATA u32 const lit_3755 = 0x46800000;

/* 80D3195C-80D31960 0004+00 s=0 e=0 z=0  None .rodata    @3756 */
SECTION_RODATA u32 const lit_3756 = 0x45000000;

/* 80D31960-80D31964 0004+00 s=0 e=0 z=0  None .rodata    @3757 */
SECTION_RODATA u32 const lit_3757 = 0x418C0000;

/* 80D31964-80D3196C 0008+00 s=0 e=0 z=0  None .rodata    @3759 */
SECTION_RODATA u8 const lit_3759[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80D3196C-80D31978 000C+00 s=0 e=0 z=0  None .rodata    eyeOffset$3803 */
SECTION_RODATA u8 const data_80D3196C[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x57, 0x00, 0x00,
};

/* 80D31978-80D3197C 0004+00 s=0 e=0 z=0  None .rodata    @3819 */
SECTION_RODATA u32 const lit_3819 = 0x410C0000;

/* 80D3197C-80D31984 0008+00 s=0 e=0 z=0  None .rodata    @3863 */
SECTION_RODATA u8 const lit_3863[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D31984-80D3198C 0008+00 s=0 e=0 z=0  None .rodata    @3864 */
SECTION_RODATA u8 const lit_3864[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D3198C-80D31994 0008+00 s=0 e=0 z=0  None .rodata    @3865 */
SECTION_RODATA u8 const lit_3865[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D31994-80D31998 0004+00 s=0 e=0 z=0  None .rodata    @3866 */
SECTION_RODATA u32 const lit_3866 = 0x44000000;

/* 80D31998-80D3199C 0004+00 s=0 e=0 z=0  None .rodata    @3867 */
SECTION_RODATA u32 const lit_3867 = 0x3F000000;

/* 80D3199C-80D319A8 000C+00 s=0 e=0 z=0  None .rodata    currentOffset$3872 */
SECTION_RODATA u8 const data_80D3199C[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC2, 0x57, 0x00, 0x00,
};

/* 80D319A8-80D319B4 000C+00 s=0 e=0 z=0  None .rodata    chainOffset$3873 */
SECTION_RODATA u8 const data_80D319A8[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC1, 0x8C, 0x00, 0x00,
};

/* 80D319B4-80D319B8 0004+00 s=0 e=0 z=0  None .rodata    @4154 */
SECTION_RODATA u32 const lit_4154 = 0x3F400000;

/* 80D319B8-80D319BC 0004+00 s=0 e=0 z=0  None .rodata    @4155 */
SECTION_RODATA u32 const lit_4155 = 0x3F800000;

/* 80D319BC-80D319C0 0004+00 s=0 e=0 z=0  None .rodata    @4156 */
SECTION_RODATA u32 const lit_4156 = 0x40A00000;

/* 80D319C0-80D319C4 0004+00 s=0 e=0 z=0  None .rodata    @4157 */
SECTION_RODATA u32 const lit_4157 = 0x41F00000;

/* 80D319C4-80D319C8 0004+00 s=0 e=0 z=0  None .rodata    @4158 */
SECTION_RODATA u32 const lit_4158 = 0x3D6A0EA1;

/* 80D319C8-80D319CC 0004+00 s=0 e=0 z=0  None .rodata    @4159 */
SECTION_RODATA u32 const lit_4159 = 0x3E4CCCCD;

/* 80D319CC-80D319D0 0004+00 s=0 e=0 z=0  None .rodata    @4160 */
SECTION_RODATA u32 const lit_4160 = 0x40C90FDB;

/* 80D319D0-80D319D4 0004+00 s=0 e=0 z=0  None .rodata    @4161 */
SECTION_RODATA u32 const lit_4161 = 0x3D23D70A;

/* 80D319D4-80D319D8 0004+00 s=0 e=0 z=0  None .rodata    @4252 */
SECTION_RODATA u32 const lit_4252 = 0xBF800000;

/* 80D319D8-80D319DC 0004+00 s=0 e=0 z=0  None .rodata    @4253 */
SECTION_RODATA u32 const lit_4253 = 0x3DCCCCCD;

/* 80D319DC-80D319E0 0004+00 s=0 e=0 z=0  None .rodata    @4254 */
SECTION_RODATA u32 const lit_4254 = 0x41700000;

/* 80D319E0-80D319E4 0004+00 s=0 e=0 z=0  None .rodata    @4364 */
SECTION_RODATA u32 const lit_4364 = 0xC10C0000;
