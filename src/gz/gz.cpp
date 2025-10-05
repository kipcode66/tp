#include "d/dolzel.h" // IWYU pragma: keep

#include "gz/gz.h"
#include "gz/gz_menu.h"
#include "JSystem/JKernel/JKRExpHeap.h"
#include "JSystem/JUtility/JUTDbPrint.h"
#include "m_Do/m_Do_MemCard.h"
#include "dolphin/card.h"

gzInfo_c g_gzInfo;

int gzInfo_c::_create() {
    mSettings.mTextColor = 0xEE8000FF; // temp
    setCursorType(1);
    mpFont = mDoExt_getMesgFont();

    ResTIMG* icon = (ResTIMG*)dComIfGp_getMain2DArchive()->getResource('TIMG', "midona64.bti");
    mpIcon = new J2DPicture(icon);
    mpHeader = new gzTextBox("tpgz v1.2.0", mSettings.mTextColor);

    mpCurrentMenu = new gzMainMenu_c();

    mInputWaitTimer = 5;
    mGZInitialized = true;

    loadSettingsMemcard();
    // JUTDbPrint::getManager()->changeFont(mDoExt_getMesgFont());
    return 1;
}

int gzInfo_c::_delete() {
    delete mpIcon;
    mpIcon = NULL;

    delete mpHeader;
    mpHeader = NULL;

    delete mpCurrentMenu;
    mpCurrentMenu = NULL;
    return 1;
}

int gzInfo_c::execute() {
    if (!mGZInitialized) return 0;

    if (gzPad::getHoldL() && gzPad::getHoldR() && gzPad::getTrigDown()) {
        mDisplay = !mDisplay;

        if (mDisplay)
            mInputWaitTimer = 5;
    }

    if (mDisplay) {
        if (mInputWaitTimer != 0) {
            mInputWaitTimer--;
            return 1;
        }

        mpCurrentMenu->execute();
    }

    return 1;
}

int gzInfo_c::draw() {
    if (!mGZInitialized) return 0;

    if (mDisplay) {
        if (mpIcon != NULL) {
            mpIcon->draw(30.0f, 5.0f, 30.0f, 30.0f, false, false, false);
        }

        if (mpHeader != NULL) {
            mpHeader->draw(65.0f, 30.0f, mSettings.mTextColor);
        }

        dComIfGd_set2DOpaTop(mpCurrentMenu);

        // showHeapUsage();
    }

    return 1;
}

int gzPrint(int x, int y, u32 color, char const* string, ...) {
    JUTDbPrint::getManager()->setVisible(true);
    char buffer[256];

    va_list list;
    va_start(list, string);
    vsnprintf(buffer, sizeof(buffer), string, list);
    va_end(list);

    JUTDbPrint::getManager()->flush();

    static JUtility::TColor ShadowDarkColor(0, 0, 0, 0x80);
    JUTDbPrint::getManager()->setCharColor(ShadowDarkColor);

    JUTReport(x + 2, y + 2, buffer);
    JUTDbPrint::getManager()->flush();

    JUTDbPrint::getManager()->setCharColor(color);
    JUTReport(x, y, buffer);

    JUTDbPrint::getManager()->flush();
    return 1;
}

void gzInfo_c::showHeapUsage() {
    if (zeldaHeap != NULL && gameHeap != NULL && archiveHeap != NULL) {
        u32 zeldaFree = zeldaHeap->getFreeSize();
        u32 gameFree = gameHeap->getFreeSize();
        u32 archiveFree = archiveHeap->getFreeSize();
        u32 zeldaTotal = zeldaHeap->getTotalFreeSize();
        u32 gameTotal = gameHeap->getTotalFreeSize();
        u32 archiveTotal = archiveHeap->getTotalFreeSize();

        gzPrint(200, 30, 0xFFFFFFFF, "  Zelda %5d / %5d\n", zeldaFree / 1024, zeldaTotal / 1024);
        gzPrint(200, 50, 0xFFFFFFFF, "   Game %5d / %5d\n", gameFree / 1024, gameTotal / 1024);
        gzPrint(200, 70, 0xFFFFFFFF, "Archive %5d / %5d\n", archiveFree / 1024, archiveTotal / 1024);
    }
}

int gzInfo_c::storeSettingsMemcard() {
    CARDFileInfo file;
    int ret;

    ret = CARDProbeEx(0, NULL, NULL);
    if (ret != CARD_RESULT_READY) {
        return -1;
    }

    ret = CARDCreate(0, "tpgzcfg", SECTOR_SIZE, &file);
    if (ret == CARD_RESULT_READY || ret == CARD_RESULT_EXIST) {
        ret = CARDOpen(0, "tpgzcfg", &file);
        if (ret == CARD_RESULT_READY) {

            gzSettings_s settings;
            settings.mTextColor = mSettings.mTextColor;
            settings.mAreaReload = mSettings.mAreaReload;
            settings.mCursorType = mSettings.mCursorType;
            settings.mDropShadows = mSettings.mDropShadows;
            settings.mSwapEquips = mSettings.mSwapEquips;
            settings.mDisplayMode = mSettings.mDisplayMode;
            settings.mMenuPausesGame = mSettings.mMenuPausesGame;

            memcpy(mDoMemCd_Ctrl_c::sTmpBuf, &settings, sizeof(gzSettings_s));

            ret = CARDWrite(&file, mDoMemCd_Ctrl_c::sTmpBuf, SECTOR_SIZE, 0);
            if (ret == CARD_RESULT_READY) {
                OSReport("stored tpgz settings to memcard!\n");
            }

            CARDClose(&file);
        }
    }

    return ret;
}

int gzInfo_c::loadSettingsMemcard() {
    CARDFileInfo file;
    int ret;

    ret = CARDProbeEx(0, NULL, NULL);
    if (ret != CARD_RESULT_READY) {
        return -1;
    }

    ret = CARDOpen(0, "tpgzcfg", &file);
    if (ret == CARD_RESULT_READY) {
        ret = CARDRead(&file, mDoMemCd_Ctrl_c::sTmpBuf, SECTOR_SIZE, 0);
        if (ret == CARD_RESULT_READY) {
            OSReport("loaded tpgz settings from memcard!\n");
            gzSettings_s settings;
            memcpy(&settings, mDoMemCd_Ctrl_c::sTmpBuf, sizeof(gzSettings_s));

            mSettings.mTextColor = settings.mTextColor;
            mSettings.mAreaReload = settings.mAreaReload;
            mSettings.mCursorType = settings.mCursorType;
            mSettings.mDropShadows = settings.mDropShadows;
            mSettings.mSwapEquips = settings.mSwapEquips;
            mSettings.mDisplayMode = settings.mDisplayMode;
            mSettings.mMenuPausesGame = settings.mMenuPausesGame;
        }

        CARDClose(&file);
    }

    return ret;
}

int gzInfo_c::deleteSettingsMemcard() {
    CARDFileInfo file;
    int ret;

    ret = CARDProbeEx(0, NULL, NULL);
    if (ret != CARD_RESULT_READY) {
        return -1;
    }

    ret = CARDDelete(0, "tpgzcfg");
    if (ret == CARD_RESULT_READY) {
        OSReport("deleted tpgz settings from memcard!\n");
    } else {
        OSReport_Error("failed to delete tpgz settings from memcard!\n");
    }

    return ret;
}
