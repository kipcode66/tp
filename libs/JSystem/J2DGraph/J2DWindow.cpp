//
// Generated By: dol2asm
// Translation Unit: J2DWindow
//

#include "JSystem/J2DGraph/J2DWindow.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __ct__9J2DWindowFv();
extern "C" void __ct__9J2DWindowFP7J2DPaneP20JSURandomInputStreamP10JKRArchive();
extern "C" void __ct__9J2DWindowFP7J2DPaneP20JSURandomInputStreamP11J2DMaterial();
extern "C" void private_readStream__9J2DWindowFP7J2DPaneP20JSURandomInputStreamP10JKRArchive();
extern "C" void initinfo2__9J2DWindowFv();
extern "C" void __dt__9J2DWindowFv();
extern "C" void func_802FA928();
extern "C" void func_802FAA5C();
extern "C" void func_802FAED0();
extern "C" void resize__9J2DWindowFff();
extern "C" void
setContentsColor__9J2DWindowFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor();
extern "C" void drawSelf__9J2DWindowFff();
extern "C" void drawSelf__9J2DWindowFffPA3_A4_f();
extern "C" void func_802FB338();
extern "C" void drawFrameTexture__9J2DWindowFP10JUTTextureffffUsUsUsUsb();
extern "C" void drawFrameTexture__9J2DWindowFP10JUTTextureffbbb();
extern "C" void drawContentsTexture__9J2DWindowFffff();
extern "C" void setTevMode__9J2DWindowFP10JUTTextureQ28JUtility6TColorQ28JUtility6TColor();
extern "C" void getFrameTexture__9J2DWindowCFUcUc();
extern "C" void isUsed__9J2DWindowFPC7ResTIMG();
extern "C" s32 getTypeID__9J2DWindowCFv();
extern "C" void draw__9J2DWindowFffff();
extern "C" void getContentsTexture__9J2DWindowCFUc();
extern "C" void getMaterial__9J2DWindowCFRQ29J2DWindow9TMaterial();
extern "C" bool getFrameMaterial__9J2DWindowCFUc();
extern "C" bool getContentsMaterial__9J2DWindowCFv();
extern "C" void isUsed__9J2DWindowFPC7ResFONT();
extern "C" void rewriteAlpha__9J2DWindowFv();

//
// External References:
//

extern "C" void setAlpha__7J2DPaneFUc();
extern "C" void calcMtx__7J2DPaneFv();
extern "C" void makeMatrix__7J2DPaneFff();
extern "C" void setAnimation__7J2DPaneFP15J2DAnmTevRegKey();
extern "C" void setAnimation__7J2DPaneFP11J2DAnmColor();
extern "C" void setAnimation__7J2DPaneFP19J2DAnmTextureSRTKey();
extern "C" void getBlack__9J2DWindowCFv();
extern "C" void getWhite__9J2DWindowCFv();
extern "C" void setWhite__9J2DWindowFQ28JUtility6TColor();
extern "C" void setBlack__9J2DWindowFQ28JUtility6TColor();
extern "C" void setBlackWhite__9J2DWindowFQ28JUtility6TColorQ28JUtility6TColor();
extern "C" void setAnimation__7J2DPaneFP14J2DAnmVtxColor();
extern "C" void setAnimation__7J2DPaneFP20J2DAnmVisibilityFull();
extern "C" void setAnimation__7J2DPaneFP16J2DAnmTexPattern();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void read__14JSUInputStreamFPvl();
extern "C" void peek__20JSURandomInputStreamFPvl();
extern "C" void seek__20JSURandomInputStreamFl17JSUStreamSeekFrom();
extern "C" void __dt__10JUTTextureFv();
extern "C" void storeTIMG__10JUTTextureFPC7ResTIMGUc();
extern "C" void load__10JUTTextureF11_GXTexMapID();
extern "C" void storeTLUT__10JUTPaletteF7_GXTlutP7ResTLUT();
extern "C" void __ct__7J2DPaneFv();
extern "C" void makePaneStream__7J2DPaneFP7J2DPaneP20JSURandomInputStream();
extern "C" void __dt__7J2DPaneFv();
extern "C" void move__7J2DPaneFff();
extern "C" void add__7J2DPaneFff();
extern "C" void resize__7J2DPaneFff();
extern "C" void func_802F7264();
extern "C" void search__7J2DPaneFUx();
extern "C" void searchUserInfo__7J2DPaneFUx();
extern "C" void isUsed__7J2DPaneFPC7ResTIMG();
extern "C" void isUsed__7J2DPaneFPC7ResFONT();
extern "C" void makeMatrix__7J2DPaneFffff();
extern "C" void setCullBack__7J2DPaneF11_GXCullMode();
extern "C" void makePaneExStream__7J2DPaneFP7J2DPaneP20JSURandomInputStream();
extern "C" void getPointer__7J2DPaneFP20JSURandomInputStreamUlP10JKRArchive();
extern "C" void setAnimation__7J2DPaneFP10J2DAnmBase();
extern "C" void setAnimation__7J2DPaneFP15J2DAnmTransform();
extern "C" void clearAnmTransform__7J2DPaneFv();
extern "C" void animationTransform__7J2DPaneFPC15J2DAnmTransform();
extern "C" void setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull();
extern "C" void setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor();
extern "C" void animationPane__7J2DPaneFPC15J2DAnmTransform();
extern "C" void setAnimationVF__7J2DPaneFP20J2DAnmVisibilityFull();
extern "C" void setAnimationVC__7J2DPaneFP14J2DAnmVtxColor();
extern "C" void setCullBack__7J2DPaneFb();
extern "C" void setConnectParent__7J2DPaneFb();
extern "C" void update__7J2DPaneFv();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();

//
// Declarations:
//

/* ############################################################################################## */
/* 803CD108-803CD1D8 02A228 00CC+04 4/4 0/0 0/0 .data            __vt__9J2DWindow */
SECTION_DATA extern void* __vt__9J2DWindow[51 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__9J2DWindowFv,
    (void*)getTypeID__9J2DWindowCFv,
    (void*)move__7J2DPaneFff,
    (void*)add__7J2DPaneFff,
    (void*)resize__9J2DWindowFff,
    (void*)setCullBack__7J2DPaneFb,
    (void*)setCullBack__7J2DPaneF11_GXCullMode,
    (void*)setAlpha__7J2DPaneFUc,
    (void*)setConnectParent__7J2DPaneFb,
    (void*)calcMtx__7J2DPaneFv,
    (void*)update__7J2DPaneFv,
    (void*)drawSelf__9J2DWindowFff,
    (void*)drawSelf__9J2DWindowFffPA3_A4_f,
    (void*)search__7J2DPaneFUx,
    (void*)searchUserInfo__7J2DPaneFUx,
    (void*)makeMatrix__7J2DPaneFff,
    (void*)makeMatrix__7J2DPaneFffff,
    (void*)isUsed__9J2DWindowFPC7ResTIMG,
    (void*)isUsed__9J2DWindowFPC7ResFONT,
    (void*)clearAnmTransform__7J2DPaneFv,
    (void*)rewriteAlpha__9J2DWindowFv,
    (void*)setAnimation__7J2DPaneFP10J2DAnmBase,
    (void*)setAnimation__7J2DPaneFP15J2DAnmTransform,
    (void*)setAnimation__7J2DPaneFP11J2DAnmColor,
    (void*)setAnimation__7J2DPaneFP16J2DAnmTexPattern,
    (void*)setAnimation__7J2DPaneFP19J2DAnmTextureSRTKey,
    (void*)setAnimation__7J2DPaneFP15J2DAnmTevRegKey,
    (void*)setAnimation__7J2DPaneFP20J2DAnmVisibilityFull,
    (void*)setAnimation__7J2DPaneFP14J2DAnmVtxColor,
    (void*)animationTransform__7J2DPaneFPC15J2DAnmTransform,
    (void*)setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull,
    (void*)setAnimationVF__7J2DPaneFP20J2DAnmVisibilityFull,
    (void*)setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor,
    (void*)setAnimationVC__7J2DPaneFP14J2DAnmVtxColor,
    (void*)animationPane__7J2DPaneFPC15J2DAnmTransform,
    (void*)func_802FA928,
    (void*)func_802FAED0,
    (void*)draw__9J2DWindowFffff,
    (void*)setBlack__9J2DWindowFQ28JUtility6TColor,
    (void*)setWhite__9J2DWindowFQ28JUtility6TColor,
    (void*)setBlackWhite__9J2DWindowFQ28JUtility6TColorQ28JUtility6TColor,
    (void*)getBlack__9J2DWindowCFv,
    (void*)getWhite__9J2DWindowCFv,
    (void*)getFrameTexture__9J2DWindowCFUcUc,
    (void*)getContentsTexture__9J2DWindowCFUc,
    (void*)getMaterial__9J2DWindowCFRQ29J2DWindow9TMaterial,
    (void*)getFrameMaterial__9J2DWindowCFUc,
    (void*)getContentsMaterial__9J2DWindowCFv,
    (void*)func_802FB338,
    /* padding */
    NULL,
};

/* 802F9A7C-802F9B74 2F43BC 00F8+00 0/0 1/1 0/0 .text            __ct__9J2DWindowFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DWindow::J2DWindow() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DWindow/__ct__9J2DWindowFv.s"
}
#pragma pop

/* 802F9B74-802F9C10 2F44B4 009C+00 0/0 1/1 0/0 .text
 * __ct__9J2DWindowFP7J2DPaneP20JSURandomInputStreamP10JKRArchive */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DWindow::J2DWindow(J2DPane* param_0, JSURandomInputStream* param_1, JKRArchive* param_2) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DWindow/__ct__9J2DWindowFP7J2DPaneP20JSURandomInputStreamP10JKRArchive.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A1C10-803A1C20 02E270 0010+00 1/1 0/0 0/0 .rodata          @1831 */
SECTION_RODATA static u8 const lit_1831[16] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x803A1C10, &lit_1831);

/* 803A1C20-803A1C30 02E280 0010+00 1/1 0/0 0/0 .rodata          @1849 */
SECTION_RODATA static u8 const lit_1849[16] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x803A1C20, &lit_1849);

/* 80456240-80456248 004840 0008+00 7/7 0/0 0/0 .sdata2          @1971 */
SECTION_SDATA2 static f64 lit_1971 = 4503601774854144.0 /* cast s32 to float */;

/* 80456248-80456250 004848 0008+00 2/2 0/0 0/0 .sdata2          @1974 */
SECTION_SDATA2 static f64 lit_1974 = 4503599627370496.0 /* cast u32 to float */;

/* 802F9C10-802FA118 2F4550 0508+00 0/0 1/1 0/0 .text
 * __ct__9J2DWindowFP7J2DPaneP20JSURandomInputStreamP11J2DMaterial */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DWindow::J2DWindow(J2DPane* param_0, JSURandomInputStream* param_1, J2DMaterial* param_2) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DWindow/__ct__9J2DWindowFP7J2DPaneP20JSURandomInputStreamP11J2DMaterial.s"
}
#pragma pop

/* 802FA118-802FA604 2F4A58 04EC+00 1/1 0/0 0/0 .text
 * private_readStream__9J2DWindowFP7J2DPaneP20JSURandomInputStreamP10JKRArchive */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindow::private_readStream(J2DPane* param_0, JSURandomInputStream* param_1,
                                       JKRArchive* param_2) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DWindow/private_readStream__9J2DWindowFP7J2DPaneP20JSURandomInputStreamP10JKRArchive.s"
}
#pragma pop

/* 802FA604-802FA880 2F4F44 027C+00 2/2 0/0 0/0 .text            initinfo2__9J2DWindowFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindow::initinfo2() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DWindow/initinfo2__9J2DWindowFv.s"
}
#pragma pop

/* 802FA880-802FA928 2F51C0 00A8+00 1/0 1/1 0/0 .text            __dt__9J2DWindowFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DWindow::~J2DWindow() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DWindow/__dt__9J2DWindowFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456250-80456254 004850 0004+00 5/5 0/0 0/0 .sdata2          @2156 */
SECTION_SDATA2 static u8 lit_2156[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 802FA928-802FAA5C 2F5268 0134+00 1/0 0/0 0/0 .text draw__9J2DWindowFRCQ29JGeometry8TBox2<f> */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindow::draw(JGeometry::TBox2<f32> const& param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DWindow/func_802FA928.s"
}
#pragma pop

/* 802FAA5C-802FAED0 2F539C 0474+00 2/2 0/0 0/0 .text
 * draw_private__9J2DWindowFRCQ29JGeometry8TBox2<f>RCQ29JGeometry8TBox2<f> */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindow::draw_private(JGeometry::TBox2<f32> const& param_0,
                                 JGeometry::TBox2<f32> const& param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DWindow/func_802FAA5C.s"
}
#pragma pop

/* 802FAED0-802FB000 2F5810 0130+00 1/0 0/0 0/0 .text
 * draw__9J2DWindowFRCQ29JGeometry8TBox2<f>RCQ29JGeometry8TBox2<f> */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindow::draw(JGeometry::TBox2<f32> const& param_0,
                         JGeometry::TBox2<f32> const& param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DWindow/func_802FAED0.s"
}
#pragma pop

/* 802FB000-802FB12C 2F5940 012C+00 1/0 1/0 0/0 .text            resize__9J2DWindowFff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindow::resize(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DWindow/resize__9J2DWindowFff.s"
}
#pragma pop

/* 802FB12C-802FB1D8 2F5A6C 00AC+00 1/1 0/0 0/0 .text
 * setContentsColor__9J2DWindowFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindow::setContentsColor(JUtility::TColor param_0, JUtility::TColor param_1,
                                     JUtility::TColor param_2, JUtility::TColor param_3) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DWindow/func_802FB12C.s"
}
#pragma pop

/* 802FB1D8-802FB240 2F5B18 0068+00 1/0 1/0 0/0 .text            drawSelf__9J2DWindowFff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindow::drawSelf(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DWindow/drawSelf__9J2DWindowFff.s"
}
#pragma pop

/* 802FB240-802FB338 2F5B80 00F8+00 1/0 0/0 0/0 .text            drawSelf__9J2DWindowFffPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindow::drawSelf(f32 param_0, f32 param_1, f32 (*param_2)[3][4]) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DWindow/drawSelf__9J2DWindowFffPA3_A4_f.s"
}
#pragma pop

/* 802FB338-802FB634 2F5C78 02FC+00 1/0 0/0 0/0 .text
 * drawContents__9J2DWindowFRCQ29JGeometry8TBox2<f>             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindow::drawContents(JGeometry::TBox2<f32> const& param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DWindow/func_802FB338.s"
}
#pragma pop

/* 802FB634-802FB7C8 2F5F74 0194+00 2/2 0/0 0/0 .text
 * drawFrameTexture__9J2DWindowFP10JUTTextureffffUsUsUsUsb      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindow::drawFrameTexture(JUTTexture* param_0, f32 param_1, f32 param_2, f32 param_3,
                                     f32 param_4, u16 param_5, u16 param_6, u16 param_7,
                                     u16 param_8, bool param_9) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DWindow/drawFrameTexture__9J2DWindowFP10JUTTextureffffUsUsUsUsb.s"
}
#pragma pop

/* 802FB7C8-802FB868 2F6108 00A0+00 1/1 0/0 0/0 .text
 * drawFrameTexture__9J2DWindowFP10JUTTextureffbbb              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindow::drawFrameTexture(JUTTexture* param_0, f32 param_1, f32 param_2, bool param_3,
                                     bool param_4, bool param_5) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DWindow/drawFrameTexture__9J2DWindowFP10JUTTextureffbbb.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456254-80456258 004854 0004+00 1/1 0/0 0/0 .sdata2          @2984 */
SECTION_SDATA2 static f32 lit_2984 = 1.0f;

/* 80456258-80456260 004858 0004+04 1/1 0/0 0/0 .sdata2          @2985 */
SECTION_SDATA2 static f32 lit_2985[1 + 1 /* padding */] = {
    0.5f,
    /* padding */
    0.0f,
};

/* 802FB868-802FBB90 2F61A8 0328+00 1/1 0/0 0/0 .text drawContentsTexture__9J2DWindowFffff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindow::drawContentsTexture(f32 param_0, f32 param_1, f32 param_2, f32 param_3) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DWindow/drawContentsTexture__9J2DWindowFffff.s"
}
#pragma pop

/* 802FBB90-802FBE60 2F64D0 02D0+00 2/2 0/0 0/0 .text
 * setTevMode__9J2DWindowFP10JUTTextureQ28JUtility6TColorQ28JUtility6TColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindow::setTevMode(JUTTexture* param_0, JUtility::TColor param_1,
                               JUtility::TColor param_2) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DWindow/setTevMode__9J2DWindowFP10JUTTextureQ28JUtility6TColorQ28JUtility6TColor.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A1C30-803A1C40 02E290 0010+00 1/1 0/0 0/0 .rodata          @3028 */
SECTION_RODATA static u8 const lit_3028[16] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x803A1C30, &lit_3028);

/* 802FBE60-802FBEDC 2F67A0 007C+00 1/0 0/0 0/0 .text            getFrameTexture__9J2DWindowCFUcUc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindow::getFrameTexture(u8 param_0, u8 param_1) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DWindow/getFrameTexture__9J2DWindowCFUcUc.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A1C40-803A1C58 02E2A0 0014+04 1/1 0/0 0/0 .rodata          @3037 */
SECTION_RODATA static u8 const lit_3037[20 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x803A1C40, &lit_3037);

/* 802FBEDC-802FBF98 2F681C 00BC+00 1/0 0/0 0/0 .text            isUsed__9J2DWindowFPC7ResTIMG */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool J2DWindow::isUsed(ResTIMG const* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DWindow/isUsed__9J2DWindowFPC7ResTIMG.s"
}
#pragma pop

/* 802FBF98-802FBFA0 2F68D8 0008+00 1/0 1/0 0/0 .text            getTypeID__9J2DWindowCFv */
s32 J2DWindow::getTypeID() const {
    return 17;
}

/* 802FBFA0-802FBFE8 2F68E0 0048+00 1/0 0/0 0/0 .text            draw__9J2DWindowFffff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindow::draw(f32 param_0, f32 param_1, f32 param_2, f32 param_3) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DWindow/draw__9J2DWindowFffff.s"
}
#pragma pop

/* 802FBFE8-802FC000 2F6928 0018+00 1/0 0/0 0/0 .text            getContentsTexture__9J2DWindowCFUc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindow::getContentsTexture(u8 param_0) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DWindow/getContentsTexture__9J2DWindowCFUc.s"
}
#pragma pop

/* 802FC000-802FC01C 2F6940 001C+00 1/0 0/0 0/0 .text
 * getMaterial__9J2DWindowCFRQ29J2DWindow9TMaterial             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindow::getMaterial(J2DWindow::TMaterial& param_0) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DWindow/getMaterial__9J2DWindowCFRQ29J2DWindow9TMaterial.s"
}
#pragma pop

/* 802FC01C-802FC024 2F695C 0008+00 1/0 0/0 0/0 .text            getFrameMaterial__9J2DWindowCFUc */
bool J2DWindow::getFrameMaterial(u8 param_0) const {
    return false;
}

/* 802FC024-802FC02C 2F6964 0008+00 1/0 0/0 0/0 .text            getContentsMaterial__9J2DWindowCFv
 */
bool J2DWindow::getContentsMaterial() const {
    return false;
}

/* 802FC02C-802FC04C 2F696C 0020+00 1/0 0/0 0/0 .text            isUsed__9J2DWindowFPC7ResFONT */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool J2DWindow::isUsed(ResFONT const* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DWindow/isUsed__9J2DWindowFPC7ResFONT.s"
}
#pragma pop

/* 802FC04C-802FC050 2F698C 0004+00 1/0 0/0 0/0 .text            rewriteAlpha__9J2DWindowFv */
void J2DWindow::rewriteAlpha() {
    /* empty function */
}
