//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_lv4RailWall/executor.h"
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
extern u8 const data_80C61B30[4];
extern u8 const data_80C61B34[4];

//
// Declarations:
//

/* 80C60A00-80C60A2C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80C60A0C: 80C61B30 (data_80C61B30)
//	80C60A10: 80C61B30 (data_80C61B30)
//	80C60A14: 8026314C (ModuleConstructorsX)
//	80C60A18: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4RailWall/executor/_prolog.s"
}
#pragma pop

/* 80C60A2C-80C60A58 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80C60A38: 8026308C (ModuleEpilog)
//	80C60A3C: 80C61B34 (data_80C61B34)
//	80C60A40: 80C61B34 (data_80C61B34)
//	80C60A44: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4RailWall/executor/_epilog.s"
}
#pragma pop

/* 80C60A58-80C60A78 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80C60A64: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4RailWall/executor/_unresolved.s"
}
#pragma pop
