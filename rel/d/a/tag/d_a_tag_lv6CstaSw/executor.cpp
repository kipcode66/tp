//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/tag/d_a_tag_lv6CstaSw/executor.h"
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
extern void* const data_80D5B7D8[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

//
// Declarations:
//

/* 80D5B200-80D5B22C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80D5B20C: 80D5B7D8 (data_80D5B7D8)
//	80D5B210: 80D5B7D8 (data_80D5B7D8)
//	80D5B214: 8026314C (ModuleConstructorsX)
//	80D5B218: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv6CstaSw/executor/_prolog.s"
}
#pragma pop

/* 80D5B22C-80D5B258 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80D5B238: 8026308C (ModuleEpilog)
//	80D5B23C: 80D5B7E0 (__destroy_global_chain_reference)
//	80D5B240: 80D5B7E0 (__destroy_global_chain_reference)
//	80D5B244: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv6CstaSw/executor/_epilog.s"
}
#pragma pop

/* 80D5B258-80D5B278 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80D5B264: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv6CstaSw/executor/_unresolved.s"
}
#pragma pop
