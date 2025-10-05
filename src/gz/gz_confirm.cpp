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
    if (gzPad::getTrigRight() && mCursor.x < LINE_NUM) {
        mCursor.x++;
    }

    if (gzPad::getTrigLeft() && mCursor.x >= 0) {
        mCursor.x--;
    }

    if (mCursor.x < 0) {
        mCursor.x = LINE_NUM - 1;
    } else if (mCursor.x > LINE_NUM - 1) {
        mCursor.x = 0;
    }

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
    mpLineConfirmPrompt->draw(0.0f, 90.0f, COLOR_WHITE, HBIND_CENTER);

    for (int i = 0; i < LINE_NUM; i++) {
        if (mCursor.x == i) {
            mpLines[i]->draw(20.0f + ((i - 1) * 60.0f), 120.0f, g_gzInfo.getTextColor(), HBIND_CENTER);
        } else {
            mpLines[i]->draw(20.0f + ((i - 1) * 60.0f), 120.0f, COLOR_WHITE, HBIND_CENTER);
        }
    }
}
