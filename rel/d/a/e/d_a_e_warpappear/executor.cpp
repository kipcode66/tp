//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/e/d_a_e_warpappear/executor.h"
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
extern u8 const data_807D2080[4];
extern u8 const data_807D2084[4];

//
// Declarations:
//

/* 807CF760-807CF78C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	807CF76C: 807D2080 (data_807D2080)
//	807CF770: 807D2080 (data_807D2080)
//	807CF774: 8026314C (ModuleConstructorsX)
//	807CF778: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_warpappear/executor/_prolog.s"
}
#pragma pop

/* 807CF78C-807CF7B8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	807CF798: 8026308C (ModuleEpilog)
//	807CF79C: 807D2084 (data_807D2084)
//	807CF7A0: 807D2084 (data_807D2084)
//	807CF7A4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_warpappear/executor/_epilog.s"
}
#pragma pop

/* 807CF7B8-807CF7D8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	807CF7C4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_warpappear/executor/_unresolved.s"
}
#pragma pop
