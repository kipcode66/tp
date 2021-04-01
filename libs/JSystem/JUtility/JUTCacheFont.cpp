//
// Generated By: dol2asm
// Translation Unit: JUTCacheFont
//

#include "JSystem/JUtility/JUTCacheFont.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct _GXTexMapID {};

struct ResFONT {};

struct JUtility {
    struct TColor {};
};

struct JUTFont {
    struct TWidth {};

    /* 802DED24 */ void initialize_state();
};

struct JUTResFont {
    /* 802DDFD8 */ void getResFont() const;
    /* 802DDFE0 */ void getFontType() const;
    /* 802DDFEC */ void getLeading() const;
    /* 802DDFF8 */ void getWidth() const;
    /* 802DE004 */ void getAscent() const;
    /* 802DE010 */ void getDescent() const;
    /* 802DE01C */ void getHeight() const;
    /* 802DEF48 */ JUTResFont();
    /* 802DF000 */ ~JUTResFont();
    /* 802DF08C */ void deleteMemBlocks_ResFont();
    /* 802DF0B0 */ void initialize_state();
    /* 802DF584 */ void setGX(JUtility::TColor, JUtility::TColor);
    /* 802DF48C */ void setGX();
    /* 802DF7C4 */ void drawChar_scale(f32, f32, f32, f32, int, bool);
    /* 802DFC64 */ void getWidthEntry(int, JUTFont::TWidth*) const;
    /* 802DFD0C */ void getCellWidth() const;
    /* 802DFD58 */ void getCellHeight() const;
    /* 802DFDA4 */ void isLeadByte(int) const;
};

struct JUTException {
    /* 802E21FC */ void panic_f(char const*, int, char const*, ...);
};

struct JKRHeap {};

struct JUTCacheFont {
    struct TGlyphCacheInfo {};

    struct TCachePage {};

    /* 802DD188 */ JUTCacheFont(ResFONT const*, u32, JKRHeap*);
    /* 802DD208 */ ~JUTCacheFont();
    /* 802DD29C */ void deleteMemBlocks_CacheFont();
    /* 802DD320 */ void initialize_state();
    /* 802DD35C */ void getMemorySize(ResFONT const*, u16*, u32*, u16*, u32*, u16*, u32*, u32*);
    /* 802DD4EC */ void initiate(ResFONT const*, void*, u32, JKRHeap*);
    /* 802DD54C */ void internal_initiate(ResFONT const*, void*, u32, JKRHeap*);
    /* 802DD650 */ void allocArea(void*, u32, JKRHeap*);
    /* 802DD804 */ void allocArray(JKRHeap*);
    /* 802DD8EC */ void setBlock();
    /* 802DDB0C */ void determineBlankPage();
    /* 802DDBBC */ void getGlyphFromAram(JUTCacheFont::TGlyphCacheInfo*, JUTCacheFont::TCachePage*,
                                         int*, int*);
    /* 802DDCE4 */ void loadImage(int, _GXTexMapID);
    /* 802DDD98 */ void loadCache_char_subroutine(int*, bool);
    /* 802DDEE0 */ void invalidiateAllCache();
    /* 802DDF68 */ void unlink(JUTCacheFont::TGlyphCacheInfo*);
    /* 802DDFAC */ void prepend(JUTCacheFont::TGlyphCacheInfo*);
};

struct JKRExpandSwitch {};

struct JKRAramHeap {
    struct EAllocMode {};

    /* 802D2FBC */ void alloc(u32, JKRAramHeap::EAllocMode);
};

struct JKRAram {
    /* 802D233C */ void mainRamToAram(u8*, u32, u32, JKRExpandSwitch, u32, JKRHeap*, int, u32*);
    /* 802D25B4 */ void aramToMainRam(u32, u8*, u32, JKRExpandSwitch, u32, JKRHeap*, int, u32*);
};

//
// Forward References:
//

extern "C" void __ct__12JUTCacheFontFPC7ResFONTUlP7JKRHeap();
extern "C" void __dt__12JUTCacheFontFv();
extern "C" void deleteMemBlocks_CacheFont__12JUTCacheFontFv();
extern "C" void initialize_state__12JUTCacheFontFv();
extern "C" void getMemorySize__12JUTCacheFontFPC7ResFONTPUsPUlPUsPUlPUsPUlPUl();
extern "C" void initiate__12JUTCacheFontFPC7ResFONTPvUlP7JKRHeap();
extern "C" void internal_initiate__12JUTCacheFontFPC7ResFONTPvUlP7JKRHeap();
extern "C" void allocArea__12JUTCacheFontFPvUlP7JKRHeap();
extern "C" void allocArray__12JUTCacheFontFP7JKRHeap();
extern "C" void setBlock__12JUTCacheFontFv();
extern "C" void determineBlankPage__12JUTCacheFontFv();
extern "C" void
getGlyphFromAram__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfoPQ212JUTCacheFont10TCachePagePiPi();
extern "C" void loadImage__12JUTCacheFontFi11_GXTexMapID();
extern "C" void loadCache_char_subroutine__12JUTCacheFontFPib();
extern "C" void invalidiateAllCache__12JUTCacheFontFv();
extern "C" void unlink__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfo();
extern "C" void prepend__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfo();
extern "C" void getResFont__10JUTResFontCFv();
extern "C" void getFontType__10JUTResFontCFv();
extern "C" void getLeading__10JUTResFontCFv();
extern "C" void getWidth__10JUTResFontCFv();
extern "C" void getAscent__10JUTResFontCFv();
extern "C" void getDescent__10JUTResFontCFv();
extern "C" void getHeight__10JUTResFontCFv();
extern "C" extern char const* const JUTCacheFont__stringBase0;
extern "C" extern void* __vt__12JUTCacheFont[19 + 1 /* padding */];

//
// External References:
//

void* operator new(u32, JKRHeap*, int);
void* operator new[](u32, JKRHeap*, int);
void operator delete(void*);
void operator delete[](void*);

SECTION_INIT void memcpy();
extern "C" void* __nw__FUlP7JKRHeapi();
extern "C" void* __nwa__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void __dla__FPv();
extern "C" void mainRamToAram__7JKRAramFPUcUlUl15JKRExpandSwitchUlP7JKRHeapiPUl();
extern "C" void aramToMainRam__7JKRAramFUlPUcUl15JKRExpandSwitchUlP7JKRHeapiPUl();
extern "C" void alloc__11JKRAramHeapFUlQ211JKRAramHeap10EAllocMode();
extern "C" void initialize_state__7JUTFontFv();
extern "C" void __ct__10JUTResFontFv();
extern "C" void __dt__10JUTResFontFv();
extern "C" void deleteMemBlocks_ResFont__10JUTResFontFv();
extern "C" void initialize_state__10JUTResFontFv();
extern "C" void setGX__10JUTResFontFv();
extern "C" void setGX__10JUTResFontFQ28JUtility6TColorQ28JUtility6TColor();
extern "C" void drawChar_scale__10JUTResFontFffffib();
extern "C" void getWidthEntry__10JUTResFontCFiPQ27JUTFont6TWidth();
extern "C" void getCellWidth__10JUTResFontCFv();
extern "C" void getCellHeight__10JUTResFontCFv();
extern "C" void isLeadByte__10JUTResFontCFi();
extern "C" void panic_f__12JUTExceptionFPCciPCce();
extern "C" void JUTReportConsole();
extern "C" void GXInitTexObj();
extern "C" void GXInitTexObjLOD();
extern "C" void GXLoadTexObj();
extern "C" void __save_gpr();
extern "C" void _savegpr_21();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void __restore_gpr();
extern "C" void _restgpr_21();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* const saoAboutEncoding___10JUTResFont[3];
extern "C" extern u8 sAramObject__7JKRAram[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 803CC540-803CC590 004C+04 s=2 e=0 z=0  None .data      __vt__12JUTCacheFont */
SECTION_DATA void* __vt__12JUTCacheFont[19 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12JUTCacheFontFv,
    (void*)setGX__10JUTResFontFv,
    (void*)setGX__10JUTResFontFQ28JUtility6TColorQ28JUtility6TColor,
    (void*)drawChar_scale__10JUTResFontFffffib,
    (void*)getLeading__10JUTResFontCFv,
    (void*)getAscent__10JUTResFontCFv,
    (void*)getDescent__10JUTResFontCFv,
    (void*)getHeight__10JUTResFontCFv,
    (void*)getWidth__10JUTResFontCFv,
    (void*)getWidthEntry__10JUTResFontCFiPQ27JUTFont6TWidth,
    (void*)getCellWidth__10JUTResFontCFv,
    (void*)getCellHeight__10JUTResFontCFv,
    (void*)getFontType__10JUTResFontCFv,
    (void*)getResFont__10JUTResFontCFv,
    (void*)isLeadByte__10JUTResFontCFi,
    (void*)loadImage__12JUTCacheFontFi11_GXTexMapID,
    (void*)setBlock__12JUTCacheFontFv,
    /* padding */
    NULL,
};

/* 802DD188-802DD208 0080+00 s=0 e=1 z=0  None .text      __ct__12JUTCacheFontFPC7ResFONTUlP7JKRHeap
 */
//	802DD198: 803621D8 (_savegpr_28)
//	802DD1AC: 802DEF48 (__ct__10JUTResFontFv)
//	802DD1B0: 803CC540 (__vt__12JUTCacheFont)
//	802DD1B4: 803CC540 (__vt__12JUTCacheFont)
//	802DD1C0: 802DD320 (initialize_state__12JUTCacheFontFv)
//	802DD1C8: 802DF0B0 (initialize_state__10JUTResFontFv)
//	802DD1D0: 802DED24 (initialize_state__7JUTFontFv)
//	802DD1E8: 802DD4EC (initiate__12JUTCacheFontFPC7ResFONTPvUlP7JKRHeap)
//	802DD1F4: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JUTCacheFont::JUTCacheFont(ResFONT const* param_0, u32 param_1, JKRHeap* param_2) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/__ct__12JUTCacheFontFPC7ResFONTUlP7JKRHeap.s"
}
#pragma pop

/* 802DD208-802DD29C 0094+00 s=1 e=0 z=0  None .text      __dt__12JUTCacheFontFv */
//	802DD228: 803CC540 (__vt__12JUTCacheFont)
//	802DD22C: 803CC540 (__vt__12JUTCacheFont)
//	802DD240: 802DD29C (deleteMemBlocks_CacheFont__12JUTCacheFontFv)
//	802DD248: 802DD320 (initialize_state__12JUTCacheFontFv)
//	802DD250: 802DF08C (deleteMemBlocks_ResFont__10JUTResFontFv)
//	802DD258: 802DF0B0 (initialize_state__10JUTResFontFv)
//	802DD260: 802DED24 (initialize_state__7JUTFontFv)
//	802DD26C: 802DF000 (__dt__10JUTResFontFv)
//	802DD27C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JUTCacheFont::~JUTCacheFont() {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/__dt__12JUTCacheFontFv.s"
}
#pragma pop

/* 802DD29C-802DD320 0084+00 s=3 e=0 z=0  None .text deleteMemBlocks_CacheFont__12JUTCacheFontFv
 */
//	802DD2C0: 802CED60 (__dla__FPv)
//	802DD2E8: 802CED3C (__dl__FPv)
//	802DD2F0: 802CED3C (__dl__FPv)
//	802DD2F8: 802CED3C (__dl__FPv)
//	802DD300: 802CED3C (__dl__FPv)
//	802DD308: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::deleteMemBlocks_CacheFont() {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/deleteMemBlocks_CacheFont__12JUTCacheFontFv.s"
}
#pragma pop

/* 802DD320-802DD35C 003C+00 s=3 e=0 z=0  None .text      initialize_state__12JUTCacheFontFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::initialize_state() {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/initialize_state__12JUTCacheFontFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039D2F0-8039D360 0070+00 s=2 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_8039D2F0 = "JUTCacheFont: Unknown data block\n";
SECTION_DEAD char const* const stringBase_8039D312 = "JUTCacheFont.cpp";
SECTION_DEAD char const* const stringBase_8039D323 = "%s";
SECTION_DEAD char const* const stringBase_8039D326 = "trouble occurred in JKRMainRamToAram.";
SECTION_DEAD char const* const stringBase_8039D34C = "Unknown data block\n";
#pragma pop

/* 802DD35C-802DD4EC 0190+00 s=1 e=0 z=0  None .text
 * getMemorySize__12JUTCacheFontFPC7ResFONTPUsPUlPUsPUlPUsPUlPUl */
//	802DD36C: 803621A0 (__save_gpr)
//	802DD458: 8039D2F0 (JUTCacheFont__stringBase0)
//	802DD45C: 8039D2F0 (JUTCacheFont__stringBase0)
//	802DD460: 802E8648 (JUTReportConsole)
//	802DD4D8: 803621EC (__restore_gpr)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::getMemorySize(ResFONT const* param_0, u16* param_1, u32* param_2,
                                     u16* param_3, u32* param_4, u16* param_5, u32* param_6,
                                     u32* param_7) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/getMemorySize__12JUTCacheFontFPC7ResFONTPUsPUlPUsPUlPUsPUlPUl.s"
}
#pragma pop

/* 802DD4EC-802DD54C 0060+00 s=1 e=0 z=0  None .text
 * initiate__12JUTCacheFontFPC7ResFONTPvUlP7JKRHeap             */
//	802DD500: 802DD54C (internal_initiate__12JUTCacheFontFPC7ResFONTPvUlP7JKRHeap)
//	802DD510: 802DD29C (deleteMemBlocks_CacheFont__12JUTCacheFontFv)
//	802DD518: 802DF08C (deleteMemBlocks_ResFont__10JUTResFontFv)
//	802DD520: 802DED24 (initialize_state__7JUTFontFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::initiate(ResFONT const* param_0, void* param_1, u32 param_2,
                                JKRHeap* param_3) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/initiate__12JUTCacheFontFPC7ResFONTPvUlP7JKRHeap.s"
}
#pragma pop

/* 802DD54C-802DD650 0104+00 s=1 e=0 z=0  None .text
 * internal_initiate__12JUTCacheFontFPC7ResFONTPvUlP7JKRHeap    */
//	802DD55C: 803621D4 (_savegpr_27)
//	802DD574: 802DD29C (deleteMemBlocks_CacheFont__12JUTCacheFontFv)
//	802DD57C: 802DD320 (initialize_state__12JUTCacheFontFv)
//	802DD584: 802DF08C (deleteMemBlocks_ResFont__10JUTResFontFv)
//	802DD58C: 802DF0B0 (initialize_state__10JUTResFontFv)
//	802DD594: 802DED24 (initialize_state__7JUTFontFv)
//	802DD5DC: 802DD35C (getMemorySize__12JUTCacheFontFPC7ResFONTPUsPUlPUsPUlPUsPUlPUl)
//	802DD5F0: 802DD650 (allocArea__12JUTCacheFontFPvUlP7JKRHeap)
//	802DD60C: 802DD804 (allocArray__12JUTCacheFontFP7JKRHeap)
//	802DD63C: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::internal_initiate(ResFONT const* param_0, void* param_1, u32 param_2,
                                         JKRHeap* param_3) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/internal_initiate__12JUTCacheFontFPC7ResFONTPvUlP7JKRHeap.s"
}
#pragma pop

/* 802DD650-802DD804 01B4+00 s=1 e=0 z=0  None .text      allocArea__12JUTCacheFontFPvUlP7JKRHeap */
//	802DD660: 803621D8 (_savegpr_28)
//	802DD680: 802CEC98 (__nw__FUlP7JKRHeapi)
//	802DD6B0: 802CED10 (__nwa__FUlP7JKRHeapi)
//	802DD6E4: 802CED10 (__nwa__FUlP7JKRHeapi)
//	802DD700: 804513C8 (sAramObject__7JKRAram)
//	802DD71C: 802D2FBC (alloc__11JKRAramHeapFUlQ211JKRAramHeap10EAllocMode)
//	802DD74C: 802CED10 (__nwa__FUlP7JKRHeapi)
//	802DD7BC: 802CED10 (__nwa__FUlP7JKRHeapi)
//	802DD7E4: 802DDEE0 (invalidiateAllCache__12JUTCacheFontFv)
//	802DD7F0: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::allocArea(void* param_0, u32 param_1, JKRHeap* param_2) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/allocArea__12JUTCacheFontFPvUlP7JKRHeap.s"
}
#pragma pop

/* 802DD804-802DD8EC 00E8+00 s=1 e=0 z=0  None .text      allocArray__12JUTCacheFontFP7JKRHeap */
//	802DD834: 802CED10 (__nwa__FUlP7JKRHeapi)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::allocArray(JKRHeap* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/allocArray__12JUTCacheFontFP7JKRHeap.s"
}
#pragma pop

/* 802DD8EC-802DDB0C 0220+00 s=1 e=0 z=0  None .text      setBlock__12JUTCacheFontFv */
//	802DD8FC: 803621BC (_savegpr_21)
//	802DD9A0: 80003540 (memcpy)
//	802DD9B0: 8039D390 (saoAboutEncoding___10JUTResFont)
//	802DD9B4: 8039D390 (saoAboutEncoding___10JUTResFont)
//	802DD9D0: 80003540 (memcpy)
//	802DD9F8: 80003540 (memcpy)
//	802DDA20: 802D233C (mainRamToAram__7JKRAramFPUcUlUl15JKRExpandSwitchUlP7JKRHeapiPUl)
//	802DDA2C: 8039D2F0 (JUTCacheFont__stringBase0)
//	802DDA30: 8039D2F0 (JUTCacheFont__stringBase0)
//	802DDA48: 802E21FC (panic_f__12JUTExceptionFPCciPCce)
//	802DDA90: 80003540 (memcpy)
//	802DDAC8: 8039D2F0 (JUTCacheFont__stringBase0)
//	802DDACC: 8039D2F0 (JUTCacheFont__stringBase0)
//	802DDAD4: 802E8648 (JUTReportConsole)
//	802DDAF8: 80362208 (_restgpr_21)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::setBlock() {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/setBlock__12JUTCacheFontFv.s"
}
#pragma pop

/* 802DDB0C-802DDBBC 00B0+00 s=1 e=0 z=0  None .text      determineBlankPage__12JUTCacheFontFv */
//	802DDB7C: 802DDF68 (unlink__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::determineBlankPage() {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/determineBlankPage__12JUTCacheFontFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455FD0-80455FD8 0004+04 s=1 e=0 z=0  None .sdata2    @721 */
SECTION_SDATA2 static f32 lit_721[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

/* 802DDBBC-802DDCE4 0128+00 s=1 e=0 z=0  None .text
 * getGlyphFromAram__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfoPQ212JUTCacheFont10TCachePagePiPi
 */
//	802DDBCC: 803621D4 (_savegpr_27)
//	802DDBEC: 80003540 (memcpy)
//	802DDBF8: 802DDFAC (prepend__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfo)
//	802DDC7C: 802D25B4 (aramToMainRam__7JKRAramFUlPUcUl15JKRExpandSwitchUlP7JKRHeapiPUl)
//	802DDCA0: 8035DE40 (GXInitTexObj)
//	802DDCB0: 80455FD0 (lit_721)
//	802DDCC8: 8035E0D4 (GXInitTexObjLOD)
//	802DDCD0: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::getGlyphFromAram(JUTCacheFont::TGlyphCacheInfo* param_0,
                                        JUTCacheFont::TCachePage* param_1, int* param_2,
                                        int* param_3) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/func_802DDBBC.s"
}
#pragma pop

/* 802DDCE4-802DDD98 00B4+00 s=1 e=0 z=0  None .text      loadImage__12JUTCacheFontFi11_GXTexMapID
 */
//	802DDCF4: 803621DC (_savegpr_29)
//	802DDD0C: 802DDD98 (loadCache_char_subroutine__12JUTCacheFontFPib)
//	802DDD58: 8035E414 (GXLoadTexObj)
//	802DDD70: 802DDF68 (unlink__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfo)
//	802DDD7C: 802DDFAC (prepend__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfo)
//	802DDD84: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::loadImage(int param_0, _GXTexMapID param_1) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/loadImage__12JUTCacheFontFi11_GXTexMapID.s"
}
#pragma pop

/* 802DDD98-802DDEE0 0148+00 s=1 e=0 z=0  None .text loadCache_char_subroutine__12JUTCacheFontFPib
 */
//	802DDDA8: 803621D4 (_savegpr_27)
//	802DDE68: 802DDB0C (determineBlankPage__12JUTCacheFontFv)
//	802DDE98: 802DDBBC
//(getGlyphFromAram__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfoPQ212JUTCacheFont10TCachePagePiPi)
//	802DDECC: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::loadCache_char_subroutine(int* param_0, bool param_1) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/loadCache_char_subroutine__12JUTCacheFontFPib.s"
}
#pragma pop

/* 802DDEE0-802DDF68 0088+00 s=1 e=0 z=0  None .text      invalidiateAllCache__12JUTCacheFontFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::invalidiateAllCache() {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/invalidiateAllCache__12JUTCacheFontFv.s"
}
#pragma pop

/* 802DDF68-802DDFAC 0044+00 s=2 e=0 z=0  None .text
 * unlink__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfo    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::unlink(JUTCacheFont::TGlyphCacheInfo* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/unlink__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfo.s"
}
#pragma pop

/* 802DDFAC-802DDFD8 002C+00 s=2 e=0 z=0  None .text
 * prepend__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfo   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTCacheFont::prepend(JUTCacheFont::TGlyphCacheInfo* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/prepend__12JUTCacheFontFPQ212JUTCacheFont15TGlyphCacheInfo.s"
}
#pragma pop

/* 802DDFD8-802DDFE0 0008+00 s=1 e=1 z=0  None .text      getResFont__10JUTResFontCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTResFont::getResFont() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/getResFont__10JUTResFontCFv.s"
}
#pragma pop

/* 802DDFE0-802DDFEC 000C+00 s=1 e=1 z=0  None .text      getFontType__10JUTResFontCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTResFont::getFontType() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/getFontType__10JUTResFontCFv.s"
}
#pragma pop

/* 802DDFEC-802DDFF8 000C+00 s=1 e=1 z=0  None .text      getLeading__10JUTResFontCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTResFont::getLeading() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/getLeading__10JUTResFontCFv.s"
}
#pragma pop

/* 802DDFF8-802DE004 000C+00 s=1 e=1 z=0  None .text      getWidth__10JUTResFontCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTResFont::getWidth() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/getWidth__10JUTResFontCFv.s"
}
#pragma pop

/* 802DE004-802DE010 000C+00 s=1 e=1 z=0  None .text      getAscent__10JUTResFontCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTResFont::getAscent() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/getAscent__10JUTResFontCFv.s"
}
#pragma pop

/* 802DE010-802DE01C 000C+00 s=1 e=1 z=0  None .text      getDescent__10JUTResFontCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTResFont::getDescent() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/getDescent__10JUTResFontCFv.s"
}
#pragma pop

/* 802DE01C-802DE078 005C+00 s=1 e=1 z=0  None .text      getHeight__10JUTResFontCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTResFont::getHeight() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTCacheFont/getHeight__10JUTResFontCFv.s"
}
#pragma pop
