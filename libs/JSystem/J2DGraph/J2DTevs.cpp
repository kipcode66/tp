//
// Generated By: dol2asm
// Translation Unit: J2DTevs
//

#include "JSystem/J2DGraph/J2DTevs.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct J2DTevBlock {
    /* 802EA12C */ bool getTevSwapModeTable(u32);
    /* 802EA134 */ bool getTevStage(u32);
    /* 802EA13C */ bool getTevColor(u32);
    /* 802EA144 */ bool getTevOrder(u32);
    /* 802EA14C */ bool getTevKAlphaSel(u32);
    /* 802EA154 */ bool getTevKColorSel(u32);
    /* 802EA15C */ bool getTevKColor(u32);
    /* 802EA164 */ void getFontNo() const;
    /* 802EA170 */ void getTexNo(u32) const;
    /* 802EA17C */ bool getTevStageNum() const;
    /* 802EA184 */ bool getIndTevStage(u32);
};

struct J2DIndBlock {
    /* 802EA18C */ bool getIndTexCoordScale(u32);
    /* 802EA194 */ bool getIndTexMtx(u32);
    /* 802EA19C */ bool getIndTexOrder(u32);
    /* 802EA1A4 */ bool getIndTexStageNum() const;
};

//
// Forward References:
//

extern "C" void load__9J2DTexMtxFUl();
extern "C" void calc__9J2DTexMtxFv();
extern "C" void getTextureMtx__9J2DTexMtxFRC17J2DTextureSRTInfo3VecPA4_f();
extern "C" void getTextureMtxMaya__9J2DTexMtxFRC17J2DTextureSRTInfoPA4_f();
extern "C" void load__14J2DIndTevStageFUc();
extern "C" void load__12J2DIndTexMtxFUc();
extern "C" void load__19J2DIndTexCoordScaleFUc();
extern "C" void load__14J2DIndTexOrderFUc();
extern "C" bool getTevSwapModeTable__11J2DTevBlockFUl();
extern "C" bool getTevStage__11J2DTevBlockFUl();
extern "C" bool getTevColor__11J2DTevBlockFUl();
extern "C" bool getTevOrder__11J2DTevBlockFUl();
extern "C" bool getTevKAlphaSel__11J2DTevBlockFUl();
extern "C" bool getTevKColorSel__11J2DTevBlockFUl();
extern "C" bool getTevKColor__11J2DTevBlockFUl();
extern "C" void getFontNo__11J2DTevBlockCFv();
extern "C" void getTexNo__11J2DTevBlockCFUl();
extern "C" bool getTevStageNum__11J2DTevBlockCFv();
extern "C" bool getIndTevStage__11J2DTevBlockFUl();
extern "C" bool getIndTexCoordScale__11J2DIndBlockFUl();
extern "C" bool getIndTexMtx__11J2DIndBlockFUl();
extern "C" bool getIndTexOrder__11J2DIndBlockFUl();
extern "C" bool getIndTexStageNum__11J2DIndBlockCFv();
extern "C" extern J2DTexCoordInfo const j2dDefaultTexCoordInfo[8];
extern "C" extern J2DTexMtxInfo const j2dDefaultTexMtxInfo;
extern "C" extern J2DIndTexMtxInfo const j2dDefaultIndTexMtxInfo;
extern "C" extern J2DTevStageInfo const j2dDefaultTevStageInfo;
extern "C" extern u8 const j2dDefaultIndTevStageInfo[12];
extern "C" extern u32 j2dDefaultColInfo;
extern "C" extern u32 j2dDefaultTevOrderInfoNull;
extern "C" extern u16 j2dDefaultIndTexOrderNull[1 + 1 /* padding */];
extern "C" extern u8 j2dDefaultTevColor[8];
extern "C" extern u8 j2dDefaultIndTexCoordScaleInfo[2 + 2 /* padding */];
extern "C" extern u32 j2dDefaultTevKColor;
extern "C" extern u8 j2dDefaultTevSwapMode[4];
extern "C" extern u32 j2dDefaultTevSwapModeTable;
extern "C" extern u32 j2dDefaultBlendInfo;
extern "C" extern u8 data_804561A4[4];
extern "C" extern u32 j2dDefaultColorChanInfo;
extern "C" extern u16 data_804561AC;
extern "C" extern u16 j2dDefaultAlphaCmp;

//
// External References:
//

extern "C" void GXSetTevIndirect();
extern "C" void GXSetIndTexMtx();
extern "C" void GXSetIndTexCoordScale();
extern "C" void GXSetIndTexOrder();
extern "C" void GXLoadTexMtxImm();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" void cos();
extern "C" void sin();

//
// Declarations:
//

/* 802E9C90-802E9CC4 2E45D0 0034+00 0/0 1/1 0/0 .text            load__9J2DTexMtxFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTexMtx::load(u32 param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTevs/load__9J2DTexMtxFUl.s"
}
#pragma pop

/* 802E9CC4-802E9D2C 2E4604 0068+00 0/0 2/2 0/0 .text            calc__9J2DTexMtxFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTexMtx::calc() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTevs/calc__9J2DTexMtxFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456168-8045616C 004768 0004+00 2/2 0/0 0/0 .sdata2          @1488 */
SECTION_SDATA2 static f32 lit_1488 = 3.1415927410125732f;

/* 8045616C-80456170 00476C 0004+00 2/2 0/0 0/0 .sdata2          @1489 */
SECTION_SDATA2 static f32 lit_1489 = 180.0f;

/* 80456170-80456174 004770 0004+00 2/2 0/0 0/0 .sdata2          @1490 */
SECTION_SDATA2 static u8 lit_1490[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80456174-80456178 004774 0004+00 2/2 0/0 0/0 .sdata2          @1491 */
SECTION_SDATA2 static f32 lit_1491 = 1.0f;

/* 802E9D2C-802E9EBC 2E466C 0190+00 1/1 0/0 0/0 .text
 * getTextureMtx__9J2DTexMtxFRC17J2DTextureSRTInfo3VecPA4_f     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTexMtx::getTextureMtx(J2DTextureSRTInfo const& param_0, Vec param_1,
                                  f32 (*param_2)[4]) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTevs/getTextureMtx__9J2DTexMtxFRC17J2DTextureSRTInfo3VecPA4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456178-8045617C 004778 0004+00 1/1 0/0 0/0 .sdata2          @1507 */
SECTION_SDATA2 static f32 lit_1507 = 0.5f;

/* 802E9EBC-802EA044 2E47FC 0188+00 1/1 0/0 0/0 .text
 * getTextureMtxMaya__9J2DTexMtxFRC17J2DTextureSRTInfoPA4_f     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTexMtx::getTextureMtxMaya(J2DTextureSRTInfo const& param_0, f32 (*param_1)[4]) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTevs/getTextureMtxMaya__9J2DTexMtxFRC17J2DTextureSRTInfoPA4_f.s"
}
#pragma pop

/* 802EA044-802EA098 2E4984 0054+00 0/0 5/5 0/0 .text            load__14J2DIndTevStageFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DIndTevStage::load(u8 param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTevs/load__14J2DIndTevStageFUc.s"
}
#pragma pop

/* 802EA098-802EA0CC 2E49D8 0034+00 0/0 1/1 0/0 .text            load__12J2DIndTexMtxFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DIndTexMtx::load(u8 param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTevs/load__12J2DIndTexMtxFUc.s"
}
#pragma pop

/* 802EA0CC-802EA0FC 2E4A0C 0030+00 0/0 1/1 0/0 .text            load__19J2DIndTexCoordScaleFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DIndTexCoordScale::load(u8 param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTevs/load__19J2DIndTexCoordScaleFUc.s"
}
#pragma pop

/* 802EA0FC-802EA12C 2E4A3C 0030+00 0/0 1/1 0/0 .text            load__14J2DIndTexOrderFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DIndTexOrder::load(u8 param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTevs/load__14J2DIndTexOrderFUc.s"
}
#pragma pop

/* 802EA12C-802EA134 2E4A6C 0008+00 0/0 1/0 0/0 .text getTevSwapModeTable__11J2DTevBlockFUl */
bool J2DTevBlock::getTevSwapModeTable(u32 param_0) {
    return false;
}

/* 802EA134-802EA13C 2E4A74 0008+00 0/0 1/0 0/0 .text            getTevStage__11J2DTevBlockFUl */
bool J2DTevBlock::getTevStage(u32 param_0) {
    return false;
}

/* 802EA13C-802EA144 2E4A7C 0008+00 0/0 1/0 0/0 .text            getTevColor__11J2DTevBlockFUl */
bool J2DTevBlock::getTevColor(u32 param_0) {
    return false;
}

/* 802EA144-802EA14C 2E4A84 0008+00 0/0 1/0 0/0 .text            getTevOrder__11J2DTevBlockFUl */
bool J2DTevBlock::getTevOrder(u32 param_0) {
    return false;
}

/* 802EA14C-802EA154 2E4A8C 0008+00 0/0 1/0 0/0 .text            getTevKAlphaSel__11J2DTevBlockFUl
 */
bool J2DTevBlock::getTevKAlphaSel(u32 param_0) {
    return false;
}

/* 802EA154-802EA15C 2E4A94 0008+00 0/0 1/0 0/0 .text            getTevKColorSel__11J2DTevBlockFUl
 */
bool J2DTevBlock::getTevKColorSel(u32 param_0) {
    return false;
}

/* 802EA15C-802EA164 2E4A9C 0008+00 0/0 1/0 0/0 .text            getTevKColor__11J2DTevBlockFUl */
bool J2DTevBlock::getTevKColor(u32 param_0) {
    return false;
}

/* 802EA164-802EA170 2E4AA4 000C+00 0/0 1/0 0/0 .text            getFontNo__11J2DTevBlockCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTevBlock::getFontNo() const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTevs/getFontNo__11J2DTevBlockCFv.s"
}
#pragma pop

/* 802EA170-802EA17C 2E4AB0 000C+00 0/0 1/0 0/0 .text            getTexNo__11J2DTevBlockCFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTevBlock::getTexNo(u32 param_0) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DTevs/getTexNo__11J2DTevBlockCFUl.s"
}
#pragma pop

/* 802EA17C-802EA184 2E4ABC 0008+00 0/0 1/0 0/0 .text            getTevStageNum__11J2DTevBlockCFv */
bool J2DTevBlock::getTevStageNum() const {
    return true;
}

/* 802EA184-802EA18C 2E4AC4 0008+00 0/0 1/0 0/0 .text            getIndTevStage__11J2DTevBlockFUl */
bool J2DTevBlock::getIndTevStage(u32 param_0) {
    return false;
}

/* 802EA18C-802EA194 2E4ACC 0008+00 0/0 2/0 0/0 .text getIndTexCoordScale__11J2DIndBlockFUl */
bool J2DIndBlock::getIndTexCoordScale(u32 param_0) {
    return false;
}

/* 802EA194-802EA19C 2E4AD4 0008+00 0/0 2/0 0/0 .text            getIndTexMtx__11J2DIndBlockFUl */
bool J2DIndBlock::getIndTexMtx(u32 param_0) {
    return false;
}

/* 802EA19C-802EA1A4 2E4ADC 0008+00 0/0 2/0 0/0 .text            getIndTexOrder__11J2DIndBlockFUl */
bool J2DIndBlock::getIndTexOrder(u32 param_0) {
    return false;
}

/* 802EA1A4-802EA1AC 2E4AE4 0008+00 0/0 2/0 0/0 .text            getIndTexStageNum__11J2DIndBlockCFv
 */
bool J2DIndBlock::getIndTexStageNum() const {
    return false;
}

/* ############################################################################################## */
/* 803A1B80-803A1BA0 02E1E0 0020+00 0/0 3/3 0/0 .rodata          j2dDefaultTexCoordInfo */
extern J2DTexCoordInfo const j2dDefaultTexCoordInfo[8] = {
    {1, 4, 60, 0}, {1, 5, 60, 0}, {1, 6, 60, 0},  {1, 7, 60, 0},
    {1, 8, 60, 0}, {1, 9, 60, 0}, {1, 10, 60, 0}, {1, 11, 60, 0},
};

/* 803A1BA0-803A1BC4 02E200 0024+00 0/0 3/3 0/0 .rodata          j2dDefaultTexMtxInfo */
extern J2DTexMtxInfo const j2dDefaultTexMtxInfo = {1,    1,    255,  255,  0.5f, 0.5f,
                                                   0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f};

/* 803A1BC4-803A1BE0 02E224 001C+00 0/0 3/3 0/0 .rodata          j2dDefaultIndTexMtxInfo */
extern J2DIndTexMtxInfo const j2dDefaultIndTexMtxInfo = {{0.5f, 0.0f, 0.0f, 0.0f, 0.5f, 0.0f}, 1};

/* 803A1BE0-803A1BF4 02E240 0014+00 0/0 1/1 0/0 .rodata          j2dDefaultTevStageInfo */
extern J2DTevStageInfo const j2dDefaultTevStageInfo = {4, 10, 15, 15, 0, 0, 0, 0, 1,
                                                       0, 5,  7,  7,  0, 0, 0, 0, 1};

/* 803A1BF4-803A1C00 02E254 000C+00 0/0 7/7 0/0 .rodata          j2dDefaultIndTevStageInfo */
SECTION_RODATA extern u8 const j2dDefaultIndTevStageInfo[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x803A1BF4, &j2dDefaultIndTevStageInfo);

/* 8045617C-80456180 00477C 0004+00 0/0 1/1 0/0 .sdata2          j2dDefaultColInfo */
SECTION_SDATA2 extern u32 j2dDefaultColInfo = 0xFFFFFFFF;

/* 80456180-80456184 004780 0004+00 0/0 7/7 0/0 .sdata2          j2dDefaultTevOrderInfoNull */
SECTION_SDATA2 extern u32 j2dDefaultTevOrderInfoNull = 0xFFFFFF00;

/* 80456184-80456188 004784 0002+02 0/0 3/3 0/0 .sdata2          j2dDefaultIndTexOrderNull */
SECTION_SDATA2 extern u16 j2dDefaultIndTexOrderNull[1 + 1 /* padding */] = {
    0xFFFF,
    /* padding */
    0x0000,
};

/* 80456188-80456190 004788 0008+00 0/0 5/5 0/0 .sdata2          j2dDefaultTevColor */
SECTION_SDATA2 extern u8 j2dDefaultTevColor[8] = {
    0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
};

/* 80456190-80456194 004790 0002+02 0/0 3/3 0/0 .sdata2          j2dDefaultIndTexCoordScaleInfo */
SECTION_SDATA2 extern u8 j2dDefaultIndTexCoordScaleInfo[2 + 2 /* padding */] = {
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
};

/* 80456194-80456198 004794 0004+00 0/0 5/5 0/0 .sdata2          j2dDefaultTevKColor */
SECTION_SDATA2 extern u32 j2dDefaultTevKColor = 0xFFFFFFFF;

/* 80456198-8045619C 004798 0004+00 0/0 2/2 0/0 .sdata2          j2dDefaultTevSwapMode */
SECTION_SDATA2 extern u8 j2dDefaultTevSwapMode[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8045619C-804561A0 00479C 0004+00 0/0 6/6 0/0 .sdata2          j2dDefaultTevSwapModeTable */
SECTION_SDATA2 extern u32 j2dDefaultTevSwapModeTable = 0x00010203;

/* 804561A0-804561A4 0047A0 0004+00 0/0 3/3 0/0 .sdata2          j2dDefaultBlendInfo */
SECTION_SDATA2 extern u32 j2dDefaultBlendInfo = 0x01040505;

/* 804561A4-804561A8 0047A4 0004+00 0/0 1/1 0/0 .sdata2          None */
SECTION_SDATA2 extern u8 data_804561A4[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 804561A8-804561AC 0047A8 0004+00 0/0 3/3 0/0 .sdata2          j2dDefaultColorChanInfo */
SECTION_SDATA2 extern u32 j2dDefaultColorChanInfo = 0x00030000;

/* 804561AC-804561AE 0047AC 0002+00 0/0 1/1 0/0 .sdata2          None */
SECTION_SDATA2 extern u16 data_804561AC = 0x1B00;

/* 804561AE-804561B0 0047AE 0002+00 0/0 3/3 0/0 .sdata2          j2dDefaultAlphaCmp */
SECTION_SDATA2 extern u16 j2dDefaultAlphaCmp = 0x00E7;
