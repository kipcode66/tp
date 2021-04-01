//
// Generated By: dol2asm
// Translation Unit: msg/scrn/d_msg_scrn_jimaku
//

#include "msg/scrn/d_msg_scrn_jimaku.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct dMsgScrnLight_c {
    /* 80245934 */ dMsgScrnLight_c(u8, u8);
};

struct JKRExpHeap {};

struct dMsgScrnJimaku_c {
    /* 80244558 */ dMsgScrnJimaku_c(u8, JKRExpHeap*);
    /* 80244A74 */ ~dMsgScrnJimaku_c();
    /* 80244C2C */ void exec();
    /* 80244D34 */ void drawSelf();
    /* 80244D8C */ void fukiAlpha(f32);
    /* 80244E2C */ void fukiScale(f32);
    /* 80244E30 */ void fukiTrans(f32, f32);
    /* 80244E34 */ void fontAlpha(f32);
};

struct dMsgScrnBase_c {
    /* 80238C40 */ void setSelectRubyString(char*, char*, char*);
    /* 80238C44 */ void setSelectString(char*, char*, char*);
    /* 80238C48 */ bool selectAnimeMove(u8, u8, bool);
    /* 80238C50 */ void selectAnimeInit(u8, u8, f32, u8);
    /* 80238C54 */ void arwAnimeMove();
    /* 80238C58 */ void arwAnimeInit();
    /* 80238C5C */ void fukiPosCalc(u8);
    /* 80238C60 */ bool isSelect();
    /* 80238C68 */ bool selectAnimeEnd();
    /* 80238C70 */ void dotAnimeMove();
    /* 80238C74 */ void dotAnimeInit();
    /* 8023C0DC */ dMsgScrnBase_c();
    /* 8023C124 */ ~dMsgScrnBase_c();
    /* 8023C16C */ void init();
    /* 8023C234 */ void multiDraw();
    /* 8023C274 */ void draw();
    /* 8023C32C */ void drawOutFont(f32, f32, f32);
    /* 8023C574 */ void isTalkNow();
};

struct JUtility {
    struct TColor {};
};

struct JKRHeap {
    /* 802CE4D4 */ void alloc(u32, int);
    /* 802CE548 */ void free(void*);
};

struct JKRArchive {};

struct J2DTextBox {
    /* 8030074C */ void setString(s16, char const*, ...);
};

struct J2DScreen {
    /* 802F8498 */ J2DScreen();
    /* 802F8648 */ void setPriority(char const*, u32, JKRArchive*);
};

struct CPaneMgrAlpha {
    /* 802557D0 */ void setAlphaRate(f32);
};

struct CPaneMgr {
    /* 80253984 */ CPaneMgr(J2DScreen*, u64, u8, JKRExpHeap*);
    /* 802542E8 */ void getGlobalPosX();
    /* 80254364 */ void getGlobalPosY();
    /* 80254458 */ void setBlackWhite(JUtility::TColor, JUtility::TColor);
    /* 802545B0 */ void paneTrans(f32, f32);
};

//
// Forward References:
//

extern "C" void __ct__16dMsgScrnJimaku_cFUcP10JKRExpHeap();
extern "C" void __dt__16dMsgScrnJimaku_cFv();
extern "C" void exec__16dMsgScrnJimaku_cFv();
extern "C" void drawSelf__16dMsgScrnJimaku_cFv();
extern "C" void fukiAlpha__16dMsgScrnJimaku_cFf();
extern "C" void fukiScale__16dMsgScrnJimaku_cFf();
extern "C" void fukiTrans__16dMsgScrnJimaku_cFff();
extern "C" void fontAlpha__16dMsgScrnJimaku_cFf();
extern "C" extern char const* const msg_scrn_d_msg_scrn_jimaku__stringBase0;
extern "C" extern void* __vt__16dMsgScrnJimaku_c[22];

//
// External References:
//

void mDoExt_getMesgFont();
void dComIfGp_getSubHeap2D(int);
void dPaneClass_showNullPane(J2DScreen*);
void* operator new(u32);
void operator delete(void*);

SECTION_INIT void memset();
extern "C" void mDoExt_getMesgFont__Fv();
extern "C" void dComIfGp_getSubHeap2D__Fi();
extern "C" void setSelectRubyString__14dMsgScrnBase_cFPcPcPc();
extern "C" void setSelectString__14dMsgScrnBase_cFPcPcPc();
extern "C" bool selectAnimeMove__14dMsgScrnBase_cFUcUcb();
extern "C" void selectAnimeInit__14dMsgScrnBase_cFUcUcfUc();
extern "C" void arwAnimeMove__14dMsgScrnBase_cFv();
extern "C" void arwAnimeInit__14dMsgScrnBase_cFv();
extern "C" void fukiPosCalc__14dMsgScrnBase_cFUc();
extern "C" bool isSelect__14dMsgScrnBase_cFv();
extern "C" bool selectAnimeEnd__14dMsgScrnBase_cFv();
extern "C" void dotAnimeMove__14dMsgScrnBase_cFv();
extern "C" void dotAnimeInit__14dMsgScrnBase_cFv();
extern "C" void __ct__14dMsgScrnBase_cFv();
extern "C" void __dt__14dMsgScrnBase_cFv();
extern "C" void init__14dMsgScrnBase_cFv();
extern "C" void multiDraw__14dMsgScrnBase_cFv();
extern "C" void draw__14dMsgScrnBase_cFv();
extern "C" void drawOutFont__14dMsgScrnBase_cFfff();
extern "C" void isTalkNow__14dMsgScrnBase_cFv();
extern "C" void __ct__15dMsgScrnLight_cFUcUc();
extern "C" void __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap();
extern "C" void getGlobalPosX__8CPaneMgrFv();
extern "C" void getGlobalPosY__8CPaneMgrFv();
extern "C" void setBlackWhite__8CPaneMgrFQ28JUtility6TColorQ28JUtility6TColor();
extern "C" void paneTrans__8CPaneMgrFff();
extern "C" void dPaneClass_showNullPane__FP9J2DScreen();
extern "C" void setAlphaRate__13CPaneMgrAlphaFf();
extern "C" void alloc__7JKRHeapFUli();
extern "C" void free__7JKRHeapFPv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void __ct__9J2DScreenFv();
extern "C" void setPriority__9J2DScreenFPCcUlP10JKRArchive();
extern "C" void setString__10J2DTextBoxFsPCce();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_MsgObject_HIO_c[1040];

//
// Declarations:
//

/* ############################################################################################## */
/* 80399A80-80399AA0 001F+01 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80399A80 = "zelda_jimaku_message_text.blo";
SECTION_DEAD char const* const stringBase_80399A9E = "";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_80399A9F = "";
#pragma pop

/* 803C11E8-803C1240 0058+00 s=2 e=0 z=0  None .data      __vt__16dMsgScrnJimaku_c */
SECTION_DATA void* __vt__16dMsgScrnJimaku_c[22] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__14dMsgScrnBase_cFv,
    (void*)__dt__16dMsgScrnJimaku_cFv,
    (void*)exec__16dMsgScrnJimaku_cFv,
    (void*)multiDraw__14dMsgScrnBase_cFv,
    (void*)drawSelf__16dMsgScrnJimaku_cFv,
    (void*)setSelectString__14dMsgScrnBase_cFPcPcPc,
    (void*)setSelectRubyString__14dMsgScrnBase_cFPcPcPc,
    (void*)arwAnimeInit__14dMsgScrnBase_cFv,
    (void*)arwAnimeMove__14dMsgScrnBase_cFv,
    (void*)dotAnimeInit__14dMsgScrnBase_cFv,
    (void*)dotAnimeMove__14dMsgScrnBase_cFv,
    (void*)isSelect__14dMsgScrnBase_cFv,
    (void*)selectAnimeInit__14dMsgScrnBase_cFUcUcfUc,
    (void*)selectAnimeMove__14dMsgScrnBase_cFUcUcb,
    (void*)selectAnimeEnd__14dMsgScrnBase_cFv,
    (void*)fukiScale__16dMsgScrnJimaku_cFf,
    (void*)fukiTrans__16dMsgScrnJimaku_cFff,
    (void*)fukiAlpha__16dMsgScrnJimaku_cFf,
    (void*)fontAlpha__16dMsgScrnJimaku_cFf,
    (void*)fukiPosCalc__14dMsgScrnBase_cFUc,
};

/* 80454CB0-80454CB4 0004+00 s=2 e=0 z=0  None .sdata2    @3941 */
SECTION_SDATA2 static u8 lit_3941[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80454CB4-80454CB8 0004+00 s=1 e=0 z=0  None .sdata2    @3942 */
SECTION_SDATA2 static f32 lit_3942 = 6.0f / 5.0f;

/* 80244558-80244A74 051C+00 s=0 e=1 z=0  None .text      __ct__16dMsgScrnJimaku_cFUcP10JKRExpHeap
 */
//	80244570: 803621C4 (_savegpr_23)
//	80244580: 8023C0DC (__ct__14dMsgScrnBase_cFv)
//	80244584: 803C11E8 (__vt__16dMsgScrnJimaku_c)
//	80244588: 803C11E8 (__vt__16dMsgScrnJimaku_c)
//	802445A4: 8002E3D0 (dComIfGp_getSubHeap2D__Fi)
//	802445B0: 8023C16C (init__14dMsgScrnBase_cFv)
//	802445B8: 802CEC4C (__nw__FUl)
//	802445C4: 802F8498 (__ct__9J2DScreenFv)
//	802445D4: 80399A80 (msg_scrn_d_msg_scrn_jimaku__stringBase0)
//	802445D8: 80399A80 (msg_scrn_d_msg_scrn_jimaku__stringBase0)
//	802445E0: 804061C0 (g_dComIfG_gameInfo)
//	802445E4: 804061C0 (g_dComIfG_gameInfo)
//	802445EC: 802F8648 (setPriority__9J2DScreenFPCcUlP10JKRArchive)
//	802445F4: 802550E8 (dPaneClass_showNullPane__FP9J2DScreen)
//	802445FC: 802CEC4C (__nw__FUl)
//	80244610: 80245934 (__ct__15dMsgScrnLight_cFUcUc)
//	80244628: 802CE4D4 (alloc__7JKRHeapFUli)
//	80244638: 80003458 (memset)
//	80244644: 802CEC4C (__nw__FUl)
//	8024466C: 80253984 (__ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap)
//	80244678: 8043028C (g_MsgObject_HIO_c)
//	8024467C: 8043028C (g_MsgObject_HIO_c)
//	802446A8: 8043028C (g_MsgObject_HIO_c)
//	802446AC: 8043028C (g_MsgObject_HIO_c)
//	802446BC: 80454CB0 (lit_3941)
//	802446C4: 802545B0 (paneTrans__8CPaneMgrFff)
//	802446CC: 802CEC4C (__nw__FUl)
//	802446F4: 80253984 (__ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap)
//	80244704: 802CEC4C (__nw__FUl)
//	80244728: 80253984 (__ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap)
//	802447C4: 80399A80 (msg_scrn_d_msg_scrn_jimaku__stringBase0)
//	802447C8: 80399A80 (msg_scrn_d_msg_scrn_jimaku__stringBase0)
//	802447CC: 8043028C (g_MsgObject_HIO_c)
//	802447D0: 8043028C (g_MsgObject_HIO_c)
//	802447E0: 800149F0 (mDoExt_getMesgFont__Fv)
//	80244814: 8030074C (setString__10J2DTextBoxFsPCce)
//	80244844: 80254458 (setBlackWhite__8CPaneMgrFQ28JUtility6TColorQ28JUtility6TColor)
//	8024485C: 800149F0 (mDoExt_getMesgFont__Fv)
//	80244888: 80399A80 (msg_scrn_d_msg_scrn_jimaku__stringBase0)
//	8024488C: 80399A80 (msg_scrn_d_msg_scrn_jimaku__stringBase0)
//	80244898: 8030074C (setString__10J2DTextBoxFsPCce)
//	802448BC: 80254458 (setBlackWhite__8CPaneMgrFQ28JUtility6TColorQ28JUtility6TColor)
//	80244944: 80454CB4 (lit_3942)
//	802449A4: 802542E8 (getGlobalPosX__8CPaneMgrFv)
//	802449B0: 80254364 (getGlobalPosY__8CPaneMgrFv)
//	80244A28: 80454CB4 (lit_3942)
//	80244A60: 80362210 (_restgpr_23)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMsgScrnJimaku_c::dMsgScrnJimaku_c(u8 param_0, JKRExpHeap* param_1) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_jimaku/__ct__16dMsgScrnJimaku_cFUcP10JKRExpHeap.s"
}
#pragma pop

/* 80244A74-80244C2C 01B8+00 s=1 e=0 z=0  None .text      __dt__16dMsgScrnJimaku_cFv */
//	80244A84: 803621D4 (_savegpr_27)
//	80244A94: 803C11E8 (__vt__16dMsgScrnJimaku_c)
//	80244A98: 803C11E8 (__vt__16dMsgScrnJimaku_c)
//	80244B00: 802CE548 (free__7JKRHeapFPv)
//	80244BA0: 804061C0 (g_dComIfG_gameInfo)
//	80244BA4: 804061C0 (g_dComIfG_gameInfo)
//	80244BBC: 804061C0 (g_dComIfG_gameInfo)
//	80244BC0: 804061C0 (g_dComIfG_gameInfo)
//	80244BD8: 804061C0 (g_dComIfG_gameInfo)
//	80244BDC: 804061C0 (g_dComIfG_gameInfo)
//	80244BFC: 8023C124 (__dt__14dMsgScrnBase_cFv)
//	80244C0C: 802CED3C (__dl__FPv)
//	80244C18: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMsgScrnJimaku_c::~dMsgScrnJimaku_c() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_jimaku/__dt__16dMsgScrnJimaku_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454CB8-80454CC0 0004+04 s=2 e=0 z=0  None .sdata2    @4021 */
SECTION_SDATA2 static f32 lit_4021[1 + 1 /* padding */] = {
    1.0f,
    /* padding */
    0.0f,
};

/* 80244C2C-80244D34 0108+00 s=1 e=0 z=0  None .text      exec__16dMsgScrnJimaku_cFv */
//	80244C3C: 803621C8 (_savegpr_24)
//	80244C44: 8023C574 (isTalkNow__14dMsgScrnBase_cFv)
//	80244C54: 80454CB8 (lit_4021)
//	80244C68: 8043028C (g_MsgObject_HIO_c)
//	80244C6C: 8043028C (g_MsgObject_HIO_c)
//	80244CA4: 8043028C (g_MsgObject_HIO_c)
//	80244CA8: 8043028C (g_MsgObject_HIO_c)
//	80244CD8: 80254458 (setBlackWhite__8CPaneMgrFQ28JUtility6TColorQ28JUtility6TColor)
//	80244D04: 80254458 (setBlackWhite__8CPaneMgrFQ28JUtility6TColorQ28JUtility6TColor)
//	80244D20: 80362214 (_restgpr_24)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnJimaku_c::exec() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_jimaku/exec__16dMsgScrnJimaku_cFv.s"
}
#pragma pop

/* 80244D34-80244D8C 0058+00 s=1 e=0 z=0  None .text      drawSelf__16dMsgScrnJimaku_cFv */
//	80244D48: 804061C0 (g_dComIfG_gameInfo)
//	80244D4C: 804061C0 (g_dComIfG_gameInfo)
//	80244D68: 80454CB0 (lit_3941)
//	80244D70: 80454CB8 (lit_4021)
//	80244D74: 8023C32C (drawOutFont__14dMsgScrnBase_cFfff)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnJimaku_c::drawSelf() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_jimaku/drawSelf__16dMsgScrnJimaku_cFv.s"
}
#pragma pop

/* 80244D8C-80244E2C 00A0+00 s=1 e=0 z=0  None .text      fukiAlpha__16dMsgScrnJimaku_cFf */
//	80244DA4: 803621D8 (_savegpr_28)
//	80244DB4: 8043028C (g_MsgObject_HIO_c)
//	80244DB8: 8043028C (g_MsgObject_HIO_c)
//	80244DC4: 802557D0 (setAlphaRate__13CPaneMgrAlphaFf)
//	80244DE0: 802557D0 (setAlphaRate__13CPaneMgrAlphaFf)
//	80244DF8: 802557D0 (setAlphaRate__13CPaneMgrAlphaFf)
//	80244E18: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnJimaku_c::fukiAlpha(f32 param_0) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_jimaku/fukiAlpha__16dMsgScrnJimaku_cFf.s"
}
#pragma pop

/* 80244E2C-80244E30 0004+00 s=1 e=0 z=0  None .text      fukiScale__16dMsgScrnJimaku_cFf */
void dMsgScrnJimaku_c::fukiScale(f32 param_0) {
    /* empty function */
}

/* 80244E30-80244E34 0004+00 s=1 e=0 z=0  None .text      fukiTrans__16dMsgScrnJimaku_cFff */
void dMsgScrnJimaku_c::fukiTrans(f32 param_0, f32 param_1) {
    /* empty function */
}

/* 80244E34-80244E38 0004+00 s=1 e=0 z=0  None .text      fontAlpha__16dMsgScrnJimaku_cFf */
void dMsgScrnJimaku_c::fontAlpha(f32 param_0) {
    /* empty function */
}
