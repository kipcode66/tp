//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/npc/d_a_npc_tkj/executor.h"
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
extern void* const data_80576584[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80573640-8057366C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	8057364C: 80576584 (data_80576584)
//	80573650: 80576584 (data_80576584)
//	80573654: 8026314C (ModuleConstructorsX)
//	80573658: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_tkj/executor/_prolog.s"
}
#pragma pop

/* 8057366C-80573698 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80573678: 8026308C (ModuleEpilog)
//	8057367C: 8057658C (__destroy_global_chain_reference)
//	80573680: 8057658C (__destroy_global_chain_reference)
//	80573684: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_tkj/executor/_epilog.s"
}
#pragma pop

/* 80573698-805736B8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	805736A4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_tkj/executor/_unresolved.s"
}
#pragma pop
