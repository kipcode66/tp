#ifndef D_MENU_D_MENU_OPTION_H
#define D_MENU_D_MENU_OPTION_H

#include "dolphin/types.h"
#include "d/d_lib.h"
#include "d/d_select_cursor.h"
#include "JSystem/J2DGraph/J2DPicture.h"

class dFile_warning_c;
class dMenu_Calibration_c;
class mDoDvdThd_mountArchive_c;
class dMsgString_c;
class dMeterHaihai_c;

class dMenu_Option_c : public dDlst_base_c {
public:
    /* 801E1F10 */ dMenu_Option_c(JKRArchive*, STControl*);
    /* 801E205C */ void _create();
    /* 801E2C1C */ void _delete();
    /* 801E3408 */ void _move();
    /* 801E36CC */ void _draw();
    /* 801E38CC */ void drawHaihai();
    /* 801E3A7C */ bool isSync();
    /* 801E3AA4 */ void checkLeftTrigger();
    /* 801E3AC8 */ void checkRightTrigger();
    /* 801E3AEC */ void setAnimation();
    /* 801E3B98 */ bool _open();
    /* 801E3DE0 */ void _close();
    /* 801E3F6C */ void atten_init();
    /* 801E3FC4 */ void atten_move();
    /* 801E41A0 */ void vib_init();
    /* 801E41F8 */ void vib_move();
    /* 801E4488 */ void sound_init();
    /* 801E44E0 */ void sound_move();
    /* 801E48AC */ void change_init();
    /* 801E48E8 */ void change_move();
    /* 801E4B34 */ void confirm_open_init();
    /* 801E4C10 */ void confirm_open_move();
    /* 801E4CE4 */ void confirm_move_init();
    /* 801E4D20 */ void confirm_move_move();
    /* 801E4E98 */ void confirm_select_init();
    /* 801E4E9C */ void confirm_select_move();
    /* 801E4F18 */ void confirm_close_init();
    /* 801E4FB0 */ void confirm_close_move();
    /* 801E51CC */ void tv_open1_move();
    /* 801E5244 */ void tv_open2_move();
    /* 801E5260 */ void tv_move_move();
    /* 801E5300 */ void tv_close1_move();
    /* 801E5364 */ void tv_close2_move();
    /* 801E5380 */ void calibration_open1_move();
    /* 801E53C4 */ void calibration_open2_move();
    /* 801E53E0 */ void calibration_move_move();
    /* 801E5434 */ void calibration_close1_move();
    /* 801E5478 */ void calibration_close2_move();
    /* 801E5494 */ void menuVisible();
    /* 801E54F8 */ void menuShow(int);
    /* 801E55B8 */ void menuHide(int);
    /* 801E5678 */ void screenSet();
    /* 801E6FBC */ void setSoundMode(u32);
    /* 801E7004 */ void setAttenString();
    /* 801E70E8 */ void setVibString();
    /* 801E71CC */ void setSoundString();
    /* 801E7314 */ void setCursorPos(u8);
    /* 801E73D8 */ void setSelectColor(u8, bool);
    /* 801E76EC */ void getSelectType();
    /* 801E7718 */ void changeBarColor(bool);
    /* 801E78B8 */ void setHIO(bool);
    /* 801E7D18 */ void cursorAnime(f32);
    /* 801E7D60 */ void setZButtonString(u16);
    /* 801E7DF4 */ void changeTVCheck();
    /* 801E7E98 */ void setAButtonString(u16);
    /* 801E7F9C */ void setBButtonString(u16);
    /* 801E80A0 */ void isRumbleSupported();
    /* 801E80AC */ bool dpdMenuMove();
    /* 801E80B4 */ void paneResize(u64);
    /* 801E8210 */ void initialize();
    /* 801E82C4 */ void yesnoMenuMoveAnmInitSet(int, int);
    /* 801E8438 */ void yesnoMenuMoveAnm();
    /* 801E85D4 */ void yesnoSelectMoveAnm();
    /* 801E8888 */ void yesnoCursorShow();
    /* 801E89F8 */ void yesNoSelectStart();
    /* 801E8AC8 */ void yesnoSelectAnmSet();
    /* 801E8C38 */ void yesnoCancelAnmSet();
    /* 801E8CB0 */ void yesnoWakuAlpahAnmInit(u8, u8, u8, u8);
    /* 801E8CFC */ void yesnoWakuAlpahAnm(u8);

    /* 801E8E6C */ virtual void draw();
    /* 801E2014 */ virtual ~dMenu_Option_c();

    u8 getQuitStatus() { return mQuitStatus; }

private:
    /* 0x004 */ J2DScreen* mpBackScreen;
    /* 0x008 */ J2DScreen* mpScreen;
    /* 0x00C */ J2DScreen* mpClipScreen;
    /* 0x010 */ J2DScreen* mpShadowScreen;
    /* 0x014 */ J2DScreen* mpTVScreen;
    /* 0x018 */ J2DScreen* mpScreenIcon;
    /* 0x01C */ J2DScreen* mpSelectScreen;
    /* 0x020 */ void* field_0x20;  // bck
    /* 0x024 */ void* field_0x24;  // bck
    /* 0x028 */ void* field_0x28;  // bck
    /* 0x02C */ void* field_0x2c;  // bpk
    /* 0x030 */ void* field_0x30;  // btk
    /* 0x034 */ dFile_warning_c* mpWarning;
    /* 0x038 */ J2DPicture* mpBlackTex;
    /* 0x03C */ dMenu_Calibration_c* field_0x3c;
    /* 0x040 */ mDoDvdThd_mountArchive_c* field_0x40;
    /* 0x044 */ dSelect_cursor_c* mpDrawCursor;
    /* 0x048 */ dMsgString_c* mpString;
    /* 0x04C */ dMeterHaihai_c* mpMeterHaihai;
    /* 0x050 */ JKRArchive* field_0x50;
    /* 0x054 */ JUTFont* field_0x54;
    /* 0x058 */ STControl* field_0x58;
    /* 0x05C */ CPaneMgr* mpParent[5];
    /* 0x070 */ CPaneMgr* mpTitle;
    /* 0x074 */ CPaneMgr* mpMenuNull[6];
    /* 0x08C */ CPaneMgr* mpMenuPane[6];
    /* 0x0A4 */ CPaneMgr* mpMenuPaneC[6];
    /* 0x0BC */ CPaneMgr* mpMenuPane2[6];
    /* 0x0D4 */ CPaneMgr* mpMenuPane3[6];
    /* 0x0EC */ CPaneMgr* mpMenuPane32[6];
    /* 0x104 */ CPaneMgr* mpMenuText[5][6];
    /* 0x17C */ int field_0x17c[6];
    /* 0x194 */ CPaneMgr* mpHaihaiPosL[5];
    /* 0x1A8 */ CPaneMgr* mpHaihaiPosR[5];
    /* 0x1BC */ u8 field_0x1bc[4];
    /* 0x1C0 */ int field_0x1c0[4];
    /* 0x1D0 */ CPaneMgr* mpZButtonText[3];
    /* 0x1DC */ CPaneMgr* mpYesNoSelBase_c[2];
    /* 0x1E4 */ CPaneMgr* mpYesNoTxt_c[2];
    /* 0x1EC */ CPaneMgr* mpYesNoCurWaku_c[2];
    /* 0x1F4 */ CPaneMgr* mpYesNoCurWakuG0_c[2];
    /* 0x1FC */ CPaneMgr* mpYesNoCurWakuG1_c[2];
    /* 0x204 */ CPaneMgr* mpButtonAB[2];
    /* 0x20C */ CPaneMgr* mpButtonText[2];
    /* 0x214 */ CPaneMgr* mpTVButtonAB;
    /* 0x218 */ CPaneMgr* mpTVButtonText;
    /* 0x21C */ J2DTextBox* field_0x21c[12];
    /* 0x24C */ u8 field_0x24c[0x8];
    /* 0x254 */ int field_0x254;
    /* 0x258 */ int field_0x258;
    /* 0x25C */ J2DTextBox* field_0x25c[5];
    /* 0x270 */ J2DTextBox* field_0x270[3];
    /* 0x27C */ int field_0x27c;
    /* 0x280 */ int field_0x280[6];
    /* 0x298 */ int field_0x298[6];
    /* 0x2B0 */ JUtility::TColor field_0x2b0[2];
    /* 0x2B8 */ JUtility::TColor field_0x2b8[2];
    /* 0x2C0 */ JUtility::TColor field_0x2c0[2];
    /* 0x2C8 */ JUtility::TColor field_0x2c8[2];
    /* 0x2D0 */ int field_0x2d0[3][8];
    /* 0x330 */ f32 field_0x330;
    /* 0x334 */ f32 field_0x334;
    /* 0x338 */ f32 field_0x338;
    /* 0x33C */ f32 field_0x33c[2];
    /* 0x344 */ f32 field_0x344[6];
    /* 0x35C */ f32 field_0x35c[6];
    /* 0x374 */ f32 field_0x374;
    /* 0x378 */ f32 field_0x378;
    /* 0x37C */ f32 field_0x37c;
    /* 0x380 */ f32 field_0x380;
    /* 0x384 */ f32 field_0x384[6];
    /* 0x39C */ f32 field_0x39c[6];
    /* 0x3B4 */ f32 field_0x3b4;
    /* 0x3B8 */ JUtility::TColor field_0x3b8;
    /* 0x3BC */ JUtility::TColor field_0x3bc;
    /* 0x3C0 */ int field_0x3c0;
    /* 0x3C4 */ int field_0x3c4;
    /* 0x3C8 */ int field_0x3c8[4];
    /* 0x3D8 */ u16 field_0x3d8;
    /* 0x3DA */ u16 field_0x3da;
    /* 0x3DC */ u16 field_0x3dc;
    /* 0x3DE */ u16 field_0x3de;
    /* 0x3E0 */ u8 field_0x3e0;
    /* 0x3E1 */ u8 field_0x3e1;
    /* 0x3E2 */ u8 field_0x3e2;
    /* 0x3E3 */ u8 field_0x3e3;
    /* 0x3E4 */ u8 field_0x3e4;
    /* 0x3E5 */ u8 field_0x3e5;
    /* 0x3E6 */ u8 field_0x3e6;
    /* 0x3E7 */ u8 field_0x3e7;
    /* 0x3E8 */ u8 field_0x3e8;
    /* 0x3E9 */ u8 field_0x3e9;
    /* 0x3EA */ u8 field_0x3ea;
    /* 0x3EB */ u8 field_0x3eb;
    /* 0x3EC */ u8 mQuitStatus;
    /* 0x3ED */ u8 field_0x3ed;
    /* 0x3EE */ u8 mUseFlag;
    /* 0x3EF */ u8 field_0x3ef;
    /* 0x3F0 */ u8 field_0x3f0;
    /* 0x3F1 */ u8 field_0x3f1;
    /* 0x3F2 */ u8 field_0x3f2;
    /* 0x3F3 */ u8 field_0x3f3;
    /* 0x3F4 */ u8 field_0x3f4;
    /* 0x3F5 */ u8 field_0x3f5;
    /* 0x3F6 */ u8 field_0x3f6;
    /* 0x3F7 */ u8 field_0x3f7;
    /* 0x3F8 */ u8 field_0x3f8;
    /* 0x3F9 */ u8 field_0x3f9;
    /* 0x3FA */ u8 field_0x3fa;
    /* 0x3FB */ u8 field_0x3fb[2];
    /* 0x3FD */ u8 field_0x3fd[2];
    /* 0x3FF */ u8 field_0x3ff[2];
    /* 0x401 */ u8 field_0x401;
    /* 0x402 */ u8 field_0x402;
    /* 0x403 */ u8 field_0x403;
    /* 0x404 */ u8 field_0x404[4];
    /* 0x408 */ u8 field_0x408[4];
};

#endif /* D_MENU_D_MENU_OPTION_H */
