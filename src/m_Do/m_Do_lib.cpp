//
// Generated By: dol2asm
// Translation Unit: m_Do/m_Do_lib
//

#include "m_Do/m_Do_lib.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct mDoLib_clipper {
    /* 8001528C */ void setup(f32, f32, f32, f32);
};

struct _GXTlutObj {};

struct _GXTexObj {};

struct Vec {};

struct ResTIMG {};

struct J3DUClipper {
    /* 80015590 */ ~J3DUClipper();
    /* 80273778 */ void init();
    /* 8027378C */ void calcViewFrustum();
};

//
// Forward References:
//

void mDoLib_setResTimgObj(ResTIMG const*, _GXTexObj*, u32, _GXTlutObj*);
void mDoLib_project(Vec*, Vec*);
void mDoLib_pos2camera(Vec*, Vec*);

extern "C" void mDoLib_setResTimgObj__FPC7ResTIMGP9_GXTexObjUlP10_GXTlutObj();
extern "C" void setup__14mDoLib_clipperFffff();
extern "C" void mDoLib_project__FP3VecP3Vec();
extern "C" void mDoLib_pos2camera__FP3VecP3Vec();
extern "C" void __sinit_m_Do_lib_cpp();
extern "C" void __dt__11J3DUClipperFv();
extern "C" extern void* __vt__11J3DUClipper[3 + 1 /* padding */];
extern "C" extern u8 mClipper__14mDoLib_clipper[92];
extern "C" extern f32 mSystemFar__14mDoLib_clipper;
extern "C" extern f32 mFovyRate__14mDoLib_clipper;

//
// External References:
//

void operator delete(void*);

extern "C" void init__11J3DUClipperFv();
extern "C" void calcViewFrustum__11J3DUClipperFv();
extern "C" void __dl__FPv();
extern "C" void PSMTXMultVec();
extern "C" void GXInitTexObj();
extern "C" void GXInitTexObjCI();
extern "C" void GXInitTexObjLOD();
extern "C" void GXInitTlutObj();
extern "C" void __register_global_object();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 sincosTable___5JMath[65536];

//
// Declarations:
//

/* ############################################################################################## */
/* 80451B70-80451B74 0004+00 s=1 e=0 z=0  None .sdata2    @3634 */
SECTION_SDATA2 static f32 lit_3634 = 0.125f;

/* 80451B74-80451B78 0004+00 s=1 e=0 z=0  None .sdata2    @3635 */
SECTION_SDATA2 static f32 lit_3635 = 1.0f / 100.0f;

/* 80451B78-80451B80 0008+00 s=1 e=0 z=0  None .sdata2    @3638 */
SECTION_SDATA2 static f64 lit_3638 = 4503601774854144.0 /* cast s32 to float */;

/* 8001513C-8001528C 0150+00 s=0 e=3 z=2  None .text
 * mDoLib_setResTimgObj__FPC7ResTIMGP9_GXTexObjUlP10_GXTlutObj  */
//	8001514C: 803621DC (_savegpr_29)
//	8001517C: 8035E468 (GXInitTlutObj)
//	800151B0: 8035E08C (GXInitTexObjCI)
//	800151E4: 8035DE40 (GXInitTexObj)
//	800151F4: 80451B70 (lit_3634)
//	80015200: 80451B78 (lit_3638)
//	80015240: 80451B74 (lit_3635)
//	8001526C: 8035E0D4 (GXInitTexObjLOD)
//	80015278: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoLib_setResTimgObj(ResTIMG const* param_0, _GXTexObj* param_1, u32 param_2,
                              _GXTlutObj* param_3) {
    nofralloc
#include "asm/m_Do/m_Do_lib/mDoLib_setResTimgObj__FPC7ResTIMGP9_GXTexObjUlP10_GXTlutObj.s"
}
#pragma pop

/* ############################################################################################## */
/* 803DD8D8-803DD8E4 000C+00 s=1 e=0 z=0  None .bss       @3727 */
static u8 lit_3727[12];

/* 803DD8E4-803DD940 005C+00 s=2 e=5 z=5  None .bss       mClipper__14mDoLib_clipper */
u8 mClipper__14mDoLib_clipper[92];

/* 80450C70-80450C74 0004+00 s=1 e=2 z=4  None .sbss      mSystemFar__14mDoLib_clipper */
f32 mSystemFar__14mDoLib_clipper;

/* 80450C74-80450C78 0004+00 s=1 e=1 z=0  None .sbss      mFovyRate__14mDoLib_clipper */
f32 mFovyRate__14mDoLib_clipper;

/* 80451B80-80451B84 0004+00 s=1 e=0 z=0  None .sdata2    @3739 */
SECTION_SDATA2 static f32 lit_3739 = 182.04444885253906f;

/* 8001528C-80015310 0084+00 s=0 e=1 z=0  None .text      setup__14mDoLib_clipperFffff */
//	800152A4: 803DD8E4 (mClipper__14mDoLib_clipper)
//	800152A8: 803DD8E4 (mClipper__14mDoLib_clipper)
//	800152BC: 80450C70 (mSystemFar__14mDoLib_clipper)
//	800152C0: 8027378C (calcViewFrustum__11J3DUClipperFv)
//	800152C4: 80451B80 (lit_3739)
//	800152DC: 80439A20 (sincosTable___5JMath)
//	800152E0: 80439A20 (sincosTable___5JMath)
//	800152F4: 80450C74 (mFovyRate__14mDoLib_clipper)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoLib_clipper::setup(f32 param_0, f32 param_1, f32 param_2, f32 param_3) {
    nofralloc
#include "asm/m_Do/m_Do_lib/setup__14mDoLib_clipperFffff.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451B84-80451B88 0004+00 s=2 e=0 z=0  None .sdata2    @3784 */
SECTION_SDATA2 static u8 lit_3784[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80451B88-80451B8C 0004+00 s=1 e=0 z=0  None .sdata2    @3785 */
SECTION_SDATA2 static f32 lit_3785 = 500000.0f;

/* 80451B8C-80451B90 0004+00 s=1 e=0 z=0  None .sdata2    @3786 */
SECTION_SDATA2 static f32 lit_3786 = 0.5f;

/* 80451B90-80451B94 0004+00 s=1 e=0 z=0  None .sdata2    @3787 */
SECTION_SDATA2 static f32 lit_3787 = 2.0f;

/* 80451B94-80451B98 0004+00 s=1 e=0 z=0  None .sdata2    @3788 */
SECTION_SDATA2 static f32 lit_3788 = 304.0f;

/* 80451B98-80451B9C 0004+00 s=1 e=0 z=0  None .sdata2    @3789 */
SECTION_SDATA2 static f32 lit_3789 = 608.0f;

/* 80451B9C-80451BA0 0004+00 s=1 e=0 z=0  None .sdata2    @3790 */
SECTION_SDATA2 static f32 lit_3790 = 224.0f;

/* 80451BA0-80451BA8 0004+04 s=1 e=0 z=0  None .sdata2    @3791 */
SECTION_SDATA2 static f32 lit_3791[1 + 1 /* padding */] = {
    448.0f,
    /* padding */
    0.0f,
};

/* 80015310-800154EC 01DC+00 s=0 e=21 z=23  None .text      mDoLib_project__FP3VecP3Vec */
//	80015320: 803621DC (_savegpr_29)
//	8001532C: 804061C0 (g_dComIfG_gameInfo)
//	80015330: 804061C0 (g_dComIfG_gameInfo)
//	80015340: 80451B84 (lit_3784)
//	80015360: 80346D6C (PSMTXMultVec)
//	800153A0: 80451B84 (lit_3784)
//	800153B4: 80451B84 (lit_3784)
//	800153CC: 80451B88 (lit_3785)
//	800153E4: 80451B8C (lit_3786)
//	800153F4: 80451B88 (lit_3785)
//	800153FC: 80451B8C (lit_3786)
//	80015410: 804061C0 (g_dComIfG_gameInfo)
//	80015414: 804061C0 (g_dComIfG_gameInfo)
//	8001541C: 80451B84 (lit_3784)
//	8001542C: 80451B8C (lit_3786)
//	80015430: 80451B90 (lit_3787)
//	80015444: 80451B94 (lit_3788)
//	8001544C: 80451B98 (lit_3789)
//	8001545C: 80451B84 (lit_3784)
//	8001546C: 80451B8C (lit_3786)
//	80015470: 80451B90 (lit_3787)
//	80015484: 80451B9C (lit_3790)
//	8001548C: 80451BA0 (lit_3791)
//	8001549C: 80451B8C (lit_3786)
//	800154D8: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoLib_project(Vec* param_0, Vec* param_1) {
    nofralloc
#include "asm/m_Do/m_Do_lib/mDoLib_project__FP3VecP3Vec.s"
}
#pragma pop

/* 800154EC-80015544 0058+00 s=0 e=2 z=9  None .text      mDoLib_pos2camera__FP3VecP3Vec */
//	80015500: 804061C0 (g_dComIfG_gameInfo)
//	80015504: 804061C0 (g_dComIfG_gameInfo)
//	80015514: 80451B84 (lit_3784)
//	80015530: 80346D6C (PSMTXMultVec)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void mDoLib_pos2camera(Vec* param_0, Vec* param_1) {
    nofralloc
#include "asm/m_Do/m_Do_lib/mDoLib_pos2camera__FP3VecP3Vec.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A3498-803A34A8 000C+04 s=2 e=0 z=0  None .data      __vt__11J3DUClipper */
SECTION_DATA void* __vt__11J3DUClipper[3 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__11J3DUClipperFv,
    /* padding */
    NULL,
};

/* 80015544-80015590 004C+00 s=0 e=0 z=0  None .text      __sinit_m_Do_lib_cpp */
//	80015550: 803A3498 (__vt__11J3DUClipper)
//	80015554: 803A3498 (__vt__11J3DUClipper)
//	80015558: 803DD8E4 (mClipper__14mDoLib_clipper)
//	8001555C: 803DD8E4 (mClipper__14mDoLib_clipper)
//	80015560: 80273778 (init__11J3DUClipperFv)
//	80015564: 803DD8E4 (mClipper__14mDoLib_clipper)
//	80015568: 803DD8E4 (mClipper__14mDoLib_clipper)
//	8001556C: 80015590 (__dt__11J3DUClipperFv)
//	80015570: 80015590 (__dt__11J3DUClipperFv)
//	80015574: 803DD8D8 (lit_3727)
//	80015578: 803DD8D8 (lit_3727)
//	8001557C: 80361C24 (__register_global_object)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_m_Do_lib_cpp() {
    nofralloc
#include "asm/m_Do/m_Do_lib/__sinit_m_Do_lib_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80015544 = (void*)__sinit_m_Do_lib_cpp;
#pragma pop

/* 80015590-800155D8 0048+00 s=2 e=0 z=0  None .text      __dt__11J3DUClipperFv */
//	800155A8: 803A3498 (__vt__11J3DUClipper)
//	800155AC: 803A3498 (__vt__11J3DUClipper)
//	800155BC: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DUClipper::~J3DUClipper() {
    nofralloc
#include "asm/m_Do/m_Do_lib/__dt__11J3DUClipperFv.s"
}
#pragma pop
