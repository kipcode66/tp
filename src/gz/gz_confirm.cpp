#include "d/dolzel.h" // IWYU pragma: keep

#include "gz/gz.h"
#include "gz/gz_menu.h"

gzMenu_c::gzCursor gzConfirmMenu_c::mCursor = {0, 0};

gzConfirmMenu_c::gzConfirmMenu_c(confirmCallback i_callback) {
    OSReport("creating gzConfirmMenu_c\n");
    mpLineConfirmPrompt = new gzTextBox();

    for (int i = 0; i < LINE_NUM; i++) {
        mpLines[i] = new gzTextBox();
    }

    mpLineConfirmPrompt->setString("are you sure?");
    mpLines[CONFIRM_NO]->setString("no");
    mpLines[CONFIRM_YES]->setString("yes");

    mpConfirmCallback = i_callback;
    mCursor.x = 0; // always put the cursor on "no" when the menu pops up
}

gzConfirmMenu_c::gzConfirmMenu_c(confirmCallback i_callback, const char* msg) {
    OSReport("creating gzConfirmMenu_c\n");
    mpLineConfirmPrompt = new gzTextBox();

    for (int i = 0; i < LINE_NUM; i++) {
        mpLines[i] = new gzTextBox();
    }

    mpLineConfirmPrompt->setString(msg);
    mpLines[CONFIRM_NO]->setString("no");
    mpLines[CONFIRM_YES]->setString("yes");

    mpConfirmCallback = i_callback;
    mCursor.x = 0; // always put the cursor on "no" when the menu pops up
}


gzConfirmMenu_c::~gzConfirmMenu_c() {
    _delete();
}

void gzConfirmMenu_c::_delete() {
    OSReport("deleting gzConfirmMenu_c\n");

    delete mpLineConfirmPrompt;
    mpLineConfirmPrompt = NULL;

    for (int i = 0; i < LINE_NUM; i++) {
        delete mpLines[i];
        mpLines[i] = NULL;
    }
}

void gzConfirmMenu_c::execute() {
    if (gzPad::getTrigRight()) mCursor.x = (mCursor.x + 1) % LINE_NUM;
    if (gzPad::getTrigLeft()) mCursor.x = (mCursor.x - 1 + LINE_NUM) % LINE_NUM;

    if (gzPad::getTrigA()) {
        switch (mCursor.x) {
        case CONFIRM_NO:
            gzChangeMenu<gzSettingsMenu_c>();
            break;
        case CONFIRM_YES:
            (*mpConfirmCallback)();
            gzChangeMenu<gzSettingsMenu_c>();
            break;
        }
    }

    if (gzPad::getTrigB()) {
        gzChangeMenu<gzSettingsMenu_c>();
        return;
    }
}

void gzConfirmMenu_c::draw() {
    static const f32 PROMPT_X = 0.0f;
    static const f32 PROMPT_Y = 90.0f;
    static const f32 LINE_X_BASE = 20.0f;
    static const f32 LINE_SPACING = 60.0f;
    static const f32 LINE_Y = 120.0f;

    mpLineConfirmPrompt->draw(PROMPT_X, PROMPT_Y, COLOR_WHITE, HBIND_CENTER);

    u32 cursor_color = gzInfo_getCursorColor();
    for (int i = 0; i < LINE_NUM; i++) {
        f32 x_pos = LINE_X_BASE + ((i - 1) * LINE_SPACING);
        u32 color = (mCursor.x == i) ? cursor_color : COLOR_WHITE;
        mpLines[i]->draw(x_pos, LINE_Y, color, HBIND_CENTER);
    }
}
