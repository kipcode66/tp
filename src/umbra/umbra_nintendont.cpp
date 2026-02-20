#include "d/dolzel.h" // IWYU pragma: keep

#ifndef __REVOLUTION_SDK__

#include "umbra/umbra_nintendont.h"
#include <dolphin/os.h>

bool ninMailboxTransfer(void* buf, u32 len, u32 mode) {
    volatile u32* mailbox = (volatile u32*)NIN_MAILBOX_BASE;

    if (mode == 1) {
        DCFlushRange(buf, len);
    } else {
        DCInvalidateRange(buf, len);
    }

    u32 physAddr = (u32)buf & 0x1FFFFFFF;

    mailbox[1] = len;
    mailbox[2] = physAddr;
    mailbox[0] = (0x12 << 8) | (mode & 0xFF);

    for (int i = 0; i < 1000000; i++) {
        if (mailbox[0] == 0) {
            if (mode == 0) {
                DCInvalidateRange(buf, len);
            }
            return true;
        }
    }

    return false;
}

void ninReturnToLoader() {
    ((void (*)(void))0x93000008)();
}

#endif // !__REVOLUTION_SDK__
