//
// Generated By: dol2asm
// Translation Unit: Math/Double_precision/k_cos
//

#include "MSL_C.PPCEABI.bare.H/Math/Double_precision/k_cos.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __kernel_cos();

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
/* 804569C0-804569C8 0008+00 s=1 e=0 z=0  None .sdata2    @65 */
SECTION_SDATA2 static f64 lit_65 = 1.0;

/* 804569C8-804569D0 0008+00 s=1 e=0 z=0  None .sdata2    @66 */
SECTION_SDATA2 static f64 lit_66 = 0.0416666666666666;

/* 804569D0-804569D8 0008+00 s=1 e=0 z=0  None .sdata2    @67 */
SECTION_SDATA2 static f64 lit_67 = -0.001388888888887411;

/* 804569D8-804569E0 0008+00 s=1 e=0 z=0  None .sdata2    @68 */
SECTION_SDATA2 static f64 lit_68 = 2.480158728947673e-05;

/* 804569E0-804569E8 0008+00 s=1 e=0 z=0  None .sdata2    @69 */
SECTION_SDATA2 static f64 lit_69 = -2.7557314351390663e-07;

/* 804569E8-804569F0 0008+00 s=1 e=0 z=0  None .sdata2    @70 */
SECTION_SDATA2 static f64 lit_70 = 2.087572321298175e-09;

/* 804569F0-804569F8 0008+00 s=1 e=0 z=0  None .sdata2    @71 */
SECTION_SDATA2 static f64 lit_71 = -1.1359647557788195e-11;

/* 804569F8-80456A00 0008+00 s=1 e=0 z=0  None .sdata2    @72 */
SECTION_SDATA2 static f64 lit_72 = 0.5;

/* 80456A00-80456A08 0008+00 s=1 e=0 z=0  None .sdata2    @73 */
SECTION_SDATA2 static f64 lit_73 = 0.28125;

/* 8036AAA8-8036AB9C 00F4+00 s=0 e=2 z=0  None .text      __kernel_cos */
//	8036AAD8: 804569C0 (lit_65)
//	8036AAEC: 804569F0 (lit_71)
//	8036AAF4: 804569E8 (lit_70)
//	8036AAF8: 804569E0 (lit_69)
//	8036AB00: 804569D8 (lit_68)
//	8036AB04: 804569D0 (lit_67)
//	8036AB0C: 804569C8 (lit_66)
//	8036AB2C: 804569F8 (lit_72)
//	8036AB30: 804569C0 (lit_65)
//	8036AB50: 80456A00 (lit_73)
//	8036AB78: 804569F8 (lit_72)
//	8036AB7C: 804569C0 (lit_65)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __kernel_cos() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/Math/Double_precision/k_cos/__kernel_cos.s"
}
#pragma pop
