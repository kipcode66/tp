//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/e/d_a_e_ymb/executor.h"
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
extern void* const data_80821898[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80816020-8081604C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	8081602C: 80821898 (data_80821898)
//	80816030: 80821898 (data_80821898)
//	80816034: 8026314C (ModuleConstructorsX)
//	80816038: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ymb/executor/_prolog.s"
}
#pragma pop

/* 8081604C-80816078 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80816058: 8026308C (ModuleEpilog)
//	8081605C: 808218A0 (__destroy_global_chain_reference)
//	80816060: 808218A0 (__destroy_global_chain_reference)
//	80816064: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ymb/executor/_epilog.s"
}
#pragma pop

/* 80816078-80816098 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80816084: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_ymb/executor/_unresolved.s"
}
#pragma pop
