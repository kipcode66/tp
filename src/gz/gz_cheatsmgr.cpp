#include "gz/gz.h"
#include "gz/gz_menu.h"
#include "d/actor/d_a_alink.h"

class daAlink_c;

void gzCheatsMng_c::executeDisableItemTimer() {
    daItemBase_c::m_data.mWaitTime = 0x7FFF;
    mDisableItemTimer = true;
}

void gzCheatsMng_c::executeDisableWalls() {
    daAlink_c* link = daAlink_getAlinkActorClass();
    if (link != NULL) {
        link->mLinkAcch.SetWallNone();
        link->mLinkAcch.OnLineCheckNone();
        mDisableWalls = true;
    }
}

void gzCheatsMng_c::executeEnableItemTimer() {
    daItemBase_c::m_data.mWaitTime = 240;
    mDisableItemTimer = false;
}


void gzCheatsMng_c::executeEnableWalls() {
    daAlink_c* link = daAlink_getAlinkActorClass();
    if (link != NULL) {
        link->mLinkAcch.ClrWallNone();
        link->mLinkAcch.OffLineCheckNone();
        mDisableWalls = false;
    }
}

void gzCheatsMng_c::executeInfiniteAir() {
    dComIfGp_setOxygen(600);
    dComIfGp_setNowOxygen(600);
    dComIfGp_setMaxOxygen(600);
}

void gzCheatsMng_c::executeInfiniteArrows() {
    dComIfGs_setArrowNum(100);
}

void gzCheatsMng_c::executeInfiniteBombs() {
    // setting to 60 works on all bags regardless type / upgrade
    dComIfGs_setBombNum(0, 60);
    dComIfGs_setBombNum(1, 60);
    dComIfGs_setBombNum(2, 60);
}

void gzCheatsMng_c::executeInfiniteHearts() {
    dComIfGs_setLife(80);
}

void gzCheatsMng_c::executeInfiniteOil() {
    dComIfGs_setOil(21600);
}

void gzCheatsMng_c::executeInfiniteRupees() {
    dComIfGs_setRupee(1000);
}

void gzCheatsMng_c::executeInfiniteSlingshot() {
    dComIfGs_setPachinkoNum(dComIfGs_getPachinkoMax());
}

void gzCheatsMng_c::executeMoonJump() {
    u32 combo = g_gzInfo.mSettings.mCommandCombos.mMoonJump;
    if (combo && ((gzPad::getTrig() & combo) == combo)) {
        // execute moon jump
    }
}

void gzCheatsMng_c::executeSuperClawshot() {
    // d_a_alink nonmatching still
}

void gzCheatsMng_c::executeTransformAnywhere() {
    // d_msg_flow nonmatching still
}

void gzCheatsMng_c::executeUnrestrictedItems() {
    // d_a_alink nonmatching still
}

void gzCheatsMng_c::execute() {
    if (gzInfo_isDisableItemTimer()) {
        executeDisableItemTimer();
    } else if (mDisableItemTimer) {
        executeEnableItemTimer();
    }

    if (gzInfo_isDisableWalls()) {
        executeDisableWalls();
    } else if (mDisableWalls) {
        executeEnableWalls();
    }

    if (gzInfo_isInfiniteAir()) executeInfiniteAir();
    if (gzInfo_isInfiniteArrows()) executeInfiniteArrows();
    if (gzInfo_isInfiniteBombs()) executeInfiniteBombs();
    if (gzInfo_isInfiniteHearts()) executeInfiniteHearts();
    if (gzInfo_isMoonJump()) executeMoonJump();
    if (gzInfo_isInfiniteOil()) executeInfiniteOil();
    if (gzInfo_isInfiniteRupees()) executeInfiniteRupees();
    if (gzInfo_isInfiniteSlingshot()) executeInfiniteSlingshot();
    if (gzInfo_isSuperClawshot()) executeSuperClawshot();
    if (gzInfo_isTransformAnywhere()) executeTransformAnywhere();
    if (gzInfo_isUnrestrictedItems()) executeUnrestrictedItems();
}
