//
// Generated By: dol2asm
// Translation Unit: global_destructor_chain
//

#include "rel/d/a/npc/d_a_npc_wrestler/libs/Runtime.PPCEABI.H/global_destructor_chain.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __register_global_object();
extern "C" static void __destroy_global_chain();
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;
extern void* const pad_80B416D4[2];

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
/* 80B416D0-80B416D4 0004+00 s=0 e=1 z=0  None .dtors     __destroy_global_chain_reference */
SECTION_DTORS10 void* const __destroy_global_chain_reference = (void*)__destroy_global_chain;

/* 80B416D4-80B416DC 0008+00 s=0 e=0 z=0  None .dtors     None */
void* const pad_80B416D4[2] = {
    (void*)__destroy_global_chain,
    (void*)NULL,
};

/* ############################################################################################## */
/* 80B42E10-80B42E18 0004+04 s=2 e=0 z=0  None .bss       __global_destructor_chain */
static u8 __global_destructor_chain[4 + 4 /* padding */];

/* 80B2F218-80B2F234 001C+00 s=0 e=2 z=0  None .text      __register_global_object */
//	80B2F218: 80B42E10 (__global_destructor_chain)
//	80B2F21C: 80B42E10 (__global_destructor_chain)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __register_global_object() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_wrestler/libs/Runtime.PPCEABI.H/global_destructor_chain/__register_global_object.s"
}
#pragma pop

/* 80B2F234-80B2F28C 0058+00 s=2 e=0 z=0  None .text      __destroy_global_chain */
//	80B2F244: 80B42E10 (__global_destructor_chain)
//	80B2F248: 80B42E10 (__global_destructor_chain)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void __destroy_global_chain() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_wrestler/libs/Runtime.PPCEABI.H/global_destructor_chain/__destroy_global_chain.s"
}
#pragma pop
