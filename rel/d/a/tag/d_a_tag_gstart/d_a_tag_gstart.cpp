//
// Generated By: dol2asm
// Translation Unit: d_a_tag_gstart
//

#include "rel/d/a/tag/d_a_tag_gstart/d_a_tag_gstart.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTagGstart_c {
    /* 805A3478 */ void create();
    /* 805A3514 */ ~daTagGstart_c();
    /* 805A3590 */ void execute();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

//
// Forward References:
//

static void daTagGstart_Create(fopAc_ac_c*);
static void daTagGstart_Delete(daTagGstart_c*);
static void daTagGstart_Execute(daTagGstart_c*);
static bool daTagGstart_Draw(daTagGstart_c*);

extern "C" void create__13daTagGstart_cFv();
extern "C" static void daTagGstart_Create__FP10fopAc_ac_c();
extern "C" void __dt__13daTagGstart_cFv();
extern "C" static void daTagGstart_Delete__FP13daTagGstart_c();
extern "C" void execute__13daTagGstart_cFv();
extern "C" static void daTagGstart_Execute__FP13daTagGstart_c();
extern "C" static bool daTagGstart_Draw__FP13daTagGstart_c();
extern "C" extern void* g_profile_Tag_Gstart[12];

//
// External References:
//

void operator delete(void*);

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void __dl__FPv();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* 805A3478-805A34F4 007C+00 s=1 e=0 z=0  None .text      create__13daTagGstart_cFv */
//	805A34A0: 80018B64 (__ct__10fopAc_ac_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagGstart_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_gstart/d_a_tag_gstart/create__13daTagGstart_cFv.s"
}
#pragma pop

/* 805A34F4-805A3514 0020+00 s=1 e=0 z=0  None .text      daTagGstart_Create__FP10fopAc_ac_c */
//	805A3500: 805A3478 (create__13daTagGstart_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagGstart_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_gstart/d_a_tag_gstart/daTagGstart_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 805A3514-805A3568 0054+00 s=1 e=0 z=0  None .text      __dt__13daTagGstart_cFv */
//	805A3538: 80018C8C (__dt__10fopAc_ac_cFv)
//	805A3548: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTagGstart_c::~daTagGstart_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_gstart/d_a_tag_gstart/__dt__13daTagGstart_cFv.s"
}
#pragma pop

/* 805A3568-805A3590 0028+00 s=1 e=0 z=0  None .text      daTagGstart_Delete__FP13daTagGstart_c */
//	805A3578: 805A3514 (__dt__13daTagGstart_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagGstart_Delete(daTagGstart_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_gstart/d_a_tag_gstart/daTagGstart_Delete__FP13daTagGstart_c.s"
}
#pragma pop

/* 805A3590-805A3658 00C8+00 s=1 e=0 z=0  None .text      execute__13daTagGstart_cFv */
//	805A35B0: 804061C0 (g_dComIfG_gameInfo)
//	805A35B4: 804061C0 (g_dComIfG_gameInfo)
//	805A35C0: 80035360 (isSwitch__10dSv_info_cCFii)
//	805A35D8: 804061C0 (g_dComIfG_gameInfo)
//	805A35DC: 804061C0 (g_dComIfG_gameInfo)
//	805A35E8: 80035360 (isSwitch__10dSv_info_cCFii)
//	805A3600: 804061C0 (g_dComIfG_gameInfo)
//	805A3604: 804061C0 (g_dComIfG_gameInfo)
//	805A3618: 804061C0 (g_dComIfG_gameInfo)
//	805A361C: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagGstart_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_gstart/d_a_tag_gstart/execute__13daTagGstart_cFv.s"
}
#pragma pop

/* 805A3658-805A3678 0020+00 s=1 e=0 z=0  None .text      daTagGstart_Execute__FP13daTagGstart_c */
//	805A3664: 805A3590 (execute__13daTagGstart_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagGstart_Execute(daTagGstart_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_gstart/d_a_tag_gstart/daTagGstart_Execute__FP13daTagGstart_c.s"
}
#pragma pop

/* 805A3678-805A3680 0008+00 s=1 e=0 z=0  None .text      daTagGstart_Draw__FP13daTagGstart_c */
static bool daTagGstart_Draw(daTagGstart_c* param_0) {
    return true;
}

/* ############################################################################################## */
/* 805A3688-805A36A8 0020+00 s=1 e=0 z=0  None .data      l_daTagGstart_Method */
SECTION_DATA static void* l_daTagGstart_Method[8] = {
    (void*)daTagGstart_Create__FP10fopAc_ac_c,
    (void*)daTagGstart_Delete__FP13daTagGstart_c,
    (void*)daTagGstart_Execute__FP13daTagGstart_c,
    (void*)NULL,
    (void*)daTagGstart_Draw__FP13daTagGstart_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 805A36A8-805A36D8 0030+00 s=0 e=0 z=1  None .data      g_profile_Tag_Gstart */
SECTION_DATA void* g_profile_Tag_Gstart[12] = {
    (void*)0xFFFFFFFD, (void*)0x0002FFFD,
    (void*)0x00190000, (void*)&g_fpcLf_Method,
    (void*)0x0000056C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01B50000, (void*)&l_daTagGstart_Method,
    (void*)0x00060000, (void*)0x030E0000,
};
