//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/b/d_a_b_mgn/executor.h"
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
extern void* const data_8060FDCC[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80605640-8060566C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	8060564C: 8060FDCC (data_8060FDCC)
//	80605650: 8060FDCC (data_8060FDCC)
//	80605654: 8026314C (ModuleConstructorsX)
//	80605658: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_mgn/executor/_prolog.s"
}
#pragma pop

/* 8060566C-80605698 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80605678: 8026308C (ModuleEpilog)
//	8060567C: 8060FDD4 (__destroy_global_chain_reference)
//	80605680: 8060FDD4 (__destroy_global_chain_reference)
//	80605684: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_mgn/executor/_epilog.s"
}
#pragma pop

/* 80605698-806056B8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	806056A4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_mgn/executor/_unresolved.s"
}
#pragma pop
