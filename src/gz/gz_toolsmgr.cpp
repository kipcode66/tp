#include "gz/gz.h"

void gzToolsMng_c::executeMoveLink() {
    u32 combo = g_gzInfo.mSettings.mCommandCombos.mMoveLink;
    if (combo && ((gzPad::getTrig() & combo) == combo)) {
        mMoveLink = !mMoveLink;
    }
    
    if (mMoveLink) {}
}

void gzToolsMng_c::execute() {
    if (gzInfo_isMoveLink()) {
        executeMoveLink();
    } else if (mMoveLink) {
        // finish
    }
}
