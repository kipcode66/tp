//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/npc/d_a_npc_kasi_kyu/executor.h"
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
extern void* const data_80A258A4[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80A218E0-80A2190C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80A218EC: 80A258A4 (data_80A258A4)
//	80A218F0: 80A258A4 (data_80A258A4)
//	80A218F4: 8026314C (ModuleConstructorsX)
//	80A218F8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_kasi_kyu/executor/_prolog.s"
}
#pragma pop

/* 80A2190C-80A21938 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80A21918: 8026308C (ModuleEpilog)
//	80A2191C: 80A258AC (__destroy_global_chain_reference)
//	80A21920: 80A258AC (__destroy_global_chain_reference)
//	80A21924: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_kasi_kyu/executor/_epilog.s"
}
#pragma pop

/* 80A21938-80A21958 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80A21944: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_kasi_kyu/executor/_unresolved.s"
}
#pragma pop
