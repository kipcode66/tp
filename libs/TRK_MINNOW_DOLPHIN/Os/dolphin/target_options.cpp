//
// Generated By: dol2asm
// Translation Unit: Os/dolphin/target_options
//

#include "TRK_MINNOW_DOLPHIN/Os/dolphin/target_options.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void GetUseSerialIO();
extern "C" void SetUseSerialIO();

//
// External References:
//

SECTION_BSS extern u8 data_8044F828[8];

//
// Declarations:
//

/* 80372180-80372190 36CAC0 0010+00 0/0 2/2 0/0 .text            GetUseSerialIO */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GetUseSerialIO() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/Os/dolphin/target_options/GetUseSerialIO.s"
}
#pragma pop

/* 80372190-8037219C 36CAD0 000C+00 0/0 1/1 0/0 .text            SetUseSerialIO */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void SetUseSerialIO() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/Os/dolphin/target_options/SetUseSerialIO.s"
}
#pragma pop
