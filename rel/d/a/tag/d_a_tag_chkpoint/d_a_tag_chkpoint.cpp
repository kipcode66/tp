//
// Generated By: dol2asm
// Translation Unit: d_a_tag_chkpoint
//

#include "rel/d/a/tag/d_a_tag_chkpoint/d_a_tag_chkpoint.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTag_Chk_c {
    /* 8048A6F8 */ void execute();
};

struct cXyz {};

struct daPy_py_c {
    /* 8015F4F0 */ void setLookPos(cXyz*);
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

//
// Forward References:
//

extern "C" void execute__11daTag_Chk_cFv();
extern "C" static bool daTag_Chk_Draw__FP11daTag_Chk_c();
extern "C" static void daTag_Chk_Execute__FP11daTag_Chk_c();
extern "C" static bool daTag_Chk_IsDelete__FP11daTag_Chk_c();
extern "C" static void daTag_Chk_Delete__FP11daTag_Chk_c();
extern "C" static void daTag_Chk_Create__FP10fopAc_ac_c();
extern "C" extern void* g_profile_TAG_CHKPOINT[12];

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void setLookPos__9daPy_py_cFP4cXyz();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 __float_nan;
extern "C" extern u8 mStayNo__20dStage_roomControl_c[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 8048AC28-8048AC34 000000 0009+03 2/2 0/0 0/0 .rodata          @3769 */
SECTION_RODATA static u8 const lit_3769[9 + 3 /* padding */] = {
    0x01,
    0x01,
    0x00,
    0x00,
    0x00,
    0x00,
    0x01,
    0x01,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8048AC28, &lit_3769);

/* 8048AC34-8048AC38 00000C 0004+00 0/2 0/0 0/0 .rodata          @3843 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3843[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8048AC34, &lit_3843);
#pragma pop

/* 8048AC38-8048AC40 000010 0008+00 0/1 0/0 0/0 .rodata          @3844 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3844[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8048AC38, &lit_3844);
#pragma pop

/* 8048AC40-8048AC48 000018 0008+00 0/1 0/0 0/0 .rodata          @3845 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3845[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8048AC40, &lit_3845);
#pragma pop

/* 8048AC48-8048AC50 000020 0008+00 0/1 0/0 0/0 .rodata          @3846 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3846[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8048AC48, &lit_3846);
#pragma pop

/* 8048A6F8-8048A9EC 000078 02F4+00 1/1 0/0 0/0 .text            execute__11daTag_Chk_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Chk_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_chkpoint/d_a_tag_chkpoint/execute__11daTag_Chk_cFv.s"
}
#pragma pop

/* 8048A9EC-8048A9F4 00036C 0008+00 1/0 0/0 0/0 .text            daTag_Chk_Draw__FP11daTag_Chk_c */
static bool daTag_Chk_Draw(daTag_Chk_c* param_0) {
    return true;
}

/* 8048A9F4-8048AA18 000374 0024+00 1/0 0/0 0/0 .text            daTag_Chk_Execute__FP11daTag_Chk_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_Chk_Execute(daTag_Chk_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_chkpoint/d_a_tag_chkpoint/daTag_Chk_Execute__FP11daTag_Chk_c.s"
}
#pragma pop

/* 8048AA18-8048AA20 000398 0008+00 1/0 0/0 0/0 .text            daTag_Chk_IsDelete__FP11daTag_Chk_c
 */
static bool daTag_Chk_IsDelete(daTag_Chk_c* param_0) {
    return true;
}

/* 8048AA20-8048AA50 0003A0 0030+00 1/0 0/0 0/0 .text            daTag_Chk_Delete__FP11daTag_Chk_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_Chk_Delete(daTag_Chk_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_chkpoint/d_a_tag_chkpoint/daTag_Chk_Delete__FP11daTag_Chk_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 8048AC50-8048AC54 000028 0004+00 0/1 0/0 0/0 .rodata          @3925 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3925 = 50.0f;
COMPILER_STRIP_GATE(0x8048AC50, &lit_3925);
#pragma pop

/* 8048AC54-8048AC58 00002C 0004+00 0/1 0/0 0/0 .rodata          @3926 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3926 = 100.0f;
COMPILER_STRIP_GATE(0x8048AC54, &lit_3926);
#pragma pop

/* 8048AC58-8048AC5C 000030 0004+00 0/1 0/0 0/0 .rodata          @3927 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3927 = 10.0f;
COMPILER_STRIP_GATE(0x8048AC58, &lit_3927);
#pragma pop

/* 8048AC5C-8048AC60 000034 0004+00 0/1 0/0 0/0 .rodata          @3928 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3928 = 0.5f;
COMPILER_STRIP_GATE(0x8048AC5C, &lit_3928);
#pragma pop

/* 8048AC60-8048AC68 000038 0008+00 0/1 0/0 0/0 .rodata          @3930 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3930[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8048AC60, &lit_3930);
#pragma pop

/* 8048AA50-8048AC20 0003D0 01D0+00 1/0 0/0 0/0 .text            daTag_Chk_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_Chk_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_chkpoint/d_a_tag_chkpoint/daTag_Chk_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 8048AC68-8048AC88 -00001 0020+00 1/0 0/0 0/0 .data            l_daTag_Chk_Method */
SECTION_DATA static void* l_daTag_Chk_Method[8] = {
    (void*)daTag_Chk_Create__FP10fopAc_ac_c,
    (void*)daTag_Chk_Delete__FP11daTag_Chk_c,
    (void*)daTag_Chk_Execute__FP11daTag_Chk_c,
    (void*)daTag_Chk_IsDelete__FP11daTag_Chk_c,
    (void*)daTag_Chk_Draw__FP11daTag_Chk_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8048AC88-8048ACB8 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_TAG_CHKPOINT */
SECTION_DATA extern void* g_profile_TAG_CHKPOINT[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02D00000, (void*)&g_fpcLf_Method,
    (void*)0x00000588, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01180000, (void*)&l_daTag_Chk_Method,
    (void*)0x00044000, (void*)0x00060000,
};
