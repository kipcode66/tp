//
// Generated By: dol2asm
// Translation Unit: f_pc/f_pc_manager
//

#include "f_pc/f_pc_manager.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct node_list_class {};

struct layer_class {};

struct dShutdownErrorMsg_c {
    /* 8009D790 */ void execute();
};

struct dLib_time_c {
    /* 80032880 */ void stopTime();
    /* 800328BC */ void startTime();
};

struct dDvdErrorMsg_c {
    /* 8009D354 */ void execute();
};

struct dDlst_peekZ_c {
    /* 80056080 */ void peekData();
};

struct dComIfG_play_c {
    /* 8002CAC4 */ void drawSimpleModel();
};

struct base_process_class {};

struct Z2SoundMgr {
    /* 802AA6B0 */ void pauseAllGameSound(bool);
};

struct JUTGamePad {
    struct CRumble {
        /* 802E1948 */ void stopPatternedRumble(s16);
    };
};

//
// Forward References:
//

void fpcM_Draw(void*);
static void fpcM_DrawIterater(int (*)(void*, void*));
void fpcM_Execute(void*);
void fpcM_Delete(void*);
void fpcM_IsCreating(unsigned int);
void fpcM_Management(void (*)(void), void (*)(void));
void fpcM_Init();
void fpcM_FastCreate(s16, int (*)(void*), void*, void*);
void fpcM_IsPause(void*, u8);
void fpcM_PauseEnable(void*, u8);
void fpcM_PauseDisable(void*, u8);
void fpcM_JudgeInLayer(unsigned int, void* (*)(void*, void*), void*);

extern "C" void fpcM_Draw__FPv();
extern "C" static void fpcM_DrawIterater__FPFPvPv_i();
extern "C" void fpcM_Execute__FPv();
extern "C" void fpcM_Delete__FPv();
extern "C" void fpcM_IsCreating__FUi();
extern "C" void fpcM_Management__FPFv_vPFv_v();
extern "C" void fpcM_Init__Fv();
extern "C" void fpcM_FastCreate__FsPFPv_iPvPv();
extern "C" void fpcM_IsPause__FPvUc();
extern "C" void fpcM_PauseEnable__FPvUc();
extern "C" void fpcM_PauseDisable__FPvUc();
extern "C" void fpcM_JudgeInLayer__FUiPFPvPv_PvPv();

//
// External References:
//

void fpcCtIt_JudgeInLayer(unsigned int, void* (*)(void*, void*), void*);
void fpcCt_IsCreatingByID(unsigned int);
void fpcCt_Handler();
void fpcDt_Handler();
void fpcDt_Delete(void*);
void fpcEx_Execute(base_process_class*);
void fpcEx_Handler(int (*)(void*, void*));
void fpcLy_RootLayer();
void fpcLy_CurrentLayer();
void fpcLy_Layer(unsigned int);
void fpcLy_Create(layer_class*, void*, node_list_class*, int);
void fpcLyIt_OnlyHere(layer_class*, int (*)(void*, void*), void*);
void fpcLyIt_Judge(layer_class*, void* (*)(void*, void*), void*);
void fpcLn_Create();
void fpcPi_Handler();
void fpcPause_IsEnable(void*, u8);
void fpcPause_Enable(void*, u8);
void fpcPause_Disable(void*, u8);
void fpcDw_Execute(base_process_class*);
void fpcDw_Handler(int (*)(int (*)(void*, void*)), int (*)(void*, void*));
void fpcFCtRq_Request(layer_class*, s16, int (*)(void*, void*), void*, void*);
void cAPIGph_Painter();
void MtxInit();

extern "C" void fpcCtIt_JudgeInLayer__FUiPFPvPv_PvPv();
extern "C" void fpcCt_IsCreatingByID__FUi();
extern "C" void fpcCt_Handler__Fv();
extern "C" void fpcDt_Handler__Fv();
extern "C" void fpcDt_Delete__FPv();
extern "C" void fpcEx_Execute__FP18base_process_class();
extern "C" void fpcEx_Handler__FPFPvPv_i();
extern "C" void fpcLy_RootLayer__Fv();
extern "C" void fpcLy_CurrentLayer__Fv();
extern "C" void fpcLy_Layer__FUi();
extern "C" void fpcLy_Create__FP11layer_classPvP15node_list_classi();
extern "C" void fpcLyIt_OnlyHere__FP11layer_classPFPvPv_iPv();
extern "C" void fpcLyIt_Judge__FP11layer_classPFPvPv_PvPv();
extern "C" void fpcLn_Create__Fv();
extern "C" void fpcPi_Handler__Fv();
extern "C" void fpcPause_IsEnable__FPvUc();
extern "C" void fpcPause_Enable__FPvUc();
extern "C" void fpcPause_Disable__FPvUc();
extern "C" void fpcDw_Execute__FP18base_process_class();
extern "C" void fpcDw_Handler__FPFPFPvPv_i_iPFPvPv_i();
extern "C" void fpcFCtRq_Request__FP11layer_classsPFPvPv_iPvPv();
extern "C" void drawSimpleModel__14dComIfG_play_cFv();
extern "C" void stopTime__11dLib_time_cFv();
extern "C" void startTime__11dLib_time_cFv();
extern "C" void peekData__13dDlst_peekZ_cFv();
extern "C" void execute__14dDvdErrorMsg_cFv();
extern "C" void execute__19dShutdownErrorMsg_cFv();
extern "C" void cAPIGph_Painter__Fv();
extern "C" void MtxInit__Fv();
extern "C" void pauseAllGameSound__10Z2SoundMgrFb();
extern "C" void stopPatternedRumble__Q210JUTGamePad7CRumbleFs();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();
extern "C" extern u8 m_gamePad__8mDoCPd_c[16];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 data_80450B60[4];
extern "C" extern u8 struct_80450D38[8];
extern "C" extern u8 data_80450EC4[4];

//
// Declarations:
//

/* 800220A0-800220C0 0020+00 s=1 e=1 z=0  None .text      fpcM_Draw__FPv */
//	800220AC: 80023954 (fpcDw_Execute__FP18base_process_class)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcM_Draw(void* param_0) {
    nofralloc
#include "asm/f_pc/f_pc_manager/fpcM_Draw__FPv.s"
}
#pragma pop

/* 800220C0-800220F8 0038+00 s=1 e=0 z=0  None .text      fpcM_DrawIterater__FPFPvPv_i */
//	800220D4: 800216DC (fpcLy_RootLayer__Fv)
//	800220E0: 80021B88 (fpcLyIt_OnlyHere__FP11layer_classPFPvPv_iPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void fpcM_DrawIterater(int (*)(void*, void*)) {
    nofralloc
#include "asm/f_pc/f_pc_manager/fpcM_DrawIterater__FPFPvPv_i.s"
}
#pragma pop

/* 800220F8-80022118 0020+00 s=1 e=0 z=1  None .text      fpcM_Execute__FPv */
//	80022104: 800213C4 (fpcEx_Execute__FP18base_process_class)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcM_Execute(void* param_0) {
    nofralloc
#include "asm/f_pc/f_pc_manager/fpcM_Execute__FPv.s"
}
#pragma pop

/* 80022118-80022138 0020+00 s=0 e=7 z=0  None .text      fpcM_Delete__FPv */
//	80022124: 800212A4 (fpcDt_Delete__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcM_Delete(void* param_0) {
    nofralloc
#include "asm/f_pc/f_pc_manager/fpcM_Delete__FPv.s"
}
#pragma pop

/* 80022138-80022158 0020+00 s=0 e=6 z=43  None .text      fpcM_IsCreating__FUi */
//	80022144: 80020EA8 (fpcCt_IsCreatingByID__FUi)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcM_IsCreating(unsigned int param_0) {
    nofralloc
#include "asm/f_pc/f_pc_manager/fpcM_IsCreating__FUi.s"
}
#pragma pop

/* 80022158-800222B8 0160+00 s=0 e=1 z=0  None .text      fpcM_Management__FPFv_vPFv_v */
//	80022174: 80270E4C (MtxInit__Fv)
//	80022178: 804061C0 (g_dComIfG_gameInfo)
//	8002217C: 804061C0 (g_dComIfG_gameInfo)
//	80022188: 80056080 (peekData__13dDlst_peekZ_cFv)
//	8002218C: 8009D790 (execute__19dShutdownErrorMsg_cFv)
//	80022198: 80450D39 (struct_80450D38)
//	800221A8: 80450D38 (struct_80450D38)
//	800221B0: 80450D39 (struct_80450D38)
//	800221B4: 8009D354 (execute__14dDvdErrorMsg_cFv)
//	800221C0: 80450D38 (struct_80450D38)
//	800221CC: 800328BC (startTime__11dLib_time_cFv)
//	800221D0: 80450B60 (data_80450B60)
//	800221D8: 802AA6B0 (pauseAllGameSound__10Z2SoundMgrFb)
//	800221E0: 80450D38 (struct_80450D38)
//	800221E4: 802632C8 (cAPIGph_Painter__Fv)
//	800221E8: 80450EC4 (data_80450EC4)
//	800221F4: 800210D4 (fpcDt_Handler__Fv)
//	80022200: 80450EC4 (data_80450EC4)
//	80022204: 80023428 (fpcPi_Handler__Fv)
//	80022208: 80020F10 (fpcCt_Handler__Fv)
//	80022220: 800220F8 (fpcM_Execute__FPv)
//	80022224: 800220F8 (fpcM_Execute__FPv)
//	80022228: 80021568 (fpcEx_Handler__FPFPvPv_i)
//	8002222C: 800220C0 (fpcM_DrawIterater__FPFPvPv_i)
//	80022230: 800220C0 (fpcM_DrawIterater__FPFPvPv_i)
//	80022234: 800220A0 (fpcM_Draw__FPv)
//	80022238: 800220A0 (fpcM_Draw__FPv)
//	8002223C: 800239F4 (fpcDw_Handler__FPFPFPvPv_i_iPFPvPv_i)
//	80022254: 804061C0 (g_dComIfG_gameInfo)
//	80022258: 804061C0 (g_dComIfG_gameInfo)
//	80022260: 8002CAC4 (drawSimpleModel__14dComIfG_play_cFv)
//	80022268: 80450D38 (struct_80450D38)
//	80022274: 80032880 (stopTime__11dLib_time_cFv)
//	80022278: 80450B60 (data_80450B60)
//	80022280: 802AA6B0 (pauseAllGameSound__10Z2SoundMgrFb)
//	80022284: 803DD2D8 (m_gamePad__8mDoCPd_c)
//	80022288: 803DD2D8 (m_gamePad__8mDoCPd_c)
//	80022294: 802E1948 (stopPatternedRumble__Q210JUTGamePad7CRumbleFs)
//	8002229C: 80450D38 (struct_80450D38)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcM_Management(void (*)(void), void (*)(void)) {
    nofralloc
#include "asm/f_pc/f_pc_manager/fpcM_Management__FPFv_vPFv_v.s"
}
#pragma pop

/* ############################################################################################## */
/* 803F4DB0-803F4DDC 002C+00 s=1 e=0 z=0  None .bss       rootlayer$3716 */
static u8 rootlayer[44];

/* 803F4DDC-803F4E58 0078+04 s=1 e=0 z=0  None .bss       queue$3717 */
static u8 queue[120 + 4 /* padding */];

/* 800222B8-800222F4 003C+00 s=0 e=1 z=0  None .text      fpcM_Init__Fv */
//	800222C4: 803F4DB0 (rootlayer)
//	800222C8: 803F4DB0 (rootlayer)
//	800222D0: 803F4DDC (queue)
//	800222D4: 803F4DDC (queue)
//	800222DC: 800218C8 (fpcLy_Create__FP11layer_classPvP15node_list_classi)
//	800222E0: 80021F64 (fpcLn_Create__Fv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcM_Init() {
    nofralloc
#include "asm/f_pc/f_pc_manager/fpcM_Init__Fv.s"
}
#pragma pop

/* 800222F4-80022348 0054+00 s=0 e=3 z=0  None .text      fpcM_FastCreate__FsPFPv_iPvPv */
//	80022304: 803621D8 (_savegpr_28)
//	80022318: 800216F4 (fpcLy_CurrentLayer__Fv)
//	8002232C: 80023AA0 (fpcFCtRq_Request__FP11layer_classsPFPvPv_iPvPv)
//	80022334: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcM_FastCreate(s16 param_0, int (*)(void*), void* param_2, void* param_3) {
    nofralloc
#include "asm/f_pc/f_pc_manager/fpcM_FastCreate__FsPFPv_iPvPv.s"
}
#pragma pop

/* 80022348-8002236C 0024+00 s=0 e=1 z=0  None .text      fpcM_IsPause__FPvUc */
//	80022358: 80023844 (fpcPause_IsEnable__FPvUc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcM_IsPause(void* param_0, u8 param_1) {
    nofralloc
#include "asm/f_pc/f_pc_manager/fpcM_IsPause__FPvUc.s"
}
#pragma pop

/* 8002236C-80022390 0024+00 s=0 e=1 z=0  None .text      fpcM_PauseEnable__FPvUc */
//	8002237C: 80023868 (fpcPause_Enable__FPvUc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcM_PauseEnable(void* param_0, u8 param_1) {
    nofralloc
#include "asm/f_pc/f_pc_manager/fpcM_PauseEnable__FPvUc.s"
}
#pragma pop

/* 80022390-800223B4 0024+00 s=0 e=1 z=0  None .text      fpcM_PauseDisable__FPvUc */
//	800223A0: 800238D4 (fpcPause_Disable__FPvUc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcM_PauseDisable(void* param_0, u8 param_1) {
    nofralloc
#include "asm/f_pc/f_pc_manager/fpcM_PauseDisable__FPvUc.s"
}
#pragma pop

/* 800223B4-80022428 0074+00 s=0 e=1 z=0  None .text      fpcM_JudgeInLayer__FUiPFPvPv_PvPv */
//	800223C4: 803621D8 (_savegpr_28)
//	800223D4: 8002174C (fpcLy_Layer__FUi)
//	800223EC: 80020A94 (fpcCtIt_JudgeInLayer__FUiPFPvPv_PvPv)
//	80022404: 80021C28 (fpcLyIt_Judge__FP11layer_classPFPvPv_PvPv)
//	80022414: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fpcM_JudgeInLayer(unsigned int param_0, void* (*)(void*, void*), void* param_2) {
    nofralloc
#include "asm/f_pc/f_pc_manager/fpcM_JudgeInLayer__FUiPFPvPv_PvPv.s"
}
#pragma pop
