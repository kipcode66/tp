//
// Generated By: dol2asm
// Translation Unit: d_a_tag_waterfall
//

#include "rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct mDoMtx_stack_c {
    /* 8000CD9C */ void transM(f32, f32, f32);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct cXyz {};

struct daTagWaterFall_c {
    /* 80D64680 */ bool draw();
    /* 80D64724 */ void getEllipseY(f32);
    /* 80D64768 */ void checkHitWaterFall(cXyz);
    /* 80D6486C */ void checkHitWaterFallCamera();
    /* 80D648B4 */ void execute();
    /* 80D64AE0 */ void _delete();
    /* 80D64B20 */ void create();
};

struct daTagWaterFall_HIO_c {
    /* 80D6462C */ daTagWaterFall_HIO_c();
    /* 80D64CDC */ ~daTagWaterFall_HIO_c();
};

//
// Forward References:
//

static void daTagWaterFall_Draw(daTagWaterFall_c*);
static void s_waterfall(void*, void*);
static void daTagWaterFall_Execute(daTagWaterFall_c*);
static bool daTagWaterFall_IsDelete(daTagWaterFall_c*);
static void daTagWaterFall_Delete(daTagWaterFall_c*);
static void daTagWaterFall_Create(daTagWaterFall_c*);

extern "C" void __ct__20daTagWaterFall_HIO_cFv();
extern "C" bool draw__16daTagWaterFall_cFv();
extern "C" static void daTagWaterFall_Draw__FP16daTagWaterFall_c();
extern "C" static void s_waterfall__FPvPv();
extern "C" void getEllipseY__16daTagWaterFall_cFf();
extern "C" void checkHitWaterFall__16daTagWaterFall_cF4cXyz();
extern "C" void checkHitWaterFallCamera__16daTagWaterFall_cFv();
extern "C" void execute__16daTagWaterFall_cFv();
extern "C" static void daTagWaterFall_Execute__FP16daTagWaterFall_c();
extern "C" static bool daTagWaterFall_IsDelete__FP16daTagWaterFall_c();
extern "C" void _delete__16daTagWaterFall_cFv();
extern "C" static void daTagWaterFall_Delete__FP16daTagWaterFall_c();
extern "C" void create__16daTagWaterFall_cFv();
extern "C" static void daTagWaterFall_Create__FP16daTagWaterFall_c();
extern "C" void __dt__20daTagWaterFall_HIO_cFv();
extern "C" void __sinit_d_a_tag_waterfall_cpp();
extern "C" extern u32 const lit_3759;
extern "C" extern u32 const lit_3760;
extern "C" extern void* g_profile_Tag_WaterFall[12];
extern "C" extern void* __vt__20daTagWaterFall_HIO_c[3];

//
// External References:
//

void mDoMtx_YrotS(f32 (*)[4], s16);
void fopAc_IsActor(void*);
void fpcEx_Search(void* (*)(void*, void*), void*);
void fpcM_IsCreating(unsigned int);
void dKy_fog_startendz_set(f32, f32, f32);
void dKy_custom_colset(u8, u8, f32);
void cLib_chaseF(f32*, f32, f32);
void operator delete(void*);

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcM_IsCreating__FUi();
extern "C" void dKy_fog_startendz_set__Ffff();
extern "C" void dKy_custom_colset__FUcUcf();
extern "C" void cLib_chaseF__FPfff();
extern "C" void __dl__FPv();
extern "C" void PSMTXMultVec();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80D64D74-80D64D78 0004+00 s=4 e=0 z=0  None .rodata    @3758 */
SECTION_RODATA static u8 const lit_3758[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80D64D94-80D64D98 0004+00 s=2 e=0 z=0  None .data      m_master_id */
SECTION_DATA static u32 m_master_id = 0xFFFFFFFF;

/* 80D64D98-80D64DB8 0020+00 s=1 e=0 z=0  None .data      l_daTagWaterFall_Method */
SECTION_DATA static void* l_daTagWaterFall_Method[8] = {
    (void*)daTagWaterFall_Create__FP16daTagWaterFall_c,
    (void*)daTagWaterFall_Delete__FP16daTagWaterFall_c,
    (void*)daTagWaterFall_Execute__FP16daTagWaterFall_c,
    (void*)daTagWaterFall_IsDelete__FP16daTagWaterFall_c,
    (void*)daTagWaterFall_Draw__FP16daTagWaterFall_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D64DB8-80D64DE8 0030+00 s=0 e=0 z=1  None .data      g_profile_Tag_WaterFall */
SECTION_DATA void* g_profile_Tag_WaterFall[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01F80000, (void*)&g_fpcLf_Method,
    (void*)0x00000584, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00C60000, (void*)&l_daTagWaterFall_Method,
    (void*)0x00044000, (void*)NULL,
};

/* 80D64DE8-80D64DF4 000C+00 s=2 e=0 z=0  None .data      __vt__20daTagWaterFall_HIO_c */
SECTION_DATA void* __vt__20daTagWaterFall_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__20daTagWaterFall_HIO_cFv,
};

/* 80D6462C-80D64680 0054+00 s=1 e=0 z=0  None .text      __ct__20daTagWaterFall_HIO_cFv */
//	80D6462C: 80D64D74 (lit_3758)
//	80D64630: 80D64D74 (lit_3758)
//	80D64634: 80D64DE8 (__vt__20daTagWaterFall_HIO_c)
//	80D64638: 80D64DE8 (__vt__20daTagWaterFall_HIO_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTagWaterFall_HIO_c::daTagWaterFall_HIO_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/__ct__20daTagWaterFall_HIO_cFv.s"
}
#pragma pop

/* 80D64680-80D64688 0008+00 s=1 e=0 z=0  None .text      draw__16daTagWaterFall_cFv */
bool daTagWaterFall_c::draw() {
    return true;
}

/* 80D64688-80D646A8 0020+00 s=1 e=0 z=0  None .text      daTagWaterFall_Draw__FP16daTagWaterFall_c
 */
//	80D64694: 80D64680 (draw__16daTagWaterFall_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagWaterFall_Draw(daTagWaterFall_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/daTagWaterFall_Draw__FP16daTagWaterFall_c.s"
}
#pragma pop

/* 80D646A8-80D64724 007C+00 s=1 e=0 z=0  None .text      s_waterfall__FPvPv */
//	80D646BC: 80018CE0 (fopAc_IsActor__FPv)
//	80D646E8: 80022138 (fpcM_IsCreating__FUi)
//	80D646F8: 80D6486C (checkHitWaterFallCamera__16daTagWaterFall_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void s_waterfall(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/s_waterfall__FPvPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D64D78-80D64D7C 0004+00 s=0 e=0 z=0  None .rodata    @3759 */
SECTION_RODATA u32 const lit_3759 = 0x461C4000;

/* 80D64D7C-80D64D80 0004+00 s=0 e=0 z=0  None .rodata    @3760 */
SECTION_RODATA u32 const lit_3760 = 0x40400000;

/* 80D64D80-80D64D84 0004+00 s=2 e=0 z=0  None .rodata    @3803 */
SECTION_RODATA static u32 const lit_3803 = 0x3F800000;

/* 80D64724-80D64768 0044+00 s=1 e=0 z=0  None .text      getEllipseY__16daTagWaterFall_cFf */
//	80D64730: 80D64D80 (lit_3803)
//	80D64734: 80D64D80 (lit_3803)
//	80D6474C: 80D64D74 (lit_3758)
//	80D64750: 80D64D74 (lit_3758)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagWaterFall_c::getEllipseY(f32 param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/getEllipseY__16daTagWaterFall_cFf.s"
}
#pragma pop

/* 80D64768-80D6486C 0104+00 s=1 e=0 z=2  None .text checkHitWaterFall__16daTagWaterFall_cF4cXyz
 */
//	80D64790: 803DD470 (now__14mDoMtx_stack_c)
//	80D64794: 803DD470 (now__14mDoMtx_stack_c)
//	80D647A4: 8000C3DC (mDoMtx_YrotS__FPA4_fs)
//	80D647C0: 8000CD9C (transM__14mDoMtx_stack_cFfff)
//	80D647C4: 803DD470 (now__14mDoMtx_stack_c)
//	80D647C8: 803DD470 (now__14mDoMtx_stack_c)
//	80D647D4: 80346D6C (PSMTXMultVec)
//	80D647F0: 80D64724 (getEllipseY__16daTagWaterFall_cFf)
//	80D64824: 80D64D74 (lit_3758)
//	80D64828: 80D64D74 (lit_3758)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagWaterFall_c::checkHitWaterFall(cXyz param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/checkHitWaterFall__16daTagWaterFall_cF4cXyz.s"
}
#pragma pop

/* 80D6486C-80D648B4 0048+00 s=1 e=0 z=0  None .text checkHitWaterFallCamera__16daTagWaterFall_cFv
 */
//	80D64878: 804061C0 (g_dComIfG_gameInfo)
//	80D6487C: 804061C0 (g_dComIfG_gameInfo)
//	80D648A0: 80D64768 (checkHitWaterFall__16daTagWaterFall_cF4cXyz)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagWaterFall_c::checkHitWaterFallCamera() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/checkHitWaterFallCamera__16daTagWaterFall_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D64E00-80D64E04 0004+00 s=2 e=0 z=0  None .bss       None */
static u8 data_80D64E00[4];

/* 80D64E04-80D64E10 000C+00 s=1 e=0 z=0  None .bss       @3753 */
static u8 lit_3753[12];

/* 80D64E10-80D64E34 0024+00 s=3 e=0 z=0  None .bss       l_HIO */
static u8 l_HIO[36];

/* 80D648B4-80D64AB8 0204+00 s=1 e=0 z=0  None .text      execute__16daTagWaterFall_cFv */
//	80D648CC: 80D64D94 (m_master_id)
//	80D648D0: 80D64D94 (m_master_id)
//	80D648FC: 8042CA54 (g_env_light)
//	80D64900: 8042CA54 (g_env_light)
//	80D64928: 80D64D80 (lit_3803)
//	80D6492C: 80D64D80 (lit_3803)
//	80D6493C: 80D646A8 (s_waterfall__FPvPv)
//	80D64940: 80D646A8 (s_waterfall__FPvPv)
//	80D64948: 80021338 (fpcEx_Search__FPFPvPv_PvPv)
//	80D6496C: 80D64D80 (lit_3803)
//	80D64970: 80D64D80 (lit_3803)
//	80D649AC: 80D64D80 (lit_3803)
//	80D649B0: 80D64D80 (lit_3803)
//	80D649C8: 80D64D80 (lit_3803)
//	80D649CC: 80D64D80 (lit_3803)
//	80D649D0: 80D64E10 (l_HIO)
//	80D649D4: 80D64E10 (l_HIO)
//	80D649E0: 80270740 (cLib_chaseF__FPfff)
//	80D649FC: 801A880C (dKy_custom_colset__FUcUcf)
//	80D64A10: 801A880C (dKy_custom_colset__FUcUcf)
//	80D64A14: 80D64E10 (l_HIO)
//	80D64A18: 80D64E10 (l_HIO)
//	80D64A34: 80D64D80 (lit_3803)
//	80D64A38: 80D64D80 (lit_3803)
//	80D64A54: 80D64D80 (lit_3803)
//	80D64A58: 80D64D80 (lit_3803)
//	80D64A68: 80D64E10 (l_HIO)
//	80D64A6C: 80D64E10 (l_HIO)
//	80D64A90: 80D64D80 (lit_3803)
//	80D64A94: 80D64D80 (lit_3803)
//	80D64A98: 801A80D0 (dKy_fog_startendz_set__Ffff)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagWaterFall_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/execute__16daTagWaterFall_cFv.s"
}
#pragma pop

/* 80D64AB8-80D64AD8 0020+00 s=1 e=0 z=0  None .text daTagWaterFall_Execute__FP16daTagWaterFall_c
 */
//	80D64AC4: 80D648B4 (execute__16daTagWaterFall_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagWaterFall_Execute(daTagWaterFall_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/daTagWaterFall_Execute__FP16daTagWaterFall_c.s"
}
#pragma pop

/* 80D64AD8-80D64AE0 0008+00 s=1 e=0 z=0  None .text daTagWaterFall_IsDelete__FP16daTagWaterFall_c
 */
static bool daTagWaterFall_IsDelete(daTagWaterFall_c* param_0) {
    return true;
}

/* 80D64AE0-80D64B00 0020+00 s=1 e=0 z=0  None .text      _delete__16daTagWaterFall_cFv */
//	80D64AF0: 80D64E00 (data_80D64E00)
//	80D64AF4: 80D64E00 (data_80D64E00)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagWaterFall_c::_delete() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/_delete__16daTagWaterFall_cFv.s"
}
#pragma pop

/* 80D64B00-80D64B20 0020+00 s=1 e=0 z=0  None .text daTagWaterFall_Delete__FP16daTagWaterFall_c
 */
//	80D64B0C: 80D64AE0 (_delete__16daTagWaterFall_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagWaterFall_Delete(daTagWaterFall_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/daTagWaterFall_Delete__FP16daTagWaterFall_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D64D84-80D64D8C 0008+00 s=1 e=0 z=0  None .rodata    @3959 */
SECTION_RODATA static u8 const lit_3959[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D64D8C-80D64D94 0008+00 s=1 e=0 z=0  None .rodata    @3960 */
SECTION_RODATA static u8 const lit_3960[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80D64B20-80D64CBC 019C+00 s=1 e=0 z=0  None .text      create__16daTagWaterFall_cFv */
//	80D64B48: 80018B64 (__ct__10fopAc_ac_cFv)
//	80D64B58: 80D64E00 (data_80D64E00)
//	80D64B5C: 80D64E00 (data_80D64E00)
//	80D64B78: 80D64E10 (l_HIO)
//	80D64B7C: 80D64E10 (l_HIO)
//	80D64B8C: 80D64D84 (lit_3959)
//	80D64B90: 80D64D84 (lit_3959)
//	80D64BB0: 80D64D74 (lit_3758)
//	80D64BB4: 80D64D74 (lit_3758)
//	80D64BCC: 80D64D84 (lit_3959)
//	80D64BD0: 80D64D84 (lit_3959)
//	80D64BF0: 80D64D74 (lit_3758)
//	80D64BF4: 80D64D74 (lit_3758)
//	80D64C0C: 80D64D8C (lit_3960)
//	80D64C10: 80D64D8C (lit_3960)
//	80D64C34: 80D64D74 (lit_3758)
//	80D64C38: 80D64D74 (lit_3758)
//	80D64C5C: 80D64D94 (m_master_id)
//	80D64C60: 80D64D94 (m_master_id)
//	80D64C88: 80D64D94 (m_master_id)
//	80D64C8C: 80D64D94 (m_master_id)
//	80D64C90: 80D64D74 (lit_3758)
//	80D64C94: 80D64D74 (lit_3758)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagWaterFall_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/create__16daTagWaterFall_cFv.s"
}
#pragma pop

/* 80D64CBC-80D64CDC 0020+00 s=1 e=0 z=0  None .text daTagWaterFall_Create__FP16daTagWaterFall_c
 */
//	80D64CC8: 80D64B20 (create__16daTagWaterFall_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagWaterFall_Create(daTagWaterFall_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/daTagWaterFall_Create__FP16daTagWaterFall_c.s"
}
#pragma pop

/* 80D64CDC-80D64D24 0048+00 s=2 e=0 z=0  None .text      __dt__20daTagWaterFall_HIO_cFv */
//	80D64CF4: 80D64DE8 (__vt__20daTagWaterFall_HIO_c)
//	80D64CF8: 80D64DE8 (__vt__20daTagWaterFall_HIO_c)
//	80D64D08: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTagWaterFall_HIO_c::~daTagWaterFall_HIO_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/__dt__20daTagWaterFall_HIO_cFv.s"
}
#pragma pop

/* 80D64D24-80D64D60 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_tag_waterfall_cpp */
//	80D64D30: 80D64E10 (l_HIO)
//	80D64D34: 80D64E10 (l_HIO)
//	80D64D38: 80D6462C (__ct__20daTagWaterFall_HIO_cFv)
//	80D64D3C: 80D64CDC (__dt__20daTagWaterFall_HIO_cFv)
//	80D64D40: 80D64CDC (__dt__20daTagWaterFall_HIO_cFv)
//	80D64D44: 80D64E04 (lit_3753)
//	80D64D48: 80D64E04 (lit_3753)
//	80D64D4C: 80D645B8 (__register_global_object)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_tag_waterfall_cpp() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_waterfall/d_a_tag_waterfall/__sinit_d_a_tag_waterfall_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80D64D24 = (void*)__sinit_d_a_tag_waterfall_cpp;
#pragma pop
