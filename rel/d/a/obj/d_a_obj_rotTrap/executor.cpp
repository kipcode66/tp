//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_rotTrap/executor.h"
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
extern void* const data_80CC07F4[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80CBF7C0-80CBF7EC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80CBF7CC: 80CC07F4 (data_80CC07F4)
//	80CBF7D0: 80CC07F4 (data_80CC07F4)
//	80CBF7D4: 8026314C (ModuleConstructorsX)
//	80CBF7D8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rotTrap/executor/_prolog.s"
}
#pragma pop

/* 80CBF7EC-80CBF818 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80CBF7F8: 8026308C (ModuleEpilog)
//	80CBF7FC: 80CC07FC (__destroy_global_chain_reference)
//	80CBF800: 80CC07FC (__destroy_global_chain_reference)
//	80CBF804: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rotTrap/executor/_epilog.s"
}
#pragma pop

/* 80CBF818-80CBF838 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80CBF824: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rotTrap/executor/_unresolved.s"
}
#pragma pop
