//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/e/d_a_e_bs/executor.h"
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
extern void* const data_80690DC4[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 8068E040-8068E06C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	8068E04C: 80690DC4 (data_80690DC4)
//	8068E050: 80690DC4 (data_80690DC4)
//	8068E054: 8026314C (ModuleConstructorsX)
//	8068E058: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bs/executor/_prolog.s"
}
#pragma pop

/* 8068E06C-8068E098 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	8068E078: 8026308C (ModuleEpilog)
//	8068E07C: 80690DCC (__destroy_global_chain_reference)
//	8068E080: 80690DCC (__destroy_global_chain_reference)
//	8068E084: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bs/executor/_epilog.s"
}
#pragma pop

/* 8068E098-8068E0B8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	8068E0A4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_bs/executor/_unresolved.s"
}
#pragma pop
