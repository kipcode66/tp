#include "d/dolzel.h" // IWYU pragma: keep

#include "c/c_damagereaction.h"

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
    u8 haihai_flags = gzMainMenu_c::ARROW_LEFT | gzMainMenu_c::ARROW_RIGHT;

    switch (mCurrentTab) {
    case TAB_GENERAL:
        switch (idx) {
        case G_FLAG_BOSS_FLAG:
            gzInfo_getBossFlag() == 0 ? haihai_flags &= ~gzMainMenu_c::ARROW_LEFT : haihai_flags &= ~gzMainMenu_c::ARROW_RIGHT;
            break;
        case G_FLAG_CORO_TD:
            !gzInfo_isCoroTD() ? haihai_flags &= ~gzMainMenu_c::ARROW_LEFT : haihai_flags &= ~gzMainMenu_c::ARROW_RIGHT;
            break;
        case G_FLAG_EPONA_STOLEN:
            !gzInfo_isEponaStolen() ? haihai_flags &= ~gzMainMenu_c::ARROW_LEFT : haihai_flags &= ~gzMainMenu_c::ARROW_RIGHT;
            break;
        case G_FLAG_EPONA_TAMED:
            !gzInfo_isEponaTamed() ? haihai_flags &= ~gzMainMenu_c::ARROW_LEFT : haihai_flags &= ~gzMainMenu_c::ARROW_RIGHT;
            break;
        case G_FLAG_MALO_MART_CT:
            !gzInfo_isMaloMartCT() ? haihai_flags &= ~gzMainMenu_c::ARROW_LEFT : haihai_flags &= ~gzMainMenu_c::ARROW_RIGHT;
            break;
        case G_FLAG_MAP_WARPING:
            !gzInfo_isMapWarping() ? haihai_flags &= ~gzMainMenu_c::ARROW_LEFT : haihai_flags &= ~gzMainMenu_c::ARROW_RIGHT;
            break;
        case G_FLAG_MIDNA_CHARGE:
            !gzInfo_isMidnaCharge() ? haihai_flags &= ~gzMainMenu_c::ARROW_LEFT : haihai_flags &= ~gzMainMenu_c::ARROW_RIGHT;
            break;
        case G_FLAG_MIDNA_HEALTHY:
            !gzInfo_isMidnaHealthy() ? haihai_flags &= ~gzMainMenu_c::ARROW_LEFT : haihai_flags &= ~gzMainMenu_c::ARROW_RIGHT;
            break;
        case G_FLAG_MIDNA_ON_BACK:
            !gzInfo_isMidnaOnBack() ? haihai_flags &= ~gzMainMenu_c::ARROW_LEFT : haihai_flags &= ~gzMainMenu_c::ARROW_RIGHT;
            break;
        case G_FLAG_MIDNA_Z:
            !gzInfo_isMidnaOnZ() ? haihai_flags &= ~gzMainMenu_c::ARROW_LEFT : haihai_flags &= ~gzMainMenu_c::ARROW_RIGHT;
            break;
        case G_FLAG_RUSL_TD:
            !gzInfo_isRuslTD() ? haihai_flags &= ~gzMainMenu_c::ARROW_LEFT : haihai_flags &= ~gzMainMenu_c::ARROW_RIGHT;
            break;
        case G_FLAG_TRANSFORM_WARP:
            !gzInfo_isTransformWarp() ? haihai_flags &= ~gzMainMenu_c::ARROW_LEFT : haihai_flags &= ~gzMainMenu_c::ARROW_RIGHT;
            break;
        case G_FLAG_WOLF_SENSE:
            !gzInfo_isWolfSense() ? haihai_flags &= ~gzMainMenu_c::ARROW_LEFT : haihai_flags &= ~gzMainMenu_c::ARROW_RIGHT;
            break;
        }

        break;
    case TAB_DUNGEON:
        break;
    }

    return haihai_flags;
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

// move to disc?
static char* dungeonNames[] = {
    "Forest Temple",     "Goron Mines",        "Lakebed Temple",
    "Arbiter's Grounds", "Snowpeak Ruins",     "Temple of Time",
    "City in the Sky",   "Palace of Twilight", "Hyrule Castle",
};

// move to disc?
static char* regionNames[] = {
    "ordon", "faron", "eldin", "lanayru", "desert", "snowpeak",
};

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

    for (int i = 0; i < currentLineNum; i++) {
        switch (mCurrentTab) {
        case TAB_DUNGEON:
            if (i == D_FLAG_SELECT_DUNGEON) {
                currentLineOptions[i]->setStringf("%s", dungeonNames[mSelectedDungeon]);
            } 
            break;
        case TAB_PORTAL:
            switch (i) {
            case P_FLAG_SELECT_REGION:
                currentLineOptions[i]->setStringf("%s", regionNames[mSelectedRegion]);
                break;
            case P_FLAG_REGION:
                currentLineOptions[i]->setStringf("%s", getRegionFlag(mSelectedRegion) ? "on": "off");
                break;   
            }
            break;
        case TAB_GENERAL:
            switch (i) {
            case G_FLAG_BOSS_FLAG:
                currentLineOptions[i]->setStringf("%s", cDmr_SkipInfo > 0 ? "on" : "off");
                break;
            case G_FLAG_CORO_TD:
                currentLineOptions[i]->setStringf("%s", gzInfo_isCoroTD() ? "on" : "off");
                break;
            case G_FLAG_EPONA_STOLEN:
                currentLineOptions[i]->setStringf("%s", gzInfo_isEponaStolen() ? "on" : "off");
                break;
            case G_FLAG_EPONA_TAMED:
                currentLineOptions[i]->setStringf("%s", gzInfo_isEponaTamed() ? "on" : "off");
                break;
            case G_FLAG_MALO_MART_CT:
                currentLineOptions[i]->setStringf("%s", gzInfo_isMaloMartCT() ? "on" : "off");
                break;
            case G_FLAG_MAP_WARPING:
                currentLineOptions[i]->setStringf("%s", gzInfo_isMapWarping() ? "on" : "off");
                break;
            case G_FLAG_MIDNA_CHARGE:
                currentLineOptions[i]->setStringf("%s", gzInfo_isMidnaCharge() ? "on" : "off");
                break;
            case G_FLAG_MIDNA_HEALTHY:
                currentLineOptions[i]->setStringf("%s", gzInfo_isMidnaHealthy() ? "on" : "off");
                break;
            case G_FLAG_MIDNA_ON_BACK:
                currentLineOptions[i]->setStringf("%s", gzInfo_isMidnaOnBack() ? "on" : "off");
                break;
            case G_FLAG_MIDNA_Z:
                currentLineOptions[i]->setStringf("%s", gzInfo_isMidnaOnZ() ? "on" : "off");
                break;
            case G_FLAG_RUSL_TD:
                currentLineOptions[i]->setStringf("%s", gzInfo_isRuslTD() ? "on" : "off");
                break;
            case G_FLAG_TRANSFORM_WARP:
                currentLineOptions[i]->setStringf("%s", gzInfo_isTransformWarp() ? "on" : "off");
                break;
            case G_FLAG_WOLF_SENSE:
                currentLineOptions[i]->setStringf("%s", gzInfo_isWolfSense() ? "on" : "off");
                break;
            }

            break;
        case TAB_RUPEE:
            if (i == R_FLAG_DONATION_AMT) {
                currentLineOptions[i]->setStringf("%d", 0);
            }
            
            break;
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

void gzFlagsMenu_c::setRegionFlag(int regionBit) {
    u8 region = g_dComIfG_gameInfo.info.getPlayer().getPlayerFieldLastStayInfo().getRegion();
    g_dComIfG_gameInfo.info.getPlayer().getPlayerFieldLastStayInfo().setRegion(region ^= (1 << regionBit));
}

bool gzFlagsMenu_c::getRegionFlag(int regionBit) {
    return g_dComIfG_gameInfo.info.getPlayer().getPlayerFieldLastStayInfo().getRegion() & (1 << regionBit);
}

void gzFlagsMenu_c::execute() {
    if (g_gzInfo.mInputWaitTimer != 0) {
        g_gzInfo.mInputWaitTimer--;
        return;
    }

    gzCursor* l_cursor = gzInfo_getCursor();

    if (!mOption) {
        if (gzPad::getTrigDown()) {
            l_cursor->y = (l_cursor->y + 1) % getCurrentLineNum();
            gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
        }

        if (gzPad::getTrigUp()) {
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
    } else {
        if (gzPad::getTrigRight()) {
            switch (mCurrentTab) {
            case TAB_GENERAL:
                switch (l_cursor->y) {
                case G_FLAG_BOSS_FLAG:
                    if (!gzInfo_isBossFlag()) {
                        gzInfo_setBossFlag(50);
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }

                    break;
                case G_FLAG_CORO_TD:
                    if (!gzInfo_isCoroTD()) {
                        gzInfo_onCoroTD();
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }

                    break;
                case G_FLAG_EPONA_STOLEN:
                    if (!gzInfo_isEponaStolen()) {
                        gzInfo_onEponaStolen();
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }
                    
                    break;
                case G_FLAG_EPONA_TAMED:
                    if (!gzInfo_isEponaTamed()) {
                        gzInfo_onEponaTamed();
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }

                    break;
                case G_FLAG_MALO_MART_CT:
                    if (!gzInfo_isMaloMartCT()) {
                        gzInfo_onMaloMartCT();
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }

                    break;
                case G_FLAG_MAP_WARPING:
                    if (!gzInfo_isMapWarping()) {
                        gzInfo_onMapWarping();
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }

                    break;
                case G_FLAG_MIDNA_CHARGE:
                    if (!gzInfo_isMidnaCharge()) {
                        gzInfo_onMidnaCharge();
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }

                    break;
                case G_FLAG_MIDNA_HEALTHY:
                    if (!gzInfo_isMidnaHealthy()) {
                        gzInfo_onMidnaHealthy();
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }

                    break;
                case G_FLAG_MIDNA_ON_BACK:
                    if (!gzInfo_isMidnaOnBack()) {
                        gzInfo_onMidnaOnBack();
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }

                    break;
                case G_FLAG_MIDNA_Z:
                    if (!gzInfo_isMidnaOnZ()) {
                        gzInfo_onMidnaOnZ();
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }

                    break;
                case G_FLAG_RUSL_TD:
                    if (!gzInfo_isRuslTD()) {
                        gzInfo_onRuslTD();
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }

                    break;
                case G_FLAG_TRANSFORM_WARP:
                    if (!gzInfo_isTransformWarp()) {
                        gzInfo_onTransformWarp();
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }

                    break;
                case G_FLAG_WOLF_SENSE:
                    if (!gzInfo_isWolfSense()) {
                        gzInfo_onWolfSense();
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }

                    break;
                }
            case TAB_DUNGEON:
                switch (l_cursor->y) {
                case D_FLAG_SELECT_DUNGEON:
                    mSelectedDungeon = (mSelectedDungeon + 1) % ARRAY_SIZE(dungeonNames);
                    break;
                case D_FLAG_SMALL_KEY:
                    break;
                case D_FLAG_MAP:
                    break;
                case D_FLAG_COMPASS:
                    break;
                case D_FLAG_BOSS_KEY:
                    break;
                case D_FLAG_DEFEAT_MINIBOSS:
                    break;
                case D_FLAG_DEFEAT_BOSS:
                    break;
                case D_FLAG_CLEAR_DUNGEON:
                    break;
                    
                }

                break;
            case TAB_PORTAL:
                switch (l_cursor->y) {
                case P_FLAG_SELECT_REGION:
                    mSelectedRegion = (mSelectedRegion + 1) % ARRAY_SIZE(regionNames);
                    break;
                case P_FLAG_REGION:
                    if (!getRegionFlag(mSelectedRegion)) {
                        setRegionFlag(mSelectedRegion);
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }
                    break;
                case P_FLAG_SPRING_WARP:
                    break;
                case P_FLAG_S_FARON_WARP:
                    break;
                case P_FLAG_N_FARON_WARP:
                    break;
                case P_FLAG_GROVE_WARP:
                    break;
                case P_FLAG_GORGE_WARP:
                    break;
                case P_FLAG_KAKARIKO_WARP:
                    break;
                case P_FLAG_MOUNTAIN_WARP:
                    break;
                case P_FLAG_BRIDGE_WARP:
                    break;
                case P_FLAG_TOWN_WARP:
                    break;
                case P_FLAG_LAKE_WARP:
                    break;
                case P_FLAG_DOMAIN_WARP:
                    break;
                case P_FLAG_UZR_WARP:
                    break;
                case P_FLAG_SNOWPEAK_WARP:
                    break;
                case P_FLAG_MESA_WARP:
                    break;
                case P_FLAG_MIRROR_WARP:
                    break;
                    
                }

                break;
            }
            
        }

        if (gzPad::getTrigLeft()) {
            switch (mCurrentTab) {
            case TAB_GENERAL:
                switch (l_cursor->y) {
                case G_FLAG_BOSS_FLAG:
                    if (gzInfo_isBossFlag()) {
                        gzInfo_setBossFlag(0);
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }

                    break;
                case G_FLAG_CORO_TD:
                    if (gzInfo_isCoroTD()) {
                        gzInfo_offCoroTD();
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }

                    break;
                case G_FLAG_EPONA_STOLEN:
                    if (gzInfo_isEponaStolen()) {
                        gzInfo_offEponaStolen();
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }
                    
                    break;
                case G_FLAG_EPONA_TAMED:
                    if (gzInfo_isEponaTamed()) {
                        gzInfo_offEponaTamed();
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }
                    
                    break;
                case G_FLAG_MALO_MART_CT:
                    if (gzInfo_isMaloMartCT()) {
                        gzInfo_offMaloMartCT();
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }

                    break;
                case G_FLAG_MAP_WARPING:
                    if (gzInfo_isMapWarping()) {
                        gzInfo_offMapWarping();
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }

                    break;
                case G_FLAG_MIDNA_CHARGE:
                    if (gzInfo_isMidnaCharge()) {
                        gzInfo_offMidnaCharge();
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }

                    break;
                case G_FLAG_MIDNA_HEALTHY:
                    if (gzInfo_isMidnaHealthy()) {
                        gzInfo_offMidnaHealthy();
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }

                    break;
                case G_FLAG_MIDNA_ON_BACK:
                    if (gzInfo_isMidnaOnBack()) {
                        gzInfo_offMidnaOnBack();
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }

                    break;
                case G_FLAG_MIDNA_Z:
                    if (gzInfo_isMidnaOnZ()) {
                        gzInfo_offMidnaOnZ();
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }

                    break;
                case G_FLAG_RUSL_TD:
                    if (gzInfo_isRuslTD()) {
                        gzInfo_offRuslTD();
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }

                    break;
                case G_FLAG_TRANSFORM_WARP:
                    if (gzInfo_isTransformWarp()) {
                        gzInfo_offTransformWarp();
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }

                    break;
                case G_FLAG_WOLF_SENSE:
                    if (gzInfo_isWolfSense()) {
                        gzInfo_offWolfSense();
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }

                    break;
                }
            case TAB_DUNGEON:
                switch (l_cursor->y) {
                case D_FLAG_SELECT_DUNGEON:
                    mSelectedDungeon = (mSelectedDungeon - 1 + ARRAY_SIZE(dungeonNames)) % ARRAY_SIZE(dungeonNames);
                    break;
                case D_FLAG_SMALL_KEY:
                    break;
                case D_FLAG_MAP:
                    break;
                case D_FLAG_COMPASS:
                    break;
                case D_FLAG_BOSS_KEY:
                    break;
                case D_FLAG_DEFEAT_MINIBOSS:
                    break;
                case D_FLAG_DEFEAT_BOSS:
                    break;
                case D_FLAG_CLEAR_DUNGEON:
                    break;
                    
                }

                break;
            case TAB_PORTAL:
                switch (l_cursor->y) {
                case P_FLAG_SELECT_REGION:
                    mSelectedRegion = (mSelectedRegion - 1 + ARRAY_SIZE(regionNames)) % ARRAY_SIZE(regionNames);
                    break;
                case P_FLAG_REGION:
                    if (getRegionFlag(mSelectedRegion)) {
                        setRegionFlag(mSelectedRegion);
                        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                    }
                    break;
                case P_FLAG_SPRING_WARP:
                    break;
                case P_FLAG_S_FARON_WARP:
                    break;
                case P_FLAG_N_FARON_WARP:
                    break;
                case P_FLAG_GROVE_WARP:
                    break;
                case P_FLAG_GORGE_WARP:
                    break;
                case P_FLAG_KAKARIKO_WARP:
                    break;
                case P_FLAG_MOUNTAIN_WARP:
                    break;
                case P_FLAG_BRIDGE_WARP:
                    break;
                case P_FLAG_TOWN_WARP:
                    break;
                case P_FLAG_LAKE_WARP:
                    break;
                case P_FLAG_DOMAIN_WARP:
                    break;
                case P_FLAG_UZR_WARP:
                    break;
                case P_FLAG_SNOWPEAK_WARP:
                    break;
                case P_FLAG_MESA_WARP:
                    break;
                case P_FLAG_MIRROR_WARP:
                    break;
                    
                }

                break;
            }
        }
    }

    if (gzPad::getTrigB()) {
        if (mOption) {
            mOption = false;
            gzInfo_seStart(Z2SE_SY_CURSOR_CANCEL);
        } else {
            l_cursor->x--;
            l_cursor->y = gzMainMenu_c::MENU_FLAGS;
            gzInfo_seStart(Z2SE_SY_EXP_WIN_CLOSE);
            g_gzInfo.mpMainMenu->startReverseTransition();
            return;
        }
    }

    if (gzPad::getTrigA()) {
        mOption = !mOption;
        mOption ? gzInfo_seStart(Z2SE_SY_TALK_CURSOR_OK) : gzInfo_seStart(Z2SE_SY_CURSOR_CANCEL);
    }

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
        if (l_cursor->y == lineIdx && gzInfo_isSubMenuVisible()) {
            currentLines[lineIdx]->draw(mXPos, y_pos, cursor_color);
            f32 x_size_haihai = currentLineOptions[lineIdx]->mBounds.f.x + HAIHAI_EXTRA_SPACING;
            if (mOption) {
                mpMeterHaihai->drawHaihai(getHaihaiFlags(lineIdx), x_alignment_haihai, y_pos + HAIHAI_Y_OFFSET, x_size_haihai, 0.0f);
            }
            mpDrawCursor->setPos(x_alignment_tp_cursor, y_pos - 10.0f, (J2DPane*)currentLines[lineIdx], false);
            currentLineOptions[lineIdx]->draw(x_alignment_opts, y_pos, cursor_color, HBIND_CENTER);
        } else {
            currentLines[lineIdx]->draw(mXPos, y_pos, COLOR_WHITE);
            currentLineOptions[lineIdx]->draw(x_alignment_opts, y_pos, COLOR_WHITE, HBIND_CENTER);
        }
    }

    if (gzInfo_isSubMenuVisible()) {
        if (currentLines[l_cursor->y] && *currentLines[l_cursor->y]->m_description != 0) {
            f32 description_x = DESCRIPTION_X;
            f32 description_y = g_gzInfo.mBackgroundHeight + 25.0f;

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
