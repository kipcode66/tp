#include "d/dolzel.h" // IWYU pragma: keep

#ifndef __REVOLUTION_SDK__

#include "umbra/umbra_platform.h"
#include "umbra/umbra_nintendont.h"
#include <dolphin/os.h>

static UmbraPlatform s_platform = PLATFORM_UNKNOWN;
static bool s_detected = false;

static bool probeNintendontUmbra() {
    u8 probeBuf[32] ATTRIBUTE_ALIGN(32);
    memset(probeBuf, 0, sizeof(probeBuf));
    *(u32*)(probeBuf) = UMBRA_CMD_WORD(0x00);
    DCFlushRange(probeBuf, sizeof(probeBuf));

    volatile u32* mailbox = (volatile u32*)NIN_MAILBOX_BASE;
    u32 physAddr = (u32)probeBuf & 0x1FFFFFFF;

    mailbox[1] = sizeof(probeBuf);
    mailbox[2] = physAddr;
    mailbox[0] = (0x12 << 8) | 1;

    for (int i = 0; i < 100000; i++) {
        if (mailbox[0] == 0) {
            return true;
        }
    }

    return false;
}

UmbraPlatform umbraDetectPlatform() {
    if (s_detected) {
        return s_platform;
    }

    s_detected = true;

    if (probeNintendontUmbra()) {
        s_platform = PLATFORM_NINTENDONT_UMBRA;
        OSReport("umbra: detected PLATFORM_NINTENDONT_UMBRA\n");
        return s_platform;
    }

    s_platform = PLATFORM_UNKNOWN;
    OSReport("umbra: platform unknown\n");
    return s_platform;
}

bool umbraIsNintendont() {
    UmbraPlatform p = umbraDetectPlatform();
    return p == PLATFORM_NINTENDONT || p == PLATFORM_NINTENDONT_UMBRA;
}

#endif // !__REVOLUTION_SDK__
