#ifndef GZ_MENU_H
#define GZ_MENU_H

#include "d/d_drawlist.h"
#include "d/d_meter_haihai.h"
#include "d/d_select_cursor.h"
#include "f_pc/f_pc_layer.h"
#include "gz/gz.h"

class dSelect_cursor_c;
class dMeterHaihai_c;

class gzMenu_c : public dDlst_base_c {
public:
    struct gzCursor {
        int x;
        int y;
    };

    virtual void _delete() {}
    virtual void execute() {}
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

    virtual void _delete();
    virtual void execute();
    virtual void draw();

    static const int LINE_NUM = MENU_MAX;
    static gzCursor mCursor;

    gzTextBox* mpLines[LINE_NUM];
};

class gzSettingsMenu_c : public gzMenu_c {
public:
    enum gzSettingsMenu_Settings_e {
        SETTING_AREA_RELOAD_BEHAVIOR,
        SETTING_CURSOR_TYPE,
        SETTING_DISPLAY_MODE,
        SETTING_DROP_SHADOW,
        SETTING_FONT,
        SETTING_MENU_PAUSES_GAME,
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

    const char* getAreaReloadText() { return gzInfo_isAreaReload() ? "load area" : "load file"; }
    const char* getDropShadowsText() { return gzInfo_isDropShadows() ? "enabled" : "disabled"; }
    const char* getSwapEquipsText() { return gzInfo_isSwapEquips() ? "yes" : "no"; }
    const char* getDisplayModeText() { return gzInfo_getDisplayMode() ? "progressive" : "interlaced"; }
    // TODO(Pheenoh): Finish writing this functionality
    const char* getMenuPausesGameText() { return "no"; }

    static const int LINE_NUM = SETTING_MAX;
    static gzCursor mCursor;

public:
    gzTextBox* mpLines[LINE_NUM];
    gzTextBox* mpLineOptions[LINE_NUM];
    gzTextBox* mpDescription;
    dSelect_cursor_c* mpDrawCursor;
    dMeterHaihai_c* mpMeterHaihai;

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

    static const int LINE_NUM = 50;
    static gzCursor mCursor;

public:
    gzTextBox* mpLines[LINE_NUM];
    dMeterHaihai_c* mpMeterHaihai;
    int mTopLine;
};

typedef int (*confirmCallback)();
class gzConfirmMenu_c : public gzMenu_c {
public:
    enum gzConfirmMenu_Confirm_e {
        CONFIRM_NO,
        CONFIRM_YES,

        CONFIRM_MAX
    };

    gzConfirmMenu_c();
    gzConfirmMenu_c(confirmCallback);
    gzConfirmMenu_c(confirmCallback, const char* msg);
    ~gzConfirmMenu_c();

    virtual void _delete();
    virtual void execute();
    virtual void draw();

    static const int LINE_NUM = CONFIRM_MAX;
    static gzCursor mCursor;

public:
    gzTextBox* mpLineConfirmPrompt;
    gzTextBox* mpLines[LINE_NUM];
    confirmCallback mpConfirmCallback;
};

class gzFrameworkMenu_c : public gzMenu_c {
public:
    struct ProcessInfo {
        u32 layer_id;
        int node_list_index;
        base_process_class* process;
    };

    static gzMenu_c::gzCursor mCursor;

    gzFrameworkMenu_c();
    ~gzFrameworkMenu_c();

    void execute();
    void draw();
    void _delete();

    static const int MAX_VISIBLE_ROWS = 10;
    static const int NUM_COLUMNS = 5;
    static const int MAX_PROCESSES = 128;  // Should be plenty?

private:
    static char* getProcessName(base_process_class* process);

    int mNumProcesses;
    int mSelectedProcess;
    int mScrollOffset;
    gzTextBox* mpTitle;
    gzTextBox* mpRowTexts[MAX_VISIBLE_ROWS * NUM_COLUMNS];
    gzTextBox* mpHeaders[NUM_COLUMNS];
    dSelect_cursor_c* mpDrawCursor;
    dMeterHaihai_c* mpMeterHaihai;
    ProcessInfo mProcessInfos[MAX_PROCESSES];
};


template <typename T>
inline void gzChangeMenu() {
    gzMenu_c* next = new T();
    g_gzInfo.mpCurrentMenu->_delete();
    delete g_gzInfo.mpCurrentMenu;
    g_gzInfo.mpCurrentMenu = next;

    g_gzInfo.mInputWaitTimer = 5;
}

template <typename T>
inline void gzChangeMenu(confirmCallback i_callback) {
    gzMenu_c* next = new T(i_callback);
    g_gzInfo.mpCurrentMenu->_delete();
    delete g_gzInfo.mpCurrentMenu;
    g_gzInfo.mpCurrentMenu = next;

    g_gzInfo.mInputWaitTimer = 5;
}

template <typename T>
inline void gzChangeMenu(confirmCallback i_callback, const char* msg) {
    gzMenu_c* next = new T(i_callback, msg);
    g_gzInfo.mpCurrentMenu->_delete();
    delete g_gzInfo.mpCurrentMenu;
    g_gzInfo.mpCurrentMenu = next;

    g_gzInfo.mInputWaitTimer = 5;
}

#endif
