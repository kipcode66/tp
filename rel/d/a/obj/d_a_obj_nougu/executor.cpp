//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_nougu/executor.h"
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
extern void* const data_80CA49A4[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80CA3B20-80CA3B4C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80CA3B2C: 80CA49A4 (data_80CA49A4)
//	80CA3B30: 80CA49A4 (data_80CA49A4)
//	80CA3B34: 8026314C (ModuleConstructorsX)
//	80CA3B38: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nougu/executor/_prolog.s"
}
#pragma pop

/* 80CA3B4C-80CA3B78 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80CA3B58: 8026308C (ModuleEpilog)
//	80CA3B5C: 80CA49AC (__destroy_global_chain_reference)
//	80CA3B60: 80CA49AC (__destroy_global_chain_reference)
//	80CA3B64: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nougu/executor/_epilog.s"
}
#pragma pop

/* 80CA3B78-80CA3B98 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80CA3B84: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_nougu/executor/_unresolved.s"
}
#pragma pop
