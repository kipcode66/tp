//
// Generated By: dol2asm
// Translation Unit: d_a_tag_mstop
//

#include "rel/d/a/tag/d_a_tag_mstop/d_a_tag_mstop.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct daPy_py_c {
    static u8 m_midnaActor[4];
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dSv_event_flag_c {
    static u8 saveBitLabels[1644 + 4 /* padding */];
};

struct dSv_event_c {
    /* 800349BC */ void isEventBit(u16) const;
};

struct dEvt_control_c {
    /* 80042468 */ void reset();
    /* 80042518 */ void reset(void*);
};

//
// Forward References:
//

extern "C" void create__12daTagMstop_cFv();
extern "C" static void daTagMstop_Create__FP10fopAc_ac_c();
extern "C" void __dt__12daTagMstop_cFv();
extern "C" static void daTagMstop_Delete__FP12daTagMstop_c();
extern "C" void eventOrder__12daTagMstop_cFv();
extern "C" void execute__12daTagMstop_cFv();
extern "C" static void daTagMstop_Execute__FP12daTagMstop_c();
extern "C" static bool daTagMstop_Draw__FP12daTagMstop_c();
extern "C" extern void* g_profile_Tag_Mstop[12];

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ2__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderSpeakEvent__FP10fopAc_ac_cUsUs();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGp_getRoomCamera__Fi();
extern "C" void dComIfGp_getRoomArrow__Fi();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void reset__14dEvt_control_cFPv();
extern "C" void daNpcF_getPlayerInfoFromPlayerList__FiiR4cXyzR5csXyz();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void __dt__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 m_midnaActor__9daPy_py_c[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 805A696C-805A6970 000000 0004+00 2/2 0/0 0/0 .rodata          @3863 */
SECTION_RODATA static f32 const lit_3863 = 10000.0f;
COMPILER_STRIP_GATE(0x805A696C, &lit_3863);

/* 805A6970-805A6974 000004 0004+00 1/1 0/0 0/0 .rodata          @3864 */
SECTION_RODATA static f32 const lit_3864 = 100.0f;
COMPILER_STRIP_GATE(0x805A6970, &lit_3864);

/* 805A6138-805A6318 000078 01E0+00 1/1 0/0 0/0 .text            create__12daTagMstop_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagMstop_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_mstop/d_a_tag_mstop/create__12daTagMstop_cFv.s"
}
#pragma pop

/* 805A6318-805A6338 000258 0020+00 1/0 0/0 0/0 .text            daTagMstop_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagMstop_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_mstop/d_a_tag_mstop/daTagMstop_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 805A6338-805A639C 000278 0064+00 1/1 0/0 0/0 .text            __dt__12daTagMstop_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTagMstop_c::~daTagMstop_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_mstop/d_a_tag_mstop/__dt__12daTagMstop_cFv.s"
}
#pragma pop

/* 805A639C-805A63C4 0002DC 0028+00 1/0 0/0 0/0 .text            daTagMstop_Delete__FP12daTagMstop_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagMstop_Delete(daTagMstop_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_mstop/d_a_tag_mstop/daTagMstop_Delete__FP12daTagMstop_c.s"
}
#pragma pop

/* 805A63C4-805A63F8 000304 0034+00 1/1 0/0 0/0 .text            eventOrder__12daTagMstop_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagMstop_c::eventOrder() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_mstop/d_a_tag_mstop/eventOrder__12daTagMstop_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 805A6974-805A6978 000008 0004+00 0/1 0/0 0/0 .rodata          @4056 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4056 = 1.0f;
COMPILER_STRIP_GATE(0x805A6974, &lit_4056);
#pragma pop

/* 805A6978-805A697C 00000C 0004+00 0/1 0/0 0/0 .rodata          @4057 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4057 = -1.0f;
COMPILER_STRIP_GATE(0x805A6978, &lit_4057);
#pragma pop

/* 805A697C-805A6980 000010 0004+00 0/1 0/0 0/0 .rodata          @4058 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4058 = 2500.0f;
COMPILER_STRIP_GATE(0x805A697C, &lit_4058);
#pragma pop

/* 805A6980-805A6984 000014 0004+00 0/1 0/0 0/0 .rodata          @4059 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4059[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x805A6980, &lit_4059);
#pragma pop

/* 805A63F8-805A693C 000338 0544+00 1/1 0/0 0/0 .text            execute__12daTagMstop_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagMstop_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_mstop/d_a_tag_mstop/execute__12daTagMstop_cFv.s"
}
#pragma pop

/* 805A693C-805A695C 00087C 0020+00 1/0 0/0 0/0 .text daTagMstop_Execute__FP12daTagMstop_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTagMstop_Execute(daTagMstop_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_mstop/d_a_tag_mstop/daTagMstop_Execute__FP12daTagMstop_c.s"
}
#pragma pop

/* 805A695C-805A6964 00089C 0008+00 1/0 0/0 0/0 .text            daTagMstop_Draw__FP12daTagMstop_c
 */
static bool daTagMstop_Draw(daTagMstop_c* param_0) {
    return true;
}

/* ############################################################################################## */
/* 805A6984-805A69A4 -00001 0020+00 1/0 0/0 0/0 .data            l_daTagMstop_Method */
SECTION_DATA static void* l_daTagMstop_Method[8] = {
    (void*)daTagMstop_Create__FP10fopAc_ac_c,
    (void*)daTagMstop_Delete__FP12daTagMstop_c,
    (void*)daTagMstop_Execute__FP12daTagMstop_c,
    (void*)NULL,
    (void*)daTagMstop_Draw__FP12daTagMstop_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 805A69A4-805A69D4 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Tag_Mstop */
SECTION_DATA extern void* g_profile_Tag_Mstop[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02C40000, (void*)&g_fpcLf_Method,
    (void*)0x000005D4, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01010000, (void*)&l_daTagMstop_Method,
    (void*)0x00044000, (void*)0x030E0000,
};
