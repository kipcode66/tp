#include "d/dolzel.h" // IWYU pragma: keep

#include "gz/gz.h"
#include "gz/gz_menu.h"
#include "f_op/f_op_scene_mng.h"
#include "SSystem/SComponent/c_counter.h"

gzMainMenu_c::gzMainMenu_c() {
    OSReport("creating gzMainMenu_c\n");

    mpMenus[MENU_CHEATS] = NULL;
    mpMenus[MENU_FLAGS] = NULL;
    mpMenus[MENU_FRAMEWORK] = new gzFrameworkMenu_c();
    mpMenus[MENU_INVENTORY] = NULL;
    mpMenus[MENU_MEMORY] = new gzMemoryMenu_c();
    mpMenus[MENU_PRACTICE] = new gzPracticeMenu_c();
    mpMenus[MENU_SCENE] = NULL;
    mpMenus[MENU_SETTINGS] = new gzSettingsMenu_c();
    mpMenus[MENU_TOOLS] = new gzToolsMenu_c();
    mpMenus[MENU_WARPING] = NULL;

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

    mpDrawCursor = new dSelect_cursor_c(2, 1.0f, NULL);
    mpDrawCursor->setParam(0.96f, 0.84f, 0.06f, 0.5f, 0.5f);
    mpDrawCursor->setAlphaRate(1.0f);

    mpMeterHaihai = new dMeterHaihai_c(3);

    mXPos = 40.0f;
    mTransitioning = false;
    mTransitionStart = 0;
    mTransitionDuration = 10.0f;
}

gzMainMenu_c::~gzMainMenu_c() {
    _delete();
}

void gzMainMenu_c::_delete() {
    OSReport("deleting gzMainMenu_c\n");

    for (int i = 0; i < LINE_NUM; i++) {
        delete mpLines[i];
        mpLines[i] = NULL;

        delete mpMenus[i];
        mpMenus[i] = NULL;
    }
}

void gzMainMenu_c::execute() {
    gzCursor* l_cursor = gzInfo_getCursor();

    if (gzPad::getTrigDown()) {
        l_cursor->y = (l_cursor->y + 1) % LINE_NUM;
        gzChangeMenu(mpMenus[l_cursor->y]);
    }

    if (gzPad::getTrigUp()) {
        l_cursor->y = (l_cursor->y - 1 + LINE_NUM) % LINE_NUM;
        gzChangeMenu(mpMenus[l_cursor->y]);
    }

    if (gzPad::getTrigB()) {
        g_gzInfo.mDisplay = false;
        return;
    }

    if (gzPad::getTrigA()) {
        if (g_gzInfo.mpCurrentMenu != NULL) {
            if (l_cursor->y == MENU_MEMORY) {
                mTransitioning = true;
                mTransitionStart = cCt_getFrameCount();
            }
            l_cursor->x++;
            l_cursor->y = 0; // TODO(Pheenoh): QoL improvement - remember l_cursor->y in sub menu instead of always 0
            g_gzInfo.mInputWaitTimer = 2;
        }

        switch (l_cursor->y) {
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
    gzCursor* l_cursor = gzInfo_getCursor();
    static const f32 Y_ALIGNMENT = 100.0f;
    static const f32 LINE_SPACING = 22.0f;
    static const f32 SLIDE_DISTANCE = 80.0f;
    f32 mem_x_pos;

    if (mTransitioning) {
        mTransitionAge = cCt_getFrameCount() - mTransitionStart;

        if (mTransitionAge >= mTransitionDuration) {
            mTransitioning = false;
        }

        f32 time0 = 0.0f;
        f32 value0 = 40.0f;
        f32 tan_out0 = 0.0f;
        f32 value1 = -40.0f;
        f32 tan_in1 = 0.0f;
        f32 time1 = (f32)mTransitionDuration;
        f32 age = (f32)mTransitionAge;
        f32 mem_value0 = 240.0f;
        f32 mem_value1 = 140.0f;

        if (mTransitionAge < mTransitionDuration) {
            // Hermite for main menu (slide to left)
            mXPos = J2DHermiteInterpolation<f32>(age, &time0, &value0, &tan_out0, &time1, &value1, &tan_in1);

            // Hermite for memory menu (slide to left)
            ((gzMemoryMenu_c*)g_gzInfo.mpCurrentMenu)->setXPos(J2DHermiteInterpolation<f32>(age, &time0, &mem_value0, &tan_out0, &time1, &mem_value1, &tan_in1));
        }

        // Draw main menu lines
        for (int i = 0; i < LINE_NUM; i++) {
            if (mpLines[i] != NULL) {
                f32 y_pos = Y_ALIGNMENT + ((i - 1) * LINE_SPACING);

                if (l_cursor->y == i && l_cursor->x == 0) {
                    mpLines[i]->draw(mXPos, y_pos, gzInfo_getTextColor());
                } else {
                    mpLines[i]->draw(mXPos, y_pos, COLOR_WHITE);
                }
            }
        }
    } else {
        for (int i = 0; i < LINE_NUM; i++) {
            if (mpLines[i] != NULL) {
                f32 y_pos = Y_ALIGNMENT + ((i - 1) * LINE_SPACING);

                if (l_cursor->y == i && l_cursor->x == 0) {
                    mpLines[i]->draw(mXPos, y_pos, gzInfo_getTextColor());
                } else {
                    mpLines[i]->draw(mXPos, y_pos, COLOR_WHITE);
                }
            }
        }
    }
}
