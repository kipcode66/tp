#ifndef GZ_MENU_H
#define GZ_MENU_H

#include "d/d_drawlist.h"
#include "d/d_meter_haihai.h"
#include "d/d_select_cursor.h"
#include "gz/gz.h"
#include "JSystem/JKernel/JKRExpHeap.h"

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
        MENU_HEAPS,
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
    void setMainVisibleX(f32 x) { mMainVisibleX = x; }
    void setMainHiddenX(f32 x) { mMainHiddenX = x; }
    void setSubVisibleX(f32 x) { mSubVisibleX = x; }
    void setSubHiddenX(f32 x) { mSubHiddenX = x; }

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
    f32 mMainVisibleX;
    f32 mMainHiddenX;
    f32 mSubVisibleX;
    f32 mSubHiddenX;
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

    static const int ANY_LINE_NUM = 50;  // TODO: dont hardcode these?
    static const int ALL_DUNGEONS_LINE_NUM = 43;
    static const int HUNDO_LINE_NUM = 86;
    static const int GLITCHLESS_LINE_NUM = 32;
    static const int NOSQ_LINE_NUM = 30;

    static const int MEMFILE_MAX_NUM = 20;  // TODO: should this be variable or capped?

    enum gzPracticeMenu_Tab_e {
        TAB_ANY,
        TAB_NOSQ,
        TAB_HUNDO,
        TAB_ALLDUNGEONS,
        TAB_GLITCHLESS,
        TAB_MEMFILES,

        TAB_MAX
    };

    class gzAnypSavesTab_c {
    public:
        void create();
        int execute();
        
        gzTextBox* mpLines[ANY_LINE_NUM];
    };

    class gzHundoSavesTab_c {
    public:
        void create();
        int execute();
        
        gzTextBox* mpLines[HUNDO_LINE_NUM];
    };

    class gzADSavesTab_c {
    public:
        void create();
        int execute();
        
        gzTextBox* mpLines[ALL_DUNGEONS_LINE_NUM];
    };

    class gzGlitchlessSavesTab_c {
    public:
        void create();
        int execute();
        
        gzTextBox* mpLines[GLITCHLESS_LINE_NUM];
    };

    class gzNoSQSavesTab_c {
    public:
        void create();
        int execute();
        
        gzTextBox* mpLines[NOSQ_LINE_NUM];
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
    gzAnypSavesTab_c mAnypSavesTab;
    gzNoSQSavesTab_c mNoSQSavesTab;
    gzADSavesTab_c mAllDungeonsSavesTab;
    gzHundoSavesTab_c mHundoSavesTab;
    gzGlitchlessSavesTab_c mGlitchlessSavesTab;
    gzMemfileTab_c mMemfileTab;
    gzTextBox* mpDescription;
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
    const char* getDisableItemTimerText() { return gzInfo_isDisableItemTimer() ? "on" : "off"; }
    const char* getDisableWallsText() { return gzInfo_isDisableWalls() ? "on" : "off"; }
    const char* getInfiniteAirText() { return gzInfo_isInfiniteAir() ? "on" : "off"; }
    const char* getInfiniteArrowsText() { return gzInfo_isInfiniteArrows() ? "on" : "off"; }
    const char* getInfiniteBombsText() { return gzInfo_isInfiniteBombs() ? "on" : "off"; }
    const char* getInfiniteHeartsText() { return gzInfo_isInfiniteHearts() ? "on" : "off"; }
    const char* getInfiniteOilText() { return gzInfo_isInfiniteOil() ? "on" : "off"; }
    const char* getInfiniteRupeesText() { return gzInfo_isInfiniteRupees() ? "on" : "off"; }
    const char* getInfiniteSlingshotText() { return gzInfo_isInfiniteSlingshot() ? "on" : "off"; }
    const char* getInvincibleEnemiesText() { return gzInfo_isInvincibleEnemies() ? "on" : "off"; }
    const char* getInvincibleLinkText() { return gzInfo_isInvincibleLink() ? "on" : "off"; }
    const char* getMoonJumpText() { return gzInfo_isMoonJump() ? "on" : "off"; }
    const char* getSuperClawshotText() { return gzInfo_isSuperClawshot() ? "on" : "off"; }
    const char* getTransformAnywhereText() { return gzInfo_isTransformAnywhere() ? "on" : "off"; }
    const char* getUnrestrictedItemsText() { return gzInfo_isUnrestrictedItems() ? "on" : "off"; }

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

    enum gzFlagsMenu_Tabs_e {
        TAB_GENERAL,
        TAB_DUNGEON,
        TAB_PORTAL,
        TAB_RUPEE,

        TAB_MAX
    };

    enum gzFlagsMenu_General_e {
        G_FLAG_BOSS_FLAG,
        G_FLAG_CORO_TD,
        G_FLAG_EPONA_STOLEN,
        G_FLAG_EPONA_TAMED,
        G_FLAG_MALO_MART_CT,
        G_FLAG_MAP_WARPING,
        G_FLAG_MIDNA_CHARGE,
        G_FLAG_MIDNA_HEALTHY,
        G_FLAG_MIDNA_ON_BACK,
        G_FLAG_MIDNA_Z,
        G_FLAG_RUSL_TD,
        G_FLAG_TRANSFORM_WARP,
        G_FLAG_WOLF_SENSE,

        G_FLAG_MAX
    };

    enum gzFlagsMenu_Dungeon_e {
        D_FLAG_SELECT_DUNGEON,
        D_FLAG_SMALL_KEY,
        D_FLAG_MAP,
        D_FLAG_COMPASS,
        D_FLAG_BOSS_KEY,
        D_FLAG_DEFEAT_MINIBOSS,
        D_FLAG_DEFEAT_BOSS,
        D_FLAG_CLEAR_DUNGEON,

        D_FLAG_MAX
    };

    enum gzFlagsMenu_Portal_e {
        P_FLAG_SELECT_REGION,
        P_FLAG_REGION,
        P_FLAG_SPRING_WARP,
        P_FLAG_S_FARON_WARP,
        P_FLAG_N_FARON_WARP,
        P_FLAG_GROVE_WARP,
        P_FLAG_GORGE_WARP,
        P_FLAG_KAKARIKO_WARP,
        P_FLAG_MOUNTAIN_WARP,
        P_FLAG_BRIDGE_WARP,
        P_FLAG_TOWN_WARP,
        P_FLAG_LAKE_WARP,
        P_FLAG_DOMAIN_WARP,
        P_FLAG_UZR_WARP,
        P_FLAG_SNOWPEAK_WARP,
        P_FLAG_MESA_WARP,
        P_FLAG_MIRROR_WARP,

        P_FLAG_MAX
    };

    enum gzFlagsMenu_Rupee_e {
        R_FLAG_DONATION_AMT,
        R_FLAG_FUNDRAISING_AMT,
        R_FLAG_FUNDRAISING_1,
        R_FLAG_FUNDRAISING_2,
        R_FLAG_RUPEE_CS_FLAG,

        R_FLAG_MAX
    };

    gzFlagsMenu_c();
    ~gzFlagsMenu_c();

    virtual void _delete();
    virtual void execute();
    virtual void draw();
    virtual f32 getXPos() { return mXPos; }
    virtual void setXPos(f32 x) { mXPos = x; }

private:
    void updateDynamicLines();
    u8 getHaihaiFlags(int idx);
    int getCurrentLineNum();

private:
    gzTextBox* mpTabHeaders[TAB_MAX];
    gzTextBox* mpLinesGeneral[G_FLAG_MAX];
    gzTextBox* mpLineOptionsGeneral[G_FLAG_MAX];
    gzTextBox* mpLinesDungeon[D_FLAG_MAX];
    gzTextBox* mpLineOptionsDungeon[D_FLAG_MAX];
    gzTextBox* mpLinesPortal[P_FLAG_MAX];
    gzTextBox* mpLineOptionsPortal[P_FLAG_MAX];
    gzTextBox* mpLinesRupee[R_FLAG_MAX];
    gzTextBox* mpLineOptionsRupee[R_FLAG_MAX];
    gzTextBox* mpDescription;

    dSelect_cursor_c* mpDrawCursor;
    dMeterHaihai_c* mpMeterHaihai;
    int mCurrentTab;
    int mTopLine;
    int mSelectedDungeon;
    int mSelectedRegion;
    bool mOption;
    f32 mXPos;
};

class gzHeapsMenu_c : public gzMenu_c {
public:

    enum gzHeaps_HeapInfoList_e {
        HEAP_ROOT_e,   
        HEAP_SYSTEM_e,

        HEAP_INFO_MAX_e
    };

    enum gzHeaps_HeapTrackerList_e {
        HEAP_ARCHIVE_e,
        HEAP_GAME_e,
        HEAP_J2D_e,
        HEAP_ZELDA_e,
        // HEAP_COMMAND_e,
        // HEAP_HOSTIO_e,
        // HEAP_DBPRINT_e,

        HEAP_TRACKER_MAX_e
    };

    gzHeapsMenu_c();
    ~gzHeapsMenu_c();

    virtual void _delete();
    virtual void execute();
    virtual void draw();
    virtual f32 getXPos() { return mXPos; }
    virtual void setXPos(f32 x) { mXPos = x; }
    void drawMagic(s16 i_max, s16 i_magic, f32 i_posX, f32 i_posY);
    void setAlphaMagicChange(bool i_forceSet);
    void drawHeapText();
    void drawFragmentationOverlay(s16 currentMagic);

    class HeapTracker_c {
    public:
        HeapTracker_c(int);
        ~HeapTracker_c();

    public:
        JKRExpHeap* mpHeap;
        gzTextBox* mpTitle;
        gzTextBox* mpTotalBlocks;
        gzTextBox* mpUsedBlocks;
        gzTextBox* mpFreeBlocks;
        int mNumBlocks;
        int mUsedBlocks;
        int mFreeBlocks;
        int mMaxBlocks;
        JKRExpHeap::CMemBlock** mBlocks;
        u32* mStarts;
        f32 mFragmentation;
        int mUsedSizeKB;
        int mFreeSizeKB;
        int mTotalSizeKB;
        int mLargestFreeKB;
        gzTextBox* mpFragmentation;
        gzTextBox* mpUsedSize;
        gzTextBox* mpFreeSize;
        gzTextBox* mpTotalSize;
        gzTextBox* mpLargestFree;
        gzTextBox* mpUsedPercent;
        gzTextBox* mpFreePercent;
    };
private:
    void updateDynamicLines();
    void updateHeapTracker(HeapTracker_c* tracker);
    void drawHeapVisualization(HeapTracker_c* tracker, f32 x, f32 y, f32 width);
    void drawLegend(f32 legend_x, f32 legend_y);
    void drawSwatch(f32 x, f32 y, f32 size, u32 color);

private:
    bool mShowKB;
    int mViewMode;
    HeapTracker_c* mTrackers[HEAP_TRACKER_MAX_e];
    gzTextBox* mpDescription;
    gzTextBox* mpLegendUsed;
    gzTextBox* mpLegendMenuUsed;
    gzTextBox* mpLegendFree;
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

#endif // GZ_MENU_H
