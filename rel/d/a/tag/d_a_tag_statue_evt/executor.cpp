//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/tag/d_a_tag_statue_evt/executor.h"
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
extern u8 const data_805A80FC[4];
extern u8 const data_805A8100[4];

//
// Declarations:
//

/* 805A6EE0-805A6F0C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	805A6EEC: 805A80FC (data_805A80FC)
//	805A6EF0: 805A80FC (data_805A80FC)
//	805A6EF4: 8026314C (ModuleConstructorsX)
//	805A6EF8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_statue_evt/executor/_prolog.s"
}
#pragma pop

/* 805A6F0C-805A6F38 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	805A6F18: 8026308C (ModuleEpilog)
//	805A6F1C: 805A8100 (data_805A8100)
//	805A6F20: 805A8100 (data_805A8100)
//	805A6F24: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_statue_evt/executor/_epilog.s"
}
#pragma pop

/* 805A6F38-805A6F58 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	805A6F44: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_statue_evt/executor/_unresolved.s"
}
#pragma pop
