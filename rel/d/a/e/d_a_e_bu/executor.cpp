//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/e/d_a_e_bu/executor.h"
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
extern void* const data_8069467C[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 806910C0-806910EC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	806910CC: 8069467C (data_8069467C)
//	806910D0: 8069467C (data_8069467C)
//	806910D4: 8026314C (ModuleConstructorsX)
//	806910D8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bu/executor/_prolog.s"
}
#pragma pop

/* 806910EC-80691118 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	806910F8: 8026308C (ModuleEpilog)
//	806910FC: 80694684 (__destroy_global_chain_reference)
//	80691100: 80694684 (__destroy_global_chain_reference)
//	80691104: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bu/executor/_epilog.s"
}
#pragma pop

/* 80691118-80691138 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80691124: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bu/executor/_unresolved.s"
}
#pragma pop
