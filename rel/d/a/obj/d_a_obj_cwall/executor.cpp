//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_cwall/executor.h"
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
extern void* const data_80BD9F90[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80BD6960-80BD698C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80BD696C: 80BD9F90 (data_80BD9F90)
//	80BD6970: 80BD9F90 (data_80BD9F90)
//	80BD6974: 8026314C (ModuleConstructorsX)
//	80BD6978: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cwall/executor/_prolog.s"
}
#pragma pop

/* 80BD698C-80BD69B8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80BD6998: 8026308C (ModuleEpilog)
//	80BD699C: 80BD9F98 (__destroy_global_chain_reference)
//	80BD69A0: 80BD9F98 (__destroy_global_chain_reference)
//	80BD69A4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cwall/executor/_epilog.s"
}
#pragma pop

/* 80BD69B8-80BD69D8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80BD69C4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cwall/executor/_unresolved.s"
}
#pragma pop
