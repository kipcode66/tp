//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_lv5IceWall/executor.h"
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
extern void* const data_80C6C62C[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80C6B340-80C6B36C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80C6B34C: 80C6C62C (data_80C6C62C)
//	80C6B350: 80C6C62C (data_80C6C62C)
//	80C6B354: 8026314C (ModuleConstructorsX)
//	80C6B358: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5IceWall/executor/_prolog.s"
}
#pragma pop

/* 80C6B36C-80C6B398 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80C6B378: 8026308C (ModuleEpilog)
//	80C6B37C: 80C6C634 (__destroy_global_chain_reference)
//	80C6B380: 80C6C634 (__destroy_global_chain_reference)
//	80C6B384: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5IceWall/executor/_epilog.s"
}
#pragma pop

/* 80C6B398-80C6B3B8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80C6B3A4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv5IceWall/executor/_unresolved.s"
}
#pragma pop
