//
// Generated By: dol2asm
// Translation Unit: Math/Double_precision/s_sin
//

#include "MSL_C.PPCEABI.bare.H/Math/Double_precision/s_sin.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void sin();

//
// External References:
//

extern "C" void __ieee754_rem_pio2();
extern "C" void __kernel_cos();
extern "C" void __kernel_sin();

//
// Declarations:
//

/* ############################################################################################## */
/* 80456B38-80456B40 0008+00 s=1 e=0 z=0  None .sdata2    @67 */
SECTION_SDATA2 static u8 lit_67[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8036C590-8036C668 00D8+00 s=0 e=11 z=2  None .text      sin */
//	8036C5B8: 80456B38 (lit_67)
//	8036C5C0: 8036B9F0 (__kernel_sin)
//	8036C5E0: 8036A708 (__ieee754_rem_pio2)
//	8036C618: 8036B9F0 (__kernel_sin)
//	8036C628: 8036AAA8 (__kernel_cos)
//	8036C63C: 8036B9F0 (__kernel_sin)
//	8036C650: 8036AAA8 (__kernel_cos)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void sin() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/Math/Double_precision/s_sin/sin.s"
}
#pragma pop
