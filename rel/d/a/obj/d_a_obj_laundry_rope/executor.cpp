//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_laundry_rope/executor.h"
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
extern u8 const data_80C532FC[4];
extern u8 const data_80C53300[4];

//
// Declarations:
//

/* 80C52180-80C521AC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80C5218C: 80C532FC (data_80C532FC)
//	80C52190: 80C532FC (data_80C532FC)
//	80C52194: 8026314C (ModuleConstructorsX)
//	80C52198: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_laundry_rope/executor/_prolog.s"
}
#pragma pop

/* 80C521AC-80C521D8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80C521B8: 8026308C (ModuleEpilog)
//	80C521BC: 80C53300 (data_80C53300)
//	80C521C0: 80C53300 (data_80C53300)
//	80C521C4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_laundry_rope/executor/_epilog.s"
}
#pragma pop

/* 80C521D8-80C521F8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80C521E4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_laundry_rope/executor/_unresolved.s"
}
#pragma pop
