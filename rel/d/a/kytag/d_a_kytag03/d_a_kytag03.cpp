//
// Generated By: dol2asm
// Translation Unit: d_a_kytag03
//

// #include "rel/d/a/kytag/d_a_kytag03/d_a_kytag03.h"
#include "dolphin/types.h"
#include "dol2asm.h"

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

struct dKy_tevstr_c {};

struct csXyz {};

struct _GXColor {};

struct cXyz {};

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

//
// External References:
//

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
extern "C" extern u8 mStayNo__20dStage_roomControl_c[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80857650-80857658 000000 0008+00 4/4 0/0 0/0 .rodata          @3770 */
SECTION_RODATA static u8 const lit_3770[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80857650, &lit_3770);

/* 80857708-80857728 -00001 0020+00 1/0 0/0 0/0 .data            l_daKytag03_Method */
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

/* 80857728-80857758 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_KYTAG03 */
SECTION_DATA extern void* g_profile_KYTAG03[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02AD0000, (void*)&g_fpcLf_Method,
    (void*)0x00000590, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00610000, (void*)&l_daKytag03_Method,
    (void*)0x00044000, (void*)NULL,
};

/* 80857758-80857764 000050 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGLin */
SECTION_DATA extern void* __vt__8cM3dGLin[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGLinFv,
};

/* 80855ED8-808560DC 000078 0204+00 1/1 0/0 0/0 .text dEnvSe_getNearPathPos__FP4cXyzP4cXyzP5dPath
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dEnvSe_getNearPathPos(cXyz* param_0, cXyz* param_1, dPath* param_2) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/d_a_kytag03/dEnvSe_getNearPathPos__FP4cXyzP4cXyzP5dPath.s"
}
#pragma pop

/* 808560DC-80856124 00027C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGLinFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGLin::~cM3dGLin() {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/d_a_kytag03/__dt__8cM3dGLinFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80857658-8085765C 000008 0004+00 1/4 0/0 0/0 .rodata          @3870 */
SECTION_RODATA static u8 const lit_3870[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80857658, &lit_3870);

/* 80856124-80856238 0002C4 0114+00 1/1 0/0 0/0 .text            get_rail_ratio_pos__FP5dPathifPsPs
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void get_rail_ratio_pos(dPath* param_0, int param_1, f32 param_2, s16* param_3,
                                   s16* param_4) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/d_a_kytag03/get_rail_ratio_pos__FP5dPathifPsPs.s"
}
#pragma pop

/* 80856238-80856280 0003D8 0048+00 1/1 0/0 0/0 .text            set_path_info__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void set_path_info(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/d_a_kytag03/set_path_info__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80856280-80856354 000420 00D4+00 1/1 0/0 0/0 .text            getSound_pos__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void getSound_pos(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/d_a_kytag03/getSound_pos__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80856354-80856364 0004F4 0010+00 1/1 0/0 0/0 .text
 * get_Extent_pos_start_get__FP13kytag03_classP5dPathP4cXyzfPi  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void get_Extent_pos_start_get(kytag03_class* param_0, dPath* param_1, cXyz* param_2,
                                         f32 param_3, int* param_4) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/d_a_kytag03/get_Extent_pos_start_get__FP13kytag03_classP5dPathP4cXyzfPi.s"
}
#pragma pop

/* 80856364-80856378 000504 0014+00 1/1 0/0 0/0 .text
 * get_Extent_pos_end_get__FP13kytag03_classP5dPathP4cXyzfPi    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void get_Extent_pos_end_get(kytag03_class* param_0, dPath* param_1, cXyz* param_2,
                                       f32 param_3, int* param_4) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/d_a_kytag03/get_Extent_pos_end_get__FP13kytag03_classP5dPathP4cXyzfPi.s"
}
#pragma pop

/* ############################################################################################## */
/* 8085765C-80857660 00000C 0004+00 0/1 0/0 0/0 .rodata          @4218 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4218 = 1000.0f;
COMPILER_STRIP_GATE(0x8085765C, &lit_4218);
#pragma pop

/* 80857660-80857668 000010 0004+04 0/3 0/0 0/0 .rodata          @4219 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4219[1 + 1 /* padding */] = {
    1.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80857660, &lit_4219);
#pragma pop

/* 80857668-80857670 000018 0008+00 0/2 0/0 0/0 .rodata          @4220 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4220[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80857668, &lit_4220);
#pragma pop

/* 80857670-80857678 000020 0008+00 0/2 0/0 0/0 .rodata          @4221 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4221[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80857670, &lit_4221);
#pragma pop

/* 80857678-80857680 000028 0008+00 0/2 0/0 0/0 .rodata          @4222 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4222[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80857678, &lit_4222);
#pragma pop

/* 80857680-80857684 000030 0004+00 0/1 0/0 0/0 .rodata          @4223 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4223 = 55.0f;
COMPILER_STRIP_GATE(0x80857680, &lit_4223);
#pragma pop

/* 80857684-80857688 000034 0004+00 0/2 0/0 0/0 .rodata          @4224 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4224 = 1.5f;
COMPILER_STRIP_GATE(0x80857684, &lit_4224);
#pragma pop

/* 80857688-8085768C 000038 0004+00 0/1 0/0 0/0 .rodata          @4225 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4225 = 16.0f;
COMPILER_STRIP_GATE(0x80857688, &lit_4225);
#pragma pop

/* 8085768C-80857690 00003C 0004+00 0/1 0/0 0/0 .rodata          @4226 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4226 = 5000.0f;
COMPILER_STRIP_GATE(0x8085768C, &lit_4226);
#pragma pop

/* 80857690-80857694 000040 0004+00 0/1 0/0 0/0 .rodata          @4227 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4227 = 4000.0f;
COMPILER_STRIP_GATE(0x80857690, &lit_4227);
#pragma pop

/* 80857694-80857698 000044 0004+00 0/1 0/0 0/0 .rodata          @4228 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4228 = 2000.0f;
COMPILER_STRIP_GATE(0x80857694, &lit_4228);
#pragma pop

/* 80857698-8085769C 000048 0004+00 0/1 0/0 0/0 .rodata          @4229 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4229 = 3000.0f;
COMPILER_STRIP_GATE(0x80857698, &lit_4229);
#pragma pop

/* 8085769C-808576A0 00004C 0004+00 0/2 0/0 0/0 .rodata          @4230 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4230 = 0.5f;
COMPILER_STRIP_GATE(0x8085769C, &lit_4230);
#pragma pop

/* 808576A0-808576A4 000050 0004+00 0/2 0/0 0/0 .rodata          @4231 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4231 = 50.0f;
COMPILER_STRIP_GATE(0x808576A0, &lit_4231);
#pragma pop

/* 808576A4-808576A8 000054 0004+00 0/1 0/0 0/0 .rodata          @4232 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4232 = 200.0f;
COMPILER_STRIP_GATE(0x808576A4, &lit_4232);
#pragma pop

/* 808576A8-808576AC 000058 0004+00 0/1 0/0 0/0 .rodata          @4233 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4233 = 40.0f;
COMPILER_STRIP_GATE(0x808576A8, &lit_4233);
#pragma pop

/* 808576AC-808576B0 00005C 0004+00 0/1 0/0 0/0 .rodata          @4234 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4234 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x808576AC, &lit_4234);
#pragma pop

/* 808576B0-808576B4 000060 0004+00 0/1 0/0 0/0 .rodata          @4235 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4235 = 2.0f;
COMPILER_STRIP_GATE(0x808576B0, &lit_4235);
#pragma pop

/* 808576B4-808576B8 000064 0004+00 0/1 0/0 0/0 .rodata          @4236 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4236 = 14.0f / 5.0f;
COMPILER_STRIP_GATE(0x808576B4, &lit_4236);
#pragma pop

/* 808576B8-808576BC 000068 0004+00 0/1 0/0 0/0 .rodata          @4237 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4237 = 45.0f;
COMPILER_STRIP_GATE(0x808576B8, &lit_4237);
#pragma pop

/* 808576BC-808576C0 00006C 0004+00 0/1 0/0 0/0 .rodata          @4238 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4238 = 20.0f;
COMPILER_STRIP_GATE(0x808576BC, &lit_4238);
#pragma pop

/* 808576C0-808576C4 000070 0004+00 0/1 0/0 0/0 .rodata          @4239 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4239 = 100.0f;
COMPILER_STRIP_GATE(0x808576C0, &lit_4239);
#pragma pop

/* 80856378-80856E24 000518 0AAC+00 1/1 0/0 0/0 .text            odour_move__FP13kytag03_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void odour_move(kytag03_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/d_a_kytag03/odour_move__FP13kytag03_class.s"
}
#pragma pop

/* 80856E24-80856E2C 000FC4 0008+00 1/0 0/0 0/0 .text            daKytag03_Draw__FP13kytag03_class
 */
static bool daKytag03_Draw(kytag03_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 808576C4-808576C8 000074 0004+00 0/1 0/0 0/0 .rodata          @4485 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4485 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x808576C4, &lit_4485);
#pragma pop

/* 808576C8-808576CC 000078 0004+00 0/1 0/0 0/0 .rodata          @4486 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4486 = 1.0f / 40.0f;
COMPILER_STRIP_GATE(0x808576C8, &lit_4486);
#pragma pop

/* 808576CC-808576D0 00007C 0004+00 0/1 0/0 0/0 .rodata          @4487 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4487 = 0x358637BD;
COMPILER_STRIP_GATE(0x808576CC, &lit_4487);
#pragma pop

/* 808576D0-808576D4 000080 0004+00 0/1 0/0 0/0 .rodata          @4488 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4488 = 7425.0f;
COMPILER_STRIP_GATE(0x808576D0, &lit_4488);
#pragma pop

/* 808576D4-808576D8 000084 0004+00 0/1 0/0 0/0 .rodata          @4489 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4489 = 30.0f;
COMPILER_STRIP_GATE(0x808576D4, &lit_4489);
#pragma pop

/* 808576D8-808576DC 000088 0004+00 0/1 0/0 0/0 .rodata          @4490 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4490 = 3.0f;
COMPILER_STRIP_GATE(0x808576D8, &lit_4490);
#pragma pop

/* 808576DC-808576E0 00008C 0004+00 0/1 0/0 0/0 .rodata          @4491 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4491 = 4.0f;
COMPILER_STRIP_GATE(0x808576DC, &lit_4491);
#pragma pop

/* 808576E0-808576E4 000090 0004+00 0/1 0/0 0/0 .rodata          @4492 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4492 = 2.5f;
COMPILER_STRIP_GATE(0x808576E0, &lit_4492);
#pragma pop

/* 808576E4-808576E8 000094 0004+00 0/1 0/0 0/0 .rodata          @4493 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4493 = 11.0f / 5.0f;
COMPILER_STRIP_GATE(0x808576E4, &lit_4493);
#pragma pop

/* 808576E8-808576EC 000098 0004+00 0/1 0/0 0/0 .rodata          @4494 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4494 = 0.75f;
COMPILER_STRIP_GATE(0x808576E8, &lit_4494);
#pragma pop

/* 808576EC-808576F0 00009C 0004+00 0/1 0/0 0/0 .rodata          @4495 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4495 = 32.0f;
COMPILER_STRIP_GATE(0x808576EC, &lit_4495);
#pragma pop

/* 808576F0-808576F4 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4496 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4496 = 223.0f;
COMPILER_STRIP_GATE(0x808576F0, &lit_4496);
#pragma pop

/* 80857768-8085776C -00001 0004+00 1/1 0/0 0/0 .bss             None */
/* 80857768 0002+00 data_80857768 S_ang_y_work$4270 */
/* 8085776A 0002+00 data_8085776A None */
static u8 struct_80857768[4];

/* 80856E2C-808573F4 000FCC 05C8+00 1/0 0/0 0/0 .text daKytag03_Execute__FP13kytag03_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daKytag03_Execute(kytag03_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/d_a_kytag03/daKytag03_Execute__FP13kytag03_class.s"
}
#pragma pop

/* 808573F4-808573FC 001594 0008+00 1/0 0/0 0/0 .text daKytag03_IsDelete__FP13kytag03_class */
static bool daKytag03_IsDelete(kytag03_class* param_0) {
    return true;
}

/* 808573FC-80857470 00159C 0074+00 1/0 0/0 0/0 .text            daKytag03_Delete__FP13kytag03_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daKytag03_Delete(kytag03_class* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/d_a_kytag03/daKytag03_Delete__FP13kytag03_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 808576F4-808576F8 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4572 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4572 = 255.0f;
COMPILER_STRIP_GATE(0x808576F4, &lit_4572);
#pragma pop

/* 808576F8-80857700 0000A8 0004+04 0/1 0/0 0/0 .rodata          @4573 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4573[1 + 1 /* padding */] = {
    300.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x808576F8, &lit_4573);
#pragma pop

/* 80857700-80857708 0000B0 0008+00 0/1 0/0 0/0 .rodata          @4575 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4575[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80857700, &lit_4575);
#pragma pop

/* 80857470-80857648 001610 01D8+00 1/0 0/0 0/0 .text            daKytag03_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daKytag03_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/d_a_kytag03/daKytag03_Create__FP10fopAc_ac_c.s"
}
#pragma pop
