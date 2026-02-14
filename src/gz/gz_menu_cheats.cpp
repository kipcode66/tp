#include "d/dolzel.h" // IWYU pragma: keep

#include "gz/gz_menu_cheats.h"
#include "gz/gz_menu_main.h"
#include "d/d_select_cursor.h"
#include "JSystem/J2DGraph/J2DPicture.h"

gzCheatsMenu_c::gzCheatsMenu_c() {
    OSReport("creating gzCheatsMenu_c\n");
    mXPos = g_gzInfo.mBackgroundXPos + 170.0f;
    mLineYStart = gzMenuLayout::TAB_HEADER_Y_OFFSET;

    mpLines[CHEAT_DISABLE_ITEM_TIMER] = new (gzHeap(GZ_GROUP_MENU), 4) gzBoolOptionLine("disable item timer", "disables item delete timer", gzInfo_isDisableItemTimer, gzInfo_onDisableItemTimer, gzInfo_offDisableItemTimer);
    mpLines[CHEAT_DISABLE_WALLS] = new (gzHeap(GZ_GROUP_MENU), 4) gzBoolOptionLine("disable walls", "disables most wall collision", gzInfo_isDisableWalls, gzInfo_onDisableWalls, gzInfo_offDisableWalls);
    mpLines[CHEAT_INF_AIR] = new (gzHeap(GZ_GROUP_MENU), 4) gzBoolOptionLine("infinite air", "gives infinite air underwater", gzInfo_isInfiniteAir, gzInfo_onInfiniteAir, gzInfo_offInfiniteAir);
    mpLines[CHEAT_INF_ARROWS] = new (gzHeap(GZ_GROUP_MENU), 4) gzBoolOptionLine("infinite arrows", "always have 99 arrows", gzInfo_isInfiniteArrows, gzInfo_onInfiniteArrows, gzInfo_offInfiniteArrows);
    mpLines[CHEAT_INF_BOMBS] = new (gzHeap(GZ_GROUP_MENU), 4) gzBoolOptionLine("infinite bombs", "always have 99 bombs", gzInfo_isInfiniteBombs, gzInfo_onInfiniteBombs, gzInfo_offInfiniteBombs);
    mpLines[CHEAT_INF_HEARTS] = new (gzHeap(GZ_GROUP_MENU), 4) gzBoolOptionLine("infinite hearts", "always have full hearts", gzInfo_isInfiniteHearts, gzInfo_onInfiniteHearts, gzInfo_offInfiniteHearts);
    mpLines[CHEAT_INF_OIL] = new (gzHeap(GZ_GROUP_MENU), 4) gzBoolOptionLine("infinite lantern oil", "gives infinite lantern oil", gzInfo_isInfiniteOil, gzInfo_onInfiniteOil, gzInfo_offInfiniteOil);
    mpLines[CHEAT_INF_RUPEES] = new (gzHeap(GZ_GROUP_MENU), 4) gzBoolOptionLine("infinite rupees", "always have 1000 rupees", gzInfo_isInfiniteRupees, gzInfo_onInfiniteRupees, gzInfo_offInfiniteRupees);
    mpLines[CHEAT_INF_SLINGSHOT] = new (gzHeap(GZ_GROUP_MENU), 4) gzBoolOptionLine("infinite slingshot seeds", "always have 99 slingshot pellets", gzInfo_isInfiniteSlingshot, gzInfo_onInfiniteSlingshot, gzInfo_offInfiniteSlingshot);
    mpLines[CHEAT_INVINCIBLE_LINK] = new (gzHeap(GZ_GROUP_MENU), 4) gzBoolOptionLine("invincible link", "disables link's hurtbox", gzInfo_isInvincibleLink, gzInfo_onInvincibleLink, gzInfo_offInvincibleLink);
    mpLines[CHEAT_INVINCIBLE_ENEMIES] = new (gzHeap(GZ_GROUP_MENU), 4) gzBoolOptionLine("invincible enemies", "make some enemies invincible", gzInfo_isInvincibleEnemies, gzInfo_onInvincibleEnemies, gzInfo_offInvincibleEnemies);
    mpLines[CHEAT_MOON_JUMP] = new (gzHeap(GZ_GROUP_MENU), 4) gzBoolOptionLine("moon jump", "hold R+A to moon jump", gzInfo_isMoonJump, gzInfo_onMoonJump, gzInfo_offMoonJump);
    mpLines[CHEAT_SUPER_CLAWSHOT] = new (gzHeap(GZ_GROUP_MENU), 4) gzBoolOptionLine("super clawshot", "super fast / long clawshot", gzInfo_isSuperClawshot, gzInfo_onSuperClawshot, gzInfo_offSuperClawshot);
    mpLines[CHEAT_TRANSFORM_ANYWHERE] = new (gzHeap(GZ_GROUP_MENU), 4) gzBoolOptionLine("transform anywhere", "transform at any location", gzInfo_isTransformAnywhere, gzInfo_onTransformAnywhere, gzInfo_offTransformAnywhere);
    mpLines[CHEAT_UNRESTRICTED_ITEMS] = new (gzHeap(GZ_GROUP_MENU), 4) gzBoolOptionLine("unrestricted items", "disable item restrictions", gzInfo_isUnrestrictedItems, gzInfo_onUnrestrictedItems, gzInfo_offUnrestrictedItems);
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
}

void gzCheatsMenu_c::onHighlight() {
}

void gzCheatsMenu_c::onUnhighlight() {
}

void gzCheatsMenu_c::execute() {
    if (checkInputWait()) return;
    if (handleBackButton(gzMainMenu_c::MENU_CHEATS)) return;

    gzCursor* l_cursor = gzInfo_getCursor();
    gzBoolOptionLine* line = mpLines[l_cursor->y];

    if (gzPad::getTrigA()) {
        if (line->mIs != NULL) {
            if (line->mIs()) {
                if (line->mOff != NULL) line->mOff();
            } else {
                if (line->mOn != NULL) line->mOn();
            }
            gzInfo_seStart(Z2SE_SY_TALK_CURSOR);
        }
    }

    handleNavigation(LINE_NUM);
    finishExecute(LINE_NUM);
}

void gzCheatsMenu_c::draw() {
    static const f32 ICON_SIZE = 14.0f;
    static const u32 COLOR_DIM = 0x808080FFu;

    gzCursor* l_cursor = gzInfo_getCursor();
    u32 cursorColor = gzInfo_getCursorColor();
    f32 lineX = mXPos;
    f32 optionX = mXPos + getCurrentOptionsXOffset();
    f32 lineY_start = g_gzInfo.mBackgroundYPos + mLineYStart;

    for (int i = 0; i < LINE_NUM; i++) {
        gzBoolOptionLine* line = mpLines[i];
        f32 lineY = lineY_start + (i * gzMenuLayout::LINE_SPACING);
        bool isSelected = (l_cursor->y == i && gzInfo_isSubMenuVisible());
        bool isOn = (line->mIs != NULL && line->mIs());
        u32 color = isSelected ? cursorColor : (isOn ? COLOR_WHITE : COLOR_DIM);

        line->mText->draw(lineX, lineY, color);

        J2DPicture* icon = isOn ? gzInfo_getCheckIcon() : gzInfo_getXMarkIcon();
        if (icon != NULL && line->mIs != NULL) {
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

    drawDescription((l_cursor->y < LINE_NUM) ? mpLines[l_cursor->y]->m_description : NULL);
}
