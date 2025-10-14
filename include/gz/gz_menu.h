#ifndef GZ_MENU_H
#define GZ_MENU_H

#include "d/d_drawlist.h"
#include "d/d_meter_haihai.h"
#include "d/d_select_cursor.h"
#include "gz/gz.h"

class dSelect_cursor_c;
class dMeterHaihai_c;
class gzFrameworkMenu_c;
class gzSettingsMenu_c;
class gzToolsMenu_c;

class gzMenu_c : public dDlst_base_c {
public:
    virtual void _delete() {}
    virtual void execute() {}
    virtual f32 getXPos() {};
    virtual void setXPos(f32 x) {};

protected:
    f32 mXPos;
};

class gzMainMenu_c : public gzMenu_c {
public:

    enum gzMainMenu_Menus_e {
        MENU_CHEATS,
        MENU_FLAGS,
        MENU_FRAMEWORK,
        MENU_INVENTORY,
        MENU_MEMORY,
        MENU_PRACTICE,
        MENU_SCENE,
        MENU_SETTINGS,
        MENU_TOOLS,
        MENU_WARPING,

        MENU_MAX
    };

    enum gzMainMenu_Haihai_e {
        ARROW_LEFT = 1,
        ARROW_DOWN = 2,
        ARROW_RIGHT = 4,
        ARROW_UP = 8
    };

    gzMainMenu_c();
    ~gzMainMenu_c();
    gzMenu_c* getMenu(int idx) { return mpMenus[idx]; }
    void startForwardTransition();
    void startReverseTransition();
    void setDefaultMenuXPos();

    virtual void _delete();
    virtual void execute();
    virtual void draw();
    virtual void setXPos(f32 x) { mXPos = x; }

    static const int LINE_NUM = MENU_MAX;
    
private:
    gzTextBox* mpLines[LINE_NUM];
    gzMenu_c* mpMenus[LINE_NUM];
    gzTextBox* mpDescription;
    gzFrameworkMenu_c* mpFrameworkMenu;
    gzSettingsMenu_c* mpSettingsMenu;
    gzToolsMenu_c* mpToolsMenu;
    dSelect_cursor_c* mpDrawCursor;
    dMeterHaihai_c* mpMeterHaihai;
    bool mTransitioning;
    bool mTransitionForward;
    u32 mTransitionStart;
    f32 mTransitionDuration;
    f32 mMainStartX;
    f32 mMainEndX;
    f32 mSubStartX;
    f32 mSubEndX;
};

class gzCreditsMenu_c;
class gzSettingsMenu_c : public gzMenu_c {
public:
    enum gzSettingsMenu_Settings_e {
        SETTING_CURSOR_TYPE,
        SETTING_DISPLAY_MODE,
        SETTING_DROP_SHADOW,
        SETTING_FONT,
        SETTING_MENU_PAUSES_GAME,
        SETTING_MENU_SFX,
        SETTING_RELOAD_TYPE,
        SETTING_TEXT_COLOR,
        SETTING_SWAP_EQUIPS,
        
        SETTING_SAVE_CARD,
        SETTING_LOAD_CARD,
        SETTING_DELETE_CARD,
        SETTING_COMMAND_COMBOS,
        SETTING_MENU_POSITIONS,
        SETTING_CREDITS,

        SETTING_MAX
    };

    enum gzSettingsMenu_Haihai_e {
        ARROW_RIGHT = 4,
        ARROW_LEFT = 1
    };

    gzSettingsMenu_c();
    ~gzSettingsMenu_c();
    void updateDynamicLines();

    virtual void _delete();
    virtual void execute();
    virtual void draw();
    virtual f32 getXPos() { return mXPos; }
    virtual void setXPos(f32 x) { mXPos = x; }

    char* getCursorTypeText() {
        switch (gzInfo_getCursorType()) {
        case g_gzInfo.CURSOR_CLASSIC:
            return "classic";
        case g_gzInfo.CURSOR_TP:
            return "tp";
        case g_gzInfo.CURSOR_BOTH:
            return "both";
        default:
            return "unknown";
        }
    }

    const char* getReloadTypeText() { return gzInfo_getReloadType() ? "load area" : "load file"; }
    const char* getDropShadowsText() { return gzInfo_isDropShadows() ? "enabled" : "disabled"; }
    const char* getSwapEquipsText() { return gzInfo_isSwapEquips() ? "yes" : "no"; }
    const char* getDisplayModeText() { return gzInfo_getDisplayMode() ? "progressive" : "interlaced"; }
    // TODO(Pheenoh): Finish writing this functionality
    const char* getMenuPausesGameText() { return "no"; }
    const char* getMenuSfxText() { return gzInfo_isMenuSfx() ? "enabled" : "disabled"; }

    static const int LINE_NUM = SETTING_MAX;

private:
    gzTextBox* mpLines[LINE_NUM];
    gzTextBox* mpLineOptions[LINE_NUM];
    gzTextBox* mpDescription;
    dSelect_cursor_c* mpDrawCursor;
    dMeterHaihai_c* mpMeterHaihai;
    gzCreditsMenu_c* mpCreditsMenu;
    bool mOption;

private:
    u8 getHaihaiFlags(int idx);
};

class gzCreditsMenu_c : public gzMenu_c {
public:
    gzCreditsMenu_c();
    ~gzCreditsMenu_c();

    virtual void _delete();
    virtual void execute();
    virtual void draw();
    virtual f32 getXPos() { return mXPos; }
    virtual void setXPos(f32 x) { mXPos = x; }

    static const int LINE_NUM = 50;

private:
    gzTextBox* mpLines[LINE_NUM];
    dMeterHaihai_c* mpMeterHaihai;
    int mTopLine;
};

class gzToolsMenu_c : public gzMenu_c {
public:
    enum gzToolsMenu_Tools_e {
        TOOL_MOVE_LINK,

        TOOL_MAX
    };

    gzToolsMenu_c();
    ~gzToolsMenu_c();
    void updateDynamicLines();
    const char* getMoveLinkText() { return gzInfo_isMoveLink() ? "enabled" : "disabled"; }

    virtual void _delete();
    virtual void execute();
    virtual void draw();
    virtual f32 getXPos() { return mXPos; }
    virtual void setXPos(f32 x) { mXPos = x; }

    static const int LINE_NUM = TOOL_MAX;

private:
    u8 getHaihaiFlags(int);
    
private:
    gzTextBox* mpLines[LINE_NUM];
    gzTextBox* mpLineOptions[LINE_NUM];
    gzTextBox* mpDescription;
    dSelect_cursor_c* mpDrawCursor;
    dMeterHaihai_c* mpMeterHaihai;
    int mTopLine;
    bool mOption;
};

typedef void (*confirmCallback)(void*);
typedef void (*returnCallback)();
class gzConfirmMenu_c : public gzMenu_c {
public:
    enum gzConfirmMenu_Confirm_e {
        CONFIRM_NO,
        CONFIRM_YES,

        CONFIRM_MAX
    };

    gzConfirmMenu_c();
    gzConfirmMenu_c(confirmCallback, void*, returnCallback);
    gzConfirmMenu_c(confirmCallback, void*, returnCallback, const char* msg);
    ~gzConfirmMenu_c();

    virtual void _delete();
    virtual void execute();
    virtual void draw();

    static const int LINE_NUM = CONFIRM_MAX;

private:
    gzTextBox* mpLineConfirmPrompt;
    gzTextBox* mpLines[LINE_NUM];
    confirmCallback mpConfirmCallback;
    void* mCallbackData;
    returnCallback mpReturnCallback;
};

class gzFrameworkMenu_c : public gzMenu_c {
public:
    struct ProcessInfo {
        u32 layer_id;
        int node_list_index;
        base_process_class* process;
    };

    gzFrameworkMenu_c();
    ~gzFrameworkMenu_c();

    void execute();
    void draw();
    void _delete();
    virtual f32 getXPos() { return mXPos; }
    virtual void setXPos(f32 x) { mXPos = x; }

    static const int MAX_VISIBLE_ROWS = 10;
    static const int NUM_COLUMNS = 3;
    static const int MAX_PROCESSES = 128;  // Should be plenty?

private:
    static char* getProcessName(base_process_class* process);
    void setActiveProcesses();

    int mNumProcesses;
    int mSelectedProcess;
    int mScrollOffset;
    gzTextBox* mpTitle;
    gzTextBox* mpRowTexts[MAX_VISIBLE_ROWS * NUM_COLUMNS];
    gzTextBox* mpHeaders[NUM_COLUMNS];
    //gzConfirmMenu_c* mpConfirmMenu;
    dSelect_cursor_c* mpDrawCursor;
    dMeterHaihai_c* mpMeterHaihai;
    ProcessInfo mProcessInfos[MAX_PROCESSES];
    bool mOption;
};

class gzKeyboardMenu_c {
public:
    typedef int (*kbCallback)(gzKeyboardMenu_c* i_keyboard, void* i_data);

    gzKeyboardMenu_c() {}
    gzKeyboardMenu_c(kbCallback finishCb, kbCallback returnCb, void* cbData);
    ~gzKeyboardMenu_c();

    void _delete();
    int execute();
    void draw();

    void setCallbacks(kbCallback finishCb, kbCallback returnCb, void* cbData) {
        mFinishCb = finishCb;
        mReturnCb = returnCb;
        mpCbData = cbData;
    }

    static const int MAX_STRING_LEN = 20;

    gzTextBox* mpCharacters[65];
    gzTextBox* mpStringBox;
    kbCallback mFinishCb;
    kbCallback mReturnCb;
    void* mpCbData;
    int mStringIndex;
    char mString[MAX_STRING_LEN];
};

class gzPracticeMenu_c : public gzMenu_c {
public:
    gzPracticeMenu_c();
    ~gzPracticeMenu_c();

    virtual void _delete();
    virtual void execute();
    virtual void draw();
    virtual f32 getXPos() { return mXPos; }
    virtual void setXPos(f32 x) { mXPos = x; }

    // static const int VISIBLE_TABS = 3;

    static const int ANY_LINE_NUM = 20;
    static const int ALL_DUNGEONS_LINE_NUM = 20;
    static const int HUNDO_LINE_NUM = 20;

    static const int MEMFILE_MAX_NUM = 20;  // TODO: should this be variable or capped?

    enum gzPracticeMenu_Tab_e {
        TAB_ANY,
        TAB_BITE,
        TAB_HUNDO,
        TAB_ALLDUNGEONS,
        TAB_GLITCHLESS,
        TAB_MEMFILES,

        TAB_MAX
    };

    class gzMemfileTab_c {
    public:
        void create();
        int execute();
        void draw();

        int readMemfileNames();
        int loadMemfile(int i_no);
        int deleteMemfile(int i_slotNo);
        static int memfileNameFinishCb(gzKeyboardMenu_c* i_keyboard, void* i_data);

        void setMemfileExists(int i_no, bool i_exists) {
            mMemfileStates[i_no] = i_exists;
        }

        bool isMemfileExist(int i_no) { return mMemfileStates[i_no] == true; }

        gzTextBox* mpLines[MEMFILE_MAX_NUM];
        gzKeyboardMenu_c* mpKeyboard;
        bool mMemfileStates[MEMFILE_MAX_NUM];  // TODO: optimize this
    };

    gzTextBox* mpTabHeaders[TAB_MAX];
    gzTextBox* mpLinesAny[ANY_LINE_NUM];
    gzTextBox* mpLinesAllDungeons[ALL_DUNGEONS_LINE_NUM];
    gzTextBox* mpLinesHundo[HUNDO_LINE_NUM];
    gzMemfileTab_c mMemfileTab;
    dMeterHaihai_c* mpMeterHaihai;
    int mTopLine;
    int mCurrentTab;
};

class gzMemoryMenu_c : public gzMenu_c {
public:
    gzMemoryMenu_c();
    ~gzMemoryMenu_c();

    virtual void _delete();
    virtual void execute();
    virtual void draw();
    virtual f32 getXPos() { return mXPos; }
    virtual void setXPos(f32 x) { mXPos = x; }

    static const int LINE_NUM = 20;

private:
    gzTextBox* mpLines[LINE_NUM];
    int mTopLine;
};

class gzCheatsMenu_c : public gzMenu_c {
public:
    enum gzCheatsMenu_e {
        CHEAT_DISABLE_ITEM_TIMER,
        CHEAT_DISABLE_WALLS,
        CHEAT_INF_AIR,
        CHEAT_INF_ARROWS,
        CHEAT_INF_BOMBS,
        CHEAT_INF_HEARTS,
        CHEAT_INF_OIL,
        CHEAT_INF_RUPEES,
        CHEAT_INF_SLINGSHOT,
        CHEAT_INVINCIBLE_LINK,
        CHEAT_INVINCIBLE_ENEMIES,
        CHEAT_MOON_JUMP,
        CHEAT_SUPER_CLAWSHOT,
        CHEAT_TRANSFORM_ANYWHERE,
        CHEAT_UNRESTRICTED_ITEMS,

        CHEAT_MAX
    };

    gzCheatsMenu_c();
    ~gzCheatsMenu_c();

    virtual void _delete();
    virtual void execute();
    virtual void draw();
    virtual f32 getXPos() { return mXPos; }
    virtual void setXPos(f32 x) { mXPos = x; }

    static const int LINE_NUM = CHEAT_MAX;

private:
    u8 getHaihaiFlags(int idx);
    void updateDynamicLines();

private:
    gzTextBox* mpLines[LINE_NUM];
    gzTextBox* mpLineOptions[LINE_NUM];
    gzTextBox* mpDescription;
    dSelect_cursor_c* mpDrawCursor;
    dMeterHaihai_c* mpMeterHaihai;
    bool mOption;
};

class gzFlagsMenu_c : public gzMenu_c {
public:
    enum gzFlagsMenu_e {
        DUMMY,
        
        FLAG_MAX
    };

    gzFlagsMenu_c();
    ~gzFlagsMenu_c();

    virtual void _delete();
    virtual void execute();
    virtual void draw();
    virtual f32 getXPos() { return mXPos; }
    virtual void setXPos(f32 x) { mXPos = x; }

    static const int LINE_NUM = FLAG_MAX;
    
private:
    u8 getHaihaiFlags(int idx);
    void updateDynamicLines();

private:
    gzTextBox* mpLines[LINE_NUM];
    gzTextBox* mpLineOptions[LINE_NUM];
    gzTextBox* mpDescription;
    dSelect_cursor_c* mpDrawCursor;
    dMeterHaihai_c* mpMeterHaihai;
    bool mOption;
};

inline void gzChangeMenu(gzMenu_c* i_menu) {
    g_gzInfo.mpCurrentMenu = i_menu;
    g_gzInfo.mInputWaitTimer = 2;
}

inline f32 calcSlidePosition(u32 currentFrame, u32 startFrame, f32 startPos, f32 endPos, f32 duration) {
    f32 age = (f32)(currentFrame - startFrame);

    if (age >= duration) {
        return endPos;
    }

    f32 time0 = 0.0f;
    f32 value0 = startPos;
    f32 tan_out0 = 0.0f;
    f32 time1 = duration;
    f32 value1 = endPos;
    f32 tan_in1 = 0.0f;

    return J2DHermiteInterpolation<f32>(age, &time0, &value0, &tan_out0, &time1, &value1, &tan_in1);
}



#endif
