//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_lbox/executor.h"
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
extern void* const data_80C53FA8[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80C53480-80C534AC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80C5348C: 80C53FA8 (data_80C53FA8)
//	80C53490: 80C53FA8 (data_80C53FA8)
//	80C53494: 8026314C (ModuleConstructorsX)
//	80C53498: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/executor/_prolog.s"
}
#pragma pop

/* 80C534AC-80C534D8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80C534B8: 8026308C (ModuleEpilog)
//	80C534BC: 80C53FB0 (__destroy_global_chain_reference)
//	80C534C0: 80C53FB0 (__destroy_global_chain_reference)
//	80C534C4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/executor/_epilog.s"
}
#pragma pop

/* 80C534D8-80C534F8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80C534E4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lbox/executor/_unresolved.s"
}
#pragma pop
