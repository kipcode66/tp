//
// Generated By: dol2asm
// Translation Unit: msg/scrn/d_msg_scrn_tree
//

#include "msg/scrn/d_msg_scrn_tree.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JKRExpHeap {};

struct JUTFont {};

struct dMsgScrnTree_c {
    /* 80248954 */ dMsgScrnTree_c(JUTFont*, JKRExpHeap*);
    /* 80248F14 */ ~dMsgScrnTree_c();
    /* 80249118 */ void exec();
    /* 80249270 */ void draw();
    /* 802492F8 */ void fukiAlpha(f32);
    /* 802493AC */ void fukiScale(f32);
    /* 802493B0 */ void fukiTrans(f32, f32);
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
    /* 8023C300 */ void drawSelf();
    /* 8023C4F4 */ void fontAlpha(f32);
    /* 8023C574 */ void isTalkNow();
};

struct JKRHeap {
    /* 802CE784 */ void getTotalFreeSize();
};

struct JKRFileLoader {
    /* 802D4270 */ void getGlbResource(char const*, JKRFileLoader*);
};

struct JKRArchive {};

struct J2DTextBox {
    /* 8030074C */ void setString(s16, char const*, ...);
};

struct J2DGrafContext {};

struct J2DScreen {
    /* 802F8498 */ J2DScreen();
    /* 802F8648 */ void setPriority(char const*, u32, JKRArchive*);
    /* 802F8ED4 */ void draw(f32, f32, J2DGrafContext const*);
    /* 802F9690 */ void animation();
};

struct J2DPane {
    /* 802F7FCC */ void animationTransform();
};

struct J2DAnmLoaderDataBase {
    /* 80308A6C */ void load(void const*);
};

struct CPaneMgrAlpha {
    /* 802557D0 */ void setAlphaRate(f32);
};

struct CPaneMgr {
    /* 80253984 */ CPaneMgr(J2DScreen*, u64, u8, JKRExpHeap*);
    /* 802542E8 */ void getGlobalPosX();
    /* 80254364 */ void getGlobalPosY();
};

//
// Forward References:
//

extern "C" void __ct__14dMsgScrnTree_cFP7JUTFontP10JKRExpHeap();
extern "C" void __dt__14dMsgScrnTree_cFv();
extern "C" void exec__14dMsgScrnTree_cFv();
extern "C" void draw__14dMsgScrnTree_cFv();
extern "C" void fukiAlpha__14dMsgScrnTree_cFf();
extern "C" void fukiScale__14dMsgScrnTree_cFf();
extern "C" void fukiTrans__14dMsgScrnTree_cFff();
extern "C" extern char const* const msg_scrn_d_msg_scrn_tree__stringBase0;
extern "C" extern void* __vt__14dMsgScrnTree_c[22];

//
// External References:
//

void mDoExt_getMesgFont();
void dComIfGp_getSubHeap2D(int);
void dPaneClass_showNullPane(J2DScreen*);
void* operator new(u32);
void operator delete(void*);

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
extern "C" void drawSelf__14dMsgScrnBase_cFv();
extern "C" void fontAlpha__14dMsgScrnBase_cFf();
extern "C" void isTalkNow__14dMsgScrnBase_cFv();
extern "C" void __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap();
extern "C" void getGlobalPosX__8CPaneMgrFv();
extern "C" void getGlobalPosY__8CPaneMgrFv();
extern "C" void dPaneClass_showNullPane__FP9J2DScreen();
extern "C" void setAlphaRate__13CPaneMgrAlphaFf();
extern "C" void getTotalFreeSize__7JKRHeapFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader();
extern "C" void animationTransform__7J2DPaneFv();
extern "C" void __ct__9J2DScreenFv();
extern "C" void setPriority__9J2DScreenFPCcUlP10JKRArchive();
extern "C" void draw__9J2DScreenFffPC14J2DGrafContext();
extern "C" void animation__9J2DScreenFv();
extern "C" void setString__10J2DTextBoxFsPCce();
extern "C" void load__20J2DAnmLoaderDataBaseFPCv();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_MsgObject_HIO_c[1040];

//
// Declarations:
//

/* ############################################################################################## */
/* 80399C18-80399C30 0018+00 s=1 e=0 z=0  None .rodata    t_tag$3763 */
SECTION_RODATA static u8 const t_tag[24] = {
    0x6D, 0x67, 0x5F, 0x65, 0x34, 0x6C, 0x69, 0x6E, 0x00, 0x00, 0x00, 0x00,
    0x66, 0x34, 0x5F, 0x77, 0x00, 0x00, 0x00, 0x00, 0x74, 0x34, 0x5F, 0x73,
};

/* 80399C30-80399C98 0064+04 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80399C30 = "zelda_kanban_wood_a.blo";
SECTION_DEAD char const* const stringBase_80399C48 = "zelda_kanban_wood_a.bck";
SECTION_DEAD char const* const stringBase_80399C60 = "zelda_kanban_wood_a.btk";
SECTION_DEAD char const* const stringBase_80399C78 = "zelda_kanban_wood_a_02.btk";
SECTION_DEAD char const* const stringBase_80399C93 = "";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_80399C94 = "\0\0\0";
#pragma pop

/* 803C1420-803C1478 0058+00 s=2 e=0 z=0  None .data      __vt__14dMsgScrnTree_c */
SECTION_DATA void* __vt__14dMsgScrnTree_c[22] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__14dMsgScrnTree_cFv,
    (void*)__dt__14dMsgScrnTree_cFv,
    (void*)exec__14dMsgScrnTree_cFv,
    (void*)multiDraw__14dMsgScrnBase_cFv,
    (void*)drawSelf__14dMsgScrnBase_cFv,
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
    (void*)fukiScale__14dMsgScrnTree_cFf,
    (void*)fukiTrans__14dMsgScrnTree_cFff,
    (void*)fukiAlpha__14dMsgScrnTree_cFf,
    (void*)fontAlpha__14dMsgScrnBase_cFf,
    (void*)fukiPosCalc__14dMsgScrnBase_cFUc,
};

/* 80454D58-80454D5C 0004+00 s=2 e=0 z=0  None .sdata2    @3949 */
SECTION_SDATA2 static u8 lit_3949[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80454D5C-80454D60 0004+00 s=3 e=0 z=0  None .sdata2    @3950 */
SECTION_SDATA2 static f32 lit_3950 = 1.0f;

/* 80454D60-80454D68 0004+04 s=1 e=0 z=0  None .sdata2    @3951 */
SECTION_SDATA2 static f32 lit_3951[1 + 1 /* padding */] = {
    6.0f / 5.0f,
    /* padding */
    0.0f,
};

/* 80248954-80248F14 05C0+00 s=0 e=1 z=0  None .text __ct__14dMsgScrnTree_cFP7JUTFontP10JKRExpHeap
 */
//	8024896C: 803621D4 (_savegpr_27)
//	8024897C: 8023C0DC (__ct__14dMsgScrnBase_cFv)
//	80248980: 803C1420 (__vt__14dMsgScrnTree_c)
//	80248984: 803C1420 (__vt__14dMsgScrnTree_c)
//	802489A0: 8002E3D0 (dComIfGp_getSubHeap2D__Fi)
//	802489AC: 802CE784 (getTotalFreeSize__7JKRHeapFv)
//	802489B4: 8023C16C (init__14dMsgScrnBase_cFv)
//	802489C0: 800149F0 (mDoExt_getMesgFont__Fv)
//	802489D4: 802CEC4C (__nw__FUl)
//	802489E0: 802F8498 (__ct__9J2DScreenFv)
//	802489F0: 80399C30 (msg_scrn_d_msg_scrn_tree__stringBase0)
//	802489F4: 80399C30 (msg_scrn_d_msg_scrn_tree__stringBase0)
//	802489FC: 804061C0 (g_dComIfG_gameInfo)
//	80248A00: 804061C0 (g_dComIfG_gameInfo)
//	80248A08: 802F8648 (setPriority__9J2DScreenFPCcUlP10JKRArchive)
//	80248A10: 802550E8 (dPaneClass_showNullPane__FP9J2DScreen)
//	80248A44: 80399C30 (msg_scrn_d_msg_scrn_tree__stringBase0)
//	80248A48: 80399C30 (msg_scrn_d_msg_scrn_tree__stringBase0)
//	80248A54: 802D4270 (getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader)
//	80248A58: 80308A6C (load__20J2DAnmLoaderDataBaseFPCv)
//	80248A60: 80399C30 (msg_scrn_d_msg_scrn_tree__stringBase0)
//	80248A64: 80399C30 (msg_scrn_d_msg_scrn_tree__stringBase0)
//	80248A70: 802D4270 (getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader)
//	80248A74: 80308A6C (load__20J2DAnmLoaderDataBaseFPCv)
//	80248A94: 80454D58 (lit_3949)
//	80248A9C: 80399C30 (msg_scrn_d_msg_scrn_tree__stringBase0)
//	80248AA0: 80399C30 (msg_scrn_d_msg_scrn_tree__stringBase0)
//	80248AAC: 802D4270 (getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader)
//	80248AB0: 80308A6C (load__20J2DAnmLoaderDataBaseFPCv)
//	80248AD0: 80454D58 (lit_3949)
//	80248ADC: 802CEC4C (__nw__FUl)
//	80248B00: 80253984 (__ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap)
//	80248B28: 80454D5C (lit_3950)
//	80248B3C: 802F7FCC (animationTransform__7J2DPaneFv)
//	80248B5C: 8043028C (g_MsgObject_HIO_c)
//	80248B60: 8043028C (g_MsgObject_HIO_c)
//	80248B90: 802CEC4C (__nw__FUl)
//	80248BB4: 80253984 (__ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap)
//	80248BC4: 802CEC4C (__nw__FUl)
//	80248BE8: 80253984 (__ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap)
//	80248C54: 80399C30 (msg_scrn_d_msg_scrn_tree__stringBase0)
//	80248C58: 80399C30 (msg_scrn_d_msg_scrn_tree__stringBase0)
//	80248C60: 802CEC4C (__nw__FUl)
//	80248C70: 80399C18 (t_tag)
//	80248C74: 80399C18 (t_tag)
//	80248C8C: 80253984 (__ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap)
//	80248CD0: 8030074C (setString__10J2DTextBoxFsPCce)
//	80248DDC: 80454D60 (lit_3951)
//	80248E3C: 802542E8 (getGlobalPosX__8CPaneMgrFv)
//	80248E48: 80254364 (getGlobalPosY__8CPaneMgrFv)
//	80248E50: 80454D58 (lit_3949)
//	80248EC8: 80454D60 (lit_3951)
//	80248F00: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMsgScrnTree_c::dMsgScrnTree_c(JUTFont* param_0, JKRExpHeap* param_1) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_tree/__ct__14dMsgScrnTree_cFP7JUTFontP10JKRExpHeap.s"
}
#pragma pop

/* 80248F14-80249118 0204+00 s=1 e=0 z=0  None .text      __dt__14dMsgScrnTree_cFv */
//	80248F24: 803621D4 (_savegpr_27)
//	80248F34: 803C1420 (__vt__14dMsgScrnTree_c)
//	80248F38: 803C1420 (__vt__14dMsgScrnTree_c)
//	802490C4: 804061C0 (g_dComIfG_gameInfo)
//	802490C8: 804061C0 (g_dComIfG_gameInfo)
//	802490E8: 8023C124 (__dt__14dMsgScrnBase_cFv)
//	802490F8: 802CED3C (__dl__FPv)
//	80249104: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMsgScrnTree_c::~dMsgScrnTree_c() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_tree/__dt__14dMsgScrnTree_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454D68-80454D70 0008+00 s=1 e=0 z=0  None .sdata2    @4053 */
SECTION_SDATA2 static f64 lit_4053 = 4503601774854144.0 /* cast s32 to float */;

/* 80249118-80249270 0158+00 s=1 e=0 z=0  None .text      exec__14dMsgScrnTree_cFv */
//	80249130: 80454D5C (lit_3950)
//	80249148: 80454D68 (lit_4053)
//	80249198: 80454D5C (lit_3950)
//	802491B0: 80454D68 (lit_4053)
//	80249200: 802F9690 (animation__9J2DScreenFv)
//	80249208: 8023C574 (isTalkNow__14dMsgScrnBase_cFv)
//	80249218: 80454D5C (lit_3950)
//	8024922C: 8043028C (g_MsgObject_HIO_c)
//	80249230: 8043028C (g_MsgObject_HIO_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnTree_c::exec() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_tree/exec__14dMsgScrnTree_cFv.s"
}
#pragma pop

/* 80249270-802492F8 0088+00 s=1 e=0 z=0  None .text      draw__14dMsgScrnTree_cFv */
//	80249288: 804061C0 (g_dComIfG_gameInfo)
//	8024928C: 804061C0 (g_dComIfG_gameInfo)
//	802492AC: 80454D58 (lit_3949)
//	802492B8: 802F8ED4 (draw__9J2DScreenFffPC14J2DGrafContext)
//	802492C4: 80454D58 (lit_3949)
//	802492CC: 80454D5C (lit_3950)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnTree_c::draw() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_tree/draw__14dMsgScrnTree_cFv.s"
}
#pragma pop

/* 802492F8-802493AC 00B4+00 s=1 e=0 z=0  None .text      fukiAlpha__14dMsgScrnTree_cFf */
//	80249310: 803621D8 (_savegpr_28)
//	80249320: 802557D0 (setAlphaRate__13CPaneMgrAlphaFf)
//	80249328: 8043028C (g_MsgObject_HIO_c)
//	8024932C: 8043028C (g_MsgObject_HIO_c)
//	80249338: 802557D0 (setAlphaRate__13CPaneMgrAlphaFf)
//	80249344: 802557D0 (setAlphaRate__13CPaneMgrAlphaFf)
//	80249360: 802557D0 (setAlphaRate__13CPaneMgrAlphaFf)
//	80249378: 802557D0 (setAlphaRate__13CPaneMgrAlphaFf)
//	80249398: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnTree_c::fukiAlpha(f32 param_0) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_tree/fukiAlpha__14dMsgScrnTree_cFf.s"
}
#pragma pop

/* 802493AC-802493B0 0004+00 s=1 e=0 z=0  None .text      fukiScale__14dMsgScrnTree_cFf */
void dMsgScrnTree_c::fukiScale(f32 param_0) {
    /* empty function */
}

/* 802493B0-802493B4 0004+00 s=1 e=0 z=0  None .text      fukiTrans__14dMsgScrnTree_cFff */
void dMsgScrnTree_c::fukiTrans(f32 param_0, f32 param_1) {
    /* empty function */
}
