//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_swLight/executor.h"
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
extern u8 const data_80CF8398[4];
extern u8 const data_80CF839C[4];

//
// Declarations:
//

/* 80CF6F20-80CF6F4C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80CF6F2C: 80CF8398 (data_80CF8398)
//	80CF6F30: 80CF8398 (data_80CF8398)
//	80CF6F34: 8026314C (ModuleConstructorsX)
//	80CF6F38: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swLight/executor/_prolog.s"
}
#pragma pop

/* 80CF6F4C-80CF6F78 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80CF6F58: 8026308C (ModuleEpilog)
//	80CF6F5C: 80CF839C (data_80CF839C)
//	80CF6F60: 80CF839C (data_80CF839C)
//	80CF6F64: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swLight/executor/_epilog.s"
}
#pragma pop

/* 80CF6F78-80CF6F98 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80CF6F84: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swLight/executor/_unresolved.s"
}
#pragma pop
