//
// Generated By: dol2asm
// Translation Unit: global_destructor_chain
//

#include "rel/d/a/b/d_a_b_yo_ice/libs/Runtime.PPCEABI.H/global_destructor_chain.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __register_global_object();
extern "C" static void __destroy_global_chain();
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;
extern void* const pad_8063DC7C[2];

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
/* 8063DC78-8063DC7C 0004+00 s=0 e=1 z=0  None .dtors     __destroy_global_chain_reference */
SECTION_DTORS10 void* const __destroy_global_chain_reference = (void*)__destroy_global_chain;

/* 8063DC7C-8063DC84 0008+00 s=0 e=0 z=0  None .dtors     None */
void* const pad_8063DC7C[2] = {
    (void*)__destroy_global_chain,
    (void*)NULL,
};

/* ############################################################################################## */
/* 8063DFE0-8063DFE8 0004+04 s=2 e=0 z=0  None .bss       __global_destructor_chain */
static u8 __global_destructor_chain[4 + 4 /* padding */];

/* 8063A0D8-8063A0F4 001C+00 s=0 e=1 z=0  None .text      __register_global_object */
//	8063A0D8: 8063DFE0 (__global_destructor_chain)
//	8063A0DC: 8063DFE0 (__global_destructor_chain)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __register_global_object() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_yo_ice/libs/Runtime.PPCEABI.H/global_destructor_chain/__register_global_object.s"
}
#pragma pop

/* 8063A0F4-8063A14C 0058+00 s=2 e=0 z=0  None .text      __destroy_global_chain */
//	8063A104: 8063DFE0 (__global_destructor_chain)
//	8063A108: 8063DFE0 (__global_destructor_chain)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void __destroy_global_chain() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_yo_ice/libs/Runtime.PPCEABI.H/global_destructor_chain/__destroy_global_chain.s"
}
#pragma pop
