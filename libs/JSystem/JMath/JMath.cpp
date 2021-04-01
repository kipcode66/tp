//
// Generated By: dol2asm
// Translation Unit: JMath
//

#include "JSystem/JMath/JMath.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct Vec {};

struct Quaternion {};

//
// Forward References:
//

void JMAEulerToQuat(s16, s16, s16, Quaternion*);
void JMAQuatLerp(Quaternion const*, Quaternion const*, f32, Quaternion*);
void JMAFastVECNormalize(Vec const*, Vec*);
void JMAVECScaleAdd(Vec const*, Vec const*, Vec*, f32);
void JMAMTXApplyScale(f32 const (*)[4], f32 (*)[4], f32, f32, f32);

extern "C" void JMAEulerToQuat__FsssP10Quaternion();
extern "C" void JMAQuatLerp__FPC10QuaternionPC10QuaternionfP10Quaternion();
extern "C" void JMAFastVECNormalize__FPC3VecP3Vec();
extern "C" void JMAVECScaleAdd__FPC3VecPC3VecP3Vecf();
extern "C" void JMAMTXApplyScale__FPA4_CfPA4_ffff();

//
// External References:
//

extern "C" extern u8 sincosTable___5JMath[65536];

//
// Declarations:
//

/* 80339878-80339938 00C0+00 s=0 e=11 z=2  None .text      JMAEulerToQuat__FsssP10Quaternion */
//	80339878: 80439A20 (sincosTable___5JMath)
//	8033987C: 80439A20 (sincosTable___5JMath)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMAEulerToQuat(s16 param_0, s16 param_1, s16 param_2, Quaternion* param_3) {
    nofralloc
#include "asm/JSystem/JMath/JMath/JMAEulerToQuat__FsssP10Quaternion.s"
}
#pragma pop

/* ############################################################################################## */
/* 804564C8-804564D0 0008+00 s=1 e=0 z=0  None .sdata2    @376 */
SECTION_SDATA2 static u8 lit_376[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80339938-80339A30 00F8+00 s=0 e=5 z=0  None .text
 * JMAQuatLerp__FPC10QuaternionPC10QuaternionfP10Quaternion     */
//	80339954: 804564C8 (lit_376)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMAQuatLerp(Quaternion const* param_0, Quaternion const* param_1, f32 param_2,
                     Quaternion* param_3) {
    nofralloc
#include "asm/JSystem/JMath/JMath/JMAQuatLerp__FPC10QuaternionPC10QuaternionfP10Quaternion.s"
}
#pragma pop

/* 80339A30-80339A5C 002C+00 s=0 e=1 z=0  None .text      JMAFastVECNormalize__FPC3VecP3Vec */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMAFastVECNormalize(Vec const* param_0, Vec* param_1) {
    nofralloc
#include "asm/JSystem/JMath/JMath/JMAFastVECNormalize__FPC3VecP3Vec.s"
}
#pragma pop

/* 80339A5C-80339A84 0028+00 s=0 e=1 z=0  None .text      JMAVECScaleAdd__FPC3VecPC3VecP3Vecf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMAVECScaleAdd(Vec const* param_0, Vec const* param_1, Vec* param_2, f32 param_3) {
    nofralloc
#include "asm/JSystem/JMath/JMath/JMAVECScaleAdd__FPC3VecPC3VecP3Vecf.s"
}
#pragma pop

/* ############################################################################################## */
/* 804564D0-804564D8 0004+04 s=1 e=0 z=0  None .sdata2    @411 */
SECTION_SDATA2 static f32 lit_411[1 + 1 /* padding */] = {
    1.0f,
    /* padding */
    0.0f,
};

/* 80339A84-80339AE4 0060+00 s=0 e=5 z=0  None .text      JMAMTXApplyScale__FPA4_CfPA4_ffff */
//	80339A8C: 804564D0 (lit_411)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMAMTXApplyScale(f32 const (*param_0)[4], f32 (*param_1)[4], f32 param_2, f32 param_3,
                          f32 param_4) {
    nofralloc
#include "asm/JSystem/JMath/JMath/JMAMTXApplyScale__FPA4_CfPA4_ffff.s"
}
#pragma pop
