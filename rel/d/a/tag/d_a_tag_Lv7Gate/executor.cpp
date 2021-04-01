//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/tag/d_a_tag_Lv7Gate/executor.h"
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
extern u8 const data_80D51ACC[4];
extern u8 const data_80D51AD0[4];

//
// Declarations:
//

/* 80D50A40-80D50A6C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80D50A4C: 80D51ACC (data_80D51ACC)
//	80D50A50: 80D51ACC (data_80D51ACC)
//	80D50A54: 8026314C (ModuleConstructorsX)
//	80D50A58: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv7Gate/executor/_prolog.s"
}
#pragma pop

/* 80D50A6C-80D50A98 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80D50A78: 8026308C (ModuleEpilog)
//	80D50A7C: 80D51AD0 (data_80D51AD0)
//	80D50A80: 80D51AD0 (data_80D51AD0)
//	80D50A84: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv7Gate/executor/_epilog.s"
}
#pragma pop

/* 80D50A98-80D50AB8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80D50AA4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_Lv7Gate/executor/_unresolved.s"
}
#pragma pop
