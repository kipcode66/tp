//
// Generated By: dol2asm
// Translation Unit: executor
//

#include "rel/d/a/door/d_a_door_boss/executor.h"
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
extern u8 const data_8067090C[4];
extern u8 const data_80670910[4];

//
// Declarations:
//

/* 8066F3A0-8066F3CC 002C+00 s=0 e=0 z=0  None .text      _prolog */
//	8066F3AC: 8067090C (data_8067090C)
//	8066F3B0: 8067090C (data_8067090C)
//	8066F3B4: 8026314C (ModuleConstructorsX)
//	8066F3B8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _prolog() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_boss/executor/_prolog.s"
}
#pragma pop

/* 8066F3CC-8066F3F8 002C+00 s=0 e=0 z=0  None .text      _epilog */
//	8066F3D8: 8026308C (ModuleEpilog)
//	8066F3DC: 80670910 (data_80670910)
//	8066F3E0: 80670910 (data_80670910)
//	8066F3E4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _epilog() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_boss/executor/_epilog.s"
}
#pragma pop

/* 8066F3F8-8066F418 0020+00 s=0 e=0 z=0  None .text      _unresolved */
//	8066F404: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void _unresolved() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_boss/executor/_unresolved.s"
}
#pragma pop
