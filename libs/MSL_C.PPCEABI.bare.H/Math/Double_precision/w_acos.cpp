//
// Generated By: dol2asm
// Translation Unit: Math/Double_precision/w_acos
//

#include "MSL_C.PPCEABI.bare.H/Math/Double_precision/w_acos.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void acos();

//
// External References:
//

extern "C" void __ieee754_acos();

//
// Declarations:
//

/* 8036C6E0-8036C700 0020+00 s=0 e=2 z=3  None .text      acos */
//	8036C6EC: 80369274 (__ieee754_acos)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void acos() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/Math/Double_precision/w_acos/acos.s"
}
#pragma pop
