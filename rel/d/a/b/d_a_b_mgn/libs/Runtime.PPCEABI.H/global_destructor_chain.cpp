//
// Generated By: dol2asm
// Translation Unit: global_destructor_chain
//

#include "rel/d/a/b/d_a_b_mgn/libs/Runtime.PPCEABI.H/global_destructor_chain.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __register_global_object();
extern "C" static void __destroy_global_chain();
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;
extern void* const pad_8060FDD8[2];

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
/* 8060FDD4-8060FDD8 0004+00 s=0 e=1 z=0  None .dtors     __destroy_global_chain_reference */
SECTION_DTORS10 void* const __destroy_global_chain_reference = (void*)__destroy_global_chain;

/* 8060FDD8-8060FDE0 0008+00 s=0 e=0 z=0  None .dtors     None */
void* const pad_8060FDD8[2] = {
    (void*)__destroy_global_chain,
    (void*)NULL,
};

/* ############################################################################################## */
/* 80610438-80610440 0004+04 s=2 e=0 z=0  None .bss       __global_destructor_chain */
static u8 __global_destructor_chain[4 + 4 /* padding */];

/* 806056B8-806056D4 001C+00 s=0 e=1 z=0  None .text      __register_global_object */
//	806056B8: 80610438 (__global_destructor_chain)
//	806056BC: 80610438 (__global_destructor_chain)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __register_global_object() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_mgn/libs/Runtime.PPCEABI.H/global_destructor_chain/__register_global_object.s"
}
#pragma pop

/* 806056D4-8060572C 0058+00 s=2 e=0 z=0  None .text      __destroy_global_chain */
//	806056E4: 80610438 (__global_destructor_chain)
//	806056E8: 80610438 (__global_destructor_chain)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void __destroy_global_chain() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_mgn/libs/Runtime.PPCEABI.H/global_destructor_chain/__destroy_global_chain.s"
}
#pragma pop
