//
// Generated By: dol2asm
// Translation Unit: d/menu/d_menu_fishing
//

#include "d/menu/d_menu_fishing.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JKRHeap {};

struct mDoDvdThd_mountArchive_c {
    /* 80015E14 */ void create(char const*, u8, JKRHeap*);
};

struct dMsgString_c {
    /* 80249C20 */ dMsgString_c();
    /* 80249D28 */ ~dMsgString_c();
};

struct JMSMesgEntry_c {};

struct dMeter2Info_c {
    /* 8021C544 */ void getStringKanji(u32, char*, JMSMesgEntry_c*);
};

struct JKRExpHeap {};

struct STControl {};

struct CSTControl {};

struct dMenu_Fishing_c {
    /* 801C4D54 */ dMenu_Fishing_c(JKRExpHeap*, STControl*, CSTControl*);
    /* 801C4D98 */ ~dMenu_Fishing_c();
    /* 801C504C */ void _create();
    /* 801C50B4 */ void _move();
    /* 801C514C */ void _draw();
    /* 801C5204 */ void isSync();
    /* 801C522C */ void init();
    /* 801C52E4 */ void _open();
    /* 801C5470 */ void _close();
    /* 801C556C */ void wait_init();
    /* 801C55A8 */ void wait_move();
    /* 801C55D8 */ void screenSetBase();
    /* 801C5D3C */ void screenSetDoIcon();
    /* 801C5EB8 */ void setAButtonString(u16);
    /* 801C5F68 */ void setBButtonString(u16);
    /* 801C6018 */ void getFigure(int);
    /* 801C605C */ void setFishParam(int, u16, u8);
    /* 801C6210 */ void setHIO(bool);
    /* 801C659C */ void draw();
};

struct ResTIMG {};

struct JKRArchive {};

struct J2DTextBox {
    /* 80300658 */ void getStringPtr() const;
    /* 8030074C */ void setString(s16, char const*, ...);
};

struct J2DGrafContext {};

struct J2DScreen {
    /* 802F8498 */ J2DScreen();
    /* 802F8648 */ void setPriority(char const*, u32, JKRArchive*);
    /* 802F8ED4 */ void draw(f32, f32, J2DGrafContext const*);
};

struct J2DPicture {
    /* 802FC708 */ J2DPicture(ResTIMG const*);
};

struct CPaneMgrAlpha {
    /* 802555C8 */ void show();
    /* 80255608 */ void hide();
    /* 802557D0 */ void setAlphaRate(f32);
};

struct CPaneMgr {
    /* 80253984 */ CPaneMgr(J2DScreen*, u64, u8, JKRExpHeap*);
    /* 802545B0 */ void paneTrans(f32, f32);
};

//
// Forward References:
//

extern "C" void __ct__15dMenu_Fishing_cFP10JKRExpHeapP9STControlP10CSTControl();
extern "C" void __dt__15dMenu_Fishing_cFv();
extern "C" void _create__15dMenu_Fishing_cFv();
extern "C" void _move__15dMenu_Fishing_cFv();
extern "C" void _draw__15dMenu_Fishing_cFv();
extern "C" void isSync__15dMenu_Fishing_cFv();
extern "C" void init__15dMenu_Fishing_cFv();
extern "C" void _open__15dMenu_Fishing_cFv();
extern "C" void _close__15dMenu_Fishing_cFv();
extern "C" void wait_init__15dMenu_Fishing_cFv();
extern "C" void wait_move__15dMenu_Fishing_cFv();
extern "C" void screenSetBase__15dMenu_Fishing_cFv();
extern "C" void screenSetDoIcon__15dMenu_Fishing_cFv();
extern "C" void setAButtonString__15dMenu_Fishing_cFUs();
extern "C" void setBButtonString__15dMenu_Fishing_cFUs();
extern "C" void getFigure__15dMenu_Fishing_cFi();
extern "C" void setFishParam__15dMenu_Fishing_cFiUsUc();
extern "C" void setHIO__15dMenu_Fishing_cFb();
extern "C" void draw__15dMenu_Fishing_cFv();
extern "C" void __sinit_d_menu_fishing_cpp();
extern "C" extern u8 const data_80395DC0[48];
extern "C" extern u8 const data_80395DF0[48];
extern "C" extern u8 const data_80395E20[48];
extern "C" extern u8 const data_80395E50[48];
extern "C" extern u8 const data_80395E80[48];
extern "C" extern u8 const data_80395EB0[48];
extern "C" extern u8 const data_80395EE0[48];
extern "C" extern u8 const data_80395F10[48];
extern "C" extern u8 const data_80395F40[48];
extern "C" extern u8 const data_80395F70[48];
extern "C" extern u8 const data_80395FA0[48];
extern "C" extern u8 const data_80395FD0[48];
extern "C" extern u8 const data_80396000[24];
extern "C" extern char const* const d_menu_d_menu_fishing__stringBase0;
extern "C" extern void* lit_3790[3];
extern "C" extern void* lit_3791[3];
extern "C" extern void* __vt__15dMenu_Fishing_c[4 + 3 /* padding */];

//
// External References:
//

void mDoExt_setCurrentHeap(JKRHeap*);
void mDoExt_getMesgFont();
void mDoExt_getSubFont();
void dPaneClass_showNullPane(J2DScreen*);
void* operator new(u32);
void operator delete(void*);

extern "C" void mDoExt_setCurrentHeap__FP7JKRHeap();
extern "C" void mDoExt_getMesgFont__Fv();
extern "C" void mDoExt_getSubFont__Fv();
extern "C" void create__24mDoDvdThd_mountArchive_cFPCcUcP7JKRHeap();
extern "C" void getStringKanji__13dMeter2Info_cFUlPcP14JMSMesgEntry_c();
extern "C" void __ct__12dMsgString_cFv();
extern "C" void __dt__12dMsgString_cFv();
extern "C" void __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap();
extern "C" void paneTrans__8CPaneMgrFff();
extern "C" void dPaneClass_showNullPane__FP9J2DScreen();
extern "C" void show__13CPaneMgrAlphaFv();
extern "C" void hide__13CPaneMgrAlphaFv();
extern "C" void setAlphaRate__13CPaneMgrAlphaFf();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void __ct__9J2DScreenFv();
extern "C" void setPriority__9J2DScreenFPCcUlP10JKRArchive();
extern "C" void draw__9J2DScreenFffPC14J2DGrafContext();
extern "C" void __ct__10J2DPictureFPC7ResTIMG();
extern "C" void getStringPtr__10J2DTextBoxCFv();
extern "C" void setString__10J2DTextBoxFsPCce();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_18();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_18();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void strcpy();
extern "C" extern void* __vt__12dDlst_base_c[3];
extern "C" extern u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_drawHIO[3880];
extern "C" extern u8 g_meter2_info[248];
extern "C" extern u8 mFader__13mDoGph_gInf_c[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 803BD038-803BD044 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803BD044-803BD050 000C+00 s=0 e=0 z=0  None .data      @3790 */
SECTION_DATA void* lit_3790[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait_init__15dMenu_Fishing_cFv,
};

/* 803BD050-803BD05C 000C+00 s=2 e=0 z=0  None .data      map_init_process */
SECTION_DATA static u8 map_init_process[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803BD05C-803BD068 000C+00 s=0 e=0 z=0  None .data      @3791 */
SECTION_DATA void* lit_3791[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait_move__15dMenu_Fishing_cFv,
};

/* 803BD068-803BD074 000C+00 s=1 e=0 z=0  None .data      map_move_process */
SECTION_DATA static u8 map_move_process[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803BD074-803BD090 0010+0C s=2 e=0 z=0  None .data      __vt__15dMenu_Fishing_c */
SECTION_DATA void* __vt__15dMenu_Fishing_c[4 + 3 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__15dMenu_Fishing_cFv,
    (void*)__dt__15dMenu_Fishing_cFv,
    /* padding */
    NULL,
    NULL,
    NULL,
};

/* 801C4D54-801C4D98 0044+00 s=0 e=2 z=0  None .text
 * __ct__15dMenu_Fishing_cFP10JKRExpHeapP9STControlP10CSTControl */
//	801C4D54: 803A6F88 (__vt__12dDlst_base_c)
//	801C4D58: 803A6F88 (__vt__12dDlst_base_c)
//	801C4D60: 803BD074 (__vt__15dMenu_Fishing_c)
//	801C4D64: 803BD074 (__vt__15dMenu_Fishing_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMenu_Fishing_c::dMenu_Fishing_c(JKRExpHeap* param_0, STControl* param_1, CSTControl* param_2) {
    nofralloc
#include "asm/d/menu/d_menu_fishing/__ct__15dMenu_Fishing_cFP10JKRExpHeapP9STControlP10CSTControl.s"
}
#pragma pop

/* 801C4D98-801C504C 02B4+00 s=1 e=0 z=0  None .text      __dt__15dMenu_Fishing_cFv */
//	801C4DA8: 803621C4 (_savegpr_23)
//	801C4DB8: 803BD074 (__vt__15dMenu_Fishing_c)
//	801C4DBC: 803BD074 (__vt__15dMenu_Fishing_c)
//	801C4DCC: 80249D28 (__dt__12dMsgString_cFv)
//	801C502C: 802CED3C (__dl__FPv)
//	801C5038: 80362210 (_restgpr_23)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMenu_Fishing_c::~dMenu_Fishing_c() {
    nofralloc
#include "asm/d/menu/d_menu_fishing/__dt__15dMenu_Fishing_cFv.s"
}
#pragma pop

/* 801C504C-801C50B4 0068+00 s=1 e=0 z=0  None .text      _create__15dMenu_Fishing_cFv */
//	801C5064: 802CEC4C (__nw__FUl)
//	801C5070: 80249C20 (__ct__12dMsgString_cFv)
//	801C5080: 801C55D8 (screenSetBase__15dMenu_Fishing_cFv)
//	801C5088: 801C5D3C (screenSetDoIcon__15dMenu_Fishing_cFv)
//	801C5094: 801C6210 (setHIO__15dMenu_Fishing_cFb)
//	801C509C: 801C522C (init__15dMenu_Fishing_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Fishing_c::_create() {
    nofralloc
#include "asm/d/menu/d_menu_fishing/_create__15dMenu_Fishing_cFv.s"
}
#pragma pop

/* 801C50B4-801C514C 0098+00 s=0 e=2 z=0  None .text      _move__15dMenu_Fishing_cFv */
//	801C50C4: 803621DC (_savegpr_29)
//	801C50D0: 8000F1CC (mDoExt_setCurrentHeap__FP7JKRHeap)
//	801C50E4: 803BD068 (map_move_process)
//	801C50E8: 803BD068 (map_move_process)
//	801C50F0: 80362084 (__ptmf_scall)
//	801C510C: 803BD050 (map_init_process)
//	801C5110: 803BD050 (map_init_process)
//	801C5118: 80362084 (__ptmf_scall)
//	801C5128: 801C6210 (setHIO__15dMenu_Fishing_cFb)
//	801C5130: 8000F1CC (mDoExt_setCurrentHeap__FP7JKRHeap)
//	801C5138: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Fishing_c::_move() {
    nofralloc
#include "asm/d/menu/d_menu_fishing/_move__15dMenu_Fishing_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454108-8045410C 0004+00 s=3 e=0 z=0  None .sdata2    @3904 */
SECTION_SDATA2 static u8 lit_3904[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8045410C-80454110 0004+00 s=1 e=0 z=0  None .sdata2    @3905 */
SECTION_SDATA2 static f32 lit_3905 = 608.0f;

/* 80454110-80454114 0004+00 s=1 e=0 z=0  None .sdata2    @3906 */
SECTION_SDATA2 static f32 lit_3906 = 448.0f;

/* 801C514C-801C5204 00B8+00 s=1 e=1 z=0  None .text      _draw__15dMenu_Fishing_cFv */
//	801C5170: 804061C0 (g_dComIfG_gameInfo)
//	801C5174: 804061C0 (g_dComIfG_gameInfo)
//	801C5198: 80454108 (lit_3904)
//	801C51A0: 8045410C (lit_3905)
//	801C51A4: 80454110 (lit_3906)
//	801C51C8: 80454108 (lit_3904)
//	801C51D4: 802F8ED4 (draw__9J2DScreenFffPC14J2DGrafContext)
//	801C51DC: 80454108 (lit_3904)
//	801C51E8: 802F8ED4 (draw__9J2DScreenFffPC14J2DGrafContext)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Fishing_c::_draw() {
    nofralloc
#include "asm/d/menu/d_menu_fishing/_draw__15dMenu_Fishing_cFv.s"
}
#pragma pop

/* 801C5204-801C522C 0028+00 s=0 e=2 z=0  None .text      isSync__15dMenu_Fishing_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Fishing_c::isSync() {
    nofralloc
#include "asm/d/menu/d_menu_fishing/isSync__15dMenu_Fishing_cFv.s"
}
#pragma pop

/* 801C522C-801C52E4 00B8+00 s=1 e=0 z=0  None .text      init__15dMenu_Fishing_cFv */
//	801C523C: 803621D8 (_savegpr_28)
//	801C524C: 804061C0 (g_dComIfG_gameInfo)
//	801C5250: 804061C0 (g_dComIfG_gameInfo)
//	801C527C: 801C605C (setFishParam__15dMenu_Fishing_cFiUsUc)
//	801C5288: 802555C8 (show__13CPaneMgrAlphaFv)
//	801C5298: 80255608 (hide__13CPaneMgrAlphaFv)
//	801C52B8: 803BD050 (map_init_process)
//	801C52BC: 803BD050 (map_init_process)
//	801C52C4: 80362084 (__ptmf_scall)
//	801C52D0: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Fishing_c::init() {
    nofralloc
#include "asm/d/menu/d_menu_fishing/init__15dMenu_Fishing_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80395D90-80395DC0 0030+00 s=1 e=0 z=0  None .rodata    fish_n$4060 */
SECTION_RODATA static u8 const fish_n[48] = {
    0x66, 0x69, 0x73, 0x68, 0x5F, 0x6E, 0x5F, 0x36, 0x66, 0x69, 0x73, 0x68, 0x5F, 0x6E, 0x5F, 0x35,
    0x66, 0x69, 0x73, 0x68, 0x5F, 0x6E, 0x5F, 0x33, 0x66, 0x69, 0x73, 0x68, 0x5F, 0x6E, 0x5F, 0x31,
    0x66, 0x69, 0x73, 0x68, 0x5F, 0x6E, 0x5F, 0x32, 0x66, 0x69, 0x73, 0x68, 0x5F, 0x6E, 0x5F, 0x34,
};

/* 80395DC0-80395DF0 0030+00 s=0 e=0 z=0  None .rodata    fish_p0$4061 */
SECTION_RODATA u8 const data_80395DC0[48] = {
    0x66, 0x69, 0x5F, 0x70, 0x61, 0x5F, 0x36, 0x6E, 0x66, 0x69, 0x5F, 0x70, 0x61, 0x5F, 0x35, 0x6E,
    0x66, 0x69, 0x5F, 0x70, 0x61, 0x5F, 0x33, 0x6E, 0x66, 0x69, 0x5F, 0x70, 0x61, 0x5F, 0x31, 0x6E,
    0x66, 0x69, 0x5F, 0x70, 0x61, 0x5F, 0x32, 0x6E, 0x66, 0x69, 0x5F, 0x70, 0x61, 0x5F, 0x34, 0x6E,
};

/* 80395DF0-80395E20 0030+00 s=0 e=0 z=0  None .rodata    fish_p1$4062 */
SECTION_RODATA u8 const data_80395DF0[48] = {
    0x66, 0x69, 0x5F, 0x6E, 0x61, 0x5F, 0x36, 0x6E, 0x66, 0x69, 0x5F, 0x6E, 0x61, 0x5F, 0x35, 0x6E,
    0x66, 0x69, 0x5F, 0x6E, 0x61, 0x5F, 0x33, 0x6E, 0x66, 0x69, 0x5F, 0x6E, 0x61, 0x5F, 0x31, 0x6E,
    0x66, 0x69, 0x5F, 0x6E, 0x61, 0x5F, 0x32, 0x6E, 0x66, 0x69, 0x5F, 0x6E, 0x61, 0x5F, 0x34, 0x6E,
};

/* 80395E20-80395E50 0030+00 s=0 e=0 z=0  None .rodata    fish_p2$4063 */
SECTION_RODATA u8 const data_80395E20[48] = {
    0x66, 0x69, 0x5F, 0x6C, 0x69, 0x5F, 0x36, 0x6E, 0x66, 0x69, 0x5F, 0x6C, 0x69, 0x5F, 0x35, 0x6E,
    0x66, 0x69, 0x5F, 0x6C, 0x69, 0x5F, 0x33, 0x6E, 0x66, 0x69, 0x5F, 0x6C, 0x69, 0x5F, 0x31, 0x6E,
    0x66, 0x69, 0x5F, 0x6C, 0x69, 0x5F, 0x32, 0x6E, 0x66, 0x69, 0x5F, 0x6C, 0x69, 0x5F, 0x34, 0x6E,
};

/* 80395E50-80395E80 0030+00 s=0 e=0 z=0  None .rodata    fish_p3$4064 */
SECTION_RODATA u8 const data_80395E50[48] = {
    0x62, 0x5F, 0x62, 0x6F, 0x78, 0x5F, 0x36, 0x6E, 0x62, 0x5F, 0x62, 0x6F, 0x78, 0x5F, 0x35, 0x6E,
    0x62, 0x5F, 0x62, 0x6F, 0x78, 0x5F, 0x33, 0x6E, 0x62, 0x5F, 0x62, 0x6F, 0x78, 0x5F, 0x31, 0x6E,
    0x62, 0x5F, 0x62, 0x6F, 0x78, 0x5F, 0x32, 0x6E, 0x62, 0x5F, 0x62, 0x6F, 0x78, 0x5F, 0x34, 0x6E,
};

/* 80395E80-80395EB0 0030+00 s=0 e=0 z=0  None .rodata    fish_p4$4065 */
SECTION_RODATA u8 const data_80395E80[48] = {
    0x72, 0x5F, 0x62, 0x6F, 0x78, 0x5F, 0x36, 0x6E, 0x72, 0x5F, 0x62, 0x6F, 0x78, 0x5F, 0x35, 0x6E,
    0x72, 0x5F, 0x62, 0x6F, 0x78, 0x5F, 0x33, 0x6E, 0x72, 0x5F, 0x62, 0x6F, 0x78, 0x5F, 0x31, 0x6E,
    0x72, 0x5F, 0x62, 0x6F, 0x78, 0x5F, 0x32, 0x6E, 0x72, 0x5F, 0x62, 0x6F, 0x78, 0x5F, 0x34, 0x6E,
};

/* 80395EB0-80395EE0 0030+00 s=0 e=0 z=0  None .rodata    fish_p5$4066 */
SECTION_RODATA u8 const data_80395EB0[48] = {
    0x69, 0x6E, 0x66, 0x6F, 0x5F, 0x36, 0x5F, 0x6E, 0x69, 0x6E, 0x66, 0x6F, 0x5F, 0x35, 0x5F, 0x6E,
    0x69, 0x6E, 0x66, 0x6F, 0x5F, 0x33, 0x5F, 0x6E, 0x69, 0x6E, 0x66, 0x6F, 0x5F, 0x31, 0x5F, 0x6E,
    0x69, 0x6E, 0x66, 0x6F, 0x5F, 0x32, 0x5F, 0x6E, 0x69, 0x6E, 0x66, 0x6F, 0x5F, 0x34, 0x5F, 0x6E,
};

/* 80395EE0-80395F10 0030+00 s=0 e=0 z=0  None .rodata    size_1$4081 */
SECTION_RODATA u8 const data_80395EE0[48] = {
    0x73, 0x69, 0x7A, 0x65, 0x5F, 0x74, 0x5F, 0x36, 0x73, 0x69, 0x7A, 0x65, 0x5F, 0x74, 0x5F, 0x35,
    0x73, 0x69, 0x7A, 0x65, 0x5F, 0x74, 0x5F, 0x33, 0x73, 0x69, 0x7A, 0x65, 0x5F, 0x74, 0x5F, 0x31,
    0x73, 0x69, 0x7A, 0x65, 0x5F, 0x74, 0x5F, 0x32, 0x73, 0x69, 0x7A, 0x65, 0x5F, 0x74, 0x5F, 0x34,
};

/* 80395F10-80395F40 0030+00 s=0 e=0 z=0  None .rodata    size_unit_1$4082 */
SECTION_RODATA u8 const data_80395F10[48] = {
    0x00, 0x00, 0x63, 0x6D, 0x5F, 0x74, 0x5F, 0x36, 0x00, 0x00, 0x63, 0x6D, 0x5F, 0x74, 0x5F, 0x35,
    0x00, 0x00, 0x63, 0x6D, 0x5F, 0x74, 0x5F, 0x33, 0x00, 0x00, 0x63, 0x6D, 0x5F, 0x74, 0x5F, 0x31,
    0x00, 0x00, 0x63, 0x6D, 0x5F, 0x74, 0x5F, 0x32, 0x00, 0x00, 0x63, 0x6D, 0x5F, 0x74, 0x5F, 0x34,
};

/* 80395F40-80395F70 0030+00 s=0 e=0 z=0  None .rodata    count_1$4083 */
SECTION_RODATA u8 const data_80395F40[48] = {
    0x63, 0x6F, 0x75, 0x6E, 0x74, 0x5F, 0x74, 0x36, 0x63, 0x6F, 0x75, 0x6E, 0x74, 0x5F, 0x74, 0x35,
    0x63, 0x6F, 0x75, 0x6E, 0x74, 0x5F, 0x74, 0x33, 0x63, 0x6F, 0x75, 0x6E, 0x74, 0x5F, 0x74, 0x31,
    0x63, 0x6F, 0x75, 0x6E, 0x74, 0x5F, 0x74, 0x32, 0x63, 0x6F, 0x75, 0x6E, 0x74, 0x5F, 0x74, 0x34,
};

/* 80395F70-80395FA0 0030+00 s=0 e=0 z=0  None .rodata    count_unit_1$4084 */
SECTION_RODATA u8 const data_80395F70[48] = {
    0x00, 0x63, 0x6F, 0x75, 0x5F, 0x74, 0x5F, 0x36, 0x00, 0x63, 0x6F, 0x75, 0x5F, 0x74, 0x5F, 0x35,
    0x00, 0x63, 0x6F, 0x75, 0x5F, 0x74, 0x5F, 0x33, 0x00, 0x63, 0x6F, 0x75, 0x5F, 0x74, 0x5F, 0x31,
    0x00, 0x63, 0x6F, 0x75, 0x5F, 0x74, 0x5F, 0x32, 0x00, 0x63, 0x6F, 0x75, 0x5F, 0x74, 0x5F, 0x34,
};

/* 80395FA0-80395FD0 0030+00 s=0 e=0 z=0  None .rodata    name_0$4085 */
SECTION_RODATA u8 const data_80395FA0[48] = {
    0x00, 0x00, 0x6E, 0x61, 0x6D, 0x65, 0x5F, 0x36, 0x00, 0x00, 0x6E, 0x61, 0x6D, 0x65, 0x5F, 0x35,
    0x00, 0x00, 0x6E, 0x61, 0x6D, 0x65, 0x5F, 0x33, 0x00, 0x00, 0x6E, 0x61, 0x6D, 0x65, 0x5F, 0x31,
    0x00, 0x00, 0x6E, 0x61, 0x6D, 0x65, 0x5F, 0x32, 0x00, 0x00, 0x6E, 0x61, 0x6D, 0x65, 0x5F, 0x34,
};

/* 80395FD0-80396000 0030+00 s=0 e=0 z=0  None .rodata    fname_0$4086 */
SECTION_RODATA u8 const data_80395FD0[48] = {
    0x66, 0x5F, 0x6E, 0x61, 0x6D, 0x65, 0x5F, 0x36, 0x66, 0x5F, 0x6E, 0x61, 0x6D, 0x65, 0x5F, 0x35,
    0x66, 0x5F, 0x6E, 0x61, 0x6D, 0x65, 0x5F, 0x33, 0x66, 0x5F, 0x6E, 0x61, 0x6D, 0x65, 0x5F, 0x31,
    0x66, 0x5F, 0x6E, 0x61, 0x6D, 0x65, 0x5F, 0x32, 0x66, 0x5F, 0x6E, 0x61, 0x6D, 0x65, 0x5F, 0x34,
};

/* 80396000-80396018 0018+00 s=0 e=0 z=0  None .rodata    name_id$4087 */
SECTION_RODATA u8 const data_80396000[24] = {
    0x00, 0x00, 0x05, 0x9E, 0x00, 0x00, 0x05, 0x9D, 0x00, 0x00, 0x05, 0x9B,
    0x00, 0x00, 0x05, 0x99, 0x00, 0x00, 0x05, 0x9A, 0x00, 0x00, 0x05, 0x9C,
};

/* 80396018-80396040 0028+00 s=1 e=0 z=0  None .rodata    text_a_tag$4167 */
SECTION_RODATA static u8 const text_a_tag[40] = {
    0x61, 0x74, 0x65, 0x78, 0x74, 0x31, 0x5F, 0x31, 0x61, 0x74, 0x65, 0x78, 0x74, 0x31,
    0x5F, 0x32, 0x61, 0x74, 0x65, 0x78, 0x74, 0x31, 0x5F, 0x33, 0x61, 0x74, 0x65, 0x78,
    0x74, 0x31, 0x5F, 0x34, 0x61, 0x74, 0x65, 0x78, 0x74, 0x31, 0x5F, 0x35,
};

/* 80396040-80396068 0028+00 s=1 e=0 z=0  None .rodata    text_b_tag$4168 */
SECTION_RODATA static u8 const text_b_tag[40] = {
    0x62, 0x74, 0x65, 0x78, 0x74, 0x31, 0x5F, 0x31, 0x62, 0x74, 0x65, 0x78, 0x74, 0x31,
    0x5F, 0x32, 0x62, 0x74, 0x65, 0x78, 0x74, 0x31, 0x5F, 0x33, 0x62, 0x74, 0x65, 0x78,
    0x74, 0x31, 0x5F, 0x34, 0x62, 0x74, 0x65, 0x78, 0x74, 0x31, 0x5F, 0x35,
};

/* 80396068-803960D0 0065+03 s=5 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80396068 = "/res/Layout/fishres.arc";
SECTION_DEAD char const* const stringBase_80396080 = "tt_block8x8.bti";
SECTION_DEAD char const* const stringBase_80396090 = "zelda_fish_window.blo";
SECTION_DEAD char const* const stringBase_803960A6 = "";
SECTION_DEAD char const* const stringBase_803960A7 = "zelda_collect_soubi_do_icon_parts.blo";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_803960CD = "\0\0";
#pragma pop

/* 80454114-80454118 0004+00 s=1 e=0 z=0  None .sdata2    @4010 */
SECTION_SDATA2 static f32 lit_4010 = 1.0f;

/* 80454118-80454120 0008+00 s=2 e=0 z=0  None .sdata2    @4012 */
SECTION_SDATA2 static f64 lit_4012 = 4503601774854144.0 /* cast s32 to float */;

/* 801C52E4-801C5470 018C+00 s=0 e=2 z=0  None .text      _open__15dMenu_Fishing_cFv */
//	801C530C: 80396068 (d_menu_d_menu_fishing__stringBase0)
//	801C5310: 80396068 (d_menu_d_menu_fishing__stringBase0)
//	801C531C: 80015E14 (create__24mDoDvdThd_mountArchive_cFPCcUcP7JKRHeap)
//	801C537C: 801C504C (_create__15dMenu_Fishing_cFv)
//	801C538C: 8042EBC8 (g_drawHIO)
//	801C5390: 8042EBC8 (g_drawHIO)
//	801C53C0: 80454114 (lit_4010)
//	801C53E0: 80454114 (lit_4010)
//	801C53E4: 802557D0 (setAlphaRate__13CPaneMgrAlphaFf)
//	801C53F0: 80454118 (lit_4012)
//	801C544C: 802557D0 (setAlphaRate__13CPaneMgrAlphaFf)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Fishing_c::_open() {
    nofralloc
#include "asm/d/menu/d_menu_fishing/_open__15dMenu_Fishing_cFv.s"
}
#pragma pop

/* 801C5470-801C556C 00FC+00 s=0 e=1 z=0  None .text      _close__15dMenu_Fishing_cFv */
//	801C548C: 8042EBC8 (g_drawHIO)
//	801C5490: 8042EBC8 (g_drawHIO)
//	801C54BC: 80454108 (lit_3904)
//	801C54DC: 80454108 (lit_3904)
//	801C54E0: 802557D0 (setAlphaRate__13CPaneMgrAlphaFf)
//	801C54EC: 80454118 (lit_4012)
//	801C5548: 802557D0 (setAlphaRate__13CPaneMgrAlphaFf)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Fishing_c::_close() {
    nofralloc
#include "asm/d/menu/d_menu_fishing/_close__15dMenu_Fishing_cFv.s"
}
#pragma pop

/* 801C556C-801C55A8 003C+00 s=1 e=0 z=0  None .text      wait_init__15dMenu_Fishing_cFv */
//	801C5584: 801C5EB8 (setAButtonString__15dMenu_Fishing_cFUs)
//	801C5590: 801C5F68 (setBButtonString__15dMenu_Fishing_cFUs)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Fishing_c::wait_init() {
    nofralloc
#include "asm/d/menu/d_menu_fishing/wait_init__15dMenu_Fishing_cFv.s"
}
#pragma pop

/* 801C55A8-801C55D8 0030+00 s=1 e=0 z=0  None .text      wait_move__15dMenu_Fishing_cFv */
//	801C55A8: 80450BC8 (mFader__13mDoGph_gInf_c)
//	801C55B8: 803DD2E8 (m_cpadInfo__8mDoCPd_c)
//	801C55BC: 803DD2E8 (m_cpadInfo__8mDoCPd_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Fishing_c::wait_move() {
    nofralloc
#include "asm/d/menu/d_menu_fishing/wait_move__15dMenu_Fishing_cFv.s"
}
#pragma pop

/* 801C55D8-801C5D3C 0764+00 s=1 e=0 z=0  None .text      screenSetBase__15dMenu_Fishing_cFv */
//	801C55E8: 803621B0 (_savegpr_18)
//	801C55F0: 80395D90 (fish_n)
//	801C55F4: 80395D90 (fish_n)
//	801C55F8: 804061C0 (g_dComIfG_gameInfo)
//	801C55FC: 804061C0 (g_dComIfG_gameInfo)
//	801C560C: 80396068 (d_menu_d_menu_fishing__stringBase0)
//	801C5610: 80396068 (d_menu_d_menu_fishing__stringBase0)
//	801C5630: 802CEC4C (__nw__FUl)
//	801C5640: 802FC708 (__ct__10J2DPictureFPC7ResTIMG)
//	801C56A4: 802CEC4C (__nw__FUl)
//	801C56B0: 802F8498 (__ct__9J2DScreenFv)
//	801C56C0: 80396068 (d_menu_d_menu_fishing__stringBase0)
//	801C56C4: 80396068 (d_menu_d_menu_fishing__stringBase0)
//	801C56D4: 802F8648 (setPriority__9J2DScreenFPCcUlP10JKRArchive)
//	801C56DC: 802550E8 (dPaneClass_showNullPane__FP9J2DScreen)
//	801C56E4: 802CEC4C (__nw__FUl)
//	801C5708: 80253984 (__ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap)
//	801C5718: 80454108 (lit_3904)
//	801C571C: 802557D0 (setAlphaRate__13CPaneMgrAlphaFf)
//	801C5730: 802CEC4C (__nw__FUl)
//	801C5758: 80253984 (__ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap)
//	801C576C: 802CEC4C (__nw__FUl)
//	801C5794: 80253984 (__ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap)
//	801C57A4: 802CEC4C (__nw__FUl)
//	801C57CC: 80253984 (__ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap)
//	801C57DC: 802CEC4C (__nw__FUl)
//	801C5804: 80253984 (__ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap)
//	801C5814: 802CEC4C (__nw__FUl)
//	801C583C: 80253984 (__ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap)
//	801C584C: 802CEC4C (__nw__FUl)
//	801C5874: 80253984 (__ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap)
//	801C5884: 802CEC4C (__nw__FUl)
//	801C58AC: 80253984 (__ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap)
//	801C58D0: 802CEC4C (__nw__FUl)
//	801C58F8: 80253984 (__ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap)
//	801C5908: 802CEC4C (__nw__FUl)
//	801C5930: 80253984 (__ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap)
//	801C5988: 80014BA0 (mDoExt_getSubFont__Fv)
//	801C59AC: 80396068 (d_menu_d_menu_fishing__stringBase0)
//	801C59B0: 80396068 (d_menu_d_menu_fishing__stringBase0)
//	801C59BC: 8030074C (setString__10J2DTextBoxFsPCce)
//	801C59FC: 80396068 (d_menu_d_menu_fishing__stringBase0)
//	801C5A00: 80396068 (d_menu_d_menu_fishing__stringBase0)
//	801C5A18: 80430188 (g_meter2_info)
//	801C5A1C: 80430188 (g_meter2_info)
//	801C5A4C: 80014BA0 (mDoExt_getSubFont__Fv)
//	801C5A78: 8030074C (setString__10J2DTextBoxFsPCce)
//	801C5AA0: 80014BA0 (mDoExt_getSubFont__Fv)
//	801C5ACC: 8030074C (setString__10J2DTextBoxFsPCce)
//	801C5AF4: 80014BA0 (mDoExt_getSubFont__Fv)
//	801C5B20: 8030074C (setString__10J2DTextBoxFsPCce)
//	801C5B48: 80014BA0 (mDoExt_getSubFont__Fv)
//	801C5B74: 8030074C (setString__10J2DTextBoxFsPCce)
//	801C5BC4: 80014BA0 (mDoExt_getSubFont__Fv)
//	801C5BF0: 8030074C (setString__10J2DTextBoxFsPCce)
//	801C5BF8: 80300658 (getStringPtr__10J2DTextBoxCFv)
//	801C5C0C: 8021C544 (getStringKanji__13dMeter2Info_cFUlPcP14JMSMesgEntry_c)
//	801C5C74: 800149F0 (mDoExt_getMesgFont__Fv)
//	801C5C90: 800149F0 (mDoExt_getMesgFont__Fv)
//	801C5CB4: 80396068 (d_menu_d_menu_fishing__stringBase0)
//	801C5CB8: 80396068 (d_menu_d_menu_fishing__stringBase0)
//	801C5CC4: 8030074C (setString__10J2DTextBoxFsPCce)
//	801C5CCC: 80300658 (getStringPtr__10J2DTextBoxCFv)
//	801C5CD4: 80430188 (g_meter2_info)
//	801C5CD8: 80430188 (g_meter2_info)
//	801C5CE4: 8021C544 (getStringKanji__13dMeter2Info_cFUlPcP14JMSMesgEntry_c)
//	801C5CF0: 80396068 (d_menu_d_menu_fishing__stringBase0)
//	801C5CF4: 80396068 (d_menu_d_menu_fishing__stringBase0)
//	801C5D00: 8030074C (setString__10J2DTextBoxFsPCce)
//	801C5D08: 80300658 (getStringPtr__10J2DTextBoxCFv)
//	801C5D10: 80430188 (g_meter2_info)
//	801C5D14: 80430188 (g_meter2_info)
//	801C5D20: 8021C544 (getStringKanji__13dMeter2Info_cFUlPcP14JMSMesgEntry_c)
//	801C5D28: 803621FC (_restgpr_18)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Fishing_c::screenSetBase() {
    nofralloc
#include "asm/d/menu/d_menu_fishing/screenSetBase__15dMenu_Fishing_cFv.s"
}
#pragma pop

/* 801C5D3C-801C5EB8 017C+00 s=1 e=0 z=0  None .text      screenSetDoIcon__15dMenu_Fishing_cFv */
//	801C5D4C: 803621C8 (_savegpr_24)
//	801C5D58: 802CEC4C (__nw__FUl)
//	801C5D64: 802F8498 (__ct__9J2DScreenFv)
//	801C5D74: 80396068 (d_menu_d_menu_fishing__stringBase0)
//	801C5D78: 80396068 (d_menu_d_menu_fishing__stringBase0)
//	801C5D88: 802F8648 (setPriority__9J2DScreenFPCcUlP10JKRArchive)
//	801C5DB8: 802550E8 (dPaneClass_showNullPane__FP9J2DScreen)
//	801C5DC8: 80396018 (text_a_tag)
//	801C5DCC: 80396018 (text_a_tag)
//	801C5DD0: 80396040 (text_b_tag)
//	801C5DD4: 80396040 (text_b_tag)
//	801C5DD8: 80396068 (d_menu_d_menu_fishing__stringBase0)
//	801C5DDC: 80396068 (d_menu_d_menu_fishing__stringBase0)
//	801C5E2C: 800149F0 (mDoExt_getMesgFont__Fv)
//	801C5E48: 800149F0 (mDoExt_getMesgFont__Fv)
//	801C5E74: 8030074C (setString__10J2DTextBoxFsPCce)
//	801C5E88: 8030074C (setString__10J2DTextBoxFsPCce)
//	801C5EA4: 80362214 (_restgpr_24)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Fishing_c::screenSetDoIcon() {
    nofralloc
#include "asm/d/menu/d_menu_fishing/screenSetDoIcon__15dMenu_Fishing_cFv.s"
}
#pragma pop

/* 801C5EB8-801C5F68 00B0+00 s=1 e=0 z=0  None .text      setAButtonString__15dMenu_Fishing_cFUs */
//	801C5EC8: 803621D4 (_savegpr_27)
//	801C5EE0: 80396068 (d_menu_d_menu_fishing__stringBase0)
//	801C5EE4: 80396068 (d_menu_d_menu_fishing__stringBase0)
//	801C5EF0: 80300658 (getStringPtr__10J2DTextBoxCFv)
//	801C5EF8: 80368B2C (strcpy)
//	801C5F18: 80430188 (g_meter2_info)
//	801C5F1C: 80430188 (g_meter2_info)
//	801C5F28: 80300658 (getStringPtr__10J2DTextBoxCFv)
//	801C5F3C: 8021C544 (getStringKanji__13dMeter2Info_cFUlPcP14JMSMesgEntry_c)
//	801C5F54: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Fishing_c::setAButtonString(u16 param_0) {
    nofralloc
#include "asm/d/menu/d_menu_fishing/setAButtonString__15dMenu_Fishing_cFUs.s"
}
#pragma pop

/* 801C5F68-801C6018 00B0+00 s=1 e=0 z=0  None .text      setBButtonString__15dMenu_Fishing_cFUs */
//	801C5F78: 803621D4 (_savegpr_27)
//	801C5F90: 80396068 (d_menu_d_menu_fishing__stringBase0)
//	801C5F94: 80396068 (d_menu_d_menu_fishing__stringBase0)
//	801C5FA0: 80300658 (getStringPtr__10J2DTextBoxCFv)
//	801C5FA8: 80368B2C (strcpy)
//	801C5FC8: 80430188 (g_meter2_info)
//	801C5FCC: 80430188 (g_meter2_info)
//	801C5FD8: 80300658 (getStringPtr__10J2DTextBoxCFv)
//	801C5FEC: 8021C544 (getStringKanji__13dMeter2Info_cFUlPcP14JMSMesgEntry_c)
//	801C6004: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Fishing_c::setBButtonString(u16 param_0) {
    nofralloc
#include "asm/d/menu/d_menu_fishing/setBButtonString__15dMenu_Fishing_cFUs.s"
}
#pragma pop

/* 801C6018-801C605C 0044+00 s=1 e=0 z=0  None .text      getFigure__15dMenu_Fishing_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Fishing_c::getFigure(int param_0) {
    nofralloc
#include "asm/d/menu/d_menu_fishing/getFigure__15dMenu_Fishing_cFi.s"
}
#pragma pop

/* 801C605C-801C6210 01B4+00 s=1 e=0 z=0  None .text      setFishParam__15dMenu_Fishing_cFiUsUc */
//	801C606C: 803621C8 (_savegpr_24)
//	801C6084: 801C6018 (getFigure__15dMenu_Fishing_cFi)
//	801C6094: 801C6018 (getFigure__15dMenu_Fishing_cFi)
//	801C609C: 804061C0 (g_dComIfG_gameInfo)
//	801C60A0: 804061C0 (g_dComIfG_gameInfo)
//	801C60F4: 80300658 (getStringPtr__10J2DTextBoxCFv)
//	801C6100: 80368B2C (strcpy)
//	801C6140: 80300658 (getStringPtr__10J2DTextBoxCFv)
//	801C6148: 80368B2C (strcpy)
//	801C6150: 80300658 (getStringPtr__10J2DTextBoxCFv)
//	801C6158: 80368B2C (strcpy)
//	801C6190: 80300658 (getStringPtr__10J2DTextBoxCFv)
//	801C619C: 80368B2C (strcpy)
//	801C61DC: 80300658 (getStringPtr__10J2DTextBoxCFv)
//	801C61E4: 80368B2C (strcpy)
//	801C61EC: 80300658 (getStringPtr__10J2DTextBoxCFv)
//	801C61F4: 80368B2C (strcpy)
//	801C61FC: 80362214 (_restgpr_24)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Fishing_c::setFishParam(int param_0, u16 param_1, u8 param_2) {
    nofralloc
#include "asm/d/menu/d_menu_fishing/setFishParam__15dMenu_Fishing_cFiUsUc.s"
}
#pragma pop

/* 801C6210-801C659C 038C+00 s=2 e=0 z=0  None .text      setHIO__15dMenu_Fishing_cFb */
//	801C6220: 803621CC (_savegpr_25)
//	801C6234: 8042EBC8 (g_drawHIO)
//	801C6238: 8042EBC8 (g_drawHIO)
//	801C6250: 8042EBC8 (g_drawHIO)
//	801C6254: 8042EBC8 (g_drawHIO)
//	801C626C: 802545B0 (paneTrans__8CPaneMgrFff)
//	801C62A0: 802545B0 (paneTrans__8CPaneMgrFff)
//	801C62D4: 802545B0 (paneTrans__8CPaneMgrFff)
//	801C6308: 802545B0 (paneTrans__8CPaneMgrFff)
//	801C633C: 802545B0 (paneTrans__8CPaneMgrFff)
//	801C6370: 802545B0 (paneTrans__8CPaneMgrFff)
//	801C63A4: 802545B0 (paneTrans__8CPaneMgrFff)
//	801C63E4: 8042EBC8 (g_drawHIO)
//	801C63E8: 8042EBC8 (g_drawHIO)
//	801C6400: 802545B0 (paneTrans__8CPaneMgrFff)
//	801C6438: 8042EBC8 (g_drawHIO)
//	801C643C: 8042EBC8 (g_drawHIO)
//	801C6460: 8042EBC8 (g_drawHIO)
//	801C6464: 8042EBC8 (g_drawHIO)
//	801C6470: 802545B0 (paneTrans__8CPaneMgrFff)
//	801C6474: 8042EBC8 (g_drawHIO)
//	801C6478: 8042EBC8 (g_drawHIO)
//	801C64AC: 8042EBC8 (g_drawHIO)
//	801C64B0: 8042EBC8 (g_drawHIO)
//	801C64BC: 802545B0 (paneTrans__8CPaneMgrFff)
//	801C64C0: 8042EBC8 (g_drawHIO)
//	801C64C4: 8042EBC8 (g_drawHIO)
//	801C64F8: 8042EBC8 (g_drawHIO)
//	801C64FC: 8042EBC8 (g_drawHIO)
//	801C6508: 802545B0 (paneTrans__8CPaneMgrFff)
//	801C650C: 8042EBC8 (g_drawHIO)
//	801C6510: 8042EBC8 (g_drawHIO)
//	801C6544: 8042EBC8 (g_drawHIO)
//	801C6548: 8042EBC8 (g_drawHIO)
//	801C6554: 802545B0 (paneTrans__8CPaneMgrFff)
//	801C6558: 8042EBC8 (g_drawHIO)
//	801C655C: 8042EBC8 (g_drawHIO)
//	801C6588: 80362218 (_restgpr_25)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Fishing_c::setHIO(bool param_0) {
    nofralloc
#include "asm/d/menu/d_menu_fishing/setHIO__15dMenu_Fishing_cFb.s"
}
#pragma pop

/* 801C659C-801C65BC 0020+00 s=1 e=0 z=0  None .text      draw__15dMenu_Fishing_cFv */
//	801C65A8: 801C514C (_draw__15dMenu_Fishing_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMenu_Fishing_c::draw() {
    nofralloc
#include "asm/d/menu/d_menu_fishing/draw__15dMenu_Fishing_cFv.s"
}
#pragma pop

/* 801C65BC-801C65F8 003C+00 s=0 e=0 z=0  None .text      __sinit_d_menu_fishing_cpp */
//	801C65BC: 803BD038 (cNullVec__6Z2Calc)
//	801C65C0: 803BD038 (cNullVec__6Z2Calc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_menu_fishing_cpp() {
    nofralloc
#include "asm/d/menu/d_menu_fishing/__sinit_d_menu_fishing_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_801C65BC = (void*)__sinit_d_menu_fishing_cpp;
#pragma pop
