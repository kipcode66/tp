//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_Y_taihou/executor.h"
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
extern u8 const data_80BA1144[4];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80B9FA00-80B9FA2C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80B9FA0C: 80BA1144 (data_80BA1144)
//	80B9FA10: 80BA1144 (data_80BA1144)
//	80B9FA14: 8026314C (ModuleConstructorsX)
//	80B9FA18: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/executor/_prolog.s"
}
#pragma pop

/* 80B9FA2C-80B9FA58 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80B9FA38: 8026308C (ModuleEpilog)
//	80B9FA3C: 80BA1148 (__destroy_global_chain_reference)
//	80B9FA40: 80BA1148 (__destroy_global_chain_reference)
//	80B9FA44: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/executor/_epilog.s"
}
#pragma pop

/* 80B9FA58-80B9FA78 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80B9FA64: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_Y_taihou/executor/_unresolved.s"
}
#pragma pop
