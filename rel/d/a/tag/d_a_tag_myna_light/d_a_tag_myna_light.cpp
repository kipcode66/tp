//
// Generated By: dol2asm
// Translation Unit: d_a_tag_myna_light
//

#include "rel/d/a/tag/d_a_tag_myna_light/d_a_tag_myna_light.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTag_MynaLight_c {
    /* 80D5CB38 */ void create();
    /* 80D5CB9C */ void Delete();
    /* 80D5CBF4 */ void Execute();
    /* 80D5CD94 */ void Draw();
    /* 80D5CE40 */ void setTurnOnOffChange();
    /* 80D5D148 */ void getTurnOnTime();
    /* 80D5D154 */ void getTurnOffTime();
    /* 80D5D160 */ void initialize();
    /* 80D5D298 */ ~daTag_MynaLight_c();
};

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
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

//
// Forward References:
//

static void daTag_MynaLight_Create(void*);
static void daTag_MynaLight_Delete(void*);
static void daTag_MynaLight_Execute(void*);
static void daTag_MynaLight_Draw(void*);
static bool daTag_MynaLight_IsDelete(void*);

extern "C" void create__17daTag_MynaLight_cFv();
extern "C" void Delete__17daTag_MynaLight_cFv();
extern "C" void Execute__17daTag_MynaLight_cFv();
extern "C" void Draw__17daTag_MynaLight_cFv();
extern "C" void setTurnOnOffChange__17daTag_MynaLight_cFv();
extern "C" void getTurnOnTime__17daTag_MynaLight_cFv();
extern "C" void getTurnOffTime__17daTag_MynaLight_cFv();
extern "C" void initialize__17daTag_MynaLight_cFv();
extern "C" static void daTag_MynaLight_Create__FPv();
extern "C" static void daTag_MynaLight_Delete__FPv();
extern "C" static void daTag_MynaLight_Execute__FPv();
extern "C" static void daTag_MynaLight_Draw__FPv();
extern "C" static bool daTag_MynaLight_IsDelete__FPv();
extern "C" void __dt__17daTag_MynaLight_cFv();
extern "C" extern u32 const lit_3695;
extern "C" extern u32 const lit_3696;
extern "C" extern u32 const lit_3706;
extern "C" extern u32 const lit_3708;
extern "C" extern u32 const lit_3709;
extern "C" extern u32 const lit_3710;
extern "C" extern u8 const lit_3711[4];
extern "C" extern u32 const lit_3712;
extern "C" extern u32 const lit_3811;
extern "C" extern u32 const lit_3812;
extern "C" extern u32 const lit_3813;
extern "C" extern u32 const lit_3814;
extern "C" extern u32 const lit_3815;
extern "C" extern u32 const lit_3851;
extern "C" extern u32 const lit_3852;
extern "C" extern u32 const lit_3853;
extern "C" extern u32 const lit_3854;
extern "C" extern void* g_profile_TAG_MNLIGHT[12];
extern "C" extern void* __vt__17daTag_MynaLight_c[3];

//
// External References:
//

void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void dComIfGp_getReverb(int);
void dKy_BossLight_set(cXyz*, _GXColor*, f32, u8);
void cLib_addCalc(f32*, f32, f32, f32, f32);
void operator delete(void*);

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dKy_BossLight_set__FP4cXyzP8_GXColorfUc();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 struct_80450D64[4];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80D5D348-80D5D368 0020+00 s=1 e=0 z=0  None .data      daTag_MynaLight_MethodTable */
SECTION_DATA static void* daTag_MynaLight_MethodTable[8] = {
    (void*)daTag_MynaLight_Create__FPv,
    (void*)daTag_MynaLight_Delete__FPv,
    (void*)daTag_MynaLight_Execute__FPv,
    (void*)daTag_MynaLight_IsDelete__FPv,
    (void*)daTag_MynaLight_Draw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D5D368-80D5D398 0030+00 s=0 e=0 z=1  None .data      g_profile_TAG_MNLIGHT */
SECTION_DATA void* g_profile_TAG_MNLIGHT[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01250000, (void*)&g_fpcLf_Method,
    (void*)0x0000057C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00490000, (void*)&daTag_MynaLight_MethodTable,
    (void*)0x00064100, (void*)0x050E0000,
};

/* 80D5D398-80D5D3A4 000C+00 s=2 e=0 z=0  None .data      __vt__17daTag_MynaLight_c */
SECTION_DATA void* __vt__17daTag_MynaLight_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17daTag_MynaLight_cFv,
};

/* 80D5CB38-80D5CB9C 0064+00 s=1 e=0 z=0  None .text      create__17daTag_MynaLight_cFv */
//	80D5CB60: 80018B64 (__ct__10fopAc_ac_cFv)
//	80D5CB64: 80D5D398 (__vt__17daTag_MynaLight_c)
//	80D5CB68: 80D5D398 (__vt__17daTag_MynaLight_c)
//	80D5CB80: 80D5D160 (initialize__17daTag_MynaLight_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_MynaLight_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_myna_light/d_a_tag_myna_light/create__17daTag_MynaLight_cFv.s"
}
#pragma pop

/* 80D5CB9C-80D5CBF4 0058+00 s=1 e=0 z=0  None .text      Delete__17daTag_MynaLight_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_MynaLight_c::Delete() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_myna_light/d_a_tag_myna_light/Delete__17daTag_MynaLight_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5D300-80D5D304 0004+00 s=4 e=0 z=0  None .rodata    @3694 */
SECTION_RODATA static u32 const lit_3694 = 0x3D888889;

/* 80D5CBF4-80D5CD94 01A0+00 s=1 e=0 z=0  None .text      Execute__17daTag_MynaLight_cFv */
//	80D5CC04: 803621D8 (_savegpr_28)
//	80D5CC0C: 80D5D300 (lit_3694)
//	80D5CC10: 80D5D300 (lit_3694)
//	80D5CC14: 804061C0 (g_dComIfG_gameInfo)
//	80D5CC18: 804061C0 (g_dComIfG_gameInfo)
//	80D5CC38: 80D5D148 (getTurnOnTime__17daTag_MynaLight_cFv)
//	80D5CC44: 80D5D154 (getTurnOffTime__17daTag_MynaLight_cFv)
//	80D5CC58: 80D5D148 (getTurnOnTime__17daTag_MynaLight_cFv)
//	80D5CC6C: 80D5D154 (getTurnOffTime__17daTag_MynaLight_cFv)
//	80D5CC98: 80D5D154 (getTurnOffTime__17daTag_MynaLight_cFv)
//	80D5CCAC: 80D5D148 (getTurnOnTime__17daTag_MynaLight_cFv)
//	80D5CCDC: 80450D64 (struct_80450D64)
//	80D5CCE0: 80450D64 (struct_80450D64)
//	80D5CCF0: 8002D06C (dComIfGp_getReverb__Fi)
//	80D5CD04: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D5CD08: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D5CD30: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80D5CD44: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D5CD48: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D5CD74: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80D5CD80: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_MynaLight_c::Execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_myna_light/d_a_tag_myna_light/Execute__17daTag_MynaLight_cFv.s"
}
#pragma pop

/* 80D5CD94-80D5CE40 00AC+00 s=1 e=0 z=0  None .text      Draw__17daTag_MynaLight_cFv */
//	80D5CDAC: 80D5D300 (lit_3694)
//	80D5CDB0: 80D5D300 (lit_3694)
//	80D5CDD4: 8026F97C (cLib_addCalc__FPfffff)
//	80D5CDF0: 8026F97C (cLib_addCalc__FPfffff)
//	80D5CE20: 801A9D60 (dKy_BossLight_set__FP4cXyzP8_GXColorfUc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_MynaLight_c::Draw() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_myna_light/d_a_tag_myna_light/Draw__17daTag_MynaLight_cFv.s"
}
#pragma pop

/* 80D5CE40-80D5D148 0308+00 s=0 e=0 z=1  None .text      setTurnOnOffChange__17daTag_MynaLight_cFv
 */
//	80D5CE58: 80D5D300 (lit_3694)
//	80D5CE5C: 80D5D300 (lit_3694)
//	80D5CE8C: 80450D64 (struct_80450D64)
//	80D5CE90: 80450D64 (struct_80450D64)
//	80D5CEA0: 8002D06C (dComIfGp_getReverb__Fi)
//	80D5CEB4: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D5CEB8: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D5CEE0: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80D5CEF4: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D5CEF8: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D5CF24: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80D5CF90: 804061C0 (g_dComIfG_gameInfo)
//	80D5CF94: 804061C0 (g_dComIfG_gameInfo)
//	80D5CFD8: 8004CA90
//(set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80D5CFEC: 804061C0 (g_dComIfG_gameInfo)
//	80D5CFF0: 804061C0 (g_dComIfG_gameInfo)
//	80D5D034: 8004CA90
//(set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80D5D040: 80450D64 (struct_80450D64)
//	80D5D044: 80450D64 (struct_80450D64)
//	80D5D054: 8002D06C (dComIfGp_getReverb__Fi)
//	80D5D068: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D5D06C: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D5D094: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80D5D0A8: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D5D0AC: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D5D0D8: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_MynaLight_c::setTurnOnOffChange() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_myna_light/d_a_tag_myna_light/setTurnOnOffChange__17daTag_MynaLight_cFv.s"
}
#pragma pop

/* 80D5D148-80D5D154 000C+00 s=1 e=0 z=0  None .text      getTurnOnTime__17daTag_MynaLight_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_MynaLight_c::getTurnOnTime() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_myna_light/d_a_tag_myna_light/getTurnOnTime__17daTag_MynaLight_cFv.s"
}
#pragma pop

/* 80D5D154-80D5D160 000C+00 s=1 e=0 z=0  None .text      getTurnOffTime__17daTag_MynaLight_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_MynaLight_c::getTurnOffTime() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_myna_light/d_a_tag_myna_light/getTurnOffTime__17daTag_MynaLight_cFv.s"
}
#pragma pop

/* 80D5D160-80D5D210 00B0+00 s=1 e=0 z=0  None .text      initialize__17daTag_MynaLight_cFv */
//	80D5D178: 80D5D300 (lit_3694)
//	80D5D17C: 80D5D300 (lit_3694)
//	80D5D198: 8001A548 (fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_MynaLight_c::initialize() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_myna_light/d_a_tag_myna_light/initialize__17daTag_MynaLight_cFv.s"
}
#pragma pop

/* 80D5D210-80D5D230 0020+00 s=1 e=0 z=0  None .text      daTag_MynaLight_Create__FPv */
//	80D5D21C: 80D5CB38 (create__17daTag_MynaLight_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTag_MynaLight_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_myna_light/d_a_tag_myna_light/daTag_MynaLight_Create__FPv.s"
}
#pragma pop

/* 80D5D230-80D5D250 0020+00 s=1 e=0 z=0  None .text      daTag_MynaLight_Delete__FPv */
//	80D5D23C: 80D5CB9C (Delete__17daTag_MynaLight_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTag_MynaLight_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_myna_light/d_a_tag_myna_light/daTag_MynaLight_Delete__FPv.s"
}
#pragma pop

/* 80D5D250-80D5D270 0020+00 s=1 e=0 z=0  None .text      daTag_MynaLight_Execute__FPv */
//	80D5D25C: 80D5CBF4 (Execute__17daTag_MynaLight_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTag_MynaLight_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_myna_light/d_a_tag_myna_light/daTag_MynaLight_Execute__FPv.s"
}
#pragma pop

/* 80D5D270-80D5D290 0020+00 s=1 e=0 z=0  None .text      daTag_MynaLight_Draw__FPv */
//	80D5D27C: 80D5CD94 (Draw__17daTag_MynaLight_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTag_MynaLight_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_myna_light/d_a_tag_myna_light/daTag_MynaLight_Draw__FPv.s"
}
#pragma pop

/* 80D5D290-80D5D298 0008+00 s=1 e=0 z=0  None .text      daTag_MynaLight_IsDelete__FPv */
static bool daTag_MynaLight_IsDelete(void* param_0) {
    return true;
}

/* 80D5D298-80D5D2F8 0060+00 s=1 e=0 z=0  None .text      __dt__17daTag_MynaLight_cFv */
//	80D5D2B8: 80D5D398 (__vt__17daTag_MynaLight_c)
//	80D5D2BC: 80D5D398 (__vt__17daTag_MynaLight_c)
//	80D5D2C8: 80018C8C (__dt__10fopAc_ac_cFv)
//	80D5D2D8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTag_MynaLight_c::~daTag_MynaLight_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_myna_light/d_a_tag_myna_light/__dt__17daTag_MynaLight_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5D304-80D5D308 0004+00 s=0 e=0 z=0  None .rodata    @3695 */
SECTION_RODATA u32 const lit_3695 = 0x3F800000;

/* 80D5D308-80D5D30C 0004+00 s=0 e=0 z=0  None .rodata    @3696 */
SECTION_RODATA u32 const lit_3696 = 0xBF800000;

/* 80D5D30C-80D5D310 0004+00 s=0 e=0 z=0  None .rodata    @3706 */
SECTION_RODATA u32 const lit_3706 = 0xBC6642FF;

/* 80D5D310-80D5D314 0004+00 s=0 e=0 z=0  None .rodata    @3708 */
SECTION_RODATA u32 const lit_3708 = 0x3F000000;

/* 80D5D314-80D5D318 0004+00 s=0 e=0 z=0  None .rodata    @3709 */
SECTION_RODATA u32 const lit_3709 = 0x3DCCCCCD;

/* 80D5D318-80D5D31C 0004+00 s=0 e=0 z=0  None .rodata    @3710 */
SECTION_RODATA u32 const lit_3710 = 0x38D1B717;

/* 80D5D31C-80D5D320 0004+00 s=0 e=0 z=0  None .rodata    @3711 */
SECTION_RODATA u8 const lit_3711[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80D5D320-80D5D324 0004+00 s=0 e=0 z=0  None .rodata    @3712 */
SECTION_RODATA u32 const lit_3712 = 0x358637BD;

/* 80D5D324-80D5D328 0004+00 s=0 e=0 z=0  None .rodata    @3811 */
SECTION_RODATA u32 const lit_3811 = 0xC5A01000;

/* 80D5D328-80D5D32C 0004+00 s=0 e=0 z=0  None .rodata    @3812 */
SECTION_RODATA u32 const lit_3812 = 0xC2F80000;

/* 80D5D32C-80D5D330 0004+00 s=0 e=0 z=0  None .rodata    @3813 */
SECTION_RODATA u32 const lit_3813 = 0xC53FB000;

/* 80D5D330-80D5D334 0004+00 s=0 e=0 z=0  None .rodata    @3814 */
SECTION_RODATA u32 const lit_3814 = 0x3ECCCCCD;

/* 80D5D334-80D5D338 0004+00 s=0 e=0 z=0  None .rodata    @3815 */
SECTION_RODATA u32 const lit_3815 = 0x3E800000;

/* 80D5D338-80D5D33C 0004+00 s=0 e=0 z=0  None .rodata    @3851 */
SECTION_RODATA u32 const lit_3851 = 0xC1F00000;

/* 80D5D33C-80D5D340 0004+00 s=0 e=0 z=0  None .rodata    @3852 */
SECTION_RODATA u32 const lit_3852 = 0xC1700000;

/* 80D5D340-80D5D344 0004+00 s=0 e=0 z=0  None .rodata    @3853 */
SECTION_RODATA u32 const lit_3853 = 0x41F00000;

/* 80D5D344-80D5D348 0004+00 s=0 e=0 z=0  None .rodata    @3854 */
SECTION_RODATA u32 const lit_3854 = 0x42340000;
