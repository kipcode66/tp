//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/d_a_L7op_demo_dr/executor.h"
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
extern u8 const data_805ADF48[4];
extern u8 const data_805ADF4C[4];

//
// Declarations:
//

/* 805AB020-805AB04C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	805AB02C: 805ADF48 (data_805ADF48)
//	805AB030: 805ADF48 (data_805ADF48)
//	805AB034: 8026314C (ModuleConstructorsX)
//	805AB038: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/executor/_prolog.s"
}
#pragma pop

/* 805AB04C-805AB078 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	805AB058: 8026308C (ModuleEpilog)
//	805AB05C: 805ADF4C (data_805ADF4C)
//	805AB060: 805ADF4C (data_805ADF4C)
//	805AB064: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/executor/_epilog.s"
}
#pragma pop

/* 805AB078-805AB098 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	805AB084: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/d_a_L7op_demo_dr/executor/_unresolved.s"
}
#pragma pop
