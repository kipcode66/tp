//
// Generated By: dol2asm
// Translation Unit: JUTDbPrint
//

#include "JSystem/JUtility/JUTDbPrint.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JUtility {
    struct TColor {};
};

struct JUTFont {
    /* 802DED70 */ void setCharColor(JUtility::TColor);
    /* 802DEE28 */ void drawString_size_scale(f32, f32, f32, f32, char const*, u32, bool);
};

struct JKRHeap {
    /* 802CE474 */ void alloc(u32, int, JKRHeap*);
    /* 802CE500 */ void free(void*, JKRHeap*);
};

struct JUTDbPrint {
    /* 802E0148 */ JUTDbPrint(JUTFont*, JKRHeap*);
    /* 802E0190 */ void start(JUTFont*, JKRHeap*);
    /* 802E0204 */ void changeFont(JUTFont*);
    /* 802E021C */ void enter(int, int, int, char const*, int);
    /* 802E02DC */ void flush(int, int, int, int);
    /* 802E02A4 */ void flush();
    /* 802E0440 */ void drawString(int, int, int, u8 const*);
};

struct J2DOrthoGraph {
    /* 802E96D0 */ J2DOrthoGraph(f32, f32, f32, f32, f32, f32);
    /* 802E97B4 */ void setPort();
};

//
// Forward References:
//

void JUTReport(int, int, char const*, ...);
void JUTReport(int, int, int, char const*, ...);

extern "C" void __ct__10JUTDbPrintFP7JUTFontP7JKRHeap();
extern "C" void start__10JUTDbPrintFP7JUTFontP7JKRHeap();
extern "C" void changeFont__10JUTDbPrintFP7JUTFont();
extern "C" void enter__10JUTDbPrintFiiiPCci();
extern "C" void flush__10JUTDbPrintFv();
extern "C" void flush__10JUTDbPrintFiiii();
extern "C" void drawString__10JUTDbPrintFiiiPCUc();
extern "C" void JUTReport__FiiPCce();
extern "C" void JUTReport__FiiiPCce();
extern "C" extern u8 sDebugPrint__10JUTDbPrint[4 + 4 /* padding */];

//
// External References:
//

void* operator new(u32);

extern "C" void alloc__7JKRHeapFUliP7JKRHeap();
extern "C" void free__7JKRHeapFPvP7JKRHeap();
extern "C" void* __nw__FUl();
extern "C" void setCharColor__7JUTFontFQ28JUtility6TColor();
extern "C" void drawString_size_scale__7JUTFontFffffPCcUlb();
extern "C" void __ct__13J2DOrthoGraphFffffff();
extern "C" void setPort__13J2DOrthoGraphFv();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void vsnprintf();
extern "C" void strcpy();
extern "C" extern void* __vt__14J2DGrafContext[10];
extern "C" extern void* __vt__13J2DOrthoGraph[10];
extern "C" extern u8 sCurrentHeap__7JKRHeap[4];
extern "C" extern u8 sManager__8JUTVideo[4];

//
// Declarations:
//

/* 802E0148-802E0190 0048+00 s=1 e=0 z=0  None .text      __ct__10JUTDbPrintFP7JUTFontP7JKRHeap */
//	802E0168: 80451374 (sCurrentHeap__7JKRHeap)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JUTDbPrint::JUTDbPrint(JUTFont* param_0, JKRHeap* param_1) {
    nofralloc
#include "asm/JSystem/JUtility/JUTDbPrint/__ct__10JUTDbPrintFP7JUTFontP7JKRHeap.s"
}
#pragma pop

/* ############################################################################################## */
/* 804514C8-804514D0 0004+04 s=3 e=6 z=0  None .sbss      sDebugPrint__10JUTDbPrint */
u8 sDebugPrint__10JUTDbPrint[4 + 4 /* padding */];

/* 802E0190-802E0204 0074+00 s=0 e=2 z=0  None .text      start__10JUTDbPrintFP7JUTFontP7JKRHeap */
//	802E01AC: 804514C8 (sDebugPrint__10JUTDbPrint)
//	802E01C0: 80451374 (sCurrentHeap__7JKRHeap)
//	802E01C8: 802CEC4C (__nw__FUl)
//	802E01DC: 802E0148 (__ct__10JUTDbPrintFP7JUTFontP7JKRHeap)
//	802E01E4: 804514C8 (sDebugPrint__10JUTDbPrint)
//	802E01E8: 804514C8 (sDebugPrint__10JUTDbPrint)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTDbPrint::start(JUTFont* param_0, JKRHeap* param_1) {
    nofralloc
#include "asm/JSystem/JUtility/JUTDbPrint/start__10JUTDbPrintFP7JUTFontP7JKRHeap.s"
}
#pragma pop

/* 802E0204-802E021C 0018+00 s=0 e=1 z=0  None .text      changeFont__10JUTDbPrintFP7JUTFont */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTDbPrint::changeFont(JUTFont* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTDbPrint/changeFont__10JUTDbPrintFP7JUTFont.s"
}
#pragma pop

/* 802E021C-802E02A4 0088+00 s=2 e=0 z=0  None .text      enter__10JUTDbPrintFiiiPCci */
//	802E022C: 803621CC (_savegpr_25)
//	802E0258: 802CE474 (alloc__7JKRHeapFUliP7JKRHeap)
//	802E027C: 80368B2C (strcpy)
//	802E0290: 80362218 (_restgpr_25)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTDbPrint::enter(int param_0, int param_1, int param_2, char const* param_3,
                           int param_4) {
    nofralloc
#include "asm/JSystem/JUtility/JUTDbPrint/enter__10JUTDbPrintFiiiPCci.s"
}
#pragma pop

/* 802E02A4-802E02DC 0038+00 s=0 e=1 z=0  None .text      flush__10JUTDbPrintFv */
//	802E02B0: 80451538 (sManager__8JUTVideo)
//	802E02C8: 802E02DC (flush__10JUTDbPrintFiiii)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTDbPrint::flush() {
    nofralloc
#include "asm/JSystem/JUtility/JUTDbPrint/flush__10JUTDbPrintFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456008-8045600C 0004+00 s=1 e=0 z=0  None .sdata2    @835 */
SECTION_SDATA2 static f32 lit_835 = -1.0f;

/* 8045600C-80456010 0004+00 s=1 e=0 z=0  None .sdata2    @836 */
SECTION_SDATA2 static f32 lit_836 = 1.0f;

/* 80456010-80456018 0008+00 s=2 e=0 z=0  None .sdata2    @838 */
SECTION_SDATA2 static f64 lit_838 = 4503601774854144.0 /* cast s32 to float */;

/* 802E02DC-802E0440 0164+00 s=1 e=0 z=0  None .text      flush__10JUTDbPrintFiiii */
//	802E02EC: 803621D8 (_savegpr_28)
//	802E0314: 80456010 (lit_838)
//	802E036C: 80456008 (lit_835)
//	802E0370: 8045600C (lit_836)
//	802E0374: 802E96D0 (__ct__13J2DOrthoGraphFffffff)
//	802E037C: 802E97B4 (setPort__13J2DOrthoGraphFv)
//	802E03A4: 802DED70 (setCharColor__7JUTFontFQ28JUtility6TColor)
//	802E03CC: 802E0440 (drawString__10JUTDbPrintFiiiPCUc)
//	802E03F0: 802CE500 (free__7JKRHeapFPvP7JKRHeap)
//	802E0410: 803CC9E0 (__vt__13J2DOrthoGraph)
//	802E0414: 803CC9E0 (__vt__13J2DOrthoGraph)
//	802E041C: 803CC9B8 (__vt__14J2DGrafContext)
//	802E0420: 803CC9B8 (__vt__14J2DGrafContext)
//	802E042C: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTDbPrint::flush(int param_0, int param_1, int param_2, int param_3) {
    nofralloc
#include "asm/JSystem/JUtility/JUTDbPrint/flush__10JUTDbPrintFiiii.s"
}
#pragma pop

/* 802E0440-802E0530 00F0+00 s=1 e=0 z=0  None .text      drawString__10JUTDbPrintFiiiPCUc */
//	802E0458: 803621D4 (_savegpr_27)
//	802E0484: 80456010 (lit_838)
//	802E04B4: 80456010 (lit_838)
//	802E050C: 802DEE28 (drawString_size_scale__7JUTFontFffffPCcUlb)
//	802E051C: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTDbPrint::drawString(int param_0, int param_1, int param_2, u8 const* param_3) {
    nofralloc
#include "asm/JSystem/JUtility/JUTDbPrint/drawString__10JUTDbPrintFiiiPCUc.s"
}
#pragma pop

/* 802E0530-802E0600 00D0+00 s=0 e=2 z=2  None .text      JUTReport__FiiPCce */
//	802E05B4: 80366690 (vsnprintf)
//	802E05C0: 804514C8 (sDebugPrint__10JUTDbPrint)
//	802E05E4: 802E021C (enter__10JUTDbPrintFiiiPCci)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTReport(int param_0, int param_1, char const* param_2, ...) {
    nofralloc
#include "asm/JSystem/JUtility/JUTDbPrint/JUTReport__FiiPCce.s"
}
#pragma pop

/* 802E0600-802E06DC 00DC+00 s=0 e=1 z=0  None .text      JUTReport__FiiiPCce */
//	802E0610: 803621DC (_savegpr_29)
//	802E0690: 80366690 (vsnprintf)
//	802E069C: 804514C8 (sDebugPrint__10JUTDbPrint)
//	802E06C0: 802E021C (enter__10JUTDbPrintFiiiPCci)
//	802E06C8: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTReport(int param_0, int param_1, int param_2, char const* param_3, ...) {
    nofralloc
#include "asm/JSystem/JUtility/JUTDbPrint/JUTReport__FiiiPCce.s"
}
#pragma pop
