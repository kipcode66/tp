//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_zra_freeze/executor.h"
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
extern u8 const data_80D44B40[4];
extern u8 const data_80D44B44[4];

//
// Declarations:
//

/* 80D44040-80D4406C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80D4404C: 80D44B40 (data_80D44B40)
//	80D44050: 80D44B40 (data_80D44B40)
//	80D44054: 8026314C (ModuleConstructorsX)
//	80D44058: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zra_freeze/executor/_prolog.s"
}
#pragma pop

/* 80D4406C-80D44098 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80D44078: 8026308C (ModuleEpilog)
//	80D4407C: 80D44B44 (data_80D44B44)
//	80D44080: 80D44B44 (data_80D44B44)
//	80D44084: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zra_freeze/executor/_epilog.s"
}
#pragma pop

/* 80D44098-80D440B8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80D440A4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_zra_freeze/executor/_unresolved.s"
}
#pragma pop
