//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/e/d_a_e_hz/executor.h"
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
extern void* const data_806F084C[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 806EA520-806EA54C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	806EA52C: 806F084C (data_806F084C)
//	806EA530: 806F084C (data_806F084C)
//	806EA534: 8026314C (ModuleConstructorsX)
//	806EA538: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_hz/executor/_prolog.s"
}
#pragma pop

/* 806EA54C-806EA578 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	806EA558: 8026308C (ModuleEpilog)
//	806EA55C: 806F0854 (__destroy_global_chain_reference)
//	806EA560: 806F0854 (__destroy_global_chain_reference)
//	806EA564: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_hz/executor/_epilog.s"
}
#pragma pop

/* 806EA578-806EA598 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	806EA584: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_hz/executor/_unresolved.s"
}
#pragma pop
