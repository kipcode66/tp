//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_kshutter/executor.h"
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
extern u8 const data_80C49CA0[4];
extern u8 const data_80C49CA4[4];

//
// Declarations:
//

/* 80C47A40-80C47A6C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80C47A4C: 80C49CA0 (data_80C49CA0)
//	80C47A50: 80C49CA0 (data_80C49CA0)
//	80C47A54: 8026314C (ModuleConstructorsX)
//	80C47A58: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kshutter/executor/_prolog.s"
}
#pragma pop

/* 80C47A6C-80C47A98 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80C47A78: 8026308C (ModuleEpilog)
//	80C47A7C: 80C49CA4 (data_80C49CA4)
//	80C47A80: 80C49CA4 (data_80C49CA4)
//	80C47A84: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kshutter/executor/_epilog.s"
}
#pragma pop

/* 80C47A98-80C47AB8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80C47AA4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kshutter/executor/_unresolved.s"
}
#pragma pop
