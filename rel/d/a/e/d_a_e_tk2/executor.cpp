//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/e/d_a_e_tk2/executor.h"
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
extern void* const data_807BBD94[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 807BA480-807BA4AC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	807BA48C: 807BBD94 (data_807BBD94)
//	807BA490: 807BBD94 (data_807BBD94)
//	807BA494: 8026314C (ModuleConstructorsX)
//	807BA498: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/executor/_prolog.s"
}
#pragma pop

/* 807BA4AC-807BA4D8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	807BA4B8: 8026308C (ModuleEpilog)
//	807BA4BC: 807BBD9C (__destroy_global_chain_reference)
//	807BA4C0: 807BBD9C (__destroy_global_chain_reference)
//	807BA4C4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/executor/_epilog.s"
}
#pragma pop

/* 807BA4D8-807BA4F8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	807BA4E4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/executor/_unresolved.s"
}
#pragma pop
