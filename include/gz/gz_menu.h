#ifndef GZ_MENU_H
#define GZ_MENU_H

#include "d/d_drawlist.h"
#include "d/d_meter_haihai.h"
#include "d/d_select_cursor.h"
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
        MENU_INVENTORY,
        MENU_MEMORY,
        MENU_PRACTICE,
        MENU_SCENE,
        MENU_SETTINGS,
        MENU_TOOLS,
        MENU_WARPING,
    };

    gzMainMenu_c();
    ~gzMainMenu_c();

    virtual void _delete();
    virtual void execute();
    virtual void draw();

    static const int LINE_NUM = 9;
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
        switch (g_gzInfo.getCursorType()) {
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

    const char* getDropShadowsText() {
        return g_gzInfo.getDropShadows() ? "enabled" : "disabled";
    }

    const char* getSwapEquipsText() {
        return g_gzInfo.getSwapEquips() ? "yes" : "no";
    }

    const char* getDisplayModeText() {
        return g_gzInfo.getDisplayMode() ? "progressive" : "interlaced";
    }

    const char* getMenuPausesGameText() {
        return "no";
    }

    static const int LINE_NUM = SETTING_MAX;
    static gzCursor mCursor;

public:
    gzTextBox* mpLines[LINE_NUM];
    gzTextBox* mpLineOptions[LINE_NUM];
    gzTextBox* mpDescription;
    dSelect_cursor_c* mpDrawCursor;
    dMeterHaihai_c* mpMeterHaihai;
};

class gzCreditsMenu_c : public gzMenu_c {
public:
    gzCreditsMenu_c();
    ~gzCreditsMenu_c();

    virtual void _delete();
    virtual void execute();
    virtual void draw();

public:
    // gzTextBox* mpLines[LINE_NUM];
};

template <typename T>
inline void gzChangeMenu() {
    gzMenu_c* next = new T();
    g_gzInfo.mpCurrentMenu->_delete();
    delete g_gzInfo.mpCurrentMenu;
    g_gzInfo.mpCurrentMenu = next;

    g_gzInfo.mInputWaitTimer = 5;
}

#endif
