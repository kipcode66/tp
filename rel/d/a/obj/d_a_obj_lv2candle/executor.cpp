//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_lv2candle/executor.h"
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
extern void* const data_8058F11C[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 8058DF60-8058DF8C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	8058DF6C: 8058F11C (data_8058F11C)
//	8058DF70: 8058F11C (data_8058F11C)
//	8058DF74: 8026314C (ModuleConstructorsX)
//	8058DF78: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv2candle/executor/_prolog.s"
}
#pragma pop

/* 8058DF8C-8058DFB8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	8058DF98: 8026308C (ModuleEpilog)
//	8058DF9C: 8058F124 (__destroy_global_chain_reference)
//	8058DFA0: 8058F124 (__destroy_global_chain_reference)
//	8058DFA4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv2candle/executor/_epilog.s"
}
#pragma pop

/* 8058DFB8-8058DFD8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	8058DFC4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv2candle/executor/_unresolved.s"
}
#pragma pop
