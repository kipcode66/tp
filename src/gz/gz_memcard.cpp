#include "d/dolzel.h" // IWYU pragma: keep

#include "gz/gz.h"
#include "m_Do/m_Do_MemCard.h"
#include "dolphin/card.h"

int gzMemCard_c::write(const void* data, u32 size) {
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
            if (size <= SECTOR_SIZE) {
                memcpy(mDoMemCd_Ctrl_c::sTmpBuf, data, size);
            }
            ret = CARDWrite(&file, mDoMemCd_Ctrl_c::sTmpBuf, SECTOR_SIZE, 0);
            CARDClose(&file);
        }
    }

    return ret;
}

int gzMemCard_c::read(void* data, u32 size) {
    CARDFileInfo file;
    int ret;

    ret = CARDProbeEx(0, NULL, NULL);
    if (ret != CARD_RESULT_READY) {
        return -1;
    }

    ret = CARDOpen(0, "tpgzcfg", &file);
    if (ret == CARD_RESULT_READY) {
        ret = CARDRead(&file, mDoMemCd_Ctrl_c::sTmpBuf, SECTOR_SIZE, 0);
        if (ret == CARD_RESULT_READY && size <= SECTOR_SIZE) {
            memcpy(data, mDoMemCd_Ctrl_c::sTmpBuf, size);
        }
        CARDClose(&file);
    }

    return ret;
}

int gzMemCard_c::_delete() {
    int ret;

    ret = CARDProbeEx(0, NULL, NULL);
    if (ret != CARD_RESULT_READY) {
        return -1;
    }

    ret = CARDDelete(0, "tpgzcfg");
    return ret;
}

int gzMemCard_c::storeSettings() {
    u8 data[sizeof(gzConfigHeader_s) + sizeof(gzSettings_s)];

    gzConfigHeader_s cfg;
    cfg.version = gzInfo_c::GZ_SAVE_VERSION;
    cfg.settingsOffset = sizeof(gzConfigHeader_s);
    memset(cfg.reserved, 0, sizeof(cfg.reserved));
    memcpy(data, &cfg, sizeof(gzConfigHeader_s));
    memcpy(data + cfg.settingsOffset, &g_gzInfo.mSettings, sizeof(gzSettings_s));

    int ret = write(data, sizeof(data));
    if (ret == CARD_RESULT_READY) {
        OSReport("stored tpgz settings to memcard!\n");
        gzInfo_sendNotification("settings saved to memcard!");
    }

    return ret;
}

int gzMemCard_c::loadSettings() {
    u8 data[sizeof(gzConfigHeader_s) + sizeof(gzSettings_s)];

    int ret = read(data, sizeof(data));
    if (ret == CARD_RESULT_READY) {
        gzConfigHeader_s cfg;
        memcpy(&cfg, data, sizeof(gzConfigHeader_s));
        if (cfg.version != gzInfo_c::GZ_SAVE_VERSION) {
            OSReport("outdated tpgz save version!\n");
            return -1;
        }
        memcpy(&g_gzInfo.mSettings, data + cfg.settingsOffset, sizeof(gzSettings_s));
        OSReport("loaded tpgz settings from memcard!\n");
        gzInfo_sendNotification("settings loaded from memcard!");
    } else if (ret != -1) {
        gzInfo_sendNotification("no memcard settings found!");
    }

    return ret;
}

int gzMemCard_c::deleteSettings() {
    int ret = _delete();
    if (ret == CARD_RESULT_READY) {
        OSReport("deleted tpgz settings from memcard!\n");
        gzInfo_sendNotification("memcard settings deleted!");
    } else if (ret != -1) {
        OSReport_Error("failed to delete tpgz settings from memcard!\n");
    }

    return ret;
}
