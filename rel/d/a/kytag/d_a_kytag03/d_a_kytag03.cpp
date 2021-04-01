//
// Generated By: dol2asm
// Translation Unit: d_a_kytag03
//

#include "rel/d/a/kytag/d_a_kytag03/d_a_kytag03.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct kytag03_class {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dPath {};

struct dPa_levelEcallBack {};

struct cXyz {};

struct csXyz {};

struct dKy_tevstr_c {};

struct _GXColor {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct dCamera_c {
    /* 80181E64 */ void Eye();
};

struct Vec {};

struct cM3dGLin {
    /* 8026F31C */ void SetStartEnd(Vec const&, Vec const&);
    /* 808560DC */ ~cM3dGLin();
};

struct Z2EnvSeMgr {
    /* 802C92C8 */ void registWolfSmellSePos(Vec*);
};

struct JPABaseEmitter {
    /* 8027EC60 */ void deleteAllParticle();
};

//
// Forward References:
//

static void dEnvSe_getNearPathPos(cXyz*, cXyz*, dPath*);
static void get_rail_ratio_pos(dPath*, int, f32, s16*, s16*);
static void set_path_info(fopAc_ac_c*);
static void getSound_pos(fopAc_ac_c*);
static void get_Extent_pos_start_get(kytag03_class*, dPath*, cXyz*, f32, int*);
static void get_Extent_pos_end_get(kytag03_class*, dPath*, cXyz*, f32, int*);
static void odour_move(kytag03_class*);
static bool daKytag03_Draw(kytag03_class*);
static void daKytag03_Execute(kytag03_class*);
static bool daKytag03_IsDelete(kytag03_class*);
static void daKytag03_Delete(kytag03_class*);
static void daKytag03_Create(fopAc_ac_c*);

extern "C" static void dEnvSe_getNearPathPos__FP4cXyzP4cXyzP5dPath();
extern "C" void __dt__8cM3dGLinFv();
extern "C" static void get_rail_ratio_pos__FP5dPathifPsPs();
extern "C" static void set_path_info__FP10fopAc_ac_c();
extern "C" static void getSound_pos__FP10fopAc_ac_c();
extern "C" static void get_Extent_pos_start_get__FP13kytag03_classP5dPathP4cXyzfPi();
extern "C" static void get_Extent_pos_end_get__FP13kytag03_classP5dPathP4cXyzfPi();
extern "C" static void odour_move__FP13kytag03_class();
extern "C" static bool daKytag03_Draw__FP13kytag03_class();
extern "C" static void daKytag03_Execute__FP13kytag03_class();
extern "C" static bool daKytag03_IsDelete__FP13kytag03_class();
extern "C" static void daKytag03_Delete__FP13kytag03_class();
extern "C" static void daKytag03_Create__FP10fopAc_ac_c();
extern "C" extern u32 const lit_4218;
extern "C" extern u32 const lit_4219[1 + 1 /* padding */];
extern "C" extern u8 const lit_4220[8];
extern "C" extern u8 const lit_4221[8];
extern "C" extern u8 const lit_4222[8];
extern "C" extern u32 const lit_4223;
extern "C" extern u32 const lit_4224;
extern "C" extern u32 const lit_4225;
extern "C" extern u32 const lit_4226;
extern "C" extern u32 const lit_4227;
extern "C" extern u32 const lit_4228;
extern "C" extern u32 const lit_4229;
extern "C" extern u32 const lit_4230;
extern "C" extern u32 const lit_4231;
extern "C" extern u32 const lit_4232;
extern "C" extern u32 const lit_4233;
extern "C" extern u32 const lit_4234;
extern "C" extern u32 const lit_4235;
extern "C" extern u32 const lit_4236;
extern "C" extern u32 const lit_4237;
extern "C" extern u32 const lit_4238;
extern "C" extern u32 const lit_4239;
extern "C" extern u32 const lit_4485;
extern "C" extern u32 const lit_4486;
extern "C" extern u32 const lit_4487;
extern "C" extern u32 const lit_4488;
extern "C" extern u32 const lit_4489;
extern "C" extern u32 const lit_4490;
extern "C" extern u32 const lit_4491;
extern "C" extern u32 const lit_4492;
extern "C" extern u32 const lit_4493;
extern "C" extern u32 const lit_4494;
extern "C" extern u32 const lit_4495;
extern "C" extern u32 const lit_4496;
extern "C" extern u32 const lit_4572;
extern "C" extern u32 const lit_4573[1 + 1 /* padding */];
extern "C" extern u8 const lit_4575[8];
extern "C" extern void* g_profile_KYTAG03[12];
extern "C" extern void* __vt__8cM3dGLin[3];

//
// External References:
//

void fpcLyIt_AllJudge(void* (*)(void*, void*), void*);
void fpcSch_JudgeForPName(void*, void*);
void dPath_GetRoomPath(int, int);
void dPath_GetNextRoomPath(dPath const*, int);
void dKyr_get_vectle_calc(cXyz*, cXyz*, cXyz*);
void cM_atan2s(f32, f32);
void cM_rndF(f32);
void cM_rndFX(f32);
void cM3d_Len3dSqPntAndSegLine(cM3dGLin const*, Vec const*, Vec*, f32*);
void cLib_addCalc(f32*, f32, f32, f32, f32);
void JPAGetXYZRotateMtx(s16, s16, s16, f32 (*)[4]);
void operator delete(void*);

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fpcLyIt_AllJudge__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeForPName__FPvPv();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void dPath_GetNextRoomPath__FPC5dPathi();
extern "C" void dKyr_get_vectle_calc__FP4cXyzP4cXyzP4cXyz();
extern "C" void Eye__9dCamera_cFv();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void cM3d_Len3dSqPntAndSegLine__FPC8cM3dGLinPC3VecP3VecPf();
extern "C" void SetStartEnd__8cM3dGLinFRC3VecRC3Vec();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void deleteAllParticle__14JPABaseEmitterFv();
extern "C" void JPAGetXYZRotateMtx__FsssPA4_f();
extern "C" void registWolfSmellSePos__10Z2EnvSeMgrFP3Vec();
extern "C" void __dl__FPv();
extern "C" void PSVECSquareDistance();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 g_mEnvSeMgr[780];
extern "C" extern u8 g_Counter[12 + 4 /* padding */];
extern "C" extern u32 __float_nan;
extern "C" extern u32 __float_max;
extern "C" extern u8 struct_80450D64[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80857650-80857658 0008+00 s=4 e=0 z=0  None .rodata    @3770 */
SECTION_RODATA static u8 const lit_3770[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80857708-80857728 0020+00 s=1 e=0 z=0  None .data      l_daKytag03_Method */
SECTION_DATA static void* l_daKytag03_Method[8] = {
    (void*)daKytag03_Create__FP10fopAc_ac_c,
    (void*)daKytag03_Delete__FP13kytag03_class,
    (void*)daKytag03_Execute__FP13kytag03_class,
    (void*)daKytag03_IsDelete__FP13kytag03_class,
    (void*)daKytag03_Draw__FP13kytag03_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80857728-80857758 0030+00 s=0 e=0 z=1  None .data      g_profile_KYTAG03 */
SECTION_DATA void* g_profile_KYTAG03[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02AD0000, (void*)&g_fpcLf_Method,
    (void*)0x00000590, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00610000, (void*)&l_daKytag03_Method,
    (void*)0x00044000, (void*)NULL,
};

/* 80857758-80857764 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGLin */
SECTION_DATA void* __vt__8cM3dGLin[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGLinFv,
};

/* 80855ED8-808560DC 0204+00 s=1 e=0 z=0  None .text dEnvSe_getNearPathPos__FP4cXyzP4cXyzP5dPath
 */
//	80855EF0: 803621D0 (_savegpr_26)
//	80855F04: 80857650 (lit_3770)
//	80855F08: 80857650 (lit_3770)
//	80855F1C: 80450AE8 (__float_max)
//	80855F20: 80450AE8 (__float_max)
//	80855F28: 80857758 (__vt__8cM3dGLin)
//	80855F2C: 80857758 (__vt__8cM3dGLin)
//	80855F44: 8034739C (PSVECSquareDistance)
//	80855F90: 8026F31C (SetStartEnd__8cM3dGLinFRC3VecRC3Vec)
//	80855FA4: 80268710 (cM3d_Len3dSqPntAndSegLine__FPC8cM3dGLinPC3VecP3VecPf)
//	80855FCC: 8026F31C (SetStartEnd__8cM3dGLinFRC3VecRC3Vec)
//	80855FE0: 80268710 (cM3d_Len3dSqPntAndSegLine__FPC8cM3dGLinPC3VecP3VecPf)
//	8085600C: 8034739C (PSVECSquareDistance)
//	808560B0: 80857758 (__vt__8cM3dGLin)
//	808560B4: 80857758 (__vt__8cM3dGLin)
//	808560C8: 8036221C (_restgpr_26)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void dEnvSe_getNearPathPos(cXyz* param_0, cXyz* param_1, dPath* param_2) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/d_a_kytag03/dEnvSe_getNearPathPos__FP4cXyzP4cXyzP5dPath.s"
}
#pragma pop

/* 808560DC-80856124 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGLinFv */
//	808560F4: 80857758 (__vt__8cM3dGLin)
//	808560F8: 80857758 (__vt__8cM3dGLin)
//	80856108: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGLin::~cM3dGLin() {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/d_a_kytag03/__dt__8cM3dGLinFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80857658-8085765C 0004+00 s=1 e=0 z=0  None .rodata    @3870 */
SECTION_RODATA static u8 const lit_3870[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80856124-80856238 0114+00 s=1 e=0 z=0  None .text      get_rail_ratio_pos__FP5dPathifPsPs */
//	80856134: 803621DC (_savegpr_29)
//	808561BC: 8005B760 (dKyr_get_vectle_calc__FP4cXyzP4cXyzP4cXyz)
//	808561D4: 80857658 (lit_3870)
//	808561D8: 80857658 (lit_3870)
//	808561F0: 80267674 (cM_atan2s__Fff)
//	80856200: 80267674 (cM_atan2s__Fff)
//	80856224: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void get_rail_ratio_pos(dPath* param_0, int param_1, f32 param_2, s16* param_3,
                                   s16* param_4) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/d_a_kytag03/get_rail_ratio_pos__FP5dPathifPsPs.s"
}
#pragma pop

/* 80856238-80856280 0048+00 s=1 e=0 z=0  None .text      set_path_info__FP10fopAc_ac_c */
//	80856264: 800517EC (dPath_GetRoomPath__Fii)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void set_path_info(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/d_a_kytag03/set_path_info__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80856280-80856354 00D4+00 s=1 e=0 z=0  None .text      getSound_pos__FP10fopAc_ac_c */
//	80856290: 803621DC (_savegpr_29)
//	80856298: 804061C0 (g_dComIfG_gameInfo)
//	8085629C: 804061C0 (g_dComIfG_gameInfo)
//	808562BC: 80181E64 (Eye__9dCamera_cFv)
//	808562F0: 800517EC (dPath_GetRoomPath__Fii)
//	808562F8: 8042DD70 (g_mEnvSeMgr)
//	808562FC: 8042DD70 (g_mEnvSeMgr)
//	80856310: 80855ED8 (dEnvSe_getNearPathPos__FP4cXyzP4cXyzP5dPath)
//	8085631C: 802C92C8 (registWolfSmellSePos__10Z2EnvSeMgrFP3Vec)
//	8085632C: 80051898 (dPath_GetNextRoomPath__FPC5dPathi)
//	80856340: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void getSound_pos(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/d_a_kytag03/getSound_pos__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80856354-80856364 0010+00 s=1 e=0 z=0  None .text
 * get_Extent_pos_start_get__FP13kytag03_classP5dPathP4cXyzfPi  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void get_Extent_pos_start_get(kytag03_class* param_0, dPath* param_1, cXyz* param_2,
                                         f32 param_3, int* param_4) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/d_a_kytag03/get_Extent_pos_start_get__FP13kytag03_classP5dPathP4cXyzfPi.s"
}
#pragma pop

/* 80856364-80856378 0014+00 s=1 e=0 z=0  None .text
 * get_Extent_pos_end_get__FP13kytag03_classP5dPathP4cXyzfPi    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void get_Extent_pos_end_get(kytag03_class* param_0, dPath* param_1, cXyz* param_2,
                                       f32 param_3, int* param_4) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/d_a_kytag03/get_Extent_pos_end_get__FP13kytag03_classP5dPathP4cXyzfPi.s"
}
#pragma pop

/* 80856378-80856E24 0AAC+00 s=1 e=0 z=0  None .text      odour_move__FP13kytag03_class */
//	808563E0: 803621C8 (_savegpr_24)
//	808563E8: 80857650 (lit_3770)
//	808563EC: 80857650 (lit_3770)
//	808563F0: 804061C0 (g_dComIfG_gameInfo)
//	808563F4: 804061C0 (g_dComIfG_gameInfo)
//	808563FC: 8042CA54 (g_env_light)
//	80856400: 8042CA54 (g_env_light)
//	80856424: 80450D64 (struct_80450D64)
//	80856428: 80450D64 (struct_80450D64)
//	80856434: 80035360 (isSwitch__10dSv_info_cCFii)
//	80856460: 80856354 (get_Extent_pos_start_get__FP13kytag03_classP5dPathP4cXyzfPi)
//	8085647C: 80856364 (get_Extent_pos_end_get__FP13kytag03_classP5dPathP4cXyzfPi)
//	8085649C: 80856124 (get_rail_ratio_pos__FP5dPathifPsPs)
//	808564D4: 80856124 (get_rail_ratio_pos__FP5dPathifPsPs)
//	80856518: 80430CD8 (g_Counter)
//	8085651C: 80430CD8 (g_Counter)
//	80856564: 80856124 (get_rail_ratio_pos__FP5dPathifPsPs)
//	80856598: 80856124 (get_rail_ratio_pos__FP5dPathifPsPs)
//	808565BC: 8034739C (PSVECSquareDistance)
//	80856628: 80450AE0 (__float_nan)
//	8085662C: 80450AE0 (__float_nan)
//	80856698: 80450AE0 (__float_nan)
//	8085669C: 80450AE0 (__float_nan)
//	808566F0: 80856124 (get_rail_ratio_pos__FP5dPathifPsPs)
//	80856714: 8034739C (PSVECSquareDistance)
//	80856784: 80450AE0 (__float_nan)
//	80856788: 80450AE0 (__float_nan)
//	808567F4: 80450AE0 (__float_nan)
//	808567F8: 80450AE0 (__float_nan)
//	8085680C: 8034739C (PSVECSquareDistance)
//	8085687C: 80450AE0 (__float_nan)
//	80856880: 80450AE0 (__float_nan)
//	808568EC: 80450AE0 (__float_nan)
//	808568F0: 80450AE0 (__float_nan)
//	80856968: 8034739C (PSVECSquareDistance)
//	808569D8: 80450AE0 (__float_nan)
//	808569DC: 80450AE0 (__float_nan)
//	80856A48: 80450AE0 (__float_nan)
//	80856A4C: 80450AE0 (__float_nan)
//	80856A9C: 8034739C (PSVECSquareDistance)
//	80856B0C: 80450AE0 (__float_nan)
//	80856B10: 80450AE0 (__float_nan)
//	80856B7C: 80450AE0 (__float_nan)
//	80856B80: 80450AE0 (__float_nan)
//	80856BB0: 8026798C (cM_rndFX__Ff)
//	80856BD0: 8026798C (cM_rndFX__Ff)
//	80856BF8: 80267954 (cM_rndF__Ff)
//	80856C84: 8026798C (cM_rndFX__Ff)
//	80856CB0: 80267954 (cM_rndF__Ff)
//	80856CD0: 80267954 (cM_rndF__Ff)
//	80856CE4: 80267954 (cM_rndF__Ff)
//	80856D00: 80267954 (cM_rndF__Ff)
//	80856D14: 80267954 (cM_rndF__Ff)
//	80856D2C: 8026798C (cM_rndFX__Ff)
//	80856D54: 80267954 (cM_rndF__Ff)
//	80856D68: 80267954 (cM_rndF__Ff)
//	80856DB0: 80856280 (getSound_pos__FP10fopAc_ac_c)
//	80856E10: 80362214 (_restgpr_24)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void odour_move(kytag03_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/d_a_kytag03/odour_move__FP13kytag03_class.s"
}
#pragma pop

/* 80856E24-80856E2C 0008+00 s=1 e=0 z=0  None .text      daKytag03_Draw__FP13kytag03_class */
static bool daKytag03_Draw(kytag03_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80857768-8085776C 0004+00 s=1 e=0 z=0  None .bss       None */
static u8 struct_80857768[4];

/* 80856E2C-808573F4 05C8+00 s=1 e=0 z=0  None .text      daKytag03_Execute__FP13kytag03_class */
//	80856E3C: 803621D4 (_savegpr_27)
//	80856E44: 80857650 (lit_3770)
//	80856E48: 80857650 (lit_3770)
//	80856E4C: 8042CA54 (g_env_light)
//	80856E50: 8042CA54 (g_env_light)
//	80856E54: 804061C0 (g_dComIfG_gameInfo)
//	80856E58: 804061C0 (g_dComIfG_gameInfo)
//	80856E88: 80856378 (odour_move__FP13kytag03_class)
//	80856EA4: 8026F97C (cLib_addCalc__FPfffff)
//	80856EBC: 80023578 (fpcSch_JudgeForPName__FPvPv)
//	80856EC0: 80023578 (fpcSch_JudgeForPName__FPvPv)
//	80856EC8: 80021C60 (fpcLyIt_AllJudge__FPFPvPv_PvPv)
//	80856EFC: 8085776A (struct_80857768)
//	80856F00: 8085776A (struct_80857768)
//	80856F14: 80857768 (struct_80857768)
//	80856F18: 80857768 (struct_80857768)
//	80856F8C: 80857768 (struct_80857768)
//	80856F90: 80857768 (struct_80857768)
//	80856FAC: 80280734 (JPAGetXYZRotateMtx__FsssPA4_f)
//	80857130: 80280734 (JPAGetXYZRotateMtx__FsssPA4_f)
//	808571F0: 804061C0 (g_dComIfG_gameInfo)
//	808571F4: 804061C0 (g_dComIfG_gameInfo)
//	80857220: 8034739C (PSVECSquareDistance)
//	80857290: 80450AE0 (__float_nan)
//	80857294: 80450AE0 (__float_nan)
//	80857300: 80450AE0 (__float_nan)
//	80857304: 80450AE0 (__float_nan)
//	80857314: 804061C0 (g_dComIfG_gameInfo)
//	80857318: 804061C0 (g_dComIfG_gameInfo)
//	808573E0: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daKytag03_Execute(kytag03_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/d_a_kytag03/daKytag03_Execute__FP13kytag03_class.s"
}
#pragma pop

/* 808573F4-808573FC 0008+00 s=1 e=0 z=0  None .text      daKytag03_IsDelete__FP13kytag03_class */
static bool daKytag03_IsDelete(kytag03_class* param_0) {
    return true;
}

/* 808573FC-80857470 0074+00 s=1 e=0 z=0  None .text      daKytag03_Delete__FP13kytag03_class */
//	8085741C: 8027EC60 (deleteAllParticle__14JPABaseEmitterFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daKytag03_Delete(kytag03_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/d_a_kytag03/daKytag03_Delete__FP13kytag03_class.s"
}
#pragma pop

/* 80857470-80857648 01D8+00 s=1 e=0 z=0  None .text      daKytag03_Create__FP10fopAc_ac_c */
//	80857488: 80857650 (lit_3770)
//	8085748C: 80857650 (lit_3770)
//	808574A4: 80018B64 (__ct__10fopAc_ac_cFv)
//	80857558: 80856238 (set_path_info__FP10fopAc_ac_c)
//	80857574: 8042CA54 (g_env_light)
//	80857578: 8042CA54 (g_env_light)
//	80857598: 804061C0 (g_dComIfG_gameInfo)
//	8085759C: 804061C0 (g_dComIfG_gameInfo)
//	808575E4: 8004CA90
//(set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daKytag03_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/d_a_kytag03/daKytag03_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 8085765C-80857660 0004+00 s=0 e=0 z=0  None .rodata    @4218 */
SECTION_RODATA u32 const lit_4218 = 0x447A0000;

/* 80857660-80857668 0004+04 s=0 e=0 z=0  None .rodata    @4219 */
SECTION_RODATA u32 const lit_4219[1 + 1 /* padding */] = {
    0x3F800000,
    /* padding */
    0x00000000,
};

/* 80857668-80857670 0008+00 s=0 e=0 z=0  None .rodata    @4220 */
SECTION_RODATA u8 const lit_4220[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80857670-80857678 0008+00 s=0 e=0 z=0  None .rodata    @4221 */
SECTION_RODATA u8 const lit_4221[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80857678-80857680 0008+00 s=0 e=0 z=0  None .rodata    @4222 */
SECTION_RODATA u8 const lit_4222[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80857680-80857684 0004+00 s=0 e=0 z=0  None .rodata    @4223 */
SECTION_RODATA u32 const lit_4223 = 0x425C0000;

/* 80857684-80857688 0004+00 s=0 e=0 z=0  None .rodata    @4224 */
SECTION_RODATA u32 const lit_4224 = 0x3FC00000;

/* 80857688-8085768C 0004+00 s=0 e=0 z=0  None .rodata    @4225 */
SECTION_RODATA u32 const lit_4225 = 0x41800000;

/* 8085768C-80857690 0004+00 s=0 e=0 z=0  None .rodata    @4226 */
SECTION_RODATA u32 const lit_4226 = 0x459C4000;

/* 80857690-80857694 0004+00 s=0 e=0 z=0  None .rodata    @4227 */
SECTION_RODATA u32 const lit_4227 = 0x457A0000;

/* 80857694-80857698 0004+00 s=0 e=0 z=0  None .rodata    @4228 */
SECTION_RODATA u32 const lit_4228 = 0x44FA0000;

/* 80857698-8085769C 0004+00 s=0 e=0 z=0  None .rodata    @4229 */
SECTION_RODATA u32 const lit_4229 = 0x453B8000;

/* 8085769C-808576A0 0004+00 s=0 e=0 z=0  None .rodata    @4230 */
SECTION_RODATA u32 const lit_4230 = 0x3F000000;

/* 808576A0-808576A4 0004+00 s=0 e=0 z=0  None .rodata    @4231 */
SECTION_RODATA u32 const lit_4231 = 0x42480000;

/* 808576A4-808576A8 0004+00 s=0 e=0 z=0  None .rodata    @4232 */
SECTION_RODATA u32 const lit_4232 = 0x43480000;

/* 808576A8-808576AC 0004+00 s=0 e=0 z=0  None .rodata    @4233 */
SECTION_RODATA u32 const lit_4233 = 0x42200000;

/* 808576AC-808576B0 0004+00 s=0 e=0 z=0  None .rodata    @4234 */
SECTION_RODATA u32 const lit_4234 = 0x3F4CCCCD;

/* 808576B0-808576B4 0004+00 s=0 e=0 z=0  None .rodata    @4235 */
SECTION_RODATA u32 const lit_4235 = 0x40000000;

/* 808576B4-808576B8 0004+00 s=0 e=0 z=0  None .rodata    @4236 */
SECTION_RODATA u32 const lit_4236 = 0x40333333;

/* 808576B8-808576BC 0004+00 s=0 e=0 z=0  None .rodata    @4237 */
SECTION_RODATA u32 const lit_4237 = 0x42340000;

/* 808576BC-808576C0 0004+00 s=0 e=0 z=0  None .rodata    @4238 */
SECTION_RODATA u32 const lit_4238 = 0x41A00000;

/* 808576C0-808576C4 0004+00 s=0 e=0 z=0  None .rodata    @4239 */
SECTION_RODATA u32 const lit_4239 = 0x42C80000;

/* 808576C4-808576C8 0004+00 s=0 e=0 z=0  None .rodata    @4485 */
SECTION_RODATA u32 const lit_4485 = 0x3DCCCCCD;

/* 808576C8-808576CC 0004+00 s=0 e=0 z=0  None .rodata    @4486 */
SECTION_RODATA u32 const lit_4486 = 0x3CCCCCCD;

/* 808576CC-808576D0 0004+00 s=0 e=0 z=0  None .rodata    @4487 */
SECTION_RODATA u32 const lit_4487 = 0x358637BD;

/* 808576D0-808576D4 0004+00 s=0 e=0 z=0  None .rodata    @4488 */
SECTION_RODATA u32 const lit_4488 = 0x45E80800;

/* 808576D4-808576D8 0004+00 s=0 e=0 z=0  None .rodata    @4489 */
SECTION_RODATA u32 const lit_4489 = 0x41F00000;

/* 808576D8-808576DC 0004+00 s=0 e=0 z=0  None .rodata    @4490 */
SECTION_RODATA u32 const lit_4490 = 0x40400000;

/* 808576DC-808576E0 0004+00 s=0 e=0 z=0  None .rodata    @4491 */
SECTION_RODATA u32 const lit_4491 = 0x40800000;

/* 808576E0-808576E4 0004+00 s=0 e=0 z=0  None .rodata    @4492 */
SECTION_RODATA u32 const lit_4492 = 0x40200000;

/* 808576E4-808576E8 0004+00 s=0 e=0 z=0  None .rodata    @4493 */
SECTION_RODATA u32 const lit_4493 = 0x400CCCCD;

/* 808576E8-808576EC 0004+00 s=0 e=0 z=0  None .rodata    @4494 */
SECTION_RODATA u32 const lit_4494 = 0x3F400000;

/* 808576EC-808576F0 0004+00 s=0 e=0 z=0  None .rodata    @4495 */
SECTION_RODATA u32 const lit_4495 = 0x42000000;

/* 808576F0-808576F4 0004+00 s=0 e=0 z=0  None .rodata    @4496 */
SECTION_RODATA u32 const lit_4496 = 0x435F0000;

/* 808576F4-808576F8 0004+00 s=0 e=0 z=0  None .rodata    @4572 */
SECTION_RODATA u32 const lit_4572 = 0x437F0000;

/* 808576F8-80857700 0004+04 s=0 e=0 z=0  None .rodata    @4573 */
SECTION_RODATA u32 const lit_4573[1 + 1 /* padding */] = {
    0x43960000,
    /* padding */
    0x00000000,
};

/* 80857700-80857708 0008+00 s=0 e=0 z=0  None .rodata    @4575 */
SECTION_RODATA u8 const lit_4575[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
