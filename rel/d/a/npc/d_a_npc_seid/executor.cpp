//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/npc/d_a_npc_seid/executor.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void _prolog();
extern "C" void _epilog();
extern "C" void _unresolved();

//
// External References:
//

extern "C" void ModuleProlog();
extern "C" void ModuleEpilog();
extern "C" void ModuleUnresolved();
extern "C" void ModuleConstructorsX();
extern "C" void ModuleDestructorsX();
extern void* const data_80ACB348[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80AC95A0-80AC95CC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80AC95AC: 80ACB348 (data_80ACB348)
//	80AC95B0: 80ACB348 (data_80ACB348)
//	80AC95B4: 8026314C (ModuleConstructorsX)
//	80AC95B8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seid/executor/_prolog.s"
}
#pragma pop

/* 80AC95CC-80AC95F8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80AC95D8: 8026308C (ModuleEpilog)
//	80AC95DC: 80ACB350 (__destroy_global_chain_reference)
//	80AC95E0: 80ACB350 (__destroy_global_chain_reference)
//	80AC95E4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seid/executor/_epilog.s"
}
#pragma pop

/* 80AC95F8-80AC9618 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80AC9604: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_seid/executor/_unresolved.s"
}
#pragma pop
