//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_lv5FloorBoard/executor.h"
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
extern void* const data_80C6B134[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80C6A520-80C6A54C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80C6A52C: 80C6B134 (data_80C6B134)
//	80C6A530: 80C6B134 (data_80C6B134)
//	80C6A534: 8026314C (ModuleConstructorsX)
//	80C6A538: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/executor/_prolog.s"
}
#pragma pop

/* 80C6A54C-80C6A578 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80C6A558: 8026308C (ModuleEpilog)
//	80C6A55C: 80C6B13C (__destroy_global_chain_reference)
//	80C6A560: 80C6B13C (__destroy_global_chain_reference)
//	80C6A564: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/executor/_epilog.s"
}
#pragma pop

/* 80C6A578-80C6A598 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80C6A584: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5FloorBoard/executor/_unresolved.s"
}
#pragma pop
