//
// Generated By: dol2asm
// Translation Unit: global_destructor_chain
//

#include "rel/d/a/d_a_sq/libs/Runtime.PPCEABI.H/global_destructor_chain.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __register_global_object();
extern "C" static void __destroy_global_chain();
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;
extern void* const pad_805A1150[2];

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
/* 805A114C-805A1150 0004+00 s=0 e=1 z=0  None .dtors     __destroy_global_chain_reference */
SECTION_DTORS10 void* const __destroy_global_chain_reference = (void*)__destroy_global_chain;

/* 805A1150-805A1158 0008+00 s=0 e=0 z=0  None .dtors     None */
void* const pad_805A1150[2] = {
    (void*)__destroy_global_chain,
    (void*)NULL,
};

/* ############################################################################################## */
/* 805A1328-805A1330 0004+04 s=2 e=0 z=0  None .bss       __global_destructor_chain */
static u8 __global_destructor_chain[4 + 4 /* padding */];

/* 8059F5F8-8059F614 001C+00 s=0 e=1 z=0  None .text      __register_global_object */
//	8059F5F8: 805A1328 (__global_destructor_chain)
//	8059F5FC: 805A1328 (__global_destructor_chain)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __register_global_object() {
    nofralloc
#include "asm/rel/d/a/d_a_sq/libs/Runtime.PPCEABI.H/global_destructor_chain/__register_global_object.s"
}
#pragma pop

/* 8059F614-8059F66C 0058+00 s=2 e=0 z=0  None .text      __destroy_global_chain */
//	8059F624: 805A1328 (__global_destructor_chain)
//	8059F628: 805A1328 (__global_destructor_chain)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void __destroy_global_chain() {
    nofralloc
#include "asm/rel/d/a/d_a_sq/libs/Runtime.PPCEABI.H/global_destructor_chain/__destroy_global_chain.s"
}
#pragma pop
