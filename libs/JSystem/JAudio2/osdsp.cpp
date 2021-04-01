//
// Generated By: dol2asm
// Translation Unit: osdsp
//

#include "JSystem/JAudio2/osdsp.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct STRUCT_DSP_TASK {};

//
// Forward References:
//

void DSPAddPriorTask(STRUCT_DSP_TASK*);

extern "C" void DSPAddTask();
extern "C" void DSPAddPriorTask__FP15STRUCT_DSP_TASK();

//
// External References:
//

extern "C" void OSReport();
extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void __DSP_boot_task();
extern "C" void __DSP_insert_task();
extern "C" extern u8 DSP_prior_task[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 8039B8B8-8039B8D4 001A+02 s=1 e=0 z=0  None .rodata    @81 */
SECTION_RODATA static u8 const lit_81[26 + 2 /* padding */] = {
    0x50,
    0x72,
    0x69,
    0x6F,
    0x72,
    0x20,
    0x54,
    0x61,
    0x73,
    0x6B,
    0x20,
    0x69,
    0x73,
    0x20,
    0x6E,
    0x6F,
    0x74,
    0x20,
    0x69,
    0x6E,
    0x69,
    0x74,
    0x65,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
};

/* 8029EA00-8029EA84 0084+00 s=0 e=1 z=0  None .text      DSPAddTask */
//	8029EA18: 8045130C (DSP_prior_task)
//	8029EA24: 8039B8B8 (lit_81)
//	8029EA28: 8039B8B8 (lit_81)
//	8029EA30: 80006ABC (OSReport)
//	8029EA3C: 8033D6F4 (OSDisableInterrupts)
//	8029EA4C: 803528FC (__DSP_insert_task)
//	8029EA64: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
#pragma function_align 32
extern "C" asm void DSPAddTask() {
    nofralloc
#include "asm/JSystem/JAudio2/osdsp/DSPAddTask.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039B8D4-8039B8F8 001F+05 s=1 e=0 z=0  None .rodata    @88 */
SECTION_RODATA static u8 const lit_88[31 + 5 /* padding */] = {
    0x41,
    0x6C,
    0x72,
    0x65,
    0x61,
    0x64,
    0x79,
    0x20,
    0x69,
    0x6E,
    0x69,
    0x74,
    0x65,
    0x64,
    0x20,
    0x70,
    0x72,
    0x69,
    0x6F,
    0x72,
    0x20,
    0x44,
    0x53,
    0x50,
    0x20,
    0x74,
    0x61,
    0x73,
    0x6B,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8029EAA0-8029EB1C 007C+00 s=0 e=1 z=0  None .text      DSPAddPriorTask__FP15STRUCT_DSP_TASK */
//	8029EAB8: 8045130C (DSP_prior_task)
//	8029EAC4: 8039B8D4 (lit_88)
//	8029EAC8: 8039B8D4 (lit_88)
//	8029EAD0: 80006ABC (OSReport)
//	8029EAD8: 8033D6F4 (OSDisableInterrupts)
//	8029EADC: 8045130C (DSP_prior_task)
//	8029EAF8: 80352770 (__DSP_boot_task)
//	8029EB00: 8033D71C (OSRestoreInterrupts)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
#pragma function_align 32
asm void DSPAddPriorTask(STRUCT_DSP_TASK* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/osdsp/DSPAddPriorTask__FP15STRUCT_DSP_TASK.s"
}
#pragma pop
