//
// Generated By: dol2asm
// Translation Unit: JKRFile
//

#include "JSystem/JKernel/JKRFile.h"
#include "dolphin/vi/vi.h"

/* 802D9518-802D9584 2D3E58 006C+00 0/0 2/2 0/0 .text            read__7JKRFileFPvll */
s32 JKRFile::read(void* data, s32 size, long offset) {
    while (true) {
        s32 result = readData(data, size, offset);
        if (size != result)
            VIWaitForRetrace();
        else
            return result;
    }
}
