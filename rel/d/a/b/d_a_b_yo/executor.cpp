//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/b/d_a_b_yo/executor.h"
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
extern void* const data_806397E0[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 8062F380-8062F3AC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	8062F38C: 806397E0 (data_806397E0)
//	8062F390: 806397E0 (data_806397E0)
//	8062F394: 8026314C (ModuleConstructorsX)
//	8062F398: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_yo/executor/_prolog.s"
}
#pragma pop

/* 8062F3AC-8062F3D8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	8062F3B8: 8026308C (ModuleEpilog)
//	8062F3BC: 806397E8 (__destroy_global_chain_reference)
//	8062F3C0: 806397E8 (__destroy_global_chain_reference)
//	8062F3C4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_yo/executor/_epilog.s"
}
#pragma pop

/* 8062F3D8-8062F3F8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	8062F3E4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_yo/executor/_unresolved.s"
}
#pragma pop
