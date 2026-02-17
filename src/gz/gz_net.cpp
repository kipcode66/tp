#include "d/dolzel.h" // IWYU pragma: keep

#ifndef __REVOLUTION_SDK__

#include "gz/gz_net.h"
#include "gz/gz.h"
#include "gz/gz_exi.h"
#include <cstdio>
#include <dolphin/exi.h>
#include <dolphin/os.h>

int gzNetSendUDP(u32 ip, u16 port, const void* data, u32 len) {
    if (!g_gzInfo.mIsNintendont) {
        gzInfo_sendNotification("network requires nintendont");
        return -1;
    }

    // capping at 1400 MTU for now. too lazy to handle jumbo packets right now
    if (len > 1400) {
        gzInfo_sendNotification("packet too large");
        return -1;
    }

    // Layout: [4B cmd] [4B ip] [2B port] [2B payload_len] [payload] [pad to 32B]
    u32 headerSize = 4 + 4 + 2 + 2;
    u32 totalSize = DMA_ALIGN(headerSize + len);
    u8 buf[DMA_ALIGN(4 + 4 + 2 + 2 + 1400)] ATTRIBUTE_ALIGN(32);
    memset(buf, 0, totalSize);

    // Command word
    *(u32*)(buf + 0) = TPGZ_CMD_WORD(TPGZ_CMD_NET_SEND);

    // IP address
    buf[4] = (ip >> 24) & 0xFF;
    buf[5] = (ip >> 16) & 0xFF;
    buf[6] = (ip >> 8) & 0xFF;
    buf[7] = ip & 0xFF;

    // Port
    buf[8] = (port >> 8) & 0xFF;
    buf[9] = port & 0xFF;

    // Payload length
    buf[10] = (len >> 8) & 0xFF;
    buf[11] = len & 0xFF;

    // Payload
    memcpy(buf + 12, data, len);

    if (!gzExiTransfer(buf, totalSize, EXI_WRITE)) {
        gzInfo_sendNotification("net send failed (DMA)");
        return -1;
    }

    // Read back status + diagnostics
    // [0..3] status  [4..7] top_fd  [8..11] ios_err
    // [12..15] net_started  [16..19] init_err
    u8 statusBuf[32] ATTRIBUTE_ALIGN(32);
    memset(statusBuf, 0, sizeof(statusBuf));
    gzExiTransfer(statusBuf, sizeof(statusBuf), EXI_READ);

    u32 status = *(u32*)(statusBuf + 0);
    s32 topFd = *(s32*)(statusBuf + 4);
    s32 iosErr = *(s32*)(statusBuf + 8);
    u32 netStarted = *(u32*)(statusBuf + 12);
    s32 initErr = *(s32*)(statusBuf + 16);
    
    if (status != 0) {
        char msg[80];
        snprintf(msg, sizeof(msg), "net: s=%d fd=%d e=%d up=%d i=%d",
                 status, topFd, iosErr, netStarted, initErr);
        OSReport("TPGZ NET: %s\n", msg);
        gzInfo_sendNotification(msg);
        return -1;
    }

    return 0;
}

int gzNetRecvUDP(void* buf, u32 maxLen) {
    if (!g_gzInfo.mIsNintendont) {
        return -1;
    }

    // Write: just the command word
    u8 cmdBuf[32] ATTRIBUTE_ALIGN(32);
    memset(cmdBuf, 0, 32);
    *(u32*)cmdBuf = TPGZ_CMD_WORD(TPGZ_CMD_NET_RECV);

    if (!gzExiTransfer(cmdBuf, 32, EXI_WRITE)) {
        return -1;
    }

    // Read: [4B status] [4B data_len] [data...]
    u32 readSize = DMA_ALIGN(8 + maxLen);
    u8 readBuf[DMA_ALIGN(8 + 1400)] ATTRIBUTE_ALIGN(32);
    memset(readBuf, 0, readSize);

    if (!gzExiTransfer(readBuf, readSize, EXI_READ)) {
        return -1;
    }

    u32 status  = *(u32*)(readBuf + 0);
    u32 dataLen = *(u32*)(readBuf + 4);

    if (status != 0) {
        return -1;
    }
    if (dataLen == 0) {
        return 0;
    }
    if (dataLen > maxLen) {
        dataLen = maxLen;
    }

    memcpy(buf, readBuf + 8, dataLen);
    return (int)dataLen;
}

#endif // !__REVOLUTION_SDK__
