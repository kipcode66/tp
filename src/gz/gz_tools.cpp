#include "d/dolzel.h" // IWYU pragma: keep

#include "gz/gz.h"
#include "gz/gz_menu.h"

gzToolsMenu_c::gzToolsMenu_c() {
    OSReport("creating gzToolsMenu_c\n");

    for (int i = 0; i < TAB_MAX_e; i++) {
        mpTabHeaders[i] = new gzTextBox;
        mpTabHeaders[i]->setFontSize(15.0f,15.0f);
    }

    mpTabHeaders[TAB_CHECKERS_e]->setString("checkers");
    mpTabHeaders[TAB_DISPLAYS_e]->setString("displays");
    mpTabHeaders[TAB_LINK_e]->setString("link");

    mCheckersTab.mParent = this;
    mCheckersTab.create();
    mDisplaysTab.mParent = this;
    mDisplaysTab.create();
    mLinkTab.mParent = this;
    mLinkTab.create();

    mpDescription = new gzTextBox();

    mpDrawCursor = new dSelect_cursor_c(2, 1.0f, NULL);
    mpDrawCursor->setParam(0.96f, 0.84f, 0.06f, 0.5f, 0.5f);
    mpDrawCursor->setAlphaRate(1.0f);

    mpMeterHaihai = new dMeterHaihai_c(3);
    mXPos = 200.0f;

    mTopLine = 0;
}

gzToolsMenu_c::~gzToolsMenu_c() {
    OSReport("deleting gzToolsMenu_c\n");

    for (int i = 0; i < TAB_MAX_e; i++) {
        delete mpTabHeaders[i];
        mpTabHeaders[i] = NULL;
    }

    delete mpDescription;
    mpDescription = NULL;

    delete mpDrawCursor;
    mpDrawCursor = NULL;

    delete mpMeterHaihai;
    mpMeterHaihai = NULL;
}

void gzToolsMenu_c::execute() {
    if (g_gzInfo.mInputWaitTimer != 0) {
        g_gzInfo.mInputWaitTimer--;
        return;
    }

    gzCursor* l_cursor = gzInfo_getCursor();
    int current_max_line;

    switch (mCurrentTab) {
    case TAB_CHECKERS_e:
        if (mCheckersTab.execute() == 0) return;
        current_max_line = OPT_CHECKERS_MAX_e;
        break;
    case TAB_DISPLAYS_e:
        if (mDisplaysTab.execute() == 0) return;
        current_max_line = OPT_DISPLAYS_MAX_e;
        break;
    case TAB_LINK_e:
        if (mLinkTab.execute() == 0) return;
        current_max_line = OPT_LINK_MAX_e;
        break;
    }

    if (!mOption) {
        if (gzPad::getTrigRight()) {
            mCurrentTab = (mCurrentTab + 1) % TAB_MAX_e;
            gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
        }

        if (gzPad::getTrigLeft()) {
            mCurrentTab = (mCurrentTab - 1 + TAB_MAX_e) % TAB_MAX_e;
            gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
        }
    }

    if (gzPad::getTrigB()) {
        if (mOption) {
            mOption = false;
            gzInfo_seStart(Z2SE_SY_CURSOR_CANCEL);
        } else {
            l_cursor->x--;
            l_cursor->y = gzMainMenu_c::MENU_TOOLS;
            gzInfo_seStart(Z2SE_SY_EXP_WIN_CLOSE);
            g_gzInfo.mpMainMenu->startReverseTransition();
            return;
        }
    }

    mpMeterHaihai->_execute(0);

    if (current_max_line == 0)
        return;

    if (!mOption) {
        if (gzPad::getTrigDown()) {
            l_cursor->y = (l_cursor->y + 1) % current_max_line;
            gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
        }

        if (gzPad::getTrigUp()) {
            l_cursor->y = (l_cursor->y - 1 + current_max_line) % current_max_line;
            gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
        }
    }
}

u8 gzToolsMenu_c::getHaihaiFlags(int tab, int line) {
    switch (tab) {
    case TAB_CHECKERS_e:
        switch (line) {
        case OPT_COROTD_e: return gzInfo_isCoroTD() ? mpMeterHaihai->DIR_LEFT_e : mpMeterHaihai->DIR_RIGHT_e;
        case OPT_EBMB_e: return gzInfo_isEndingBlowMoonBoots() ? mpMeterHaihai->DIR_LEFT_e : mpMeterHaihai->DIR_RIGHT_e;
        case OPT_EE_e: return gzInfo_isElevatorEscape() ? mpMeterHaihai->DIR_LEFT_e : mpMeterHaihai->DIR_RIGHT_e;
        case OPT_GORGE_VOID_e: return gzInfo_isGorgeVoid() ? mpMeterHaihai->DIR_LEFT_e : mpMeterHaihai->DIR_RIGHT_e;
        case OPT_LFC_e: return gzInfo_isLadderFreezardCancel() ? mpMeterHaihai->DIR_LEFT_e : mpMeterHaihai->DIR_RIGHT_e;
        case OPT_ROLLING_e: return gzInfo_isRolling() ? mpMeterHaihai->DIR_LEFT_e : mpMeterHaihai->DIR_RIGHT_e;
        case OPT_UMD_e: return gzInfo_isUniversalMapDelay() ? mpMeterHaihai->DIR_LEFT_e : mpMeterHaihai->DIR_RIGHT_e;
        }
        break;
    case TAB_DISPLAYS_e:
        switch (line) {
        case OPT_AB_MASH_e: return gzInfo_isAbMashRate() ? mpMeterHaihai->DIR_LEFT_e : mpMeterHaihai->DIR_RIGHT_e;
        case OPT_LINK_DEBUG_e: return gzInfo_isLinkDebugInfo() ? mpMeterHaihai->DIR_LEFT_e : mpMeterHaihai->DIR_RIGHT_e;
        case OPT_IGT_e: return gzInfo_isInGameTimer() ? mpMeterHaihai->DIR_LEFT_e : mpMeterHaihai->DIR_RIGHT_e;
        case OPT_INPUT_VIEWER_e: return gzInfo_isInputViewer() ? mpMeterHaihai->DIR_LEFT_e : mpMeterHaihai->DIR_RIGHT_e;
        case OPT_LOAD_TIMER_e: return gzInfo_isLoadTimer() ? mpMeterHaihai->DIR_LEFT_e : mpMeterHaihai->DIR_RIGHT_e;
        case OPT_STAGE_INFO_e: return gzInfo_isStageInfo() ? mpMeterHaihai->DIR_LEFT_e : mpMeterHaihai->DIR_RIGHT_e;
        case OPT_TIMER_e: return gzInfo_isTimer() ? mpMeterHaihai->DIR_LEFT_e : mpMeterHaihai->DIR_RIGHT_e;
        }
        break;
    case TAB_LINK_e:
        switch (line) {
        case OPT_DISPLACEMENT_e: return gzInfo_isDisplacement() ? mpMeterHaihai->DIR_LEFT_e : mpMeterHaihai->DIR_RIGHT_e;
        case OPT_FAST_BONK_e: return gzInfo_isFastBonkRecovery() ? mpMeterHaihai->DIR_LEFT_e : mpMeterHaihai->DIR_RIGHT_e;
        case OPT_FAST_MOVEMENT_e: return gzInfo_isFastMovement() ? mpMeterHaihai->DIR_LEFT_e : mpMeterHaihai->DIR_RIGHT_e;
        case OPT_MOVE_LINK_e: return gzInfo_isMoveLink() ? mpMeterHaihai->DIR_LEFT_e : mpMeterHaihai->DIR_RIGHT_e;
        case OPT_NO_SINK_e: return gzInfo_isNoSinkingInSand() ? mpMeterHaihai->DIR_LEFT_e : mpMeterHaihai->DIR_RIGHT_e;
        case OPT_TELEPORT_e: return gzInfo_isTeleport() ? mpMeterHaihai->DIR_LEFT_e : mpMeterHaihai->DIR_RIGHT_e;
        }
        break;
    }
    return mpMeterHaihai->DIR_LEFT_e | mpMeterHaihai->DIR_RIGHT_e;
}

void gzToolsMenu_c::draw() {
    gzCursor* l_cursor = gzInfo_getCursor();

    static const f32 LINE_SPACING = 22.0f;
    static const f32 OPTIONS_X_OFFSET = -20.0f;
    static const f32 HAIHAI_X_OFFSET = 305.0f;
    static const f32 HAIHAI_EXTRA_SPACING = 30.0f;
    static const f32 HAIHAI_Y_OFFSET = -7.0f;
    static const f32 HAIHAI_SCALE_FACTOR = 0.04f;
    static const f32 TAB_HEADER_OFFSET = 15.0f;
    static const f32 TP_CURSOR_X_OFFSET = 20.0f;
    static const int VISIBLE_LINES = 15;

    // Update dynamic lines for the current tab
    switch (mCurrentTab) {
    case TAB_CHECKERS_e:
        mCheckersTab.updateDynamicLines();
        break;
    case TAB_DISPLAYS_e:
        mDisplaysTab.updateDynamicLines();
        break;
    case TAB_LINK_e:
        mLinkTab.updateDynamicLines();
        break;
    }

    f32 X_POS[TAB_MAX_e];
    f32 tab_header_x_alignment = mXPos + TAB_HEADER_OFFSET;
    X_POS[TAB_CHECKERS_e] = tab_header_x_alignment;
    X_POS[TAB_DISPLAYS_e] = tab_header_x_alignment + 70.0f;
    X_POS[TAB_LINK_e] = tab_header_x_alignment + 140.0f;

    u32 cursor_color = gzInfo_getCursorColor();

    f32 y_header_alignment = g_gzInfo.mBackgroundYPos + 48.0f;
    f32 y_lines_alignment = y_header_alignment + 42.0f;

    int current_max_line;
    gzTextBox** currentLines;
    gzTextBox** currentLineOptions;

    // Draw tab headers
    for (int i = 0; i < TAB_MAX_e; i++) {
        // only draw if it doesnt go past the bounds of the menu
        // TODO: fetch this magic number from gzInfo instead
        if (X_POS[i] <= 550.0f) mpTabHeaders[i]->draw(X_POS[i], y_header_alignment, i == mCurrentTab ? cursor_color : COLOR_WHITE);
    }

    switch (mCurrentTab) {
    case TAB_CHECKERS_e:
        current_max_line = OPT_CHECKERS_MAX_e;
        currentLines = mCheckersTab.mpLines;
        currentLineOptions = mCheckersTab.mpLineOptions;
        break;
    case TAB_DISPLAYS_e:
        current_max_line = OPT_DISPLAYS_MAX_e;
        currentLines = mDisplaysTab.mpLines;
        currentLineOptions = mDisplaysTab.mpLineOptions;
        break;
    case TAB_LINK_e:
        current_max_line = OPT_LINK_MAX_e;
        currentLines = mLinkTab.mpLines;
        currentLineOptions = mLinkTab.mpLineOptions;
        break;
    }

    if (l_cursor->y < mTopLine) {
        mTopLine = l_cursor->y;
    } else if (l_cursor->y >= mTopLine + VISIBLE_LINES) {
        mTopLine = l_cursor->y - VISIBLE_LINES + 1;
    }

    // Clamp mTopLine to valid range
    int maxTop = current_max_line - VISIBLE_LINES;
    if (maxTop < 0) maxTop = 0;
    if (mTopLine > maxTop) mTopLine = maxTop;
    if (mTopLine < 0) mTopLine = 0;

    J2DTextBox::TFontSize font_size;
    if (currentLineOptions[0] != NULL) {
        currentLineOptions[0]->getFontSize(font_size);  // assume all have same font size
        mpMeterHaihai->setScale(font_size.mSizeY * HAIHAI_SCALE_FACTOR);
    }

    f32 x_alignment_opts = mXPos + OPTIONS_X_OFFSET;
    f32 x_alignment_haihai = x_alignment_opts + HAIHAI_X_OFFSET;
    f32 x_alignment_tp_cursor = mXPos + TP_CURSOR_X_OFFSET;

    for (int screenIdx = 0; screenIdx < VISIBLE_LINES; screenIdx++) {
        int lineIdx = mTopLine + screenIdx;
        if (lineIdx >= current_max_line) break;

        if (currentLines[lineIdx] != NULL) {
            f32 y_pos = y_lines_alignment + ((screenIdx - 1) * LINE_SPACING);
            f32 y_pos_haihai = y_pos + HAIHAI_Y_OFFSET;

            if (l_cursor->y == lineIdx && gzInfo_isSubMenuVisible()) {
                currentLines[lineIdx]->draw(mXPos, y_pos, cursor_color);
                currentLineOptions[lineIdx]->draw(x_alignment_opts, y_pos, cursor_color, HBIND_CENTER);

                if (mOption && currentLineOptions[lineIdx]->mStringLength != 0) {
                    u8 flags = getHaihaiFlags(mCurrentTab, lineIdx);
                    f32 x_size_haihai = currentLineOptions[lineIdx]->mBounds.f.x + HAIHAI_EXTRA_SPACING;
                    mpMeterHaihai->drawHaihai(flags, x_alignment_haihai, y_pos_haihai, x_size_haihai, 0.0f);
                }

                if (gzInfo_isCursorTypeTP()) {
                    mpDrawCursor->setPos(x_alignment_tp_cursor, y_pos, (J2DPane*)currentLines[lineIdx], false);
                }
            } else {
                currentLines[lineIdx]->draw(mXPos, y_pos, COLOR_WHITE);
                currentLineOptions[lineIdx]->draw(x_alignment_opts, y_pos, COLOR_WHITE, HBIND_CENTER);
            }
        }
    }

    // Draw description if valid and on menu
    if (gzInfo_isSubMenuVisible()) {
        if (currentLines[l_cursor->y] && *currentLines[l_cursor->y]->m_description != 0) {
            f32 description_y = g_gzInfo.mBackgroundHeight + 25.0f;

            mpDescription->setString(currentLines[l_cursor->y]->m_description);
            mpDescription->draw(0.0f, description_y, cursor_color, HBIND_CENTER);
        }
    }

    if (gzInfo_isCursorTypeTP()) {
        mpDrawCursor->draw();
    }
}

void gzToolsMenu_c::gzCheckersTab_c::create() {
    for (int i = 0; i < OPT_CHECKERS_MAX_e; i++) {
        mpLines[i] = new gzTextBox();
        mpLines[i]->mBounds.f.x = 430.0f;
        mpLines[i]->mBounds.f.y = 10.0f;

        mpLineOptions[i] = new gzTextBox();
        mpLineOptions[i]->mBounds.f.y = 10.0f;
    }

    mpLines[0]->setString("coro td");
    mpLines[1]->setString("ending blow moon boots");
    mpLines[2]->setString("elevator escape");
    mpLines[3]->setString("gorge void");
    mpLines[4]->setString("ladder freezard cancel");
    mpLines[5]->setString("rolling");
    mpLines[6]->setString("universal map delay");
}

int gzToolsMenu_c::gzCheckersTab_c::execute() {
    gzCursor* l_cursor = gzInfo_getCursor();

    if (mParent->mOption) {
        if (gzPad::getTrigA()) {
            mParent->mOption = false;
            gzInfo_seStart(Z2SE_SY_CURSOR_CANCEL);
        }

        if (gzPad::getTrigRight()) {
            switch (l_cursor->y) {
            case OPT_COROTD_e:
                if (!gzInfo_isCoroTD()) {
                    gzInfo_onCoroTD();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case OPT_EBMB_e:
                if (!gzInfo_isEndingBlowMoonBoots()) {
                    gzInfo_onEndingBlowMoonBoots();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case OPT_EE_e:
                if (!gzInfo_isElevatorEscape()) {
                    gzInfo_onElevatorEscape();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case OPT_GORGE_VOID_e:
                if (!gzInfo_isGorgeVoid()) {
                    gzInfo_onGorgeVoid();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case OPT_LFC_e:
                if (!gzInfo_isLadderFreezardCancel()) {
                    gzInfo_onLadderFreezardCancel();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case OPT_ROLLING_e:
                if (!gzInfo_isRolling()) {
                    gzInfo_onRolling();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case OPT_UMD_e:
                if (!gzInfo_isUniversalMapDelay()) {
                    gzInfo_onUniversalMapDelay();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            }
        }

        if (gzPad::getTrigLeft()) {
            switch (l_cursor->y) {
            case 0:
                if (gzInfo_isCoroTD()) {
                    gzInfo_offCoroTD();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 1:
                if (gzInfo_isEndingBlowMoonBoots()) {
                    gzInfo_offEndingBlowMoonBoots();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 2:
                if (gzInfo_isElevatorEscape()) {
                    gzInfo_offElevatorEscape();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 3:
                if (gzInfo_isGorgeVoid()) {
                    gzInfo_offGorgeVoid();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 4:
                if (gzInfo_isLadderFreezardCancel()) {
                    gzInfo_offLadderFreezardCancel();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 5:
                if (gzInfo_isRolling()) {
                    gzInfo_offRolling();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 6:
                if (gzInfo_isUniversalMapDelay()) {
                    gzInfo_offUniversalMapDelay();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            }
        }
    } else {
        if (gzPad::getTrigA()) {
            mParent->mOption = true;
            gzInfo_seStart(Z2SE_SY_TALK_CURSOR_OK);
        }
    }

    return 1;
}

void gzToolsMenu_c::gzCheckersTab_c::updateDynamicLines() {
    mpLineOptions[0]->setStringf("%s", gzInfo_isCoroTD() ? "on" : "off");
    mpLineOptions[1]->setStringf("%s", gzInfo_isEndingBlowMoonBoots() ? "on" : "off");
    mpLineOptions[2]->setStringf("%s", gzInfo_isElevatorEscape() ? "on" : "off");
    mpLineOptions[3]->setStringf("%s", gzInfo_isGorgeVoid() ? "on" : "off");
    mpLineOptions[4]->setStringf("%s", gzInfo_isLadderFreezardCancel() ? "on" : "off");
    mpLineOptions[5]->setStringf("%s", gzInfo_isRolling() ? "on" : "off");
    mpLineOptions[6]->setStringf("%s", gzInfo_isUniversalMapDelay() ? "on" : "off");

    J2DTextBox::TFontSize font_size;

    for (int i = 0; i < OPT_CHECKERS_MAX_e; i++) {
        mpLineOptions[i]->getFontSize(font_size);
        font_size.mSizeX *= 0.5f;
        mpLines[i]->mBounds.f.x = mpLines[i]->mStringLength * font_size.mSizeX;
        mpLineOptions[i]->mBounds.f.x = mpLineOptions[i]->mStringLength * font_size.mSizeX;
    }
}

void gzToolsMenu_c::gzDisplaysTab_c::create() {
    for (int i = 0; i < OPT_DISPLAYS_MAX_e; i++) {
        mpLines[i] = new gzTextBox();
        mpLines[i]->mBounds.f.x = 430.0f;
        mpLines[i]->mBounds.f.y = 10.0f;

        mpLineOptions[i] = new gzTextBox();
        mpLineOptions[i]->mBounds.f.y = 10.0f;
    }

    mpLines[0]->setString("a/b mash rate");
    mpLines[1]->setString("link debug info");
    mpLines[2]->setString("in-game timer");
    mpLines[3]->setString("input viewer");
    mpLines[4]->setString("load timer");
    mpLines[5]->setString("stage info");
    mpLines[6]->setString("timer");
}

void gzToolsMenu_c::gzDisplaysTab_c::_delete() {
    for (int i = 0; i < OPT_LINK_MAX_e; i++) {
        delete mpLines[i];
        mpLines[i] = NULL;

        delete mpLineOptions[i];
        mpLineOptions[i] = NULL;
    }
}

int gzToolsMenu_c::gzDisplaysTab_c::execute() {
    gzCursor* l_cursor = gzInfo_getCursor();

    if (mParent->mOption) {
        if (gzPad::getTrigA()) {
            mParent->mOption = false;
            gzInfo_seStart(Z2SE_SY_CURSOR_CANCEL);
        }

        if (gzPad::getTrigRight()) {
            switch (l_cursor->y) {
            case 0:
                if (!gzInfo_isAbMashRate()) {
                    gzInfo_onAbMashRate();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 1:
                if (!gzInfo_isLinkDebugInfo()) {
                    gzInfo_onLinkDebugInfo();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 2:
                if (!gzInfo_isInGameTimer()) {
                    gzInfo_onInGameTimer();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 3:
                if (!gzInfo_isInputViewer()) {
                    gzInfo_onInputViewer();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 4:
                if (!gzInfo_isLoadTimer()) {
                    gzInfo_onLoadTimer();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 5:
                if (!gzInfo_isStageInfo()) {
                    gzInfo_onStageInfo();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 6:
                if (!gzInfo_isTimer()) {
                    gzInfo_onTimer();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            }
        }

        if (gzPad::getTrigLeft()) {
            switch (l_cursor->y) {
            case 0:
                if (gzInfo_isAbMashRate()) {
                    gzInfo_offAbMashRate();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 1:
                if (gzInfo_isLinkDebugInfo()) {
                    gzInfo_offLinkDebugInfo();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 2:
                if (gzInfo_isInGameTimer()) {
                    gzInfo_offInGameTimer();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 3:
                if (gzInfo_isInputViewer()) {
                    gzInfo_offInputViewer();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 4:
                if (gzInfo_isLoadTimer()) {
                    gzInfo_offLoadTimer();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 5:
                if (gzInfo_isStageInfo()) {
                    gzInfo_offStageInfo();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 6:
                if (gzInfo_isTimer()) {
                    gzInfo_offTimer();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            }
        }
    } else {
        if (gzPad::getTrigA()) {
            mParent->mOption = true;
            gzInfo_seStart(Z2SE_SY_TALK_CURSOR_OK);
        }
    }

    return 1;
}

void gzToolsMenu_c::gzDisplaysTab_c::updateDynamicLines() {
    mpLineOptions[0]->setStringf("%s", gzInfo_isAbMashRate() ? "on" : "off");
    mpLineOptions[1]->setStringf("%s", gzInfo_isLinkDebugInfo() ? "on" : "off");
    mpLineOptions[2]->setStringf("%s", gzInfo_isInGameTimer() ? "on" : "off");
    mpLineOptions[3]->setStringf("%s", gzInfo_isInputViewer() ? "on" : "off");
    mpLineOptions[4]->setStringf("%s", gzInfo_isLoadTimer() ? "on" : "off");
    mpLineOptions[5]->setStringf("%s", gzInfo_isStageInfo() ? "on" : "off");
    mpLineOptions[6]->setStringf("%s", gzInfo_isTimer() ? "on" : "off");

    J2DTextBox::TFontSize font_size;

    for (int i = 0; i < OPT_DISPLAYS_MAX_e; i++) {
        mpLineOptions[i]->getFontSize(font_size);
        font_size.mSizeX *= 0.5f;
        mpLines[i]->mBounds.f.x = mpLines[i]->mStringLength * font_size.mSizeX;
        mpLineOptions[i]->mBounds.f.x = mpLineOptions[i]->mStringLength * font_size.mSizeX;
    }
}

void gzToolsMenu_c::gzLinkTab_c::create() {
    for (int i = 0; i < OPT_LINK_MAX_e; i++) {
        mpLines[i] = new gzTextBox();
        mpLines[i]->mBounds.f.x = 430.0f;
        mpLines[i]->mBounds.f.y = 10.0f;

        mpLineOptions[i] = new gzTextBox();
        mpLineOptions[i]->mBounds.f.y = 10.0f;
    }

    mpLines[0]->setString("fast bonk recovery");
    mpLines[1]->setString("fast movement");
    mpLines[2]->setString("no sinking in sand");
    mpLines[3]->setString("teleport");
    mpLines[4]->setString("displacement");
    mpLines[5]->setStringDesc("move link", "move link around freely. L+R+Y to activate");
}

void gzToolsMenu_c::gzLinkTab_c::_delete() {
    for (int i = 0; i < OPT_LINK_MAX_e; i++) {
        delete mpLines[i];
        mpLines[i] = NULL;

        delete mpLineOptions[i];
        mpLineOptions[i] = NULL;
    }
}

int gzToolsMenu_c::gzLinkTab_c::execute() {
    gzCursor* l_cursor = gzInfo_getCursor();

    if (mParent->mOption) {
        if (gzPad::getTrigA()) {
            mParent->mOption = false;
            gzInfo_seStart(Z2SE_SY_CURSOR_CANCEL);
        }

        if (gzPad::getTrigRight()) {
            switch (l_cursor->y) {
            case 0:
                if (!gzInfo_isFastBonkRecovery()) {
                    gzInfo_onFastBonkRecovery();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 1:
                if (!gzInfo_isFastMovement()) {
                    gzInfo_onFastMovement();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 2:
                if (!gzInfo_isNoSinkingInSand()) {
                    gzInfo_onNoSinkingInSand();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 3:
                if (!gzInfo_isTeleport()) {
                    gzInfo_onTeleport();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 4:
                if (!gzInfo_isDisplacement()) {
                    gzInfo_onDisplacement();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 5:
                if (!gzInfo_isMoveLink()) {
                    gzInfo_onMoveLink();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            }
        }

        if (gzPad::getTrigLeft()) {
            switch (l_cursor->y) {
            case 0:
                if (gzInfo_isFastBonkRecovery()) {
                    gzInfo_offFastBonkRecovery();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 1:
                if (gzInfo_isFastMovement()) {
                    gzInfo_offFastMovement();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 2:
                if (gzInfo_isNoSinkingInSand()) {
                    gzInfo_offNoSinkingInSand();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 3:
                if (gzInfo_isTeleport()) {
                    gzInfo_offTeleport();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 4:
                if (gzInfo_isDisplacement()) {
                    gzInfo_offDisplacement();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            case 5:
                if (gzInfo_isMoveLink()) {
                    gzInfo_offMoveLink();
                    gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
                }
                break;
            }
        }
    } else {
        if (gzPad::getTrigA()) {
            mParent->mOption = true;
            gzInfo_seStart(Z2SE_SY_TALK_CURSOR_OK);
        }
    }

    return 1;
}

void gzToolsMenu_c::gzLinkTab_c::updateDynamicLines() {
    mpLineOptions[0]->setStringf("%s", gzInfo_isFastBonkRecovery() ? "on" : "off");
    mpLineOptions[1]->setStringf("%s", gzInfo_isFastMovement() ? "on" : "off");
    mpLineOptions[2]->setStringf("%s", gzInfo_isNoSinkingInSand() ? "on" : "off");
    mpLineOptions[3]->setStringf("%s", gzInfo_isTeleport() ? "on" : "off");
    mpLineOptions[4]->setStringf("%s", gzInfo_isDisplacement() ? "on" : "off");
    mpLineOptions[5]->setStringf("%s", gzInfo_isMoveLink() ? "on" : "off");

    J2DTextBox::TFontSize font_size;

    for (int i = 0; i < OPT_LINK_MAX_e; i++) {
        mpLineOptions[i]->getFontSize(font_size);
        font_size.mSizeX *= 0.5f;
        mpLines[i]->mBounds.f.x = mpLines[i]->mStringLength * font_size.mSizeX;
        mpLineOptions[i]->mBounds.f.x = mpLineOptions[i]->mStringLength * font_size.mSizeX;
    }
}
