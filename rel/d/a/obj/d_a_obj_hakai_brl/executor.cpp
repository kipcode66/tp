//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_hakai_brl/executor.h"
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
extern u8 const data_80C172F4[4];
extern u8 const data_80C172F8[4];

//
// Declarations:
//

/* 80C166C0-80C166EC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80C166CC: 80C172F4 (data_80C172F4)
//	80C166D0: 80C172F4 (data_80C172F4)
//	80C166D4: 8026314C (ModuleConstructorsX)
//	80C166D8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/executor/_prolog.s"
}
#pragma pop

/* 80C166EC-80C16718 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80C166F8: 8026308C (ModuleEpilog)
//	80C166FC: 80C172F8 (data_80C172F8)
//	80C16700: 80C172F8 (data_80C172F8)
//	80C16704: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/executor/_epilog.s"
}
#pragma pop

/* 80C16718-80C16738 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80C16724: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/executor/_unresolved.s"
}
#pragma pop
