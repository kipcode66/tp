//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_crvlh_down/executor.h"
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
extern u8 const data_80BD4CFC[4];
extern u8 const data_80BD4D00[4];

//
// Declarations:
//

/* 80BD40C0-80BD40EC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80BD40CC: 80BD4CFC (data_80BD4CFC)
//	80BD40D0: 80BD4CFC (data_80BD4CFC)
//	80BD40D4: 8026314C (ModuleConstructorsX)
//	80BD40D8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvlh_down/executor/_prolog.s"
}
#pragma pop

/* 80BD40EC-80BD4118 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80BD40F8: 8026308C (ModuleEpilog)
//	80BD40FC: 80BD4D00 (data_80BD4D00)
//	80BD4100: 80BD4D00 (data_80BD4D00)
//	80BD4104: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvlh_down/executor/_epilog.s"
}
#pragma pop

/* 80BD4118-80BD4138 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80BD4124: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvlh_down/executor/_unresolved.s"
}
#pragma pop
