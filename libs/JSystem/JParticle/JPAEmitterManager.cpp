//
// Generated By: dol2asm
// Translation Unit: JPAEmitterManager
//

#include "JSystem/JParticle/JPAEmitterManager.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JSUPtrLink {
    /* 802DBDFC */ JSUPtrLink(void*);
    /* 802DBE14 */ ~JSUPtrLink();
};

struct JSUPtrList {
    /* 802DBEAC */ ~JSUPtrList();
    /* 802DBF14 */ void initiate();
    /* 802DBF4C */ void append(JSUPtrLink*);
    /* 802DBFF0 */ void prepend(JSUPtrLink*);
    /* 802DC15C */ void remove(JSUPtrLink*);
};

template <typename A0>
struct JSUList {};
/* JSUList<JPABaseEmitter> */
struct JSUList__template1 {
    /* 8027E51C */ JSUList__template1();
    /* 8027E598 */ ~JSUList__template1();
};

struct JPAResourceManager {
    /* 80273E68 */ void getResource(u16) const;
};

struct JGeometry {
    template <typename A1>
    struct TVec3 {};
    /* TVec3<f32> */
    struct TVec3__template0 {};
};

struct JPABaseEmitter;
struct JPAParticleCallBack {};

struct JKRHeap {};

struct JPADrawInfo {};

struct JPAEmitterCallBack {};

struct JPAEmitterManager {
    /* 8027DCA0 */ JPAEmitterManager(u32, u32, JKRHeap*, u8, u8);
    /* 8027DEBC */ void createSimpleEmitterID(JGeometry::TVec3<f32> const&, u16, u8, u8,
                                              JPAEmitterCallBack*, JPAParticleCallBack*);
    /* 8027DFA0 */ void calc(u8);
    /* 8027E028 */ void draw(JPADrawInfo const*, u8);
    /* 8027E220 */ void forceDeleteAllEmitter();
    /* 8027E278 */ void forceDeleteGroupEmitter(u8);
    /* 8027E2D8 */ void forceDeleteEmitter(JPABaseEmitter*);
    /* 8027E344 */ void entryResourceManager(JPAResourceManager*, u8);
    /* 8027E354 */ void clearResourceManager(u8);
    /* 8027E3F4 */ void calcYBBCam();
};

struct JPAResource;
struct JPABaseEmitter {
    /* 8027E5EC */ ~JPABaseEmitter();
    /* 8027E64C */ JPABaseEmitter();
    /* 8027E6EC */ void init(JPAEmitterManager*, JPAResource*);
    /* 8027EC60 */ void deleteAllParticle();
};

struct JPAEmitterWorkData {};

struct JPAResource {
    /* 802755E8 */ void calc(JPAEmitterWorkData*, JPABaseEmitter*);
    /* 80275A94 */ void draw(JPAEmitterWorkData*, JPABaseEmitter*);
};

template <typename A0>
struct JPANode {};
/* JPANode<JPABaseParticle> */
struct JPANode__template0 {
    /* 8027E54C */ ~JPANode__template0();
    /* 8027E588 */ JPANode__template0();
};

//
// Forward References:
//

extern "C" void __ct__17JPAEmitterManagerFUlUlP7JKRHeapUcUc();
extern "C" void func_8027DEBC();
extern "C" void calc__17JPAEmitterManagerFUc();
extern "C" void draw__17JPAEmitterManagerFPC11JPADrawInfoUc();
extern "C" void forceDeleteAllEmitter__17JPAEmitterManagerFv();
extern "C" void forceDeleteGroupEmitter__17JPAEmitterManagerFUc();
extern "C" void forceDeleteEmitter__17JPAEmitterManagerFP14JPABaseEmitter();
extern "C" void entryResourceManager__17JPAEmitterManagerFP18JPAResourceManagerUc();
extern "C" void clearResourceManager__17JPAEmitterManagerFUc();
extern "C" void calcYBBCam__17JPAEmitterManagerFv();
extern "C" void func_8027E51C();
extern "C" void func_8027E54C();
extern "C" void func_8027E588();
extern "C" void func_8027E598();
extern "C" void __dt__14JPABaseEmitterFv();
extern "C" void __ct__14JPABaseEmitterFv();

//
// External References:
//

void* operator new(u32, JKRHeap*, int);
void* operator new[](u32, JKRHeap*, int);
void operator delete(void*);

extern "C" void getResource__18JPAResourceManagerCFUs();
extern "C" void calc__11JPAResourceFP18JPAEmitterWorkDataP14JPABaseEmitter();
extern "C" void draw__11JPAResourceFP18JPAEmitterWorkDataP14JPABaseEmitter();
extern "C" void init__14JPABaseEmitterFP17JPAEmitterManagerP11JPAResource();
extern "C" void deleteAllParticle__14JPABaseEmitterFv();
extern "C" void* __nw__FUlP7JKRHeapi();
extern "C" void* __nwa__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void __ct__10JSUPtrLinkFPv();
extern "C" void __dt__10JSUPtrLinkFv();
extern "C" void __dt__10JSUPtrListFv();
extern "C" void initiate__10JSUPtrListFv();
extern "C" void append__10JSUPtrListFP10JSUPtrLink();
extern "C" void prepend__10JSUPtrListFP10JSUPtrLink();
extern "C" void remove__10JSUPtrListFP10JSUPtrLink();
extern "C" void PSMTXCopy();
extern "C" void GXSetVtxDesc();
extern "C" void GXClearVtxDesc();
extern "C" void GXSetVtxAttrFmt();
extern "C" void GXEnableTexOffsets();
extern "C" void GXSetCullMode();
extern "C" void GXSetCoPlanar();
extern "C" void GXSetNumChans();
extern "C" void GXSetChanCtrl();
extern "C" void GXSetTevColorOp();
extern "C" void GXSetTevAlphaOp();
extern "C" void GXSetCurrentMtx();
extern "C" void __construct_new_array();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern u32 __float_epsilon;

//
// Declarations:
//

/* 8027DCA0-8027DEBC 021C+00 s=0 e=1 z=0  None .text __ct__17JPAEmitterManagerFUlUlP7JKRHeapUcUc
 */
//	8027DCB0: 803621D0 (_savegpr_26)
//	8027DCD0: 802DBF14 (initiate__10JSUPtrListFv)
//	8027DD08: 802CED10 (__nwa__FUlP7JKRHeapi)
//	8027DD0C: 8027E64C (__ct__14JPABaseEmitterFv)
//	8027DD10: 8027E64C (__ct__14JPABaseEmitterFv)
//	8027DD14: 8027E5EC (__dt__14JPABaseEmitterFv)
//	8027DD18: 8027E5EC (__dt__14JPABaseEmitterFv)
//	8027DD24: 80361F14 (__construct_new_array)
//	8027DD44: 802DBFF0 (prepend__10JSUPtrListFP10JSUPtrLink)
//	8027DD70: 802CED10 (__nwa__FUlP7JKRHeapi)
//	8027DD74: 8027E588 (func_8027E588)
//	8027DD78: 8027E588 (func_8027E588)
//	8027DD7C: 8027E54C (func_8027E54C)
//	8027DD80: 8027E54C (func_8027E54C)
//	8027DD8C: 80361F14 (__construct_new_array)
//	8027DE14: 802CED10 (__nwa__FUlP7JKRHeapi)
//	8027DE18: 8027E51C (func_8027E51C)
//	8027DE1C: 8027E51C (func_8027E51C)
//	8027DE20: 8027E598 (func_8027E598)
//	8027DE24: 8027E598 (func_8027E598)
//	8027DE30: 80361F14 (__construct_new_array)
//	8027DE48: 802CED10 (__nwa__FUlP7JKRHeapi)
//	8027DE88: 802CEC98 (__nw__FUlP7JKRHeapi)
//	8027DEA8: 8036221C (_restgpr_26)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JPAEmitterManager::JPAEmitterManager(u32 param_0, u32 param_1, JKRHeap* param_2, u8 param_3,
                                         u8 param_4) {
    nofralloc
#include "asm/JSystem/JParticle/JPAEmitterManager/__ct__17JPAEmitterManagerFUlUlP7JKRHeapUcUc.s"
}
#pragma pop

/* 8027DEBC-8027DFA0 00E4+00 s=0 e=3 z=0  None .text
 * createSimpleEmitterID__17JPAEmitterManagerFRCQ29JGeometry8TVec3<f>UsUcUcP18JPAEmitterCallBackP19JPAParticleCallBack
 */
//	8027DECC: 803621C8 (_savegpr_24)
//	8027DEF8: 80273E68 (getResource__18JPAResourceManagerCFUs)
//	8027DF1C: 802DC15C (remove__10JSUPtrListFP10JSUPtrLink)
//	8027DF34: 802DBF4C (append__10JSUPtrListFP10JSUPtrLink)
//	8027DF48: 8027E6EC (init__14JPABaseEmitterFP17JPAEmitterManagerP11JPAResource)
//	8027DF8C: 80362214 (_restgpr_24)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAEmitterManager::createSimpleEmitterID(JGeometry::TVec3<f32> const& param_0, u16 param_1,
                                                  u8 param_2, u8 param_3,
                                                  JPAEmitterCallBack* param_4,
                                                  JPAParticleCallBack* param_5) {
    nofralloc
#include "asm/JSystem/JParticle/JPAEmitterManager/func_8027DEBC.s"
}
#pragma pop

/* 8027DFA0-8027E028 0088+00 s=0 e=3 z=0  None .text      calc__17JPAEmitterManagerFUc */
//	8027DFB0: 803621DC (_savegpr_29)
//	8027DFE0: 802755E8 (calc__11JPAResourceFP18JPAEmitterWorkDataP14JPABaseEmitter)
//	8027E000: 8027E2D8 (forceDeleteEmitter__17JPAEmitterManagerFP14JPABaseEmitter)
//	8027E014: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAEmitterManager::calc(u8 param_0) {
    nofralloc
#include "asm/JSystem/JParticle/JPAEmitterManager/calc__17JPAEmitterManagerFUc.s"
}
#pragma pop

/* 8027E028-8027E220 01F8+00 s=0 e=1 z=0  None .text draw__17JPAEmitterManagerFPC11JPADrawInfoUc
 */
//	8027E038: 803621DC (_savegpr_29)
//	8027E054: 803464B0 (PSMTXCopy)
//	8027E064: 803464B0 (PSMTXCopy)
//	8027E06C: 8027E3F4 (calcYBBCam__17JPAEmitterManagerFv)
//	8027E088: 8035F2AC (GXSetTevColorOp)
//	8027E0A4: 8035F314 (GXSetTevAlphaOp)
//	8027E0B4: 8035C93C (GXEnableTexOffsets)
//	8027E0C4: 8035C93C (GXEnableTexOffsets)
//	8027E0D4: 8035C93C (GXEnableTexOffsets)
//	8027E0DC: 8035C984 (GXSetCullMode)
//	8027E0E4: 8035C9AC (GXSetCoPlanar)
//	8027E0E8: 8035B58C (GXClearVtxDesc)
//	8027E0F4: 8035AEB8 (GXSetVtxDesc)
//	8027E100: 8035AEB8 (GXSetVtxDesc)
//	8027E118: 8035B5C4 (GXSetVtxAttrFmt)
//	8027E130: 8035B5C4 (GXSetVtxAttrFmt)
//	8027E148: 8035B5C4 (GXSetVtxAttrFmt)
//	8027E160: 8035B5C4 (GXSetVtxAttrFmt)
//	8027E168: 803602EC (GXSetCurrentMtx)
//	8027E188: 8035DB6C (GXSetChanCtrl)
//	8027E1A8: 8035DB6C (GXSetChanCtrl)
//	8027E1B0: 8035DB30 (GXSetNumChans)
//	8027E1F8: 80275A94 (draw__11JPAResourceFP18JPAEmitterWorkDataP14JPABaseEmitter)
//	8027E20C: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAEmitterManager::draw(JPADrawInfo const* param_0, u8 param_1) {
    nofralloc
#include "asm/JSystem/JParticle/JPAEmitterManager/draw__17JPAEmitterManagerFPC11JPADrawInfoUc.s"
}
#pragma pop

/* 8027E220-8027E278 0058+00 s=0 e=1 z=0  None .text forceDeleteAllEmitter__17JPAEmitterManagerFv
 */
//	8027E248: 8027E278 (forceDeleteGroupEmitter__17JPAEmitterManagerFUc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAEmitterManager::forceDeleteAllEmitter() {
    nofralloc
#include "asm/JSystem/JParticle/JPAEmitterManager/forceDeleteAllEmitter__17JPAEmitterManagerFv.s"
}
#pragma pop

/* 8027E278-8027E2D8 0060+00 s=1 e=0 z=0  None .text
 * forceDeleteGroupEmitter__17JPAEmitterManagerFUc              */
//	8027E2A8: 8027E2D8 (forceDeleteEmitter__17JPAEmitterManagerFP14JPABaseEmitter)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAEmitterManager::forceDeleteGroupEmitter(u8 param_0) {
    nofralloc
#include "asm/JSystem/JParticle/JPAEmitterManager/forceDeleteGroupEmitter__17JPAEmitterManagerFUc.s"
}
#pragma pop

/* 8027E2D8-8027E344 006C+00 s=3 e=1 z=0  None .text
 * forceDeleteEmitter__17JPAEmitterManagerFP14JPABaseEmitter    */
//	8027E2F8: 8027EC60 (deleteAllParticle__14JPABaseEmitterFv)
//	8027E31C: 802DC15C (remove__10JSUPtrListFP10JSUPtrLink)
//	8027E328: 802DBFF0 (prepend__10JSUPtrListFP10JSUPtrLink)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAEmitterManager::forceDeleteEmitter(JPABaseEmitter* param_0) {
    nofralloc
#include "asm/JSystem/JParticle/JPAEmitterManager/forceDeleteEmitter__17JPAEmitterManagerFP14JPABaseEmitter.s"
}
#pragma pop

/* 8027E344-8027E354 0010+00 s=0 e=2 z=0  None .text
 * entryResourceManager__17JPAEmitterManagerFP18JPAResourceManagerUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAEmitterManager::entryResourceManager(JPAResourceManager* param_0, u8 param_1) {
    nofralloc
#include "asm/JSystem/JParticle/JPAEmitterManager/entryResourceManager__17JPAEmitterManagerFP18JPAResourceManagerUc.s"
}
#pragma pop

/* 8027E354-8027E3F4 00A0+00 s=0 e=1 z=0  None .text clearResourceManager__17JPAEmitterManagerFUc
 */
//	8027E364: 803621D4 (_savegpr_27)
//	8027E3A8: 8027E2D8 (forceDeleteEmitter__17JPAEmitterManagerFP14JPABaseEmitter)
//	8027E3E0: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAEmitterManager::clearResourceManager(u8 param_0) {
    nofralloc
#include "asm/JSystem/JParticle/JPAEmitterManager/clearResourceManager__17JPAEmitterManagerFUc.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455358-8045535C 0004+00 s=1 e=0 z=0  None .sdata2    @2632 */
SECTION_SDATA2 static u8 lit_2632[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8045535C-80455360 0004+00 s=1 e=0 z=0  None .sdata2    @2633 */
SECTION_SDATA2 static f32 lit_2633 = 32.0f;

/* 80455360-80455364 0004+00 s=1 e=0 z=0  None .sdata2    @2634 */
SECTION_SDATA2 static f32 lit_2634 = 0.5f;

/* 80455364-80455368 0004+00 s=1 e=0 z=0  None .sdata2    @2635 */
SECTION_SDATA2 static f32 lit_2635 = 3.0f;

/* 80455368-80455370 0004+04 s=1 e=0 z=0  None .sdata2    @2636 */
SECTION_SDATA2 static f32 lit_2636[1 + 1 /* padding */] = {
    1.0f,
    /* padding */
    0.0f,
};

/* 8027E3F4-8027E51C 0128+00 s=1 e=0 z=0  None .text      calcYBBCam__17JPAEmitterManagerFv */
//	8027E404: 80455358 (lit_2632)
//	8027E424: 8045535C (lit_2633)
//	8027E428: 80450AEC (__float_epsilon)
//	8027E42C: 80450AEC (__float_epsilon)
//	8027E45C: 80455360 (lit_2634)
//	8027E464: 80455364 (lit_2635)
//	8027E494: 80455368 (lit_2636)
//	8027E4A0: 80455358 (lit_2632)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPAEmitterManager::calcYBBCam() {
    nofralloc
#include "asm/JSystem/JParticle/JPAEmitterManager/calcYBBCam__17JPAEmitterManagerFv.s"
}
#pragma pop

/* 8027E51C-8027E54C 0030+00 s=1 e=0 z=0  None .text      __ct__25JSUList<14JPABaseEmitter>Fv */
//	8027E530: 802DBF14 (initiate__10JSUPtrListFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JSUList__template1::JSUList__template1() {
    nofralloc
#include "asm/JSystem/JParticle/JPAEmitterManager/func_8027E51C.s"
}
#pragma pop

/* 8027E54C-8027E588 003C+00 s=1 e=0 z=0  None .text      __dt__26JPANode<15JPABaseParticle>Fv */
//	8027E56C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JPANode__template0::~JPANode__template0() {
    nofralloc
#include "asm/JSystem/JParticle/JPAEmitterManager/func_8027E54C.s"
}
#pragma pop

/* 8027E588-8027E598 0010+00 s=1 e=0 z=0  None .text      __ct__26JPANode<15JPABaseParticle>Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JPANode__template0::JPANode__template0() {
    nofralloc
#include "asm/JSystem/JParticle/JPAEmitterManager/func_8027E588.s"
}
#pragma pop

/* 8027E598-8027E5EC 0054+00 s=1 e=0 z=0  None .text      __dt__25JSUList<14JPABaseEmitter>Fv */
//	8027E5BC: 802DBEAC (__dt__10JSUPtrListFv)
//	8027E5CC: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JSUList__template1::~JSUList__template1() {
    nofralloc
#include "asm/JSystem/JParticle/JPAEmitterManager/func_8027E598.s"
}
#pragma pop

/* 8027E5EC-8027E64C 0060+00 s=1 e=0 z=0  None .text      __dt__14JPABaseEmitterFv */
//	8027E61C: 802DBE14 (__dt__10JSUPtrLinkFv)
//	8027E62C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JPABaseEmitter::~JPABaseEmitter() {
    nofralloc
#include "asm/JSystem/JParticle/JPAEmitterManager/__dt__14JPABaseEmitterFv.s"
}
#pragma pop

/* 8027E64C-8027E6A4 0058+00 s=1 e=0 z=0  None .text      __ct__14JPABaseEmitterFv */
//	8027E668: 802DBDFC (__ct__10JSUPtrLinkFPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JPABaseEmitter::JPABaseEmitter() {
    nofralloc
#include "asm/JSystem/JParticle/JPAEmitterManager/__ct__14JPABaseEmitterFv.s"
}
#pragma pop
