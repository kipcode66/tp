//
// Generated By: dol2asm
// Translation Unit: global_destructor_chain
//

#include "rel/d/a/e/d_a_e_dn/libs/Runtime.PPCEABI.H/global_destructor_chain.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __register_global_object();
extern "C" static void __destroy_global_chain();
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;
extern void* const pad_804EE8A4[2];

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
/* 804EE8A0-804EE8A4 0004+00 s=0 e=1 z=0  None .dtors     __destroy_global_chain_reference */
SECTION_DTORS10 void* const __destroy_global_chain_reference = (void*)__destroy_global_chain;

/* 804EE8A4-804EE8AC 0008+00 s=0 e=0 z=0  None .dtors     None */
void* const pad_804EE8A4[2] = {
    (void*)__destroy_global_chain,
    (void*)NULL,
};

/* ############################################################################################## */
/* 804EEEE8-804EEEF0 0004+04 s=2 e=0 z=0  None .bss       __global_destructor_chain */
static u8 __global_destructor_chain[4 + 4 /* padding */];

/* 804E5138-804E5154 001C+00 s=0 e=1 z=0  None .text      __register_global_object */
//	804E5138: 804EEEE8 (__global_destructor_chain)
//	804E513C: 804EEEE8 (__global_destructor_chain)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __register_global_object() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dn/libs/Runtime.PPCEABI.H/global_destructor_chain/__register_global_object.s"
}
#pragma pop

/* 804E5154-804E51AC 0058+00 s=2 e=0 z=0  None .text      __destroy_global_chain */
//	804E5164: 804EEEE8 (__global_destructor_chain)
//	804E5168: 804EEEE8 (__global_destructor_chain)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void __destroy_global_chain() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dn/libs/Runtime.PPCEABI.H/global_destructor_chain/__destroy_global_chain.s"
}
#pragma pop
