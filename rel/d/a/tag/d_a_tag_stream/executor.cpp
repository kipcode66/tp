//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/tag/d_a_tag_stream/executor.h"
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
extern u8 const data_80D63BE8[4];
extern u8 const data_80D63BEC[4];

//
// Declarations:
//

/* 80D63880-80D638AC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80D6388C: 80D63BE8 (data_80D63BE8)
//	80D63890: 80D63BE8 (data_80D63BE8)
//	80D63894: 8026314C (ModuleConstructorsX)
//	80D63898: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_stream/executor/_prolog.s"
}
#pragma pop

/* 80D638AC-80D638D8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80D638B8: 8026308C (ModuleEpilog)
//	80D638BC: 80D63BEC (data_80D63BEC)
//	80D638C0: 80D63BEC (data_80D63BEC)
//	80D638C4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_stream/executor/_epilog.s"
}
#pragma pop

/* 80D638D8-80D638F8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80D638E4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_stream/executor/_unresolved.s"
}
#pragma pop
