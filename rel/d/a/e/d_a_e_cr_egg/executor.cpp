//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/e/d_a_e_cr_egg/executor.h"
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
extern u8 const data_8069A8C4[4];
extern u8 const data_8069A8C8[4];

//
// Declarations:
//

/* 80699EC0-80699EEC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80699ECC: 8069A8C4 (data_8069A8C4)
//	80699ED0: 8069A8C4 (data_8069A8C4)
//	80699ED4: 8026314C (ModuleConstructorsX)
//	80699ED8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_cr_egg/executor/_prolog.s"
}
#pragma pop

/* 80699EEC-80699F18 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80699EF8: 8026308C (ModuleEpilog)
//	80699EFC: 8069A8C8 (data_8069A8C8)
//	80699F00: 8069A8C8 (data_8069A8C8)
//	80699F04: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_cr_egg/executor/_epilog.s"
}
#pragma pop

/* 80699F18-80699F38 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80699F24: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_cr_egg/executor/_unresolved.s"
}
#pragma pop
