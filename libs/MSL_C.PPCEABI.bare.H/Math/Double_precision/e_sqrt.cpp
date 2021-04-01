//
// Generated By: dol2asm
// Translation Unit: Math/Double_precision/e_sqrt
//

#include "MSL_C.PPCEABI.bare.H/Math/Double_precision/e_sqrt.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __ieee754_sqrt();

//
// External References:
//

extern "C" extern u32 __float_nan;
extern "C" extern u8 errno[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80456B48-80456B50 0008+00 s=1 e=0 z=0  None .sdata2    @164 */
SECTION_SDATA2 static f64 lit_164 = 1.0;

/* 8036C7A0-8036C9C4 0224+00 s=0 e=1 z=0  None .text      __ieee754_sqrt */
//	8036C7C8: 804519A8 (errno)
//	8036C7F0: 80450AE0 (__float_nan)
//	8036C7F8: 804519A8 (errno)
//	8036C7FC: 80450AE0 (__float_nan)
//	8036C958: 80456B48 (lit_164)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __ieee754_sqrt() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/Math/Double_precision/e_sqrt/__ieee754_sqrt.s"
}
#pragma pop
