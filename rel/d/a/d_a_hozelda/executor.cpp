//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/d_a_hozelda/executor.h"
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
extern u8 const data_80848E34[4];
extern u8 const data_80848E38[4];

//
// Declarations:
//

/* 80845E20-80845E4C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80845E2C: 80848E34 (data_80848E34)
//	80845E30: 80848E34 (data_80848E34)
//	80845E34: 8026314C (ModuleConstructorsX)
//	80845E38: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/d_a_hozelda/executor/_prolog.s"
}
#pragma pop

/* 80845E4C-80845E78 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80845E58: 8026308C (ModuleEpilog)
//	80845E5C: 80848E38 (data_80848E38)
//	80845E60: 80848E38 (data_80848E38)
//	80845E64: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/d_a_hozelda/executor/_epilog.s"
}
#pragma pop

/* 80845E78-80845E98 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80845E84: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/d_a_hozelda/executor/_unresolved.s"
}
#pragma pop
