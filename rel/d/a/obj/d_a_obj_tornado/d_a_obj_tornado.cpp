//
// Generated By: dol2asm
// Translation Unit: d_a_obj_tornado
//

#include "rel/d/a/obj/d_a_obj_tornado/d_a_obj_tornado.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct cXyz {
    /* 80266EF4 */ void normalize();
    /* 802670AC */ void isZero() const;
};

struct csXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daObjTrnd_c {
    /* 80D1B998 */ void setPntWind();
    /* 80D1BA0C */ void cutPntWind();
    /* 80D1BA30 */ void movePntWind();
    /* 80D1BC40 */ void setCpsInfo();
    /* 80D1BE04 */ void initBaseMtx();
    /* 80D1BE24 */ void setBaseMtx();
    /* 80D1BE6C */ void Create();
    /* 80D1BFB0 */ void create();
    /* 80D1C0F0 */ void execute();
    /* 80D1C290 */ bool draw();
    /* 80D1C298 */ void _delete();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCps {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
};

struct dCcD_Cps {
    /* 800847D0 */ void Set(dCcD_SrcCps const&);
};

struct cM3dGCpsS {};

struct cM3dGCps {
    /* 8026EF88 */ cM3dGCps();
    /* 8026F03C */ void Set(cM3dGCpsS const&);
};

struct cM3dGAab {
    /* 80D1C0A8 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct Vec {};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct WIND_INFLUENCE {};

//
// Forward References:
//

static void daObjTrnd_Draw(daObjTrnd_c*);
static void daObjTrnd_Execute(daObjTrnd_c*);
static void daObjTrnd_Delete(daObjTrnd_c*);
static void daObjTrnd_Create(daObjTrnd_c*);

extern "C" void setPntWind__11daObjTrnd_cFv();
extern "C" void cutPntWind__11daObjTrnd_cFv();
extern "C" void movePntWind__11daObjTrnd_cFv();
extern "C" void setCpsInfo__11daObjTrnd_cFv();
extern "C" void initBaseMtx__11daObjTrnd_cFv();
extern "C" void setBaseMtx__11daObjTrnd_cFv();
extern "C" void Create__11daObjTrnd_cFv();
extern "C" void create__11daObjTrnd_cFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void execute__11daObjTrnd_cFv();
extern "C" bool draw__11daObjTrnd_cFv();
extern "C" void _delete__11daObjTrnd_cFv();
extern "C" static void daObjTrnd_Draw__FP11daObjTrnd_c();
extern "C" static void daObjTrnd_Execute__FP11daObjTrnd_c();
extern "C" static void daObjTrnd_Delete__FP11daObjTrnd_c();
extern "C" static void daObjTrnd_Create__FP11daObjTrnd_c();
extern "C" extern u32 const lit_3629;
extern "C" extern u32 const lit_3630;
extern "C" extern u32 const lit_3631;
extern "C" extern u32 const lit_3679;
extern "C" extern u32 const lit_3680;
extern "C" extern u32 const lit_3681[1 + 1 /* padding */];
extern "C" extern u8 const lit_3682[8];
extern "C" extern u8 const lit_3683[8];
extern "C" extern u8 const lit_3684[8];
extern "C" extern u32 const lit_3724;
extern "C" extern u32 const lit_3725;
extern "C" extern u32 const lit_3726;
extern "C" extern u32 const lit_3727;
extern "C" extern u32 const lit_3728;
extern "C" extern u32 const lit_3762;
extern "C" extern u32 const lit_3908;
extern "C" extern u32 const lit_3909;
extern "C" extern u32 const lit_3910;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_Tornado[12];
extern "C" extern void* __vt__8cM3dGAab[3];

//
// External References:
//

void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void dKyw_pntwind_set(WIND_INFLUENCE*);
void dKyw_pntwind_cut(WIND_INFLUENCE*);
void dKyw_custom_windpower(f32);
void dKyw_evt_wind_set(s16, s16);
void dKyr_get_vectle_calc(cXyz*, cXyz*, cXyz*);
void cLib_addCalc(f32*, f32, f32, f32, f32);
void cLib_chaseF(f32*, f32, f32);
void operator delete(void*);

extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void dKyw_pntwind_set__FP14WIND_INFLUENCE();
extern "C" void dKyw_pntwind_cut__FP14WIND_INFLUENCE();
extern "C" void dKyw_custom_windpower__Ff();
extern "C" void dKyw_evt_wind_set__Fss();
extern "C" void dKyr_get_vectle_calc__FP4cXyzP4cXyzP4cXyz();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CpsFRC11dCcD_SrcCps();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void normalize__4cXyzFv();
extern "C" void isZero__4cXyzCFv();
extern "C" void __ct__8cM3dGCpsFv();
extern "C" void Set__8cM3dGCpsFRC9cM3dGCpsS();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void cLib_chaseF__FPfff();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXMultVec();
extern "C" void PSVECScale();
extern "C" void PSVECSquareDistance();
extern "C" void __cvt_fp2unsigned();
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
extern "C" extern f32 Zero__4cXyz[3];
extern "C" extern u32 __float_nan;
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80D1C354-80D1C358 0004+00 s=5 e=0 z=0  None .rodata    @3628 */
SECTION_RODATA static u8 const lit_3628[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80D1B998-80D1BA0C 0074+00 s=2 e=0 z=0  None .text      setPntWind__11daObjTrnd_cFv */
//	80D1B9A4: 80D1C354 (lit_3628)
//	80D1B9A8: 80D1C354 (lit_3628)
//	80D1B9F8: 8005ADFC (dKyw_pntwind_set__FP14WIND_INFLUENCE)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTrnd_c::setPntWind() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado/d_a_obj_tornado/setPntWind__11daObjTrnd_cFv.s"
}
#pragma pop

/* 80D1BA0C-80D1BA30 0024+00 s=2 e=0 z=0  None .text      cutPntWind__11daObjTrnd_cFv */
//	80D1BA1C: 8005AE58 (dKyw_pntwind_cut__FP14WIND_INFLUENCE)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTrnd_c::cutPntWind() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado/d_a_obj_tornado/cutPntWind__11daObjTrnd_cFv.s"
}
#pragma pop

/* 80D1BA30-80D1BC40 0210+00 s=1 e=0 z=0  None .text      movePntWind__11daObjTrnd_cFv */
//	80D1BA48: 80D1C354 (lit_3628)
//	80D1BA4C: 80D1C354 (lit_3628)
//	80D1BA8C: 8005B760 (dKyr_get_vectle_calc__FP4cXyzP4cXyzP4cXyz)
//	80D1BAD8: 8026F97C (cLib_addCalc__FPfffff)
//	80D1BAF4: 8026F97C (cLib_addCalc__FPfffff)
//	80D1BB10: 8026F97C (cLib_addCalc__FPfffff)
//	80D1BB1C: 8034739C (PSVECSquareDistance)
//	80D1BB8C: 80450AE0 (__float_nan)
//	80D1BB90: 80450AE0 (__float_nan)
//	80D1BBFC: 80450AE0 (__float_nan)
//	80D1BC00: 80450AE0 (__float_nan)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTrnd_c::movePntWind() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado/d_a_obj_tornado/movePntWind__11daObjTrnd_cFv.s"
}
#pragma pop

/* 80D1BC40-80D1BE04 01C4+00 s=1 e=0 z=0  None .text      setCpsInfo__11daObjTrnd_cFv */
//	80D1BC58: 80D1C354 (lit_3628)
//	80D1BC5C: 80D1C354 (lit_3628)
//	80D1BC7C: 80270740 (cLib_chaseF__FPfff)
//	80D1BCB0: 8000CD64 (transS__14mDoMtx_stack_cFRC4cXyz)
//	80D1BCB8: 8000CF44 (ZXYrotM__14mDoMtx_stack_cFRC5csXyz)
//	80D1BCBC: 803DD470 (now__14mDoMtx_stack_c)
//	80D1BCC0: 803DD470 (now__14mDoMtx_stack_c)
//	80D1BCCC: 80346D6C (PSMTXMultVec)
//	80D1BCD8: 8026F03C (Set__8cM3dGCpsFRC9cM3dGCpsS)
//	80D1BD10: 802670AC (isZero__4cXyzCFv)
//	80D1BD24: 80266EF4 (normalize__4cXyzFv)
//	80D1BD2C: 80430CF4 (Zero__4cXyz)
//	80D1BD30: 80430CF4 (Zero__4cXyz)
//	80D1BD5C: 803470D8 (PSVECScale)
//	80D1BD7C: 80D1BA30 (movePntWind__11daObjTrnd_cFv)
//	80D1BDA8: 803620AC (__cvt_fp2unsigned)
//	80D1BDBC: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D1BDC0: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D1BDE8: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTrnd_c::setCpsInfo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado/d_a_obj_tornado/setCpsInfo__11daObjTrnd_cFv.s"
}
#pragma pop

/* 80D1BE04-80D1BE24 0020+00 s=1 e=0 z=0  None .text      initBaseMtx__11daObjTrnd_cFv */
//	80D1BE10: 80D1BE24 (setBaseMtx__11daObjTrnd_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTrnd_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado/d_a_obj_tornado/initBaseMtx__11daObjTrnd_cFv.s"
}
#pragma pop

/* 80D1BE24-80D1BE6C 0048+00 s=2 e=0 z=0  None .text      setBaseMtx__11daObjTrnd_cFv */
//	80D1BE3C: 8000CD64 (transS__14mDoMtx_stack_cFRC4cXyz)
//	80D1BE44: 8000CF44 (ZXYrotM__14mDoMtx_stack_cFRC5csXyz)
//	80D1BE48: 803DD470 (now__14mDoMtx_stack_c)
//	80D1BE4C: 803DD470 (now__14mDoMtx_stack_c)
//	80D1BE54: 803464B0 (PSMTXCopy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTrnd_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado/d_a_obj_tornado/setBaseMtx__11daObjTrnd_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D1C3B4-80D1C400 004C+00 s=1 e=0 z=0  None .data      l_cps_src */
SECTION_DATA static u8 l_cps_src[76] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x45, 0x3B, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x96, 0x00, 0x00,
};

/* 80D1BE6C-80D1BFB0 0144+00 s=1 e=0 z=0  None .text      Create__11daObjTrnd_cFv */
//	80D1BE84: 80D1C354 (lit_3628)
//	80D1BE88: 80D1C354 (lit_3628)
//	80D1BE9C: 80D1BE04 (initBaseMtx__11daObjTrnd_cFv)
//	80D1BEB8: 80083860 (Init__9dCcD_SttsFiiP10fopAc_ac_c)
//	80D1BEC0: 80D1C3B4 (l_cps_src)
//	80D1BEC4: 80D1C3B4 (l_cps_src)
//	80D1BEC8: 800847D0 (Set__8dCcD_CpsFRC11dCcD_SrcCps)
//	80D1BF1C: 8001A548 (fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff)
//	80D1BF90: 80D1B998 (setPntWind__11daObjTrnd_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTrnd_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado/d_a_obj_tornado/Create__11daObjTrnd_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D1C400-80D1C420 0020+00 s=1 e=0 z=0  None .data      l_daObjTrnd_Method */
SECTION_DATA static void* l_daObjTrnd_Method[8] = {
    (void*)daObjTrnd_Create__FP11daObjTrnd_c,
    (void*)daObjTrnd_Delete__FP11daObjTrnd_c,
    (void*)daObjTrnd_Execute__FP11daObjTrnd_c,
    (void*)NULL,
    (void*)daObjTrnd_Draw__FP11daObjTrnd_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D1C420-80D1C450 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Tornado */
SECTION_DATA void* g_profile_Obj_Tornado[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x015B0000, (void*)&g_fpcLf_Method,
    (void*)0x00000770, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01BC0000, (void*)&l_daObjTrnd_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80D1C450-80D1C45C 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80D1BFB0-80D1C0A8 00F8+00 s=1 e=0 z=0  None .text      create__11daObjTrnd_cFv */
//	80D1BFE0: 80018B64 (__ct__10fopAc_ac_cFv)
//	80D1BFE4: 803C3728 (__vt__9cCcD_Stts)
//	80D1BFE8: 803C3728 (__vt__9cCcD_Stts)
//	80D1BFF4: 80083760 (__ct__10dCcD_GSttsFv)
//	80D1BFF8: 803AC2E4 (__vt__9dCcD_Stts)
//	80D1BFFC: 803AC2E4 (__vt__9dCcD_Stts)
//	80D1C014: 80083A28 (__ct__12dCcD_GObjInfFv)
//	80D1C018: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80D1C01C: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80D1C024: 80D1C450 (__vt__8cM3dGAab)
//	80D1C028: 80D1C450 (__vt__8cM3dGAab)
//	80D1C034: 8026EF88 (__ct__8cM3dGCpsFv)
//	80D1C038: 803C3608 (__vt__12cCcD_CpsAttr)
//	80D1C03C: 803C3608 (__vt__12cCcD_CpsAttr)
//	80D1C04C: 803AC170 (__vt__8dCcD_Cps)
//	80D1C050: 803AC170 (__vt__8dCcD_Cps)
//	80D1C078: 80D1BE6C (Create__11daObjTrnd_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTrnd_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado/d_a_obj_tornado/func_80D1BFB0.s"
}
#pragma pop

/* 80D1C0A8-80D1C0F0 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
//	80D1C0C0: 80D1C450 (__vt__8cM3dGAab)
//	80D1C0C4: 80D1C450 (__vt__8cM3dGAab)
//	80D1C0D4: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado/d_a_obj_tornado/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80D1C0F0-80D1C290 01A0+00 s=1 e=0 z=0  None .text      execute__11daObjTrnd_cFv */
//	80D1C108: 80D1C354 (lit_3628)
//	80D1C10C: 80D1C354 (lit_3628)
//	80D1C120: 804061C0 (g_dComIfG_gameInfo)
//	80D1C124: 804061C0 (g_dComIfG_gameInfo)
//	80D1C130: 80035360 (isSwitch__10dSv_info_cCFii)
//	80D1C154: 80D1BA0C (cutPntWind__11daObjTrnd_cFv)
//	80D1C16C: 8026F97C (cLib_addCalc__FPfffff)
//	80D1C1AC: 8026F97C (cLib_addCalc__FPfffff)
//	80D1C1C8: 8026F97C (cLib_addCalc__FPfffff)
//	80D1C20C: 80D1B998 (setPntWind__11daObjTrnd_cFv)
//	80D1C21C: 80D1BA0C (cutPntWind__11daObjTrnd_cFv)
//	80D1C228: 8005B61C (dKyw_evt_wind_set__Fss)
//	80D1C230: 8005B60C (dKyw_custom_windpower__Ff)
//	80D1C238: 80D1BC40 (setCpsInfo__11daObjTrnd_cFv)
//	80D1C240: 80D1BE24 (setBaseMtx__11daObjTrnd_cFv)
//	80D1C25C: 8026F03C (Set__8cM3dGCpsFRC9cM3dGCpsS)
//	80D1C260: 804061C0 (g_dComIfG_gameInfo)
//	80D1C264: 804061C0 (g_dComIfG_gameInfo)
//	80D1C270: 80264BA8 (Set__4cCcSFP8cCcD_Obj)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTrnd_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado/d_a_obj_tornado/execute__11daObjTrnd_cFv.s"
}
#pragma pop

/* 80D1C290-80D1C298 0008+00 s=1 e=0 z=0  None .text      draw__11daObjTrnd_cFv */
bool daObjTrnd_c::draw() {
    return true;
}

/* 80D1C298-80D1C2CC 0034+00 s=1 e=0 z=0  None .text      _delete__11daObjTrnd_cFv */
//	80D1C2A8: 8042CA54 (g_env_light)
//	80D1C2AC: 8042CA54 (g_env_light)
//	80D1C2B4: 80D1BA0C (cutPntWind__11daObjTrnd_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjTrnd_c::_delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado/d_a_obj_tornado/_delete__11daObjTrnd_cFv.s"
}
#pragma pop

/* 80D1C2CC-80D1C2EC 0020+00 s=1 e=0 z=0  None .text      daObjTrnd_Draw__FP11daObjTrnd_c */
//	80D1C2D8: 80D1C290 (draw__11daObjTrnd_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjTrnd_Draw(daObjTrnd_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado/d_a_obj_tornado/daObjTrnd_Draw__FP11daObjTrnd_c.s"
}
#pragma pop

/* 80D1C2EC-80D1C30C 0020+00 s=1 e=0 z=0  None .text      daObjTrnd_Execute__FP11daObjTrnd_c */
//	80D1C2F8: 80D1C0F0 (execute__11daObjTrnd_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjTrnd_Execute(daObjTrnd_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado/d_a_obj_tornado/daObjTrnd_Execute__FP11daObjTrnd_c.s"
}
#pragma pop

/* 80D1C30C-80D1C32C 0020+00 s=1 e=0 z=0  None .text      daObjTrnd_Delete__FP11daObjTrnd_c */
//	80D1C318: 80D1C298 (_delete__11daObjTrnd_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjTrnd_Delete(daObjTrnd_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado/d_a_obj_tornado/daObjTrnd_Delete__FP11daObjTrnd_c.s"
}
#pragma pop

/* 80D1C32C-80D1C34C 0020+00 s=1 e=0 z=0  None .text      daObjTrnd_Create__FP11daObjTrnd_c */
//	80D1C338: 80D1BFB0 (create__11daObjTrnd_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjTrnd_Create(daObjTrnd_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado/d_a_obj_tornado/daObjTrnd_Create__FP11daObjTrnd_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D1C358-80D1C35C 0004+00 s=0 e=0 z=0  None .rodata    @3629 */
SECTION_RODATA u32 const lit_3629 = 0x3F800000;

/* 80D1C35C-80D1C360 0004+00 s=0 e=0 z=0  None .rodata    @3630 */
SECTION_RODATA u32 const lit_3630 = 0x43960000;

/* 80D1C360-80D1C364 0004+00 s=0 e=0 z=0  None .rodata    @3631 */
SECTION_RODATA u32 const lit_3631 = 0x3E4CCCCD;

/* 80D1C364-80D1C368 0004+00 s=0 e=0 z=0  None .rodata    @3679 */
SECTION_RODATA u32 const lit_3679 = 0x40000000;

/* 80D1C368-80D1C36C 0004+00 s=0 e=0 z=0  None .rodata    @3680 */
SECTION_RODATA u32 const lit_3680 = 0x3DCCCCCD;

/* 80D1C36C-80D1C374 0004+04 s=0 e=0 z=0  None .rodata    @3681 */
SECTION_RODATA u32 const lit_3681[1 + 1 /* padding */] = {
    0x3F000000,
    /* padding */
    0x00000000,
};

/* 80D1C374-80D1C37C 0008+00 s=0 e=0 z=0  None .rodata    @3682 */
SECTION_RODATA u8 const lit_3682[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D1C37C-80D1C384 0008+00 s=0 e=0 z=0  None .rodata    @3683 */
SECTION_RODATA u8 const lit_3683[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D1C384-80D1C38C 0008+00 s=0 e=0 z=0  None .rodata    @3684 */
SECTION_RODATA u8 const lit_3684[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D1C38C-80D1C390 0004+00 s=0 e=0 z=0  None .rodata    @3724 */
SECTION_RODATA u32 const lit_3724 = 0x3D4CCCCD;

/* 80D1C390-80D1C394 0004+00 s=0 e=0 z=0  None .rodata    @3725 */
SECTION_RODATA u32 const lit_3725 = 0x453B8000;

/* 80D1C394-80D1C398 0004+00 s=0 e=0 z=0  None .rodata    @3726 */
SECTION_RODATA u32 const lit_3726 = 0x41F00000;

/* 80D1C398-80D1C39C 0004+00 s=0 e=0 z=0  None .rodata    @3727 */
SECTION_RODATA u32 const lit_3727 = 0x42FE0000;

/* 80D1C39C-80D1C3A0 0004+00 s=0 e=0 z=0  None .rodata    @3728 */
SECTION_RODATA u32 const lit_3728 = 0xBF800000;

/* 80D1C3A0-80D1C3A4 0004+00 s=0 e=0 z=0  None .rodata    @3762 */
SECTION_RODATA u32 const lit_3762 = 0xC3960000;

/* 80D1C3A4-80D1C3A8 0004+00 s=0 e=0 z=0  None .rodata    @3908 */
SECTION_RODATA u32 const lit_3908 = 0x3E99999A;

/* 80D1C3A8-80D1C3AC 0004+00 s=0 e=0 z=0  None .rodata    @3909 */
SECTION_RODATA u32 const lit_3909 = 0x3A83126F;

/* 80D1C3AC-80D1C3B0 0004+00 s=0 e=0 z=0  None .rodata    @3910 */
SECTION_RODATA u32 const lit_3910 = 0x3F666666;

/* 80D1C3B0-80D1C3B1 0001+00 s=0 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80D1C3B0 = "";
#pragma pop
