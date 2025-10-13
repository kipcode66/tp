#ifndef GZ_H
#define GZ_H

#include "d/d_com_inf_game.h"
#include "m_Do/m_Do_controller_pad.h"
#include "m_Do/m_Do_machine.h"
#include "JSystem/J2DGraph/J2DPicture.h"
#include "JSystem/J2DGraph/J2DTextBox.h"
#include "SSystem/SComponent/c_API_controller_pad.h"
#include <cstring.h>

class gzMenu_c;
class gzTextBox;
class gzMainMenu_c;
class gzNotification_c;

#define COLOR_WHITE 0xFFFFFFFF

struct gzCommandCombos_s {
    u32 mMoveLink;
};

struct gzSettings_s {
    u32 mTextColor;  // todo: just make this an index?
    bool mDropShadows;
    bool mSwapEquips;
    bool mReloadType;
    u8 mCursorType;
    bool mDisplayMode;
    bool mMenuPausesGame;
    bool mMoveLink;
    gzCommandCombos_s mCommandCombos;
    bool mMenuSfx;
};

// tpgz config file header
struct gzConfigHeader_s {
    u32 version;
    u32 settingsOffset;

    u8 reserved[0x20 - 0x8];
};

class gzSaveLoaderMng_c {
public:
    gzSaveLoaderMng_c() {
        mLoadPhase = PHASE_WAIT_e;
        mTimer = 0;
        mSaveInjectReady = false;
    }

    enum LoadPhase_e {
        PHASE_WAIT_e,         // "do nothing" state
        PHASE_INIT_e,         // file load process initialization
        PHASE_STAGE_INIT_e,   // processes to be run during stage initialization
        PHASE_PLAYER_INIT_e,  // processes to be run after player is initialized
    };

    // container for any extra data to store in the memfile after the main save data
    struct memfileExData_s {
        char name[20];
        cXyz player_pos;
    };

    void execute();

    void start() { mLoadPhase = PHASE_INIT_e; }
    void onStageInit() { mLoadPhase = PHASE_STAGE_INIT_e; }
    void onPlayerInit() { mLoadPhase = PHASE_PLAYER_INIT_e; }
    void wait() { mLoadPhase = PHASE_WAIT_e; }

    bool isSaveInject() { return mSaveInjectReady; }
    
    void end() {
        mLoadPhase = PHASE_WAIT_e;
        mSaveInjectReady = false;
    }

    memfileExData_s mMemfileExData;
    int mLoadPhase;
    bool mSaveInjectReady;
    u8 mTimer;
};

// used for checking whether or not to apply 
struct gzButtonFlags_s {
    bool mMoveLink;
};

struct gzCursor {
    int x;
    int y;
};

class gzInfo_c {
public:
    static const int GZ_SAVE_VERSION = 1;

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

    void loadDefaultSettings();
    int storeSettingsMemcard();
    int loadSettingsMemcard();
    int deleteSettingsMemcard();
    void showHeapUsage();
    void sendNotification(const char* msg);
    void sendNotification(const char* msg, int i_notificationType);
    void setButtonFlags();
    void executeTools();
    void executeMoveLink();

    bool isDisplay() const { return mDisplay; }
    u32 getTextColor() const { return mSettings.mTextColor; }
    void setTextColor(u32 i_textColor) { mSettings.mTextColor = i_textColor; }
    bool isDropShadows() const { return mSettings.mDropShadows; }
    void setDropShadows(bool i_dropShadows) { mSettings.mDropShadows = i_dropShadows; }
    bool isSwapEquips() const { return mSettings.mSwapEquips; }
    void setSwapEquips(bool i_swapEquips) { mSettings.mSwapEquips = i_swapEquips; }
    bool getReloadType() const { return mSettings.mReloadType; }
    bool isMenuSfx() const { return mSettings.mMenuSfx; }
    void setReloadType(bool i_type) { mSettings.mReloadType = i_type; }
    u8 getCursorType() const { return mSettings.mCursorType; }
    void setCursorType(u8 i_type) { mSettings.mCursorType = i_type; }
    // TODO(Pheenoh): store this as u8 instead
    bool getDisplayMode() const { return mSettings.mDisplayMode; }
    void setDisplayMode(bool i_mode) { mSettings.mDisplayMode = i_mode; }
    JUTFont* getFont() { return mpFont; }
    void setFont(JUTFont* i_font) { mpFont = i_font; }
    bool isMenuPausesGame() const { return mSettings.mMenuPausesGame; }
    void setMenuPausesGame(bool i_opt) { mSettings.mMenuPausesGame = i_opt; }
    void setMenuSfx(bool sfx) { mSettings.mMenuSfx = sfx; }
    u32 getCursorColor() { return getCursorType() & CURSOR_CLASSIC ? getTextColor() : COLOR_WHITE; }
    bool isCursorTypeClassic() { return getCursorType() & CURSOR_CLASSIC; }
    bool isCursorTypeTP() { return getCursorType() & CURSOR_TP; }
    bool isMoveLink() { return mSettings.mMoveLink; }
    void setMoveLink(bool i_opt) { mSettings.mMoveLink = i_opt; }
    gzCursor* getCursor() { return &mCursor; }


    void seStart(u32 i_sfxID) {
        if (mSettings.mMenuSfx) mDoAud_seStart(i_sfxID, 0, 0, 0);
    }

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

    void loadFile(const char* filePath, void* buffer, int length, int offset) {
        DVDFileInfo fileInfo;
        if (DVDOpen(filePath, &fileInfo)) {
            int bytesRead = DVDReadPrio(&fileInfo, buffer, length, offset, 2);
            if (bytesRead > 0) {
                DVDClose(&fileInfo);
            } else {
                OSReport("no bytes read!\n");
            }
        } else {
            OSReport("failed to open file %s\n", filePath);
        }
    }

    J2DPicture* mpIcon;
    J2DPicture* mpBackground;
    gzTextBox* mpHeader;

    gzMenu_c* mpCurrentMenu;
    gzMainMenu_c* mpMainMenu;
    gzNotification_c* mpNotification;

    JUTFont* mpFont;
    s16 mInputWaitTimer;
    bool mDisplay;
    bool mGZInitialized;
    gzSettings_s mSettings;
    gzButtonFlags_s mButtonFlags;
    gzCursor mCursor;
    gzSaveLoaderMng_c mSaveLoaderMng;
};

extern gzInfo_c g_gzInfo;

inline gzCursor* gzInfo_getCursor() { return g_gzInfo.getCursor(); }
inline bool gzInfo_isCursorTypeClassic() { return g_gzInfo.isCursorTypeClassic(); }
inline bool gzInfo_isCursorTypeTP() { return g_gzInfo.isCursorTypeTP(); }
inline u32 gzInfo_getCursorColor() { return g_gzInfo.getCursorColor(); }
inline bool gzInfo_isDisplayModeInterlaced() { return g_gzInfo.getDisplayMode() == false; }
inline bool gzInfo_isDisplayModeProgressive() { return g_gzInfo.getDisplayMode() == true; }
inline bool gzInfo_isReloadFile() { return g_gzInfo.getReloadType() == false; }
inline bool gzInfo_isReloadArea() { return g_gzInfo.getReloadType() == true; }
inline const u32 gzInfo_getTextColor() { return g_gzInfo.getTextColor(); }
inline const u8 gzInfo_getCursorType() { return g_gzInfo.getCursorType(); }
inline const bool gzInfo_isDropShadows() { return g_gzInfo.isDropShadows(); }
inline const bool gzInfo_isSwapEquips() { return g_gzInfo.isSwapEquips(); }
inline const bool gzInfo_getDisplayMode() { return g_gzInfo.getDisplayMode(); }
inline const bool gzInfo_getReloadType() { return g_gzInfo.getReloadType(); }
inline const bool gzInfo_isMenuSfx() { return g_gzInfo.isMenuSfx(); }
inline const bool gzInfo_isMoveLink() { return g_gzInfo.isMoveLink(); }
inline u8 gzInfo_previousCursorType() { return g_gzInfo.previousCursorType(); }
inline u8 gzInfo_nextCursorType() { return g_gzInfo.nextCursorType(); }
inline int gzInfo_storeSettingsMemcard() { return g_gzInfo.storeSettingsMemcard(); }
inline int gzInfo_deleteSettingsMemcard() { return g_gzInfo.deleteSettingsMemcard(); }
inline int gzInfo_loadSettingsMemcard() { return g_gzInfo.loadSettingsMemcard(); }

inline void gzInfo_sendNotification(const char* msg) { g_gzInfo.sendNotification(msg); }
inline void gzInfo_sendNotification(const char* msg, int i_notificationType) { g_gzInfo.sendNotification(msg, i_notificationType); }
inline void gzInfo_seStart(u32 i_sfxID) { g_gzInfo.seStart(i_sfxID); }
inline void gzInfo_setTextColor(u32 textColor) { g_gzInfo.setTextColor(textColor); }
inline void gzInfo_setDropShadows(bool dropShadows) { g_gzInfo.setDropShadows(dropShadows); }
inline void gzInfo_setSwapEquips(bool swapEquips) { g_gzInfo.setSwapEquips(swapEquips); }
inline void gzInfo_setReloadType(bool i_type) { g_gzInfo.setReloadType(i_type); }
inline void gzInfo_setReloadArea() { gzInfo_setReloadType(true); }
inline void gzInfo_setReloadFile() { gzInfo_setReloadType(false); }
inline void gzInfo_setCursorType(u8 type) { g_gzInfo.setCursorType(type); }
inline void gzInfo_setDisplayMode(bool mode) { g_gzInfo.setDisplayMode(mode); }
inline void gzInfo_setDisplayModeInterlaced() { mDoMch_render_c::setInterlacedMode(); gzInfo_setDisplayMode(false); }
inline void gzInfo_setDisplayModeProgressive() { mDoMch_render_c::setProgressiveMode(); gzInfo_setDisplayMode(true); }
inline void gzInfo_setMenuPausesGame(bool opt) { g_gzInfo.setMenuPausesGame(opt); }
inline void gzInfo_setMenuSfx(bool sfx) { g_gzInfo.setMenuSfx(sfx); }
inline void gzInfo_setMoveLink(bool i_opt) { g_gzInfo.setMoveLink(i_opt); }
inline void gzInfo_onMoveLink() { gzInfo_setMoveLink(true); }
inline void gzInfo_onSwapEquips() { gzInfo_setSwapEquips(true); }
inline void gzInfo_onDropShadows() { gzInfo_setDropShadows(true); }
inline void gzInfo_onMenuSfx() { gzInfo_setMenuSfx(true); }
inline void gzInfo_offMoveLink() { gzInfo_setMoveLink(false); }
inline void gzInfo_offSwapEquips() { gzInfo_setSwapEquips(false); }
inline void gzInfo_offDropShadows() { gzInfo_setDropShadows(false); }
inline void gzInfo_offMenuSfx() { gzInfo_setMenuSfx(false); }

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
        if (gzInfo_isDropShadows()) {
            setCharColor(0x00000080);
            setGradColor(0x00000080);
            J2DTextBox::draw(x + 2, y + 2, 608.0f, HBIND_LEFT);
        }
        
        setCharColor(color);
        setGradColor(color);
        J2DTextBox::draw(x, y, 608.0f, HBIND_LEFT);
    }

    void draw(f32 x, f32 y, u32 color, J2DTextBoxHBinding binding) {
        if (gzInfo_isDropShadows()) {
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
    enum NotificationType {
        NOTIFY_INFO,
        NOTIFY_WARNING,
        NOTIFY_ERROR
    };

    gzNotification_c();
    gzNotification_c(NotificationType mType);
    ~gzNotification_c();

    void send(const char* message);
    void send(const char* message, NotificationType notification);
    void draw();
    static const int NOTIFICATION_MAX = 3;

private:
    gzTextBox* mpNotifications[NOTIFICATION_MAX];
    int mNumNotifications;
    u32 mStartFrames[NOTIFICATION_MAX];
    NotificationType mType;

    void removeExpired();
};

#endif
