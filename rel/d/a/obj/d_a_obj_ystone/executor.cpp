//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_ystone/executor.h"
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
extern u8 const data_80D3EC04[4];
extern u8 const data_80D3EC08[4];

//
// Declarations:
//

/* 80D3DFA0-80D3DFCC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80D3DFAC: 80D3EC04 (data_80D3EC04)
//	80D3DFB0: 80D3EC04 (data_80D3EC04)
//	80D3DFB4: 8026314C (ModuleConstructorsX)
//	80D3DFB8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ystone/executor/_prolog.s"
}
#pragma pop

/* 80D3DFCC-80D3DFF8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80D3DFD8: 8026308C (ModuleEpilog)
//	80D3DFDC: 80D3EC08 (data_80D3EC08)
//	80D3DFE0: 80D3EC08 (data_80D3EC08)
//	80D3DFE4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ystone/executor/_epilog.s"
}
#pragma pop

/* 80D3DFF8-80D3E018 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80D3E004: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ystone/executor/_unresolved.s"
}
#pragma pop
