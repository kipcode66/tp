//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/tag/d_a_tag_evtarea/executor.h"
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
extern u8 const data_8048CDC8[4];
extern u8 const data_8048CDCC[4];

//
// Declarations:
//

/* 8048C480-8048C4AC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	8048C48C: 8048CDC8 (data_8048CDC8)
//	8048C490: 8048CDC8 (data_8048CDC8)
//	8048C494: 8026314C (ModuleConstructorsX)
//	8048C498: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtarea/executor/_prolog.s"
}
#pragma pop

/* 8048C4AC-8048C4D8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	8048C4B8: 8026308C (ModuleEpilog)
//	8048C4BC: 8048CDCC (data_8048CDCC)
//	8048C4C0: 8048CDCC (data_8048CDCC)
//	8048C4C4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtarea/executor/_epilog.s"
}
#pragma pop

/* 8048C4D8-8048C4F8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	8048C4E4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtarea/executor/_unresolved.s"
}
#pragma pop
