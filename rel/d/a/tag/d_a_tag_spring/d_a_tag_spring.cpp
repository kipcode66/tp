//
// Generated By: dol2asm
// Translation Unit: d_a_tag_spring
//

#include "rel/d/a/tag/d_a_tag_spring/d_a_tag_spring.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct cXyz {};

struct fopAcM_wt_c {
    /* 8001DD84 */ void waterCheck(cXyz const*);
};

struct daTagSpring_c {
    /* 805A6A58 */ void initBaseMtx();
    /* 805A6A78 */ void setBaseMtx();
    /* 805A6AD0 */ void Create();
    /* 805A6AF4 */ void create();
    /* 805A6B5C */ void execute();
    /* 805A6C84 */ void checkArea();
    /* 805A6DFC */ bool _delete();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

//
// Forward References:
//

static void daTagSpring_Execute(daTagSpring_c*);
static void daTagSpring_Delete(daTagSpring_c*);
static void daTagSpring_Create(daTagSpring_c*);

extern "C" void initBaseMtx__13daTagSpring_cFv();
extern "C" void setBaseMtx__13daTagSpring_cFv();
extern "C" void Create__13daTagSpring_cFv();
extern "C" void create__13daTagSpring_cFv();
extern "C" void execute__13daTagSpring_cFv();
extern "C" void checkArea__13daTagSpring_cFv();
extern "C" bool _delete__13daTagSpring_cFv();
extern "C" static void daTagSpring_Execute__FP13daTagSpring_c();
extern "C" static void daTagSpring_Delete__FP13daTagSpring_c();
extern "C" static void daTagSpring_Create__FP13daTagSpring_c();
extern "C" extern u8 const lit_3773[4];
extern "C" extern u8 const lit_3774[8];
extern "C" extern u8 const lit_3775[8];
extern "C" extern u8 const lit_3776[8];
extern "C" extern u32 const lit_3777;
extern "C" extern void* g_profile_Tag_Spring[12];

//
// External References:
//

void mDoMtx_ZXYrotM(f32 (*)[4], s16, s16, s16);

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void waterCheck__11fopAcM_wt_cFPC4cXyz();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void PSMTXTrans();
extern "C" void PSVECSquareDistance();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 __float_nan;
extern "C" extern f32 mWaterY__11fopAcM_wt_c[1 + 1 /* padding */];

//
// Declarations:
//

/* 805A6A58-805A6A78 0020+00 s=1 e=0 z=0  None .text      initBaseMtx__13daTagSpring_cFv */
//	805A6A64: 805A6A78 (setBaseMtx__13daTagSpring_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagSpring_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spring/d_a_tag_spring/initBaseMtx__13daTagSpring_cFv.s"
}
#pragma pop

/* 805A6A78-805A6AD0 0058+00 s=1 e=0 z=0  None .text      setBaseMtx__13daTagSpring_cFv */
//	805A6A8C: 803DD470 (now__14mDoMtx_stack_c)
//	805A6A90: 803DD470 (now__14mDoMtx_stack_c)
//	805A6AA0: 803468E8 (PSMTXTrans)
//	805A6AA4: 803DD470 (now__14mDoMtx_stack_c)
//	805A6AA8: 803DD470 (now__14mDoMtx_stack_c)
//	805A6AB8: 8000C2A0 (mDoMtx_ZXYrotM__FPA4_fsss)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagSpring_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spring/d_a_tag_spring/setBaseMtx__13daTagSpring_cFv.s"
}
#pragma pop

/* 805A6AD0-805A6AF4 0024+00 s=1 e=0 z=0  None .text      Create__13daTagSpring_cFv */
//	805A6ADC: 805A6A58 (initBaseMtx__13daTagSpring_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagSpring_c::Create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spring/d_a_tag_spring/Create__13daTagSpring_cFv.s"
}
#pragma pop

/* 805A6AF4-805A6B5C 0068+00 s=1 e=0 z=0  None .text      create__13daTagSpring_cFv */
//	805A6B1C: 80018B64 (__ct__10fopAc_ac_cFv)
//	805A6B30: 805A6AD0 (Create__13daTagSpring_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagSpring_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spring/d_a_tag_spring/func_805A6AF4.s"
}
#pragma pop

/* ############################################################################################## */
/* 805A6E6C-805A6E70 0004+00 s=2 e=0 z=0  None .rodata    @3728 */
SECTION_RODATA static u32 const lit_3728 = 0x3F800000;

/* 805A6B5C-805A6C84 0128+00 s=1 e=0 z=0  None .text      execute__13daTagSpring_cFv */
//	805A6B84: 804061C0 (g_dComIfG_gameInfo)
//	805A6B88: 804061C0 (g_dComIfG_gameInfo)
//	805A6B94: 80035360 (isSwitch__10dSv_info_cCFii)
//	805A6BA8: 804061C0 (g_dComIfG_gameInfo)
//	805A6BAC: 804061C0 (g_dComIfG_gameInfo)
//	805A6BCC: 805A6C84 (checkArea__13daTagSpring_cFv)
//	805A6BDC: 8001DD84 (waterCheck__11fopAcM_wt_cFPC4cXyz)
//	805A6BE8: 804061C0 (g_dComIfG_gameInfo)
//	805A6BEC: 804061C0 (g_dComIfG_gameInfo)
//	805A6BFC: 80450CD8 (mWaterY__11fopAcM_wt_c)
//	805A6C00: 80450CD8 (mWaterY__11fopAcM_wt_c)
//	805A6C38: 804061C0 (g_dComIfG_gameInfo)
//	805A6C3C: 804061C0 (g_dComIfG_gameInfo)
//	805A6C44: 805A6E6C (lit_3728)
//	805A6C48: 805A6E6C (lit_3728)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagSpring_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spring/d_a_tag_spring/execute__13daTagSpring_cFv.s"
}
#pragma pop

/* 805A6C84-805A6DFC 0178+00 s=1 e=0 z=0  None .text      checkArea__13daTagSpring_cFv */
//	805A6C9C: 805A6E6C (lit_3728)
//	805A6CA0: 805A6E6C (lit_3728)
//	805A6CA4: 804061C0 (g_dComIfG_gameInfo)
//	805A6CA8: 804061C0 (g_dComIfG_gameInfo)
//	805A6CE4: 8034739C (PSVECSquareDistance)
//	805A6D54: 80450AE0 (__float_nan)
//	805A6D58: 80450AE0 (__float_nan)
//	805A6DC4: 80450AE0 (__float_nan)
//	805A6DC8: 80450AE0 (__float_nan)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagSpring_c::checkArea() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spring/d_a_tag_spring/checkArea__13daTagSpring_cFv.s"
}
#pragma pop

/* 805A6DFC-805A6E04 0008+00 s=1 e=0 z=0  None .text      _delete__13daTagSpring_cFv */
bool daTagSpring_c::_delete() {
    return true;
}

/* 805A6E04-805A6E24 0020+00 s=1 e=0 z=0  None .text      daTagSpring_Execute__FP13daTagSpring_c */
//	805A6E10: 805A6B5C (execute__13daTagSpring_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagSpring_Execute(daTagSpring_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spring/d_a_tag_spring/daTagSpring_Execute__FP13daTagSpring_c.s"
}
#pragma pop

/* 805A6E24-805A6E44 0020+00 s=1 e=0 z=0  None .text      daTagSpring_Delete__FP13daTagSpring_c */
//	805A6E30: 805A6DFC (_delete__13daTagSpring_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagSpring_Delete(daTagSpring_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spring/d_a_tag_spring/daTagSpring_Delete__FP13daTagSpring_c.s"
}
#pragma pop

/* 805A6E44-805A6E64 0020+00 s=1 e=0 z=0  None .text      daTagSpring_Create__FP13daTagSpring_c */
//	805A6E50: 805A6AF4 (create__13daTagSpring_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagSpring_Create(daTagSpring_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spring/d_a_tag_spring/daTagSpring_Create__FP13daTagSpring_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 805A6E70-805A6E74 0004+00 s=0 e=0 z=0  None .rodata    @3773 */
SECTION_RODATA u8 const lit_3773[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 805A6E74-805A6E7C 0008+00 s=0 e=0 z=0  None .rodata    @3774 */
SECTION_RODATA u8 const lit_3774[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 805A6E7C-805A6E84 0008+00 s=0 e=0 z=0  None .rodata    @3775 */
SECTION_RODATA u8 const lit_3775[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 805A6E84-805A6E8C 0008+00 s=0 e=0 z=0  None .rodata    @3776 */
SECTION_RODATA u8 const lit_3776[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 805A6E8C-805A6E90 0004+00 s=0 e=0 z=0  None .rodata    @3777 */
SECTION_RODATA u32 const lit_3777 = 0x447A0000;

/* 805A6E90-805A6EB0 0020+00 s=1 e=0 z=0  None .data      l_daTagSpring_Method */
SECTION_DATA static void* l_daTagSpring_Method[8] = {
    (void*)daTagSpring_Create__FP13daTagSpring_c,
    (void*)daTagSpring_Delete__FP13daTagSpring_c,
    (void*)daTagSpring_Execute__FP13daTagSpring_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 805A6EB0-805A6EE0 0030+00 s=0 e=0 z=1  None .data      g_profile_Tag_Spring */
SECTION_DATA void* g_profile_Tag_Spring[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01AD0000, (void*)&g_fpcLf_Method,
    (void*)0x0000056C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x024B0000, (void*)&l_daTagSpring_Method,
    (void*)0x00040000, (void*)0x000E0000,
};
