//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/d_a_ppolamp/executor.h"
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
extern u8 const data_80D4D274[4];
extern u8 const data_80D4D278[4];

//
// Declarations:
//

/* 80D4C8C0-80D4C8EC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80D4C8CC: 80D4D274 (data_80D4D274)
//	80D4C8D0: 80D4D274 (data_80D4D274)
//	80D4C8D4: 8026314C (ModuleConstructorsX)
//	80D4C8D8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/d_a_ppolamp/executor/_prolog.s"
}
#pragma pop

/* 80D4C8EC-80D4C918 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80D4C8F8: 8026308C (ModuleEpilog)
//	80D4C8FC: 80D4D278 (data_80D4D278)
//	80D4C900: 80D4D278 (data_80D4D278)
//	80D4C904: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/d_a_ppolamp/executor/_epilog.s"
}
#pragma pop

/* 80D4C918-80D4C938 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80D4C924: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/d_a_ppolamp/executor/_unresolved.s"
}
#pragma pop
