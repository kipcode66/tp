//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/kytag/d_a_kytag13/executor.h"
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
extern u8 const data_80860468[4];
extern u8 const data_8086046C[4];

//
// Declarations:
//

/* 8085F180-8085F1AC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	8085F18C: 80860468 (data_80860468)
//	8085F190: 80860468 (data_80860468)
//	8085F194: 8026314C (ModuleConstructorsX)
//	8085F198: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag13/executor/_prolog.s"
}
#pragma pop

/* 8085F1AC-8085F1D8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	8085F1B8: 8026308C (ModuleEpilog)
//	8085F1BC: 8086046C (data_8086046C)
//	8085F1C0: 8086046C (data_8086046C)
//	8085F1C4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag13/executor/_epilog.s"
}
#pragma pop

/* 8085F1D8-8085F1F8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	8085F1E4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag13/executor/_unresolved.s"
}
#pragma pop
