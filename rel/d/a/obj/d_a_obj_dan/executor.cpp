//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_dan/executor.h"
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
extern void* const data_80BDC39C[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80BDA4A0-80BDA4CC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80BDA4AC: 80BDC39C (data_80BDC39C)
//	80BDA4B0: 80BDC39C (data_80BDC39C)
//	80BDA4B4: 8026314C (ModuleConstructorsX)
//	80BDA4B8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/executor/_prolog.s"
}
#pragma pop

/* 80BDA4CC-80BDA4F8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80BDA4D8: 8026308C (ModuleEpilog)
//	80BDA4DC: 80BDC3A4 (__destroy_global_chain_reference)
//	80BDA4E0: 80BDC3A4 (__destroy_global_chain_reference)
//	80BDA4E4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/executor/_epilog.s"
}
#pragma pop

/* 80BDA4F8-80BDA518 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80BDA504: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_dan/executor/_unresolved.s"
}
#pragma pop
