//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_mie/executor.h"
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
extern void* const data_80C95A98[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80C93EE0-80C93F0C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80C93EEC: 80C95A98 (data_80C95A98)
//	80C93EF0: 80C95A98 (data_80C95A98)
//	80C93EF4: 8026314C (ModuleConstructorsX)
//	80C93EF8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mie/executor/_prolog.s"
}
#pragma pop

/* 80C93F0C-80C93F38 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80C93F18: 8026308C (ModuleEpilog)
//	80C93F1C: 80C95AA0 (__destroy_global_chain_reference)
//	80C93F20: 80C95AA0 (__destroy_global_chain_reference)
//	80C93F24: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mie/executor/_epilog.s"
}
#pragma pop

/* 80C93F38-80C93F58 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80C93F44: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_mie/executor/_unresolved.s"
}
#pragma pop
