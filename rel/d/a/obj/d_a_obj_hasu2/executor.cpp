//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_hasu2/executor.h"
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
extern u8 const data_80C18A50[4];
extern u8 const data_80C18A54[4];

//
// Declarations:
//

/* 80C18220-80C1824C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80C1822C: 80C18A50 (data_80C18A50)
//	80C18230: 80C18A50 (data_80C18A50)
//	80C18234: 8026314C (ModuleConstructorsX)
//	80C18238: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hasu2/executor/_prolog.s"
}
#pragma pop

/* 80C1824C-80C18278 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80C18258: 8026308C (ModuleEpilog)
//	80C1825C: 80C18A54 (data_80C18A54)
//	80C18260: 80C18A54 (data_80C18A54)
//	80C18264: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hasu2/executor/_epilog.s"
}
#pragma pop

/* 80C18278-80C18298 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80C18284: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hasu2/executor/_unresolved.s"
}
#pragma pop
