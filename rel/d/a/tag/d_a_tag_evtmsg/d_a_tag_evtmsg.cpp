//
// Generated By: dol2asm
// Translation Unit: d_a_tag_evtmsg
//

#include "rel/d/a/tag/d_a_tag_evtmsg/d_a_tag_evtmsg.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct cXyz {};

struct daTag_EvtMsg_c {
    /* 8048CF38 */ void create();
    /* 8048D014 */ bool Delete();
    /* 8048D01C */ void Execute();
    /* 8048D31C */ bool Draw();
    /* 8048D324 */ void getOnEvtBit();
    /* 8048D340 */ void getOffEvtBit();
    /* 8048D35C */ void getOnSwBit();
    /* 8048D368 */ void getOffSwBit();
    /* 8048D374 */ void getProcType();
    /* 8048D384 */ void isDelete();
    /* 8048D428 */ void chkPointInArea(cXyz);
    /* 8048D54C */ void ECut_talk(int);
    /* 8048D5CC */ void ECut_wait(int);
    /* 8048D6F0 */ ~daTag_EvtMsg_c();
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
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

struct dEvent_manager_c {
    /* 80047758 */ void getEventIdx(fopAc_ac_c*, char const*, u8);
    /* 80047A78 */ void endCheck(s16);
    /* 80047B1C */ void getMyStaffId(char const*, fopAc_ac_c*, int);
    /* 80047D4C */ void getIsAddvance(int);
    /* 80047E10 */ void getMyActIdx(int, char const* const*, int, int, int);
    /* 800480EC */ void getMySubstanceP(int, char const*, int);
    /* 8004817C */ void cutEnd(int);
};

//
// Forward References:
//

static void daTag_EvtMsg_Create(void*);
static void daTag_EvtMsg_Delete(void*);
static void daTag_EvtMsg_Execute(void*);
static void daTag_EvtMsg_Draw(void*);
static bool daTag_EvtMsg_IsDelete(void*);
void cLib_calcTimer__template0(int*);

extern "C" void create__14daTag_EvtMsg_cFv();
extern "C" bool Delete__14daTag_EvtMsg_cFv();
extern "C" void Execute__14daTag_EvtMsg_cFv();
extern "C" bool Draw__14daTag_EvtMsg_cFv();
extern "C" void getOnEvtBit__14daTag_EvtMsg_cFv();
extern "C" void getOffEvtBit__14daTag_EvtMsg_cFv();
extern "C" void getOnSwBit__14daTag_EvtMsg_cFv();
extern "C" void getOffSwBit__14daTag_EvtMsg_cFv();
extern "C" void getProcType__14daTag_EvtMsg_cFv();
extern "C" void isDelete__14daTag_EvtMsg_cFv();
extern "C" void chkPointInArea__14daTag_EvtMsg_cF4cXyz();
extern "C" void ECut_talk__14daTag_EvtMsg_cFi();
extern "C" void ECut_wait__14daTag_EvtMsg_cFi();
extern "C" static void daTag_EvtMsg_Create__FPv();
extern "C" static void daTag_EvtMsg_Delete__FPv();
extern "C" static void daTag_EvtMsg_Execute__FPv();
extern "C" static void daTag_EvtMsg_Draw__FPv();
extern "C" static bool daTag_EvtMsg_IsDelete__FPv();
extern "C" void __dt__14daTag_EvtMsg_cFv();
extern "C" void func_8048D760();
extern "C" void __sinit_d_a_tag_evtmsg_cpp();
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* mEvtCutNameList__14daTag_EvtMsg_c[3];
extern "C" extern void* lit_3802[3];
extern "C" extern void* lit_3803[3];
extern "C" extern u8 mEvtCutList__14daTag_EvtMsg_c[36];
extern "C" extern void* l_myName;
extern "C" extern void* g_profile_TAG_EVTMSG[12];
extern "C" extern void* __vt__14daTag_EvtMsg_c[3];

//
// External References:
//

void fopAcM_delete(fopAc_ac_c*);
void fopAcM_searchActorAngleY(fopAc_ac_c const*, fopAc_ac_c const*);
void fopAcM_orderSpeakEvent(fopAc_ac_c*, u16, u16);
void fopAcM_orderOtherEventId(fopAc_ac_c*, s16, u8, u16, u16, u16);
void daNpcF_chkEvtBit(u32);
void daNpcF_chkPointInArea(cXyz, cXyz, cXyz, s16);
void operator delete(void*);

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderSpeakEvent__FP10fopAc_ac_cUsUs();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyActIdx__16dEvent_manager_cFiPCPCciii();
extern "C" void getMySubstanceP__16dEvent_manager_cFiPCci();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void daNpcF_chkEvtBit__FUl();
extern "C" void daNpcF_chkPointInArea__F4cXyz4cXyz4cXyzs();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void __dt__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void __dl__FPv();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern u8 const __ptmf_null[12 + 4 /* padding */];
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 struct_80450D64[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 8048D7E8-8048D7EC 0004+00 s=1 e=0 z=0  None .rodata    @3826 */
SECTION_RODATA static u32 const lit_3826 = 0x42C80000;

/* 8048D7EC-8048D818 002C+00 s=4 e=0 z=0  None .rodata    None */
SECTION_RODATA static u8 const struct_8048D7EC[44] = {
    /* 8048D7EC 0001 stringBase_8048D7EC @stringBase0 */
    0x00,
    /* 8048D7ED 0005 data_8048D7ED None */
    0x54,
    0x41,
    0x4C,
    0x4B,
    0x00,
    /* 8048D7F2 0005 data_8048D7F2 None */
    0x57,
    0x41,
    0x49,
    0x54,
    0x00,
    /* 8048D7F7 0021 data_8048D7F7 None */
    0x45,
    0x76,
    0x74,
    0x4D,
    0x73,
    0x67,
    0x00,
    0x44,
    0x45,
    0x46,
    0x41,
    0x55,
    0x4C,
    0x54,
    0x5F,
    0x45,
    0x56,
    0x54,
    0x5F,
    0x54,
    0x41,
    0x4C,
    0x4B,
    0x00,
    0x74,
    0x69,
    0x6D,
    0x65,
    0x72,
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8048D818-8048D824 000C+00 s=2 e=0 z=0  None .data      cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8048D824-8048D838 0004+10 s=0 e=0 z=0  None .data      @1787 */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};

/* 8048D838-8048D844 000C+00 s=0 e=0 z=0  None .data      mEvtCutNameList__14daTag_EvtMsg_c */
SECTION_DATA void* mEvtCutNameList__14daTag_EvtMsg_c[3] = {
    (void*)(((char*)&struct_8048D7EC) + 0x0) /* @stringBase0 */,
    (void*)(((char*)&struct_8048D7EC) + 0x1) /* None */,
    (void*)(((char*)&struct_8048D7EC) + 0x6) /* None */,
};

/* 8048D844-8048D850 000C+00 s=0 e=0 z=0  None .data      @3802 */
SECTION_DATA void* lit_3802[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)ECut_talk__14daTag_EvtMsg_cFi,
};

/* 8048D850-8048D85C 000C+00 s=0 e=0 z=0  None .data      @3803 */
SECTION_DATA void* lit_3803[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)ECut_wait__14daTag_EvtMsg_cFi,
};

/* 8048D85C-8048D880 0024+00 s=0 e=0 z=0  None .data      mEvtCutList__14daTag_EvtMsg_c */
SECTION_DATA u8 mEvtCutList__14daTag_EvtMsg_c[36] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8048D880-8048D884 0004+00 s=0 e=0 z=0  None .data      l_myName */
SECTION_DATA void* l_myName = (void*)(((char*)&struct_8048D7EC) + 0xB) /* None */;

/* 8048D884-8048D8A4 0020+00 s=1 e=0 z=0  None .data      daTag_EvtMsg_MethodTable */
SECTION_DATA static void* daTag_EvtMsg_MethodTable[8] = {
    (void*)daTag_EvtMsg_Create__FPv,
    (void*)daTag_EvtMsg_Delete__FPv,
    (void*)daTag_EvtMsg_Execute__FPv,
    (void*)daTag_EvtMsg_IsDelete__FPv,
    (void*)daTag_EvtMsg_Draw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8048D8A4-8048D8D4 0030+00 s=0 e=0 z=1  None .data      g_profile_TAG_EVTMSG */
SECTION_DATA void* g_profile_TAG_EVTMSG[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02D50000, (void*)&g_fpcLf_Method,
    (void*)0x000005C4, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x011D0000, (void*)&daTag_EvtMsg_MethodTable,
    (void*)0x00044000, (void*)0x000E0000,
};

/* 8048D8D4-8048D8E0 000C+00 s=2 e=0 z=0  None .data      __vt__14daTag_EvtMsg_c */
SECTION_DATA void* __vt__14daTag_EvtMsg_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14daTag_EvtMsg_cFv,
};

/* 8048CF38-8048D014 00DC+00 s=1 e=0 z=0  None .text      create__14daTag_EvtMsg_cFv */
//	8048CF68: 80018B64 (__ct__10fopAc_ac_cFv)
//	8048CF6C: 8048D8D4 (__vt__14daTag_EvtMsg_c)
//	8048CF70: 8048D8D4 (__vt__14daTag_EvtMsg_c)
//	8048CF7C: 80249F00 (__ct__10dMsgFlow_cFv)
//	8048CF90: 8048D7E8 (lit_3826)
//	8048CF94: 8048D7E8 (lit_3826)
//	8048CFE8: 8048D384 (isDelete__14daTag_EvtMsg_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_EvtMsg_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtmsg/d_a_tag_evtmsg/create__14daTag_EvtMsg_cFv.s"
}
#pragma pop

/* 8048D014-8048D01C 0008+00 s=1 e=0 z=0  None .text      Delete__14daTag_EvtMsg_cFv */
bool daTag_EvtMsg_c::Delete() {
    return true;
}

/* 8048D01C-8048D31C 0300+00 s=1 e=0 z=0  None .text      Execute__14daTag_EvtMsg_cFv */
//	8048D02C: 803621D0 (_savegpr_26)
//	8048D034: 8048D818 (cNullVec__6Z2Calc)
//	8048D038: 8048D818 (cNullVec__6Z2Calc)
//	8048D03C: 804061C0 (g_dComIfG_gameInfo)
//	8048D040: 804061C0 (g_dComIfG_gameInfo)
//	8048D050: 80450D64 (struct_80450D64)
//	8048D054: 80450D64 (struct_80450D64)
//	8048D0A0: 80249F90 (init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c)
//	8048D0B4: 8024A2D8 (doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci)
//	8048D0E0: 80047A78 (endCheck__16dEvent_manager_cFs)
//	8048D10C: 80047B1C (getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci)
//	8048D134: 80047E10 (getMyActIdx__16dEvent_manager_cFiPCPCciii)
//	8048D150: 80362084 (__ptmf_scall)
//	8048D168: 8004817C (cutEnd__16dEvent_manager_cFi)
//	8048D178: 8048D368 (getOffSwBit__14daTag_EvtMsg_cFv)
//	8048D194: 8048D368 (getOffSwBit__14daTag_EvtMsg_cFv)
//	8048D19C: 804061C0 (g_dComIfG_gameInfo)
//	8048D1A0: 804061C0 (g_dComIfG_gameInfo)
//	8048D1A8: 80035200 (onSwitch__10dSv_info_cFii)
//	8048D1B0: 80042468 (reset__14dEvt_control_cFv)
//	8048D1B8: 8048D384 (isDelete__14daTag_EvtMsg_cFv)
//	8048D1C8: 80019C7C (fopAcM_delete__FP10fopAc_ac_c)
//	8048D1DC: 804061C0 (g_dComIfG_gameInfo)
//	8048D1E0: 804061C0 (g_dComIfG_gameInfo)
//	8048D208: 8048D428 (chkPointInArea__14daTag_EvtMsg_cF4cXyz)
//	8048D218: 8048D374 (getProcType__14daTag_EvtMsg_cFv)
//	8048D22C: 8001A710 (fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c)
//	8048D268: 8048D7EC (struct_8048D7EC)
//	8048D26C: 8048D7EC (struct_8048D7EC)
//	8048D278: 80047758 (getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc)
//	8048D29C: 8001B67C (fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs)
//	8048D2BC: 8001B19C (fopAcM_orderSpeakEvent__FP10fopAc_ac_cUsUs)
//	8048D308: 8036221C (_restgpr_26)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_EvtMsg_c::Execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtmsg/d_a_tag_evtmsg/Execute__14daTag_EvtMsg_cFv.s"
}
#pragma pop

/* 8048D31C-8048D324 0008+00 s=1 e=0 z=0  None .text      Draw__14daTag_EvtMsg_cFv */
bool daTag_EvtMsg_c::Draw() {
    return true;
}

/* 8048D324-8048D340 001C+00 s=1 e=0 z=0  None .text      getOnEvtBit__14daTag_EvtMsg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_EvtMsg_c::getOnEvtBit() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtmsg/d_a_tag_evtmsg/getOnEvtBit__14daTag_EvtMsg_cFv.s"
}
#pragma pop

/* 8048D340-8048D35C 001C+00 s=1 e=0 z=0  None .text      getOffEvtBit__14daTag_EvtMsg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_EvtMsg_c::getOffEvtBit() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtmsg/d_a_tag_evtmsg/getOffEvtBit__14daTag_EvtMsg_cFv.s"
}
#pragma pop

/* 8048D35C-8048D368 000C+00 s=1 e=0 z=0  None .text      getOnSwBit__14daTag_EvtMsg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_EvtMsg_c::getOnSwBit() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtmsg/d_a_tag_evtmsg/getOnSwBit__14daTag_EvtMsg_cFv.s"
}
#pragma pop

/* 8048D368-8048D374 000C+00 s=2 e=0 z=0  None .text      getOffSwBit__14daTag_EvtMsg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_EvtMsg_c::getOffSwBit() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtmsg/d_a_tag_evtmsg/getOffSwBit__14daTag_EvtMsg_cFv.s"
}
#pragma pop

/* 8048D374-8048D384 0010+00 s=1 e=0 z=0  None .text      getProcType__14daTag_EvtMsg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_EvtMsg_c::getProcType() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtmsg/d_a_tag_evtmsg/getProcType__14daTag_EvtMsg_cFv.s"
}
#pragma pop

/* 8048D384-8048D428 00A4+00 s=2 e=0 z=0  None .text      isDelete__14daTag_EvtMsg_cFv */
//	8048D394: 803621DC (_savegpr_29)
//	8048D3A0: 8048D340 (getOffEvtBit__14daTag_EvtMsg_cFv)
//	8048D3B4: 8048D340 (getOffEvtBit__14daTag_EvtMsg_cFv)
//	8048D3B8: 80155634 (daNpcF_chkEvtBit__FUl)
//	8048D3CC: 8048D368 (getOffSwBit__14daTag_EvtMsg_cFv)
//	8048D3E8: 8048D368 (getOffSwBit__14daTag_EvtMsg_cFv)
//	8048D3F0: 804061C0 (g_dComIfG_gameInfo)
//	8048D3F4: 804061C0 (g_dComIfG_gameInfo)
//	8048D3FC: 80035360 (isSwitch__10dSv_info_cCFii)
//	8048D414: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_EvtMsg_c::isDelete() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtmsg/d_a_tag_evtmsg/isDelete__14daTag_EvtMsg_cFv.s"
}
#pragma pop

/* 8048D428-8048D54C 0124+00 s=1 e=0 z=0  None .text      chkPointInArea__14daTag_EvtMsg_cF4cXyz */
//	8048D438: 803621DC (_savegpr_29)
//	8048D444: 8048D324 (getOnEvtBit__14daTag_EvtMsg_cFv)
//	8048D458: 8048D324 (getOnEvtBit__14daTag_EvtMsg_cFv)
//	8048D46C: 8048D324 (getOnEvtBit__14daTag_EvtMsg_cFv)
//	8048D470: 80155634 (daNpcF_chkEvtBit__FUl)
//	8048D480: 8048D35C (getOnSwBit__14daTag_EvtMsg_cFv)
//	8048D494: 8048D35C (getOnSwBit__14daTag_EvtMsg_cFv)
//	8048D4B0: 8048D35C (getOnSwBit__14daTag_EvtMsg_cFv)
//	8048D4B8: 804061C0 (g_dComIfG_gameInfo)
//	8048D4BC: 804061C0 (g_dComIfG_gameInfo)
//	8048D4C4: 80035360 (isSwitch__10dSv_info_cCFii)
//	8048D528: 80155968 (daNpcF_chkPointInArea__F4cXyz4cXyz4cXyzs)
//	8048D538: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_EvtMsg_c::chkPointInArea(cXyz param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtmsg/d_a_tag_evtmsg/chkPointInArea__14daTag_EvtMsg_cF4cXyz.s"
}
#pragma pop

/* 8048D54C-8048D5CC 0080+00 s=1 e=0 z=0  None .text      ECut_talk__14daTag_EvtMsg_cFi */
//	8048D560: 804061C0 (g_dComIfG_gameInfo)
//	8048D564: 804061C0 (g_dComIfG_gameInfo)
//	8048D56C: 80047D4C (getIsAddvance__16dEvent_manager_cFi)
//	8048D58C: 80249F90 (init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c)
//	8048D5A0: 8024A2D8 (doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_EvtMsg_c::ECut_talk(int param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtmsg/d_a_tag_evtmsg/ECut_talk__14daTag_EvtMsg_cFi.s"
}
#pragma pop

/* 8048D5CC-8048D668 009C+00 s=1 e=0 z=0  None .text      ECut_wait__14daTag_EvtMsg_cFi */
//	8048D5DC: 803621D8 (_savegpr_28)
//	8048D5E8: 804061C0 (g_dComIfG_gameInfo)
//	8048D5EC: 804061C0 (g_dComIfG_gameInfo)
//	8048D5FC: 8048D7EC (struct_8048D7EC)
//	8048D600: 8048D7EC (struct_8048D7EC)
//	8048D60C: 800480EC (getMySubstanceP__16dEvent_manager_cFiPCci)
//	8048D624: 80047D4C (getIsAddvance__16dEvent_manager_cFi)
//	8048D638: 8048D760 (func_8048D760)
//	8048D654: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_EvtMsg_c::ECut_wait(int param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtmsg/d_a_tag_evtmsg/ECut_wait__14daTag_EvtMsg_cFi.s"
}
#pragma pop

/* 8048D668-8048D688 0020+00 s=1 e=0 z=0  None .text      daTag_EvtMsg_Create__FPv */
//	8048D674: 8048CF38 (create__14daTag_EvtMsg_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTag_EvtMsg_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtmsg/d_a_tag_evtmsg/daTag_EvtMsg_Create__FPv.s"
}
#pragma pop

/* 8048D688-8048D6A8 0020+00 s=1 e=0 z=0  None .text      daTag_EvtMsg_Delete__FPv */
//	8048D694: 8048D014 (Delete__14daTag_EvtMsg_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTag_EvtMsg_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtmsg/d_a_tag_evtmsg/daTag_EvtMsg_Delete__FPv.s"
}
#pragma pop

/* 8048D6A8-8048D6C8 0020+00 s=1 e=0 z=0  None .text      daTag_EvtMsg_Execute__FPv */
//	8048D6B4: 8048D01C (Execute__14daTag_EvtMsg_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTag_EvtMsg_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtmsg/d_a_tag_evtmsg/daTag_EvtMsg_Execute__FPv.s"
}
#pragma pop

/* 8048D6C8-8048D6E8 0020+00 s=1 e=0 z=0  None .text      daTag_EvtMsg_Draw__FPv */
//	8048D6D4: 8048D31C (Draw__14daTag_EvtMsg_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTag_EvtMsg_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtmsg/d_a_tag_evtmsg/daTag_EvtMsg_Draw__FPv.s"
}
#pragma pop

/* 8048D6E8-8048D6F0 0008+00 s=1 e=0 z=0  None .text      daTag_EvtMsg_IsDelete__FPv */
static bool daTag_EvtMsg_IsDelete(void* param_0) {
    return true;
}

/* 8048D6F0-8048D760 0070+00 s=1 e=0 z=0  None .text      __dt__14daTag_EvtMsg_cFv */
//	8048D710: 8048D8D4 (__vt__14daTag_EvtMsg_c)
//	8048D714: 8048D8D4 (__vt__14daTag_EvtMsg_c)
//	8048D724: 80249F48 (__dt__10dMsgFlow_cFv)
//	8048D730: 80018C8C (__dt__10fopAc_ac_cFv)
//	8048D740: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTag_EvtMsg_c::~daTag_EvtMsg_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtmsg/d_a_tag_evtmsg/__dt__14daTag_EvtMsg_cFv.s"
}
#pragma pop

/* 8048D760-8048D77C 001C+00 s=1 e=0 z=0  None .text      cLib_calcTimer<i>__FPi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cLib_calcTimer__template0(int* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtmsg/d_a_tag_evtmsg/func_8048D760.s"
}
#pragma pop

/* 8048D77C-8048D7DC 0060+00 s=0 e=1 z=0  None .text      __sinit_d_a_tag_evtmsg_cpp */
//	8048D77C: 8048D818 (cNullVec__6Z2Calc)
//	8048D780: 8048D818 (cNullVec__6Z2Calc)
//	8048D784: 803A2180 (__ptmf_null)
//	8048D788: 803A2180 (__ptmf_null)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_tag_evtmsg_cpp() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtmsg/d_a_tag_evtmsg/__sinit_d_a_tag_evtmsg_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_8048D77C = (void*)__sinit_d_a_tag_evtmsg_cpp;
#pragma pop
