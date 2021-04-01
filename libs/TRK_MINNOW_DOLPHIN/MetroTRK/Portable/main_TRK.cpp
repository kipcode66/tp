//
// Generated By: dol2asm
// Translation Unit: MetroTRK/Portable/main_TRK
//

#include "TRK_MINNOW_DOLPHIN/MetroTRK/Portable/main_TRK.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void TRK_main();
SECTION_BSS u8 TRK_mainError[4 + 4 /* padding */];

//
// External References:
//

extern "C" void TRKNubMainLoop();
extern "C" void TRKNubWelcome();
extern "C" void TRKTerminateNub();
extern "C" void TRKInitializeNub();
extern "C" void MWTRACE();

//
// Declarations:
//

/* ############################################################################################## */
/* 803A2BF8-803A2C08 000B+05 s=1 e=0 z=0  None .rodata    @80 */
SECTION_RODATA static u8 const lit_80[11 + 5 /* padding */] = {
    0x54,
    0x52,
    0x4B,
    0x5F,
    0x4D,
    0x61,
    0x69,
    0x6E,
    0x20,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8044F818-8044F820 0004+04 s=1 e=0 z=0  .bss .bss       TRK_mainError */
static u8 TRK_mainError[4 + 4 /* padding */];

/* 80371B9C-80371BF4 0058+00 s=0 e=2 z=0  None .text      TRK_main */
//	80371BA4: 803A2BF8 (lit_80)
//	80371BB0: 803A2BF8 (lit_80)
//	80371BB8: 80372C54 (MWTRACE)
//	80371BBC: 8036CE8C (TRKInitializeNub)
//	80371BC0: 8044F818 (TRK_mainError)
//	80371BC8: 8044F818 (TRK_mainError)
//	80371BD0: 8036CE40 (TRKNubWelcome)
//	80371BD4: 8036CB20 (TRKNubMainLoop)
//	80371BD8: 8036CE68 (TRKTerminateNub)
//	80371BDC: 8044F818 (TRK_mainError)
//	80371BE0: 8044F818 (TRK_mainError)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void TRK_main() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/main_TRK/TRK_main.s"
}
#pragma pop
