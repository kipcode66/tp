//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_ladder/executor.h"
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
extern u8 const data_8058DD48[4];
extern u8 const data_8058DD4C[4];

//
// Declarations:
//

/* 8058D0E0-8058D10C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	8058D0EC: 8058DD48 (data_8058DD48)
//	8058D0F0: 8058DD48 (data_8058DD48)
//	8058D0F4: 8026314C (ModuleConstructorsX)
//	8058D0F8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/executor/_prolog.s"
}
#pragma pop

/* 8058D10C-8058D138 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	8058D118: 8026308C (ModuleEpilog)
//	8058D11C: 8058DD4C (data_8058DD4C)
//	8058D120: 8058DD4C (data_8058DD4C)
//	8058D124: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/executor/_epilog.s"
}
#pragma pop

/* 8058D138-8058D158 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	8058D144: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ladder/executor/_unresolved.s"
}
#pragma pop
