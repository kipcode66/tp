//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/b/d_a_b_zant/executor.h"
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
extern void* const data_8064EB08[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 8063E020-8063E04C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	8063E02C: 8064EB08 (data_8064EB08)
//	8063E030: 8064EB08 (data_8064EB08)
//	8063E034: 8026314C (ModuleConstructorsX)
//	8063E038: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/executor/_prolog.s"
}
#pragma pop

/* 8063E04C-8063E078 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	8063E058: 8026308C (ModuleEpilog)
//	8063E05C: 8064EB10 (__destroy_global_chain_reference)
//	8063E060: 8064EB10 (__destroy_global_chain_reference)
//	8063E064: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/executor/_epilog.s"
}
#pragma pop

/* 8063E078-8063E098 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	8063E084: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_zant/executor/_unresolved.s"
}
#pragma pop
