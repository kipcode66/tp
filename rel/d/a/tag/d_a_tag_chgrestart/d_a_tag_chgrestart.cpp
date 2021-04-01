//
// Generated By: dol2asm
// Translation Unit: d_a_tag_chgrestart
//

#include "rel/d/a/tag/d_a_tag_chgrestart/d_a_tag_chgrestart.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daTagChgRestart_c {
    /* 80D56758 */ void Create();
    /* 80D567E4 */ void create();
    /* 80D568B8 */ void execute();
    /* 80D56A84 */ bool _delete();
};

struct cXyz {
    /* 80D56878 */ ~cXyz();
    /* 80D568B4 */ cXyz();
};

struct dSv_restart_c {
    /* 80034F80 */ void setRoom(cXyz const&, s16, s8);
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dStage_roomControl_c {
    /* 80024384 */ void getStatusRoomDt(int);
};

//
// Forward References:
//

static void daTagChgRestart_Execute(daTagChgRestart_c*);
static void daTagChgRestart_Delete(daTagChgRestart_c*);
static void daTagChgRestart_Create(fopAc_ac_c*);

extern "C" void Create__17daTagChgRestart_cFv();
extern "C" void create__17daTagChgRestart_cFv();
extern "C" void __dt__4cXyzFv();
extern "C" void __ct__4cXyzFv();
extern "C" void execute__17daTagChgRestart_cFv();
extern "C" bool _delete__17daTagChgRestart_cFv();
extern "C" static void daTagChgRestart_Execute__FP17daTagChgRestart_c();
extern "C" static void daTagChgRestart_Delete__FP17daTagChgRestart_c();
extern "C" static void daTagChgRestart_Create__FP10fopAc_ac_c();
extern "C" extern u32 const lit_3651;
extern "C" extern u8 const lit_3652[4];
extern "C" extern void* g_profile_Tag_ChgRestart[12];

//
// External References:
//

void mDoMtx_YrotS(f32 (*)[4], s16);
void operator delete(void*);

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void getStatusRoomDt__20dStage_roomControl_cFi();
extern "C" void setRoom__13dSv_restart_cFRC4cXyzsSc();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void __dl__FPv();
extern "C" void PSMTXMultVec();
extern "C" void PSVECSubtract();
extern "C" void __construct_array();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* ############################################################################################## */
/* 80D56AF4-80D56AF8 0004+00 s=1 e=0 z=0  None .rodata    @3650 */
SECTION_RODATA static u32 const lit_3650 = 0xC2C80000;

/* 80D56758-80D567E4 008C+00 s=1 e=0 z=0  None .text      Create__17daTagChgRestart_cFv */
//	80D56758: 80D56AF4 (lit_3650)
//	80D5675C: 80D56AF4 (lit_3650)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagChgRestart_c::Create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_chgrestart/d_a_tag_chgrestart/Create__17daTagChgRestart_cFv.s"
}
#pragma pop

/* 80D567E4-80D56878 0094+00 s=1 e=0 z=0  None .text      create__17daTagChgRestart_cFv */
//	80D56814: 80018B64 (__ct__10fopAc_ac_cFv)
//	80D5681C: 80D568B4 (__ct__4cXyzFv)
//	80D56820: 80D568B4 (__ct__4cXyzFv)
//	80D56824: 80D56878 (__dt__4cXyzFv)
//	80D56828: 80D56878 (__dt__4cXyzFv)
//	80D56834: 80361D60 (__construct_array)
//	80D56848: 80D56758 (Create__17daTagChgRestart_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagChgRestart_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_chgrestart/d_a_tag_chgrestart/func_80D567E4.s"
}
#pragma pop

/* 80D56878-80D568B4 003C+00 s=1 e=0 z=0  None .text      __dt__4cXyzFv */
//	80D56898: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_chgrestart/d_a_tag_chgrestart/__dt__4cXyzFv.s"
}
#pragma pop

/* 80D568B4-80D568B8 0004+00 s=1 e=0 z=0  None .text      __ct__4cXyzFv */
cXyz::cXyz() {
    /* empty function */
}

/* 80D568B8-80D56A84 01CC+00 s=1 e=0 z=0  None .text      execute__17daTagChgRestart_cFv */
//	80D568C8: 803621DC (_savegpr_29)
//	80D568D0: 804061C0 (g_dComIfG_gameInfo)
//	80D568D4: 804061C0 (g_dComIfG_gameInfo)
//	80D568E8: 80035360 (isSwitch__10dSv_info_cCFii)
//	80D568FC: 804061C0 (g_dComIfG_gameInfo)
//	80D56900: 804061C0 (g_dComIfG_gameInfo)
//	80D5692C: 803470B4 (PSVECSubtract)
//	80D56930: 803DD470 (now__14mDoMtx_stack_c)
//	80D56934: 803DD470 (now__14mDoMtx_stack_c)
//	80D56944: 8000C3DC (mDoMtx_YrotS__FPA4_fs)
//	80D56948: 803DD470 (now__14mDoMtx_stack_c)
//	80D5694C: 803DD470 (now__14mDoMtx_stack_c)
//	80D56958: 80346D6C (PSMTXMultVec)
//	80D569C0: 804061C0 (g_dComIfG_gameInfo)
//	80D569C4: 804061C0 (g_dComIfG_gameInfo)
//	80D569D4: 80024384 (getStatusRoomDt__20dStage_roomControl_cFi)
//	80D56A38: 804061C0 (g_dComIfG_gameInfo)
//	80D56A3C: 804061C0 (g_dComIfG_gameInfo)
//	80D56A48: 80034F80 (setRoom__13dSv_restart_cFRC4cXyzsSc)
//	80D56A4C: 804061C0 (g_dComIfG_gameInfo)
//	80D56A50: 804061C0 (g_dComIfG_gameInfo)
//	80D56A64: 80035200 (onSwitch__10dSv_info_cFii)
//	80D56A70: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagChgRestart_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_chgrestart/d_a_tag_chgrestart/execute__17daTagChgRestart_cFv.s"
}
#pragma pop

/* 80D56A84-80D56A8C 0008+00 s=1 e=0 z=0  None .text      _delete__17daTagChgRestart_cFv */
bool daTagChgRestart_c::_delete() {
    return true;
}

/* 80D56A8C-80D56AAC 0020+00 s=1 e=0 z=0  None .text
 * daTagChgRestart_Execute__FP17daTagChgRestart_c               */
//	80D56A98: 80D568B8 (execute__17daTagChgRestart_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagChgRestart_Execute(daTagChgRestart_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_chgrestart/d_a_tag_chgrestart/daTagChgRestart_Execute__FP17daTagChgRestart_c.s"
}
#pragma pop

/* 80D56AAC-80D56ACC 0020+00 s=1 e=0 z=0  None .text daTagChgRestart_Delete__FP17daTagChgRestart_c
 */
//	80D56AB8: 80D56A84 (_delete__17daTagChgRestart_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagChgRestart_Delete(daTagChgRestart_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_chgrestart/d_a_tag_chgrestart/daTagChgRestart_Delete__FP17daTagChgRestart_c.s"
}
#pragma pop

/* 80D56ACC-80D56AEC 0020+00 s=1 e=0 z=0  None .text      daTagChgRestart_Create__FP10fopAc_ac_c */
//	80D56AD8: 80D567E4 (create__17daTagChgRestart_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagChgRestart_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_chgrestart/d_a_tag_chgrestart/daTagChgRestart_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D56AF8-80D56AFC 0004+00 s=0 e=0 z=0  None .rodata    @3651 */
SECTION_RODATA u32 const lit_3651 = 0x42C80000;

/* 80D56AFC-80D56B00 0004+00 s=0 e=0 z=0  None .rodata    @3652 */
SECTION_RODATA u8 const lit_3652[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80D56B00-80D56B20 0020+00 s=1 e=0 z=0  None .data      l_daTagChgRestart_Method */
SECTION_DATA static void* l_daTagChgRestart_Method[8] = {
    (void*)daTagChgRestart_Create__FP10fopAc_ac_c,
    (void*)daTagChgRestart_Delete__FP17daTagChgRestart_c,
    (void*)daTagChgRestart_Execute__FP17daTagChgRestart_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D56B20-80D56B50 0030+00 s=0 e=0 z=1  None .data      g_profile_Tag_ChgRestart */
SECTION_DATA void* g_profile_Tag_ChgRestart[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x022E0000, (void*)&g_fpcLf_Method,
    (void*)0x00000598, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x024F0000, (void*)&l_daTagChgRestart_Method,
    (void*)0x00040000, (void*)0x000E0000,
};
