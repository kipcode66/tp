//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/npc/d_a_npc_yamis/executor.h"
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
extern void* const data_80B4969C[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80B46480-80B464AC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80B4648C: 80B4969C (data_80B4969C)
//	80B46490: 80B4969C (data_80B4969C)
//	80B46494: 8026314C (ModuleConstructorsX)
//	80B46498: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_yamis/executor/_prolog.s"
}
#pragma pop

/* 80B464AC-80B464D8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80B464B8: 8026308C (ModuleEpilog)
//	80B464BC: 80B496A4 (__destroy_global_chain_reference)
//	80B464C0: 80B496A4 (__destroy_global_chain_reference)
//	80B464C4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_yamis/executor/_epilog.s"
}
#pragma pop

/* 80B464D8-80B464F8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80B464E4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_yamis/executor/_unresolved.s"
}
#pragma pop
