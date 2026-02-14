#include "d/dolzel.h" // IWYU pragma: keep

#include "gz/gz_menu_tools.h"
#include "gz/gz_menu_main.h"
#include "d/d_select_cursor.h"
#include "JSystem/J2DGraph/J2DPicture.h"

// Checkers tab
static gzBoolOption_s checkerFlags[] = {
    {"coro td", "show frame info when doing coro td", gzInfo_isCoroTD, gzInfo_onCoroTD, gzInfo_offCoroTD},
    {"ebmb", "show frame info for ending blow moon boots", gzInfo_isEndingBlowMoonBoots, gzInfo_onEndingBlowMoonBoots, gzInfo_offEndingBlowMoonBoots},
    {"elevator escape", "show frame info when doing elevator escape", gzInfo_isElevatorEscape, gzInfo_onElevatorEscape, gzInfo_offElevatorEscape},
    {"gorge void", "warp to kakariko gorge", gzInfo_isGorgeVoid, gzInfo_onGorgeVoid, gzInfo_offGorgeVoid},
    {"ladder freezard cancel", "ladder freezard cancel checker", gzInfo_isLadderFreezardCancel, gzInfo_onLadderFreezardCancel, gzInfo_offLadderFreezardCancel},
    {"rolls", "frame checker for chaining rolls", gzInfo_isRollChecker, gzInfo_onRollChecker, gzInfo_offRollChecker},
    {"universal map delay", "practice snowpeak universal map delay timing", gzInfo_isUniversalMapDelay, gzInfo_onUniversalMapDelay, gzInfo_offUniversalMapDelay},
};

// Displays tab
static gzBoolOption_s displayFlags[] = {
    {"a/b mash rate", "display a/b button mashing speeds", gzInfo_isAbMashRate, gzInfo_onAbMashRate, gzInfo_offAbMashRate},
    {"in-game timer", "in-game time timer", gzInfo_isInGameTimer, gzInfo_onInGameTimer, gzInfo_offInGameTimer},
    {"input viewer", "show current inputs", gzInfo_isInputViewer, gzInfo_onInputViewer, gzInfo_offInputViewer},
    {"link debug info", "show link's position, angle, and speed", gzInfo_isLinkDebugInfo, gzInfo_onLinkDebugInfo, gzInfo_offLinkDebugInfo},
    {"load timer", "loading zone timer", gzInfo_isLoadTimer, gzInfo_onLoadTimer, gzInfo_offLoadTimer},
    {"stage info", "show link's current stage info", gzInfo_isStageInfo, gzInfo_onStageInfo, gzInfo_offStageInfo},
    {"timer", "frame timer", gzInfo_isTimer, gzInfo_onTimer, gzInfo_offTimer},
};

// Link tab
static gzBoolOption_s linkFlags[] = {
    {"fast bonk recovery", "reduces bonk animation significantly", gzInfo_isFastBonkRecovery, gzInfo_onFastBonkRecovery, gzInfo_offFastBonkRecovery},
    {"fast movement", "link's movement is much faster", gzInfo_isFastMovement, gzInfo_onFastMovement, gzInfo_offFastMovement},
    {"free cam", "move camera freely (Z+B+A to toggle)", gzInfo_isFreeCam, gzInfo_onFreeCam, gzInfo_offFreeCam},
    {"move link", "move link around freely", gzInfo_isMoveLink, gzInfo_onMoveLink, gzInfo_offMoveLink},
    {"no sinking in sand", "link won't sink in sand", gzInfo_isNoSinkingInSand, gzInfo_onNoSinkingInSand, gzInfo_offNoSinkingInSand},
    {"teleport", "store and load link's position", gzInfo_isTeleport, gzInfo_onTeleport, gzInfo_offTeleport},
};

gzToolsMenu_c::gzToolsMenu_c()
    : mpCheckIconPane(NULL), mpCheckIconBuf(NULL),
      mpXMarkIconPane(NULL), mpXMarkIconBuf(NULL) {
    OSReport("creating gzToolsMenu_c\n");
    mXPos = g_gzInfo.mBackgroundXPos + 170.0f;

    for (int i = 0; i < TAB_MAX_e; i++) {
        mpTabHeaders[i] = gzTextBox_allocate();
        mpTabHeaders[i]->setFontSize(15.0f, 15.0f);
    }

    mpTabHeaders[TAB_CHECKERS_e]->setString("checkers");
    mpTabHeaders[TAB_DISPLAYS_e]->setString("displays");
    mpTabHeaders[TAB_LINK_e]->setString("link");

    // Checkers tab
    for (int i = 0; i < C_MAX; i++) {
        mpLinesCheckers[i] = new (gzHeap(GZ_GROUP_MENU), 4) gzBoolOptionLine(checkerFlags[i].name, checkerFlags[i].desc,
                                                   checkerFlags[i].is, checkerFlags[i].on, checkerFlags[i].off);
    }

    // Displays tab
    for (int i = 0; i < D_MAX; i++) {
        mpLinesDisplays[i] = new (gzHeap(GZ_GROUP_MENU), 4) gzBoolOptionLine(displayFlags[i].name, displayFlags[i].desc,
                                                   displayFlags[i].is, displayFlags[i].on, displayFlags[i].off);
    }

    // Link tab
    for (int i = 0; i < L_MAX; i++) {
        mpLinesLink[i] = new (gzHeap(GZ_GROUP_MENU), 4) gzBoolOptionLine(linkFlags[i].name, linkFlags[i].desc,
                                               linkFlags[i].is, linkFlags[i].on, linkFlags[i].off);
    }

    mCurrentTab = TAB_CHECKERS_e;
    gzInfo_resetTopLine();
    gzInfo_offMenuOption();
}

gzToolsMenu_c::~gzToolsMenu_c() {
    _delete();
}

void gzToolsMenu_c::_delete() {
    OSReport("deleting gzToolsMenu_c\n");
    freeIcons();

    for (int i = 0; i < TAB_MAX_e; i++) {
        gzTextBox_free(mpTabHeaders[i]);
        mpTabHeaders[i] = NULL;
    }
    for (int i = 0; i < C_MAX; i++) {
        delete mpLinesCheckers[i];
        mpLinesCheckers[i] = NULL;
    }
    for (int i = 0; i < D_MAX; i++) {
        delete mpLinesDisplays[i];
        mpLinesDisplays[i] = NULL;
    }
    for (int i = 0; i < L_MAX; i++) {
        delete mpLinesLink[i];
        mpLinesLink[i] = NULL;
    }
}

int gzToolsMenu_c::getCurrentLineNum() {
    switch (mCurrentTab) {
    case TAB_CHECKERS_e:
        return C_MAX;
    case TAB_DISPLAYS_e:
        return D_MAX;
    case TAB_LINK_e:
        return L_MAX;
    }
    return 0;
}

void gzToolsMenu_c::loadIcons() {
    JKRHeap* heap = gzHeap(GZ_GROUP_MENU);

    if (mpCheckIconPane == NULL) {
        mpCheckIconBuf = JKRHeap::alloc(ICON_BTI_SIZE, 32, heap);
        if (mpCheckIconBuf != NULL) {
            gzDVDLoadFile("/gz/check.bti", mpCheckIconBuf, ICON_BTI_SIZE, 0);
            mpCheckIconPane = new (heap, 4) J2DPicture((ResTIMG*)mpCheckIconBuf);
            if (mpCheckIconPane != NULL) {
                mpCheckIconPane->setBlackWhite(
                    JUtility::TColor(0, 0, 0, 0), JUtility::TColor(76, 175, 80, 255));
            }
        }
    }

    if (mpXMarkIconPane == NULL) {
        mpXMarkIconBuf = JKRHeap::alloc(ICON_BTI_SIZE, 32, heap);
        if (mpXMarkIconBuf != NULL) {
            gzDVDLoadFile("/gz/x_mark.bti", mpXMarkIconBuf, ICON_BTI_SIZE, 0);
            mpXMarkIconPane = new (heap, 4) J2DPicture((ResTIMG*)mpXMarkIconBuf);
            if (mpXMarkIconPane != NULL) {
                mpXMarkIconPane->setBlackWhite(
                    JUtility::TColor(0, 0, 0, 0), JUtility::TColor(244, 67, 54, 255));
            }
        }
    }
}

void gzToolsMenu_c::freeIcons() {
    JKRHeap* heap = gzHeap(GZ_GROUP_MENU);

    delete mpCheckIconPane;
    mpCheckIconPane = NULL;
    if (mpCheckIconBuf != NULL) {
        heap->free(mpCheckIconBuf);
        mpCheckIconBuf = NULL;
    }

    delete mpXMarkIconPane;
    mpXMarkIconPane = NULL;
    if (mpXMarkIconBuf != NULL) {
        heap->free(mpXMarkIconBuf);
        mpXMarkIconBuf = NULL;
    }
}

void gzToolsMenu_c::onHighlight() {
    loadIcons();
}

void gzToolsMenu_c::onUnhighlight() {
    freeIcons();
}

void gzToolsMenu_c::execute() {
    if (checkInputWait()) return;
    if (handleBackButton(gzMainMenu_c::MENU_TOOLS)) return;

    gzCursor* l_cursor = gzInfo_getCursor();
    gzBoolOption_s* flags = NULL;
    int maxIdx = 0;

    switch (mCurrentTab) {
    case TAB_CHECKERS_e:
        flags = checkerFlags;
        maxIdx = C_MAX;
        break;
    case TAB_DISPLAYS_e:
        flags = displayFlags;
        maxIdx = D_MAX;
        break;
    case TAB_LINK_e:
        flags = linkFlags;
        maxIdx = L_MAX;
        break;
    }

    if (gzPad::getTrigRight() && !gzInfo_isMenuOption()) {
        mCurrentTab = (mCurrentTab + 1) % TAB_MAX_e;
        l_cursor->y = 0;
        gzInfo_resetTopLine();
        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
    }
    if (gzPad::getTrigLeft() && !gzInfo_isMenuOption()) {
        mCurrentTab = (mCurrentTab - 1 + TAB_MAX_e) % TAB_MAX_e;
        l_cursor->y = 0;
        gzInfo_resetTopLine();
        gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
    }

    if (gzPad::getTrigA()) {
        if (l_cursor->y < maxIdx) {
            if (flags[l_cursor->y].is())
                flags[l_cursor->y].off();
            else
                flags[l_cursor->y].on();
            gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
        }
    }

    handleNavigation(maxIdx);
    finishExecute(maxIdx);
}

void gzToolsMenu_c::draw() {
    static const f32 ICON_SIZE = 14.0f;
    static const u32 COLOR_DIM = 0x808080FFu;

    // Set up tab header x positions
    static const f32 TAB_PADDING = 5.0f;
    f32 tabXPositions[TAB_MAX_e];
    f32 tabBaseX = mXPos;
    tabXPositions[0] = tabBaseX;
    for (int i = 1; i < TAB_MAX_e; i++) {
        mpTabHeaders[i - 1]->updateBounds();
        tabXPositions[i] = tabXPositions[i - 1] + mpTabHeaders[i - 1]->mBounds.f.x + TAB_PADDING;
    }

    // Get current tab's lines and flags
    gzBoolOptionLine** currentLines;
    gzBoolOption_s* flags;
    int currentLineNum;
    switch (mCurrentTab) {
    case TAB_CHECKERS_e:
        currentLines = mpLinesCheckers;
        flags = checkerFlags;
        currentLineNum = C_MAX;
        break;
    case TAB_DISPLAYS_e:
        currentLines = mpLinesDisplays;
        flags = displayFlags;
        currentLineNum = D_MAX;
        break;
    case TAB_LINK_e:
        currentLines = mpLinesLink;
        flags = linkFlags;
        currentLineNum = L_MAX;
        break;
    }

    // Draw tab headers
    f32 yHeader = g_gzInfo.mBackgroundYPos + gzMenuLayout::TAB_HEADER_Y_OFFSET;
    drawTabHeaders(mpTabHeaders, tabXPositions, TAB_MAX_e, mCurrentTab, yHeader, gzInfo_getCursorColor());

    // Draw lines with icons
    gzCursor* l_cursor = gzInfo_getCursor();
    u32 cursorColor = gzInfo_getCursorColor();
    f32 lineX = mXPos;
    f32 optionX = mXPos + getCurrentOptionsXOffset();
    f32 lineY_start = g_gzInfo.mBackgroundYPos + mLineYStart;
    s32 topLine = gzInfo_getTopLine();
    s32 endLine = topLine + gzMenuLayout::VISIBLE_LINES;
    if (endLine > currentLineNum) endLine = currentLineNum;

    for (s32 i = topLine; i < endLine; i++) {
        gzBoolOptionLine* line = currentLines[i];
        s32 screenIdx = i - topLine;
        f32 lineY = lineY_start + (screenIdx * gzMenuLayout::LINE_SPACING);
        bool isSelected = (l_cursor->y == i && gzInfo_isSubMenuVisible());
        bool isOn = flags[i].is();
        u32 color = isSelected ? cursorColor : (isOn ? COLOR_WHITE : COLOR_DIM);

        line->mText->draw(lineX, lineY, color);

        J2DPicture* icon = isOn ? mpCheckIconPane : mpXMarkIconPane;
        if (icon != NULL) {
            f32 iconY = lineY - 17.0f + (gzMenuLayout::LINE_SPACING - ICON_SIZE) / 2.0f;
            gzSetup2DContext();
            icon->setAlpha(255);
            icon->draw(optionX, iconY, ICON_SIZE, ICON_SIZE, false, false, false);
        }

        if (isSelected && gzInfo_isCursorTypeTP() && gzInfo_getTPCursor() != NULL) {
            line->mText->updateBounds();
            f32 cursorX = lineX + (line->mText->getWidth() / 2.0f) + gzMenuLayout::TP_CURSOR_X_OFFSET;
            f32 cursorY = lineY + (line->mText->getHeight() / 2.0f) + gzMenuLayout::TP_CURSOR_Y_OFFSET;
            gzInfo_getTPCursor()->setPos(cursorX, cursorY, (J2DPane*)line->mText, false);
            gzSetup2DContext();
            gzInfo_getTPCursor()->draw();
        }
    }

    drawDescription((l_cursor->y < currentLineNum) ? currentLines[l_cursor->y]->m_description : NULL);
}

gzTabInfo_s gzToolsMenu_c::getTabInfo() {
    gzTabInfo_s info;
    info.hasTabs = true;
    info.currentTab = mCurrentTab;
    info.numTabs = TAB_MAX_e;

    // Calculate positions and widths based on text content
    static const f32 TAB_PADDING = 5.0f;
    f32 tabBaseX = mXPos;
    info.tabX[0] = tabBaseX;
    for (int i = 0; i < TAB_MAX_e; i++) {
        mpTabHeaders[i]->updateBounds();
        info.tabWidth[i] = mpTabHeaders[i]->mBounds.f.x;
        if (i < TAB_MAX_e - 1) {
            info.tabX[i + 1] = info.tabX[i] + info.tabWidth[i] + TAB_PADDING;
        }
    }

    return info;
}
