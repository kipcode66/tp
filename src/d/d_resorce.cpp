//
// Generated By: dol2asm
// Translation Unit: d/d_resorce
//

#include "d/d_resorce.h"
#include "JSystem/J3DGraphAnimator/J3DMaterialAnm.h"
#include "JSystem/J3DGraphBase/J3DMaterial.h"
#include "JSystem/J3DGraphBase/J3DTevs.h"
#include "JSystem/J3DGraphBase/J3DTexture.h"
#include "JSystem/J3DGraphLoader/J3DAnmLoader.h"
#include "JSystem/J3DGraphLoader/J3DClusterLoader.h"
#include "JSystem/J3DGraphLoader/J3DModelLoader.h"
#include "JSystem/JKernel/JKRSolidHeap.h"
#include "d/com/d_com_inf_game.h"
#include "dol2asm.h"
#include "dolphin/mtx/mtx.h"
#include "dolphin/os/OSCache.h"
#include "dolphin/types.h"

//
// Types:
//

struct mDoMtx_stack_c {
    static u8 now[48];
};

struct dBgWKCol {
    /* 8007E7D0 */ void initKCollision(void*);
};

//
// Forward References:
//

extern "C" void __ct__11dRes_info_cFv();
extern "C" void __dt__11dRes_info_cFv();
extern "C" void set__11dRes_info_cFPCcPCcUcP7JKRHeap();
extern "C" static void setAlpha__FP16J3DMaterialTable();
extern "C" static void setIndirectTex__FP12J3DModelData();
extern "C" static void setAlpha__FP12J3DModelData();
extern "C" static void addWarpMaterial__FP12J3DModelData();
extern "C" void __ct__11J3DTevStageFRC15J3DTevStageInfo();
extern "C" void setTexMtx__14J3DTexGenBlockFUlP9J3DTexMtx();
extern "C" void onWarpMaterial__11dRes_info_cFP12J3DModelData();
extern "C" void offWarpMaterial__11dRes_info_cFP12J3DModelData();
extern "C" void setWarpSRT__11dRes_info_cFP12J3DModelDataRC4cXyzff();
extern "C" void loaderBasicBmd__11dRes_info_cFUlPv();
extern "C" void __dt__15J3DTevKColorAnmFv();
extern "C" void __ct__15J3DTevKColorAnmFv();
extern "C" void __dt__14J3DTevColorAnmFv();
extern "C" void __ct__14J3DTevColorAnmFv();
extern "C" void __dt__11J3DTexNoAnmFv();
extern "C" void __ct__11J3DTexNoAnmFv();
extern "C" void __dt__12J3DTexMtxAnmFv();
extern "C" void __ct__12J3DTexMtxAnmFv();
extern "C" void __dt__14J3DMatColorAnmFv();
extern "C" void __ct__14J3DMatColorAnmFv();
extern "C" void loadResource__11dRes_info_cFv();
extern "C" void __dt__18J3DAnmTransformKeyFv();
extern "C" void __dt__15J3DAnmTransformFv();
extern "C" void deleteArchiveRes__11dRes_info_cFv();
extern "C" static void getArcHeader__FP10JKRArchive();
extern "C" void setRes__11dRes_info_cFP10JKRArchiveP7JKRHeap();
extern "C" void setRes__11dRes_info_cFv();
extern "C" static void myGetMemBlockSize__FPv();
extern "C" static void myGetMemBlockSize0__FPv();
extern "C" void dump_long__11dRes_info_cFP11dRes_info_ci();
extern "C" void dump__11dRes_info_cFP11dRes_info_ci();
extern "C" void __dt__14dRes_control_cFv();
extern "C" void setRes__14dRes_control_cFPCcP11dRes_info_ciPCcUcP7JKRHeap();
extern "C" void syncRes__14dRes_control_cFPCcP11dRes_info_ci();
extern "C" void deleteRes__14dRes_control_cFPCcP11dRes_info_ci();
extern "C" void getResInfo__14dRes_control_cFPCcP11dRes_info_ci();
extern "C" void newResInfo__14dRes_control_cFP11dRes_info_ci();
extern "C" void getResInfoLoaded__14dRes_control_cFPCcP11dRes_info_ci();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void getIDRes__14dRes_control_cFPCcUsP11dRes_info_ci();
extern "C" void syncAllRes__14dRes_control_cFP11dRes_info_ci();
extern "C" void setObjectRes__14dRes_control_cFPCcPvUlP7JKRHeap();
extern "C" void setStageRes__14dRes_control_cFPCcP7JKRHeap();
extern "C" void dump__14dRes_control_cFv();
extern "C" void getObjectResName2Index__14dRes_control_cFPCcPCc();
extern "C" void __dt__10J3DAnmBaseFv();
extern "C" bool getKind__15J3DAnmTransformCFv();
extern "C" void __dt__18mDoExt_transAnmBasFv();
extern "C" s32 getKind__18J3DAnmTransformKeyCFv();
extern "C" void getTransform__18J3DAnmTransformKeyCFUsP16J3DTransformInfo();
extern "C" void calc__11J3DTexNoAnmCFPUs();
extern "C" extern char const* const d_d_resorce__stringBase0;
extern "C" void DCStoreRangeNoSync(void*, u32);

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void setTevStageInfo__11J3DTevStageFRC15J3DTevStageInfo();
extern "C" void mDoExt_getGameHeap__Fv();
extern "C" void mDoExt_createSolidHeapToCurrent__FUlP7JKRHeapUl();
extern "C" void mDoExt_createSolidHeapFromGameToCurrent__FUlUl();
extern "C" void mDoExt_adjustSolidHeap__FP12JKRSolidHeap();
extern "C" void mDoExt_destroySolidHeap__FP12JKRSolidHeap();
extern "C" void mDoExt_restoreCurrentHeap__Fv();
extern "C" void mDoExt_resIDToIndex__FP10JKRArchiveUs();
extern "C" void create__24mDoDvdThd_mountArchive_cFPCcUcP7JKRHeap();
extern "C" void ConvDzb__4cBgSFPv();
extern "C" void initKCollision__8dBgWKColFPv();
extern "C" void getSize__7JKRHeapFPvP7JKRHeap();
extern "C" void findFromRoot__7JKRHeapFPv();
extern "C" void* __nw__FUl();
extern "C" void* __nwa__FUl();
extern "C" void __dl__FPv();
extern "C" void getIdxResource__10JKRArchiveFUl();
extern "C" void getFileAttribute__10JKRArchiveCFUl();
extern "C" void findIdxResource__10JKRArchiveCFUl();
extern "C" void findNameResource__10JKRArchiveCFPCc();
extern "C" void __ct__13JKRMemArchiveFPvUl15JKRMemBreakFlag();
extern "C" void getName__10JUTNameTabCFUs();
extern "C" void JUTReportConsole_f(const char*, ...);
extern "C" void addResTIMG__10J3DTextureFUsPC7ResTIMG();
extern "C" void addTexMtxIndexInDL__8J3DShapeF7_GXAttrUl();
extern "C" void addTexMtxIndexInVcd__8J3DShapeF7_GXAttr();
extern "C" void __as__13J3DTexMtxInfoFRC13J3DTexMtxInfo();
extern "C" void newSharedDisplayList__12J3DModelDataFUl();
extern "C" void makeSharedDL__12J3DModelDataFv();
extern "C" void simpleCalcMaterial__12J3DModelDataFUsPA4_f();
extern "C" void __ct__15J3DAnmTransformFsPfPsPf();
extern "C" void calcTransform__18J3DAnmTransformKeyCFfUsP16J3DTransformInfo();
extern "C" void getTexNo__16J3DAnmTexPatternCFUsPUs();
extern "C" void initialize__14J3DMaterialAnmFv();
extern "C" void load__24J3DClusterLoaderDataBaseFPCv();
extern "C" void load__22J3DModelLoaderDataBaseFPCvUl();
extern "C" void load__20J3DAnmLoaderDataBaseFPCv24J3DAnmLoaderDataBaseFlag();
extern "C" void setResource__20J3DAnmLoaderDataBaseFP10J3DAnmBasePCv();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void _savegpr_20();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_20();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void memcmp();
extern "C" extern void* __vt__14J3DMaterialAnm[4];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_env_light[4880];
extern "C" u8 mFrameBufferTimg__13mDoGph_gInf_c[4];
extern "C" u8 mZbufferTimg__13mDoGph_gInf_c[4];
extern "C" u8 sCurrentHeap__7JKRHeap[4];
extern "C" extern u8 j3dDefaultTevSwapMode[4];

//
// Declarations:
//

/* 8003A260-8003A280 034BA0 0020+00 0/0 1/1 0/0 .text            __ct__11dRes_info_cFv */
dRes_info_c::dRes_info_c() {
    mCount = 0;
    mDMCommand = NULL;
    mArchive = NULL;
    heap = NULL;
    mDataHeap = NULL;
    mRes = NULL;
}

/* 8003A280-8003A348 034BC0 00C8+00 3/3 1/1 0/0 .text            __dt__11dRes_info_cFv */
dRes_info_c::~dRes_info_c() {
    if (mDMCommand != NULL) {
        delete mDMCommand;
        mDMCommand = NULL;
    } else if (mArchive != NULL) {
        deleteArchiveRes();
        if (mDataHeap != NULL) {
            mDoExt_destroySolidHeap(mDataHeap);
            mDataHeap = NULL;
            mArchive->unmount();
        }
        mRes = NULL;
        mArchive = NULL;
    }
}

/* 8003A348-8003A3F0 034C88 00A8+00 1/1 0/0 0/0 .text set__11dRes_info_cFPCcPCcUcP7JKRHeap */
int dRes_info_c::set(char const* pArcName, char const* pArcPath, u8 param_2, JKRHeap* pHeap) {
    char path[40];

    if (*pArcPath != NULL) {
        snprintf(path, 40, "%s%s.arc", pArcPath, pArcName);
        mDMCommand = mDoDvdThd_mountArchive_c::create(path, param_2, pHeap);

        if (mDMCommand == NULL) {
            return false;
        }
    }
    strncpy(mArchiveName, pArcName, 10);
    return true;
}

/* 8003A3F0-8003A490 034D30 00A0+00 1/1 0/0 0/0 .text            setAlpha__FP16J3DMaterialTable */
static void setAlpha(J3DMaterialTable* pMatTable) {
    for (u16 i = 0; i < pMatTable->getMaterialNum(); i++) {
        J3DMaterial* mat = pMatTable->getMaterialNodePointer(i);
        J3DTevBlock* tevBlock = mat->getTevBlock();

        if (tevBlock != NULL) {
            _GXColorS10* tevColor = tevBlock->getTevColor(3);
            if (tevColor != NULL) {
                u8 tevStageNum = tevBlock->getTevStageNum();
                tevColor->a = tevStageNum;
            }
        }
    }
}

/* ############################################################################################## */
/* 803798B8-803798B8 005F18 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_803798C1 = "fbtex_dummy";
SECTION_DEAD static char const* const stringBase_803798CD = "dummy";
SECTION_DEAD static char const* const stringBase_803798D3 = "Zbuffer";
#pragma pop

/* 8003A490-8003A81C 034DD0 038C+00 1/1 0/0 0/0 .text            setIndirectTex__FP12J3DModelData */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void setIndirectTex(J3DModelData* param_0) {
    nofralloc
#include "asm/d/d_resorce/setIndirectTex__FP12J3DModelData.s"
}
#pragma pop

/* 8003A81C-8003A840 03515C 0024+00 1/1 0/0 0/0 .text            setAlpha__FP12J3DModelData */
static void setAlpha(J3DModelData* pModelData) {
    setAlpha(&pModelData->getMaterialTable());
}

/* ############################################################################################## */
/* 80379840-803798A4 005EA0 0064+00 2/2 0/0 0/0 .rodata          l_texMtxInfo */
SECTION_RODATA static u8 const l_texMtxInfo[100] = {
    0x00, 0x08, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x3D, 0xCC, 0xCC, 0xCD, 0x3D, 0xCC, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80379840, &l_texMtxInfo);

/* 803798A4-803798B8 005F04 0014+00 1/1 0/0 0/0 .rodata          l_tevStageInfo$3774 */
SECTION_RODATA static u8 const l_tevStageInfo[20] = {
    0x05, 0x0F, 0x08, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x07, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x803798A4, &l_tevStageInfo);

/* 803798B8-803798B8 005F18 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_803798DB = "Always";
#pragma pop

/* 80450628-8045062C 0000A8 0004+00 1/1 0/0 0/0 .sdata           l_texCoordInfo$3772 */
SECTION_SDATA static u8 l_texCoordInfo[4] = {
    0x00,
    0x00,
    0x27,
    0x00,
};

/* 8045062C-80450630 0000AC 0004+00 1/1 0/0 0/0 .sdata           l_tevOrderInfo$3773 */
SECTION_SDATA static u8 l_tevOrderInfo[4] = {
    0x00,
    0x03,
    0xFF,
    0x00,
};

/* 80451DF0-80451DF8 0003F0 0008+00 1/1 0/0 0/0 .sdata2          l_alphaCompInfo$3775 */
SECTION_SDATA2 static u8 l_alphaCompInfo[8] = {
    0x04, 0x80, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00,
};

/* 8003A840-8003AACC 035180 028C+00 1/1 0/0 0/0 .text            addWarpMaterial__FP12J3DModelData
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void addWarpMaterial(J3DModelData* param_0) {
    nofralloc
#include "asm/d/d_resorce/addWarpMaterial__FP12J3DModelData.s"
}
#pragma pop

/* 8003AACC-8003AB2C 03540C 0060+00 1/1 2/2 0/0 .text __ct__11J3DTevStageFRC15J3DTevStageInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DTevStage::J3DTevStage(J3DTevStageInfo const& param_0) {
    nofralloc
#include "asm/d/d_resorce/__ct__11J3DTevStageFRC15J3DTevStageInfo.s"
}
#pragma pop

/* 8003AB2C-8003AB30 03546C 0004+00 0/0 2/0 0/0 .text setTexMtx__14J3DTexGenBlockFUlP9J3DTexMtx */
void J3DTexGenBlock::setTexMtx(u32 param_0, J3DTexMtx* param_1) {
    /* empty function */
}

/* 8003AB30-8003AC1C 035470 00EC+00 0/0 2/1 0/0 .text
 * onWarpMaterial__11dRes_info_cFP12J3DModelData                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dRes_info_c::onWarpMaterial(J3DModelData* param_0) {
    nofralloc
#include "asm/d/d_resorce/onWarpMaterial__11dRes_info_cFP12J3DModelData.s"
}
#pragma pop

/* 8003AC1C-8003AD08 03555C 00EC+00 0/0 2/1 0/0 .text
 * offWarpMaterial__11dRes_info_cFP12J3DModelData               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dRes_info_c::offWarpMaterial(J3DModelData* param_0) {
    nofralloc
#include "asm/d/d_resorce/offWarpMaterial__11dRes_info_cFP12J3DModelData.s"
}
#pragma pop

/* 8003AD08-8003AE14 035648 010C+00 0/0 1/1 0/0 .text
 * setWarpSRT__11dRes_info_cFP12J3DModelDataRC4cXyzff           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dRes_info_c::setWarpSRT(J3DModelData* param_0, cXyz const& param_1, f32 param_2,
                                 f32 param_3) {
    nofralloc
#include "asm/d/d_resorce/setWarpSRT__11dRes_info_cFP12J3DModelDataRC4cXyzff.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A7C18-803A7C38 -00001 0020+00 1/1 0/0 0/0 .data            @4017 */
SECTION_DATA static void* lit_4017[8] = {
    (void*)(((char*)loaderBasicBmd__11dRes_info_cFUlPv) + 0x180),
    (void*)(((char*)loaderBasicBmd__11dRes_info_cFUlPv) + 0x130),
    (void*)(((char*)loaderBasicBmd__11dRes_info_cFUlPv) + 0x13C),
    (void*)(((char*)loaderBasicBmd__11dRes_info_cFUlPv) + 0x148),
    (void*)(((char*)loaderBasicBmd__11dRes_info_cFUlPv) + 0x154),
    (void*)(((char*)loaderBasicBmd__11dRes_info_cFUlPv) + 0x160),
    (void*)(((char*)loaderBasicBmd__11dRes_info_cFUlPv) + 0x16C),
    (void*)(((char*)loaderBasicBmd__11dRes_info_cFUlPv) + 0x178),
};

/* 8003AE14-8003B150 035754 033C+00 2/1 1/1 0/0 .text            loaderBasicBmd__11dRes_info_cFUlPv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dRes_info_c::loaderBasicBmd(u32 param_0, void* param_1) {
    nofralloc
#include "asm/d/d_resorce/loaderBasicBmd__11dRes_info_cFUlPv.s"
}
#pragma pop

/* 8003B150-8003B18C 035A90 003C+00 2/2 8/8 0/0 .text            __dt__15J3DTevKColorAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DTevKColorAnm::~J3DTevKColorAnm() {
    nofralloc
#include "asm/d/d_resorce/__dt__15J3DTevKColorAnmFv.s"
}
#pragma pop

/* 8003B18C-8003B1A4 035ACC 0018+00 2/2 3/3 0/0 .text            __ct__15J3DTevKColorAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DTevKColorAnm::J3DTevKColorAnm() {
    nofralloc
#include "asm/d/d_resorce/__ct__15J3DTevKColorAnmFv.s"
}
#pragma pop

/* 8003B1A4-8003B1E0 035AE4 003C+00 2/2 8/8 0/0 .text            __dt__14J3DTevColorAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DTevColorAnm::~J3DTevColorAnm() {
    nofralloc
#include "asm/d/d_resorce/__dt__14J3DTevColorAnmFv.s"
}
#pragma pop

/* 8003B1E0-8003B1F8 035B20 0018+00 2/2 3/3 0/0 .text            __ct__14J3DTevColorAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DTevColorAnm::J3DTevColorAnm() {
    nofralloc
#include "asm/d/d_resorce/__ct__14J3DTevColorAnmFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A7C38-803A7C48 004D58 0010+00 4/4 22/22 0/0 .data            __vt__10J3DAnmBase */
SECTION_DATA extern void* __vt__10J3DAnmBase[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10J3DAnmBaseFv,
    (void*)NULL,
};

/* 803A7C48-803A7C5C 004D68 0014+00 3/3 3/3 0/0 .data            __vt__15J3DAnmTransform */
SECTION_DATA extern void* __vt__15J3DAnmTransform[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15J3DAnmTransformFv,
    (void*)getKind__15J3DAnmTransformCFv,
    (void*)NULL,
};

/* 803A7C5C-803A7C70 004D7C 0014+00 2/2 1/1 0/0 .data            __vt__18mDoExt_transAnmBas */
SECTION_DATA extern void* __vt__18mDoExt_transAnmBas[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18mDoExt_transAnmBasFv,
    (void*)getKind__18J3DAnmTransformKeyCFv,
    (void*)getTransform__18J3DAnmTransformKeyCFUsP16J3DTransformInfo,
};

/* 803A7C70-803A7C84 004D90 0014+00 3/3 2/2 0/0 .data            __vt__18J3DAnmTransformKey */
SECTION_DATA extern void* __vt__18J3DAnmTransformKey[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18J3DAnmTransformKeyFv,
    (void*)getKind__18J3DAnmTransformKeyCFv,
    (void*)getTransform__18J3DAnmTransformKeyCFUsP16J3DTransformInfo,
};

/* 803A7C84-803A7C90 004DA4 000C+00 2/2 1/1 0/0 .data            __vt__11J3DTexNoAnm */
SECTION_DATA extern void* __vt__11J3DTexNoAnm[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)calc__11J3DTexNoAnmCFPUs,
};

/* 8003B1F8-8003B240 035B38 0048+00 2/2 8/8 0/0 .text            __dt__11J3DTexNoAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DTexNoAnm::~J3DTexNoAnm() {
    nofralloc
#include "asm/d/d_resorce/__dt__11J3DTexNoAnmFv.s"
}
#pragma pop

/* 8003B240-8003B264 035B80 0024+00 2/2 3/3 0/0 .text            __ct__11J3DTexNoAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DTexNoAnm::J3DTexNoAnm() {
    nofralloc
#include "asm/d/d_resorce/__ct__11J3DTexNoAnmFv.s"
}
#pragma pop

/* 8003B264-8003B2A0 035BA4 003C+00 2/2 8/8 0/0 .text            __dt__12J3DTexMtxAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DTexMtxAnm::~J3DTexMtxAnm() {
    nofralloc
#include "asm/d/d_resorce/__dt__12J3DTexMtxAnmFv.s"
}
#pragma pop

/* 8003B2A0-8003B2B8 035BE0 0018+00 2/2 3/3 0/0 .text            __ct__12J3DTexMtxAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DTexMtxAnm::J3DTexMtxAnm() {
    nofralloc
#include "asm/d/d_resorce/__ct__12J3DTexMtxAnmFv.s"
}
#pragma pop

/* 8003B2B8-8003B2F4 035BF8 003C+00 2/2 8/8 0/0 .text            __dt__14J3DMatColorAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DMatColorAnm::~J3DMatColorAnm() {
    nofralloc
#include "asm/d/d_resorce/__dt__14J3DMatColorAnmFv.s"
}
#pragma pop

/* 8003B2F4-8003B30C 035C34 0018+00 2/2 3/3 0/0 .text            __ct__14J3DMatColorAnmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DMatColorAnm::J3DMatColorAnm() {
    nofralloc
#include "asm/d/d_resorce/__ct__14J3DMatColorAnmFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803798B8-803798B8 005F18 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_803798E2 =
    "<%s.arc> setRes: res pointer buffer nothing !!\n";
SECTION_DEAD static char const* const stringBase_80379912 = "<%s> res == NULL !!\n";
#pragma pop

/* 8003B30C-8003B8D0 035C4C 05C4+00 2/2 0/0 0/0 .text            loadResource__11dRes_info_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int dRes_info_c::loadResource() {
    nofralloc
#include "asm/d/d_resorce/loadResource__11dRes_info_cFv.s"
}
#pragma pop

/* 8003B8D0-8003B93C 036210 006C+00 1/0 0/0 0/0 .text            __dt__18J3DAnmTransformKeyFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __dt__18J3DAnmTransformKeyFv() {
    // asm J3DAnmTransformKey::~J3DAnmTransformKey() {
    nofralloc
#include "asm/d/d_resorce/__dt__18J3DAnmTransformKeyFv.s"
}
#pragma pop

/* 8003B93C-8003B998 03627C 005C+00 1/0 0/0 0/0 .text            __dt__15J3DAnmTransformFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __dt__15J3DAnmTransformFv() {
    // asm J3DAnmTransform::~J3DAnmTransform() {
    nofralloc
#include "asm/d/d_resorce/__dt__15J3DAnmTransformFv.s"
}
#pragma pop

/* 8003B998-8003BA9C 0362D8 0104+00 1/1 0/0 0/0 .text            deleteArchiveRes__11dRes_info_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dRes_info_c::deleteArchiveRes() {
    nofralloc
#include "asm/d/d_resorce/deleteArchiveRes__11dRes_info_cFv.s"
}
#pragma pop

/* 8003BA9C-8003BAC4 0363DC 0028+00 2/2 0/0 0/0 .text            getArcHeader__FP10JKRArchive */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void* getArcHeader(JKRArchive* param_0) {
    nofralloc
#include "asm/d/d_resorce/getArcHeader__FP10JKRArchive.s"
}
#pragma pop

/* 8003BAC4-8003BAF8 036404 0034+00 1/1 0/0 0/0 .text setRes__11dRes_info_cFP10JKRArchiveP7JKRHeap
 */
int dRes_info_c::setRes(JKRArchive* pArchive, JKRHeap* pHeap) {
    mArchive = pArchive;
    heap = pHeap;
    mDataHeap = NULL;
    return loadResource() >> 0x1F;
}

/* 8003BAF8-8003BC98 036438 01A0+00 2/2 0/0 0/0 .text            setRes__11dRes_info_cFv */
int dRes_info_c::setRes() {
    if (mArchive == NULL) {
        if (mDMCommand == NULL) {
            return -1;
        }
        if ((int)mDMCommand->mIsDone == 0) {
            return 1;
        }

        mArchive = mDMCommand->getArchive();
        heap = mDMCommand->getHeap();

        delete mDMCommand;
        mDMCommand = NULL;

        if (mArchive == NULL) {
            OSReport_Error("<%s.arc> setRes: archive mount error !!\n", mArchiveName);
            return -1;
        }
        if (heap != NULL) {
            heap->lock();
            mDataHeap = mDoExt_createSolidHeapToCurrent(0, heap, 0x20);

            int rt = loadResource();
            mDoExt_restoreCurrentHeap();
            mDoExt_adjustSolidHeap(mDataHeap);
            heap->unlock();

            if (rt < 0) {
                return -1;
            }
        } else {
            mDataHeap = mDoExt_createSolidHeapFromGameToCurrent(0, 0);
            if (mDataHeap == NULL) {
                OSReport_Error("<%s.arc> mDMCommandsetRes: can't alloc memory\n", mArchiveName);
                return -1;
            }
            int rt = loadResource();
            mDoExt_restoreCurrentHeap();
            mDoExt_adjustSolidHeap(mDataHeap);

            if (rt < 0) {
                return -1;
            }
        }
        u32 heapSize = mDataHeap->getHeapSize();
        void* heapStartAddr = mDataHeap->getStartAddr();
        DCStoreRangeNoSync(heapStartAddr, heapSize);
    }
    return 0;
}

/* 8003BC98-8003BD00 0365D8 0068+00 1/1 0/0 0/0 .text            myGetMemBlockSize__FPv */
static s32 myGetMemBlockSize(void* param_0) {
    JKRHeap* heap = JKRHeap::findFromRoot(param_0);

    if (heap->getHeapType() == 'EXPH') {
        return JKRHeap::getSize(param_0, heap);
    } else {
        return -1;
    }
}

/* 8003BD00-8003BD2C 036640 002C+00 1/1 0/0 0/0 .text            myGetMemBlockSize0__FPv */
static s32 myGetMemBlockSize0(void* param_0) {
    s32 size = myGetMemBlockSize(param_0);

    if (size < 0) {
        size = 0;
    }
    return size;
}

/* ############################################################################################## */
/* 803798B8-803798B8 005F18 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8037997F = "%5.1f %5x %5.1f %5x %3d %s\n";
SECTION_DEAD static char const* const stringBase_8037999B = "dRes_info_c::dump_long %08x %d\n";
SECTION_DEAD static char const* const stringBase_803799BB =
    "No Command Archive  ArcHeader(size) SolidHeap(si"
    "ze) Resource Cnt ArchiveName\n";
SECTION_DEAD static char const* const stringBase_80379A09 =
    "%2d %08x %08x %08x(%6x) %08x(%5x) %08x %3d %s\n";
#pragma pop

/* 8003BD2C-8003BE38 03666C 010C+00 1/1 0/0 0/0 .text dump_long__11dRes_info_cFP11dRes_info_ci */
#ifdef NONMATCHING
void dRes_info_c::dump_long(dRes_info_c* param_0, int param_1) {
    void* header;
    int blockSize1;
    int blockSize2;

    JUTReportConsole_f("dRes_info_c::dump_long %08x %d\n", param_0, param_1);
    JUTReportConsole_f(
        "No Command Archive  ArcHeader(size) SolidHeap(size) Resource Cnt ArchiveName\n");

    for (int i = 0; i < param_1; i++) {
        if (getCount() != 0) {
            JKRArchive* archive = getArchive();
            header = NULL;
            blockSize1 = 0;

            if (archive != NULL) {
                header = getArcHeader(archive);
                blockSize1 = myGetMemBlockSize0(header);
            }

            JKRSolidHeap* dataHeap = mDataHeap;
            blockSize2 = 0;
            if (dataHeap != NULL) {
                blockSize2 = myGetMemBlockSize0((void*)dataHeap);
            }

            JUTReportConsole_f("%2d %08x %08x %08x(%6x) %08x(%5x) %08x %3d %s\n", i, getDMCommand(),
                               archive, header, blockSize1, &mDataHeap, blockSize2, mRes,
                               getArchiveName());
        }
        param_0++;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dRes_info_c::dump_long(dRes_info_c* param_0, int param_1) {
    nofralloc
#include "asm/d/d_resorce/dump_long__11dRes_info_cFP11dRes_info_ci.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 803798B8-803798B8 005F18 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80379A38 = "dRes_info_c::dump %08x %d\n";
SECTION_DEAD static char const* const stringBase_80379A53 =
    "No ArchiveSize(KB) SolidHeapSize(KB) Cnt Archive"
    "Name\n";
SECTION_DEAD static char const* const stringBase_80379A89 = "%2d %6.1f %6x %6.1f %6x %3d %s\n";
SECTION_DEAD static char const* const stringBase_80379AA9 =
    "----------------------------------------------\n "
    "  %6.1f %6x %6.1f %6x   Total\n\n";
#pragma pop

/* 80451DF8-80451E00 0003F8 0008+00 1/1 0/0 0/0 .sdata2          @4277 */
SECTION_SDATA2 static f64 lit_4277 = 4503601774854144.0 /* cast s32 to float */;

/* 80451E00-80451E08 000400 0004+04 1/1 0/0 0/0 .sdata2          @4333 */
SECTION_SDATA2 static f32 lit_4333[1 + 1 /* padding */] = {
    0.0009765625f,
    /* padding */
    0.0f,
};

/* 8003BE38-8003BFB0 036778 0178+00 1/1 0/0 0/0 .text            dump__11dRes_info_cFP11dRes_info_ci
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dRes_info_c::dump(dRes_info_c* param_0, int param_1) {
    nofralloc
#include "asm/d/d_resorce/dump__11dRes_info_cFP11dRes_info_ci.s"
}
#pragma pop

/* 8003BFB0-8003C078 0368F0 00C8+00 0/0 1/1 0/0 .text            __dt__14dRes_control_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dRes_control_c::~dRes_control_c() {
    nofralloc
#include "asm/d/d_resorce/__dt__14dRes_control_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803798B8-803798B8 005F18 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
// MWCC ignores mapping of some japanese characters using the
// byte 0x5C (ASCII '\'). This is why this string is hex-encoded.
SECTION_DEAD static char const* const stringBase_80379AF9 =
    "\x3C\x25\x73\x2E\x61\x72\x63\x3E\x20\x64\x52\x65\x73\x5F\x63\x6F\x6E\x74\x72\x6F\x6C\x5F\x63"
    "\x3A\x3A\x73\x65\x74\x52\x65\x73\x3A\x20\x8B\xF3\x82\xAB\x83\x8A\x83\x5C\x81\x5B\x83\x58\x8F"
    "\xEE\x95"
    "\xF1\x83\x7C\x83\x43\x83\x93\x83\x5E\x82\xAA\x82\xA0\x82\xE8\x82\xDC\x82\xB9\x82\xF1\x0A";
SECTION_DEAD static char const* const stringBase_80379B40 =
    "<%s.arc> dRes_control_c::setRes: res info set er"
    "ror !!\n";
#pragma pop

/* 8003C078-8003C160 0369B8 00E8+00 2/2 8/8 0/0 .text
 * setRes__14dRes_control_cFPCcP11dRes_info_ciPCcUcP7JKRHeap    */
// matches except resInfo destructor issues?
#ifdef NONMATCHING
int dRes_control_c::setRes(char const* arcName, dRes_info_c* pInfo, int infoSize,
                           char const* arcPath, u8 param_4, JKRHeap* pHeap) {
    dRes_info_c* resInfo = getResInfo(arcName, pInfo, infoSize);

    if (resInfo == NULL) {
        resInfo = newResInfo(pInfo, infoSize);

        if (resInfo == NULL) {
            // "<%s.arc> dRes_control_c::setRes: 空きリソース情報ポインタがありません\n"
            // "<%s.arc> dRes_control_c::setRes: There isn't a free Resource Info pointer\n"
            OSReport_Error(
                "\x3C\x25\x73\x2E\x61\x72\x63\x3E\x20\x64\x52\x65\x73\x5F\x63\x6F\x6E\x74\x72\x6F"
                "\x6C\x5F\x63\x3A\x3A\x73\x65\x74\x52\x65\x73\x3A\x20\x8B\xF3\x82\xAB\x83\x8A\x83"
                "\x5C\x81\x5B\x83\x58\x8F\xEE\x95\xF1\x83\x7C\x83\x43\x83\x93\x83\x5E\x82\xAA\x82"
                "\xA0\x82\xE8\x82\xDC\x82\xB9\x82\xF1\x0A",
                arcName);
            delete resInfo;
            return 0;
        }

        int resStatus = resInfo->set(arcName, arcPath, param_4, pHeap);
        if (resStatus == 0) {
            OSReport_Error("<%s.arc> dRes_control_c::setRes: res info set error !!\n", arcName);
            delete resInfo;
            return 0;
        }
    }
    resInfo->incCount();
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int dRes_control_c::setRes(char const* param_0, dRes_info_c* param_1, int param_2,
                               char const* param_3, u8 param_4, JKRHeap* param_5) {
    nofralloc
#include "asm/d/d_resorce/setRes__14dRes_control_cFPCcP11dRes_info_ciPCcUcP7JKRHeap.s"
}
#pragma pop
#endif

/* 8003C160-8003C194 036AA0 0034+00 0/0 10/10 1/1 .text
 * syncRes__14dRes_control_cFPCcP11dRes_info_ci                 */
int dRes_control_c::syncRes(char const* arcName, dRes_info_c* pInfo, int infoSize) {
    dRes_info_c* resInfo = getResInfo(arcName, pInfo, infoSize);

    if (resInfo == NULL) {
        return -1;
    } else {
        return resInfo->setRes();
    }
}

/* 8003C194-8003C1E4 036AD4 0050+00 1/1 7/7 0/0 .text
 * deleteRes__14dRes_control_cFPCcP11dRes_info_ci               */
#ifdef NONMATCHING
int dRes_control_c::deleteRes(char const* arcName, dRes_info_c* pInfo, int infoSize) {
    dRes_info_c* resInfo = getResInfo(arcName, pInfo, infoSize);

    if (resInfo == NULL) {
        return 0;
    } else {
        if (resInfo->decCount() == 0) {
            delete resInfo;
        }
        return 1;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int dRes_control_c::deleteRes(char const* param_0, dRes_info_c* param_1, int param_2) {
    nofralloc
#include "asm/d/d_resorce/deleteRes__14dRes_control_cFPCcP11dRes_info_ci.s"
}
#pragma pop
#endif

/* 8003C1E4-8003C260 036B24 007C+00 5/5 5/5 3/3 .text
 * getResInfo__14dRes_control_cFPCcP11dRes_info_ci              */
dRes_info_c* dRes_control_c::getResInfo(char const* pArcName, dRes_info_c* pResInfo, int infoSize) {
    for (int i = 0; i < infoSize; i++) {
        if (pResInfo->getCount() != 0) {
            if (!stricmp(pArcName, pResInfo->getArchiveName())) {
                return pResInfo;
            }
        }
        pResInfo++;
    }
    return NULL;
}

/* 8003C260-8003C288 036BA0 0028+00 1/1 0/0 0/0 .text newResInfo__14dRes_control_cFP11dRes_info_ci
 */
dRes_info_c* dRes_control_c::newResInfo(dRes_info_c* pResInfo, int infoSize) {
    for (int i = 0; i < infoSize; i++) {
        if (pResInfo->getCount() == 0) {
            return pResInfo;
        }
        pResInfo++;
    }
    return NULL;
}

/* 8003C288-8003C2EC 036BC8 0064+00 4/4 0/0 0/0 .text
 * getResInfoLoaded__14dRes_control_cFPCcP11dRes_info_ci        */
dRes_info_c* dRes_control_c::getResInfoLoaded(char const* arcName, dRes_info_c* pResInfo,
                                              int infoSize) {
    dRes_info_c* resInfo = getResInfo(arcName, pResInfo, infoSize);

    if (resInfo == NULL) {
        resInfo = NULL;
    } else if (resInfo->getArchive() == NULL) {
        OSReport_Warning("<%s.arc> getRes: res during reading !!\n", arcName);
        resInfo = NULL;
    }
    return resInfo;
}

/* ############################################################################################## */
/* 803798B8-803798B8 005F18 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80379BA0 =
    "<%s.arc> getRes: res index over !! index=%d coun"
    "t=%d\n";
#pragma pop

/* 8003C2EC-8003C37C 036C2C 0090+00 1/1 54/54 894/894 .text
 * getRes__14dRes_control_cFPCclP11dRes_info_ci                 */
// weird branching
#ifdef NONMATCHING
void* dRes_control_c::getRes(char const* arcName, s32 resIdx, dRes_info_c* pInfo, int infoSize) {
    dRes_info_c* resInfo = getResInfoLoaded(arcName, pInfo, infoSize);

    if (resInfo == NULL) {
        JKRArchive* archive = resInfo->getArchive();
        u32 fileCount = archive->countFile();

        if (resIdx >= (int)fileCount) {
            OSReport_Error("<%s.arc> getRes: res index over !! index=%d count=%d\n", arcName,
                           resIdx, fileCount);
            return NULL;
        }
    }
    return resInfo->getRes(resIdx);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void* dRes_control_c::getRes(char const* param_0, s32 param_1, dRes_info_c* param_2,
                                 int param_3) {
    nofralloc
#include "asm/d/d_resorce/getRes__14dRes_control_cFPCclP11dRes_info_ci.s"
}
#pragma pop
#endif

/* 8003C37C-8003C400 036CBC 0084+00 0/0 18/18 109/109 .text
 * getRes__14dRes_control_cFPCcPCcP11dRes_info_ci               */
// same weird branch issue
#ifdef NONMATCHING
void* dRes_control_c::getRes(char const* arcName, char const* resName, dRes_info_c* pInfo,
                             int infoSize) {
    dRes_info_c* resInfo = getResInfoLoaded(arcName, pInfo, infoSize);

    if (resInfo == NULL) {
        JKRArchive* archive = resInfo->getArchive();
        JKRArchive::SDIFileEntry* entry = archive->findNameResource(resName);

        if (entry != NULL) {
            return resInfo->getRes(entry - archive->mFiles);
        } else {
            return NULL;
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void* dRes_control_c::getRes(char const* param_0, char const* param_1, dRes_info_c* param_2,
                                 int param_3) {
    nofralloc
#include "asm/d/d_resorce/getRes__14dRes_control_cFPCcPCcP11dRes_info_ci.s"
}
#pragma pop
#endif

/* 8003C400-8003C470 036D40 0070+00 0/0 7/7 4/4 .text
 * getIDRes__14dRes_control_cFPCcUsP11dRes_info_ci              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void* dRes_control_c::getIDRes(char const* param_0, u16 param_1, dRes_info_c* param_2,
                                   int param_3) {
    nofralloc
#include "asm/d/d_resorce/getIDRes__14dRes_control_cFPCcUsP11dRes_info_ci.s"
}
#pragma pop

/* 8003C470-8003C4E4 036DB0 0074+00 0/0 3/3 0/0 .text syncAllRes__14dRes_control_cFP11dRes_info_ci
 */
int dRes_control_c::syncAllRes(dRes_info_c* pInfo, int infoSize) {
    for (int i = 0; i < infoSize; i++) {
        if (pInfo->getDMCommand() != NULL && pInfo->setRes() > 0) {
            return 1;
        }
        pInfo++;
    }
    return 0;
}

/* 8003C4E4-8003C5BC 036E24 00D8+00 1/1 0/0 0/0 .text
 * setObjectRes__14dRes_control_cFPCcPvUlP7JKRHeap              */
int dRes_control_c::setObjectRes(char const* arcName, void* i_archiveRes, u32 param_2,
                                 JKRHeap* param_3) {
    if (!setRes(arcName, &mObjectInfo[0], 0x80, "", 0, NULL)) {
        return 0;
    } else {
        JKRMemArchive* memArchive =
            new JKRMemArchive(i_archiveRes, param_2, JKRMEMBREAK_FLAG_UNKNOWN0);

        if (memArchive == NULL || !memArchive->isMounted()) {
            return 0;
        } else {
            dRes_info_c* info = getResInfo(arcName, &mObjectInfo[0], 0x80);
            int resStatus = info->setRes(memArchive, param_3);
            return resStatus == 0 ? 1 : 0;
        }
    }
}

/* 8003C5BC-8003C638 036EFC 007C+00 0/0 2/2 0/0 .text setStageRes__14dRes_control_cFPCcP7JKRHeap
 */
int dRes_control_c::setStageRes(char const* arcName, JKRHeap* pHeap) {
    char path[20];

    snprintf(path, 20, "/res/Stage/%s/", dComIfGp_getStartStageName());
    return setRes(arcName, &mStageInfo[0], 0x40, path, 1, pHeap);
}

/* 8003C638-8003C6B8 036F78 0080+00 0/0 2/2 0/0 .text            dump__14dRes_control_cFv */
void dRes_control_c::dump() {
    JUTReportConsole_f("\ndRes_control_c::dump mObjectInfo\n");
    dRes_info_c::dump(&mObjectInfo[0], ARRAY_SIZE(mObjectInfo));
    dRes_info_c::dump_long(&mObjectInfo[0], ARRAY_SIZE(mObjectInfo));

    JUTReportConsole_f("\ndRes_control_c::dump mStageInfo\n");
    dRes_info_c::dump(&mStageInfo[0], ARRAY_SIZE(mStageInfo));
    dRes_info_c::dump_long(&mStageInfo[0], ARRAY_SIZE(mStageInfo));
}

/* 8003C6B8-8003C734 036FF8 007C+00 0/0 0/0 32/32 .text
 * getObjectResName2Index__14dRes_control_cFPCcPCc              */
int dRes_control_c::getObjectResName2Index(char const* arcName, char const* param_1) {
    dRes_info_c* info = getResInfoLoaded(arcName, &mObjectInfo[0], ARRAY_SIZE(mObjectInfo));

    if (info == NULL) {
        return -1;
    } else if (param_1 == NULL) {
        return -1;
    } else {
        JKRArchive* archive = info->getArchive();
        JKRArchive::SDIFileEntry* entry = archive->findNameResource(param_1);

        if (entry != NULL) {
            return entry->file_id;
        } else {
            return -1;
        }
    }
}

/* 8003C734-8003C77C 037074 0048+00 1/0 0/0 0/0 .text            __dt__10J3DAnmBaseFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __dt__10J3DAnmBaseFv() {
    // asm J3DAnmBase::~J3DAnmBase() {
    nofralloc
#include "asm/d/d_resorce/__dt__10J3DAnmBaseFv.s"
}
#pragma pop

/* 8003C77C-8003C784 0370BC 0008+00 1/0 0/0 0/0 .text            getKind__15J3DAnmTransformCFv */
s32 J3DAnmTransform::getKind() const {
    return 0;
}

/* 8003C784-8003C800 0370C4 007C+00 1/0 0/0 0/0 .text            __dt__18mDoExt_transAnmBasFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm mDoExt_transAnmBas::~mDoExt_transAnmBas() {
extern "C" asm void __dt__18mDoExt_transAnmBasFv() {
    nofralloc
#include "asm/d/d_resorce/__dt__18mDoExt_transAnmBasFv.s"
}
#pragma pop

/* 8003C800-8003C808 037140 0008+00 2/0 0/0 0/0 .text            getKind__18J3DAnmTransformKeyCFv */
s32 J3DAnmTransformKey::getKind() const {
    return 8;
}

/* 8003C808-8003C82C 037148 0024+00 2/0 0/0 0/0 .text
 * getTransform__18J3DAnmTransformKeyCFUsP16J3DTransformInfo    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DAnmTransformKey::getTransform(u16 param_0, J3DTransformInfo* param_1) const {
    nofralloc
#include "asm/d/d_resorce/getTransform__18J3DAnmTransformKeyCFUsP16J3DTransformInfo.s"
}
#pragma pop

/* 8003C82C-8003C85C 03716C 0030+00 1/0 0/0 0/0 .text            calc__11J3DTexNoAnmCFPUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DTexNoAnm::calc(u16* param_0) const {
    nofralloc
#include "asm/d/d_resorce/calc__11J3DTexNoAnmCFPUs.s"
}
#pragma pop

/* 803798B8-803798B8 005F18 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
