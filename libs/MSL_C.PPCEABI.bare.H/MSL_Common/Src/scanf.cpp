//
// Generated By: dol2asm
// Translation Unit: MSL_Common/Src/scanf
//

#include "MSL_C.PPCEABI.bare.H/MSL_Common/Src/scanf.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __StringRead();

//
// External References:
//

//
// Declarations:
//

/* 8036878C-8036881C 0090+00 s=0 e=2 z=0  None .text      __StringRead */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __StringRead() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/scanf/__StringRead.s"
}
#pragma pop