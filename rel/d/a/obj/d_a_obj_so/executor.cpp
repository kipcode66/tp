//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_so/executor.h"
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
extern void* const data_80CE39D4[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80CE02E0-80CE030C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80CE02EC: 80CE39D4 (data_80CE39D4)
//	80CE02F0: 80CE39D4 (data_80CE39D4)
//	80CE02F4: 8026314C (ModuleConstructorsX)
//	80CE02F8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_so/executor/_prolog.s"
}
#pragma pop

/* 80CE030C-80CE0338 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80CE0318: 8026308C (ModuleEpilog)
//	80CE031C: 80CE39DC (__destroy_global_chain_reference)
//	80CE0320: 80CE39DC (__destroy_global_chain_reference)
//	80CE0324: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_so/executor/_epilog.s"
}
#pragma pop

/* 80CE0338-80CE0358 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80CE0344: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_so/executor/_unresolved.s"
}
#pragma pop
