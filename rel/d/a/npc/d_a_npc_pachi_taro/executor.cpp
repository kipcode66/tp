//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/npc/d_a_npc_pachi_taro/executor.h"
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
extern void* const data_80AA15F0[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80A9C1A0-80A9C1CC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80A9C1AC: 80AA15F0 (data_80AA15F0)
//	80A9C1B0: 80AA15F0 (data_80AA15F0)
//	80A9C1B4: 8026314C (ModuleConstructorsX)
//	80A9C1B8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_pachi_taro/executor/_prolog.s"
}
#pragma pop

/* 80A9C1CC-80A9C1F8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80A9C1D8: 8026308C (ModuleEpilog)
//	80A9C1DC: 80AA15F8 (__destroy_global_chain_reference)
//	80A9C1E0: 80AA15F8 (__destroy_global_chain_reference)
//	80A9C1E4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_pachi_taro/executor/_epilog.s"
}
#pragma pop

/* 80A9C1F8-80A9C218 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80A9C204: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_pachi_taro/executor/_unresolved.s"
}
#pragma pop
