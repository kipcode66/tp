//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/e/d_a_e_gs/executor.h"
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
extern void* const data_806DFDE0[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 806DF380-806DF3AC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	806DF38C: 806DFDE0 (data_806DFDE0)
//	806DF390: 806DFDE0 (data_806DFDE0)
//	806DF394: 8026314C (ModuleConstructorsX)
//	806DF398: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_gs/executor/_prolog.s"
}
#pragma pop

/* 806DF3AC-806DF3D8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	806DF3B8: 8026308C (ModuleEpilog)
//	806DF3BC: 806DFDE8 (__destroy_global_chain_reference)
//	806DF3C0: 806DFDE8 (__destroy_global_chain_reference)
//	806DF3C4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_gs/executor/_epilog.s"
}
#pragma pop

/* 806DF3D8-806DF3F8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	806DF3E4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_gs/executor/_unresolved.s"
}
#pragma pop
