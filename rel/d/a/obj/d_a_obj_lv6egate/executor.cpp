//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/obj/d_a_obj_lv6egate/executor.h"
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
extern u8 const data_80C82B68[4];
extern u8 const data_80C82B6C[4];

//
// Declarations:
//

/* 80C82000-80C8202C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	80C8200C: 80C82B68 (data_80C82B68)
//	80C82010: 80C82B68 (data_80C82B68)
//	80C82014: 8026314C (ModuleConstructorsX)
//	80C82018: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6egate/executor/_prolog.s"
}
#pragma pop

/* 80C8202C-80C82058 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80C82038: 8026308C (ModuleEpilog)
//	80C8203C: 80C82B6C (data_80C82B6C)
//	80C82040: 80C82B6C (data_80C82B6C)
//	80C82044: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6egate/executor/_epilog.s"
}
#pragma pop

/* 80C82058-80C82078 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	80C82064: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6egate/executor/_unresolved.s"
}
#pragma pop
