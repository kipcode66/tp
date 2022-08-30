//
// Generated By: dol2asm
// Translation Unit: jstudio-math
//

#include "JSystem/JStudio/JStudio/jstudio-math.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void getRotation_xyz__Q27JStudio4mathFPA4_ffff();
extern "C" void getTransformation_SRxyzT__Q27JStudio4mathFPA4_fRC3VecRC3VecRC3Vec();
extern "C" void getFromTransformation_SRxyzT__Q27JStudio4mathFP3VecP3VecP3VecPA4_Cf();

//
// External References:
//

extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void cos();
extern "C" void sin();
extern "C" void asin();
extern "C" void atan2();
extern "C" extern u32 __float_epsilon;

//
// Declarations:
//

/* ############################################################################################## */
/* 80455468-8045546C 003A68 0004+00 1/1 0/0 0/0 .sdata2          @488 */
SECTION_SDATA2 static f32 lit_488 = 0.01745329238474369f;

/* 8045546C-80455470 003A6C 0004+00 2/2 0/0 0/0 .sdata2          @489 */
SECTION_SDATA2 static u8 lit_489[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 802859DC-80285B44 28031C 0168+00 1/1 0/0 0/0 .text getRotation_xyz__Q27JStudio4mathFPA4_ffff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::math::getRotation_xyz(MtxP param_0, f32 param_1, f32 param_2, f32 param_3) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/jstudio-math/getRotation_xyz__Q27JStudio4mathFPA4_ffff.s"
}
#pragma pop

/* 80285B44-80285BCC 280484 0088+00 0/0 2/2 0/0 .text
 * getTransformation_SRxyzT__Q27JStudio4mathFPA4_fRC3VecRC3VecRC3Vec */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::math::getTransformation_SRxyzT(MtxP param_0, Vec const& param_1,
                                                 Vec const& param_2, Vec const& param_3) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/jstudio-math/getTransformation_SRxyzT__Q27JStudio4mathFPA4_fRC3VecRC3VecRC3Vec.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455470-80455478 003A70 0008+00 1/1 0/0 0/0 .sdata2          @623 */
SECTION_SDATA2 static u8 lit_623[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80455478-80455480 003A78 0008+00 1/1 0/0 0/0 .sdata2          @624 */
SECTION_SDATA2 static f64 lit_624 = 1.0;

/* 80455480-80455488 003A80 0004+04 1/1 0/0 0/0 .sdata2          @625 */
SECTION_SDATA2 static f32 lit_625[1 + 1 /* padding */] = {
    32.0f,
    /* padding */
    0.0f,
};

/* 80455488-80455490 003A88 0008+00 1/1 0/0 0/0 .sdata2          @626 */
SECTION_SDATA2 static f64 lit_626 = -1.5707963267948966;

/* 80455490-80455498 003A90 0008+00 1/1 0/0 0/0 .sdata2          @627 */
SECTION_SDATA2 static f64 lit_627 = 1.5707963267948966;

/* 80455498-804554A0 003A98 0008+00 1/1 0/0 0/0 .sdata2          @628 */
SECTION_SDATA2 static f64 lit_628 = 57.29577951308232;

/* 80285BCC-80285E0C 28050C 0240+00 0/0 2/2 0/0 .text
 * getFromTransformation_SRxyzT__Q27JStudio4mathFP3VecP3VecP3VecPA4_Cf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::math::getFromTransformation_SRxyzT(Vec* param_0, Vec* param_1, Vec* param_2,
                                                     CMtxP param_3) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/jstudio-math/getFromTransformation_SRxyzT__Q27JStudio4mathFP3VecP3VecP3VecPA4_Cf.s"
}
#pragma pop
