//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/e/d_a_e_ai/executor.h"
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
extern void* const data_8067C3E8[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80679080-806790AC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	8067908C: 8067C3E8 (data_8067C3E8)
//	80679090: 8067C3E8 (data_8067C3E8)
//	80679094: 8026314C (ModuleConstructorsX)
//	80679098: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ai/executor/_prolog.s"
}
#pragma pop

/* 806790AC-806790D8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	806790B8: 8026308C (ModuleEpilog)
//	806790BC: 8067C3F0 (__destroy_global_chain_reference)
//	806790C0: 8067C3F0 (__destroy_global_chain_reference)
//	806790C4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ai/executor/_epilog.s"
}
#pragma pop

/* 806790D8-806790F8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	806790E4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ai/executor/_unresolved.s"
}
#pragma pop
