//
// Generated By: dol2asm
// Translation Unit: d_a_tag_shop_item
//

#include "rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTag_ShopItem_c {
    /* 80D60B78 */ void create();
    /* 80D60D78 */ void Delete();
    /* 80D60E04 */ void Execute();
    /* 80D61024 */ bool Draw();
    /* 80D6102C */ void getType();
    /* 80D61038 */ void getGroupID();
    /* 80D61044 */ void getSwitchBit1();
    /* 80D61050 */ void getSwitchBit2();
    /* 80D6105C */ void initialize();
    /* 80D61168 */ ~daTag_ShopItem_c();
};

struct daItemBase_c {
    /* 80037A64 */ void hide();
    /* 80037A74 */ void show();
};

struct dSv_memBit_c {
    /* 80034810 */ void onSwitch(int);
    /* 80034838 */ void offSwitch(int);
    /* 80034860 */ void isSwitch(int) const;
};

struct dSv_event_c {
    /* 800349BC */ void isEventBit(u16) const;
};

struct csXyz {};

struct cXyz {};

//
// Forward References:
//

static void daTag_ShopItem_Create(void*);
static void daTag_ShopItem_Delete(void*);
static void daTag_ShopItem_Execute(void*);
static void daTag_ShopItem_Draw(void*);
static bool daTag_ShopItem_IsDelete(void*);

extern "C" void create__16daTag_ShopItem_cFv();
extern "C" void Delete__16daTag_ShopItem_cFv();
extern "C" void Execute__16daTag_ShopItem_cFv();
extern "C" bool Draw__16daTag_ShopItem_cFv();
extern "C" void getType__16daTag_ShopItem_cFv();
extern "C" void getGroupID__16daTag_ShopItem_cFv();
extern "C" void getSwitchBit1__16daTag_ShopItem_cFv();
extern "C" void getSwitchBit2__16daTag_ShopItem_cFv();
extern "C" void initialize__16daTag_ShopItem_cFv();
extern "C" static void daTag_ShopItem_Create__FPv();
extern "C" static void daTag_ShopItem_Delete__FPv();
extern "C" static void daTag_ShopItem_Execute__FPv();
extern "C" static void daTag_ShopItem_Draw__FPv();
extern "C" static bool daTag_ShopItem_IsDelete__FPv();
extern "C" void __dt__16daTag_ShopItem_cFv();
extern "C" extern u32 const lit_3778;
extern "C" extern u32 const lit_3779;
extern "C" extern u32 const lit_3780;
extern "C" extern u32 const lit_3781;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_TAG_SHOPITM[12];
extern "C" extern void* __vt__16daTag_ShopItem_c[3];

//
// External References:
//

void fopAcIt_Judge(void* (*)(void*, void*), void*);
void fopAcM_create(s16, u32, cXyz const*, int, csXyz const*, cXyz const*, s8);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void fpcSch_JudgeByID(void*, void*);
void operator delete(void*);

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void onSwitch__12dSv_memBit_cFi();
extern "C" void offSwitch__12dSv_memBit_cFi();
extern "C" void isSwitch__12dSv_memBit_cCFi();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void hide__12daItemBase_cFv();
extern "C" void show__12daItemBase_cFv();
extern "C" void __dl__FPv();
extern "C" void strcmp();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* ############################################################################################## */
/* 80D611D0-80D611D4 0004+00 s=2 e=0 z=0  None .rodata    @3684 */
SECTION_RODATA static u32 const lit_3684 = 0x42B40000;

/* 80D611D4-80D611D8 0004+00 s=1 e=0 z=0  None .rodata    @3685 */
SECTION_RODATA static u32 const lit_3685 = 0x43870000;

/* 80D611D8-80D611DC 0004+00 s=0 e=0 z=0  None .rodata    @3778 */
SECTION_RODATA u32 const lit_3778 = 0xC1F00000;

/* 80D611DC-80D611E0 0004+00 s=0 e=0 z=0  None .rodata    @3779 */
SECTION_RODATA u32 const lit_3779 = 0xC1700000;

/* 80D611E0-80D611E4 0004+00 s=0 e=0 z=0  None .rodata    @3780 */
SECTION_RODATA u32 const lit_3780 = 0x41F00000;

/* 80D611E4-80D611E8 0004+00 s=0 e=0 z=0  None .rodata    @3781 */
SECTION_RODATA u32 const lit_3781 = 0x42340000;

/* 80D611E8-80D611F0 0008+00 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80D611E8 = "F_SP109";
#pragma pop

/* 80D611F0-80D61210 0020+00 s=1 e=0 z=0  None .data      daTag_ShopItem_MethodTable */
SECTION_DATA static void* daTag_ShopItem_MethodTable[8] = {
    (void*)daTag_ShopItem_Create__FPv,
    (void*)daTag_ShopItem_Delete__FPv,
    (void*)daTag_ShopItem_Execute__FPv,
    (void*)daTag_ShopItem_IsDelete__FPv,
    (void*)daTag_ShopItem_Draw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D61210-80D61240 0030+00 s=0 e=0 z=1  None .data      g_profile_TAG_SHOPITM */
SECTION_DATA void* g_profile_TAG_SHOPITM[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01270000, (void*)&g_fpcLf_Method,
    (void*)0x00000574, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x004B0000, (void*)&daTag_ShopItem_MethodTable,
    (void*)0x00064100, (void*)0x050E0000,
};

/* 80D61240-80D6124C 000C+00 s=2 e=0 z=0  None .data      __vt__16daTag_ShopItem_c */
SECTION_DATA void* __vt__16daTag_ShopItem_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16daTag_ShopItem_cFv,
};

/* 80D60B78-80D60D78 0200+00 s=1 e=0 z=0  None .text      create__16daTag_ShopItem_cFv */
//	80D60BA4: 80018B64 (__ct__10fopAc_ac_cFv)
//	80D60BA8: 80D61240 (__vt__16daTag_ShopItem_c)
//	80D60BAC: 80D61240 (__vt__16daTag_ShopItem_c)
//	80D60BC4: 80D6105C (initialize__16daTag_ShopItem_cFv)
//	80D60BD0: 80D611E8 (stringBase0)
//	80D60BD4: 80D611E8 (stringBase0)
//	80D60BD8: 804061C0 (g_dComIfG_gameInfo)
//	80D60BDC: 804061C0 (g_dComIfG_gameInfo)
//	80D60BE4: 80368994 (strcmp)
//	80D60BF0: 804061C0 (g_dComIfG_gameInfo)
//	80D60BF4: 804061C0 (g_dComIfG_gameInfo)
//	80D60BFC: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	80D60C00: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	80D60C08: 800349BC (isEventBit__11dSv_event_cCFUs)
//	80D60C1C: 804061C0 (g_dComIfG_gameInfo)
//	80D60C20: 804061C0 (g_dComIfG_gameInfo)
//	80D60C28: 80D611D0 (lit_3684)
//	80D60C2C: 80D611D0 (lit_3684)
//	80D60C3C: 80D611D4 (lit_3685)
//	80D60C40: 80D611D4 (lit_3685)
//	80D60C58: 80D61038 (getGroupID__16daTag_ShopItem_cFv)
//	80D60C74: 80D61044 (getSwitchBit1__16daTag_ShopItem_cFv)
//	80D60C88: 80D61044 (getSwitchBit1__16daTag_ShopItem_cFv)
//	80D60C90: 804061C0 (g_dComIfG_gameInfo)
//	80D60C94: 804061C0 (g_dComIfG_gameInfo)
//	80D60CA0: 80034860 (isSwitch__12dSv_memBit_cCFi)
//	80D60CB0: 80D61050 (getSwitchBit2__16daTag_ShopItem_cFv)
//	80D60CBC: 80034810 (onSwitch__12dSv_memBit_cFi)
//	80D60CE0: 80D61044 (getSwitchBit1__16daTag_ShopItem_cFv)
//	80D60CF4: 80D61044 (getSwitchBit1__16daTag_ShopItem_cFv)
//	80D60CFC: 804061C0 (g_dComIfG_gameInfo)
//	80D60D00: 804061C0 (g_dComIfG_gameInfo)
//	80D60D08: 80034860 (isSwitch__12dSv_memBit_cCFi)
//	80D60D20: 80D61050 (getSwitchBit2__16daTag_ShopItem_cFv)
//	80D60D34: 80D61050 (getSwitchBit2__16daTag_ShopItem_cFv)
//	80D60D3C: 804061C0 (g_dComIfG_gameInfo)
//	80D60D40: 804061C0 (g_dComIfG_gameInfo)
//	80D60D48: 80034860 (isSwitch__12dSv_memBit_cCFi)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_ShopItem_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/create__16daTag_ShopItem_cFv.s"
}
#pragma pop

/* 80D60D78-80D60E04 008C+00 s=1 e=0 z=0  None .text      Delete__16daTag_ShopItem_cFv */
//	80D60D9C: 80D61038 (getGroupID__16daTag_ShopItem_cFv)
//	80D60DB0: 80D61044 (getSwitchBit1__16daTag_ShopItem_cFv)
//	80D60DB8: 804061C0 (g_dComIfG_gameInfo)
//	80D60DBC: 804061C0 (g_dComIfG_gameInfo)
//	80D60DC8: 80034860 (isSwitch__12dSv_memBit_cCFi)
//	80D60DD8: 80D61050 (getSwitchBit2__16daTag_ShopItem_cFv)
//	80D60DE4: 80034838 (offSwitch__12dSv_memBit_cFi)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_ShopItem_c::Delete() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/Delete__16daTag_ShopItem_cFv.s"
}
#pragma pop

/* 80D60E04-80D61024 0220+00 s=1 e=0 z=0  None .text      Execute__16daTag_ShopItem_cFv */
//	80D60E38: 80D61038 (getGroupID__16daTag_ShopItem_cFv)
//	80D60E44: 80D6102C (getType__16daTag_ShopItem_cFv)
//	80D60E6C: 80019D98 (fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc)
//	80D60E80: 80D61038 (getGroupID__16daTag_ShopItem_cFv)
//	80D60EAC: 80D61044 (getSwitchBit1__16daTag_ShopItem_cFv)
//	80D60EC0: 80D61044 (getSwitchBit1__16daTag_ShopItem_cFv)
//	80D60EC8: 804061C0 (g_dComIfG_gameInfo)
//	80D60ECC: 804061C0 (g_dComIfG_gameInfo)
//	80D60ED4: 80034860 (isSwitch__12dSv_memBit_cCFi)
//	80D60EE4: 80D61050 (getSwitchBit2__16daTag_ShopItem_cFv)
//	80D60EF8: 80D61050 (getSwitchBit2__16daTag_ShopItem_cFv)
//	80D60F00: 804061C0 (g_dComIfG_gameInfo)
//	80D60F04: 804061C0 (g_dComIfG_gameInfo)
//	80D60F0C: 80034860 (isSwitch__12dSv_memBit_cCFi)
//	80D60F28: 80023590 (fpcSch_JudgeByID__FPvPv)
//	80D60F2C: 80023590 (fpcSch_JudgeByID__FPvPv)
//	80D60F34: 800197F8 (fopAcIt_Judge__FPFPvPv_PvPv)
//	80D60F44: 80D61038 (getGroupID__16daTag_ShopItem_cFv)
//	80D60F64: 80037A64 (hide__12daItemBase_cFv)
//	80D60F70: 80037A74 (show__12daItemBase_cFv)
//	80D60F7C: 80D61044 (getSwitchBit1__16daTag_ShopItem_cFv)
//	80D60F90: 80D61044 (getSwitchBit1__16daTag_ShopItem_cFv)
//	80D60F98: 804061C0 (g_dComIfG_gameInfo)
//	80D60F9C: 804061C0 (g_dComIfG_gameInfo)
//	80D60FA4: 80034860 (isSwitch__12dSv_memBit_cCFi)
//	80D60FB4: 80037A64 (hide__12daItemBase_cFv)
//	80D60FC0: 80D61050 (getSwitchBit2__16daTag_ShopItem_cFv)
//	80D60FD4: 80D61050 (getSwitchBit2__16daTag_ShopItem_cFv)
//	80D60FDC: 804061C0 (g_dComIfG_gameInfo)
//	80D60FE0: 804061C0 (g_dComIfG_gameInfo)
//	80D60FE8: 80034860 (isSwitch__12dSv_memBit_cCFi)
//	80D60FF8: 80037A64 (hide__12daItemBase_cFv)
//	80D61004: 80037A74 (show__12daItemBase_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_ShopItem_c::Execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/Execute__16daTag_ShopItem_cFv.s"
}
#pragma pop

/* 80D61024-80D6102C 0008+00 s=1 e=0 z=0  None .text      Draw__16daTag_ShopItem_cFv */
bool daTag_ShopItem_c::Draw() {
    return true;
}

/* 80D6102C-80D61038 000C+00 s=1 e=0 z=0  None .text      getType__16daTag_ShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_ShopItem_c::getType() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/getType__16daTag_ShopItem_cFv.s"
}
#pragma pop

/* 80D61038-80D61044 000C+00 s=3 e=0 z=0  None .text      getGroupID__16daTag_ShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_ShopItem_c::getGroupID() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/getGroupID__16daTag_ShopItem_cFv.s"
}
#pragma pop

/* 80D61044-80D61050 000C+00 s=3 e=0 z=1  None .text      getSwitchBit1__16daTag_ShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_ShopItem_c::getSwitchBit1() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/getSwitchBit1__16daTag_ShopItem_cFv.s"
}
#pragma pop

/* 80D61050-80D6105C 000C+00 s=3 e=0 z=0  None .text      getSwitchBit2__16daTag_ShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_ShopItem_c::getSwitchBit2() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/getSwitchBit2__16daTag_ShopItem_cFv.s"
}
#pragma pop

/* 80D6105C-80D610E0 0084+00 s=1 e=0 z=0  None .text      initialize__16daTag_ShopItem_cFv */
//	80D61070: 80D611D0 (lit_3684)
//	80D61074: 80D611D0 (lit_3684)
//	80D61090: 8001A548 (fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_ShopItem_c::initialize() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/initialize__16daTag_ShopItem_cFv.s"
}
#pragma pop

/* 80D610E0-80D61100 0020+00 s=1 e=0 z=0  None .text      daTag_ShopItem_Create__FPv */
//	80D610EC: 80D60B78 (create__16daTag_ShopItem_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTag_ShopItem_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/daTag_ShopItem_Create__FPv.s"
}
#pragma pop

/* 80D61100-80D61120 0020+00 s=1 e=0 z=0  None .text      daTag_ShopItem_Delete__FPv */
//	80D6110C: 80D60D78 (Delete__16daTag_ShopItem_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTag_ShopItem_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/daTag_ShopItem_Delete__FPv.s"
}
#pragma pop

/* 80D61120-80D61140 0020+00 s=1 e=0 z=0  None .text      daTag_ShopItem_Execute__FPv */
//	80D6112C: 80D60E04 (Execute__16daTag_ShopItem_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTag_ShopItem_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/daTag_ShopItem_Execute__FPv.s"
}
#pragma pop

/* 80D61140-80D61160 0020+00 s=1 e=0 z=0  None .text      daTag_ShopItem_Draw__FPv */
//	80D6114C: 80D61024 (Draw__16daTag_ShopItem_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTag_ShopItem_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/daTag_ShopItem_Draw__FPv.s"
}
#pragma pop

/* 80D61160-80D61168 0008+00 s=1 e=0 z=0  None .text      daTag_ShopItem_IsDelete__FPv */
static bool daTag_ShopItem_IsDelete(void* param_0) {
    return true;
}

/* 80D61168-80D611C8 0060+00 s=1 e=0 z=0  None .text      __dt__16daTag_ShopItem_cFv */
//	80D61188: 80D61240 (__vt__16daTag_ShopItem_c)
//	80D6118C: 80D61240 (__vt__16daTag_ShopItem_c)
//	80D61198: 80018C8C (__dt__10fopAc_ac_cFv)
//	80D611A8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTag_ShopItem_c::~daTag_ShopItem_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/__dt__16daTag_ShopItem_cFv.s"
}
#pragma pop
