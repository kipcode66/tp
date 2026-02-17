#include "d/dolzel.h" // IWYU pragma: keep

#ifndef __REVOLUTION_SDK__

#include "gz/gz.h"
#include "gz/gz_exi.h"
#include <dolphin/exi.h>
#include <dolphin/os.h>

int gzSD_c::store() {
    static const u32 PAYLOAD_SIZE = 4 + sizeof(gzConfigHeader_s) + sizeof(gzSettings_s);
    static const u32 BUF_SIZE = DMA_ALIGN(PAYLOAD_SIZE);
    u8 buf[BUF_SIZE] ATTRIBUTE_ALIGN(32);
    memset(buf, 0, sizeof(buf));
    *(u32*)buf = TPGZ_CMD_WORD(TPGZ_CMD_WRITE);

    gzConfigHeader_s cfg;
    cfg.version = gzInfo_c::GZ_SAVE_VERSION;
    cfg.settingsOffset = sizeof(gzConfigHeader_s);
    memset(cfg.reserved, 0, sizeof(cfg.reserved));
    memcpy(buf + 4, &cfg, sizeof(gzConfigHeader_s));
    memcpy(buf + 4 + cfg.settingsOffset, &g_gzInfo.mSettings, sizeof(gzSettings_s));

    if (!gzExiTransfer(buf, BUF_SIZE, EXI_WRITE)) {
        gzInfo_sendNotification("SD save FAILED (DMA err)");
        return -1;
    }

    u8 statusBuf[32] ATTRIBUTE_ALIGN(32);
    memset(statusBuf, 0, sizeof(statusBuf));
    gzExiTransfer(statusBuf, sizeof(statusBuf), EXI_READ);
    u32 status = *(u32*)statusBuf;
    if (status != 0) {
        gzInfo_sendNotification("SD save FAILED (write err)");
        return -1;
    }

    gzInfo_sendNotification("settings saved to SD!");
    gzInfo_seStart(Z2SE_SY_CONTINUE_OK);
    return 0;
}

int gzSD_c::load() {
    u8 cmdBuf[32] ATTRIBUTE_ALIGN(32);
    memset(cmdBuf, 0, sizeof(cmdBuf));
    *(u32*)cmdBuf = TPGZ_CMD_WORD(TPGZ_CMD_READ);
    if (!gzExiTransfer(cmdBuf, sizeof(cmdBuf), EXI_WRITE)) {
        gzInfo_sendNotification("SD load FAILED (cmd err)");
        return -1;
    }

    static const u32 DATA_SIZE = sizeof(gzConfigHeader_s) + sizeof(gzSettings_s);
    static const u32 BUF_SIZE = DMA_ALIGN(DATA_SIZE);
    u8 buf[BUF_SIZE] ATTRIBUTE_ALIGN(32);
    memset(buf, 0, BUF_SIZE);
    if (!gzExiTransfer(buf, BUF_SIZE, EXI_READ)) {
        gzInfo_sendNotification("SD load FAILED (read err)");
        return -1;
    }

    gzConfigHeader_s cfg;
    memcpy(&cfg, buf, sizeof(gzConfigHeader_s));
    if (cfg.version == 0) {
        gzInfo_sendNotification("SD load FAILED (not found)");
        return -1;
    }
    if (cfg.version != gzInfo_c::GZ_SAVE_VERSION) {
        OSReport("TPGZ: outdated SD save version %d (expected %d)\n",
                 cfg.version, gzInfo_c::GZ_SAVE_VERSION);
        gzInfo_sendNotification("SD load FAILED (version)");
        return -1;
    }
    memcpy(&g_gzInfo.mSettings, buf + cfg.settingsOffset, sizeof(gzSettings_s));
    gzInfo_sendNotification("settings loaded from SD!");
    gzInfo_seStart(Z2SE_SY_CONTINUE_OK);
    return 0;
}

int gzSD_c::remove() {
    u8 cmdBuf[32] ATTRIBUTE_ALIGN(32);
    memset(cmdBuf, 0, sizeof(cmdBuf));
    *(u32*)cmdBuf = TPGZ_CMD_WORD(TPGZ_CMD_DELETE);
    if (!gzExiTransfer(cmdBuf, sizeof(cmdBuf), EXI_WRITE)) {
        gzInfo_sendNotification("SD delete FAILED (DMA err)");
        return -1;
    }

    u8 statusBuf[32] ATTRIBUTE_ALIGN(32);
    memset(statusBuf, 0, sizeof(statusBuf));
    gzExiTransfer(statusBuf, sizeof(statusBuf), EXI_READ);
    u32 status = *(u32*)statusBuf;
    if (status != 0) {
        gzInfo_sendNotification("SD delete FAILED");
        return -1;
    }

    gzInfo_sendNotification("SD settings deleted!");
    gzInfo_seStart(Z2SE_SY_CONTINUE_OK);
    return 0;
}


#endif // !__REVOLUTION_SDK__

int gzInfo_c::storeSettings() {
#ifndef __REVOLUTION_SDK__
    if (mIsNintendont) {
        return mSD.store();
    }
#endif
    return mMemCard.store();
}

int gzInfo_c::loadSettings() {
#ifndef __REVOLUTION_SDK__
    if (mIsNintendont) {
        return mSD.load();
    }
#endif
    return mMemCard.load();
}

int gzInfo_c::deleteSettings() {
#ifndef __REVOLUTION_SDK__
    if (mIsNintendont) {
        return mSD.remove();
    }
#endif
    return mMemCard.remove();
}
