//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/tag/d_a_tag_spinner/executor.h"
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
extern u8 const data_80D61B1C[4];
extern u8 const data_80D61B20[4];

//
// Declarations:
//

/* 80D61680-80D616AC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80D6168C: 80D61B1C (data_80D61B1C)
//	80D61690: 80D61B1C (data_80D61B1C)
//	80D61694: 8026314C (ModuleConstructorsX)
//	80D61698: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spinner/executor/_prolog.s"
}
#pragma pop

/* 80D616AC-80D616D8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80D616B8: 8026308C (ModuleEpilog)
//	80D616BC: 80D61B20 (data_80D61B20)
//	80D616C0: 80D61B20 (data_80D61B20)
//	80D616C4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spinner/executor/_epilog.s"
}
#pragma pop

/* 80D616D8-80D616F8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80D616E4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spinner/executor/_unresolved.s"
}
#pragma pop
