//
// Generated By: dol2asm
// Translation Unit: d_a_talk
//

#include "rel/d/a/d_a_talk/d_a_talk.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTalk_c {
    /* 80D66378 */ ~daTalk_c();
    /* 80D663E4 */ void create();
    /* 80D664AC */ void execute();
    /* 80D6665C */ bool draw();
    /* 80D66664 */ void setStatus(u16);
    /* 80D66688 */ void getStatus();
    /* 80D666A8 */ void messageSet();
};

struct dMsgObject_c {
    /* 80238188 */ void setProcessID(unsigned int);
    /* 802381C0 */ void getpTalkActor();
    /* 802381D4 */ void getIdx();
    /* 802381E8 */ void getNodeIdx();
    /* 802381FC */ void setStatus(u16);
    /* 8023822C */ void getStatus();
};

struct dMsgFlow_c {
    /* 80249F00 */ dMsgFlow_c();
    /* 80249F48 */ ~dMsgFlow_c();
    /* 80249F90 */ void init(fopAc_ac_c*, int, int, fopAc_ac_c**);
    /* 8024A2D8 */ void doFlow(fopAc_ac_c*, fopAc_ac_c**, int);
};

struct dEvt_control_c {
    /* 80042468 */ void reset();
};

//
// Forward References:
//

static void daTalk_Create(fopAc_ac_c*);
static void daTalk_Delete(daTalk_c*);
static void daTalk_Execute(daTalk_c*);
static void daTalk_Draw(daTalk_c*);

extern "C" void __dt__8daTalk_cFv();
extern "C" void create__8daTalk_cFv();
extern "C" void execute__8daTalk_cFv();
extern "C" bool draw__8daTalk_cFv();
extern "C" void setStatus__8daTalk_cFUs();
extern "C" void getStatus__8daTalk_cFv();
extern "C" void messageSet__8daTalk_cFv();
extern "C" static void daTalk_Create__FP10fopAc_ac_c();
extern "C" static void daTalk_Delete__FP8daTalk_c();
extern "C" static void daTalk_Execute__FP8daTalk_c();
extern "C" static void daTalk_Draw__FP8daTalk_c();
extern "C" extern void* g_profile_TALK[12];

//
// External References:
//

void fopAcM_delete(fopAc_ac_c*);
void fopAcM_searchActorDistanceXZ(fopAc_ac_c const*, fopAc_ac_c const*);
void fopMsgM_messageSet(u32, fopAc_ac_c*, u32);
void operator delete(void*);

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopMsgM_messageSet__FUlP10fopAc_ac_cUl();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void setProcessID__12dMsgObject_cFUi();
extern "C" void getpTalkActor__12dMsgObject_cFv();
extern "C" void getIdx__12dMsgObject_cFv();
extern "C" void getNodeIdx__12dMsgObject_cFv();
extern "C" void setStatus__12dMsgObject_cFUs();
extern "C" void getStatus__12dMsgObject_cFv();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void __dt__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void __dl__FPv();
extern "C" void __copy();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 dist_table__12dAttention_c[6552];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* 80D66378-80D663E4 006C+00 s=1 e=0 z=0  None .text      __dt__8daTalk_cFv */
//	80D6639C: 80238188 (setProcessID__12dMsgObject_cFUi)
//	80D663A8: 80249F48 (__dt__10dMsgFlow_cFv)
//	80D663B4: 80018C8C (__dt__10fopAc_ac_cFv)
//	80D663C4: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTalk_c::~daTalk_c() {
    nofralloc
#include "asm/rel/d/a/d_a_talk/d_a_talk/__dt__8daTalk_cFv.s"
}
#pragma pop

/* 80D663E4-80D664AC 00C8+00 s=1 e=0 z=0  None .text      create__8daTalk_cFv */
//	80D66414: 80018B64 (__ct__10fopAc_ac_cFv)
//	80D6641C: 80249F00 (__ct__10dMsgFlow_cFv)
//	80D66430: 80D66688 (getStatus__8daTalk_cFv)
//	80D66448: 802381C0 (getpTalkActor__12dMsgObject_cFv)
//	80D6645C: 80361C3C (__copy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTalk_c::create() {
    nofralloc
#include "asm/rel/d/a/d_a_talk/d_a_talk/create__8daTalk_cFv.s"
}
#pragma pop

/* 80D664AC-80D6665C 01B0+00 s=1 e=0 z=0  None .text      execute__8daTalk_cFv */
//	80D664BC: 803621DC (_savegpr_29)
//	80D664C4: 804061C0 (g_dComIfG_gameInfo)
//	80D664C8: 804061C0 (g_dComIfG_gameInfo)
//	80D664E4: 80019C7C (fopAcM_delete__FP10fopAc_ac_c)
//	80D664F4: 803A9C70 (dist_table__12dAttention_c)
//	80D664F8: 803A9C70 (dist_table__12dAttention_c)
//	80D66504: 8001A964 (fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c)
//	80D66520: 80019C7C (fopAcM_delete__FP10fopAc_ac_c)
//	80D66540: 802381E8 (getNodeIdx__12dMsgObject_cFv)
//	80D66564: 80D666A8 (messageSet__8daTalk_cFv)
//	80D66574: 80D66688 (getStatus__8daTalk_cFv)
//	80D6658C: 80D66664 (setStatus__8daTalk_cFUs)
//	80D66598: 80D66688 (getStatus__8daTalk_cFv)
//	80D665AC: 80042468 (reset__14dEvt_control_cFv)
//	80D665B8: 80D66664 (setStatus__8daTalk_cFUs)
//	80D665C8: 80019C7C (fopAcM_delete__FP10fopAc_ac_c)
//	80D665E0: 802381E8 (getNodeIdx__12dMsgObject_cFv)
//	80D665F8: 80249F90 (init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c)
//	80D66608: 802381C0 (getpTalkActor__12dMsgObject_cFv)
//	80D6661C: 8024A2D8 (doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci)
//	80D6662C: 80042468 (reset__14dEvt_control_cFv)
//	80D6663C: 80019C7C (fopAcM_delete__FP10fopAc_ac_c)
//	80D66648: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTalk_c::execute() {
    nofralloc
#include "asm/rel/d/a/d_a_talk/d_a_talk/execute__8daTalk_cFv.s"
}
#pragma pop

/* 80D6665C-80D66664 0008+00 s=1 e=0 z=0  None .text      draw__8daTalk_cFv */
bool daTalk_c::draw() {
    return true;
}

/* 80D66664-80D66688 0024+00 s=1 e=0 z=0  None .text      setStatus__8daTalk_cFUs */
//	80D66674: 802381FC (setStatus__12dMsgObject_cFUs)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTalk_c::setStatus(u16 param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_talk/d_a_talk/setStatus__8daTalk_cFUs.s"
}
#pragma pop

/* 80D66688-80D666A8 0020+00 s=2 e=0 z=0  None .text      getStatus__8daTalk_cFv */
//	80D66694: 8023822C (getStatus__12dMsgObject_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTalk_c::getStatus() {
    nofralloc
#include "asm/rel/d/a/d_a_talk/d_a_talk/getStatus__8daTalk_cFv.s"
}
#pragma pop

/* 80D666A8-80D666E4 003C+00 s=1 e=0 z=0  None .text      messageSet__8daTalk_cFv */
//	80D666B8: 802381C0 (getpTalkActor__12dMsgObject_cFv)
//	80D666C0: 802381D4 (getIdx__12dMsgObject_cFv)
//	80D666CC: 8001FD34 (fopMsgM_messageSet__FUlP10fopAc_ac_cUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTalk_c::messageSet() {
    nofralloc
#include "asm/rel/d/a/d_a_talk/d_a_talk/messageSet__8daTalk_cFv.s"
}
#pragma pop

/* 80D666E4-80D66704 0020+00 s=1 e=0 z=0  None .text      daTalk_Create__FP10fopAc_ac_c */
//	80D666F0: 80D663E4 (create__8daTalk_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTalk_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_talk/d_a_talk/daTalk_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D66704-80D6672C 0028+00 s=1 e=0 z=0  None .text      daTalk_Delete__FP8daTalk_c */
//	80D66714: 80D66378 (__dt__8daTalk_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTalk_Delete(daTalk_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_talk/d_a_talk/daTalk_Delete__FP8daTalk_c.s"
}
#pragma pop

/* 80D6672C-80D6674C 0020+00 s=1 e=0 z=0  None .text      daTalk_Execute__FP8daTalk_c */
//	80D66738: 80D664AC (execute__8daTalk_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTalk_Execute(daTalk_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_talk/d_a_talk/daTalk_Execute__FP8daTalk_c.s"
}
#pragma pop

/* 80D6674C-80D6676C 0020+00 s=1 e=0 z=0  None .text      daTalk_Draw__FP8daTalk_c */
//	80D66758: 80D6665C (draw__8daTalk_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTalk_Draw(daTalk_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_talk/d_a_talk/daTalk_Draw__FP8daTalk_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D66774-80D66794 0020+00 s=1 e=0 z=0  None .data      l_daTalk_Method */
SECTION_DATA static void* l_daTalk_Method[8] = {
    (void*)daTalk_Create__FP10fopAc_ac_c,
    (void*)daTalk_Delete__FP8daTalk_c,
    (void*)daTalk_Execute__FP8daTalk_c,
    (void*)NULL,
    (void*)daTalk_Draw__FP8daTalk_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D66794-80D667C4 0030+00 s=0 e=0 z=1  None .data      g_profile_TALK */
SECTION_DATA void* g_profile_TALK[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02BD0000, (void*)&g_fpcLf_Method,
    (void*)0x000005B8, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02FE0000, (void*)&l_daTalk_Method,
    (void*)0x00044000, (void*)0x00060000,
};
