//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_grz_rock/executor.h"
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
extern u8 const data_80C15358[4];
extern u8 const data_80C1535C[4];

//
// Declarations:
//

/* 80C14B60-80C14B8C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80C14B6C: 80C15358 (data_80C15358)
//	80C14B70: 80C15358 (data_80C15358)
//	80C14B74: 8026314C (ModuleConstructorsX)
//	80C14B78: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_grz_rock/executor/_prolog.s"
}
#pragma pop

/* 80C14B8C-80C14BB8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80C14B98: 8026308C (ModuleEpilog)
//	80C14B9C: 80C1535C (data_80C1535C)
//	80C14BA0: 80C1535C (data_80C1535C)
//	80C14BA4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_grz_rock/executor/_epilog.s"
}
#pragma pop

/* 80C14BB8-80C14BD8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80C14BC4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_grz_rock/executor/_unresolved.s"
}
#pragma pop
