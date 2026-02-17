#include "d/dolzel.h" // IWYU pragma: keep

#include "gz/gz.h"
#include "m_Do/m_Do_MemCard.h"
#include "dolphin/card.h"

int gzMemCard_c::store() {
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
            gzConfigHeader_s cfg;
            cfg.version = gzInfo_c::GZ_SAVE_VERSION;
            cfg.settingsOffset = sizeof(gzConfigHeader_s);

            memcpy(mDoMemCd_Ctrl_c::sTmpBuf, &cfg, sizeof(gzConfigHeader_s));
            memcpy(mDoMemCd_Ctrl_c::sTmpBuf + cfg.settingsOffset, &g_gzInfo.mSettings, sizeof(gzSettings_s));

            ret = CARDWrite(&file, mDoMemCd_Ctrl_c::sTmpBuf, SECTOR_SIZE, 0);
            if (ret == CARD_RESULT_READY) {
                OSReport("stored tpgz settings to memcard!\n");
                gzInfo_sendNotification("settings saved to memcard!");
            }

            CARDClose(&file);
        }
    }

    return ret;
}

int gzMemCard_c::load() {
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
            gzInfo_sendNotification("settings loaded from memcard!");

            gzConfigHeader_s cfg;
            memcpy(&cfg, mDoMemCd_Ctrl_c::sTmpBuf, sizeof(gzConfigHeader_s));
            if (cfg.version != gzInfo_c::GZ_SAVE_VERSION) {
                OSReport("outdated tpgz save version!\n");
                return -1;
            }

            memcpy(&g_gzInfo.mSettings, mDoMemCd_Ctrl_c::sTmpBuf + cfg.settingsOffset, sizeof(gzSettings_s));
        }

        CARDClose(&file);
    } else {
        gzInfo_sendNotification("no memcard settings found!");
    }

    return ret;
}

int gzMemCard_c::remove() {
    CARDFileInfo file;
    int ret;

    ret = CARDProbeEx(0, NULL, NULL);
    if (ret != CARD_RESULT_READY) {
        return -1;
    }

    ret = CARDDelete(0, "tpgzcfg");
    if (ret == CARD_RESULT_READY) {
        OSReport("deleted tpgz settings from memcard!\n");
        gzInfo_sendNotification("memcard settings deleted!");
    } else {
        OSReport_Error("failed to delete tpgz settings from memcard!\n");
    }

    return ret;
}
