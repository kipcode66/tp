//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/d_a_swTime/executor.h"
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
extern u8 const data_80D4F7C0[4];
extern u8 const data_80D4F7C4[4];

//
// Declarations:
//

/* 80D4F5C0-80D4F5EC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80D4F5CC: 80D4F7C0 (data_80D4F7C0)
//	80D4F5D0: 80D4F7C0 (data_80D4F7C0)
//	80D4F5D4: 8026314C (ModuleConstructorsX)
//	80D4F5D8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/d_a_swTime/executor/_prolog.s"
}
#pragma pop

/* 80D4F5EC-80D4F618 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80D4F5F8: 8026308C (ModuleEpilog)
//	80D4F5FC: 80D4F7C4 (data_80D4F7C4)
//	80D4F600: 80D4F7C4 (data_80D4F7C4)
//	80D4F604: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/d_a_swTime/executor/_epilog.s"
}
#pragma pop

/* 80D4F618-80D4F638 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80D4F624: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/d_a_swTime/executor/_unresolved.s"
}
#pragma pop
