//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/door/d_a_door_spiral/executor.h"
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
extern u8 const data_804673D8[4];
extern u8 const data_804673DC[4];

//
// Declarations:
//

/* 80467360-8046738C 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	8046736C: 804673D8 (data_804673D8)
//	80467370: 804673D8 (data_804673D8)
//	80467374: 8026314C (ModuleConstructorsX)
//	80467378: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_spiral/executor/_prolog.s"
}
#pragma pop

/* 8046738C-804673B8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	80467398: 8026308C (ModuleEpilog)
//	8046739C: 804673DC (data_804673DC)
//	804673A0: 804673DC (data_804673DC)
//	804673A4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_spiral/executor/_epilog.s"
}
#pragma pop

/* 804673B8-804673D8 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	804673C4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_spiral/executor/_unresolved.s"
}
#pragma pop
