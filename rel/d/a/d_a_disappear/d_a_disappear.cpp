//
// Generated By: dol2asm
// Translation Unit: d_a_disappear
//

#include "rel/d/a/d_a_disappear/d_a_disappear.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct disappear_class {};

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

struct Vec {};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

//
// Forward References:
//

static bool daDisappear_Draw(disappear_class*);
static void s_ks_sub(void*, void*);
static void daDisappear_Execute(disappear_class*);
static bool daDisappear_IsDelete(disappear_class*);
static bool daDisappear_Delete(disappear_class*);
static void yami_disappear(disappear_class*, f32);
static void ghost_disappear(disappear_class*, f32);
static void set_disappear(disappear_class*, f32);
static void daDisappear_Create(fopAc_ac_c*);

extern "C" static bool daDisappear_Draw__FP15disappear_class();
extern "C" static void s_ks_sub__FPvPv();
extern "C" static void daDisappear_Execute__FP15disappear_class();
extern "C" static bool daDisappear_IsDelete__FP15disappear_class();
extern "C" static bool daDisappear_Delete__FP15disappear_class();
extern "C" static void yami_disappear__FP15disappear_classf();
extern "C" static void ghost_disappear__FP15disappear_classf();
extern "C" static void set_disappear__FP15disappear_classf();
extern "C" static void daDisappear_Create__FP10fopAc_ac_c();
extern "C" extern u32 const lit_3787;
extern "C" extern u32 const lit_3788;
extern "C" extern u32 const lit_3825;
extern "C" extern u32 const lit_3826;
extern "C" extern u32 const lit_3827;
extern "C" extern u8 const lit_3829[8];
extern "C" extern void* g_profile_DISAPPEAR[12];

//
// External References:
//

void fopAc_IsActor(void*);
void fopAcM_delete(fopAc_ac_c*);
void fopAcM_createItemFromEnemyID(u8, cXyz const*, int, int, csXyz const*, cXyz const*, f32*, f32*);
void fpcEx_Search(void* (*)(void*, void*), void*);
void dComIfGp_getReverb(int);
void dKy_Sound_set(cXyz, int, unsigned int, int);

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_createItemFromEnemyID__FUcPC4cXyziiPC5csXyzPC4cXyzPfPf();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dKy_Sound_set__F4cXyziUii();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* 804A8F18-804A8F20 0008+00 s=1 e=0 z=0  None .text      daDisappear_Draw__FP15disappear_class */
static bool daDisappear_Draw(disappear_class* param_0) {
    return true;
}

/* 804A8F20-804A8F6C 004C+00 s=1 e=0 z=0  None .text      s_ks_sub__FPvPv */
//	804A8F34: 80018CE0 (fopAc_IsActor__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void s_ks_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/d_a_disappear/d_a_disappear/s_ks_sub__FPvPv.s"
}
#pragma pop

/* 804A8F6C-804A8FA8 003C+00 s=1 e=0 z=0  None .text      daDisappear_Execute__FP15disappear_class
 */
//	804A8F90: 80019C7C (fopAcM_delete__FP10fopAc_ac_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daDisappear_Execute(disappear_class* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_disappear/d_a_disappear/daDisappear_Execute__FP15disappear_class.s"
}
#pragma pop

/* 804A8FA8-804A8FB0 0008+00 s=1 e=0 z=0  None .text      daDisappear_IsDelete__FP15disappear_class
 */
static bool daDisappear_IsDelete(disappear_class* param_0) {
    return true;
}

/* 804A8FB0-804A8FB8 0008+00 s=1 e=0 z=0  None .text      daDisappear_Delete__FP15disappear_class */
static bool daDisappear_Delete(disappear_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 804A9460-804A9464 0004+00 s=4 e=0 z=0  None .rodata    @3704 */
SECTION_RODATA static u32 const lit_3704 = 0x3F800000;

/* 804A9480-804A9488 0008+00 s=1 e=0 z=0  None .data      da_name$3684 */
SECTION_DATA static u8 da_name_3684[8] = {
    0x82, 0x6C, 0x82, 0x6D, 0x82, 0x6E, 0x82, 0x6B,
};

/* 804A8FB8-804A9080 00C8+00 s=1 e=0 z=0  None .text      yami_disappear__FP15disappear_classf */
//	804A8FC8: 803621CC (_savegpr_25)
//	804A8FF8: 804061C0 (g_dComIfG_gameInfo)
//	804A8FFC: 804061C0 (g_dComIfG_gameInfo)
//	804A9000: 804A9480 (da_name_3684)
//	804A9004: 804A9480 (da_name_3684)
//	804A9008: 804A9460 (lit_3704)
//	804A900C: 804A9460 (lit_3704)
//	804A9054: 8004CA90
//(set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	804A906C: 80362218 (_restgpr_25)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void yami_disappear(disappear_class* param_0, f32 param_1) {
    nofralloc
#include "asm/rel/d/a/d_a_disappear/d_a_disappear/yami_disappear__FP15disappear_classf.s"
}
#pragma pop

/* ############################################################################################## */
/* 804A9488-804A9494 000A+02 s=1 e=0 z=0  None .data      da_name$3710 */
SECTION_DATA static u8 da_name_3710[10 + 2 /* padding */] = {
    0x86,
    0xA7,
    0x86,
    0xA8,
    0x86,
    0xA9,
    0x86,
    0xAA,
    0x86,
    0xAB,
    /* padding */
    0x00,
    0x00,
};

/* 804A9080-804A9130 00B0+00 s=1 e=0 z=0  None .text      ghost_disappear__FP15disappear_classf */
//	804A9090: 803621D0 (_savegpr_26)
//	804A90AC: 804061C0 (g_dComIfG_gameInfo)
//	804A90B0: 804061C0 (g_dComIfG_gameInfo)
//	804A90B4: 804A9488 (da_name_3710)
//	804A90B8: 804A9488 (da_name_3710)
//	804A90BC: 804A9460 (lit_3704)
//	804A90C0: 804A9460 (lit_3704)
//	804A9104: 8004CA90
//(set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	804A911C: 8036221C (_restgpr_26)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void ghost_disappear(disappear_class* param_0, f32 param_1) {
    nofralloc
#include "asm/rel/d/a/d_a_disappear/d_a_disappear/ghost_disappear__FP15disappear_classf.s"
}
#pragma pop

/* ############################################################################################## */
/* 804A9494-804A94A4 000E+02 s=1 e=0 z=0  None .data      da_name$3736 */
SECTION_DATA static u8 da_name_3736[14 + 2 /* padding */] = {
    0x01,
    0x08,
    0x01,
    0x09,
    0x01,
    0x0A,
    0x01,
    0x0B,
    0x01,
    0x0C,
    0x01,
    0x54,
    0x01,
    0x55,
    /* padding */
    0x00,
    0x00,
};

/* 804A9130-804A9364 0234+00 s=1 e=0 z=0  None .text      set_disappear__FP15disappear_classf */
//	804A9148: 803621D0 (_savegpr_26)
//	804A9154: 804A9460 (lit_3704)
//	804A9158: 804A9460 (lit_3704)
//	804A9190: 801A81C0 (dKy_Sound_set__F4cXyziUii)
//	804A9194: 804A8F20 (s_ks_sub__FPvPv)
//	804A9198: 804A8F20 (s_ks_sub__FPvPv)
//	804A91A0: 80021338 (fpcEx_Search__FPFPvPv_PvPv)
//	804A91BC: 8002D06C (dComIfGp_getReverb__Fi)
//	804A91D0: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	804A91D4: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	804A91FC: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	804A9208: 804A9080 (ghost_disappear__FP15disappear_classf)
//	804A9220: 8002D06C (dComIfGp_getReverb__Fi)
//	804A9234: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	804A9238: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	804A9260: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	804A9270: 804A8FB8 (yami_disappear__FP15disappear_classf)
//	804A9280: 8002D06C (dComIfGp_getReverb__Fi)
//	804A9294: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	804A9298: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	804A92C0: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	804A92E0: 804061C0 (g_dComIfG_gameInfo)
//	804A92E4: 804061C0 (g_dComIfG_gameInfo)
//	804A92E8: 804A9494 (da_name_3736)
//	804A92EC: 804A9494 (da_name_3736)
//	804A9330: 8004CA90
//(set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	804A9350: 8036221C (_restgpr_26)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void set_disappear(disappear_class* param_0, f32 param_1) {
    nofralloc
#include "asm/rel/d/a/d_a_disappear/d_a_disappear/set_disappear__FP15disappear_classf.s"
}
#pragma pop

/* 804A9364-804A9458 00F4+00 s=1 e=0 z=0  None .text      daDisappear_Create__FP10fopAc_ac_c */
//	804A9384: 804A9460 (lit_3704)
//	804A9388: 804A9460 (lit_3704)
//	804A93A0: 80018B64 (__ct__10fopAc_ac_cFv)
//	804A9424: 8001BE14 (fopAcM_createItemFromEnemyID__FUcPC4cXyziiPC5csXyzPC4cXyzPfPf)
//	804A9430: 804A9130 (set_disappear__FP15disappear_classf)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daDisappear_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_disappear/d_a_disappear/daDisappear_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 804A9464-804A9468 0004+00 s=0 e=0 z=0  None .rodata    @3787 */
SECTION_RODATA u32 const lit_3787 = 0xBF800000;

/* 804A9468-804A946C 0004+00 s=0 e=0 z=0  None .rodata    @3788 */
SECTION_RODATA u32 const lit_3788 = 0x3FD53F7D;

/* 804A946C-804A9470 0004+00 s=0 e=0 z=0  None .rodata    @3825 */
SECTION_RODATA u32 const lit_3825 = 0x3C23D70A;

/* 804A9470-804A9474 0004+00 s=0 e=0 z=0  None .rodata    @3826 */
SECTION_RODATA u32 const lit_3826 = 0x3DCCCCCD;

/* 804A9474-804A9478 0004+00 s=0 e=0 z=0  None .rodata    @3827 */
SECTION_RODATA u32 const lit_3827 = 0x42480000;

/* 804A9478-804A9480 0008+00 s=0 e=0 z=0  None .rodata    @3829 */
SECTION_RODATA u8 const lit_3829[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804A94A4-804A94C4 0020+00 s=1 e=0 z=0  None .data      l_daDisappear_Method */
SECTION_DATA static void* l_daDisappear_Method[8] = {
    (void*)daDisappear_Create__FP10fopAc_ac_c,
    (void*)daDisappear_Delete__FP15disappear_class,
    (void*)daDisappear_Execute__FP15disappear_class,
    (void*)daDisappear_IsDelete__FP15disappear_class,
    (void*)daDisappear_Draw__FP15disappear_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 804A94C4-804A94F4 0030+00 s=0 e=0 z=1  None .data      g_profile_DISAPPEAR */
SECTION_DATA void* g_profile_DISAPPEAR[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01390000, (void*)&g_fpcLf_Method,
    (void*)0x00000578, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02D50000, (void*)&l_daDisappear_Method,
    (void*)0x00044000, (void*)NULL,
};
