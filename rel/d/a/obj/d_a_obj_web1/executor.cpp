//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_web1/executor.h"
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
extern void* const data_80D360AC[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80D352C0-80D352EC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80D352CC: 80D360AC (data_80D360AC)
//	80D352D0: 80D360AC (data_80D360AC)
//	80D352D4: 8026314C (ModuleConstructorsX)
//	80D352D8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_web1/executor/_prolog.s"
}
#pragma pop

/* 80D352EC-80D35318 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80D352F8: 8026308C (ModuleEpilog)
//	80D352FC: 80D360B4 (__destroy_global_chain_reference)
//	80D35300: 80D360B4 (__destroy_global_chain_reference)
//	80D35304: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_web1/executor/_epilog.s"
}
#pragma pop

/* 80D35318-80D35338 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80D35324: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_web1/executor/_unresolved.s"
}
#pragma pop
