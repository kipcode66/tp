//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/e/d_a_e_bi/executor.h"
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
extern void* const data_8068D7D8[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 8068A500-8068A52C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	8068A50C: 8068D7D8 (data_8068D7D8)
//	8068A510: 8068D7D8 (data_8068D7D8)
//	8068A514: 8026314C (ModuleConstructorsX)
//	8068A518: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bi/executor/_prolog.s"
}
#pragma pop

/* 8068A52C-8068A558 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	8068A538: 8026308C (ModuleEpilog)
//	8068A53C: 8068D7E0 (__destroy_global_chain_reference)
//	8068A540: 8068D7E0 (__destroy_global_chain_reference)
//	8068A544: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bi/executor/_epilog.s"
}
#pragma pop

/* 8068A558-8068A578 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	8068A564: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bi/executor/_unresolved.s"
}
#pragma pop
