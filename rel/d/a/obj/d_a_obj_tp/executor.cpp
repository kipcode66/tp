//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_tp/executor.h"
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
extern u8 const data_80D1EE24[4];
extern u8 const data_80D1EE28[4];

//
// Declarations:
//

/* 80D1D500-80D1D52C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80D1D50C: 80D1EE24 (data_80D1EE24)
//	80D1D510: 80D1EE24 (data_80D1EE24)
//	80D1D514: 8026314C (ModuleConstructorsX)
//	80D1D518: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tp/executor/_prolog.s"
}
#pragma pop

/* 80D1D52C-80D1D558 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80D1D538: 8026308C (ModuleEpilog)
//	80D1D53C: 80D1EE28 (data_80D1EE28)
//	80D1D540: 80D1EE28 (data_80D1EE28)
//	80D1D544: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tp/executor/_epilog.s"
}
#pragma pop

/* 80D1D558-80D1D578 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80D1D564: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tp/executor/_unresolved.s"
}
#pragma pop
