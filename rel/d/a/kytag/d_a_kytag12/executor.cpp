//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/kytag/d_a_kytag12/executor.h"
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
extern u8 const data_8085EEF8[4];
extern u8 const data_8085EEFC[4];

//
// Declarations:
//

/* 8085BAC0-8085BAEC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	8085BACC: 8085EEF8 (data_8085EEF8)
//	8085BAD0: 8085EEF8 (data_8085EEF8)
//	8085BAD4: 8026314C (ModuleConstructorsX)
//	8085BAD8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag12/executor/_prolog.s"
}
#pragma pop

/* 8085BAEC-8085BB18 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	8085BAF8: 8026308C (ModuleEpilog)
//	8085BAFC: 8085EEFC (data_8085EEFC)
//	8085BB00: 8085EEFC (data_8085EEFC)
//	8085BB04: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag12/executor/_epilog.s"
}
#pragma pop

/* 8085BB18-8085BB38 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	8085BB24: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag12/executor/_unresolved.s"
}
#pragma pop
