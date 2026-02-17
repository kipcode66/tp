#include "d/dolzel.h" // IWYU pragma: keep

#ifndef __REVOLUTION_SDK__

#include "gz/gz.h"
#include "gz/gz_exi.h"
#include <dolphin/exi.h>
#include <dolphin/os.h>

int gzSD_c::write(const void* data, u32 size) {
    static const u32 CMD_SIZE = 4;
    u32 payloadSize = CMD_SIZE + size;
    u32 bufSize = DMA_ALIGN(payloadSize);
    u8 buf[DMA_ALIGN(512)] ATTRIBUTE_ALIGN(32);
    if (bufSize > sizeof(buf)) return -1;

    memset(buf, 0, bufSize);
    *(u32*)buf = TPGZ_CMD_WORD(TPGZ_CMD_WRITE);
    memcpy(buf + CMD_SIZE, data, size);

    if (!gzExiTransfer(buf, bufSize, EXI_WRITE)) {
        return -1;
    }

    u8 statusBuf[32] ATTRIBUTE_ALIGN(32);
    memset(statusBuf, 0, sizeof(statusBuf));
    gzExiTransfer(statusBuf, sizeof(statusBuf), EXI_READ);
    u32 status = *(u32*)statusBuf;
    return (status == 0) ? 0 : -1;
}

int gzSD_c::read(void* data, u32 size) {
    u8 cmdBuf[32] ATTRIBUTE_ALIGN(32);
    memset(cmdBuf, 0, sizeof(cmdBuf));
    *(u32*)cmdBuf = TPGZ_CMD_WORD(TPGZ_CMD_READ);
    if (!gzExiTransfer(cmdBuf, sizeof(cmdBuf), EXI_WRITE)) {
        return -1;
    }

    u32 bufSize = DMA_ALIGN(size);
    u8 buf[DMA_ALIGN(512)] ATTRIBUTE_ALIGN(32);
    if (bufSize > sizeof(buf)) return -1;

    memset(buf, 0, bufSize);
    if (!gzExiTransfer(buf, bufSize, EXI_READ)) {
        return -1;
    }

    memcpy(data, buf, size);
    return 0;
}

int gzSD_c::_delete() {
    u8 cmdBuf[32] ATTRIBUTE_ALIGN(32);
    memset(cmdBuf, 0, sizeof(cmdBuf));
    *(u32*)cmdBuf = TPGZ_CMD_WORD(TPGZ_CMD_DELETE);
    if (!gzExiTransfer(cmdBuf, sizeof(cmdBuf), EXI_WRITE)) {
        return -1;
    }

    u8 statusBuf[32] ATTRIBUTE_ALIGN(32);
    memset(statusBuf, 0, sizeof(statusBuf));
    gzExiTransfer(statusBuf, sizeof(statusBuf), EXI_READ);
    u32 status = *(u32*)statusBuf;
    return (status == 0) ? 0 : -1;
}

int gzSD_c::storeSettings() {
    u8 data[sizeof(gzConfigHeader_s) + sizeof(gzSettings_s)];

    gzConfigHeader_s cfg;
    cfg.version = gzInfo_c::GZ_SAVE_VERSION;
    cfg.settingsOffset = sizeof(gzConfigHeader_s);
    memset(cfg.reserved, 0, sizeof(cfg.reserved));
    memcpy(data, &cfg, sizeof(gzConfigHeader_s));
    memcpy(data + cfg.settingsOffset, &g_gzInfo.mSettings, sizeof(gzSettings_s));

    int result = write(data, sizeof(data));
    if (result != 0) {
        gzInfo_sendNotification("SD save FAILED");
        return -1;
    }

    gzInfo_sendNotification("settings saved to SD!");
    gzInfo_seStart(Z2SE_SY_CONTINUE_OK);
    return 0;
}

int gzSD_c::loadSettings() {
    u8 data[sizeof(gzConfigHeader_s) + sizeof(gzSettings_s)];
    int result = read(data, sizeof(data));
    if (result != 0) {
        gzInfo_sendNotification("SD load FAILED");
        return -1;
    }

    gzConfigHeader_s cfg;
    memcpy(&cfg, data, sizeof(gzConfigHeader_s));
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
    memcpy(&g_gzInfo.mSettings, data + cfg.settingsOffset, sizeof(gzSettings_s));
    gzInfo_sendNotification("settings loaded from SD!");
    gzInfo_seStart(Z2SE_SY_CONTINUE_OK);
    return 0;
}

int gzSD_c::deleteSettings() {
    int result = _delete();
    if (result != 0) {
        gzInfo_sendNotification("SD delete FAILED");
        return -1;
    }

    gzInfo_sendNotification("SD settings deleted!");
    gzInfo_seStart(Z2SE_SY_CONTINUE_OK);
    return 0;
}

#endif // !__REVOLUTION_SDK__
