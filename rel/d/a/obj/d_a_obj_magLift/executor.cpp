//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_magLift/executor.h"
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
extern void* const data_80C8E648[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80C8D940-80C8D96C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80C8D94C: 80C8E648 (data_80C8E648)
//	80C8D950: 80C8E648 (data_80C8E648)
//	80C8D954: 8026314C (ModuleConstructorsX)
//	80C8D958: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLift/executor/_prolog.s"
}
#pragma pop

/* 80C8D96C-80C8D998 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80C8D978: 8026308C (ModuleEpilog)
//	80C8D97C: 80C8E650 (__destroy_global_chain_reference)
//	80C8D980: 80C8E650 (__destroy_global_chain_reference)
//	80C8D984: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLift/executor/_epilog.s"
}
#pragma pop

/* 80C8D998-80C8D9B8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80C8D9A4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_magLift/executor/_unresolved.s"
}
#pragma pop
