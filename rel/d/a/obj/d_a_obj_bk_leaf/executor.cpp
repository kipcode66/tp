//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_bk_leaf/executor.h"
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
extern u8 const data_80BB6708[4];
extern u8 const data_80BB670C[4];

//
// Declarations:
//

/* 80BB6060-80BB608C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80BB606C: 80BB6708 (data_80BB6708)
//	80BB6070: 80BB6708 (data_80BB6708)
//	80BB6074: 8026314C (ModuleConstructorsX)
//	80BB6078: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bk_leaf/executor/_prolog.s"
}
#pragma pop

/* 80BB608C-80BB60B8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80BB6098: 8026308C (ModuleEpilog)
//	80BB609C: 80BB670C (data_80BB670C)
//	80BB60A0: 80BB670C (data_80BB670C)
//	80BB60A4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bk_leaf/executor/_epilog.s"
}
#pragma pop

/* 80BB60B8-80BB60D8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80BB60C4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bk_leaf/executor/_unresolved.s"
}
#pragma pop
