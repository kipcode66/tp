//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_balloon/executor.h"
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
extern void* const data_80BA8DF8[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80BA7EC0-80BA7EEC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80BA7ECC: 80BA8DF8 (data_80BA8DF8)
//	80BA7ED0: 80BA8DF8 (data_80BA8DF8)
//	80BA7ED4: 8026314C (ModuleConstructorsX)
//	80BA7ED8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_balloon/executor/_prolog.s"
}
#pragma pop

/* 80BA7EEC-80BA7F18 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80BA7EF8: 8026308C (ModuleEpilog)
//	80BA7EFC: 80BA8E00 (__destroy_global_chain_reference)
//	80BA7F00: 80BA8E00 (__destroy_global_chain_reference)
//	80BA7F04: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_balloon/executor/_epilog.s"
}
#pragma pop

/* 80BA7F18-80BA7F38 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80BA7F24: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_balloon/executor/_unresolved.s"
}
#pragma pop
