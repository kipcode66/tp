//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/e/d_a_e_ge/executor.h"
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
extern void* const data_806CCFEC[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 806C7960-806C798C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	806C796C: 806CCFEC (data_806CCFEC)
//	806C7970: 806CCFEC (data_806CCFEC)
//	806C7974: 8026314C (ModuleConstructorsX)
//	806C7978: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ge/executor/_prolog.s"
}
#pragma pop

/* 806C798C-806C79B8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	806C7998: 8026308C (ModuleEpilog)
//	806C799C: 806CCFF4 (__destroy_global_chain_reference)
//	806C79A0: 806CCFF4 (__destroy_global_chain_reference)
//	806C79A4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ge/executor/_epilog.s"
}
#pragma pop

/* 806C79B8-806C79D8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	806C79C4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ge/executor/_unresolved.s"
}
#pragma pop
