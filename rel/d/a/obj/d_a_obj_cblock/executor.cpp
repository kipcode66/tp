//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_cblock/executor.h"
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
extern void* const data_80BC6A24[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80BC5920-80BC594C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80BC592C: 80BC6A24 (data_80BC6A24)
//	80BC5930: 80BC6A24 (data_80BC6A24)
//	80BC5934: 8026314C (ModuleConstructorsX)
//	80BC5938: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/executor/_prolog.s"
}
#pragma pop

/* 80BC594C-80BC5978 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80BC5958: 8026308C (ModuleEpilog)
//	80BC595C: 80BC6A2C (__destroy_global_chain_reference)
//	80BC5960: 80BC6A2C (__destroy_global_chain_reference)
//	80BC5964: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/executor/_epilog.s"
}
#pragma pop

/* 80BC5978-80BC5998 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80BC5984: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cblock/executor/_unresolved.s"
}
#pragma pop
