//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/npc/d_a_npc_wrestler/executor.h"
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
extern void* const data_80B416C8[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80B2F1A0-80B2F1CC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80B2F1AC: 80B416C8 (data_80B416C8)
//	80B2F1B0: 80B416C8 (data_80B416C8)
//	80B2F1B4: 8026314C (ModuleConstructorsX)
//	80B2F1B8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_wrestler/executor/_prolog.s"
}
#pragma pop

/* 80B2F1CC-80B2F1F8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80B2F1D8: 8026308C (ModuleEpilog)
//	80B2F1DC: 80B416D0 (__destroy_global_chain_reference)
//	80B2F1E0: 80B416D0 (__destroy_global_chain_reference)
//	80B2F1E4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_wrestler/executor/_epilog.s"
}
#pragma pop

/* 80B2F1F8-80B2F218 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80B2F204: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_wrestler/executor/_unresolved.s"
}
#pragma pop
