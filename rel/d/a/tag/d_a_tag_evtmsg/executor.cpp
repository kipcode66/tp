//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/tag/d_a_tag_evtmsg/executor.h"
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
extern void* const data_8048D7DC[2];
extern u8 const data_8048D7E4[4];

//
// Declarations:
//

/* 8048CEC0-8048CEEC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	8048CECC: 8048D7DC (data_8048D7DC)
//	8048CED0: 8048D7DC (data_8048D7DC)
//	8048CED4: 8026314C (ModuleConstructorsX)
//	8048CED8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtmsg/executor/_prolog.s"
}
#pragma pop

/* 8048CEEC-8048CF18 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	8048CEF8: 8026308C (ModuleEpilog)
//	8048CEFC: 8048D7E4 (data_8048D7E4)
//	8048CF00: 8048D7E4 (data_8048D7E4)
//	8048CF04: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtmsg/executor/_epilog.s"
}
#pragma pop

/* 8048CF18-8048CF38 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	8048CF24: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_evtmsg/executor/_unresolved.s"
}
#pragma pop
