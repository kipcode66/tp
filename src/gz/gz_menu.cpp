#include "d/dolzel.h" // IWYU pragma: keep

#include "gz/gz.h"
#include "gz/gz_menu.h"
#include "f_op/f_op_scene_mng.h"

gzMenu_c::gzCursor gzMainMenu_c::mCursor = {0, 0};

gzMainMenu_c::gzMainMenu_c() {
    OSReport("creating gzMainMenu_c\n");

    for (int i = 0; i < LINE_NUM; i++) {
        mpLines[i] = new gzTextBox();
    }

    mpLines[MENU_CHEATS]->setString("cheats");
    mpLines[MENU_FLAGS]->setString("flags");
    mpLines[MENU_FRAMEWORK]->setString("framework");
    mpLines[MENU_INVENTORY]->setString("inventory");
    mpLines[MENU_MEMORY]->setString("memory");
    mpLines[MENU_PRACTICE]->setString("practice");
    mpLines[MENU_SCENE]->setString("scene");
    mpLines[MENU_SETTINGS]->setString("settings");
    mpLines[MENU_TOOLS]->setString("tools");
    mpLines[MENU_WARPING]->setString("warping");
}

gzMainMenu_c::~gzMainMenu_c() {
    _delete();
}

void gzMainMenu_c::_delete() {
    OSReport("deleting gzMainMenu_c\n");
    for (int i = 0; i < LINE_NUM; i++) {
        delete mpLines[i];
        mpLines[i] = NULL;
    }
}

void gzMainMenu_c::execute() {
    if (gzPad::getTrigDown()) mCursor.y = (mCursor.y + 1) % LINE_NUM;
    if (gzPad::getTrigUp()) mCursor.y = (mCursor.y - 1 + LINE_NUM) % LINE_NUM;

    if (gzPad::getTrigB()) {
        g_gzInfo.mDisplay = false;
        return;
    }

    if (gzPad::getTrigA()) {
        switch (mCursor.y) {
        case MENU_FRAMEWORK:
            gzChangeMenu<gzFrameworkMenu_c>();
            break;
        case MENU_SETTINGS:
            gzChangeMenu<gzSettingsMenu_c>();
            break;
        case MENU_WARPING:
            scene_class* playScene = fopScnM_SearchByID(dStage_roomControl_c::getProcID());
            if (playScene != NULL)
                fopScnM_ChangeReq(playScene, PROC_MENU_SCENE, 0, 5);
            g_gzInfo.mDisplay = false;
            return;
        }
    }
}

void gzMainMenu_c::draw() {
    static const f32 X_ALIGNMENT = 40.0f;
    static const f32 Y_ALIGNMENT = 100.0f;
    static const f32 LINE_SPACING = 22.0f;

    for (int i = 0; i < LINE_NUM; i++) {
        if (mpLines[i] != NULL) {
            f32 y_pos = Y_ALIGNMENT + ((i - 1) * LINE_SPACING);

            if (mCursor.y == i) {
                mpLines[i]->draw(X_ALIGNMENT, y_pos, gzInfo_getTextColor());
            } else {
                mpLines[i]->draw(X_ALIGNMENT, y_pos, COLOR_WHITE);
            }
        }
    }
}
