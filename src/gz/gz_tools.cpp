#include "d/dolzel.h" // IWYU pragma: keep

#include "gz/gz.h"
#include "gz/gz_menu.h"

static void returnToSettings() {
    //gzChangeMenu<gzToolsMenu_c>();
}

u8 gzToolsMenu_c::getHaihaiFlags(int i) {
    u8 haihai_flags = mpMeterHaihai->DIR_LEFT_e | mpMeterHaihai->DIR_RIGHT_e;

    switch (i) {
    case TOOL_MOVE_LINK:
        return gzInfo_isMoveLink() ? mpMeterHaihai->DIR_LEFT_e : mpMeterHaihai->DIR_RIGHT_e;
    default:
        return haihai_flags;
    }
}

void gzToolsMenu_c::updateDynamicLines() {
    mpLineOptions[TOOL_MOVE_LINK]->setStringf("%s", getMoveLinkText());

    J2DTextBox::TFontSize font_size;

    // update box bounds
    for (int i = 0; i < LINE_NUM; i++) {
        mpLineOptions[i]->getFontSize(font_size);
        // applying font_size.mSizeX against a scaling factor 
        // to create a linear relationship between string length 
        // and text box bound size
        font_size.mSizeX *= 0.5f;
        mpLines[i]->mBounds.f.x = mpLines[i]->mStringLength * font_size.mSizeX;
        mpLineOptions[i]->mBounds.f.x = mpLineOptions[i]->mStringLength * font_size.mSizeX;
    }
}

gzMenu_c::gzCursor gzToolsMenu_c::mCursor = {0, 0};

gzToolsMenu_c::gzToolsMenu_c() {
    OSReport("creating gzToolsMenu_c\n");

    for (int i = 0; i < LINE_NUM; i++) {
        mpLines[i] = new gzTextBox();
        mpLines[i]->mBounds.f.x = 430.0f;
        mpLines[i]->mBounds.f.y = 10.0f;

        mpLineOptions[i] = new gzTextBox();
        mpLineOptions[i]->mBounds.f.y = 10.0f;
    }

    mpDescription = new gzTextBox();

    mpLines[TOOL_MOVE_LINK]->setString("move link");
    mpDescription[TOOL_MOVE_LINK].setString("move link around freely. L+R+Y to activate");

    mpDrawCursor = new dSelect_cursor_c(2, 1.0f, NULL);
    mpDrawCursor->setParam(0.96f, 0.84f, 0.06f, 0.5f, 0.5f);
    mpDrawCursor->setAlphaRate(1.0f);

    mpMeterHaihai = new dMeterHaihai_c(3);
}

gzToolsMenu_c::~gzToolsMenu_c() {
    _delete();
}

void gzToolsMenu_c::_delete() {
    OSReport("deleting gzToolsMenu_c\n");
    for (int i = 0; i < LINE_NUM; i++) {
        delete mpLines[i];
        mpLines[i] = NULL;

        delete mpLineOptions[i];
        mpLineOptions[i] = NULL;
    }

    delete mpDescription;
    mpDescription = NULL;

    delete mpDrawCursor;
    mpDrawCursor = NULL;

    delete mpMeterHaihai;
    mpMeterHaihai = NULL;
}

void gzToolsMenu_c::execute() {
    if (gzPad::getTrigDown()) mCursor.y = (mCursor.y + 1) % LINE_NUM;
    if (gzPad::getTrigUp()) mCursor.y = (mCursor.y - 1 + LINE_NUM) % LINE_NUM;

    if (gzPad::getTrigB()) {
        gzChangeMenu(g_gzInfo.mpPrevMenu);
        return;
    }

    if (gzPad::getTrigA()) {
        switch (mCursor.y) {}
    }

    if (gzPad::getTrigRight()) {
        switch (mCursor.y) {
        case TOOL_MOVE_LINK:
            gzInfo_onMoveLink();
            break;
        }
    }

    if (gzPad::getTrigLeft()) {
        switch (mCursor.y) {
        case TOOL_MOVE_LINK:
            gzInfo_offMoveLink();
            break;
        }
    }

    updateDynamicLines();
    mpMeterHaihai->_execute(0);
}

void gzToolsMenu_c::draw() {
    static const f32 X_ALIGNMENT = 40.0f;
    static const f32 Y_ALIGNMENT = 100.0f;
    static const f32 OPTIONS_X_OFFSET = 0.0f;
    static const f32 HAIHAI_X_OFFSET = 305.0f;
    static const f32 HAIHAI_Y_OFFSET = -7.0f;
    static const f32 HAIHAI_SCALE_FACTOR = 0.04f;
    static const f32 HAIHAI_EXTRA_SPACING = 30.0f;
    static const f32 TP_CURSOR_X_OFFSET = 20.0f;
    static const f32 CURSOR_Y_BASE = 90.0f;
    static const f32 LINE_SPACING = 22.0f;
    static const f32 DESCRIPTION_Y = 420.0f;

    J2DTextBox::TFontSize font_size;
    mpLineOptions[0]->getFontSize(font_size);  // assume that all lines have the same font size
    mpMeterHaihai->setScale(font_size.mSizeY * HAIHAI_SCALE_FACTOR);

    u32 cursor_color = gzInfo_getCursorColor();

    f32 x_alignment_opts = X_ALIGNMENT + OPTIONS_X_OFFSET;
    f32 x_alignment_haihai = x_alignment_opts + HAIHAI_X_OFFSET;
    f32 y_alignment_haihai = Y_ALIGNMENT + HAIHAI_Y_OFFSET;
    f32 x_alignment_tp_cursor = X_ALIGNMENT + TP_CURSOR_X_OFFSET;

    for (int i = 0; i < LINE_NUM; i++) {
        f32 y_pos = Y_ALIGNMENT + ((i - 1) * LINE_SPACING);
        f32 y_pos_haihai = y_alignment_haihai + ((i - 1) * LINE_SPACING);
        f32 y_pos_cursor = CURSOR_Y_BASE + ((i - 1) * LINE_SPACING);

        if (mCursor.y == i) {
            // Spacing between arrows determined by text box bound size
            f32 x_size_haihai = mpLineOptions[i]->mBounds.f.x + HAIHAI_EXTRA_SPACING;
            if (mpLineOptions[i]->mStringLength != 0) {
                mpMeterHaihai->drawHaihai(getHaihaiFlags(i), x_alignment_haihai, y_pos_haihai, x_size_haihai, 0.0f);
            }

            mpLines[i]->draw(X_ALIGNMENT, y_pos, cursor_color);
            mpDrawCursor->setPos(x_alignment_tp_cursor, y_pos_cursor, (J2DPane*)mpLines[i], false);
            mpLineOptions[i]->draw(x_alignment_opts, y_pos, cursor_color, HBIND_CENTER);
        } else {
            mpLines[i]->draw(X_ALIGNMENT, y_pos, COLOR_WHITE);
            mpLineOptions[i]->draw(x_alignment_opts, y_pos, COLOR_WHITE, HBIND_CENTER);
        }
    }

    // Draw description if valid
    if (mpLines[mCursor.y] && *mpLines[mCursor.y]->m_description != 0) {
        mpDescription->setString(mpLines[mCursor.y]->m_description);
        mpDescription->draw(X_ALIGNMENT, DESCRIPTION_Y, cursor_color);
    }

    if (gzInfo_isCursorTypeTP()) {
        mpDrawCursor->draw();
    }
}
