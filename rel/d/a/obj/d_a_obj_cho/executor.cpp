//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_cho/executor.h"
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
extern void* const data_80BCC564[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80BCA220-80BCA24C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80BCA22C: 80BCC564 (data_80BCC564)
//	80BCA230: 80BCC564 (data_80BCC564)
//	80BCA234: 8026314C (ModuleConstructorsX)
//	80BCA238: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/executor/_prolog.s"
}
#pragma pop

/* 80BCA24C-80BCA278 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80BCA258: 8026308C (ModuleEpilog)
//	80BCA25C: 80BCC56C (__destroy_global_chain_reference)
//	80BCA260: 80BCC56C (__destroy_global_chain_reference)
//	80BCA264: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/executor/_epilog.s"
}
#pragma pop

/* 80BCA278-80BCA298 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80BCA284: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_cho/executor/_unresolved.s"
}
#pragma pop
