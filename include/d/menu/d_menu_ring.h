#ifndef D_MENU_D_MENU_RING_H
#define D_MENU_D_MENU_RING_H

#include "dolphin/types.h"
#include "JSystem/J2DGraph/J2DPicture.h"
#include "d/d_select_cursor.h"
#include "d/d_lib.h"

class dMsgString_c;
class dKantera_icon_c;
class dMenu_ItemExplain_c;

class dMenu_Ring_c : public dDlst_base_c {
public:
    /* 801E9118 */ dMenu_Ring_c(JKRExpHeap*, STControl*, CSTControl*, u8);
    /* 801EAB7C */ void _create();
    /* 801EABE8 */ void _delete();
    /* 801EABEC */ void _move();
    /* 801EACC8 */ void _draw();
    /* 801EB080 */ void setKanteraPos(f32, f32);
    /* 801EB0A4 */ bool isOpen();
    /* 801EB2B4 */ bool isMoveEnd();
    /* 801EB3CC */ bool isClose();
    /* 801EB624 */ void getStickInfo(STControl*);
    /* 801EB8C0 */ void calcStickAngle(STControl*, u8);
    /* 801EB960 */ void setRotate();
    /* 801EBA38 */ void setItemScale(int, f32);
    /* 801EBAB8 */ void setButtonScale(int, f32);
    /* 801EBB10 */ void setItem();
    /* 801EBE58 */ void setJumpItem(bool);
    /* 801EC20C */ void setScale();
    /* 801EC3B0 */ void setNameString(u32);
    /* 801EC504 */ void setActiveCursor();
    /* 801EC754 */ void setMixItem();
    /* 801ECB14 */ void drawItem();
    /* 801ECF9C */ void drawItem2();
    /* 801ED2BC */ void stick_wait_init();
    /* 801ED31C */ void stick_wait_proc();
    /* 801ED490 */ void stick_move_init();
    /* 801ED53C */ void stick_move_proc();
    /* 801ED934 */ void stick_explain_init();
    /* 801ED938 */ void stick_explain_force_init();
    /* 801ED93C */ void stick_explain_proc();
    /* 801EDA0C */ void stick_explain_force_proc();
    /* 801EDB14 */ void setSelectItem(int, u8);
    /* 801EDC98 */ void drawSelectItem();
    /* 801EDF2C */ void setSelectItemForce(int);
    /* 801EDFDC */ void getCursorPos(u8);
    /* 801EE058 */ void getItemNum(u8);
    /* 801EE15C */ void getItemMaxNum(u8);
    /* 801EE228 */ void checkExplainForce();
    /* 801EE63C */ bool checkCombineBomb(int);
    /* 801EE644 */ void setCombineBomb(int);
    /* 801EE648 */ void drawNumber(int, int, f32, f32);
    /* 801EEA84 */ void getItem(int, u8);
    /* 801EEAE4 */ void setDoStatus(u8);
    /* 801EEB58 */ void isMixItemOn();
    /* 801EEC98 */ void isMixItemOff();
    /* 801EED84 */ void setMixMessage();
    /* 801EEF14 */ void textScaleHIO();
    /* 801EF11C */ void textCentering();
    /* 801EF13C */ void clacEllipseFunction(f32, f32, f32);
    /* 801EF174 */ void calcDistance(f32, f32, f32, f32);
    /* 801EF1A0 */ void clacEllipsePlotAverage(int, f32, f32);
    /* 801EF484 */ bool dpdMove();
    /* 801EF48C */ void openExplain(u8);

    /* 801EF560 */ virtual void draw();
    /* 801EA708 */ virtual ~dMenu_Ring_c();

    void drawFlag0() { mDrawFlag = 0; }

private:
    /* 0x004 */ JKRExpHeap* mpHeap;
    /* 0x008 */ STControl* mpStick;
    /* 0x00C */ CSTControl* mpCStick;
    /* 0x010 */ dSelect_cursor_c* mpDrawCursor;
    /* 0x014 */ dMsgString_c* mpString;
    /* 0x018 */ CPaneMgr* mpMessageParent;
    /* 0x01C */ CPaneMgr* mpCenterParent;
    /* 0x020 */ CPaneMgr* mpSpotParent;
    /* 0x024 */ CPaneMgr* mpTextParent[10];
    /* 0x04C */ CPaneMgr* mpNameParent;
    /* 0x050 */ CPaneMgr* mpCircle;
    /* 0x054 */ dKantera_icon_c* mpKanteraMeter;
    /* 0x058 */ J2DScreen* mpScreen;
    /* 0x05C */ J2DScreen* mpSpotScreen;
    /* 0x060 */ u8 field_0x60[4];
    /* 0x064 */ J2DScreen* mpCenterScreen;
    /* 0x068 */ J2DPicture* mpSelectItemTex[4][3];
    /* 0x098 */ J2DPicture* mpItemTex[4][3];
    /* 0x0C8 */ u8 field_0xc8[0xF0];
    /* 0x1B8 */ J2DPicture* mpBlackTex;
    /* 0x1BC */ J2DPicture* mpItemNumTex[3];
    /* 0x1C8 */ J2DTextBox* field_0x1c8[5];
    /* 0x1DC */ J2DTextBox* field_0x1dc[5];
    /* 0x1F0 */ ResTIMG* mpSelectItemTexBuf[4][3][2];
    /* 0x250 */ ResTIMG* mpItemBuf[4][3];
    /* 0x280 */ u8 field_0x280[0xF0];
    /* 0x370 */ dMenu_ItemExplain_c* mpItemExplain;
    /* 0x374 */ void* field_0x374[3];
    /* 0x380 */ cXyz field_0x380;
    /* 0x38C */ f32 field_0x38c[24];
    /* 0x3EC */ f32 field_0x3ec[24];
    /* 0x44C */ f32 field_0x44c[24];
    /* 0x4AC */ f32 field_0x4ac[24];
    /* 0x50C */ f32 field_0x50c;
    /* 0x510 */ f32 field_0x510;
    /* 0x514 */ f32 field_0x514;
    /* 0x518 */ f32 field_0x518[4];
    /* 0x528 */ f32 field_0x528[4];
    /* 0x538 */ f32 field_0x538[4];
    /* 0x548 */ f32 field_0x548[4];
    /* 0x558 */ f32 field_0x558[4];
    /* 0x568 */ f32 field_0x568;
    /* 0x56C */ f32 field_0x56c;
    /* 0x570 */ f32 field_0x570;
    /* 0x574 */ f32 field_0x574[2];
    /* 0x57C */ f32 field_0x57c[2];
    /* 0x584 */ f32 field_0x584;
    /* 0x588 */ f32 field_0x588;
    /* 0x58C */ f32 field_0x58c;
    /* 0x590 */ f32 field_0x590[10];
    /* 0x5B8 */ f32 field_0x5b8[10];
    /* 0x5E0 */ f32 field_0x5e0[10];
    /* 0x608 */ f32 field_0x608;
    /* 0x604 */ f32 field_0x604;
    /* 0x610 */ f32 field_0x610;
    /* 0x614 */ f32 field_0x614;
    /* 0x618 */ f32 field_0x618;
    /* 0x61C */ f32 field_0x61c;
    /* 0x620 */ u8 field_0x620[4];
    /* 0x624 */ int field_0x624;
    /* 0x628 */ u32 field_0x628;
    /* 0x62C */ int field_0x62c;
    /* 0x630 */ u16 field_0x630;
    /* 0x632 */ u16 field_0x632;
    /* 0x634 */ u16 field_0x634;
    /* 0x636 */ u16 field_0x636[24];
    /* 0x666 */ u16 field_0x666;
    /* 0x668 */ u16 field_0x668;
    /* 0x66A */ u16 field_0x66a;
    /* 0x66C */ u16 field_0x66c[4];
    /* 0x674 */ u16 field_0x674;
    /* 0x676 */ u16 field_0x676;
    /* 0x678 */ u16 field_0x678;
    /* 0x67A */ u16 field_0x67a;
    /* 0x67C */ u16 field_0x67c;
    /* 0x67E */ u16 field_0x67e[4];
    /* 0x686 */ u16 field_0x686;
    /* 0x688 */ u8 field_0x688[24];
    /* 0x6A0 */ u8 field_0x6a0;
    /* 0x6A1 */ u8 field_0x6a1;
    /* 0x6A2 */ u8 field_0x6a2;
    /* 0x6A3 */ u8 field_0x6a3;
    /* 0x6A4 */ u8 field_0x6a4;
    /* 0x6A5 */ u8 field_0x6a5;
    /* 0x6A6 */ u8 field_0x6a6;
    /* 0x6A7 */ u8 field_0x6a7;
    /* 0x6A8 */ u8 mStatus;
    /* 0x6A9 */ u8 field_0x6a9;
    /* 0x6AA */ u8 field_0x6aa;
    /* 0x6AB */ u8 field_0x6ab;
    /* 0x6AC */ u8 field_0x6ac[4];
    /* 0x6B0 */ u8 field_0x6b0[4];
    /* 0x6B4 */ u8 field_0x6b4;
    /* 0x6B5 */ u8 field_0x6b5;
    /* 0x6B6 */ u8 field_0x6b6[4];
    /* 0x6BA */ u8 field_0x6ba;
    /* 0x6BB */ u8 field_0x6bb;
    /* 0x6BC */ u8 field_0x6bc;
    /* 0x6BD */ u8 mDrawFlag;
    /* 0x6BE */ u8 field_0x6be;
    /* 0x6BF */ u8 field_0x6bf[4];
    /* 0x6C3 */ u8 field_0x6c3;
    /* 0x6C4 */ u8 field_0x6c4;
    /* 0x6C5 */ u8 field_0x6c5;
    /* 0x6C6 */ u8 field_0x6c6;
    /* 0x6C7 */ u8 field_0x6c7;
    /* 0x6C8 */ u8 field_0x6c8;
    /* 0x6C9 */ u8 field_0x6c9;
    /* 0x6CA */ u8 field_0x6ca;
    /* 0x6CB */ u8 field_0x6cb;
    /* 0x6CC */ u8 field_0x6cc;
    /* 0x6CD */ u8 field_0x6cd;
    /* 0x6CE */ u8 field_0x6ce;
    /* 0x6CF */ u8 field_0x6cf;
    /* 0x6D0 */ u8 field_0x6d0;
    /* 0x6D1 */ u8 field_0x6d1;
    /* 0x6D2 */ u8 field_0x6d2;
    /* 0x6D3 */ u8 field_0x6d3;
};

#endif /* D_MENU_D_MENU_RING_H */
