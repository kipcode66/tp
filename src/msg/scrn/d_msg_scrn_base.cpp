//
// Generated By: dol2asm
// Translation Unit: msg/scrn/d_msg_scrn_base
//

#include "msg/scrn/d_msg_scrn_base.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct dMsgScrnBase_c {
    /* 80238C3C */ void exec();
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
    /* 8023C300 */ void drawSelf();
    /* 8023C32C */ void drawOutFont(f32, f32, f32);
    /* 8023C360 */ void setString(char*, char*);
    /* 8023C3EC */ void setRubyString(char*);
    /* 8023C458 */ void fukiScale(f32);
    /* 8023C480 */ void fukiTrans(f32, f32);
    /* 8023C4A4 */ void fukiAlpha(f32);
    /* 8023C4F4 */ void fontAlpha(f32);
    /* 8023C574 */ void isTalkNow();
};

struct dMsgObject_c {
    /* 8023822C */ void getStatus();
};

struct dDlst_base_c {};

struct dDlst_list_c {
    /* 80056794 */ void set(dDlst_base_c**&, dDlst_base_c**&, dDlst_base_c*);
};

struct J2DTextBox {
    /* 80300658 */ void getStringPtr() const;
};

struct J2DGrafContext {};

struct J2DScreen {
    /* 802F8ED4 */ void draw(f32, f32, J2DGrafContext const*);
};

struct CPaneMgrAlpha {
    /* 802557D0 */ void setAlphaRate(f32);
};

struct CPaneMgr {
    /* 802545B0 */ void paneTrans(f32, f32);
    /* 80254638 */ void paneScale(f32, f32);
};

//
// Forward References:
//

extern "C" void __ct__14dMsgScrnBase_cFv();
extern "C" void __dt__14dMsgScrnBase_cFv();
extern "C" void init__14dMsgScrnBase_cFv();
extern "C" void multiDraw__14dMsgScrnBase_cFv();
extern "C" void draw__14dMsgScrnBase_cFv();
extern "C" void drawSelf__14dMsgScrnBase_cFv();
extern "C" void drawOutFont__14dMsgScrnBase_cFfff();
extern "C" void setString__14dMsgScrnBase_cFPcPc();
extern "C" void setRubyString__14dMsgScrnBase_cFPc();
extern "C" void fukiScale__14dMsgScrnBase_cFf();
extern "C" void fukiTrans__14dMsgScrnBase_cFff();
extern "C" void fukiAlpha__14dMsgScrnBase_cFf();
extern "C" void fontAlpha__14dMsgScrnBase_cFf();
extern "C" void isTalkNow__14dMsgScrnBase_cFv();
extern "C" extern void* __vt__14dMsgScrnBase_c[22];

//
// External References:
//

void operator delete(void*);

extern "C" void set__12dDlst_list_cFRPP12dDlst_base_cRPP12dDlst_base_cP12dDlst_base_c();
extern "C" void getStatus__12dMsgObject_cFv();
extern "C" void exec__14dMsgScrnBase_cFv();
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
extern "C" void paneTrans__8CPaneMgrFff();
extern "C" void paneScale__8CPaneMgrFff();
extern "C" void setAlphaRate__13CPaneMgrAlphaFf();
extern "C" void __dl__FPv();
extern "C" void draw__9J2DScreenFffPC14J2DGrafContext();
extern "C" void getStringPtr__10J2DTextBoxCFv();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void strcpy();
extern "C" extern void* __vt__12dDlst_base_c[3];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* ############################################################################################## */
/* 803C0D08-803C0D58 0050+00 s=1 e=0 z=0  None .data      @3949 */
SECTION_DATA static void* lit_3949[20] = {
    (void*)(((char*)isTalkNow__14dMsgScrnBase_cFv) + 0x38),
    (void*)(((char*)isTalkNow__14dMsgScrnBase_cFv) + 0x38),
    (void*)(((char*)isTalkNow__14dMsgScrnBase_cFv) + 0x38),
    (void*)(((char*)isTalkNow__14dMsgScrnBase_cFv) + 0x38),
    (void*)(((char*)isTalkNow__14dMsgScrnBase_cFv) + 0x38),
    (void*)(((char*)isTalkNow__14dMsgScrnBase_cFv) + 0x40),
    (void*)(((char*)isTalkNow__14dMsgScrnBase_cFv) + 0x40),
    (void*)(((char*)isTalkNow__14dMsgScrnBase_cFv) + 0x40),
    (void*)(((char*)isTalkNow__14dMsgScrnBase_cFv) + 0x40),
    (void*)(((char*)isTalkNow__14dMsgScrnBase_cFv) + 0x40),
    (void*)(((char*)isTalkNow__14dMsgScrnBase_cFv) + 0x38),
    (void*)(((char*)isTalkNow__14dMsgScrnBase_cFv) + 0x38),
    (void*)(((char*)isTalkNow__14dMsgScrnBase_cFv) + 0x40),
    (void*)(((char*)isTalkNow__14dMsgScrnBase_cFv) + 0x40),
    (void*)(((char*)isTalkNow__14dMsgScrnBase_cFv) + 0x40),
    (void*)(((char*)isTalkNow__14dMsgScrnBase_cFv) + 0x38),
    (void*)(((char*)isTalkNow__14dMsgScrnBase_cFv) + 0x40),
    (void*)(((char*)isTalkNow__14dMsgScrnBase_cFv) + 0x40),
    (void*)(((char*)isTalkNow__14dMsgScrnBase_cFv) + 0x40),
    (void*)(((char*)isTalkNow__14dMsgScrnBase_cFv) + 0x38),
};

/* 803C0D58-803C0DB0 0058+00 s=2 e=0 z=0  None .data      __vt__14dMsgScrnBase_c */
SECTION_DATA void* __vt__14dMsgScrnBase_c[22] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__14dMsgScrnBase_cFv,
    (void*)__dt__14dMsgScrnBase_cFv,
    (void*)exec__14dMsgScrnBase_cFv,
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
    (void*)fukiScale__14dMsgScrnBase_cFf,
    (void*)fukiTrans__14dMsgScrnBase_cFff,
    (void*)fukiAlpha__14dMsgScrnBase_cFf,
    (void*)fontAlpha__14dMsgScrnBase_cFf,
    (void*)fukiPosCalc__14dMsgScrnBase_cFUc,
};

/* 8023C0DC-8023C124 0048+00 s=0 e=9 z=0  None .text      __ct__14dMsgScrnBase_cFv */
//	8023C0F0: 803A6F88 (__vt__12dDlst_base_c)
//	8023C0F4: 803A6F88 (__vt__12dDlst_base_c)
//	8023C0FC: 803C0D58 (__vt__14dMsgScrnBase_c)
//	8023C100: 803C0D58 (__vt__14dMsgScrnBase_c)
//	8023C108: 8023C16C (init__14dMsgScrnBase_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMsgScrnBase_c::dMsgScrnBase_c() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_base/__ct__14dMsgScrnBase_cFv.s"
}
#pragma pop

/* 8023C124-8023C16C 0048+00 s=1 e=9 z=0  None .text      __dt__14dMsgScrnBase_cFv */
//	8023C13C: 803C0D58 (__vt__14dMsgScrnBase_c)
//	8023C140: 803C0D58 (__vt__14dMsgScrnBase_c)
//	8023C150: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMsgScrnBase_c::~dMsgScrnBase_c() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_base/__dt__14dMsgScrnBase_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454BA8-80454BAC 0004+00 s=3 e=0 z=0  None .sdata2    @3820 */
SECTION_SDATA2 static u8 lit_3820[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80454BAC-80454BB0 0004+00 s=2 e=0 z=0  None .sdata2    @3821 */
SECTION_SDATA2 static f32 lit_3821 = 1.0f;

/* 8023C16C-8023C234 00C8+00 s=1 e=9 z=0  None .text      init__14dMsgScrnBase_cFv */
//	8023C1B0: 80454BA8 (lit_3820)
//	8023C1C8: 80454BAC (lit_3821)
//	8023C210: 80454BA8 (lit_3820)
//	8023C228: 80454BAC (lit_3821)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnBase_c::init() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_base/init__14dMsgScrnBase_cFv.s"
}
#pragma pop

/* 8023C234-8023C274 0040+00 s=1 e=9 z=0  None .text      multiDraw__14dMsgScrnBase_cFv */
//	8023C24C: 804061C0 (g_dComIfG_gameInfo)
//	8023C250: 804061C0 (g_dComIfG_gameInfo)
//	8023C260: 80056794 (set__12dDlst_list_cFRPP12dDlst_base_cRPP12dDlst_base_cP12dDlst_base_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnBase_c::multiDraw() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_base/multiDraw__14dMsgScrnBase_cFv.s"
}
#pragma pop

/* 8023C274-8023C300 008C+00 s=1 e=7 z=0  None .text      draw__14dMsgScrnBase_cFv */
//	8023C28C: 804061C0 (g_dComIfG_gameInfo)
//	8023C290: 804061C0 (g_dComIfG_gameInfo)
//	8023C2B0: 80454BA8 (lit_3820)
//	8023C2BC: 802F8ED4 (draw__9J2DScreenFffPC14J2DGrafContext)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnBase_c::draw() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_base/draw__14dMsgScrnBase_cFv.s"
}
#pragma pop

/* 8023C300-8023C32C 002C+00 s=1 e=2 z=0  None .text      drawSelf__14dMsgScrnBase_cFv */
//	8023C30C: 80454BA8 (lit_3820)
//	8023C314: 80454BAC (lit_3821)
//	8023C318: 8023C32C (drawOutFont__14dMsgScrnBase_cFfff)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnBase_c::drawSelf() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_base/drawSelf__14dMsgScrnBase_cFv.s"
}
#pragma pop

/* 8023C32C-8023C360 0034+00 s=1 e=6 z=0  None .text      drawOutFont__14dMsgScrnBase_cFfff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnBase_c::drawOutFont(f32 param_0, f32 param_1, f32 param_2) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_base/drawOutFont__14dMsgScrnBase_cFfff.s"
}
#pragma pop

/* 8023C360-8023C3EC 008C+00 s=0 e=2 z=0  None .text      setString__14dMsgScrnBase_cFPcPc */
//	8023C370: 803621D4 (_savegpr_27)
//	8023C3A4: 80300658 (getStringPtr__10J2DTextBoxCFv)
//	8023C3AC: 80368B2C (strcpy)
//	8023C3B8: 80300658 (getStringPtr__10J2DTextBoxCFv)
//	8023C3C0: 80368B2C (strcpy)
//	8023C3D8: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnBase_c::setString(char* param_0, char* param_1) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_base/setString__14dMsgScrnBase_cFPcPc.s"
}
#pragma pop

/* 8023C3EC-8023C458 006C+00 s=0 e=2 z=0  None .text      setRubyString__14dMsgScrnBase_cFPc */
//	8023C3FC: 803621D8 (_savegpr_28)
//	8023C424: 80300658 (getStringPtr__10J2DTextBoxCFv)
//	8023C42C: 80368B2C (strcpy)
//	8023C444: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnBase_c::setRubyString(char* param_0) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_base/setRubyString__14dMsgScrnBase_cFPc.s"
}
#pragma pop

/* 8023C458-8023C480 0028+00 s=1 e=0 z=0  None .text      fukiScale__14dMsgScrnBase_cFf */
//	8023C46C: 80254638 (paneScale__8CPaneMgrFff)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnBase_c::fukiScale(f32 param_0) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_base/fukiScale__14dMsgScrnBase_cFf.s"
}
#pragma pop

/* 8023C480-8023C4A4 0024+00 s=1 e=0 z=0  None .text      fukiTrans__14dMsgScrnBase_cFff */
//	8023C490: 802545B0 (paneTrans__8CPaneMgrFff)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnBase_c::fukiTrans(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_base/fukiTrans__14dMsgScrnBase_cFff.s"
}
#pragma pop

/* 8023C4A4-8023C4F4 0050+00 s=1 e=0 z=0  None .text      fukiAlpha__14dMsgScrnBase_cFf */
//	8023C4D8: 802557D0 (setAlphaRate__13CPaneMgrAlphaFf)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnBase_c::fukiAlpha(f32 param_0) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_base/fukiAlpha__14dMsgScrnBase_cFf.s"
}
#pragma pop

/* 8023C4F4-8023C574 0080+00 s=1 e=5 z=0  None .text      fontAlpha__14dMsgScrnBase_cFf */
//	8023C508: 803621D8 (_savegpr_28)
//	8023C530: 802557D0 (setAlphaRate__13CPaneMgrAlphaFf)
//	8023C544: 802557D0 (setAlphaRate__13CPaneMgrAlphaFf)
//	8023C560: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnBase_c::fontAlpha(f32 param_0) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_base/fontAlpha__14dMsgScrnBase_cFf.s"
}
#pragma pop

/* 8023C574-8023C5C8 0054+00 s=1 e=8 z=0  None .text      isTalkNow__14dMsgScrnBase_cFv */
//	8023C580: 8023822C (getStatus__12dMsgObject_cFv)
//	8023C594: 803C0D08 (lit_3949)
//	8023C598: 803C0D08 (lit_3949)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrnBase_c::isTalkNow() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_base/isTalkNow__14dMsgScrnBase_cFv.s"
}
#pragma pop
