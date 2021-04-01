//
// Generated By: dol2asm
// Translation Unit: d_a_tag_lv5soup
//

#include "rel/d/a/tag/d_a_tag_lv5soup/d_a_tag_lv5soup.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTag_Lv5Soup_c {
    /* 80D5AD58 */ void create();
    /* 80D5ADEC */ bool Delete();
    /* 80D5ADF4 */ void Execute();
    /* 80D5AE9C */ bool Draw();
    /* 80D5AEA4 */ void isAreaCheck();
    /* 80D5B0F4 */ ~daTag_Lv5Soup_c();
};

struct dSv_event_c {
    /* 8003498C */ void onEventBit(u16);
    /* 800349BC */ void isEventBit(u16) const;
};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

//
// Forward References:
//

static void daTag_Lv5Soup_Create(void*);
static void daTag_Lv5Soup_Delete(void*);
static void daTag_Lv5Soup_Execute(void*);
static void daTag_Lv5Soup_Draw(void*);
static bool daTag_Lv5Soup_IsDelete(void*);

extern "C" void create__15daTag_Lv5Soup_cFv();
extern "C" bool Delete__15daTag_Lv5Soup_cFv();
extern "C" void Execute__15daTag_Lv5Soup_cFv();
extern "C" bool Draw__15daTag_Lv5Soup_cFv();
extern "C" void isAreaCheck__15daTag_Lv5Soup_cFv();
extern "C" static void daTag_Lv5Soup_Create__FPv();
extern "C" static void daTag_Lv5Soup_Delete__FPv();
extern "C" static void daTag_Lv5Soup_Execute__FPv();
extern "C" static void daTag_Lv5Soup_Draw__FPv();
extern "C" static bool daTag_Lv5Soup_IsDelete__FPv();
extern "C" void __dt__15daTag_Lv5Soup_cFv();
extern "C" extern u32 const lit_3656;
extern "C" extern u32 const lit_3657;
extern "C" extern u32 const lit_3658;
extern "C" extern u32 const lit_3743;
extern "C" extern u8 const lit_3744[4];
extern "C" extern u8 const lit_3745[8];
extern "C" extern u8 const lit_3746[8];
extern "C" extern u8 const lit_3747[8];
extern "C" extern void* g_profile_TAG_LV5SOUP[12];
extern "C" extern void* __vt__15daTag_Lv5Soup_c[3];

//
// External References:
//

void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void operator delete(void*);

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void onEventBit__11dSv_event_cFUs();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __dl__FPv();
extern "C" void PSVECSquareMag();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 __float_nan;

//
// Declarations:
//

/* ############################################################################################## */
/* 80D5B15C-80D5B160 0004+00 s=2 e=0 z=0  None .rodata    @3655 */
SECTION_RODATA static u32 const lit_3655 = 0xC1F00000;

/* 80D5B18C-80D5B1AC 0020+00 s=1 e=0 z=0  None .data      daTag_Lv5Soup_MethodTable */
SECTION_DATA static void* daTag_Lv5Soup_MethodTable[8] = {
    (void*)daTag_Lv5Soup_Create__FPv,
    (void*)daTag_Lv5Soup_Delete__FPv,
    (void*)daTag_Lv5Soup_Execute__FPv,
    (void*)daTag_Lv5Soup_IsDelete__FPv,
    (void*)daTag_Lv5Soup_Draw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D5B1AC-80D5B1DC 0030+00 s=0 e=0 z=1  None .data      g_profile_TAG_LV5SOUP */
SECTION_DATA void* g_profile_TAG_LV5SOUP[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01220000, (void*)&g_fpcLf_Method,
    (void*)0x0000056C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00460000, (void*)&daTag_Lv5Soup_MethodTable,
    (void*)0x00064100, (void*)0x050E0000,
};

/* 80D5B1DC-80D5B1E8 000C+00 s=2 e=0 z=0  None .data      __vt__15daTag_Lv5Soup_c */
SECTION_DATA void* __vt__15daTag_Lv5Soup_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15daTag_Lv5Soup_cFv,
};

/* 80D5AD58-80D5ADEC 0094+00 s=1 e=0 z=0  None .text      create__15daTag_Lv5Soup_cFv */
//	80D5AD70: 80D5B15C (lit_3655)
//	80D5AD74: 80D5B15C (lit_3655)
//	80D5AD8C: 80018B64 (__ct__10fopAc_ac_cFv)
//	80D5AD90: 80D5B1DC (__vt__15daTag_Lv5Soup_c)
//	80D5AD94: 80D5B1DC (__vt__15daTag_Lv5Soup_c)
//	80D5ADC4: 8001A548 (fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Lv5Soup_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv5soup/d_a_tag_lv5soup/create__15daTag_Lv5Soup_cFv.s"
}
#pragma pop

/* 80D5ADEC-80D5ADF4 0008+00 s=1 e=0 z=0  None .text      Delete__15daTag_Lv5Soup_cFv */
bool daTag_Lv5Soup_c::Delete() {
    return true;
}

/* 80D5ADF4-80D5AE9C 00A8+00 s=1 e=0 z=0  None .text      Execute__15daTag_Lv5Soup_cFv */
//	80D5AE04: 80D5AEA4 (isAreaCheck__15daTag_Lv5Soup_cFv)
//	80D5AE10: 804061C0 (g_dComIfG_gameInfo)
//	80D5AE14: 804061C0 (g_dComIfG_gameInfo)
//	80D5AE24: 800349BC (isEventBit__11dSv_event_cCFUs)
//	80D5AE38: 800349BC (isEventBit__11dSv_event_cCFUs)
//	80D5AE4C: 8003498C (onEventBit__11dSv_event_cFUs)
//	80D5AE58: 800349BC (isEventBit__11dSv_event_cCFUs)
//	80D5AE6C: 800349BC (isEventBit__11dSv_event_cCFUs)
//	80D5AE80: 8003498C (onEventBit__11dSv_event_cFUs)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Lv5Soup_c::Execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv5soup/d_a_tag_lv5soup/Execute__15daTag_Lv5Soup_cFv.s"
}
#pragma pop

/* 80D5AE9C-80D5AEA4 0008+00 s=1 e=0 z=0  None .text      Draw__15daTag_Lv5Soup_cFv */
bool daTag_Lv5Soup_c::Draw() {
    return true;
}

/* 80D5AEA4-80D5B06C 01C8+00 s=1 e=0 z=0  None .text      isAreaCheck__15daTag_Lv5Soup_cFv */
//	80D5AECC: 80D5B15C (lit_3655)
//	80D5AED0: 80D5B15C (lit_3655)
//	80D5AED8: 804061C0 (g_dComIfG_gameInfo)
//	80D5AEDC: 804061C0 (g_dComIfG_gameInfo)
//	80D5AEEC: 80266B34 (__mi__4cXyzCFRC3Vec)
//	80D5AF30: 80347138 (PSVECSquareMag)
//	80D5AFA0: 80450AE0 (__float_nan)
//	80D5AFA4: 80450AE0 (__float_nan)
//	80D5B010: 80450AE0 (__float_nan)
//	80D5B014: 80450AE0 (__float_nan)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Lv5Soup_c::isAreaCheck() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv5soup/d_a_tag_lv5soup/isAreaCheck__15daTag_Lv5Soup_cFv.s"
}
#pragma pop

/* 80D5B06C-80D5B08C 0020+00 s=1 e=0 z=0  None .text      daTag_Lv5Soup_Create__FPv */
//	80D5B078: 80D5AD58 (create__15daTag_Lv5Soup_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTag_Lv5Soup_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv5soup/d_a_tag_lv5soup/daTag_Lv5Soup_Create__FPv.s"
}
#pragma pop

/* 80D5B08C-80D5B0AC 0020+00 s=1 e=0 z=0  None .text      daTag_Lv5Soup_Delete__FPv */
//	80D5B098: 80D5ADEC (Delete__15daTag_Lv5Soup_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTag_Lv5Soup_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv5soup/d_a_tag_lv5soup/daTag_Lv5Soup_Delete__FPv.s"
}
#pragma pop

/* 80D5B0AC-80D5B0CC 0020+00 s=1 e=0 z=0  None .text      daTag_Lv5Soup_Execute__FPv */
//	80D5B0B8: 80D5ADF4 (Execute__15daTag_Lv5Soup_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTag_Lv5Soup_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv5soup/d_a_tag_lv5soup/daTag_Lv5Soup_Execute__FPv.s"
}
#pragma pop

/* 80D5B0CC-80D5B0EC 0020+00 s=1 e=0 z=0  None .text      daTag_Lv5Soup_Draw__FPv */
//	80D5B0D8: 80D5AE9C (Draw__15daTag_Lv5Soup_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTag_Lv5Soup_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv5soup/d_a_tag_lv5soup/daTag_Lv5Soup_Draw__FPv.s"
}
#pragma pop

/* 80D5B0EC-80D5B0F4 0008+00 s=1 e=0 z=0  None .text      daTag_Lv5Soup_IsDelete__FPv */
static bool daTag_Lv5Soup_IsDelete(void* param_0) {
    return true;
}

/* 80D5B0F4-80D5B154 0060+00 s=1 e=0 z=0  None .text      __dt__15daTag_Lv5Soup_cFv */
//	80D5B114: 80D5B1DC (__vt__15daTag_Lv5Soup_c)
//	80D5B118: 80D5B1DC (__vt__15daTag_Lv5Soup_c)
//	80D5B124: 80018C8C (__dt__10fopAc_ac_cFv)
//	80D5B134: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTag_Lv5Soup_c::~daTag_Lv5Soup_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv5soup/d_a_tag_lv5soup/__dt__15daTag_Lv5Soup_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D5B160-80D5B164 0004+00 s=0 e=0 z=0  None .rodata    @3656 */
SECTION_RODATA u32 const lit_3656 = 0xC1700000;

/* 80D5B164-80D5B168 0004+00 s=0 e=0 z=0  None .rodata    @3657 */
SECTION_RODATA u32 const lit_3657 = 0x41F00000;

/* 80D5B168-80D5B16C 0004+00 s=0 e=0 z=0  None .rodata    @3658 */
SECTION_RODATA u32 const lit_3658 = 0x42340000;

/* 80D5B16C-80D5B170 0004+00 s=0 e=0 z=0  None .rodata    @3743 */
SECTION_RODATA u32 const lit_3743 = 0x42C80000;

/* 80D5B170-80D5B174 0004+00 s=0 e=0 z=0  None .rodata    @3744 */
SECTION_RODATA u8 const lit_3744[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80D5B174-80D5B17C 0008+00 s=0 e=0 z=0  None .rodata    @3745 */
SECTION_RODATA u8 const lit_3745[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D5B17C-80D5B184 0008+00 s=0 e=0 z=0  None .rodata    @3746 */
SECTION_RODATA u8 const lit_3746[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D5B184-80D5B18C 0008+00 s=0 e=0 z=0  None .rodata    @3747 */
SECTION_RODATA u8 const lit_3747[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
