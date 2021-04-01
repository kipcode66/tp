//
// Generated By: dol2asm
// Translation Unit: J3DGD
//

#include "JSystem/J3DGraphBase/J3DGD.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct _GXVtxFmt {};

struct _GXVtxAttrFmtList {};

struct _GXTlutSize {};

struct _GXTlutFmt {};

struct _GXTexWrapMode {};

struct _GXTexMapID {};

struct _GXTexGenType {};

struct _GXTexGenSrc {};

struct _GXTexFmt {};

struct _GXTexFilter {};

struct _GXTexCoordID {};

struct _GXTexCacheSize {};

struct _GXTevStageID {};

struct _GXTevRegID {};

struct _GXTevKColorID {};

struct _GXLightID {};

struct _GXIndTexStageID {};

struct _GXIndTexScale {};

struct _GXIndTexMtxID {};

struct _GXFogType {};

struct _GXFogAdjTable {};

struct _GXCullMode {};

struct _GXColorS10 {};

struct _GXColor {};

struct _GXChannelID {};

struct _GXAnisotropy {};

//
// Forward References:
//

void J3DGDSetGenMode(u8, u8, u8, u8, _GXCullMode);
void J3DGDSetGenMode_3Param(u8, u8, u8);
void J3DGDSetLightAttn(_GXLightID, f32, f32, f32, f32, f32, f32);
void J3DGDSetLightColor(_GXLightID, _GXColor);
void J3DGDSetLightPos(_GXLightID, f32, f32, f32);
void J3DGDSetLightDir(_GXLightID, f32, f32, f32);
void J3DGDSetVtxAttrFmtv(_GXVtxFmt, _GXVtxAttrFmtList const*, bool);
void J3DGDSetTexCoordGen(_GXTexGenType, _GXTexGenSrc);
void J3DGDSetTexCoordScale2(_GXTexCoordID, u16, u8, u8, u16, u8, u8);
void J3DGDSetTexLookupMode(_GXTexMapID, _GXTexWrapMode, _GXTexWrapMode, _GXTexFilter, _GXTexFilter,
                           f32, f32, f32, u8, u8, _GXAnisotropy);
void J3DGDSetTexImgAttr(_GXTexMapID, u16, u16, _GXTexFmt);
void J3DGDSetTexImgPtr(_GXTexMapID, void*);
void J3DGDSetTexImgPtrRaw(_GXTexMapID, u32);
void J3DGDSetTexTlut(_GXTexMapID, u32, _GXTlutFmt);
void J3DGDLoadTlut(void*, u32, _GXTlutSize);
void J3DGDSetIndTexMtx(_GXIndTexMtxID, f32 (*)[3], s8);
void J3DGDSetIndTexCoordScale(_GXIndTexStageID, _GXIndTexScale, _GXIndTexScale, _GXIndTexScale,
                              _GXIndTexScale);
void J3DGDSetIndTexOrder(u32, _GXTexCoordID, _GXTexMapID, _GXTexCoordID, _GXTexMapID, _GXTexCoordID,
                         _GXTexMapID, _GXTexCoordID, _GXTexMapID);
void J3DGDSetTevOrder(_GXTevStageID, _GXTexCoordID, _GXTexMapID, _GXChannelID, _GXTexCoordID,
                      _GXTexMapID, _GXChannelID);
void J3DGDSetTevKColor(_GXTevKColorID, _GXColor);
void J3DGDSetTevColorS10(_GXTevRegID, _GXColorS10);
void J3DGDSetFog(_GXFogType, f32, f32, f32, f32, _GXColor);
void J3DGDSetFogRangeAdj(u8, u16, _GXFogAdjTable*);
void J3DFifoLoadPosMtxImm(f32 (*)[4], u32);
void J3DFifoLoadNrmMtxImm(f32 (*)[4], u32);
void J3DFifoLoadNrmMtxImm3x3(f32 (*)[3], u32);
void J3DFifoLoadNrmMtxToTexMtx(f32 (*)[4], u32);
void J3DFifoLoadNrmMtxToTexMtx3x3(f32 (*)[3], u32);
void J3DFifoLoadTexCached(_GXTexMapID, u32, _GXTexCacheSize, u32, _GXTexCacheSize);

extern "C" void J3DGDSetGenMode__FUcUcUcUc11_GXCullMode();
extern "C" void J3DGDSetGenMode_3Param__FUcUcUc();
extern "C" void J3DGDSetLightAttn__F10_GXLightIDffffff();
extern "C" void J3DGDSetLightColor__F10_GXLightID8_GXColor();
extern "C" void J3DGDSetLightPos__F10_GXLightIDfff();
extern "C" void J3DGDSetLightDir__F10_GXLightIDfff();
extern "C" void J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb();
extern "C" void J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc();
extern "C" void J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc();
extern "C" void
J3DGDSetTexLookupMode__F11_GXTexMapID14_GXTexWrapMode14_GXTexWrapMode12_GXTexFilter12_GXTexFilterfffUcUc13_GXAnisotropy();
extern "C" void J3DGDSetTexImgAttr__F11_GXTexMapIDUsUs9_GXTexFmt();
extern "C" void J3DGDSetTexImgPtr__F11_GXTexMapIDPv();
extern "C" void J3DGDSetTexImgPtrRaw__F11_GXTexMapIDUl();
extern "C" void J3DGDSetTexTlut__F11_GXTexMapIDUl10_GXTlutFmt();
extern "C" void J3DGDLoadTlut__FPvUl11_GXTlutSize();
extern "C" void J3DGDSetIndTexMtx__F14_GXIndTexMtxIDPA3_fSc();
extern "C" void
J3DGDSetIndTexCoordScale__F16_GXIndTexStageID14_GXIndTexScale14_GXIndTexScale14_GXIndTexScale14_GXIndTexScale();
extern "C" void
J3DGDSetIndTexOrder__FUl13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID();
extern "C" void
J3DGDSetTevOrder__F13_GXTevStageID13_GXTexCoordID11_GXTexMapID12_GXChannelID13_GXTexCoordID11_GXTexMapID12_GXChannelID();
extern "C" void J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor();
extern "C" void J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10();
extern "C" void J3DGDSetFog__F10_GXFogTypeffff8_GXColor();
extern "C" void J3DGDSetFogRangeAdj__FUcUsP14_GXFogAdjTable();
extern "C" void J3DFifoLoadPosMtxImm__FPA4_fUl();
extern "C" void J3DFifoLoadNrmMtxImm__FPA4_fUl();
extern "C" void J3DFifoLoadNrmMtxImm3x3__FPA3_fUl();
extern "C" void J3DFifoLoadNrmMtxToTexMtx__FPA4_fUl();
extern "C" void J3DFifoLoadNrmMtxToTexMtx3x3__FPA3_fUl();
extern "C" void J3DFifoLoadTexCached__F11_GXTexMapIDUl15_GXTexCacheSizeUl15_GXTexCacheSize();
extern "C" extern u8 pad_8045094C[4];

//
// External References:
//

extern "C" void GDOverflowed();
extern "C" void __cvt_fp2unsigned();
extern "C" void __save_gpr();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void __restore_gpr();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern u8 __GDCurrentDL[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80450908-8045090C 0004+00 s=1 e=0 z=0  None .sdata     cm2hw$552 */
SECTION_SDATA static u8 cm2hw[4] = {
    0x00,
    0x02,
    0x01,
    0x03,
};

/* 8030D098-8030D210 0178+00 s=0 e=1 z=0  None .text      J3DGDSetGenMode__FUcUcUcUc11_GXCullMode */
//	8030D0A8: 803621D4 (_savegpr_27)
//	8030D0C0: 80451980 (__GDCurrentDL)
//	8030D0D8: 803610D4 (GDOverflowed)
//	8030D0E0: 80451980 (__GDCurrentDL)
//	8030D0F8: 80451980 (__GDCurrentDL)
//	8030D110: 80451980 (__GDCurrentDL)
//	8030D128: 80451980 (__GDCurrentDL)
//	8030D140: 80451980 (__GDCurrentDL)
//	8030D158: 80450908 (cm2hw)
//	8030D188: 80451980 (__GDCurrentDL)
//	8030D1A0: 80451980 (__GDCurrentDL)
//	8030D1B8: 80451980 (__GDCurrentDL)
//	8030D1D0: 80451980 (__GDCurrentDL)
//	8030D1E4: 80451980 (__GDCurrentDL)
//	8030D1FC: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetGenMode(u8 param_0, u8 param_1, u8 param_2, u8 param_3, _GXCullMode param_4) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetGenMode__FUcUcUcUc11_GXCullMode.s"
}
#pragma pop

/* 8030D210-8030D364 0154+00 s=0 e=1 z=0  None .text      J3DGDSetGenMode_3Param__FUcUcUc */
//	8030D220: 803621DC (_savegpr_29)
//	8030D230: 80451980 (__GDCurrentDL)
//	8030D248: 803610D4 (GDOverflowed)
//	8030D250: 80451980 (__GDCurrentDL)
//	8030D268: 80451980 (__GDCurrentDL)
//	8030D280: 80451980 (__GDCurrentDL)
//	8030D298: 80451980 (__GDCurrentDL)
//	8030D2B0: 80451980 (__GDCurrentDL)
//	8030D2C4: 80451980 (__GDCurrentDL)
//	8030D2F4: 80451980 (__GDCurrentDL)
//	8030D30C: 80451980 (__GDCurrentDL)
//	8030D324: 80451980 (__GDCurrentDL)
//	8030D338: 80451980 (__GDCurrentDL)
//	8030D350: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetGenMode_3Param(u8 param_0, u8 param_1, u8 param_2) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetGenMode_3Param__FUcUcUc.s"
}
#pragma pop

/* 8030D364-8030D65C 02F8+00 s=0 e=1 z=0  None .text      J3DGDSetLightAttn__F10_GXLightIDffffff */
//	8030D38C: 80451980 (__GDCurrentDL)
//	8030D3A4: 80451980 (__GDCurrentDL)
//	8030D3BC: 80451980 (__GDCurrentDL)
//	8030D3D4: 80451980 (__GDCurrentDL)
//	8030D3E8: 80451980 (__GDCurrentDL)
//	8030D408: 80451980 (__GDCurrentDL)
//	8030D420: 80451980 (__GDCurrentDL)
//	8030D438: 80451980 (__GDCurrentDL)
//	8030D44C: 80451980 (__GDCurrentDL)
//	8030D46C: 80451980 (__GDCurrentDL)
//	8030D484: 80451980 (__GDCurrentDL)
//	8030D49C: 80451980 (__GDCurrentDL)
//	8030D4B0: 80451980 (__GDCurrentDL)
//	8030D4D0: 80451980 (__GDCurrentDL)
//	8030D4E8: 80451980 (__GDCurrentDL)
//	8030D500: 80451980 (__GDCurrentDL)
//	8030D514: 80451980 (__GDCurrentDL)
//	8030D534: 80451980 (__GDCurrentDL)
//	8030D54C: 80451980 (__GDCurrentDL)
//	8030D564: 80451980 (__GDCurrentDL)
//	8030D578: 80451980 (__GDCurrentDL)
//	8030D598: 80451980 (__GDCurrentDL)
//	8030D5B0: 80451980 (__GDCurrentDL)
//	8030D5C8: 80451980 (__GDCurrentDL)
//	8030D5DC: 80451980 (__GDCurrentDL)
//	8030D5FC: 80451980 (__GDCurrentDL)
//	8030D614: 80451980 (__GDCurrentDL)
//	8030D62C: 80451980 (__GDCurrentDL)
//	8030D640: 80451980 (__GDCurrentDL)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetLightAttn(_GXLightID param_0, f32 param_1, f32 param_2, f32 param_3, f32 param_4,
                           f32 param_5, f32 param_6) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetLightAttn__F10_GXLightIDffffff.s"
}
#pragma pop

/* 8030D65C-8030D76C 0110+00 s=0 e=1 z=0  None .text      J3DGDSetLightColor__F10_GXLightID8_GXColor
 */
//	8030D6A0: 80451980 (__GDCurrentDL)
//	8030D6B8: 80451980 (__GDCurrentDL)
//	8030D6CC: 80451980 (__GDCurrentDL)
//	8030D6E4: 80451980 (__GDCurrentDL)
//	8030D6F8: 80451980 (__GDCurrentDL)
//	8030D710: 80451980 (__GDCurrentDL)
//	8030D728: 80451980 (__GDCurrentDL)
//	8030D740: 80451980 (__GDCurrentDL)
//	8030D754: 80451980 (__GDCurrentDL)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetLightColor(_GXLightID param_0, _GXColor param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetLightColor__F10_GXLightID8_GXColor.s"
}
#pragma pop

/* 8030D76C-8030D938 01CC+00 s=0 e=1 z=0  None .text      J3DGDSetLightPos__F10_GXLightIDfff */
//	8030D794: 80451980 (__GDCurrentDL)
//	8030D7AC: 80451980 (__GDCurrentDL)
//	8030D7C4: 80451980 (__GDCurrentDL)
//	8030D7DC: 80451980 (__GDCurrentDL)
//	8030D7F0: 80451980 (__GDCurrentDL)
//	8030D810: 80451980 (__GDCurrentDL)
//	8030D828: 80451980 (__GDCurrentDL)
//	8030D840: 80451980 (__GDCurrentDL)
//	8030D854: 80451980 (__GDCurrentDL)
//	8030D874: 80451980 (__GDCurrentDL)
//	8030D88C: 80451980 (__GDCurrentDL)
//	8030D8A4: 80451980 (__GDCurrentDL)
//	8030D8B8: 80451980 (__GDCurrentDL)
//	8030D8D8: 80451980 (__GDCurrentDL)
//	8030D8F0: 80451980 (__GDCurrentDL)
//	8030D908: 80451980 (__GDCurrentDL)
//	8030D91C: 80451980 (__GDCurrentDL)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetLightPos(_GXLightID param_0, f32 param_1, f32 param_2, f32 param_3) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetLightPos__F10_GXLightIDfff.s"
}
#pragma pop

/* 8030D938-8030DB04 01CC+00 s=0 e=1 z=0  None .text      J3DGDSetLightDir__F10_GXLightIDfff */
//	8030D960: 80451980 (__GDCurrentDL)
//	8030D978: 80451980 (__GDCurrentDL)
//	8030D990: 80451980 (__GDCurrentDL)
//	8030D9A8: 80451980 (__GDCurrentDL)
//	8030D9BC: 80451980 (__GDCurrentDL)
//	8030D9DC: 80451980 (__GDCurrentDL)
//	8030D9F4: 80451980 (__GDCurrentDL)
//	8030DA0C: 80451980 (__GDCurrentDL)
//	8030DA20: 80451980 (__GDCurrentDL)
//	8030DA40: 80451980 (__GDCurrentDL)
//	8030DA58: 80451980 (__GDCurrentDL)
//	8030DA70: 80451980 (__GDCurrentDL)
//	8030DA84: 80451980 (__GDCurrentDL)
//	8030DAA4: 80451980 (__GDCurrentDL)
//	8030DABC: 80451980 (__GDCurrentDL)
//	8030DAD4: 80451980 (__GDCurrentDL)
//	8030DAE8: 80451980 (__GDCurrentDL)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetLightDir(_GXLightID param_0, f32 param_1, f32 param_2, f32 param_3) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetLightDir__F10_GXLightIDfff.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CD7E8-803CD82C 0044+00 s=1 e=0 z=0  None .data      @899 */
SECTION_DATA static void* lit_899[17] = {
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x10C),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x128),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x164),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x178),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x18C),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x1A8),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x1C4),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x1E0),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x1F0),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x200),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x210),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x220),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x22C),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x22C),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x22C),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x22C),
    (void*)(((char*)J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb) + 0x128),
};

/* 8030DB04-8030E064 0560+00 s=1 e=1 z=0  None .text
 * J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb       */
//	8030DB14: 803621A0 (__save_gpr)
//	8030DBF8: 803CD7E8 (lit_899)
//	8030DBFC: 803CD7E8 (lit_899)
//	8030DD40: 80451980 (__GDCurrentDL)
//	8030DD58: 803610D4 (GDOverflowed)
//	8030DD5C: 80451980 (__GDCurrentDL)
//	8030DD78: 80451980 (__GDCurrentDL)
//	8030DE28: 80451980 (__GDCurrentDL)
//	8030DE40: 80451980 (__GDCurrentDL)
//	8030DE58: 80451980 (__GDCurrentDL)
//	8030DE6C: 80451980 (__GDCurrentDL)
//	8030DE80: 80451980 (__GDCurrentDL)
//	8030DE9C: 80451980 (__GDCurrentDL)
//	8030DF20: 80451980 (__GDCurrentDL)
//	8030DF38: 80451980 (__GDCurrentDL)
//	8030DF50: 80451980 (__GDCurrentDL)
//	8030DF64: 80451980 (__GDCurrentDL)
//	8030DF78: 80451980 (__GDCurrentDL)
//	8030DF94: 80451980 (__GDCurrentDL)
//	8030DFF4: 80451980 (__GDCurrentDL)
//	8030E00C: 80451980 (__GDCurrentDL)
//	8030E024: 80451980 (__GDCurrentDL)
//	8030E038: 80451980 (__GDCurrentDL)
//	8030E050: 803621EC (__restore_gpr)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetVtxAttrFmtv(_GXVtxFmt param_0, _GXVtxAttrFmtList const* param_1, bool param_2) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CD82C-803CD880 0054+00 s=1 e=0 z=0  None .data      @951 */
SECTION_DATA static void* lit_951[21] = {
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0x34),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0x40),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0x4C),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0x58),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0x74),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0x7C),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0x84),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0x8C),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0x94),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0x9C),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0xA4),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0xAC),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0xB4),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0xBC),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0xC4),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0xCC),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0xD4),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0xDC),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0xE4),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0x64),
    (void*)(((char*)J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc) + 0x6C),
};

/* 8030E064-8030E234 01D0+00 s=1 e=1 z=0  None .text
 * J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc          */
//	8030E080: 803CD82C (lit_951)
//	8030E084: 803CD82C (lit_951)
//	8030E1D8: 80451980 (__GDCurrentDL)
//	8030E1F0: 80451980 (__GDCurrentDL)
//	8030E208: 80451980 (__GDCurrentDL)
//	8030E21C: 80451980 (__GDCurrentDL)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetTexCoordGen(_GXTexGenType param_0, _GXTexGenSrc param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc.s"
}
#pragma pop

/* 8030E234-8030E438 0204+00 s=0 e=16 z=0  None .text
 * J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc         */
//	8030E244: 803621CC (_savegpr_25)
//	8030E264: 80451980 (__GDCurrentDL)
//	8030E27C: 803610D4 (GDOverflowed)
//	8030E284: 80451980 (__GDCurrentDL)
//	8030E29C: 80451980 (__GDCurrentDL)
//	8030E2B4: 80451980 (__GDCurrentDL)
//	8030E2CC: 80451980 (__GDCurrentDL)
//	8030E2E0: 80451980 (__GDCurrentDL)
//	8030E2F4: 80451980 (__GDCurrentDL)
//	8030E334: 80451980 (__GDCurrentDL)
//	8030E34C: 80451980 (__GDCurrentDL)
//	8030E364: 80451980 (__GDCurrentDL)
//	8030E378: 80451980 (__GDCurrentDL)
//	8030E38C: 80451980 (__GDCurrentDL)
//	8030E3C8: 80451980 (__GDCurrentDL)
//	8030E3E0: 80451980 (__GDCurrentDL)
//	8030E3F8: 80451980 (__GDCurrentDL)
//	8030E40C: 80451980 (__GDCurrentDL)
//	8030E424: 80362218 (_restgpr_25)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetTexCoordScale2(_GXTexCoordID param_0, u16 param_1, u8 param_2, u8 param_3,
                                u16 param_4, u8 param_5, u8 param_6) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045090C-80450914 0008+00 s=1 e=0 z=0  None .sdata     J3DGDTexMode0Ids */
SECTION_SDATA static u8 J3DGDTexMode0Ids[8] = {
    0x80, 0x81, 0x82, 0x83, 0xA0, 0xA1, 0xA2, 0xA3,
};

/* 80450914-8045091C 0008+00 s=1 e=0 z=0  None .sdata     J3DGDTexMode1Ids */
SECTION_SDATA static u8 J3DGDTexMode1Ids[8] = {
    0x84, 0x85, 0x86, 0x87, 0xA4, 0xA5, 0xA6, 0xA7,
};

/* 8045091C-80450924 0008+00 s=1 e=0 z=0  None .sdata     J3DGDTexImage0Ids */
SECTION_SDATA static u8 J3DGDTexImage0Ids[8] = {
    0x88, 0x89, 0x8A, 0x8B, 0xA8, 0xA9, 0xAA, 0xAB,
};

/* 80450924-8045092C 0008+00 s=2 e=0 z=0  None .sdata     J3DGDTexImage3Ids */
SECTION_SDATA static u8 J3DGDTexImage3Ids[8] = {
    0x94, 0x95, 0x96, 0x97, 0xB4, 0xB5, 0xB6, 0xB7,
};

/* 8045092C-80450934 0008+00 s=1 e=0 z=0  None .sdata     J3DGDTexTlutIds */
SECTION_SDATA static u8 J3DGDTexTlutIds[8] = {
    0x98, 0x99, 0x9A, 0x9B, 0xB8, 0xB9, 0xBA, 0xBB,
};

/* 80450934-8045093C 0006+02 s=1 e=0 z=0  None .sdata     GX2HWFiltConv */
SECTION_SDATA static u8 GX2HWFiltConv[6 + 2 /* padding */] = {
    0x00,
    0x04,
    0x01,
    0x05,
    0x02,
    0x06,
    /* padding */
    0x00,
    0x00,
};

/* 80456328-8045632C 0004+00 s=1 e=0 z=0  None .sdata2    @1050 */
SECTION_SDATA2 static f32 lit_1050 = 32.0f;

/* 8045632C-80456330 0004+00 s=1 e=0 z=0  None .sdata2    @1051 */
SECTION_SDATA2 static f32 lit_1051 = 16.0f;

/* 8030E438-8030E5D4 019C+00 s=0 e=1 z=0  None .text
 * J3DGDSetTexLookupMode__F11_GXTexMapID14_GXTexWrapMode14_GXTexWrapMode12_GXTexFilter12_GXTexFilterfffUcUc13_GXAnisotropy
 */
//	8030E43C: 8045090C (J3DGDTexMode0Ids)
//	8030E450: 80456328 (lit_1050)
//	8030E474: 80450934 (GX2HWFiltConv)
//	8030E4B4: 80451980 (__GDCurrentDL)
//	8030E4CC: 80451980 (__GDCurrentDL)
//	8030E4E4: 80451980 (__GDCurrentDL)
//	8030E4FC: 80451980 (__GDCurrentDL)
//	8030E510: 80451980 (__GDCurrentDL)
//	8030E524: 80450914 (J3DGDTexMode1Ids)
//	8030E52C: 8045632C (lit_1051)
//	8030E55C: 80451980 (__GDCurrentDL)
//	8030E574: 80451980 (__GDCurrentDL)
//	8030E58C: 80451980 (__GDCurrentDL)
//	8030E5A4: 80451980 (__GDCurrentDL)
//	8030E5B8: 80451980 (__GDCurrentDL)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetTexLookupMode(_GXTexMapID param_0, _GXTexWrapMode param_1, _GXTexWrapMode param_2,
                               _GXTexFilter param_3, _GXTexFilter param_4, f32 param_5, f32 param_6,
                               f32 param_7, u8 param_8, u8 param_9, _GXAnisotropy param_10) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/func_8030E438.s"
}
#pragma pop

/* 8030E5D4-8030E67C 00A8+00 s=0 e=1 z=0  None .text
 * J3DGDSetTexImgAttr__F11_GXTexMapIDUsUs9_GXTexFmt             */
//	8030E5D4: 8045091C (J3DGDTexImage0Ids)
//	8030E608: 80451980 (__GDCurrentDL)
//	8030E620: 80451980 (__GDCurrentDL)
//	8030E638: 80451980 (__GDCurrentDL)
//	8030E650: 80451980 (__GDCurrentDL)
//	8030E664: 80451980 (__GDCurrentDL)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetTexImgAttr(_GXTexMapID param_0, u16 param_1, u16 param_2, _GXTexFmt param_3) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetTexImgAttr__F11_GXTexMapIDUsUs9_GXTexFmt.s"
}
#pragma pop

/* 8030E67C-8030E70C 0090+00 s=0 e=1 z=0  None .text      J3DGDSetTexImgPtr__F11_GXTexMapIDPv */
//	8030E684: 80450924 (J3DGDTexImage3Ids)
//	8030E698: 80451980 (__GDCurrentDL)
//	8030E6B0: 80451980 (__GDCurrentDL)
//	8030E6C8: 80451980 (__GDCurrentDL)
//	8030E6E0: 80451980 (__GDCurrentDL)
//	8030E6F4: 80451980 (__GDCurrentDL)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetTexImgPtr(_GXTexMapID param_0, void* param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetTexImgPtr__F11_GXTexMapIDPv.s"
}
#pragma pop

/* 8030E70C-8030E7E0 00D4+00 s=0 e=1 z=0  None .text      J3DGDSetTexImgPtrRaw__F11_GXTexMapIDUl */
//	8030E728: 80451980 (__GDCurrentDL)
//	8030E740: 803610D4 (GDOverflowed)
//	8030E744: 80450924 (J3DGDTexImage3Ids)
//	8030E758: 80451980 (__GDCurrentDL)
//	8030E770: 80451980 (__GDCurrentDL)
//	8030E788: 80451980 (__GDCurrentDL)
//	8030E7A0: 80451980 (__GDCurrentDL)
//	8030E7B4: 80451980 (__GDCurrentDL)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetTexImgPtrRaw(_GXTexMapID param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetTexImgPtrRaw__F11_GXTexMapIDUl.s"
}
#pragma pop

/* 8030E7E0-8030E878 0098+00 s=0 e=1 z=0  None .text J3DGDSetTexTlut__F11_GXTexMapIDUl10_GXTlutFmt
 */
//	8030E7E0: 8045092C (J3DGDTexTlutIds)
//	8030E804: 80451980 (__GDCurrentDL)
//	8030E81C: 80451980 (__GDCurrentDL)
//	8030E834: 80451980 (__GDCurrentDL)
//	8030E84C: 80451980 (__GDCurrentDL)
//	8030E860: 80451980 (__GDCurrentDL)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetTexTlut(_GXTexMapID param_0, u32 param_1, _GXTlutFmt param_2) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetTexTlut__F11_GXTexMapIDUl10_GXTlutFmt.s"
}
#pragma pop

/* 8030E878-8030EB30 02B8+00 s=0 e=1 z=0  None .text      J3DGDLoadTlut__FPvUl11_GXTlutSize */
//	8030E884: 80451980 (__GDCurrentDL)
//	8030E89C: 80451980 (__GDCurrentDL)
//	8030E8B4: 80451980 (__GDCurrentDL)
//	8030E8C8: 80451980 (__GDCurrentDL)
//	8030E8E0: 80451980 (__GDCurrentDL)
//	8030E8F4: 80451980 (__GDCurrentDL)
//	8030E90C: 80451980 (__GDCurrentDL)
//	8030E920: 80451980 (__GDCurrentDL)
//	8030E934: 80451980 (__GDCurrentDL)
//	8030E948: 80451980 (__GDCurrentDL)
//	8030E95C: 80451980 (__GDCurrentDL)
//	8030E980: 80451980 (__GDCurrentDL)
//	8030E998: 80451980 (__GDCurrentDL)
//	8030E9B0: 80451980 (__GDCurrentDL)
//	8030E9C4: 80451980 (__GDCurrentDL)
//	8030E9D8: 80451980 (__GDCurrentDL)
//	8030EA04: 80451980 (__GDCurrentDL)
//	8030EA1C: 80451980 (__GDCurrentDL)
//	8030EA34: 80451980 (__GDCurrentDL)
//	8030EA48: 80451980 (__GDCurrentDL)
//	8030EA5C: 80451980 (__GDCurrentDL)
//	8030EA70: 80451980 (__GDCurrentDL)
//	8030EA84: 80451980 (__GDCurrentDL)
//	8030EA98: 80451980 (__GDCurrentDL)
//	8030EAAC: 80451980 (__GDCurrentDL)
//	8030EAC0: 80451980 (__GDCurrentDL)
//	8030EAD4: 80451980 (__GDCurrentDL)
//	8030EAE8: 80451980 (__GDCurrentDL)
//	8030EAFC: 80451980 (__GDCurrentDL)
//	8030EB10: 80451980 (__GDCurrentDL)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDLoadTlut(void* param_0, u32 param_1, _GXTlutSize param_2) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDLoadTlut__FPvUl11_GXTlutSize.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456330-80456334 0004+00 s=1 e=0 z=0  None .sdata2    @1233 */
SECTION_SDATA2 static f32 lit_1233 = 1024.0f;

/* 8030EB30-8030EE10 02E0+00 s=0 e=2 z=0  None .text J3DGDSetIndTexMtx__F14_GXIndTexMtxIDPA3_fSc
 */
//	8030EB40: 803621C8 (_savegpr_24)
//	8030EB94: 80456330 (lit_1233)
//	8030EC28: 80451980 (__GDCurrentDL)
//	8030EC40: 803610D4 (GDOverflowed)
//	8030EC70: 80451980 (__GDCurrentDL)
//	8030EC88: 80451980 (__GDCurrentDL)
//	8030ECA0: 80451980 (__GDCurrentDL)
//	8030ECB8: 80451980 (__GDCurrentDL)
//	8030ECCC: 80451980 (__GDCurrentDL)
//	8030ECFC: 80451980 (__GDCurrentDL)
//	8030ED14: 80451980 (__GDCurrentDL)
//	8030ED2C: 80451980 (__GDCurrentDL)
//	8030ED44: 80451980 (__GDCurrentDL)
//	8030ED58: 80451980 (__GDCurrentDL)
//	8030ED88: 80451980 (__GDCurrentDL)
//	8030EDA0: 80451980 (__GDCurrentDL)
//	8030EDB8: 80451980 (__GDCurrentDL)
//	8030EDD0: 80451980 (__GDCurrentDL)
//	8030EDE4: 80451980 (__GDCurrentDL)
//	8030EDFC: 80362214 (_restgpr_24)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetIndTexMtx(_GXIndTexMtxID param_0, f32 (*param_1)[3], s8 param_2) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetIndTexMtx__F14_GXIndTexMtxIDPA3_fSc.s"
}
#pragma pop

/* 8030EE10-8030EF08 00F8+00 s=0 e=2 z=0  None .text
 * J3DGDSetIndTexCoordScale__F16_GXIndTexStageID14_GXIndTexScale14_GXIndTexScale14_GXIndTexScale14_GXIndTexScale
 */
//	8030EE20: 803621D4 (_savegpr_27)
//	8030EE38: 80451980 (__GDCurrentDL)
//	8030EE50: 803610D4 (GDOverflowed)
//	8030EE58: 80451980 (__GDCurrentDL)
//	8030EE98: 80451980 (__GDCurrentDL)
//	8030EEB0: 80451980 (__GDCurrentDL)
//	8030EEC8: 80451980 (__GDCurrentDL)
//	8030EEDC: 80451980 (__GDCurrentDL)
//	8030EEF4: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetIndTexCoordScale(_GXIndTexStageID param_0, _GXIndTexScale param_1,
                                  _GXIndTexScale param_2, _GXIndTexScale param_3,
                                  _GXIndTexScale param_4) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/func_8030EE10.s"
}
#pragma pop

/* 8030EF08-8030F108 0200+00 s=0 e=2 z=0  None .text
 * J3DGDSetIndTexOrder__FUl13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID
 */
//	8030EF18: 803621C4 (_savegpr_23)
//	8030EF40: 80451980 (__GDCurrentDL)
//	8030EF58: 803610D4 (GDOverflowed)
//	8030EF60: 80451980 (__GDCurrentDL)
//	8030EFAC: 80451980 (__GDCurrentDL)
//	8030EFC4: 80451980 (__GDCurrentDL)
//	8030EFDC: 80451980 (__GDCurrentDL)
//	8030EFF0: 80451980 (__GDCurrentDL)
//	8030F07C: 80451980 (__GDCurrentDL)
//	8030F098: 80451980 (__GDCurrentDL)
//	8030F0B0: 80451980 (__GDCurrentDL)
//	8030F0C8: 80451980 (__GDCurrentDL)
//	8030F0DC: 80451980 (__GDCurrentDL)
//	8030F0F4: 80362210 (_restgpr_23)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetIndTexOrder(u32 param_0, _GXTexCoordID param_1, _GXTexMapID param_2,
                             _GXTexCoordID param_3, _GXTexMapID param_4, _GXTexCoordID param_5,
                             _GXTexMapID param_6, _GXTexCoordID param_7, _GXTexMapID param_8) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/func_8030EF08.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CD880-803CD8A0 0010+10 s=1 e=0 z=0  None .data      c2r$1302 */
SECTION_DATA static u8 c2r[16 + 16 /* padding */] = {
    0x00,
    0x01,
    0x00,
    0x01,
    0x00,
    0x01,
    0x07,
    0x05,
    0x06,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x07,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8030F108-8030F294 018C+00 s=0 e=9 z=0  None .text
 * J3DGDSetTevOrder__F13_GXTevStageID13_GXTexCoordID11_GXTexMapID12_GXChannelID13_GXTexCoordID11_GXTexMapID12_GXChannelID
 */
//	8030F118: 803621CC (_savegpr_25)
//	8030F150: 80451980 (__GDCurrentDL)
//	8030F168: 803610D4 (GDOverflowed)
//	8030F180: 803CD880 (c2r)
//	8030F184: 803CD880 (c2r)
//	8030F1B8: 803CD880 (c2r)
//	8030F1BC: 803CD880 (c2r)
//	8030F20C: 80451980 (__GDCurrentDL)
//	8030F224: 80451980 (__GDCurrentDL)
//	8030F23C: 80451980 (__GDCurrentDL)
//	8030F254: 80451980 (__GDCurrentDL)
//	8030F268: 80451980 (__GDCurrentDL)
//	8030F280: 80362218 (_restgpr_25)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetTevOrder(_GXTevStageID param_0, _GXTexCoordID param_1, _GXTexMapID param_2,
                          _GXChannelID param_3, _GXTexCoordID param_4, _GXTexMapID param_5,
                          _GXChannelID param_6) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/func_8030F108.s"
}
#pragma pop

/* 8030F294-8030F3FC 0168+00 s=0 e=11 z=0  None .text
 * J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor                */
//	8030F2E4: 80451980 (__GDCurrentDL)
//	8030F2FC: 803610D4 (GDOverflowed)
//	8030F304: 80451980 (__GDCurrentDL)
//	8030F31C: 80451980 (__GDCurrentDL)
//	8030F334: 80451980 (__GDCurrentDL)
//	8030F34C: 80451980 (__GDCurrentDL)
//	8030F360: 80451980 (__GDCurrentDL)
//	8030F374: 80451980 (__GDCurrentDL)
//	8030F38C: 80451980 (__GDCurrentDL)
//	8030F3A4: 80451980 (__GDCurrentDL)
//	8030F3BC: 80451980 (__GDCurrentDL)
//	8030F3D0: 80451980 (__GDCurrentDL)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetTevKColor(_GXTevKColorID param_0, _GXColor param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor.s"
}
#pragma pop

/* 8030F3FC-8030F630 0234+00 s=0 e=11 z=0  None .text
 * J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10             */
//	8030F44C: 80451980 (__GDCurrentDL)
//	8030F464: 803610D4 (GDOverflowed)
//	8030F46C: 80451980 (__GDCurrentDL)
//	8030F484: 80451980 (__GDCurrentDL)
//	8030F49C: 80451980 (__GDCurrentDL)
//	8030F4B4: 80451980 (__GDCurrentDL)
//	8030F4C8: 80451980 (__GDCurrentDL)
//	8030F4DC: 80451980 (__GDCurrentDL)
//	8030F4F4: 80451980 (__GDCurrentDL)
//	8030F50C: 80451980 (__GDCurrentDL)
//	8030F524: 80451980 (__GDCurrentDL)
//	8030F53C: 80451980 (__GDCurrentDL)
//	8030F550: 80451980 (__GDCurrentDL)
//	8030F564: 80451980 (__GDCurrentDL)
//	8030F578: 80451980 (__GDCurrentDL)
//	8030F58C: 80451980 (__GDCurrentDL)
//	8030F5A0: 80451980 (__GDCurrentDL)
//	8030F5B4: 80451980 (__GDCurrentDL)
//	8030F5C8: 80451980 (__GDCurrentDL)
//	8030F5DC: 80451980 (__GDCurrentDL)
//	8030F5F0: 80451980 (__GDCurrentDL)
//	8030F604: 80451980 (__GDCurrentDL)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetTevColorS10(_GXTevRegID param_0, _GXColorS10 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456334-80456338 0004+00 s=3 e=0 z=0  None .sdata2    @1460 */
SECTION_SDATA2 static u8 lit_1460[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80456338-80456340 0004+04 s=1 e=0 z=0  None .sdata2    @1461 */
SECTION_SDATA2 static f32 lit_1461[1 + 1 /* padding */] = {
    0.5f,
    /* padding */
    0.0f,
};

/* 80456340-80456348 0008+00 s=1 e=0 z=0  None .sdata2    @1462 */
SECTION_SDATA2 static f64 lit_1462 = 1.0;

/* 80456348-80456350 0004+04 s=1 e=0 z=0  None .sdata2    @1463 */
SECTION_SDATA2 static f32 lit_1463[1 + 1 /* padding */] = {
    2.0f,
    /* padding */
    0.0f,
};

/* 80456350-80456358 0008+00 s=1 e=0 z=0  None .sdata2    @1464 */
SECTION_SDATA2 static f64 lit_1464 = 0.5;

/* 80456358-80456360 0004+04 s=1 e=0 z=0  None .sdata2    @1465 */
SECTION_SDATA2 static f32 lit_1465[1 + 1 /* padding */] = {
    8388638.0f,
    /* padding */
    0.0f,
};

/* 80456360-80456368 0008+00 s=1 e=0 z=0  None .sdata2    @1468 */
SECTION_SDATA2 static f64 lit_1468 = 4503601774854144.0 /* cast s32 to float */;

/* 8030F630-8030F994 0364+00 s=0 e=3 z=0  None .text      J3DGDSetFog__F10_GXFogTypeffff8_GXColor */
//	8030F640: 803621DC (_savegpr_29)
//	8030F65C: 80456334 (lit_1460)
//	8030F660: 80456338 (lit_1461)
//	8030F690: 80456338 (lit_1461)
//	8030F694: 80456340 (lit_1462)
//	8030F6AC: 80456350 (lit_1464)
//	8030F6B0: 80456348 (lit_1463)
//	8030F6B4: 80456334 (lit_1460)
//	8030F6DC: 80456360 (lit_1468)
//	8030F700: 80456358 (lit_1465)
//	8030F708: 803620AC (__cvt_fp2unsigned)
//	8030F718: 80451980 (__GDCurrentDL)
//	8030F738: 80451980 (__GDCurrentDL)
//	8030F750: 80451980 (__GDCurrentDL)
//	8030F768: 80451980 (__GDCurrentDL)
//	8030F77C: 80451980 (__GDCurrentDL)
//	8030F790: 80451980 (__GDCurrentDL)
//	8030F7AC: 80451980 (__GDCurrentDL)
//	8030F7C4: 80451980 (__GDCurrentDL)
//	8030F7DC: 80451980 (__GDCurrentDL)
//	8030F7F0: 80451980 (__GDCurrentDL)
//	8030F804: 80451980 (__GDCurrentDL)
//	8030F820: 80451980 (__GDCurrentDL)
//	8030F838: 80451980 (__GDCurrentDL)
//	8030F850: 80451980 (__GDCurrentDL)
//	8030F864: 80451980 (__GDCurrentDL)
//	8030F878: 80451980 (__GDCurrentDL)
//	8030F89C: 80451980 (__GDCurrentDL)
//	8030F8B4: 80451980 (__GDCurrentDL)
//	8030F8CC: 80451980 (__GDCurrentDL)
//	8030F8E0: 80451980 (__GDCurrentDL)
//	8030F90C: 80451980 (__GDCurrentDL)
//	8030F924: 80451980 (__GDCurrentDL)
//	8030F93C: 80451980 (__GDCurrentDL)
//	8030F954: 80451980 (__GDCurrentDL)
//	8030F968: 80451980 (__GDCurrentDL)
//	8030F980: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetFog(_GXFogType param_0, f32 param_1, f32 param_2, f32 param_3, f32 param_4,
                     _GXColor param_5) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetFog__F10_GXFogTypeffff8_GXColor.s"
}
#pragma pop

/* 8030F994-8030FAE0 014C+00 s=0 e=3 z=0  None .text J3DGDSetFogRangeAdj__FUcUsP14_GXFogAdjTable
 */
//	8030F9D8: 80451980 (__GDCurrentDL)
//	8030F9F0: 80451980 (__GDCurrentDL)
//	8030FA08: 80451980 (__GDCurrentDL)
//	8030FA20: 80451980 (__GDCurrentDL)
//	8030FA34: 80451980 (__GDCurrentDL)
//	8030FA6C: 80451980 (__GDCurrentDL)
//	8030FA84: 80451980 (__GDCurrentDL)
//	8030FA9C: 80451980 (__GDCurrentDL)
//	8030FAB4: 80451980 (__GDCurrentDL)
//	8030FAC8: 80451980 (__GDCurrentDL)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DGDSetFogRangeAdj(u8 param_0, u16 param_1, _GXFogAdjTable* param_2) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DGDSetFogRangeAdj__FUcUsP14_GXFogAdjTable.s"
}
#pragma pop

/* 8030FAE0-8030FB60 0080+00 s=0 e=10 z=0  None .text      J3DFifoLoadPosMtxImm__FPA4_fUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DFifoLoadPosMtxImm(f32 (*param_0)[4], u32 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DFifoLoadPosMtxImm__FPA4_fUl.s"
}
#pragma pop

/* 8030FB60-8030FBCC 006C+00 s=0 e=9 z=0  None .text      J3DFifoLoadNrmMtxImm__FPA4_fUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DFifoLoadNrmMtxImm(f32 (*param_0)[4], u32 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DFifoLoadNrmMtxImm__FPA4_fUl.s"
}
#pragma pop

/* 8030FBCC-8030FC38 006C+00 s=0 e=3 z=0  None .text      J3DFifoLoadNrmMtxImm3x3__FPA3_fUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DFifoLoadNrmMtxImm3x3(f32 (*param_0)[3], u32 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DFifoLoadNrmMtxImm3x3__FPA3_fUl.s"
}
#pragma pop

/* 8030FC38-8030FCD0 0098+00 s=0 e=4 z=0  None .text      J3DFifoLoadNrmMtxToTexMtx__FPA4_fUl */
//	8030FC70: 80456334 (lit_1460)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DFifoLoadNrmMtxToTexMtx(f32 (*param_0)[4], u32 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DFifoLoadNrmMtxToTexMtx__FPA4_fUl.s"
}
#pragma pop

/* 8030FCD0-8030FD68 0098+00 s=0 e=2 z=0  None .text      J3DFifoLoadNrmMtxToTexMtx3x3__FPA3_fUl */
//	8030FD08: 80456334 (lit_1460)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DFifoLoadNrmMtxToTexMtx3x3(f32 (*param_0)[3], u32 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DFifoLoadNrmMtxToTexMtx3x3__FPA3_fUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045093C-80450944 0008+00 s=1 e=0 z=0  None .sdata     J3DTexImage1Ids */
SECTION_SDATA static u8 J3DTexImage1Ids[8] = {
    0x8C, 0x8D, 0x8E, 0x8F, 0xAC, 0xAD, 0xAE, 0xAF,
};

/* 80450944-8045094C 0008+00 s=1 e=0 z=0  None .sdata     J3DTexImage2Ids */
SECTION_SDATA static u8 J3DTexImage2Ids[8] = {
    0x90, 0x91, 0x92, 0x93, 0xB0, 0xB1, 0xB2, 0xB3,
};

/* 8030FD68-8030FDE8 0080+00 s=0 e=1 z=0  None .text
 * J3DFifoLoadTexCached__F11_GXTexMapIDUl15_GXTexCacheSizeUl15_GXTexCacheSize */
//	8030FD74: 8045093C (J3DTexImage1Ids)
//	8030FDB8: 80450944 (J3DTexImage2Ids)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DFifoLoadTexCached(_GXTexMapID param_0, u32 param_1, _GXTexCacheSize param_2,
                              u32 param_3, _GXTexCacheSize param_4) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DGD/J3DFifoLoadTexCached__F11_GXTexMapIDUl15_GXTexCacheSizeUl15_GXTexCacheSize.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045094C-80450950 0004+00 s=0 e=0 z=0  None .sdata     None */
SECTION_SDATA u8 pad_8045094C[4];
