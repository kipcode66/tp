//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/e/d_a_e_dd/executor.h"
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
extern void* const data_806A71B0[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 806A2180-806A21AC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	806A218C: 806A71B0 (data_806A71B0)
//	806A2190: 806A71B0 (data_806A71B0)
//	806A2194: 8026314C (ModuleConstructorsX)
//	806A2198: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dd/executor/_prolog.s"
}
#pragma pop

/* 806A21AC-806A21D8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	806A21B8: 8026308C (ModuleEpilog)
//	806A21BC: 806A71B8 (__destroy_global_chain_reference)
//	806A21C0: 806A71B8 (__destroy_global_chain_reference)
//	806A21C4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dd/executor/_epilog.s"
}
#pragma pop

/* 806A21D8-806A21F8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	806A21E4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_dd/executor/_unresolved.s"
}
#pragma pop
