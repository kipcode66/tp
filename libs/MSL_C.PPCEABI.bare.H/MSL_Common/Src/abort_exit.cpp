//
// Generated By: dol2asm
// Translation Unit: MSL_Common/Src/abort_exit
//

#include "MSL_C.PPCEABI.bare.H/MSL_Common/Src/abort_exit.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void exit();
extern "C" void abort();
extern "C" extern u8 __stdio_exit[4];
extern "C" extern u8 data_804519A0[8];

//
// External References:
//

extern "C" void _ExitProcess();
extern "C" void __destroy_global_chain();
extern "C" void __end_critical_region();
extern "C" void __begin_critical_region();
extern "C" void __kill_critical_regions();
extern "C" void raise();
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* ############################################################################################## */
/* 8044D440-8044D540 0100+00 s=2 e=0 z=0  None .bss       __atexit_funcs */
static u8 __atexit_funcs[256];

/* 80451990-80451994 0004+00 s=2 e=0 z=0  None .sbss      __aborting */
static u8 __aborting[4];

/* 80451994-80451998 0004+00 s=2 e=0 z=0  None .sbss      __atexit_curr_func */
static u8 __atexit_curr_func[4];

/* 80451998-8045199C 0004+00 s=1 e=1 z=0  None .sbss      __stdio_exit */
u8 __stdio_exit[4];

/* 8045199C-804519A0 0004+00 s=2 e=0 z=0  None .sbss      __console_exit */
static u8 __console_exit[4];

/* 803629CC-80362ABC 00F0+00 s=0 e=2 z=0  None .text      exit */
//	803629DC: 80451990 (__aborting)
//	803629EC: 80365468 (__begin_critical_region)
//	803629F4: 80365464 (__end_critical_region)
//	803629F8: 80361BDC (__destroy_global_chain)
//	803629FC: 80373980 (__destroy_global_chain_reference)
//	80362A00: 80373980 (__destroy_global_chain_reference)
//	80362A24: 80451998 (__stdio_exit)
//	80362A3C: 80451998 (__stdio_exit)
//	80362A44: 80365468 (__begin_critical_region)
//	80362A48: 8044D440 (__atexit_funcs)
//	80362A4C: 8044D440 (__atexit_funcs)
//	80362A54: 80451994 (__atexit_curr_func)
//	80362A60: 80451994 (__atexit_curr_func)
//	80362A70: 80451994 (__atexit_curr_func)
//	80362A80: 80365464 (__end_critical_region)
//	80362A84: 8036546C (__kill_critical_regions)
//	80362A88: 8045199C (__console_exit)
//	80362AA0: 8045199C (__console_exit)
//	80362AA4: 80342BEC (_ExitProcess)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void exit() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/abort_exit/exit.s"
}
#pragma pop

/* 80362ABC-80362B58 009C+00 s=0 e=9 z=0  None .text      abort */
//	80362AD0: 8036881C (raise)
//	80362ADC: 80451990 (__aborting)
//	80362AE0: 80365468 (__begin_critical_region)
//	80362AE4: 8044D440 (__atexit_funcs)
//	80362AE8: 8044D440 (__atexit_funcs)
//	80362AF0: 80451994 (__atexit_curr_func)
//	80362AFC: 80451994 (__atexit_curr_func)
//	80362B0C: 80451994 (__atexit_curr_func)
//	80362B1C: 80365464 (__end_critical_region)
//	80362B20: 8036546C (__kill_critical_regions)
//	80362B24: 8045199C (__console_exit)
//	80362B3C: 8045199C (__console_exit)
//	80362B40: 80342BEC (_ExitProcess)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void abort() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/abort_exit/abort.s"
}
#pragma pop

/* ############################################################################################## */
/* 804519A0-804519A8 0008+00 s=0 e=1 z=0  None .sbss      None */
u8 data_804519A0[8];
