//
// Generated By: dol2asm
// Translation Unit: J3DModel
//

#include "JSystem/J3DGraphAnimator/J3DModel.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct J3DVtxColorCalc {
    /* 8032E180 */ void calc(J3DModel*);
};

struct J3DVertexData {};

struct J3DVertexBuffer {
    /* 80310F78 */ void setVertexData(J3DVertexData*);
    /* 80311030 */ ~J3DVertexBuffer();
    /* 803112D0 */ void copyLocalVtxArray(u32);
    /* 80311478 */ void allocTransformedVtxPosArray();
    /* 8031152C */ void allocTransformedVtxNrmArray();
};

struct J3DShapePacket {
    /* 80312B20 */ J3DShapePacket();
    /* 80312B74 */ ~J3DShapePacket();
    /* 80312DBC */ void newDifferedDisplayList(u32);
};

struct J3DShape {
    /* 80314DA8 */ void calcNBTScale(Vec const&, f32 (*)[3][3], f32 (*)[3][3]);
};

struct J3DMaterial {
    /* 80316290 */ void countDLSize();
    /* 80316E90 */ void newSharedDisplayList(u32);
    /* 80316F24 */ void newSingleSharedDisplayList(u32);
};

struct J3DMatPacket {
    /* 80312948 */ J3DMatPacket();
    /* 803129A4 */ ~J3DMatPacket();
    /* 80312A04 */ void addShapePacket(J3DShapePacket*);
};

struct J3DJoint {
    /* 8032F254 */ void entryIn();
};

struct J3DDrawPacket {
    /* 8031280C */ void newDisplayList(u32);
    /* 80312898 */ void newSingleDisplayList(u32);
};

struct J3DDisplayListObj {
    /* 8031256C */ void single_To_Double();
};

//
// Forward References:
//

extern "C" void initialize__8J3DModelFv();
extern "C" void entryModelData__8J3DModelFP12J3DModelDataUlUl();
extern "C" void createShapePacket__8J3DModelFP12J3DModelData();
extern "C" void createMatPacket__8J3DModelFP12J3DModelDataUl();
extern "C" void newDifferedDisplayList__8J3DModelFUl();
extern "C" void lock__8J3DModelFv();
extern "C" void unlock__8J3DModelFv();
extern "C" void calcMaterial__8J3DModelFv();
extern "C" void calcDiffTexMtx__8J3DModelFv();
extern "C" void diff__8J3DModelFv();
extern "C" void setDeformData__8J3DModelFP13J3DDeformDataUl();
extern "C" void setSkinDeform__8J3DModelFP13J3DSkinDeformUl();
extern "C" void calcAnmMtx__8J3DModelFv();
extern "C" void calcWeightEnvelopeMtx__8J3DModelFv();
extern "C" void update__8J3DModelFv();
extern "C" void calc__8J3DModelFv();
extern "C" void entry__8J3DModelFv();
extern "C" void viewCalc__8J3DModelFv();
extern "C" void calcNrmMtx__8J3DModelFv();
extern "C" void calcBumpMtx__8J3DModelFv();
extern "C" void calcBBoardMtx__8J3DModelFv();
extern "C" void prepareShapePackets__8J3DModelFv();
extern "C" void __dt__8J3DModelFv();
extern "C" void __dt__12J3DMtxBufferFv();

//
// External References:
//

extern "C" void* __nw__FUl();
extern "C" void* __nwa__FUl();
extern "C" void __dl__FPv();
extern "C" void setVertexData__15J3DVertexBufferFP13J3DVertexData();
extern "C" void __dt__15J3DVertexBufferFv();
extern "C" void copyLocalVtxArray__15J3DVertexBufferFUl();
extern "C" void allocTransformedVtxPosArray__15J3DVertexBufferFv();
extern "C" void allocTransformedVtxNrmArray__15J3DVertexBufferFv();
extern "C" void single_To_Double__17J3DDisplayListObjFv();
extern "C" void newDisplayList__13J3DDrawPacketFUl();
extern "C" void newSingleDisplayList__13J3DDrawPacketFUl();
extern "C" void __ct__12J3DMatPacketFv();
extern "C" void __dt__12J3DMatPacketFv();
extern "C" void addShapePacket__12J3DMatPacketFP14J3DShapePacket();
extern "C" void __ct__14J3DShapePacketFv();
extern "C" void __dt__14J3DShapePacketFv();
extern "C" void newDifferedDisplayList__14J3DShapePacketFUl();
extern "C" void calcNBTScale__8J3DShapeFRC3VecPA3_A3_fPA3_A3_f();
extern "C" void countDLSize__11J3DMaterialFv();
extern "C" void newSharedDisplayList__11J3DMaterialFUl();
extern "C" void newSingleSharedDisplayList__11J3DMaterialFUl();
extern "C" void syncJ3DSysFlags__12J3DModelDataCFv();
extern "C" void initialize__12J3DMtxBufferFv();
extern "C" void create__12J3DMtxBufferFP12J3DModelDataUl();
extern "C" void calcWeightEnvelopeMtx__12J3DMtxBufferFv();
extern "C" void calcDrawMtx__12J3DMtxBufferFUlRC3VecRA3_A4_Cf();
extern "C" void calcNrmMtx__12J3DMtxBufferFv();
extern "C" void calcBBoardMtx__12J3DMtxBufferFv();
extern "C" void J3DCalcViewBaseMtx__FPA4_fRC3VecRA3_A4_CfPA4_f();
extern "C" void initSkinInfo__13J3DSkinDeformFP12J3DModelData();
extern "C" void initMtxIndexArray__13J3DSkinDeformFP12J3DModelData();
extern "C" void changeFastSkinDL__13J3DSkinDeformFP12J3DModelData();
extern "C" void transformVtxPosNrm__13J3DSkinDeformFP12J3DModelData();
extern "C" void deform__13J3DSkinDeformFP8J3DModel();
extern "C" void calc__15J3DVtxColorCalcFP8J3DModel();
extern "C" void offAllFlag__13J3DDeformDataFUl();
extern "C" void deform__13J3DDeformDataFP8J3DModel();
extern "C" void entryIn__8J3DJointFv();
extern "C" void DCStoreRange();
extern "C" void DCStoreRangeNoSync();
extern "C" void __construct_new_array();
extern "C" void _savegpr_23();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_23();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern u8 const j3dDefaultScale[12];
extern "C" extern u8 const j3dDefaultMtx[48];
extern "C" extern u8 j3dSys[284];

//
// Declarations:
//

/* ############################################################################################## */
/* 80456428-80456430 004A28 0004+04 1/1 0/0 0/0 .sdata2          @896 */
SECTION_SDATA2 static f32 lit_896[1 + 1 /* padding */] = {
    1.0f,
    /* padding */
    0.0f,
};

/* 80327100-80327184 321A40 0084+00 0/0 3/3 0/0 .text            initialize__8J3DModelFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModel::initialize() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModel/initialize__8J3DModelFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CED20-803CED44 02BE40 0024+00 1/1 3/3 0/0 .data            __vt__8J3DModel */
SECTION_DATA extern void* __vt__8J3DModel[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)update__8J3DModelFv,
    (void*)entry__8J3DModelFv,
    (void*)calc__8J3DModelFv,
    (void*)calcMaterial__8J3DModelFv,
    (void*)calcDiffTexMtx__8J3DModelFv,
    (void*)viewCalc__8J3DModelFv,
    (void*)__dt__8J3DModelFv,
};

/* 803CED44-803CED50 02BE64 000C+00 2/2 0/0 0/0 .data            __vt__12J3DMtxBuffer */
SECTION_DATA extern void* __vt__12J3DMtxBuffer[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DMtxBufferFv,
};

/* 80327184-80327300 321AC4 017C+00 0/0 3/3 0/0 .text
 * entryModelData__8J3DModelFP12J3DModelDataUlUl                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModel::entryModelData(J3DModelData* param_0, u32 param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModel/entryModelData__8J3DModelFP12J3DModelDataUlUl.s"
}
#pragma pop

/* 80327300-803273CC 321C40 00CC+00 1/1 0/0 0/0 .text createShapePacket__8J3DModelFP12J3DModelData
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModel::createShapePacket(J3DModelData* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModel/createShapePacket__8J3DModelFP12J3DModelData.s"
}
#pragma pop

/* 803273CC-803275FC 321D0C 0230+00 1/1 0/0 0/0 .text createMatPacket__8J3DModelFP12J3DModelDataUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModel::createMatPacket(J3DModelData* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModel/createMatPacket__8J3DModelFP12J3DModelDataUl.s"
}
#pragma pop

/* 803275FC-8032767C 321F3C 0080+00 0/0 1/1 0/0 .text newDifferedDisplayList__8J3DModelFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModel::newDifferedDisplayList(u32 param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModel/newDifferedDisplayList__8J3DModelFUl.s"
}
#pragma pop

/* 8032767C-803276B4 321FBC 0038+00 0/0 4/4 0/0 .text            lock__8J3DModelFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModel::lock() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModel/lock__8J3DModelFv.s"
}
#pragma pop

/* 803276B4-803276EC 321FF4 0038+00 0/0 2/2 0/0 .text            unlock__8J3DModelFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModel::unlock() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModel/unlock__8J3DModelFv.s"
}
#pragma pop

/* 803276EC-80327858 32202C 016C+00 1/0 0/0 0/0 .text            calcMaterial__8J3DModelFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModel::calcMaterial() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModel/calcMaterial__8J3DModelFv.s"
}
#pragma pop

/* 80327858-803279A0 322198 0148+00 1/0 0/0 0/0 .text            calcDiffTexMtx__8J3DModelFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModel::calcDiffTexMtx() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModel/calcDiffTexMtx__8J3DModelFv.s"
}
#pragma pop

/* 803279A0-80327A2C 3222E0 008C+00 0/0 2/2 0/0 .text            diff__8J3DModelFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModel::diff() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModel/diff__8J3DModelFv.s"
}
#pragma pop

/* 80327A2C-80327AA0 32236C 0074+00 0/0 1/1 2/2 .text setDeformData__8J3DModelFP13J3DDeformDataUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModel::setDeformData(J3DDeformData* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModel/setDeformData__8J3DModelFP13J3DDeformDataUl.s"
}
#pragma pop

/* 80327AA0-80327BD4 3223E0 0134+00 0/0 0/0 2/2 .text setSkinDeform__8J3DModelFP13J3DSkinDeformUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModel::setSkinDeform(J3DSkinDeform* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModel/setSkinDeform__8J3DModelFP13J3DSkinDeformUl.s"
}
#pragma pop

/* 80327BD4-80327C58 322514 0084+00 1/1 0/0 2/2 .text            calcAnmMtx__8J3DModelFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModel::calcAnmMtx() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModel/calcAnmMtx__8J3DModelFv.s"
}
#pragma pop

/* 80327C58-80327CA4 322598 004C+00 1/1 1/1 1/1 .text            calcWeightEnvelopeMtx__8J3DModelFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModel::calcWeightEnvelopeMtx() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModel/calcWeightEnvelopeMtx__8J3DModelFv.s"
}
#pragma pop

/* 80327CA4-80327CF0 3225E4 004C+00 1/0 0/0 0/0 .text            update__8J3DModelFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModel::update() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModel/update__8J3DModelFv.s"
}
#pragma pop

/* 80327CF0-80327E4C 322630 015C+00 1/0 0/0 0/0 .text            calc__8J3DModelFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModel::calc() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModel/calc__8J3DModelFv.s"
}
#pragma pop

/* 80327E4C-80327F40 32278C 00F4+00 1/0 0/0 0/0 .text            entry__8J3DModelFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModel::entry() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModel/entry__8J3DModelFv.s"
}
#pragma pop

/* 80327F40-80328190 322880 0250+00 1/0 0/0 0/0 .text            viewCalc__8J3DModelFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModel::viewCalc() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModel/viewCalc__8J3DModelFv.s"
}
#pragma pop

/* 80328190-803281B4 322AD0 0024+00 1/1 0/0 0/0 .text            calcNrmMtx__8J3DModelFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModel::calcNrmMtx() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModel/calcNrmMtx__8J3DModelFv.s"
}
#pragma pop

/* 803281B4-803282B8 322AF4 0104+00 1/1 0/0 0/0 .text            calcBumpMtx__8J3DModelFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModel::calcBumpMtx() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModel/calcBumpMtx__8J3DModelFv.s"
}
#pragma pop

/* 803282B8-803282EC 322BF8 0034+00 1/1 0/0 0/0 .text            calcBBoardMtx__8J3DModelFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModel::calcBBoardMtx() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModel/calcBBoardMtx__8J3DModelFv.s"
}
#pragma pop

/* 803282EC-80328350 322C2C 0064+00 2/2 0/0 0/0 .text            prepareShapePackets__8J3DModelFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DModel::prepareShapePackets() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModel/prepareShapePackets__8J3DModelFv.s"
}
#pragma pop

/* 80328350-803283B4 322C90 0064+00 1/0 0/0 0/0 .text            __dt__8J3DModelFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DModel::~J3DModel() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModel/__dt__8J3DModelFv.s"
}
#pragma pop

/* 803283B4-803283FC 322CF4 0048+00 1/0 0/0 0/0 .text            __dt__12J3DMtxBufferFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DMtxBuffer::~J3DMtxBuffer() {
    nofralloc
#include "asm/JSystem/J3DGraphAnimator/J3DModel/__dt__12J3DMtxBufferFv.s"
}
#pragma pop
