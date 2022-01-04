//
// Generated By: dol2asm
// Translation Unit: d/d_select_cursor
//

#include "d/d_select_cursor.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct J2DAnmLoaderDataBase {
    /* 80308A6C */ void load(void const*);
};

//
// Forward References:
//

extern "C" void __ct__19dSelect_cursorHIO_cFv();
extern "C" void __ct__16dSelect_cursor_cFUcfP10JKRArchive();
extern "C" void __dt__16dSelect_cursor_cFv();
extern "C" void draw__16dSelect_cursor_cFv();
extern "C" void update__16dSelect_cursor_cFv();
extern "C" void setPos__16dSelect_cursor_cFffP7J2DPaneb();
extern "C" void setParam__16dSelect_cursor_cFfffff();
extern "C" void setScale__16dSelect_cursor_cFf();
extern "C" void setAlphaRate__16dSelect_cursor_cFf();
extern "C" void addAlpha__16dSelect_cursor_cFv();
extern "C" void decAlpha__16dSelect_cursor_cFv();
extern "C" void setBpkAnimation__16dSelect_cursor_cFP11J2DAnmColor();
extern "C" void setBtk0Animation__16dSelect_cursor_cFP19J2DAnmTextureSRTKey();
extern "C" void setCursorAnimation__16dSelect_cursor_cFv();
extern "C" void setBckAnimation__16dSelect_cursor_cFP18J2DAnmTransformKey();
extern "C" void moveCenter__16dSelect_cursor_cFP7J2DPaneff();
extern "C" void __dt__19dSelect_cursorHIO_cFv();
extern "C" void __dt__18J2DAnmTransformKeyFv();
extern "C" extern char const* const d_d_select_cursor__stringBase0;

//
// External References:
//

extern "C" void animation__14dSelect_icon_cFv();
extern "C" void setAlpha__14dSelect_icon_cFUc();
extern "C" void setPos__14dSelect_icon_cFP7J2DPaneff();
extern "C" void __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap();
extern "C" void getGlobalVtxCenter__8CPaneMgrFP7J2DPanebs();
extern "C" void dPaneClass_showNullPane__FP9J2DScreen();
extern "C" void show__13CPaneMgrAlphaFv();
extern "C" void hide__13CPaneMgrAlphaFv();
extern "C" void isVisible__13CPaneMgrAlphaFv();
extern "C" void setAlphaRate__13CPaneMgrAlphaFf();
extern "C" void getAlphaRate__13CPaneMgrAlphaFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader();
extern "C" void __ct__9J2DScreenFv();
extern "C" void setPriority__9J2DScreenFPCcUlP10JKRArchive();
extern "C" void draw__9J2DScreenFffPC14J2DGrafContext();
extern "C" void animation__9J2DScreenFv();
extern "C" void load__20J2DAnmLoaderDataBaseFPCv();
extern "C" void _savegpr_23();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_23();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" void strcmp();
extern "C" extern void* __vt__12dDlst_base_c[3];
extern "C" extern void* __vt__10J2DAnmBase[4];
extern "C" extern void* __vt__15J2DAnmTransform[5 + 4 /* padding */];
extern "C" extern void* __vt__18J2DAnmTransformKey[6];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* ############################################################################################## */
/* 80394AA0-80394AA0 021100 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80394AA0 = "zelda_select_cursor_4parts.blo";
SECTION_DEAD static char const* const stringBase_80394ABF = "zelda_store_select_icon.blo";
SECTION_DEAD static char const* const stringBase_80394ADB = "zelda_map_screen_portal_icon.blo";
SECTION_DEAD static char const* const stringBase_80394AFC = "zelda_map_screen_batsumark.blo";
SECTION_DEAD static char const* const stringBase_80394B1B = "";
SECTION_DEAD static char const* const stringBase_80394B1C = "zelda_store_select_icon.bck";
SECTION_DEAD static char const* const stringBase_80394B38 = "zelda_select_cursor_4parts.bpk";
SECTION_DEAD static char const* const stringBase_80394B57 = "zelda_store_select_icon.bpk";
SECTION_DEAD static char const* const stringBase_80394B73 = "zelda_map_screen_portal_icon.bpk";
SECTION_DEAD static char const* const stringBase_80394B94 = "zelda_map_screen_batsumark.bpk";
SECTION_DEAD static char const* const stringBase_80394BB3 = "zelda_select_cursor_4parts.btk";
SECTION_DEAD static char const* const stringBase_80394BD2 = "zelda_store_select_icon.btk";
SECTION_DEAD static char const* const stringBase_80394BEE = "zelda_store_select_icon_02.btk";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_80394C0D = "\0\0";
#pragma pop

/* 803BB700-803BB70C 018820 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803BB70C-803BB71C -00001 0010+00 0/1 0/0 0/0 .data            blo_name$3684 */
#pragma push
#pragma force_active on
SECTION_DATA static void* blo_name[4] = {
    (void*)&d_d_select_cursor__stringBase0,
    (void*)(((char*)&d_d_select_cursor__stringBase0) + 0x1F),
    (void*)(((char*)&d_d_select_cursor__stringBase0) + 0x3B),
    (void*)(((char*)&d_d_select_cursor__stringBase0) + 0x5C),
};
#pragma pop

/* 803BB71C-803BB72C -00001 0010+00 0/1 0/0 0/0 .data            bck_name$3685 */
#pragma push
#pragma force_active on
SECTION_DATA static void* bck_name[4] = {
    (void*)(((char*)&d_d_select_cursor__stringBase0) + 0x7B),
    (void*)(((char*)&d_d_select_cursor__stringBase0) + 0x7C),
    (void*)(((char*)&d_d_select_cursor__stringBase0) + 0x7B),
    (void*)(((char*)&d_d_select_cursor__stringBase0) + 0x7B),
};
#pragma pop

/* 803BB72C-803BB73C -00001 0010+00 0/1 0/0 0/0 .data            bpk_name$3686 */
#pragma push
#pragma force_active on
SECTION_DATA static void* bpk_name[4] = {
    (void*)(((char*)&d_d_select_cursor__stringBase0) + 0x98),
    (void*)(((char*)&d_d_select_cursor__stringBase0) + 0xB7),
    (void*)(((char*)&d_d_select_cursor__stringBase0) + 0xD3),
    (void*)(((char*)&d_d_select_cursor__stringBase0) + 0xF4),
};
#pragma pop

/* 803BB73C-803BB74C -00001 0010+00 0/1 0/0 0/0 .data            btk_name$3687 */
#pragma push
#pragma force_active on
SECTION_DATA static void* btk_name[4] = {
    (void*)(((char*)&d_d_select_cursor__stringBase0) + 0x113),
    (void*)(((char*)&d_d_select_cursor__stringBase0) + 0x132),
    (void*)(((char*)&d_d_select_cursor__stringBase0) + 0x7B),
    (void*)(((char*)&d_d_select_cursor__stringBase0) + 0x7B),
};
#pragma pop

/* 803BB74C-803BB78C -00001 0010+30 0/1 0/0 0/0 .data            btk2_name$3688 */
#pragma push
#pragma force_active on
SECTION_DATA static void* btk2_name[4 + 12 /* padding */] = {
    (void*)(((char*)&d_d_select_cursor__stringBase0) + 0x7B),
    (void*)(((char*)&d_d_select_cursor__stringBase0) + 0x14E),
    (void*)(((char*)&d_d_select_cursor__stringBase0) + 0x7B),
    (void*)(((char*)&d_d_select_cursor__stringBase0) + 0x7B),
    /* padding */
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
};
#pragma pop

/* 803BB78C-803BB7A8 0188AC 0010+0C 2/2 0/0 0/0 .data            __vt__16dSelect_cursor_c */
SECTION_DATA extern void* __vt__16dSelect_cursor_c[4 + 3 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__16dSelect_cursor_cFv,
    (void*)__dt__16dSelect_cursor_cFv,
    /* padding */
    NULL,
    NULL,
    NULL,
};

/* 803BB7A8-803BB7B8 0188C8 000C+04 2/2 0/0 0/0 .data            __vt__19dSelect_cursorHIO_c */
SECTION_DATA extern void* __vt__19dSelect_cursorHIO_c[3 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__19dSelect_cursorHIO_cFv,
    /* padding */
    NULL,
};

/* 80453A48-80453A4C 002048 0004+00 4/4 0/0 0/0 .sdata2          @3673 */
SECTION_SDATA2 static f32 lit_3673 = 1.0f;

/* 80453A4C-80453A50 00204C 0004+00 1/1 0/0 0/0 .sdata2          @3674 */
SECTION_SDATA2 static f32 lit_3674 = 3.0f / 10.0f;

/* 801941E4-80194220 18EB24 003C+00 1/1 0/0 0/0 .text            __ct__19dSelect_cursorHIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSelect_cursorHIO_c::dSelect_cursorHIO_c() {
    nofralloc
#include "asm/d/d_select_cursor/__ct__19dSelect_cursorHIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80394A10-80394A30 021070 0020+00 1/1 0/0 0/0 .rodata          corner_tag$3707 */
SECTION_RODATA static u8 const corner_tag[32] = {
    0x6C, 0x5F, 0x75, 0x5F, 0x6E, 0x75, 0x6C, 0x6C, 0x6C, 0x5F, 0x64, 0x5F, 0x6E, 0x75, 0x6C, 0x6C,
    0x72, 0x5F, 0x75, 0x5F, 0x6E, 0x75, 0x6C, 0x6C, 0x72, 0x5F, 0x64, 0x5F, 0x6E, 0x75, 0x6C, 0x6C,
};
COMPILER_STRIP_GATE(0x80394A10, &corner_tag);

/* 80453A50-80453A54 002050 0004+00 4/4 0/0 0/0 .sdata2          @3808 */
SECTION_SDATA2 static u8 lit_3808[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80194220-801949EC 18EB60 07CC+00 0/0 14/14 0/0 .text __ct__16dSelect_cursor_cFUcfP10JKRArchive
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSelect_cursor_c::dSelect_cursor_c(u8 param_0, f32 param_1, JKRArchive* param_2) {
    nofralloc
#include "asm/d/d_select_cursor/__ct__16dSelect_cursor_cFUcfP10JKRArchive.s"
}
#pragma pop

/* 801949EC-80194C30 18F32C 0244+00 1/0 0/0 0/0 .text            __dt__16dSelect_cursor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSelect_cursor_c::~dSelect_cursor_c() {
    nofralloc
#include "asm/d/d_select_cursor/__dt__16dSelect_cursor_cFv.s"
}
#pragma pop

/* 80194C30-80194CC0 18F570 0090+00 1/0 0/0 0/0 .text            draw__16dSelect_cursor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void dSelect_cursor_c::draw() {
extern "C" asm void draw__16dSelect_cursor_cFv() {
    nofralloc
#include "asm/d/d_select_cursor/draw__16dSelect_cursor_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80453A54-80453A58 002054 0004+00 3/3 0/0 0/0 .sdata2          @4062 */
SECTION_SDATA2 static f32 lit_4062 = 0.5f;

/* 80453A58-80453A60 002058 0008+00 3/3 0/0 0/0 .sdata2          @4064 */
SECTION_SDATA2 static f64 lit_4064 = 4503601774854144.0 /* cast s32 to float */;

/* 80194CC0-801950F4 18F600 0434+00 1/1 0/0 0/0 .text            update__16dSelect_cursor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSelect_cursor_c::update() {
    nofralloc
#include "asm/d/d_select_cursor/update__16dSelect_cursor_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80453A60-80453A64 002060 0004+00 1/1 0/0 0/0 .sdata2          @4089 */
SECTION_SDATA2 static f32 lit_4089 = -1.0f;

/* 801950F4-801951B0 18FA34 00BC+00 0/0 30/30 0/0 .text setPos__16dSelect_cursor_cFffP7J2DPaneb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSelect_cursor_c::setPos(f32 param_0, f32 param_1, J2DPane* param_2, bool param_3) {
    nofralloc
#include "asm/d/d_select_cursor/setPos__16dSelect_cursor_cFffP7J2DPaneb.s"
}
#pragma pop

/* 801951B0-801951C8 18FAF0 0018+00 0/0 24/24 0/0 .text setParam__16dSelect_cursor_cFfffff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSelect_cursor_c::setParam(f32 param_0, f32 param_1, f32 param_2, f32 param_3,
                                    f32 param_4) {
    nofralloc
#include "asm/d/d_select_cursor/setParam__16dSelect_cursor_cFfffff.s"
}
#pragma pop

/* 801951C8-801952A0 18FB08 00D8+00 0/0 14/14 0/0 .text            setScale__16dSelect_cursor_cFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSelect_cursor_c::setScale(f32 param_0) {
    nofralloc
#include "asm/d/d_select_cursor/setScale__16dSelect_cursor_cFf.s"
}
#pragma pop

/* 801952A0-80195330 18FBE0 0090+00 0/0 77/77 0/0 .text setAlphaRate__16dSelect_cursor_cFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSelect_cursor_c::setAlphaRate(f32 param_0) {
    nofralloc
#include "asm/d/d_select_cursor/setAlphaRate__16dSelect_cursor_cFf.s"
}
#pragma pop

/* ############################################################################################## */
/* 80453A64-80453A68 002064 0004+00 2/2 0/0 0/0 .sdata2          @4157 */
SECTION_SDATA2 static f32 lit_4157 = 5.0f;

/* 80195330-801953CC 18FC70 009C+00 0/0 1/1 0/0 .text            addAlpha__16dSelect_cursor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSelect_cursor_c::addAlpha() {
    nofralloc
#include "asm/d/d_select_cursor/addAlpha__16dSelect_cursor_cFv.s"
}
#pragma pop

/* 801953CC-80195460 18FD0C 0094+00 0/0 1/1 0/0 .text            decAlpha__16dSelect_cursor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSelect_cursor_c::decAlpha() {
    nofralloc
#include "asm/d/d_select_cursor/decAlpha__16dSelect_cursor_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80394A30-80394A50 021090 0020+00 1/1 0/0 0/0 .rodata          tag$4181 */
SECTION_RODATA static u8 const tag_4181[32] = {
    0x00, 0x00, 0x00, 0x00, 0x6C, 0x5F, 0x6C, 0x64, 0x00, 0x00, 0x00, 0x00, 0x6C, 0x5F, 0x6C, 0x75,
    0x00, 0x00, 0x00, 0x00, 0x6C, 0x5F, 0x72, 0x64, 0x00, 0x00, 0x00, 0x00, 0x6C, 0x5F, 0x72, 0x75,
};
COMPILER_STRIP_GATE(0x80394A30, &tag_4181);

/* 80195460-801955F0 18FDA0 0190+00 1/1 0/0 0/0 .text
 * setBpkAnimation__16dSelect_cursor_cFP11J2DAnmColor           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSelect_cursor_c::setBpkAnimation(J2DAnmColor* param_0) {
    nofralloc
#include "asm/d/d_select_cursor/setBpkAnimation__16dSelect_cursor_cFP11J2DAnmColor.s"
}
#pragma pop

/* ############################################################################################## */
/* 80394A50-80394A90 0210B0 0040+00 1/1 0/0 0/0 .rodata          tag$4197 */
SECTION_RODATA static u8 const tag_4197[64] = {
    0x00, 0x69, 0x5F, 0x63, 0x5F, 0x6C, 0x64, 0x31, 0x00, 0x69, 0x5F, 0x63, 0x5F, 0x6C, 0x64, 0x32,
    0x00, 0x69, 0x5F, 0x63, 0x5F, 0x6C, 0x75, 0x31, 0x00, 0x69, 0x5F, 0x63, 0x5F, 0x6C, 0x75, 0x32,
    0x00, 0x69, 0x5F, 0x63, 0x5F, 0x72, 0x64, 0x31, 0x00, 0x69, 0x5F, 0x63, 0x5F, 0x72, 0x64, 0x32,
    0x00, 0x69, 0x5F, 0x63, 0x5F, 0x72, 0x75, 0x31, 0x00, 0x69, 0x5F, 0x63, 0x5F, 0x72, 0x75, 0x32,
};
COMPILER_STRIP_GATE(0x80394A50, &tag_4197);

/* 80394A90-80394AA0 0210F0 0010+00 1/1 0/0 0/0 .rodata          tag$4204 */
SECTION_RODATA static u8 const tag_4204[16] = {
    0x00, 0x00, 0x67, 0x6F, 0x6C, 0x64, 0x30, 0x31, 0x00, 0x00, 0x67, 0x6F, 0x6C, 0x64, 0x30, 0x32,
};
COMPILER_STRIP_GATE(0x80394A90, &tag_4204);

/* 801955F0-80195724 18FF30 0134+00 1/1 0/0 0/0 .text
 * setBtk0Animation__16dSelect_cursor_cFP19J2DAnmTextureSRTKey  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSelect_cursor_c::setBtk0Animation(J2DAnmTextureSRTKey* param_0) {
    nofralloc
#include "asm/d/d_select_cursor/setBtk0Animation__16dSelect_cursor_cFP19J2DAnmTextureSRTKey.s"
}
#pragma pop

/* ############################################################################################## */
/* 80453A68-80453A6C 002068 0004+00 1/1 0/0 0/0 .sdata2          @4237 */
SECTION_SDATA2 static f32 lit_4237 = 20.0f;

/* 80453A6C-80453A70 00206C 0004+00 1/1 0/0 0/0 .sdata2          @4238 */
SECTION_SDATA2 static f32 lit_4238 = 10.0f;

/* 80195724-801958E0 190064 01BC+00 1/1 0/0 0/0 .text setCursorAnimation__16dSelect_cursor_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSelect_cursor_c::setCursorAnimation() {
    nofralloc
#include "asm/d/d_select_cursor/setCursorAnimation__16dSelect_cursor_cFv.s"
}
#pragma pop

/* 801958E0-80195940 190220 0060+00 1/1 0/0 0/0 .text
 * setBckAnimation__16dSelect_cursor_cFP18J2DAnmTransformKey    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSelect_cursor_c::setBckAnimation(J2DAnmTransformKey* param_0) {
    nofralloc
#include "asm/d/d_select_cursor/setBckAnimation__16dSelect_cursor_cFP18J2DAnmTransformKey.s"
}
#pragma pop

/* 80195940-80195978 190280 0038+00 1/1 0/0 0/0 .text moveCenter__16dSelect_cursor_cFP7J2DPaneff
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dSelect_cursor_c::moveCenter(J2DPane* param_0, f32 param_1, f32 param_2) {
    nofralloc
#include "asm/d/d_select_cursor/moveCenter__16dSelect_cursor_cFP7J2DPaneff.s"
}
#pragma pop

/* 80195978-801959C0 1902B8 0048+00 1/0 0/0 0/0 .text            __dt__19dSelect_cursorHIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dSelect_cursorHIO_c::~dSelect_cursorHIO_c() {
    nofralloc
#include "asm/d/d_select_cursor/__dt__19dSelect_cursorHIO_cFv.s"
}
#pragma pop

/* 801959C0-80195A2C 190300 006C+00 0/0 1/0 0/0 .text            __dt__18J2DAnmTransformKeyFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm J2DAnmTransformKey::~J2DAnmTransformKey() {
extern "C" asm void __dt__18J2DAnmTransformKeyFv() {
    nofralloc
#include "asm/d/d_select_cursor/__dt__18J2DAnmTransformKeyFv.s"
}
#pragma pop

/* 80394AA0-80394AA0 021100 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
