//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/npc/d_a_npc_bou/executor.h"
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
extern void* const data_8097284C[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 8096CEA0-8096CECC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	8096CEAC: 8097284C (data_8097284C)
//	8096CEB0: 8097284C (data_8097284C)
//	8096CEB4: 8026314C (ModuleConstructorsX)
//	8096CEB8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_bou/executor/_prolog.s"
}
#pragma pop

/* 8096CECC-8096CEF8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	8096CED8: 8026308C (ModuleEpilog)
//	8096CEDC: 80972854 (__destroy_global_chain_reference)
//	8096CEE0: 80972854 (__destroy_global_chain_reference)
//	8096CEE4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_bou/executor/_epilog.s"
}
#pragma pop

/* 8096CEF8-8096CF18 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	8096CF04: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_bou/executor/_unresolved.s"
}
#pragma pop
