//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_mhole/executor.h"
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
extern u8 const data_80C93D80[4];
extern u8 const data_80C93D84[4];

//
// Declarations:
//

/* 80C92DE0-80C92E0C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80C92DEC: 80C93D80 (data_80C93D80)
//	80C92DF0: 80C93D80 (data_80C93D80)
//	80C92DF4: 8026314C (ModuleConstructorsX)
//	80C92DF8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mhole/executor/_prolog.s"
}
#pragma pop

/* 80C92E0C-80C92E38 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80C92E18: 8026308C (ModuleEpilog)
//	80C92E1C: 80C93D84 (data_80C93D84)
//	80C92E20: 80C93D84 (data_80C93D84)
//	80C92E24: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mhole/executor/_epilog.s"
}
#pragma pop

/* 80C92E38-80C92E58 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80C92E44: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mhole/executor/_unresolved.s"
}
#pragma pop
