//
// Generated By: dol2asm
// Translation Unit: global_destructor_chain
//

#include "rel/d/a/npc/d_a_npc_gra/libs/Runtime.PPCEABI.H/global_destructor_chain.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __register_global_object();
extern "C" static void __destroy_global_chain();
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;
extern void* const pad_809C9D90[2];

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
/* 809C9D8C-809C9D90 0004+00 s=0 e=1 z=0  None .dtors     __destroy_global_chain_reference */
SECTION_DTORS10 void* const __destroy_global_chain_reference = (void*)__destroy_global_chain;

/* 809C9D90-809C9D98 0008+00 s=0 e=0 z=0  None .dtors     None */
void* const pad_809C9D90[2] = {
    (void*)__destroy_global_chain,
    (void*)NULL,
};

/* ############################################################################################## */
/* 809CB2F0-809CB2F8 0004+04 s=2 e=0 z=0  None .bss       __global_destructor_chain */
static u8 __global_destructor_chain[4 + 4 /* padding */];

/* 809BE8D8-809BE8F4 001C+00 s=0 e=2 z=0  None .text      __register_global_object */
//	809BE8D8: 809CB2F0 (__global_destructor_chain)
//	809BE8DC: 809CB2F0 (__global_destructor_chain)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __register_global_object() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_gra/libs/Runtime.PPCEABI.H/global_destructor_chain/__register_global_object.s"
}
#pragma pop

/* 809BE8F4-809BE94C 0058+00 s=2 e=0 z=0  None .text      __destroy_global_chain */
//	809BE904: 809CB2F0 (__global_destructor_chain)
//	809BE908: 809CB2F0 (__global_destructor_chain)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void __destroy_global_chain() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_gra/libs/Runtime.PPCEABI.H/global_destructor_chain/__destroy_global_chain.s"
}
#pragma pop
