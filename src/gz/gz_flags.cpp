#include "d/dolzel.h" // IWYU pragma: keep

#include "gz/gz.h"
#include "gz/gz_menu.h"

gzFlagsMenu_c::gzFlagsMenu_c() {
    OSReport("creating gzFlagsMenu_c\n");

    for (int i = 0; i < TAB_MAX; i++) {
        mpTabHeaders[i] = new gzTextBox;
        mpTabHeaders[i]->setFontSize(15.0f,15.0f);
    }

    mpTabHeaders[TAB_GENERAL]->setString("general");
    mpTabHeaders[TAB_DUNGEON]->setString("dungeon");
    mpTabHeaders[TAB_PORTAL]->setString("portal");
    mpTabHeaders[TAB_RUPEE]->setString("rupee");

    for (int i = 0; i < G_FLAG_MAX; i++) {
        mpLinesGeneral[i] = new gzTextBox();
        mpLinesGeneral[i]->mBounds.f.x = 430.0f;
        mpLinesGeneral[i]->mBounds.f.y = 10.0f;

        mpLineOptionsGeneral[i] = new gzTextBox();
        mpLineOptionsGeneral[i]->mBounds.f.y = 10.0f;
    }

    // Set strings for general tab
    mpLinesGeneral[G_FLAG_BOSS_FLAG]->setStringDesc("boss flag", "sets the boss flag value");
    mpLinesGeneral[G_FLAG_CORO_TD]->setStringDesc("coro td", "toggle temporary flag for coro text displacement");
    mpLinesGeneral[G_FLAG_EPONA_STOLEN]->setStringDesc("epona stolen", "toggle flag for epona being stolen");
    mpLinesGeneral[G_FLAG_EPONA_TAMED]->setStringDesc("epona tamed", "toggle flag for epona being tamed");
    mpLinesGeneral[G_FLAG_MALO_MART_CT]->setStringDesc("malo mart in castle town", "toggle flag for malo mart being open in castle town");
    mpLinesGeneral[G_FLAG_MAP_WARPING]->setStringDesc("map warping", "toggle flag for map warping");
    mpLinesGeneral[G_FLAG_MIDNA_CHARGE]->setStringDesc("midna charge", "toggle flag for midna charge");
    mpLinesGeneral[G_FLAG_MIDNA_HEALTHY]->setStringDesc("midna healed", "toggle flag for midna being healed");
    mpLinesGeneral[G_FLAG_MIDNA_ON_BACK]->setStringDesc("midna on back", "toggle flag for midna appearing on wolf link's back");
    mpLinesGeneral[G_FLAG_MIDNA_Z]->setStringDesc("midna available", "toggle flag for being able to call midna");
    mpLinesGeneral[G_FLAG_RUSL_TD]->setStringDesc("rusl td", "toggle temporary flag for rusl text displacement");
    mpLinesGeneral[G_FLAG_TRANSFORM_WARP]->setStringDesc("transform/warp", "toggle flag for transforming/warping");
    mpLinesGeneral[G_FLAG_WOLF_SENSE]->setStringDesc("wolf sense", "toggle flag for wolf sense");

    for (int i = 0; i < D_FLAG_MAX; i++) {
        mpLinesDungeon[i] = new gzTextBox();
        mpLinesDungeon[i]->mBounds.f.x = 430.0f;
        mpLinesDungeon[i]->mBounds.f.y = 10.0f;

        mpLineOptionsDungeon[i] = new gzTextBox();
        mpLineOptionsDungeon[i]->mBounds.f.y = 10.0f;
    }

    // Set strings for dungeon tab
    mpLinesDungeon[D_FLAG_SELECT_DUNGEON]->setStringDesc("dungeon:", "Selected dungeon flags");
    mpLinesDungeon[D_FLAG_SMALL_KEY]->setStringDesc("small keys", "Selected dungeon small keys");
    mpLinesDungeon[D_FLAG_MAP]->setStringDesc("have map", "Give selected dungeon map");
    mpLinesDungeon[D_FLAG_COMPASS]->setStringDesc("have compass", "Give selected dungeon compass");
    mpLinesDungeon[D_FLAG_BOSS_KEY]->setStringDesc("have boss key", "Give selected dungeon boss key");
    mpLinesDungeon[D_FLAG_DEFEAT_MINIBOSS]->setStringDesc("miniboss dead", "Selected dungeon miniboss is defeated");
    mpLinesDungeon[D_FLAG_DEFEAT_BOSS]->setStringDesc("boss dead", "Selected dungeon boss is defeated");
    mpLinesDungeon[D_FLAG_CLEAR_DUNGEON]->setStringDesc("clear flags", "Clear all selected dungeon flags");

    for (int i = 0; i < P_FLAG_MAX; i++) {
        mpLinesPortal[i] = new gzTextBox();
        mpLinesPortal[i]->mBounds.f.x = 430.0f;
        mpLinesPortal[i]->mBounds.f.y = 10.0f;

        mpLineOptionsPortal[i] = new gzTextBox();
        mpLineOptionsPortal[i]->mBounds.f.y = 10.0f;
    }

    // Set strings for portal tab
    mpLinesPortal[P_FLAG_SELECT_REGION]->setStringDesc("region:", "Select region flag");
    mpLinesPortal[P_FLAG_REGION]->setStringDesc("region unlocked", "Unlock selected map region");
    mpLinesPortal[P_FLAG_SPRING_WARP]->setStringDesc("ordon spring", "Ordon Spring warp portal");
    mpLinesPortal[P_FLAG_S_FARON_WARP]->setStringDesc("south faron", "South Faron warp portal");
    mpLinesPortal[P_FLAG_N_FARON_WARP]->setStringDesc("north faron", "North Faron warp portal");
    mpLinesPortal[P_FLAG_GROVE_WARP]->setStringDesc("sacred grove", "Sacred Grove warp portal");
    mpLinesPortal[P_FLAG_GORGE_WARP]->setStringDesc("eldin gorge", "Eldin Gorge warp portal");
    mpLinesPortal[P_FLAG_KAKARIKO_WARP]->setStringDesc("kak village", "Kakariko Village warp portal");
    mpLinesPortal[P_FLAG_MOUNTAIN_WARP]->setStringDesc("death mountain", "Death Mountain warp portal");
    mpLinesPortal[P_FLAG_BRIDGE_WARP]->setStringDesc("eldin bridge", "Bridge of Eldin warp portal");
    mpLinesPortal[P_FLAG_TOWN_WARP]->setStringDesc("castle town", "Castle Town warp portal");
    mpLinesPortal[P_FLAG_LAKE_WARP]->setStringDesc("lake hylia", "Lake Hylia warp portal");
    mpLinesPortal[P_FLAG_DOMAIN_WARP]->setStringDesc("zora's domain", "Zora's Domain warp portal");
    mpLinesPortal[P_FLAG_UZR_WARP]->setStringDesc("upper river", "Upper Zora's River warp portal");
    mpLinesPortal[P_FLAG_SNOWPEAK_WARP]->setStringDesc("snowpeak", "Snowpeak warp portal");
    mpLinesPortal[P_FLAG_MESA_WARP]->setStringDesc("gerudo mesa", "Gerudo Mesa warp portal");
    mpLinesPortal[P_FLAG_MIRROR_WARP]->setStringDesc("mirror chamber", "Mirror Chamber warp portal");

    for (int i = 0; i < R_FLAG_MAX; i++) {
        mpLinesRupee[i] = new gzTextBox();
        mpLinesRupee[i]->mBounds.f.x = 430.0f;
        mpLinesRupee[i]->mBounds.f.y = 10.0f;

        mpLineOptionsRupee[i] = new gzTextBox();
        mpLineOptionsRupee[i]->mBounds.f.y = 10.0f;
    }

    // Set strings for rupee tab
    mpLinesRupee[R_FLAG_DONATION_AMT]->setStringDesc("donation amount:", "Sets the amount of rupees donated to Charlo");
    mpLinesRupee[R_FLAG_FUNDRAISING_AMT]->setStringDesc("fundraising amount:", "Sets the current fundraising amount");
    mpLinesRupee[R_FLAG_FUNDRAISING_1]->setStringDesc("fundraising 1", "Toggle flag for first fundraising being complete");
    mpLinesRupee[R_FLAG_FUNDRAISING_2]->setStringDesc("fundraising 2", "Toggle flag for second fundraising being complete");
    mpLinesRupee[R_FLAG_RUPEE_CS_FLAG]->setStringDesc("rupee cutscenes", "Toggle rupee cutscenes being enabled");

    mpDescription = new gzTextBox();

    mpDrawCursor = new dSelect_cursor_c(2, 1.0f, NULL);
    mpDrawCursor->setParam(0.96f, 0.84f, 0.06f, 0.5f, 0.5f);
    mpDrawCursor->setAlphaRate(1.0f);

    mpMeterHaihai = new dMeterHaihai_c(3);

    mXPos = 200.0f;
}

gzFlagsMenu_c::~gzFlagsMenu_c() {
    _delete();
}

void gzFlagsMenu_c::_delete() {
    OSReport("deleting gzFlagsMenu_c\n");

    for (int i = 0; i < TAB_MAX; i++) {
        delete mpTabHeaders[i];
        mpTabHeaders[i] = NULL;
    }

    for (int i = 0; i < G_FLAG_MAX; i++) {
        delete mpLinesGeneral[i];
        mpLinesGeneral[i] = NULL;
        delete mpLineOptionsGeneral[i];
        mpLineOptionsGeneral[i] = NULL;
    }

    for (int i = 0; i < D_FLAG_MAX; i++) {
        delete mpLinesDungeon[i];
        mpLinesDungeon[i] = NULL;
        delete mpLineOptionsDungeon[i];
        mpLineOptionsDungeon[i] = NULL;
    }

    for (int i = 0; i < P_FLAG_MAX; i++) {
        delete mpLinesPortal[i];
        mpLinesPortal[i] = NULL;
        delete mpLineOptionsPortal[i];
        mpLineOptionsPortal[i] = NULL;
    }

    for (int i = 0; i < R_FLAG_MAX; i++) {
        delete mpLinesRupee[i];
        mpLinesRupee[i] = NULL;
        delete mpLineOptionsRupee[i];
        mpLineOptionsRupee[i] = NULL;
    }

    delete mpDrawCursor;
    mpDrawCursor = NULL;

    delete mpMeterHaihai;
    mpMeterHaihai = NULL;
}

u8 gzFlagsMenu_c::getHaihaiFlags(int idx) {
    return 0;
}

int gzFlagsMenu_c::getCurrentLineNum() {
    switch (mCurrentTab) {
    case TAB_GENERAL:
        return G_FLAG_MAX;
    case TAB_DUNGEON:
        return D_FLAG_MAX;
    case TAB_PORTAL:
        return P_FLAG_MAX;
    case TAB_RUPEE:
        return R_FLAG_MAX;
    }
}

void gzFlagsMenu_c::updateDynamicLines() {
    gzTextBox** currentLines;
    gzTextBox** currentLineOptions;
    int currentLineNum;

    switch (mCurrentTab) {
    case TAB_GENERAL:
        currentLines = mpLinesGeneral;
        currentLineOptions = mpLineOptionsGeneral;
        currentLineNum = G_FLAG_MAX;
        break;
    case TAB_DUNGEON:
        currentLines = mpLinesDungeon;
        currentLineOptions = mpLineOptionsDungeon;
        currentLineNum = D_FLAG_MAX;
        break;
    case TAB_PORTAL:
        currentLines = mpLinesPortal;
        currentLineOptions = mpLineOptionsPortal;
        currentLineNum = P_FLAG_MAX;
        break;
    case TAB_RUPEE:
        currentLines = mpLinesRupee;
        currentLineOptions = mpLineOptionsRupee;
        currentLineNum = R_FLAG_MAX;
        break;
    default:
        return;
    }
        
    static char* dungeonNames[] = {
        "Forest Temple",     "Goron Mines",        "Lakebed Temple",
        "Arbiter's Grounds", "Snowpeak Ruins",     "Temple of Time",
        "City in the Sky",   "Palace of Twilight", "Hyrule Castle",
    };

    static char* regionNames[] = {
        "ordon", "faron", "eldin", "lanayru", "desert", "snowpeak",
    };

    struct GeneralFlagsData {
        bool l_bossFlag;
        bool l_coroTD;
        bool l_midnaCharge;
        bool l_transformWarp;
        bool l_midnaZ;
        bool l_ruslTD;
        bool l_eponaStolen;
        bool l_eponaTamed;
        bool l_maloMartCT;
        bool l_mapWarping;
        bool l_midnaHealed;
        bool l_midnaRide;
        bool l_wolfSense;
    };

    GeneralFlagsData* generalFlagsData = new GeneralFlagsData();

    for (int i = 0; i < currentLineNum; i++) {
        if (mCurrentTab == TAB_DUNGEON) {
            if (i == D_FLAG_SELECT_DUNGEON) {
                currentLineOptions[i]->setStringf("%s", dungeonNames[mSelectedDungeon]);
            } 
            /* else if (i == D_FLAG_SMALL_KEY) {
                currentLineOptions[i]->setStringf("%d", dungeonFlagsData->smallKeys[mSelectedDungeon]);
            } else if (i == D_FLAG_MAP) {
                currentLineOptions[i]->setStringf("%s", dungeonFlagsData->l_mapFlag ? "on" : "off");
            } */
        } else if (mCurrentTab == TAB_PORTAL) {
            if (i == P_FLAG_SELECT_REGION) {
                currentLineOptions[i]->setStringf("%s", regionNames[mSelectedRegion]);
            } 
            /* else if (i == P_FLAG_REGION) {
                currentLineOptions[i]->setStringf("%s", portalFlagsData->l_mapRegion ? "on" : "off");
            } */
        } else if (mCurrentTab == TAB_GENERAL) {
            if (i == G_FLAG_BOSS_FLAG) {
                currentLineOptions[i]->setStringf("%s", generalFlagsData->l_bossFlag ? "on" : "off");
            }
        } else if (mCurrentTab == TAB_RUPEE) {
            if (i == R_FLAG_DONATION_AMT) {
                currentLineOptions[i]->setStringf("%d", 0);
            }
        }
    }

    J2DTextBox::TFontSize font_size;

    for (int i = 0; i < currentLineNum; i++) {
        currentLineOptions[i]->getFontSize(font_size);
        font_size.mSizeX *= 0.5f;
        currentLines[i]->mBounds.f.x = currentLines[i]->mStringLength * font_size.mSizeX;
        currentLineOptions[i]->mBounds.f.x = currentLineOptions[i]->mStringLength * font_size.mSizeX;
    }
}

void gzFlagsMenu_c::execute() {
    gzCursor* l_cursor = gzInfo_getCursor();
    if (gzPad::getTrigDown() && !mOption) {
        l_cursor->y = (l_cursor->y + 1) % getCurrentLineNum();
        gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
    }

    if (gzPad::getTrigUp() && !mOption) {
        l_cursor->y = (l_cursor->y - 1 + getCurrentLineNum()) % getCurrentLineNum();
        gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
    }

    if (gzPad::getTrigRight()) {
        mCurrentTab = (mCurrentTab + 1) % TAB_MAX;
        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
    }

    if (gzPad::getTrigLeft()) {
        mCurrentTab = (mCurrentTab - 1 + TAB_MAX) % TAB_MAX;
        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
    }

    if (gzPad::getTrigB()) {
        l_cursor->x--;
        l_cursor->y = gzMainMenu_c::MENU_FLAGS;
        gzInfo_seStart(Z2SE_SY_EXP_WIN_CLOSE);
        g_gzInfo.mpMainMenu->startReverseTransition();
        return;
    }

    // if (gzPad::getTrigA()) {

    // }

    mpMeterHaihai->_execute(0);
}

void gzFlagsMenu_c::draw() {
    gzCursor* l_cursor = gzInfo_getCursor();

    static const f32 Y_ALIGNMENT = 100.0f;
    static const f32 OPTIONS_X_OFFSET = -20.0f;
    static const f32 HAIHAI_X_OFFSET = 305.0f;
    static const f32 HAIHAI_Y_OFFSET = -7.0f;
    static const f32 HAIHAI_SCALE_FACTOR = 0.04f;
    static const f32 HAIHAI_EXTRA_SPACING = 30.0f;
    static const f32 TP_CURSOR_X_OFFSET = 20.0f;
    static const f32 CURSOR_Y_BASE = 90.0f;
    static const f32 LINE_SPACING = 22.0f;
    static const f32 DESCRIPTION_X = 0.0f;
    static const f32 DESCRIPTION_Y = 420.0f;
    static const int VISIBLE_LINES = 15;
    static const f32 TAB_HEADER_OFFSET = 15.0f;

    // manually set tab header text distances for now
    // need to support scrolling tabs at some point
    f32 X_POS[TAB_MAX];
    f32 tab_header_x_alignment = mXPos + TAB_HEADER_OFFSET;
    X_POS[TAB_GENERAL] = tab_header_x_alignment;
    X_POS[TAB_DUNGEON] = tab_header_x_alignment + 70.0f;
    X_POS[TAB_PORTAL] = tab_header_x_alignment + 150.0f;
    X_POS[TAB_RUPEE] = tab_header_x_alignment + 210.0f;

    updateDynamicLines();

    J2DTextBox::TFontSize font_size;
    mpLineOptionsGeneral[0]->getFontSize(font_size);
    mpMeterHaihai->setScale(font_size.mSizeY * HAIHAI_SCALE_FACTOR);

    u32 cursor_color = gzInfo_getCursorColor();

    f32 y_header_alignment = g_gzInfo.mBackgroundYPos + 48.0f;
    f32 x_alignment_opts = mXPos + OPTIONS_X_OFFSET;
    f32 x_alignment_haihai = x_alignment_opts + HAIHAI_X_OFFSET;
    f32 y_alignment_haihai = Y_ALIGNMENT + HAIHAI_Y_OFFSET;
    f32 x_alignment_tp_cursor = mXPos + TP_CURSOR_X_OFFSET;

    gzTextBox** currentLines;
    gzTextBox** currentLineOptions;
    int currentLineNum;

    switch (mCurrentTab) {
    case TAB_GENERAL:
        currentLines = mpLinesGeneral;
        currentLineOptions = mpLineOptionsGeneral;
        currentLineNum = G_FLAG_MAX;
        break;
    case TAB_DUNGEON:
        currentLines = mpLinesDungeon;
        currentLineOptions = mpLineOptionsDungeon;
        currentLineNum = D_FLAG_MAX;
        break;
    case TAB_PORTAL:
        currentLines = mpLinesPortal;
        currentLineOptions = mpLineOptionsPortal;
        currentLineNum = P_FLAG_MAX;
        break;
    case TAB_RUPEE:
        currentLines = mpLinesRupee;
        currentLineOptions = mpLineOptionsRupee;
        currentLineNum = R_FLAG_MAX;
        break;
    }

    for (int i = 0; i < TAB_MAX; i++) {
        mpTabHeaders[i]->draw(X_POS[i], y_header_alignment, i == mCurrentTab ? cursor_color : COLOR_WHITE);
    }

    if (l_cursor->y < mTopLine) {
        mTopLine = l_cursor->y;
    } else if (l_cursor->y >= mTopLine + VISIBLE_LINES) {
        mTopLine = l_cursor->y - VISIBLE_LINES + 1;
    }

    int maxTop = currentLineNum - VISIBLE_LINES;
    if (maxTop < 0) maxTop = 0;
    if (mTopLine > maxTop) mTopLine = maxTop;
    if (mTopLine < 0) mTopLine = 0;

    for (int screenIdx = 0; screenIdx < VISIBLE_LINES; screenIdx++) {
        int lineIdx = mTopLine + screenIdx;
        if (lineIdx >= currentLineNum) break;

        f32 y_pos = Y_ALIGNMENT + (screenIdx * LINE_SPACING);
        if (l_cursor->y == lineIdx && l_cursor->x > 0) {
            currentLines[lineIdx]->draw(mXPos, y_pos, cursor_color);
            f32 x_size_haihai = currentLineOptions[lineIdx]->mBounds.f.x + HAIHAI_EXTRA_SPACING;
            mpMeterHaihai->drawHaihai(getHaihaiFlags(lineIdx), x_alignment_haihai, y_pos + HAIHAI_Y_OFFSET, x_size_haihai, 0.0f);
            mpDrawCursor->setPos(x_alignment_tp_cursor, y_pos - 10.0f, (J2DPane*)currentLines[lineIdx], false);
            currentLineOptions[lineIdx]->draw(x_alignment_opts, y_pos, cursor_color, HBIND_CENTER);
        } else {
            currentLines[lineIdx]->draw(mXPos, y_pos, COLOR_WHITE);
            currentLineOptions[lineIdx]->draw(x_alignment_opts, y_pos, COLOR_WHITE, HBIND_CENTER);
        }
    }

    if (l_cursor->x > 0) {
        if (currentLines[l_cursor->y] && *currentLines[l_cursor->y]->m_description != 0) {
            f32 description_x = DESCRIPTION_X;
            f32 description_y = g_gzInfo.mBackgroundHeight + 40.0f;

            mpDescription->setString(currentLines[l_cursor->y]->m_description);
            mpDescription->draw(DESCRIPTION_X, description_y, cursor_color, HBIND_CENTER);
        }
    }

    if (gzInfo_isCursorTypeTP()) {
        if (mpDrawCursor != NULL) {
            mpDrawCursor->draw();
        }
    }
}
