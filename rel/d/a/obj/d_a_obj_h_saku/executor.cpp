//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_h_saku/executor.h"
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
extern void* const data_80C164B4[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80C15440-80C1546C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80C1544C: 80C164B4 (data_80C164B4)
//	80C15450: 80C164B4 (data_80C164B4)
//	80C15454: 8026314C (ModuleConstructorsX)
//	80C15458: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_h_saku/executor/_prolog.s"
}
#pragma pop

/* 80C1546C-80C15498 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80C15478: 8026308C (ModuleEpilog)
//	80C1547C: 80C164BC (__destroy_global_chain_reference)
//	80C15480: 80C164BC (__destroy_global_chain_reference)
//	80C15484: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_h_saku/executor/_epilog.s"
}
#pragma pop

/* 80C15498-80C154B8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80C154A4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_h_saku/executor/_unresolved.s"
}
#pragma pop
