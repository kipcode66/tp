//
// Generated By: dol2asm
// Translation Unit: global_destructor_chain
//

#include "rel/d/a/b/d_a_b_gg/libs/Runtime.PPCEABI.H/global_destructor_chain.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __register_global_object();
extern "C" static void __destroy_global_chain();
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;
extern void* const pad_805ED058[2];

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
/* 805ED054-805ED058 0004+00 s=0 e=1 z=0  None .dtors     __destroy_global_chain_reference */
SECTION_DTORS10 void* const __destroy_global_chain_reference = (void*)__destroy_global_chain;

/* 805ED058-805ED060 0008+00 s=0 e=0 z=0  None .dtors     None */
void* const pad_805ED058[2] = {
    (void*)__destroy_global_chain,
    (void*)NULL,
};

/* ############################################################################################## */
/* 805ED6B8-805ED6C0 0004+04 s=2 e=0 z=0  None .bss       __global_destructor_chain */
static u8 __global_destructor_chain[4 + 4 /* padding */];

/* 805DE398-805DE3B4 001C+00 s=0 e=1 z=0  None .text      __register_global_object */
//	805DE398: 805ED6B8 (__global_destructor_chain)
//	805DE39C: 805ED6B8 (__global_destructor_chain)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __register_global_object() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_gg/libs/Runtime.PPCEABI.H/global_destructor_chain/__register_global_object.s"
}
#pragma pop

/* 805DE3B4-805DE40C 0058+00 s=2 e=0 z=0  None .text      __destroy_global_chain */
//	805DE3C4: 805ED6B8 (__global_destructor_chain)
//	805DE3C8: 805ED6B8 (__global_destructor_chain)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void __destroy_global_chain() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_gg/libs/Runtime.PPCEABI.H/global_destructor_chain/__destroy_global_chain.s"
}
#pragma pop
