//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_fchain/executor.h"
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
extern u8 const data_80BE7430[4];
extern u8 const data_80BE7434[4];

//
// Declarations:
//

/* 80BE5F80-80BE5FAC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80BE5F8C: 80BE7430 (data_80BE7430)
//	80BE5F90: 80BE7430 (data_80BE7430)
//	80BE5F94: 8026314C (ModuleConstructorsX)
//	80BE5F98: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fchain/executor/_prolog.s"
}
#pragma pop

/* 80BE5FAC-80BE5FD8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80BE5FB8: 8026308C (ModuleEpilog)
//	80BE5FBC: 80BE7434 (data_80BE7434)
//	80BE5FC0: 80BE7434 (data_80BE7434)
//	80BE5FC4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fchain/executor/_epilog.s"
}
#pragma pop

/* 80BE5FD8-80BE5FF8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80BE5FE4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fchain/executor/_unresolved.s"
}
#pragma pop
