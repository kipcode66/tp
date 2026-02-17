#include "d/dolzel.h" // IWYU pragma: keep

#ifndef __REVOLUTION_SDK__

#include "gz/gz.h"
#include "gz/gz_exi.h"
#include <dolphin/exi.h>
#include <dolphin/os.h>

bool gzExiTransfer(void* buf, u32 len, u32 mode) {
    if (mode == EXI_WRITE) {
        DCFlushRange(buf, len);
    }
    bool ok = EXIDma(GZ_EXI_CHAN, buf, len, mode, NULL);
    if (mode == EXI_READ) {
        DCInvalidateRange(buf, len);
    }
    return ok;
}

void gzReturnToLoader() {
    if (!g_gzInfo.mIsNintendont) {
        gzInfo_sendNotification("exit requires nintendont");
        return;
    }

    // Call DoGameExit in PADReadGC binary
    ((void(*)(void))0x93000008)();
}

#endif // !__REVOLUTION_SDK__
