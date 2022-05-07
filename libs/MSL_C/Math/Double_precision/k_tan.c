//
// Generated By: dol2asm
// Translation Unit: Math/Double_precision/k_tan
//

#include "MSL_C/Math/Double_precision/k_tan.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

void __kernel_tan();

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
/* 803A2588-803A25F0 02EBE8 0068+00 1/1 0/0 0/0 .rodata          T */
SECTION_RODATA static u8 const T[104] = {
    0x3F, 0xD5, 0x55, 0x55, 0x55, 0x55, 0x55, 0x63, 0x3F, 0xC1, 0x11, 0x11, 0x11, 0x10, 0xFE,
    0x7A, 0x3F, 0xAB, 0xA1, 0xBA, 0x1B, 0xB3, 0x41, 0xFE, 0x3F, 0x96, 0x64, 0xF4, 0x84, 0x06,
    0xD6, 0x37, 0x3F, 0x82, 0x26, 0xE3, 0xE9, 0x6E, 0x84, 0x93, 0x3F, 0x6D, 0x6D, 0x22, 0xC9,
    0x56, 0x03, 0x28, 0x3F, 0x57, 0xDB, 0xC8, 0xFE, 0xE0, 0x83, 0x15, 0x3F, 0x43, 0x44, 0xD8,
    0xF2, 0xF2, 0x65, 0x01, 0x3F, 0x30, 0x26, 0xF7, 0x1A, 0x8D, 0x10, 0x68, 0x3F, 0x14, 0x7E,
    0x88, 0xA0, 0x37, 0x92, 0xA6, 0x3F, 0x12, 0xB8, 0x0F, 0x32, 0xF0, 0xA7, 0xE9, 0xBE, 0xF3,
    0x75, 0xCB, 0xDB, 0x60, 0x53, 0x73, 0x3E, 0xFB, 0x2A, 0x70, 0x74, 0xBF, 0x7A, 0xD4,
};
COMPILER_STRIP_GATE(0x803A2588, &T);

/* 80456A80-80456A88 005080 0008+00 1/1 0/0 0/0 .sdata2          @94 */
SECTION_SDATA2 static f64 lit_94 = 1.0;

/* 80456A88-80456A90 005088 0008+00 1/1 0/0 0/0 .sdata2          @95 */
SECTION_SDATA2 static f64 lit_95 = -1.0;

/* 80456A90-80456A98 005090 0008+00 1/1 0/0 0/0 .sdata2          @96 */
SECTION_SDATA2 static f64 lit_96 = 0.7853981633974483;

/* 80456A98-80456AA0 005098 0008+00 1/1 0/0 0/0 .sdata2          @97 */
SECTION_SDATA2 static f64 lit_97 = 3.061616997868383e-17;

/* 80456AA0-80456AA8 0050A0 0008+00 1/1 0/0 0/0 .sdata2          @98 */
SECTION_SDATA2 static u8 lit_98[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80456AA8-80456AB0 0050A8 0008+00 1/1 0/0 0/0 .sdata2          @99 */
SECTION_SDATA2 static f64 lit_99 = 2.0;

/* 80456AB0-80456AB8 0050B0 0008+00 1/1 0/0 0/0 .sdata2          @101 */
SECTION_SDATA2 static f64 lit_101 = 4503601774854144.0 /* cast s32 to float */;

/* 8036BA90-8036BCA4 3663D0 0214+00 0/0 1/1 0/0 .text            __kernel_tan */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __kernel_tan() {
    nofralloc
#include "asm/MSL_C/Math/Double_precision/k_tan/__kernel_tan.s"
}
#pragma pop