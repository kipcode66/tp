//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_ice_s/executor.h"
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
extern void* const data_80C21AE4[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80C208C0-80C208EC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80C208CC: 80C21AE4 (data_80C21AE4)
//	80C208D0: 80C21AE4 (data_80C21AE4)
//	80C208D4: 8026314C (ModuleConstructorsX)
//	80C208D8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ice_s/executor/_prolog.s"
}
#pragma pop

/* 80C208EC-80C20918 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80C208F8: 8026308C (ModuleEpilog)
//	80C208FC: 80C21AEC (__destroy_global_chain_reference)
//	80C20900: 80C21AEC (__destroy_global_chain_reference)
//	80C20904: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ice_s/executor/_epilog.s"
}
#pragma pop

/* 80C20918-80C20938 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80C20924: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ice_s/executor/_unresolved.s"
}
#pragma pop
