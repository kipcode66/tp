//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_lv4EdShutter/executor.h"
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
extern void* const data_80C5E8C8[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80C5DCC0-80C5DCEC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80C5DCCC: 80C5E8C8 (data_80C5E8C8)
//	80C5DCD0: 80C5E8C8 (data_80C5E8C8)
//	80C5DCD4: 8026314C (ModuleConstructorsX)
//	80C5DCD8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4EdShutter/executor/_prolog.s"
}
#pragma pop

/* 80C5DCEC-80C5DD18 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80C5DCF8: 8026308C (ModuleEpilog)
//	80C5DCFC: 80C5E8D0 (__destroy_global_chain_reference)
//	80C5DD00: 80C5E8D0 (__destroy_global_chain_reference)
//	80C5DD04: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4EdShutter/executor/_epilog.s"
}
#pragma pop

/* 80C5DD18-80C5DD38 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80C5DD24: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4EdShutter/executor/_unresolved.s"
}
#pragma pop
