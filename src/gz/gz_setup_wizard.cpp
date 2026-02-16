#include "d/dolzel.h" // IWYU pragma: keep

#include "gz/gz_setup_wizard.h"
#include "gz/gz_menu.h"
#include "gz/gz_textbox.h"
#include "gz/gz_utility_draw.h"
#include "d/d_select_cursor.h"

gzSetupWizard_c::gzSetupWizard_c() {
    mStep = STEP_WELCOME;
    mSelection = 0;
    mBootToMenu = false;
    mMenuPauses = true;
    mDisplayMode = false;
    mMenuSfx = true;
    mCursorType = gzInfo_c::CURSOR_CLASSIC;
    mThemeIndex = 10;

    mpTitle = gzTextBox_allocate();
    mpQuestion = gzTextBox_allocate();
    mpOption0 = gzTextBox_allocate();
    mpOption1 = gzTextBox_allocate();
    mpOption2 = gzTextBox_allocate();
    mpHint = gzTextBox_allocate();

    mpTPCursor = new (gzHeap(GZ_GROUP_GRAPHICS), 4) dSelect_cursor_c(2, 1.0f, NULL);
    mpTPCursor->setParam(0.96f, 0.84f, 0.03f, 0.5f, 0.5f);
    mpTPCursor->setAlphaRate(1.0f);
}

gzSetupWizard_c::~gzSetupWizard_c() {
    gzTextBox* boxes[] = {mpTitle, mpQuestion, mpOption0, mpOption1, mpOption2, mpHint};
    for (int i = 0; i < 6; i++) {
        if (boxes[i] != NULL) {
            boxes[i]->setFontSize(18.0f, 18.0f);
        }
    }

    gzTextBox_free(mpTitle);
    gzTextBox_free(mpQuestion);
    gzTextBox_free(mpOption0);
    gzTextBox_free(mpOption1);
    gzTextBox_free(mpOption2);
    gzTextBox_free(mpHint);

    delete mpTPCursor;
    mpTPCursor = NULL;
}

void gzSetupWizard_c::applySettings() {
    g_gzInfo.setBootToMenu(mBootToMenu);
    g_gzInfo.setMenuPausesGame(mMenuPauses);
    g_gzInfo.setDisplayMode(mDisplayMode);
    g_gzInfo.setMenuSfx(mMenuSfx);
    g_gzInfo.setCursorType(mCursorType);
    g_gzInfo.setTextColor(GZ_TEXT_COLORS[mThemeIndex]);
    if (mDisplayMode) {
        gzInfo_setDisplayModeProgressive();
    } else {
        gzInfo_setDisplayModeInterlaced();
    }
    g_gzInfo.storeSettings();
}

void gzSetupWizard_c::execute() {
    if (mStep == STEP_DONE) return;

    if (gzPad::getTrigLeft()) {
        switch (mStep) {
        case STEP_WELCOME:
        case STEP_BOOT_TARGET:
        case STEP_MENU_PAUSES:
        case STEP_DISPLAY_MODE:
        case STEP_MENU_SFX:
            mSelection = mSelection == 0 ? 1 : 0;
            break;
        case STEP_CURSOR_TYPE:
            mSelection = mSelection == 0 ? 2 : mSelection - 1;
            break;
        case STEP_THEME:
            mThemeIndex = (mThemeIndex - 1 + GZ_NUM_TEXT_COLORS) % GZ_NUM_TEXT_COLORS;
            g_gzInfo.setTextColor(GZ_TEXT_COLORS[mThemeIndex]);
            break;
        default:
            break;
        }
        if (mStep == STEP_MENU_SFX) g_gzInfo.setMenuSfx(mSelection == 0);
        gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
    }

    if (gzPad::getTrigRight()) {
        switch (mStep) {
        case STEP_WELCOME:
        case STEP_BOOT_TARGET:
        case STEP_MENU_PAUSES:
        case STEP_DISPLAY_MODE:
        case STEP_MENU_SFX:
            mSelection = mSelection == 1 ? 0 : 1;
            break;
        case STEP_CURSOR_TYPE:
            mSelection = mSelection == 2 ? 0 : mSelection + 1;
            break;
        case STEP_THEME:
            mThemeIndex = (mThemeIndex + 1) % GZ_NUM_TEXT_COLORS;
            g_gzInfo.setTextColor(GZ_TEXT_COLORS[mThemeIndex]);
            break;
        default:
            break;
        }
        if (mStep == STEP_MENU_SFX) g_gzInfo.setMenuSfx(mSelection == 0);
        gzInfo_seStart(Z2SE_SY_NAME_CURSOR);
    }

    if (gzPad::getTrigB() && mStep != STEP_WELCOME && mStep != STEP_COMPLETE) {
        switch (mStep) {
        case STEP_CURSOR_TYPE:
            mStep = STEP_WELCOME;
            mSelection = 1;
            break;
        case STEP_THEME:
            mStep = STEP_CURSOR_TYPE;
            mSelection = mCursorType - 1;
            g_gzInfo.setCursorType(mCursorType);
            break;
        case STEP_BOOT_TARGET:
            mStep = STEP_THEME;
            mSelection = 0;
            break;
        case STEP_MENU_PAUSES:
            mStep = STEP_BOOT_TARGET;
            mSelection = mBootToMenu ? 1 : 0;
            break;
        case STEP_DISPLAY_MODE:
            mStep = STEP_MENU_PAUSES;
            mSelection = mMenuPauses ? 0 : 1;
            break;
        case STEP_MENU_SFX:
            mStep = STEP_DISPLAY_MODE;
            mSelection = mDisplayMode ? 1 : 0;
            break;
        default:
            break;
        }
        gzInfo_seStart(Z2SE_SY_CURSOR_CANCEL);
    }

    if (gzPad::getTrigA()) {
        bool wasComplete = (mStep == STEP_COMPLETE);
        switch (mStep) {
        case STEP_WELCOME:
            if (mSelection == 0) {
                applySettings();
                mStep = STEP_DONE;
            } else {
                mStep = STEP_CURSOR_TYPE;
                mSelection = 0;
                g_gzInfo.setCursorType(gzInfo_c::CURSOR_CLASSIC);
            }
            break;
        case STEP_CURSOR_TYPE:
            mCursorType = (u8)(mSelection + 1);
            mStep = STEP_THEME;
            mSelection = 0;
            break;
        case STEP_THEME:
            mStep = STEP_BOOT_TARGET;
            mSelection = 0;
            break;
        case STEP_BOOT_TARGET:
            mBootToMenu = (mSelection == 1);
            mStep = STEP_MENU_PAUSES;
            mSelection = 0;
            break;
        case STEP_MENU_PAUSES:
            mMenuPauses = (mSelection == 0);
            mStep = STEP_DISPLAY_MODE;
            mSelection = 0;
            break;
        case STEP_DISPLAY_MODE:
            mDisplayMode = (mSelection == 1);
            mStep = STEP_MENU_SFX;
            mSelection = 0;
            break;
        case STEP_MENU_SFX:
            mMenuSfx = (mSelection == 0);
            applySettings();
            mStep = STEP_COMPLETE;
            mSelection = 0;
            break;
        case STEP_COMPLETE:
            mStep = STEP_DONE;
            break;
        default:
            break;
        }
        if (!wasComplete) {
            gzInfo_seStart(Z2SE_SY_CURSOR_OK);
        }
    }

    if (mStep == STEP_CURSOR_TYPE) {
        g_gzInfo.setCursorType((u8)(mSelection + 1));
    }
    if (mStep == STEP_DISPLAY_MODE) {
        if (mSelection == 1) {
            gzInfo_setDisplayModeProgressive();
        } else {
            gzInfo_setDisplayModeInterlaced();
        }
    }
    if (mStep == STEP_MENU_SFX) {
        g_gzInfo.setMenuSfx(mSelection == 0);
    }
}

void gzSetupWizard_c::draw() {
    if (mStep == STEP_DONE) return;

    u32 theme = g_gzInfo.getTextColor();
    u32 cursorColor = gzInfo_getCursorColor();
    bool showTP = gzInfo_isCursorTypeTP();

    static const f32 BOX_W = 380.0f;
    static const f32 BOX_H = 180.0f;
    static const f32 BOX_X = (608.0f - BOX_W) / 2.0f;
    static const f32 BOX_Y = (448.0f - BOX_H) / 2.0f;

    // GX primitives
    GXColor bgColor = {35, 33, 25, 220};
    gzDrawFilledRect(BOX_X, BOX_Y, BOX_W, BOX_H, bgColor);

    GXColor borderColor = gzGetThemedBorderColor(theme, 255);
    gzDrawRectOutline(BOX_X, BOX_Y, BOX_W, BOX_H, 2.0f, borderColor);

    GXColor innerColor = gzGetThemedHighlightColor(theme, 120);
    gzDrawRectOutline(BOX_X + 2.0f, BOX_Y + 2.0f, BOX_W - 4.0f, BOX_H - 4.0f, 1.0f, innerColor);

    GXColor sepColor = gzGetThemedSeparatorColor(theme, 180);
    gzDrawHorizontalLine(BOX_X + 10.0f, BOX_X + BOX_W - 10.0f, BOX_Y + 46.0f, 1.0f, sepColor);

    // Reset J2D context after GX primitives
    gzSetup2DContext();

    if (mpTitle != NULL) {
        mpTitle->setFontSize(22.0f, 22.0f);
        mpTitle->setString("tpgz v2 setup");
        mpTitle->draw(0.0f, BOX_Y + 33.0f, theme, HBIND_CENTER);
    }

    const char* question = "";
    switch (mStep) {
    case STEP_WELCOME: question = "run first time setup?"; break;
    case STEP_BOOT_TARGET: question = "when tpgz boots, what should load?"; break;
    case STEP_MENU_PAUSES: question = "should the menu pause the game?"; break;
    case STEP_CURSOR_TYPE: question = "select your cursor type"; break;
    case STEP_THEME: question = "select your theme"; break;
    case STEP_DISPLAY_MODE: question = "select display mode"; break;
    case STEP_MENU_SFX: question = "enable menu sound effects?"; break;
    case STEP_COMPLETE: question = "setup complete!"; break;
    default: break;
    }

    if (mpQuestion != NULL) {
        mpQuestion->setFontSize(18.0f, 18.0f);
        mpQuestion->setString(question);
        mpQuestion->draw(0.0f, BOX_Y + 68.0f, COLOR_WHITE, HBIND_CENTER);
    }

    f32 optionY = BOX_Y + 110.0f;
    gzTextBox* tpCursorTarget = NULL;
    f32 tpCursorX = 0.0f;

    switch (mStep) {
    case STEP_WELCOME: {
        static const f32 W_OPT0_X = -40.0f;
        static const f32 W_OPT1_X = 40.0f;
        u32 col0 = (mSelection == 0) ? cursorColor : COLOR_WHITE;
        u32 col1 = (mSelection == 1) ? cursorColor : COLOR_WHITE;
        if (mpOption0 != NULL) {
            mpOption0->setFontSize(18.0f, 18.0f);
            mpOption0->setString("no");
            mpOption0->draw(W_OPT0_X, optionY, col0, HBIND_CENTER);
        }
        if (mpOption1 != NULL) {
            mpOption1->setFontSize(18.0f, 18.0f);
            mpOption1->setString("yes");
            mpOption1->draw(W_OPT1_X, optionY, col1, HBIND_CENTER);
        }
        if (showTP && mpTPCursor != NULL) {
            tpCursorTarget = (mSelection == 0) ? mpOption0 : mpOption1;
            tpCursorX = (mSelection == 0) ? W_OPT0_X : W_OPT1_X;
        }
        break;
    }
    case STEP_BOOT_TARGET: {
        static const f32 B_OPT0_X = -60.0f;
        static const f32 B_OPT1_X = 60.0f;
        u32 col0 = (mSelection == 0) ? cursorColor : COLOR_WHITE;
        u32 col1 = (mSelection == 1) ? cursorColor : COLOR_WHITE;
        if (mpOption0 != NULL) {
            mpOption0->setFontSize(18.0f, 18.0f);
            mpOption0->setString("title screen");
            mpOption0->draw(B_OPT0_X, optionY, col0, HBIND_CENTER);
        }
        if (mpOption1 != NULL) {
            mpOption1->setFontSize(18.0f, 18.0f);
            mpOption1->setString("tpgz menu");
            mpOption1->draw(B_OPT1_X, optionY, col1, HBIND_CENTER);
        }
        if (showTP && mpTPCursor != NULL) {
            tpCursorTarget = (mSelection == 0) ? mpOption0 : mpOption1;
            tpCursorX = (mSelection == 0) ? B_OPT0_X : B_OPT1_X;
        }
        break;
    }
    case STEP_MENU_PAUSES: {
        static const f32 M_OPT0_X = -40.0f;
        static const f32 M_OPT1_X = 40.0f;
        u32 col0 = (mSelection == 0) ? cursorColor : COLOR_WHITE;
        u32 col1 = (mSelection == 1) ? cursorColor : COLOR_WHITE;
        if (mpOption0 != NULL) {
            mpOption0->setFontSize(18.0f, 18.0f);
            mpOption0->setString("yes");
            mpOption0->draw(M_OPT0_X, optionY, col0, HBIND_CENTER);
        }
        if (mpOption1 != NULL) {
            mpOption1->setFontSize(18.0f, 18.0f);
            mpOption1->setString("no");
            mpOption1->draw(M_OPT1_X, optionY, col1, HBIND_CENTER);
        }
        if (showTP && mpTPCursor != NULL) {
            tpCursorTarget = (mSelection == 0) ? mpOption0 : mpOption1;
            tpCursorX = (mSelection == 0) ? M_OPT0_X : M_OPT1_X;
        }
        break;
    }
    case STEP_CURSOR_TYPE: {
        u32 col0 = (mSelection == 0) ? cursorColor : COLOR_WHITE;
        u32 col1 = (mSelection == 1) ? cursorColor : COLOR_WHITE;
        u32 col2 = (mSelection == 2) ? cursorColor : COLOR_WHITE;

        static const f32 OPT0_X = -80.0f;
        static const f32 OPT1_X = 0.0f;
        static const f32 OPT2_X = 80.0f;

        if (mpOption0 != NULL) {
            mpOption0->setFontSize(18.0f, 18.0f);
            mpOption0->setString("classic");
            mpOption0->draw(OPT0_X, optionY, col0, HBIND_CENTER);
        }
        if (mpOption1 != NULL) {
            mpOption1->setFontSize(18.0f, 18.0f);
            mpOption1->setString("tp");
            mpOption1->draw(OPT1_X, optionY, col1, HBIND_CENTER);
        }
        if (mpOption2 != NULL) {
            mpOption2->setFontSize(18.0f, 18.0f);
            mpOption2->setString("both");
            mpOption2->draw(OPT2_X, optionY, col2, HBIND_CENTER);
        }

        // Set up TP cursor target for selected option
        if (showTP && mpTPCursor != NULL) {
            switch (mSelection) {
            case 0:
                tpCursorTarget = mpOption0;
                tpCursorX = OPT0_X;
                break;
            case 1:
                tpCursorTarget = mpOption1;
                tpCursorX = OPT1_X;
                break;
            case 2:
                tpCursorTarget = mpOption2;
                tpCursorX = OPT2_X;
                break;
            }
        }
        break;
    }
    case STEP_THEME: {
        if (mpOption0 != NULL) {
            mpOption0->setFontSize(18.0f, 18.0f);
            mpOption0->setStringf("< %s >", gzGetThemeColorName(GZ_TEXT_COLORS[mThemeIndex]));
            mpOption0->draw(0.0f, optionY, cursorColor, HBIND_CENTER);
        }
        if (showTP && mpTPCursor != NULL) {
            tpCursorTarget = mpOption0;
            tpCursorX = 0.0f;
        }
        break;
    }
    case STEP_DISPLAY_MODE: {
        static const f32 DM_OPT0_X = -60.0f;
        static const f32 DM_OPT1_X = 60.0f;
        u32 col0 = (mSelection == 0) ? cursorColor : COLOR_WHITE;
        u32 col1 = (mSelection == 1) ? cursorColor : COLOR_WHITE;
        if (mpOption0 != NULL) {
            mpOption0->setFontSize(18.0f, 18.0f);
            mpOption0->setString("interlaced");
            mpOption0->draw(DM_OPT0_X, optionY, col0, HBIND_CENTER);
        }
        if (mpOption1 != NULL) {
            mpOption1->setFontSize(18.0f, 18.0f);
            mpOption1->setString("progressive");
            mpOption1->draw(DM_OPT1_X, optionY, col1, HBIND_CENTER);
        }
        if (showTP && mpTPCursor != NULL) {
            tpCursorTarget = (mSelection == 0) ? mpOption0 : mpOption1;
            tpCursorX = (mSelection == 0) ? DM_OPT0_X : DM_OPT1_X;
        }
        break;
    }
    case STEP_MENU_SFX: {
        static const f32 S_OPT0_X = -40.0f;
        static const f32 S_OPT1_X = 40.0f;
        u32 col0 = (mSelection == 0) ? cursorColor : COLOR_WHITE;
        u32 col1 = (mSelection == 1) ? cursorColor : COLOR_WHITE;
        if (mpOption0 != NULL) {
            mpOption0->setFontSize(18.0f, 18.0f);
            mpOption0->setString("yes");
            mpOption0->draw(S_OPT0_X, optionY, col0, HBIND_CENTER);
        }
        if (mpOption1 != NULL) {
            mpOption1->setFontSize(18.0f, 18.0f);
            mpOption1->setString("no");
            mpOption1->draw(S_OPT1_X, optionY, col1, HBIND_CENTER);
        }
        if (showTP && mpTPCursor != NULL) {
            tpCursorTarget = (mSelection == 0) ? mpOption0 : mpOption1;
            tpCursorX = (mSelection == 0) ? S_OPT0_X : S_OPT1_X;
        }
        break;
    }
    case STEP_COMPLETE: {
        if (mpOption0 != NULL) {
            mpOption0->setFontSize(18.0f, 18.0f);
            mpOption0->setString("ok");
            mpOption0->draw(0.0f, optionY, cursorColor, HBIND_CENTER);
        }
        if (showTP && mpTPCursor != NULL) {
            tpCursorTarget = mpOption0;
            tpCursorX = 0.0f;
        }
        break;
    }
    default:
        break;
    }

    if (mpHint != NULL) {
        const char* hint = "";
        switch (mStep) {
        case STEP_THEME: hint = "d-pad left/right to cycle, A to confirm"; break;
        case STEP_COMPLETE: hint = "A to confirm"; break;
        default: hint = "d-pad left/right to select, A to confirm"; break;
        }
        mpHint->setFontSize(14.0f, 14.0f);
        mpHint->setString(hint);
        mpHint->draw(0.0f, BOX_Y + BOX_H - 22.0f, COLOR_GRAY, HBIND_CENTER);
    }

    if (tpCursorTarget != NULL) {
        tpCursorTarget->updateBounds();
        f32 cursorX = tpCursorX + 304.0f + gzMenuLayout::TP_CURSOR_X_OFFSET + 3.0f;
        f32 cursorY = optionY + (tpCursorTarget->getHeight() / 2.0f) +
                      gzMenuLayout::TP_CURSOR_Y_OFFSET;
        mpTPCursor->setPos(cursorX, cursorY, (J2DPane*)tpCursorTarget, false);
        mpTPCursor->draw();
    }
}
