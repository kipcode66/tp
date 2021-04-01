//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_hata/executor.h"
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
extern u8 const data_80C19470[4];
extern u8 const data_80C19474[4];

//
// Declarations:
//

/* 80C18B40-80C18B6C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80C18B4C: 80C19470 (data_80C19470)
//	80C18B50: 80C19470 (data_80C19470)
//	80C18B54: 8026314C (ModuleConstructorsX)
//	80C18B58: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hata/executor/_prolog.s"
}
#pragma pop

/* 80C18B6C-80C18B98 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80C18B78: 8026308C (ModuleEpilog)
//	80C18B7C: 80C19474 (data_80C19474)
//	80C18B80: 80C19474 (data_80C19474)
//	80C18B84: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hata/executor/_epilog.s"
}
#pragma pop

/* 80C18B98-80C18BB8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80C18BA4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hata/executor/_unresolved.s"
}
#pragma pop
