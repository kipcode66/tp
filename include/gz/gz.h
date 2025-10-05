#ifndef GZ_H
#define GZ_H

#include "m_Do/m_Do_controller_pad.h"
#include "JSystem/J2DGraph/J2DPicture.h"
#include "JSystem/J2DGraph/J2DTextBox.h"
#include "SSystem/SComponent/c_API_controller_pad.h"
#include <cstring.h>

class gzMenu_c;
class gzTextBox;
class gzMainMenu_c;
class gzNotification_c;

struct gzSettings_s {
    u32 mTextColor;  // todo: just make this an index?
    bool mDropShadows;
    bool mSwapEquips;
    bool mAreaReload;
    u8 mCursorType;
    bool mDisplayMode;
    bool mMenuPausesGame;
};

class gzInfo_c {
public:
    gzInfo_c() { mGZInitialized = false; };

    enum gzInfoMenu_CursorType_e {
        CURSOR_CLASSIC = 1,
        CURSOR_TP,
        CURSOR_BOTH,
    };

    int _create();
    int _delete();
    int execute();
    int draw();

    int storeSettingsMemcard();
    int loadSettingsMemcard();
    int deleteSettingsMemcard();
    void showHeapUsage();
    void sendNotification(const char* msg);

    bool isDisplay() const { return mDisplay; }
    u32 getTextColor() const { return mSettings.mTextColor; }
    void setTextColor(u32 i_textColor) { mSettings.mTextColor = i_textColor; }
    bool getDropShadows() const { return mSettings.mDropShadows; }
    void setDropShadows(bool i_dropShadows) { mSettings.mDropShadows = i_dropShadows; }
    bool getSwapEquips() const { return mSettings.mSwapEquips; }
    void setSwapEquips(bool i_swapEquips) { mSettings.mSwapEquips = i_swapEquips; }
    bool getAreaReload() const { return mSettings.mAreaReload; }
    void setAreaReload(bool i_areaReload) { mSettings.mAreaReload = i_areaReload; }
    u8 getCursorType() const { return mSettings.mCursorType; }
    void setCursorType(u8 i_type) { mSettings.mCursorType = i_type; }
    bool getDisplayMode() const { return mSettings.mDisplayMode; }
    void setDisplayMode(bool i_mode) { mSettings.mDisplayMode = i_mode; }
    void setFont(JUTFont* i_font) { mpFont = i_font; }
    bool getMenuPausesGame() const { return mSettings.mMenuPausesGame; }
    void setMenuPausesGame(bool i_opt) { mSettings.mMenuPausesGame = i_opt; }

    u8 nextCursorType() {
        switch (getCursorType()) {
        case CURSOR_CLASSIC:
            return CURSOR_TP;
        case CURSOR_TP:
            return CURSOR_BOTH;
        case CURSOR_BOTH:
            return CURSOR_CLASSIC;
        default:
            return CURSOR_CLASSIC;
        }
    }

    u8 previousCursorType() {
        switch (getCursorType()) {
        case CURSOR_CLASSIC:
            return CURSOR_BOTH;
        case CURSOR_BOTH:
            return CURSOR_TP;
        case CURSOR_TP:
            return CURSOR_CLASSIC;
        default:
            return CURSOR_CLASSIC;
        }
    }

    JUTFont* getFont() { return mpFont; }

    J2DPicture* mpIcon;
    gzTextBox* mpHeader;
    gzMenu_c* mpCurrentMenu;
    gzNotification_c* mpNotification;

    JUTFont* mpFont;
    s16 mInputWaitTimer;
    bool mDisplay;
    bool mGZInitialized;
    gzSettings_s mSettings;
};

extern gzInfo_c g_gzInfo;

namespace gzPad {
    inline u32 getTrig() { return mDoCPd_c::m_gzPadInfo.mPressedButtonFlags; }
    inline u32 getTrigLockL() { return mDoCPd_c::m_gzPadInfo.mTrigLockL; }
    inline u32 getTrigLockR() { return mDoCPd_c::m_gzPadInfo.mTrigLockR; }
    inline u32 getTrigUp() { return getTrig() & PAD_BUTTON_UP; }
    inline u32 getTrigDown() { return getTrig() & PAD_BUTTON_DOWN; }
    inline u32 getTrigLeft() { return getTrig() & PAD_BUTTON_LEFT; }
    inline u32 getTrigRight() { return getTrig() & PAD_BUTTON_RIGHT; }
    inline u32 getTrigL() { return getTrig() & PAD_TRIGGER_L; }
    inline u32 getTrigR() { return getTrig() & PAD_TRIGGER_R; }
    inline u32 getTrigA() { return getTrig() & PAD_BUTTON_A; }
    inline u32 getTrigB() { return getTrig() & PAD_BUTTON_B; }
    inline u32 getTrigZ() { return getTrig() & PAD_TRIGGER_Z; }
    inline u32 getTrigY() { return getTrig() & PAD_BUTTON_Y; }
    inline u32 getTrigX() { return getTrig() & PAD_BUTTON_X; }
    inline u32 getTrigStart() { return getTrig() & PAD_BUTTON_START; }
    inline u32 getHold() { return mDoCPd_c::m_gzPadInfo.mButtonFlags; }
    inline u32 getHoldLockL() { return mDoCPd_c::m_gzPadInfo.mHoldLockL; }
    inline u32 getHoldLockR() { return mDoCPd_c::m_gzPadInfo.mHoldLockR; }
    inline u32 getHoldUp() { return getHold() & PAD_BUTTON_UP; }
    inline u32 getHoldDown() { return getHold() & PAD_BUTTON_DOWN; }
    inline u32 getHoldLeft() { return getHold() & PAD_BUTTON_LEFT; }
    inline u32 getHoldRight() { return getHold() & PAD_BUTTON_RIGHT; }
    inline u32 getHoldL() { return getHold() & PAD_TRIGGER_L; }
    inline u32 getHoldR() { return getHold() & PAD_TRIGGER_R; }
    inline u32 getHoldA() { return getHold() & PAD_BUTTON_A; }
    inline u32 getHoldB() { return getHold() & PAD_BUTTON_B; }
    inline u32 getHoldZ() { return getHold() & PAD_TRIGGER_Z; }
    inline u32 getHoldY() { return getHold() & PAD_BUTTON_Y; }
    inline u32 getHoldX() { return getHold() & PAD_BUTTON_X; }
    inline f32 getStickX() { return mDoCPd_c::m_gzPadInfo.mMainStickPosX; }
    inline f32 getStickY() { return mDoCPd_c::m_gzPadInfo.mMainStickPosY; }
    inline f32 getStickX3D() { return mDoCPd_c::m_gzPadInfo.mMainStickPosX; }
    inline f32 getStickValue() { return mDoCPd_c::m_gzPadInfo.mMainStickValue; }
    inline s16 getStickAngle() { return mDoCPd_c::m_gzPadInfo.mMainStickAngle; }
    inline s16 getStickAngle3D() { return mDoCPd_c::m_gzPadInfo.mMainStickAngle; }
    inline f32 getSubStickX3D() { return mDoCPd_c::m_gzPadInfo.mCStickPosX; }
    inline f32 getSubStickX() { return mDoCPd_c::m_gzPadInfo.mCStickPosX; }
    inline f32 getSubStickY() { return mDoCPd_c::m_gzPadInfo.mCStickPosY; }
    inline f32 getSubStickValue() { return mDoCPd_c::m_gzPadInfo.mCStickValue; }
    inline s16 getSubStickAngle() { return mDoCPd_c::m_gzPadInfo.mCStickAngle; }
    inline f32 getAnalogR() { return mDoCPd_c::m_gzPadInfo.mTriggerRight; }
    inline f32 getAnalogL() { return mDoCPd_c::m_gzPadInfo.mTriggerLeft; }
};

int gzPrint(int x, int y, u32 color, char const* string, ...);

class gzTextBox : public J2DTextBox {
public:
    gzTextBox() : J2DTextBox() {
        setFont(g_gzInfo.mpFont);
        setFontSize(18.0f, 18.0f);
        m_description[0] = 0;
    }

    gzTextBox(const char* string, u32 color) : J2DTextBox() {
        setFont(g_gzInfo.mpFont);
        setFontSize(18.0f, 18.0f);
        setString(string);
        setCharColor(color);
        setGradColor(color);
        m_description[0] = 0;
    }

    void setStringDesc(const char* string, const char* description) {
        setString(string);
        strcpy(m_description, description);
    }

    void setFullColor(u32 color) {
        setCharColor(color);
        setGradColor(color);
    }

    void setStringf(const char* fmt, ...) {
        char buffer[256];

        va_list list;
        va_start(list, string);
        vsnprintf(buffer, sizeof(buffer), fmt, list);
        va_end(list);

        setString(buffer);
    }

    void draw(f32 x, f32 y, u32 color) {
        if (g_gzInfo.getDropShadows()) {
            setCharColor(0x00000080);
            setGradColor(0x00000080);
            J2DTextBox::draw(x + 2, y + 2, 608.0f, HBIND_LEFT);
        }
        
        setCharColor(color);
        setGradColor(color);
        J2DTextBox::draw(x, y, 608.0f, HBIND_LEFT);
    }

    void draw(f32 x, f32 y, u32 color, J2DTextBoxHBinding binding) {
        if (g_gzInfo.getDropShadows()) {
            setCharColor(0x00000080);
            setGradColor(0x00000080);
            J2DTextBox::draw(x + 2, y + 2, 608.0f, binding);
        }
        
        setCharColor(color);
        setGradColor(color);
        J2DTextBox::draw(x, y, 608.0f, binding);
    }

    char m_description[80]; // todo: is this the best way to handle this?
};

class gzNotification_c {
public:
    gzNotification_c();
    ~gzNotification_c();

    void send(const char* message);
    void draw();
    static const int NOTIFICATION_MAX = 3;

private:
    gzTextBox* mpNotifications[NOTIFICATION_MAX];
    int mNumNotifications;
    u32 mStartFrames[NOTIFICATION_MAX];

    void removeExpired();
};

#endif
