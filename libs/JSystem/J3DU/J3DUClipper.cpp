//
// Generated By: dol2asm
// Translation Unit: J3DUClipper
//

#include "JSystem/J3DU/J3DUClipper.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct Vec {};

struct J3DUClipper {
    /* 80273778 */ void init();
    /* 8027378C */ void calcViewFrustum();
    /* 802738FC */ void clip(f32 const (*)[4], Vec, f32) const;
    /* 80273A44 */ void clip(f32 const (*)[4], Vec*, Vec*) const;
};

//
// Forward References:
//

extern "C" void init__11J3DUClipperFv();
extern "C" void calcViewFrustum__11J3DUClipperFv();
extern "C" void clip__11J3DUClipperCFPA4_Cf3Vecf();
extern "C" void clip__11J3DUClipperCFPA4_CfP3VecP3Vec();
extern "C" extern u8 const lit_899[12];
extern "C" extern u8 const lit_900[12];
extern "C" extern u8 const lit_901[12];
extern "C" extern u8 const lit_902[12];
extern "C" extern char const* const J3DUClipper__stringBase0;

//
// External References:
//

extern "C" void PSMTXMultVec();
extern "C" void PSVECNormalize();
extern "C" void PSVECCrossProduct();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" void tan();

//
// Declarations:
//

/* ############################################################################################## */
/* 80455278-8045527C 0004+00 s=1 e=0 z=0  None .sdata2    @893 */
SECTION_SDATA2 static f32 lit_893 = 1.0f;

/* 8045527C-80455280 0004+00 s=1 e=0 z=0  None .sdata2    @894 */
SECTION_SDATA2 static f32 lit_894 = 100000.0f;

/* 80273778-8027378C 0014+00 s=0 e=1 z=0  None .text      init__11J3DUClipperFv */
//	80273778: 80455278 (lit_893)
//	80273780: 8045527C (lit_894)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DUClipper::init() {
    nofralloc
#include "asm/JSystem/J3DU/J3DUClipper/init__11J3DUClipperFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039A948-8039A954 000C+00 s=1 e=0 z=0  None .rodata    @898 */
SECTION_RODATA static u8 const lit_898[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80455280-80455284 0004+00 s=1 e=0 z=0  None .sdata2    @913 */
SECTION_SDATA2 static f32 lit_913 = 0.01745329238474369f;

/* 80455284-80455288 0004+00 s=1 e=0 z=0  None .sdata2    @914 */
SECTION_SDATA2 static f32 lit_914 = 0.5f;

/* 8027378C-802738FC 0170+00 s=0 e=3 z=4  None .text      calcViewFrustum__11J3DUClipperFv */
//	802737A4: 8039A948 (lit_898)
//	802737A8: 8039A948 (lit_898)
//	802737AC: 80455280 (lit_913)
//	802737B0: 80455284 (lit_914)
//	802737C0: 8036C668 (tan)
//	80273880: 803471B4 (PSVECCrossProduct)
//	80273890: 803471B4 (PSVECCrossProduct)
//	802738A0: 803471B4 (PSVECCrossProduct)
//	802738B0: 803471B4 (PSVECCrossProduct)
//	802738BC: 803470F4 (PSVECNormalize)
//	802738C8: 803470F4 (PSVECNormalize)
//	802738D4: 803470F4 (PSVECNormalize)
//	802738E0: 803470F4 (PSVECNormalize)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DUClipper::calcViewFrustum() {
    nofralloc
#include "asm/JSystem/J3DU/J3DUClipper/calcViewFrustum__11J3DUClipperFv.s"
}
#pragma pop

/* 802738FC-80273A44 0148+00 s=0 e=3 z=2  None .text      clip__11J3DUClipperCFPA4_Cf3Vecf */
//	80273928: 80346D6C (PSMTXMultVec)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DUClipper::clip(f32 const (*param_0)[4], Vec param_1, f32 param_2) const {
    nofralloc
#include "asm/JSystem/J3DU/J3DUClipper/clip__11J3DUClipperCFPA4_Cf3Vecf.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455288-80455290 0004+04 s=1 e=0 z=0  None .sdata2    @991 */
SECTION_SDATA2 static f32 lit_991[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

/* 80273A44-80273E08 03C4+00 s=0 e=3 z=2  None .text      clip__11J3DUClipperCFPA4_CfP3VecP3Vec */
//	80273ACC: 803621DC (_savegpr_29)
//	80273B88: 80455288 (lit_991)
//	80273BC0: 80346D6C (PSMTXMultVec)
//	80273DF4: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DUClipper::clip(f32 const (*param_0)[4], Vec* param_1, Vec* param_2) const {
    nofralloc
#include "asm/JSystem/J3DU/J3DUClipper/clip__11J3DUClipperCFPA4_CfP3VecP3Vec.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039A954-8039A960 000C+00 s=0 e=0 z=0  None .rodata    @899 */
SECTION_RODATA u8 const lit_899[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8039A960-8039A96C 000C+00 s=0 e=0 z=0  None .rodata    @900 */
SECTION_RODATA u8 const lit_900[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8039A96C-8039A978 000C+00 s=0 e=0 z=0  None .rodata    @901 */
SECTION_RODATA u8 const lit_901[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8039A978-8039A984 000C+00 s=0 e=0 z=0  None .rodata    @902 */
SECTION_RODATA u8 const lit_902[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8039A984-8039A9F0 0065+07 s=0 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_8039A984 = " J3DUClipper::mFovy = %f";
SECTION_DEAD char const* const stringBase_8039A99D = " J3DUClipper::mAspect = %f";
SECTION_DEAD char const* const stringBase_8039A9B8 = " J3DUClipper::mNear = %f";
SECTION_DEAD char const* const stringBase_8039A9D1 = " J3DUClipper::mFar = %f";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_8039A9E9 = "\0\0\0\0\0\0";
#pragma pop
