//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/e/d_a_e_mm/executor.h"
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
extern void* const data_80722C28[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 8071F8E0-8071F90C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	8071F8EC: 80722C28 (data_80722C28)
//	8071F8F0: 80722C28 (data_80722C28)
//	8071F8F4: 8026314C (ModuleConstructorsX)
//	8071F8F8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/executor/_prolog.s"
}
#pragma pop

/* 8071F90C-8071F938 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	8071F918: 8026308C (ModuleEpilog)
//	8071F91C: 80722C30 (__destroy_global_chain_reference)
//	8071F920: 80722C30 (__destroy_global_chain_reference)
//	8071F924: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/executor/_epilog.s"
}
#pragma pop

/* 8071F938-8071F958 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	8071F944: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_mm/executor/_unresolved.s"
}
#pragma pop
