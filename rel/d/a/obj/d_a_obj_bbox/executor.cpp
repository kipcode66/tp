//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_bbox/executor.h"
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
extern u8 const data_80BAD46C[4];
extern u8 const data_80BAD470[4];

//
// Declarations:
//

/* 80BACCC0-80BACCEC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80BACCCC: 80BAD46C (data_80BAD46C)
//	80BACCD0: 80BAD46C (data_80BAD46C)
//	80BACCD4: 8026314C (ModuleConstructorsX)
//	80BACCD8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bbox/executor/_prolog.s"
}
#pragma pop

/* 80BACCEC-80BACD18 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80BACCF8: 8026308C (ModuleEpilog)
//	80BACCFC: 80BAD470 (data_80BAD470)
//	80BACD00: 80BAD470 (data_80BAD470)
//	80BACD04: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bbox/executor/_epilog.s"
}
#pragma pop

/* 80BACD18-80BACD38 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80BACD24: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bbox/executor/_unresolved.s"
}
#pragma pop
