//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/b/d_a_b_dr/executor.h"
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
extern void* const data_805C6C60[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 805BAD80-805BADAC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	805BAD8C: 805C6C60 (data_805C6C60)
//	805BAD90: 805C6C60 (data_805C6C60)
//	805BAD94: 8026314C (ModuleConstructorsX)
//	805BAD98: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dr/executor/_prolog.s"
}
#pragma pop

/* 805BADAC-805BADD8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	805BADB8: 8026308C (ModuleEpilog)
//	805BADBC: 805C6C68 (__destroy_global_chain_reference)
//	805BADC0: 805C6C68 (__destroy_global_chain_reference)
//	805BADC4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dr/executor/_epilog.s"
}
#pragma pop

/* 805BADD8-805BADF8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	805BADE4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_dr/executor/_unresolved.s"
}
#pragma pop
