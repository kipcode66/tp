//
// Generated By: dol2asm
// Translation Unit: d/menu/d_menu_insect
//

#include "d/menu/d_menu_insect.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct mDoGph_gInf_c {
    static u8 mFader[4];
};

struct mDoDvdThd_mountArchive_c {
    /* 80015E14 */ void create(char const*, u8, JKRHeap*);
};

struct mDoCPd_c {
    static u8 m_cpadInfo[256];
};

struct dSv_player_get_item_c {
    /* 80033EC8 */ void isFirstBit(u8) const;
};

struct dSv_event_flag_c {
    static u8 saveBitLabels[1644 + 4 /* padding */];
};

struct dSv_event_c {
    /* 800349BC */ void isEventBit(u16) const;
};

struct dMsgString_c {
    /* 80249C20 */ dMsgString_c();
    /* 80249D28 */ ~dMsgString_c();
};

struct dMsgScrn3Select_c {
    /* 802390B4 */ dMsgScrn3Select_c();
    /* 80239C64 */ void isSelect();
    /* 80239C78 */ void setString(char*, char*, char*);
    /* 80239D08 */ void setRubyString(char*, char*, char*);
    /* 80239D98 */ void translate(f32, f32);
    /* 80239DD4 */ void draw(f32, f32);
    /* 8023A094 */ void selAnimeInit(u8, u8, u8, f32, u8);
    /* 8023A398 */ void selAnimeMove(u8, u8, bool);
    /* 8023A680 */ void selAnimeEnd();
    /* 8023A934 */ void getTextBoxWidth();
    /* 8023A94C */ void getFontSize();
    /* 8023A97C */ void getCharSpace();
};

struct JMSMesgEntry_c {};

struct dMeter2Info_c {
    /* 8021C250 */ void getString(u32, char*, JMSMesgEntry_c*);
    /* 8021C544 */ void getStringKanji(u32, char*, JMSMesgEntry_c*);
    /* 8021C7FC */ void getStringLength(JUTFont*, f32, f32, char*);
    /* 8021CF08 */ void readItemTexture(u8, void*, J2DPicture*, void*, J2DPicture*, void*,
                                        J2DPicture*, void*, J2DPicture*, int);
};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

//
// Forward References:
//

extern "C" void __ct__14dMenu_Insect_cFP10JKRExpHeapP9STControlP10CSTControlUc();
extern "C" void __dt__14dMenu_Insect_cFv();
extern "C" void _create__14dMenu_Insect_cFv();
extern "C" void _move__14dMenu_Insect_cFv();
extern "C" void _draw__14dMenu_Insect_cFv();
extern "C" void isSync__14dMenu_Insect_cFv();
extern "C" void init__14dMenu_Insect_cFv();
extern "C" void _open__14dMenu_Insect_cFv();
extern "C" void _close__14dMenu_Insect_cFv();
extern "C" void wait_init__14dMenu_Insect_cFv();
extern "C" void wait_move__14dMenu_Insect_cFv();
extern "C" void explain_open_init__14dMenu_Insect_cFv();
extern "C" void explain_open_move__14dMenu_Insect_cFv();
extern "C" void explain_move_init__14dMenu_Insect_cFv();
extern "C" void explain_move_move__14dMenu_Insect_cFv();
extern "C" void select_move_init__14dMenu_Insect_cFv();
extern "C" void select_move_move__14dMenu_Insect_cFv();
extern "C" void explain_close_init__14dMenu_Insect_cFv();
extern "C" void explain_close_move__14dMenu_Insect_cFv();
extern "C" void screenSetBase__14dMenu_Insect_cFv();
extern "C" void screenSetExplain__14dMenu_Insect_cFv();
extern "C" void screenSetDoIcon__14dMenu_Insect_cFv();
extern "C" void getGetInsectNum__14dMenu_Insect_cFv();
extern "C" void getInsectItemID__14dMenu_Insect_cFii();
extern "C" void isGetInsect__14dMenu_Insect_cFii();
extern "C" void isGiveInsect__14dMenu_Insect_cFii();
extern "C" void isCatchInsect__14dMenu_Insect_cFUc();
extern "C" void isGiveInsect__14dMenu_Insect_cFUc();
extern "C" void isCatchNotGiveInsect__14dMenu_Insect_cFUc();
extern "C" void cursorMove__14dMenu_Insect_cFv();
extern "C" void setCursorPos__14dMenu_Insect_cFv();
extern "C" bool dpdMove__14dMenu_Insect_cFv();
extern "C" void setAButtonString__14dMenu_Insect_cFUs();
extern "C" void setBButtonString__14dMenu_Insect_cFUs();
extern "C" void setHIO__14dMenu_Insect_cFb();
extern "C" void draw__14dMenu_Insect_cFv();
extern "C" void __sinit_d_menu_insect_cpp();
extern "C" extern char const* const d_menu_d_menu_insect__stringBase0;

//
// External References:
//

extern "C" void mDoExt_setCurrentHeap__FP7JKRHeap();
extern "C" void mDoExt_getMesgFont__Fv();
extern "C" void mDoExt_getSubFont__Fv();
extern "C" void create__24mDoDvdThd_mountArchive_cFPCcUcP7JKRHeap();
extern "C" void checkTrigger__9STControlFv();
extern "C" void checkLeftTrigger__9STControlFv();
extern "C" void checkRightTrigger__9STControlFv();
extern "C" void checkUpTrigger__9STControlFv();
extern "C" void checkDownTrigger__9STControlFv();
extern "C" void isFirstBit__21dSv_player_get_item_cCFUc();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void __ct__16dSelect_cursor_cFUcfP10JKRArchive();
extern "C" void setPos__16dSelect_cursor_cFffP7J2DPaneb();
extern "C" void setParam__16dSelect_cursor_cFfffff();
extern "C" void setScale__16dSelect_cursor_cFf();
extern "C" void setAlphaRate__16dSelect_cursor_cFf();
extern "C" void getString__13dMeter2Info_cFUlPcP14JMSMesgEntry_c();
extern "C" void getStringKanji__13dMeter2Info_cFUlPcP14JMSMesgEntry_c();
extern "C" void getStringLength__13dMeter2Info_cFP7JUTFontffPc();
extern "C" void
readItemTexture__13dMeter2Info_cFUcPvP10J2DPicturePvP10J2DPicturePvP10J2DPicturePvP10J2DPicturei();
extern "C" void dMeter2Info_set2DVibration__Fv();
extern "C" void __ct__17dMsgScrn3Select_cFv();
extern "C" void isSelect__17dMsgScrn3Select_cFv();
extern "C" void setString__17dMsgScrn3Select_cFPcPcPc();
extern "C" void setRubyString__17dMsgScrn3Select_cFPcPcPc();
extern "C" void translate__17dMsgScrn3Select_cFff();
extern "C" void draw__17dMsgScrn3Select_cFff();
extern "C" void selAnimeInit__17dMsgScrn3Select_cFUcUcUcfUc();
extern "C" void selAnimeMove__17dMsgScrn3Select_cFUcUcb();
extern "C" void selAnimeEnd__17dMsgScrn3Select_cFv();
extern "C" void getTextBoxWidth__17dMsgScrn3Select_cFv();
extern "C" void getFontSize__17dMsgScrn3Select_cFv();
extern "C" void getCharSpace__17dMsgScrn3Select_cFv();
extern "C" void __ct__12dMsgString_cFv();
extern "C" void __dt__12dMsgString_cFv();
extern "C" void __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap();
extern "C" void paneTrans__8CPaneMgrFff();
extern "C" void getGlobalVtxCenter__8CPaneMgrFP7J2DPanebs();
extern "C" void dPaneClass_showNullPane__FP9J2DScreen();
extern "C" void show__13CPaneMgrAlphaFv();
extern "C" void hide__13CPaneMgrAlphaFv();
extern "C" void setAlphaRate__13CPaneMgrAlphaFf();
extern "C" void getAlphaRate__13CPaneMgrAlphaFv();
extern "C" void alphaAnime__13CPaneMgrAlphaFsUcUcUc();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void alloc__7JKRHeapFUli();
extern "C" void free__7JKRHeapFPv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void __ct__9J2DScreenFv();
extern "C" void setPriority__9J2DScreenFPCcUlP10JKRArchive();
extern "C" void draw__9J2DScreenFffPC14J2DGrafContext();
extern "C" void __ct__10J2DPictureFPC7ResTIMG();
extern "C" void getStringPtr__10J2DTextBoxCFv();
extern "C" void setString__10J2DTextBoxFsPCce();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void snprintf();
extern "C" void strcat();
extern "C" void strcpy();
extern "C" extern void* __vt__12dDlst_base_c[3];
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_drawHIO[3880];
extern "C" extern u8 g_meter2_info[248];
extern "C" u8 mFader__13mDoGph_gInf_c[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 803968C0-803968C0 022F20 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_803968C0 = "tt_block8x8.bti";
#pragma pop

/* 803BD780-803BD78C 01A8A0 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803BD78C-803BD798 -00001 000C+00 0/1 0/0 0/0 .data            @3797 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3797[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait_init__14dMenu_Insect_cFv,
};
#pragma pop

/* 803BD798-803BD7A4 -00001 000C+00 0/1 0/0 0/0 .data            @3798 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3798[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)explain_open_init__14dMenu_Insect_cFv,
};
#pragma pop

/* 803BD7A4-803BD7B0 -00001 000C+00 0/1 0/0 0/0 .data            @3799 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3799[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)explain_move_init__14dMenu_Insect_cFv,
};
#pragma pop

/* 803BD7B0-803BD7BC -00001 000C+00 0/1 0/0 0/0 .data            @3800 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3800[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)select_move_init__14dMenu_Insect_cFv,
};
#pragma pop

/* 803BD7BC-803BD7C8 -00001 000C+00 0/1 0/0 0/0 .data            @3801 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3801[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)explain_close_init__14dMenu_Insect_cFv,
};
#pragma pop

/* 803BD7C8-803BD804 01A8E8 003C+00 2/3 0/0 0/0 .data            map_init_process */
SECTION_DATA static u8 map_init_process[60] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803BD804-803BD810 -00001 000C+00 0/1 0/0 0/0 .data            @3802 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3802[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait_move__14dMenu_Insect_cFv,
};
#pragma pop

/* 803BD810-803BD81C -00001 000C+00 0/1 0/0 0/0 .data            @3803 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3803[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)explain_open_move__14dMenu_Insect_cFv,
};
#pragma pop

/* 803BD81C-803BD828 -00001 000C+00 0/1 0/0 0/0 .data            @3804 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3804[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)explain_move_move__14dMenu_Insect_cFv,
};
#pragma pop

/* 803BD828-803BD834 -00001 000C+00 0/1 0/0 0/0 .data            @3805 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3805[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)select_move_move__14dMenu_Insect_cFv,
};
#pragma pop

/* 803BD834-803BD840 -00001 000C+00 0/1 0/0 0/0 .data            @3806 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3806[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)explain_close_move__14dMenu_Insect_cFv,
};
#pragma pop

/* 803BD840-803BD87C 01A960 003C+00 1/2 0/0 0/0 .data            map_move_process */
SECTION_DATA static u8 map_move_process[60] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803BD87C-803BD894 01A99C 0018+00 1/1 0/0 0/0 .data            l_itemno$4346 */
SECTION_DATA static u8 l_itemno_4346[24] = {
    0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB,
    0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0xD5, 0xD6, 0xD7,
};

/* 803BD894-803BD8AC 01A9B4 0018+00 1/1 0/0 0/0 .data            l_itemno$4364 */
SECTION_DATA static u8 l_itemno_4364[24] = {
    0xD4, 0xD5, 0xD6, 0xD7, 0xC0, 0xC1, 0xCC, 0xCD, 0xC4, 0xC5, 0xCA, 0xCB,
    0xC2, 0xC3, 0xCE, 0xCF, 0xD0, 0xD1, 0xC8, 0xC9, 0xC6, 0xC7, 0xD2, 0xD3,
};

/* 803BD8AC-803BD8C8 01A9CC 0010+0C 2/2 0/0 0/0 .data            __vt__14dMenu_Insect_c */
SECTION_DATA extern void* __vt__14dMenu_Insect_c[4 + 3 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__14dMenu_Insect_cFv,
    (void*)__dt__14dMenu_Insect_cFv,
    /* padding */
    NULL,
    NULL,
    NULL,
};

/* 80454238-8045423C 002838 0004+00 6/6 0/0 0/0 .sdata2          @3834 */
SECTION_SDATA2 static f32 lit_3834 = 1.0f;

/* 8045423C-80454240 00283C 0004+00 1/1 0/0 0/0 .sdata2          @3835 */
SECTION_SDATA2 static f32 lit_3835 = 1.0f / 10.0f;

/* 80454240-80454244 002840 0004+00 1/1 0/0 0/0 .sdata2          @3836 */
SECTION_SDATA2 static f32 lit_3836 = 7.0f / 10.0f;

/* 80454244-80454248 002844 0004+00 5/5 0/0 0/0 .sdata2          @3837 */
SECTION_SDATA2 static u8 lit_3837[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 801D8114-801D82F4 1D2A54 01E0+00 0/0 2/2 0/0 .text
 * __ct__14dMenu_Insect_cFP10JKRExpHeapP9STControlP10CSTControlUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMenu_Insect_c::dMenu_Insect_c(JKRExpHeap* param_0, STControl* param_1, CSTControl* param_2,
                                   u8 param_3) {
    nofralloc
#include "asm/d/menu/d_menu_insect/__ct__14dMenu_Insect_cFP10JKRExpHeapP9STControlP10CSTControlUc.s"
}
#pragma pop

/* 801D82F4-801D8658 1D2C34 0364+00 1/0 0/0 0/0 .text            __dt__14dMenu_Insect_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMenu_Insect_c::~dMenu_Insect_c() {
    nofralloc
#include "asm/d/menu/d_menu_insect/__dt__14dMenu_Insect_cFv.s"
}
#pragma pop

/* 801D8658-801D86C8 1D2F98 0070+00 1/1 0/0 0/0 .text            _create__14dMenu_Insect_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::_create() {
    nofralloc
#include "asm/d/menu/d_menu_insect/_create__14dMenu_Insect_cFv.s"
}
#pragma pop

/* 801D86C8-801D8760 1D3008 0098+00 0/0 3/3 0/0 .text            _move__14dMenu_Insect_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::_move() {
    nofralloc
#include "asm/d/menu/d_menu_insect/_move__14dMenu_Insect_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454248-8045424C 002848 0004+00 1/1 0/0 0/0 .sdata2          @3961 */
SECTION_SDATA2 static f32 lit_3961 = 608.0f;

/* 8045424C-80454250 00284C 0004+00 1/1 0/0 0/0 .sdata2          @3962 */
SECTION_SDATA2 static f32 lit_3962 = 448.0f;

/* 80454250-80454254 002850 0004+00 1/1 0/0 0/0 .sdata2          @3963 */
SECTION_SDATA2 static f32 lit_3963 = 150.0f;

/* 80454254-80454258 002854 0004+00 1/1 0/0 0/0 .sdata2          @3964 */
SECTION_SDATA2 static f32 lit_3964 = 486.0f;

/* 80454258-80454260 002858 0004+04 1/1 0/0 0/0 .sdata2          @3965 */
SECTION_SDATA2 static f32 lit_3965[1 + 1 /* padding */] = {
    209.0f,
    /* padding */
    0.0f,
};

/* 801D8760-801D88EC 1D30A0 018C+00 1/1 1/1 0/0 .text            _draw__14dMenu_Insect_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::_draw() {
    nofralloc
#include "asm/d/menu/d_menu_insect/_draw__14dMenu_Insect_cFv.s"
}
#pragma pop

/* 801D88EC-801D8914 1D322C 0028+00 0/0 3/3 0/0 .text            isSync__14dMenu_Insect_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool dMenu_Insect_c::isSync() {
    nofralloc
#include "asm/d/menu/d_menu_insect/isSync__14dMenu_Insect_cFv.s"
}
#pragma pop

/* 801D8914-801D894C 1D3254 0038+00 1/1 0/0 0/0 .text            init__14dMenu_Insect_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::init() {
    nofralloc
#include "asm/d/menu/d_menu_insect/init__14dMenu_Insect_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803968C0-803968C0 022F20 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_803968D0 = "/res/Layout/insectRes.arc";
#pragma pop

/* 80454260-80454268 002860 0008+00 2/2 0/0 0/0 .sdata2          @4020 */
SECTION_SDATA2 static f64 lit_4020 = 4503601774854144.0 /* cast s32 to float */;

/* 801D894C-801D8B2C 1D328C 01E0+00 0/0 3/3 0/0 .text            _open__14dMenu_Insect_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::_open() {
    nofralloc
#include "asm/d/menu/d_menu_insect/_open__14dMenu_Insect_cFv.s"
}
#pragma pop

/* 801D8B2C-801D8C68 1D346C 013C+00 0/0 1/1 0/0 .text            _close__14dMenu_Insect_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::_close() {
    nofralloc
#include "asm/d/menu/d_menu_insect/_close__14dMenu_Insect_cFv.s"
}
#pragma pop

/* 801D8C68-801D8CCC 1D35A8 0064+00 1/0 0/0 0/0 .text            wait_init__14dMenu_Insect_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::wait_init() {
    nofralloc
#include "asm/d/menu/d_menu_insect/wait_init__14dMenu_Insect_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454268-8045426C 002868 0004+00 4/4 0/0 0/0 .sdata2          @4089 */
SECTION_SDATA2 static f32 lit_4089 = -1.0f;

/* 801D8CCC-801D8E00 1D360C 0134+00 1/0 0/0 0/0 .text            wait_move__14dMenu_Insect_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::wait_move() {
    nofralloc
#include "asm/d/menu/d_menu_insect/wait_move__14dMenu_Insect_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803968C0-803968C0 022F20 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_803968EA = ""
                                                            "\x1B"
                                                            "CR[%d]";
SECTION_DEAD static char const* const stringBase_803968F2 = "";
#pragma pop

/* 8045426C-80454270 00286C 0004+00 1/1 0/0 0/0 .sdata2          @4135 */
SECTION_SDATA2 static f32 lit_4135 = 48.0f;

/* 80454270-80454278 002870 0004+04 1/1 0/0 0/0 .sdata2          @4136 */
SECTION_SDATA2 static f32 lit_4136[1 + 1 /* padding */] = {
    0.5f,
    /* padding */
    0.0f,
};

/* 80454278-80454280 002878 0008+00 1/1 0/0 0/0 .sdata2          @4138 */
SECTION_SDATA2 static f64 lit_4138 = 4503599627370496.0 /* cast u32 to float */;

/* 801D8E00-801D91E4 1D3740 03E4+00 1/0 0/0 0/0 .text explain_open_init__14dMenu_Insect_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::explain_open_init() {
    nofralloc
#include "asm/d/menu/d_menu_insect/explain_open_init__14dMenu_Insect_cFv.s"
}
#pragma pop

/* 801D91E4-801D9264 1D3B24 0080+00 1/0 0/0 0/0 .text explain_open_move__14dMenu_Insect_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::explain_open_move() {
    nofralloc
#include "asm/d/menu/d_menu_insect/explain_open_move__14dMenu_Insect_cFv.s"
}
#pragma pop

/* 801D9264-801D9268 1D3BA4 0004+00 1/0 0/0 0/0 .text explain_move_init__14dMenu_Insect_cFv */
void dMenu_Insect_c::explain_move_init() {
    /* empty function */
}

/* 801D9268-801D9290 1D3BA8 0028+00 1/0 0/0 0/0 .text explain_move_move__14dMenu_Insect_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::explain_move_move() {
    nofralloc
#include "asm/d/menu/d_menu_insect/explain_move_move__14dMenu_Insect_cFv.s"
}
#pragma pop

/* 801D9290-801D92DC 1D3BD0 004C+00 1/0 0/0 0/0 .text select_move_init__14dMenu_Insect_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::select_move_init() {
    nofralloc
#include "asm/d/menu/d_menu_insect/select_move_init__14dMenu_Insect_cFv.s"
}
#pragma pop

/* 801D92DC-801D9504 1D3C1C 0228+00 1/0 0/0 0/0 .text select_move_move__14dMenu_Insect_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::select_move_move() {
    nofralloc
#include "asm/d/menu/d_menu_insect/select_move_move__14dMenu_Insect_cFv.s"
}
#pragma pop

/* 801D9504-801D95AC 1D3E44 00A8+00 1/0 0/0 0/0 .text explain_close_init__14dMenu_Insect_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::explain_close_init() {
    nofralloc
#include "asm/d/menu/d_menu_insect/explain_close_init__14dMenu_Insect_cFv.s"
}
#pragma pop

/* 801D95AC-801D9644 1D3EEC 0098+00 1/0 0/0 0/0 .text explain_close_move__14dMenu_Insect_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::explain_close_move() {
    nofralloc
#include "asm/d/menu/d_menu_insect/explain_close_move__14dMenu_Insect_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80396690-80396750 022CF0 00C0+00 1/1 0/0 0/0 .rodata          insect_tag$4249 */
SECTION_RODATA static u8 const insect_tag[192] = {
    0x00, 0x00, 0x61, 0x72, 0x69, 0x5F, 0x6F, 0x73, 0x00, 0x00, 0x61, 0x72, 0x69, 0x5F, 0x6D, 0x73,
    0x00, 0x00, 0x6B, 0x61, 0x67, 0x5F, 0x6F, 0x73, 0x00, 0x00, 0x6B, 0x61, 0x67, 0x5F, 0x6D, 0x73,
    0x00, 0x00, 0x6B, 0x61, 0x62, 0x5F, 0x6F, 0x73, 0x00, 0x00, 0x6B, 0x61, 0x62, 0x5F, 0x6D, 0x73,
    0x00, 0x00, 0x6B, 0x61, 0x6D, 0x5F, 0x6F, 0x73, 0x00, 0x6B, 0x61, 0x6D, 0x5F, 0x6D, 0x65, 0x73,
    0x00, 0x6B, 0x75, 0x77, 0x61, 0x5F, 0x6F, 0x73, 0x6B, 0x75, 0x77, 0x61, 0x5F, 0x6D, 0x65, 0x73,
    0x00, 0x00, 0x64, 0x61, 0x6E, 0x5F, 0x6F, 0x73, 0x00, 0x64, 0x61, 0x6E, 0x5F, 0x6D, 0x65, 0x73,
    0x00, 0x00, 0x63, 0x68, 0x6F, 0x5F, 0x6F, 0x73, 0x00, 0x00, 0x63, 0x68, 0x6F, 0x5F, 0x6D, 0x73,
    0x00, 0x74, 0x65, 0x6E, 0x74, 0x5F, 0x6F, 0x73, 0x74, 0x65, 0x6E, 0x74, 0x5F, 0x6D, 0x65, 0x73,
    0x00, 0x6B, 0x61, 0x74, 0x61, 0x5F, 0x6F, 0x73, 0x6B, 0x61, 0x74, 0x61, 0x5F, 0x6D, 0x65, 0x73,
    0x00, 0x6E, 0x61, 0x6E, 0x61, 0x5F, 0x6F, 0x73, 0x6E, 0x61, 0x6E, 0x61, 0x5F, 0x6D, 0x65, 0x73,
    0x00, 0x00, 0x62, 0x61, 0x74, 0x5F, 0x6F, 0x73, 0x00, 0x62, 0x61, 0x74, 0x5F, 0x6D, 0x65, 0x73,
    0x00, 0x74, 0x6F, 0x6E, 0x62, 0x5F, 0x6F, 0x73, 0x74, 0x6F, 0x6E, 0x62, 0x5F, 0x6D, 0x65, 0x73,
};
COMPILER_STRIP_GATE(0x80396690, &insect_tag);

/* 80396750-80396810 022DB0 00C0+00 1/1 0/0 0/0 .rodata          ageha_tag$4250 */
SECTION_RODATA static u8 const ageha_tag[192] = {
    0x00, 0x61, 0x67, 0x65, 0x68, 0x61, 0x30, 0x30, 0x00, 0x61, 0x67, 0x65, 0x68, 0x61, 0x30, 0x31,
    0x00, 0x61, 0x67, 0x65, 0x68, 0x61, 0x30, 0x32, 0x00, 0x61, 0x67, 0x65, 0x68, 0x61, 0x30, 0x33,
    0x00, 0x61, 0x67, 0x65, 0x68, 0x61, 0x30, 0x34, 0x00, 0x61, 0x67, 0x65, 0x68, 0x61, 0x30, 0x35,
    0x00, 0x61, 0x67, 0x65, 0x68, 0x61, 0x30, 0x36, 0x00, 0x61, 0x67, 0x65, 0x68, 0x61, 0x30, 0x37,
    0x00, 0x61, 0x67, 0x65, 0x68, 0x61, 0x30, 0x38, 0x00, 0x61, 0x67, 0x65, 0x68, 0x61, 0x30, 0x39,
    0x00, 0x61, 0x67, 0x65, 0x68, 0x61, 0x31, 0x30, 0x00, 0x61, 0x67, 0x65, 0x68, 0x61, 0x31, 0x31,
    0x00, 0x61, 0x67, 0x65, 0x68, 0x61, 0x31, 0x32, 0x00, 0x61, 0x67, 0x65, 0x68, 0x61, 0x31, 0x33,
    0x00, 0x61, 0x67, 0x65, 0x68, 0x61, 0x31, 0x34, 0x00, 0x61, 0x67, 0x65, 0x68, 0x61, 0x31, 0x35,
    0x00, 0x61, 0x67, 0x65, 0x68, 0x61, 0x31, 0x36, 0x00, 0x61, 0x67, 0x65, 0x68, 0x61, 0x31, 0x37,
    0x00, 0x61, 0x67, 0x65, 0x68, 0x61, 0x31, 0x38, 0x00, 0x61, 0x67, 0x65, 0x68, 0x61, 0x31, 0x39,
    0x00, 0x61, 0x67, 0x65, 0x68, 0x61, 0x32, 0x30, 0x00, 0x61, 0x67, 0x65, 0x68, 0x61, 0x32, 0x31,
    0x00, 0x61, 0x67, 0x65, 0x68, 0x61, 0x32, 0x32, 0x00, 0x61, 0x67, 0x65, 0x68, 0x61, 0x32, 0x33,
};
COMPILER_STRIP_GATE(0x80396750, &ageha_tag);

/* 803968C0-803968C0 022F20 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_803968F3 = "zelda_gold_insects.blo";
#pragma pop

/* 801D9644-801D98F0 1D3F84 02AC+00 1/1 0/0 0/0 .text            screenSetBase__14dMenu_Insect_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::screenSetBase() {
    nofralloc
#include "asm/d/menu/d_menu_insect/screenSetBase__14dMenu_Insect_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803968C0-803968C0 022F20 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039690A = "zelda_gold_insects_info.blo";
#pragma pop

/* 801D98F0-801D9BD0 1D4230 02E0+00 1/1 0/0 0/0 .text screenSetExplain__14dMenu_Insect_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::screenSetExplain() {
    nofralloc
#include "asm/d/menu/d_menu_insect/screenSetExplain__14dMenu_Insect_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80396810-80396838 022E70 0028+00 1/1 0/0 0/0 .rodata          text_a_tag$4328 */
SECTION_RODATA static u8 const text_a_tag[40] = {
    0x61, 0x74, 0x65, 0x78, 0x74, 0x31, 0x5F, 0x31, 0x61, 0x74, 0x65, 0x78, 0x74, 0x31,
    0x5F, 0x32, 0x61, 0x74, 0x65, 0x78, 0x74, 0x31, 0x5F, 0x33, 0x61, 0x74, 0x65, 0x78,
    0x74, 0x31, 0x5F, 0x34, 0x61, 0x74, 0x65, 0x78, 0x74, 0x31, 0x5F, 0x35,
};
COMPILER_STRIP_GATE(0x80396810, &text_a_tag);

/* 80396838-80396860 022E98 0028+00 1/1 0/0 0/0 .rodata          text_b_tag$4329 */
SECTION_RODATA static u8 const text_b_tag[40] = {
    0x62, 0x74, 0x65, 0x78, 0x74, 0x31, 0x5F, 0x31, 0x62, 0x74, 0x65, 0x78, 0x74, 0x31,
    0x5F, 0x32, 0x62, 0x74, 0x65, 0x78, 0x74, 0x31, 0x5F, 0x33, 0x62, 0x74, 0x65, 0x78,
    0x74, 0x31, 0x5F, 0x34, 0x62, 0x74, 0x65, 0x78, 0x74, 0x31, 0x5F, 0x35,
};
COMPILER_STRIP_GATE(0x80396838, &text_b_tag);

/* 803968C0-803968C0 022F20 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80396926 = "zelda_collect_soubi_do_icon_parts.blo";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_8039694C = "\0\0\0";
#pragma pop

/* 801D9BD0-801D9D4C 1D4510 017C+00 1/1 0/0 0/0 .text            screenSetDoIcon__14dMenu_Insect_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::screenSetDoIcon() {
    nofralloc
#include "asm/d/menu/d_menu_insect/screenSetDoIcon__14dMenu_Insect_cFv.s"
}
#pragma pop

/* 801D9D4C-801D9DCC 1D468C 0080+00 0/0 1/1 0/0 .text            getGetInsectNum__14dMenu_Insect_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::getGetInsectNum() {
    nofralloc
#include "asm/d/menu/d_menu_insect/getGetInsectNum__14dMenu_Insect_cFv.s"
}
#pragma pop

/* 801D9DCC-801D9DE4 1D470C 0018+00 3/3 0/0 0/0 .text getInsectItemID__14dMenu_Insect_cFii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::getInsectItemID(int param_0, int param_1) {
    nofralloc
#include "asm/d/menu/d_menu_insect/getInsectItemID__14dMenu_Insect_cFii.s"
}
#pragma pop

/* 801D9DE4-801D9E20 1D4724 003C+00 4/4 0/0 0/0 .text            isGetInsect__14dMenu_Insect_cFii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::isGetInsect(int param_0, int param_1) {
    nofralloc
#include "asm/d/menu/d_menu_insect/isGetInsect__14dMenu_Insect_cFii.s"
}
#pragma pop

/* ############################################################################################## */
/* 80396860-803968C0 022EC0 0060+00 1/1 0/0 0/0 .rodata          i_evtID$4383 */
SECTION_RODATA static u8 const i_evtID[96] = {
    0x00, 0x00, 0x01, 0xA5, 0x00, 0x00, 0x01, 0xA6, 0x00, 0x00, 0x01, 0xA7, 0x00, 0x00, 0x01, 0xA8,
    0x00, 0x00, 0x01, 0x91, 0x00, 0x00, 0x01, 0x92, 0x00, 0x00, 0x01, 0x9D, 0x00, 0x00, 0x01, 0x9E,
    0x00, 0x00, 0x01, 0x95, 0x00, 0x00, 0x01, 0x96, 0x00, 0x00, 0x01, 0x9B, 0x00, 0x00, 0x01, 0x9C,
    0x00, 0x00, 0x01, 0x93, 0x00, 0x00, 0x01, 0x94, 0x00, 0x00, 0x01, 0x9F, 0x00, 0x00, 0x01, 0xA0,
    0x00, 0x00, 0x01, 0xA1, 0x00, 0x00, 0x01, 0xA2, 0x00, 0x00, 0x01, 0x99, 0x00, 0x00, 0x01, 0x9A,
    0x00, 0x00, 0x01, 0x97, 0x00, 0x00, 0x01, 0x98, 0x00, 0x00, 0x01, 0xA3, 0x00, 0x00, 0x01, 0xA4,
};
COMPILER_STRIP_GATE(0x80396860, &i_evtID);

/* 801D9E20-801D9E7C 1D4760 005C+00 4/4 0/0 0/0 .text            isGiveInsect__14dMenu_Insect_cFii
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::isGiveInsect(int param_0, int param_1) {
    nofralloc
#include "asm/d/menu/d_menu_insect/isGiveInsect__14dMenu_Insect_cFii.s"
}
#pragma pop

/* 801D9E7C-801D9ED4 1D47BC 0058+00 1/1 0/0 0/0 .text            isCatchInsect__14dMenu_Insect_cFUc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::isCatchInsect(u8 param_0) {
    nofralloc
#include "asm/d/menu/d_menu_insect/isCatchInsect__14dMenu_Insect_cFUc.s"
}
#pragma pop

/* 801D9ED4-801D9F3C 1D4814 0068+00 1/1 0/0 0/0 .text            isGiveInsect__14dMenu_Insect_cFUc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::isGiveInsect(u8 param_0) {
    nofralloc
#include "asm/d/menu/d_menu_insect/isGiveInsect__14dMenu_Insect_cFUc.s"
}
#pragma pop

/* 801D9F3C-801D9F8C 1D487C 0050+00 0/0 1/1 12/12 .text isCatchNotGiveInsect__14dMenu_Insect_cFUc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::isCatchNotGiveInsect(u8 param_0) {
    nofralloc
#include "asm/d/menu/d_menu_insect/isCatchNotGiveInsect__14dMenu_Insect_cFUc.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454280-80454288 002880 0004+04 1/1 0/0 0/0 .sdata2          @4474 */
SECTION_SDATA2 static f32 lit_4474[1 + 1 /* padding */] = {
    0.75f,
    /* padding */
    0.0f,
};

/* 801D9F8C-801DA1EC 1D48CC 0260+00 1/1 0/0 0/0 .text            cursorMove__14dMenu_Insect_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::cursorMove() {
    nofralloc
#include "asm/d/menu/d_menu_insect/cursorMove__14dMenu_Insect_cFv.s"
}
#pragma pop

/* 801DA1EC-801DA2FC 1D4B2C 0110+00 3/3 0/0 0/0 .text            setCursorPos__14dMenu_Insect_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::setCursorPos() {
    nofralloc
#include "asm/d/menu/d_menu_insect/setCursorPos__14dMenu_Insect_cFv.s"
}
#pragma pop

/* 801DA2FC-801DA304 1D4C3C 0008+00 1/1 0/0 0/0 .text            dpdMove__14dMenu_Insect_cFv */
bool dMenu_Insect_c::dpdMove() {
    return false;
}

/* 801DA304-801DA3B4 1D4C44 00B0+00 5/5 0/0 0/0 .text setAButtonString__14dMenu_Insect_cFUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::setAButtonString(u16 param_0) {
    nofralloc
#include "asm/d/menu/d_menu_insect/setAButtonString__14dMenu_Insect_cFUs.s"
}
#pragma pop

/* 801DA3B4-801DA464 1D4CF4 00B0+00 4/4 0/0 0/0 .text setBButtonString__14dMenu_Insect_cFUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::setBButtonString(u16 param_0) {
    nofralloc
#include "asm/d/menu/d_menu_insect/setBButtonString__14dMenu_Insect_cFUs.s"
}
#pragma pop

/* 801DA464-801DA630 1D4DA4 01CC+00 2/2 0/0 0/0 .text            setHIO__14dMenu_Insect_cFb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Insect_c::setHIO(bool param_0) {
    nofralloc
#include "asm/d/menu/d_menu_insect/setHIO__14dMenu_Insect_cFb.s"
}
#pragma pop

/* 801DA630-801DA650 1D4F70 0020+00 1/0 0/0 0/0 .text            draw__14dMenu_Insect_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void dMenu_Insect_c::draw() {
extern "C" asm void draw__14dMenu_Insect_cFv() {
    nofralloc
#include "asm/d/menu/d_menu_insect/draw__14dMenu_Insect_cFv.s"
}
#pragma pop

/* 801DA650-801DA754 1D4F90 0104+00 0/0 1/0 0/0 .text            __sinit_d_menu_insect_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_menu_insect_cpp() {
    nofralloc
#include "asm/d/menu/d_menu_insect/__sinit_d_menu_insect_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x801DA650, __sinit_d_menu_insect_cpp);
#pragma pop

/* 803968C0-803968C0 022F20 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
