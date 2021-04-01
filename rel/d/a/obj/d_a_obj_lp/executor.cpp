//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_lp/executor.h"
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
extern u8 const data_80C55A08[4];
extern u8 const data_80C55A0C[4];

//
// Declarations:
//

/* 80C54120-80C5414C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80C5412C: 80C55A08 (data_80C55A08)
//	80C54130: 80C55A08 (data_80C55A08)
//	80C54134: 8026314C (ModuleConstructorsX)
//	80C54138: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lp/executor/_prolog.s"
}
#pragma pop

/* 80C5414C-80C54178 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80C54158: 8026308C (ModuleEpilog)
//	80C5415C: 80C55A0C (data_80C55A0C)
//	80C54160: 80C55A0C (data_80C55A0C)
//	80C54164: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lp/executor/_epilog.s"
}
#pragma pop

/* 80C54178-80C54198 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80C54184: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lp/executor/_unresolved.s"
}
#pragma pop
