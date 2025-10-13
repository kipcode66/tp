#include "d/dolzel.h" // IWYU pragma: keep

#include "gz/gz.h"
#include "gz/gz_menu.h"

u8 gzCheatsMenu_c::getHaihaiFlags(int idx) {

}

void gzCheatsMenu_c::updateDynamicLines() {
    for (int i = 0; i < LINE_NUM; i++) {
        mpLineOptions[i]->setStringf("off");
    }

    J2DTextBox::TFontSize font_size;

    for (int i = 0; i < LINE_NUM; i++) {
        mpLineOptions[i]->getFontSize(font_size);
        font_size.mSizeX *= 0.5f;
        mpLines[i]->mBounds.f.x = mpLines[i]->mStringLength * font_size.mSizeX;
        mpLineOptions[i]->mBounds.f.x = mpLineOptions[i]->mStringLength * font_size.mSizeX;
    }
}

gzCheatsMenu_c::gzCheatsMenu_c() {
    OSReport("creating gzCheatsMenu_c\n");

    for (int i = 0; i < LINE_NUM; i++) {
        mpLines[i] = new gzTextBox();
        mpLines[i]->mBounds.f.x = 430.0f;
        mpLines[i]->mBounds.f.y = 10.0f;

        mpLineOptions[i] = new gzTextBox();
        mpLineOptions[i]->mBounds.f.y = 10.0f;
    }

    mpLines[CHEAT_DISABLE_ITEM_TIMER]->setStringDesc("disable item timer", "disables item delete timer");
    mpLines[CHEAT_DISABLE_WALLS]->setStringDesc("disable walls", "disables most wall collision");
    mpLines[CHEAT_INF_AIR]->setStringDesc("infinite air", "");
    mpLines[CHEAT_INF_ARROWS]->setStringDesc("infinite arrows", "");
    mpLines[CHEAT_INF_BOMBS]->setStringDesc("infinite bombs", "");
    mpLines[CHEAT_INF_HEARTS]->setStringDesc("infinite hearts", "");
    mpLines[CHEAT_INF_OIL]->setStringDesc("infinite lantern oil", "");
    mpLines[CHEAT_INF_RUPEES]->setStringDesc("infinite rupees", "");
    mpLines[CHEAT_INF_SLINGSHOT]->setStringDesc("infinite slingshot seeds", "");
    mpLines[CHEAT_INVINCIBLE_LINK]->setStringDesc("invincible link", "");
    mpLines[CHEAT_INVINCIBLE_ENEMIES]->setStringDesc("infinite enemies", "");
    mpLines[CHEAT_MOON_JUMP]->setStringDesc("moon jump", "");
    mpLines[CHEAT_SUPER_CLAWSHOT]->setStringDesc("super clawshot", "");
    mpLines[CHEAT_TRANSFORM_ANYWHERE]->setStringDesc("transform anywhere", "");
    mpLines[CHEAT_UNRESTRICTED_ITEMS]->setStringDesc("unrestricted items", "");

    mpDrawCursor = new dSelect_cursor_c(2, 1.0f, NULL);
    mpDrawCursor->setParam(0.96f, 0.84f, 0.06f, 0.5f, 0.5f);
    mpDrawCursor->setAlphaRate(1.0f);

    mpMeterHaihai = new dMeterHaihai_c(3);

    mXPos = 200.0f;
}

gzCheatsMenu_c::~gzCheatsMenu_c() {
    _delete();
}

void gzCheatsMenu_c::_delete() {
    OSReport("deleting gzCheatsMenu_c\n");

    for (int i = 0; i < LINE_NUM; i++) {
        delete mpLines[i];
        mpLines[i] = NULL;
    }

    delete mpMeterHaihai;
    mpMeterHaihai = NULL;
}

void gzCheatsMenu_c::execute() {
    gzCursor* l_cursor = gzInfo_getCursor();
    if (gzPad::getTrigDown()) l_cursor->y = (l_cursor->y + 1) % LINE_NUM;
    if (gzPad::getTrigUp()) l_cursor->y = (l_cursor->y - 1 + LINE_NUM) % LINE_NUM;

    if (gzPad::getTrigB()) {
        if (mOption) {
            mOption = false;
            gzInfo_seStart(Z2SE_SY_CURSOR_CANCEL);
        } else {
            l_cursor->x--;
            l_cursor->y = gzMainMenu_c::MENU_SETTINGS;
            gzInfo_seStart(Z2SE_SY_EXP_WIN_CLOSE);
            // TODO(Pheenoh): Interpolate a slide back to the right instead of snapping back
            mXPos = 200.0f;
            g_gzInfo.mpMainMenu->setXPos(40.0f);
            return;
        }
    }

    mpMeterHaihai->_execute(0);
}

void gzCheatsMenu_c::draw() {
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

    updateDynamicLines();

    J2DTextBox::TFontSize font_size;
    mpLineOptions[0]->getFontSize(font_size);  // assume that all lines have the same font size
    mpMeterHaihai->setScale(font_size.mSizeY * HAIHAI_SCALE_FACTOR);

    u32 cursor_color = gzInfo_getCursorColor();


    f32 x_alignment_opts = mXPos + OPTIONS_X_OFFSET;
    f32 x_alignment_haihai = x_alignment_opts + HAIHAI_X_OFFSET;
    f32 y_alignment_haihai = Y_ALIGNMENT + HAIHAI_Y_OFFSET;
    f32 x_alignment_tp_cursor = mXPos + TP_CURSOR_X_OFFSET;

   for (int i = 0; i < LINE_NUM; i++) {
        f32 y_pos = Y_ALIGNMENT + ((i - 1) * LINE_SPACING);
        f32 y_pos_haihai = y_alignment_haihai + ((i - 1) * LINE_SPACING);
        f32 y_pos_cursor = CURSOR_Y_BASE + ((i - 1) * LINE_SPACING);

        if (l_cursor->y == i && l_cursor->x > 0) {
            // Spacing between arrows determined by text box bound size
            f32 x_size_haihai = mpLineOptions[i]->mBounds.f.x + HAIHAI_EXTRA_SPACING;
            if (mpLineOptions[i]->mStringLength != 0 && mOption) {
                mpMeterHaihai->drawHaihai(getHaihaiFlags(i), x_alignment_haihai, y_pos_haihai, x_size_haihai, 0.0f);
            }

            mpLines[i]->draw(mXPos, y_pos, cursor_color);
            mpDrawCursor->setPos(x_alignment_tp_cursor, y_pos_cursor, (J2DPane*)mpLines[i], false);
            mpLineOptions[i]->draw(x_alignment_opts, y_pos, cursor_color, HBIND_CENTER);
        } else {
            mpLines[i]->draw(mXPos, y_pos, COLOR_WHITE);
            mpLineOptions[i]->draw(x_alignment_opts, y_pos, COLOR_WHITE, HBIND_CENTER);
        }
    }

    // Draw description if valid and on menu
    if (l_cursor->x > 0) {
        if (mpLines[l_cursor->y] && *mpLines[l_cursor->y]->m_description != 0) {
            mpDescription->setString(mpLines[l_cursor->y]->m_description);
            mpDescription->draw(DESCRIPTION_X, DESCRIPTION_Y, cursor_color, HBIND_CENTER);
        }
    }

    if (gzInfo_isCursorTypeTP()) {
        if (mpDrawCursor != NULL) {
            mpDrawCursor->draw();
        }
    }
}
