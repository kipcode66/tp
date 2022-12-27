//
// Generated By: dol2asm
// Translation Unit: ar
//

#include "dolphin/ar/ar.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

void ARRegisterDMACallback();
void ARGetDMAStatus();
void ARStartDMA();
void __ARHandler();
void __ARClearInterrupt();
void __ARGetInterruptStatus();
void __ARChecksize();

//
// External References:
//

SECTION_INIT void memset();
void PPCSync();
void OSRegisterVersion();
void DCInvalidateRange();
void DCFlushRange();
void OSSetCurrentContext();
void OSClearContext();
void OSDisableInterrupts();
void OSRestoreInterrupts();
void __OSSetInterruptHandler();
void __OSUnmaskInterrupts();

//
// Declarations:
//

/* ############################################################################################## */
/* 804518B8-804518BC 000DB8 0004+00 3/3 0/0 0/0 .sbss            __AR_Callback */
static u8 __AR_Callback[4];

/* 80350554-80350598 34AE94 0044+00 0/0 1/1 0/0 .text            ARRegisterDMACallback */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void ARRegisterDMACallback() {
    nofralloc
#include "asm/dolphin/ar/ar/ARRegisterDMACallback.s"
}
#pragma pop

/* 80350598-803505D4 34AED8 003C+00 0/0 2/2 0/0 .text            ARGetDMAStatus */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void ARGetDMAStatus() {
    nofralloc
#include "asm/dolphin/ar/ar/ARGetDMAStatus.s"
}
#pragma pop

/* 803505D4-803506C4 34AF14 00F0+00 0/0 5/5 0/0 .text            ARStartDMA */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void ARStartDMA() {
    nofralloc
#include "asm/dolphin/ar/ar/ARStartDMA.s"
}
#pragma pop

/* ############################################################################################## */
/* 804518BC-804518C0 000DBC 0004+00 2/1 0/0 0/0 .sbss            __AR_Size */
static u8 __AR_Size[4];

/* 804518C0-804518C4 000DC0 0004+00 1/1 0/0 0/0 .sbss            __AR_InternalSize */
static u8 __AR_InternalSize[4];

/* 804518C4-804518C8 000DC4 0004+00 1/1 0/0 0/0 .sbss            __AR_ExpansionSize */
static u8 __AR_ExpansionSize[4];

/* 804518C8-804518CC 000DC8 0004+00 2/2 0/0 0/0 .sbss            __AR_StackPointer */
static u8 __AR_StackPointer[4];

/* 804518CC-804518D0 000DCC 0004+00 2/2 0/0 0/0 .sbss            __AR_FreeBlocks */
static u8 __AR_FreeBlocks[4];

/* 804518D0-804518D4 000DD0 0004+00 2/2 0/0 0/0 .sbss            __AR_BlockLength */
static u8 __AR_BlockLength[4];

/* 803506C4-8035072C 34B004 0068+00 0/0 1/1 0/0 .text            ARAlloc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm u32 ARAlloc(u32) {
    nofralloc
#include "asm/dolphin/ar/ar/ARAlloc.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D1BE8-803D1C30 02ED08 0044+04 1/0 0/0 0/0 .data            @1 */
SECTION_DATA static char lit_1[] = "<< Dolphin SDK - AR\trelease build: Apr  5 2004 04:15:03 (0x2301) >>";

/* 80450A48-80450A50 -00001 0004+04 1/1 0/0 0/0 .sdata           __ARVersion */
SECTION_SDATA static void* __ARVersion[1 + 1 /* padding */] = {
    (void*)&lit_1,
    /* padding */
    NULL,
};

/* 804518D4-804518D8 000DD4 0004+00 1/1 0/0 0/0 .sbss            __AR_init_flag */
static u8 __AR_init_flag[4];

/* 8035072C-803507F0 34B06C 00C4+00 0/0 1/1 0/0 .text            ARInit */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm u32 ARInit(u32*, u32) {
    nofralloc
#include "asm/dolphin/ar/ar/ARInit.s"
}
#pragma pop

/* 803507F0-803507F8 -00001 0008+00 0/0 0/0 0/0 .text            ARGetSize */
u32 ARGetSize() {
    return *(u32*)(&__AR_Size);
}

/* 803507F8-80350870 34B138 0078+00 1/1 0/0 0/0 .text            __ARHandler */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __ARHandler() {
    nofralloc
#include "asm/dolphin/ar/ar/__ARHandler.s"
}
#pragma pop

/* 80350870-80350890 34B1B0 0020+00 0/0 2/2 0/0 .text            __ARClearInterrupt */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __ARClearInterrupt() {
    nofralloc
#include "asm/dolphin/ar/ar/__ARClearInterrupt.s"
}
#pragma pop

/* 80350890-803508A0 34B1D0 0010+00 0/0 2/2 0/0 .text            __ARGetInterruptStatus */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __ARGetInterruptStatus() {
    nofralloc
#include "asm/dolphin/ar/ar/__ARGetInterruptStatus.s"
}
#pragma pop

/* 803508A0-80352094 34B1E0 17F4+00 1/1 0/0 0/0 .text            __ARChecksize */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __ARChecksize() {
    nofralloc
#include "asm/dolphin/ar/ar/__ARChecksize.s"
}
#pragma pop