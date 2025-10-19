#include "gz/gz.h"
#include "gz/gz_menu.h"

void gzToolsMng_c::executeMoveLink() {
    u32 combo = g_gzInfo.mSettings.mCommandCombos.mMoveLink;
    if (combo && ((gzPad::getTrig() & combo) == combo)) {
        g_gzInfo.mButtonFlags.mMoveLink = !g_gzInfo.mButtonFlags.mMoveLink;
    }
    
    if (g_gzInfo.mButtonFlags.mMoveLink) {}
}

void gzToolsMng_c::execute() {
    if (gzInfo_isMoveLink()) executeMoveLink();
}
