//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/npc/d_a_npc_ins/executor.h"
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
extern void* const data_80A13D98[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80A0E160-80A0E18C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80A0E16C: 80A13D98 (data_80A13D98)
//	80A0E170: 80A13D98 (data_80A13D98)
//	80A0E174: 8026314C (ModuleConstructorsX)
//	80A0E178: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_ins/executor/_prolog.s"
}
#pragma pop

/* 80A0E18C-80A0E1B8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80A0E198: 8026308C (ModuleEpilog)
//	80A0E19C: 80A13DA0 (__destroy_global_chain_reference)
//	80A0E1A0: 80A13DA0 (__destroy_global_chain_reference)
//	80A0E1A4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_ins/executor/_epilog.s"
}
#pragma pop

/* 80A0E1B8-80A0E1D8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80A0E1C4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_ins/executor/_unresolved.s"
}
#pragma pop
