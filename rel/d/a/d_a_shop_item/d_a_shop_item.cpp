//
// Generated By: dol2asm
// Translation Unit: d_a_shop_item
//

#include "rel/d/a/d_a_shop_item/d_a_shop_item.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daShopItem_c {
    /* 8059E9B8 */ void getShopArcname();
    /* 8059EC04 */ void getHeapSize();
    /* 8059EC1C */ void CreateInit();
    /* 8059ED58 */ void set_mtx();
    /* 8059EEF4 */ void _execute();
    /* 8059EF48 */ void _draw();
    /* 8059EF9C */ void setListStart();
    /* 8059EFA0 */ void setShadow();
    /* 8059F024 */ void chkFlag(int);
    /* 8059F044 */ void getTevFrm();
    /* 8059F064 */ void getBtpFrm();
    /* 8059F084 */ void getShadowSize();
    /* 8059F0A0 */ void getCollisionH();
    /* 8059F0BC */ void getCollisionR();
};

struct daItemBase_c {
    /* 80037A74 */ void show();
    /* 80037ACC */ void chkDraw();
    /* 80144724 */ void DeleteBase(char const*);
    /* 8014474C */ bool clothCreate();
    /* 80144754 */ bool __CreateHeap();
    /* 80144B94 */ void DrawBase();
    /* 80144C30 */ void RotateYBase();
    /* 80144CC4 */ void settingBeforeDraw();
    /* 80144D18 */ void setTevStr();
    /* 80144D70 */ void setShadow();
    /* 80144EDC */ void animEntry();
    /* 8014503C */ void animPlay(f32, f32, f32, f32, f32, f32);
};

struct dKy_tevstr_c {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 8059F324 */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
};

struct cXyz {};

struct cM3dGCyl {
    /* 8059F294 */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 8059F2DC */ ~cM3dGAab();
};

struct cBgS_PolyInfo {};

struct _GXTexObj {};

struct J3DModel {};

//
// Forward References:
//

static void daShopItem_Create(void*);
static void daShopItem_Delete(void*);
static void daShopItem_Draw(void*);
static void daShopItem_Execute(void*);
static bool daShopItem_IsDelete(void*);

extern "C" void getShopArcname__12daShopItem_cFv();
extern "C" void getHeapSize__12daShopItem_cFv();
extern "C" void CreateInit__12daShopItem_cFv();
extern "C" void set_mtx__12daShopItem_cFv();
extern "C" void _execute__12daShopItem_cFv();
extern "C" void _draw__12daShopItem_cFv();
extern "C" void setListStart__12daShopItem_cFv();
extern "C" void setShadow__12daShopItem_cFv();
extern "C" void chkFlag__12daShopItem_cFi();
extern "C" void getTevFrm__12daShopItem_cFv();
extern "C" void getBtpFrm__12daShopItem_cFv();
extern "C" void getShadowSize__12daShopItem_cFv();
extern "C" void getCollisionH__12daShopItem_cFv();
extern "C" void getCollisionR__12daShopItem_cFv();
extern "C" static void daShopItem_Create__FPv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" static void daShopItem_Delete__FPv();
extern "C" static void daShopItem_Draw__FPv();
extern "C" static void daShopItem_Execute__FPv();
extern "C" static bool daShopItem_IsDelete__FPv();
extern "C" static void func_8059F420();
extern "C" static void func_8059F428();
extern "C" extern u32 const lit_3718;
extern "C" extern u8 const lit_3719[4];
extern "C" extern u32 const lit_3720;
extern "C" extern u32 const lit_3721;
extern "C" extern u32 const lit_3723;
extern "C" extern u32 const lit_3724;
extern "C" extern u32 const lit_3823;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_ShopItem[12];
extern "C" extern void* __vt__8cM3dGCyl[3];
extern "C" extern void* __vt__8cM3dGAab[3];
extern "C" extern void* __vt__12dBgS_ObjAcch[9];
extern "C" extern void* __vt__12daShopItem_c[17];

//
// External References:
//

void mDoMtx_ZXYrotM(f32 (*)[4], s16, s16, s16);
void mDoMtx_XrotM(f32 (*)[4], s16);
void mDoMtx_YrotM(f32 (*)[4], s16);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfGd_setShadow(u32, s8, J3DModel*, cXyz*, f32, f32, f32, f32, cBgS_PolyInfo&,
                        dKy_tevstr_c*, s16, f32, _GXTexObj*);
void CheckShopItemCreateHeap(fopAc_ac_c*);
void operator delete(void*);

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void show__12daItemBase_cFv();
extern "C" void chkDraw__12daItemBase_cFv();
extern "C" void CheckShopItemCreateHeap__FP10fopAc_ac_c();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void DeleteBase__12daItemBase_cFPCc();
extern "C" bool clothCreate__12daItemBase_cFv();
extern "C" bool __CreateHeap__12daItemBase_cFv();
extern "C" void DrawBase__12daItemBase_cFv();
extern "C" void RotateYBase__12daItemBase_cFv();
extern "C" void settingBeforeDraw__12daItemBase_cFv();
extern "C" void setTevStr__12daItemBase_cFv();
extern "C" void setShadow__12daItemBase_cFv();
extern "C" void animEntry__12daItemBase_cFv();
extern "C" void animPlay__12daItemBase_cFffffff();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" void strcmp();
extern "C" extern void* const mData__12daShopItem_c[276];
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12daItemBase_c[17 + 1 /* padding */];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern f32 mSystemFar__14mDoLib_clipper;

//
// Declarations:
//

/* ############################################################################################## */
/* 8059F438-8059F43C 0004+00 s=2 e=0 z=0  None .rodata    m_cullfar_max__12daShopItem_c */
SECTION_RODATA static u32 const m_cullfar_max__12daShopItem_c = 0x459C4000;

/* 8059F43C-8059F46C 002E+02 s=1 e=0 z=0  None .rodata    HeapSizeTbl$3665 */
SECTION_RODATA static u8 const HeapSizeTbl[46 + 2 /* padding */] = {
    0x08,
    0x10,
    0x08,
    0x10,
    0x08,
    0x10,
    0x08,
    0x10,
    0x08,
    0x10,
    0x08,
    0x10,
    0x08,
    0x10,
    0x08,
    0x10,
    0x0E,
    0xB0,
    0x08,
    0x10,
    0x0E,
    0xB0,
    0x39,
    0x90,
    0x39,
    0x90,
    0x80,
    0x00,
    0x08,
    0x10,
    0x15,
    0x40,
    0x08,
    0x10,
    0x08,
    0x10,
    0x08,
    0x10,
    0x43,
    0xA0,
    0x22,
    0x80,
    0x08,
    0x10,
    0x08,
    0x10,
    /* padding */
    0x00,
    0x00,
};

/* 8059F46C-8059F470 0004+00 s=0 e=0 z=0  None .rodata    @3718 */
SECTION_RODATA u32 const lit_3718 = 0xC2C80000;

/* 8059F470-8059F474 0004+00 s=0 e=0 z=0  None .rodata    @3719 */
SECTION_RODATA u8 const lit_3719[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8059F474-8059F478 0004+00 s=0 e=0 z=0  None .rodata    @3720 */
SECTION_RODATA u32 const lit_3720 = 0x42C80000;

/* 8059F478-8059F47C 0004+00 s=0 e=0 z=0  None .rodata    @3721 */
SECTION_RODATA u32 const lit_3721 = 0x43480000;

/* 8059F47C-8059F480 0004+00 s=1 e=0 z=0  None .rodata    @3722 */
SECTION_RODATA static u32 const lit_3722 = 0x3F800000;

/* 8059F480-8059F484 0004+00 s=0 e=0 z=0  None .rodata    @3723 */
SECTION_RODATA u32 const lit_3723 = 0x459C4000;

/* 8059F484-8059F488 0004+00 s=0 e=0 z=0  None .rodata    @3724 */
SECTION_RODATA u32 const lit_3724 = 0x3F4CCCCD;

/* 8059F488-8059F48C 0004+00 s=0 e=0 z=0  None .rodata    @3823 */
SECTION_RODATA u32 const lit_3823 = 0x42A00000;

/* 8059F48C-8059F49C 0010+00 s=2 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_8059F48C = "R_SP160";
SECTION_DEAD char const* const stringBase_8059F494 = "R_SP109";
#pragma pop

/* 8059E9B8-8059EC04 024C+00 s=2 e=0 z=0  None .text      getShopArcname__12daShopItem_cFv */
//	8059EAB8: 8059F48C (stringBase0)
//	8059EABC: 8059F48C (stringBase0)
//	8059EAC0: 804061C0 (g_dComIfG_gameInfo)
//	8059EAC4: 804061C0 (g_dComIfG_gameInfo)
//	8059EACC: 80368994 (strcmp)
//	8059EBE4: 803792E8 (mData__12daShopItem_c)
//	8059EBE8: 803792E8 (mData__12daShopItem_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::getShopArcname() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/getShopArcname__12daShopItem_cFv.s"
}
#pragma pop

/* 8059EC04-8059EC1C 0018+00 s=1 e=0 z=0  None .text      getHeapSize__12daShopItem_cFv */
//	8059EC0C: 8059F43C (HeapSizeTbl)
//	8059EC10: 8059F43C (HeapSizeTbl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::getHeapSize() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/getHeapSize__12daShopItem_cFv.s"
}
#pragma pop

/* 8059EC1C-8059ED58 013C+00 s=1 e=0 z=0  None .text      CreateInit__12daShopItem_cFv */
//	8059EC34: 8059F438 (m_cullfar_max__12daShopItem_c)
//	8059EC38: 8059F438 (m_cullfar_max__12daShopItem_c)
//	8059EC5C: 8001A548 (fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff)
//	8059EC60: 80450C70 (mSystemFar__14mDoLib_clipper)
//	8059EC64: 80450C70 (mSystemFar__14mDoLib_clipper)
//	8059EC84: 80037A74 (show__12daItemBase_cFv)
//	8059EC88: 8059F48C (stringBase0)
//	8059EC8C: 8059F48C (stringBase0)
//	8059EC94: 804061C0 (g_dComIfG_gameInfo)
//	8059EC98: 804061C0 (g_dComIfG_gameInfo)
//	8059ECA0: 80368994 (strcmp)
//	8059ECAC: 804061C0 (g_dComIfG_gameInfo)
//	8059ECB0: 804061C0 (g_dComIfG_gameInfo)
//	8059ECC8: 803792E8 (mData__12daShopItem_c)
//	8059ECCC: 803792E8 (mData__12daShopItem_c)
//	8059ECF8: 803792E8 (mData__12daShopItem_c)
//	8059ECFC: 803792E8 (mData__12daShopItem_c)
//	8059ED30: 8059ED58 (set_mtx__12daShopItem_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::CreateInit() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/CreateInit__12daShopItem_cFv.s"
}
#pragma pop

/* 8059ED58-8059EEF4 019C+00 s=2 e=0 z=0  None .text      set_mtx__12daShopItem_cFv */
//	8059ED98: 803DD470 (now__14mDoMtx_stack_c)
//	8059ED9C: 803DD470 (now__14mDoMtx_stack_c)
//	8059EDAC: 803468E8 (PSMTXTrans)
//	8059EDBC: 803792E8 (mData__12daShopItem_c)
//	8059EDC0: 803792E8 (mData__12daShopItem_c)
//	8059EDCC: 803DD470 (now__14mDoMtx_stack_c)
//	8059EDD0: 803DD470 (now__14mDoMtx_stack_c)
//	8059EDE4: 803468E8 (PSMTXTrans)
//	8059EDE8: 803DD470 (now__14mDoMtx_stack_c)
//	8059EDEC: 803DD470 (now__14mDoMtx_stack_c)
//	8059EDF4: 803464B0 (PSMTXCopy)
//	8059EDF8: 803DD470 (now__14mDoMtx_stack_c)
//	8059EDFC: 803DD470 (now__14mDoMtx_stack_c)
//	8059EE04: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	8059EE18: 803DD470 (now__14mDoMtx_stack_c)
//	8059EE1C: 803DD470 (now__14mDoMtx_stack_c)
//	8059EE2C: 8000C2A0 (mDoMtx_ZXYrotM__FPA4_fsss)
//	8059EE3C: 803792E8 (mData__12daShopItem_c)
//	8059EE40: 803792E8 (mData__12daShopItem_c)
//	8059EE54: 803DD470 (now__14mDoMtx_stack_c)
//	8059EE58: 803DD470 (now__14mDoMtx_stack_c)
//	8059EE68: 8000C2A0 (mDoMtx_ZXYrotM__FPA4_fsss)
//	8059EE6C: 803DD470 (now__14mDoMtx_stack_c)
//	8059EE70: 803DD470 (now__14mDoMtx_stack_c)
//	8059EE80: 8000C2A0 (mDoMtx_ZXYrotM__FPA4_fsss)
//	8059EE94: 803DD470 (now__14mDoMtx_stack_c)
//	8059EE98: 803DD470 (now__14mDoMtx_stack_c)
//	8059EEA0: 8000C39C (mDoMtx_XrotM__FPA4_fs)
//	8059EEB0: 803792E8 (mData__12daShopItem_c)
//	8059EEB4: 803792E8 (mData__12daShopItem_c)
//	8059EEC0: 803DD470 (now__14mDoMtx_stack_c)
//	8059EEC4: 803DD470 (now__14mDoMtx_stack_c)
//	8059EEC8: 8000C39C (mDoMtx_XrotM__FPA4_fs)
//	8059EECC: 803DD470 (now__14mDoMtx_stack_c)
//	8059EED0: 803DD470 (now__14mDoMtx_stack_c)
//	8059EEDC: 803464B0 (PSMTXCopy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::set_mtx() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/set_mtx__12daShopItem_cFv.s"
}
#pragma pop

/* 8059EEF4-8059EF48 0054+00 s=1 e=0 z=0  None .text      _execute__12daShopItem_cFv */
//	8059EF08: 8059F47C (lit_3722)
//	8059EF0C: 8059F47C (lit_3722)
//	8059EF24: 8014503C (animPlay__12daItemBase_cFffffff)
//	8059EF2C: 8059ED58 (set_mtx__12daShopItem_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::_execute() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/_execute__12daShopItem_cFv.s"
}
#pragma pop

/* 8059EF48-8059EF9C 0054+00 s=1 e=0 z=0  None .text      _draw__12daShopItem_cFv */
//	8059EF5C: 80037ACC (chkDraw__12daItemBase_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::_draw() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/_draw__12daShopItem_cFv.s"
}
#pragma pop

/* 8059EF9C-8059EFA0 0004+00 s=1 e=0 z=0  None .text      setListStart__12daShopItem_cFv */
void daShopItem_c::setListStart() {
    /* empty function */
}

/* 8059EFA0-8059F024 0084+00 s=1 e=0 z=0  None .text      setShadow__12daShopItem_cFv */
//	8059EFB4: 8059F438 (m_cullfar_max__12daShopItem_c)
//	8059EFB8: 8059F438 (m_cullfar_max__12daShopItem_c)
//	8059EFC8: 80144D70 (setShadow__12daItemBase_cFv)
//	8059F000: 804248D0 (mSimpleTexObj__21dDlst_shadowControl_c)
//	8059F004: 804248D0 (mSimpleTexObj__21dDlst_shadowControl_c)
//	8059F008: 8002E910
//(dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::setShadow() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/setShadow__12daShopItem_cFv.s"
}
#pragma pop

/* 8059F024-8059F044 0020+00 s=1 e=0 z=0  None .text      chkFlag__12daShopItem_cFi */
//	8059F02C: 803792E8 (mData__12daShopItem_c)
//	8059F030: 803792E8 (mData__12daShopItem_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::chkFlag(int param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/chkFlag__12daShopItem_cFi.s"
}
#pragma pop

/* 8059F044-8059F064 0020+00 s=1 e=0 z=0  None .text      getTevFrm__12daShopItem_cFv */
//	8059F04C: 803792E8 (mData__12daShopItem_c)
//	8059F050: 803792E8 (mData__12daShopItem_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::getTevFrm() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/getTevFrm__12daShopItem_cFv.s"
}
#pragma pop

/* 8059F064-8059F084 0020+00 s=1 e=0 z=0  None .text      getBtpFrm__12daShopItem_cFv */
//	8059F06C: 803792E8 (mData__12daShopItem_c)
//	8059F070: 803792E8 (mData__12daShopItem_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::getBtpFrm() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/getBtpFrm__12daShopItem_cFv.s"
}
#pragma pop

/* 8059F084-8059F0A0 001C+00 s=1 e=0 z=0  None .text      getShadowSize__12daShopItem_cFv */
//	8059F08C: 803792E8 (mData__12daShopItem_c)
//	8059F090: 803792E8 (mData__12daShopItem_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::getShadowSize() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/getShadowSize__12daShopItem_cFv.s"
}
#pragma pop

/* 8059F0A0-8059F0BC 001C+00 s=1 e=0 z=0  None .text      getCollisionH__12daShopItem_cFv */
//	8059F0A8: 803792E8 (mData__12daShopItem_c)
//	8059F0AC: 803792E8 (mData__12daShopItem_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::getCollisionH() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/getCollisionH__12daShopItem_cFv.s"
}
#pragma pop

/* 8059F0BC-8059F0D8 001C+00 s=1 e=0 z=0  None .text      getCollisionR__12daShopItem_cFv */
//	8059F0C4: 803792E8 (mData__12daShopItem_c)
//	8059F0C8: 803792E8 (mData__12daShopItem_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daShopItem_c::getCollisionR() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/getCollisionR__12daShopItem_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8059F49C-8059F4BC 0020+00 s=1 e=0 z=0  None .data      daShopItemMethodTable */
SECTION_DATA static void* daShopItemMethodTable[8] = {
    (void*)daShopItem_Create__FPv,
    (void*)daShopItem_Delete__FPv,
    (void*)daShopItem_Execute__FPv,
    (void*)daShopItem_IsDelete__FPv,
    (void*)daShopItem_Draw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8059F4BC-8059F4EC 0030+00 s=0 e=0 z=1  None .data      g_profile_ShopItem */
SECTION_DATA void* g_profile_ShopItem[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x021E0000, (void*)&g_fpcLf_Method,
    (void*)0x00000968, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00F20000, (void*)&daShopItemMethodTable,
    (void*)0x00060100, (void*)0x000E0000,
};

/* 8059F4EC-8059F4F8 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGCyl */
SECTION_DATA void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 8059F4F8-8059F504 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 8059F504-8059F528 0024+00 s=2 e=0 z=0  None .data      __vt__12dBgS_ObjAcch */
SECTION_DATA void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8059F428,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8059F420,
};

/* 8059F528-8059F56C 0044+00 s=1 e=0 z=0  None .data      __vt__12daShopItem_c */
SECTION_DATA void* __vt__12daShopItem_c[17] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)DrawBase__12daItemBase_cFv,
    (void*)setListStart__12daShopItem_cFv,
    (void*)settingBeforeDraw__12daItemBase_cFv,
    (void*)setTevStr__12daItemBase_cFv,
    (void*)setShadow__12daShopItem_cFv,
    (void*)animEntry__12daItemBase_cFv,
    (void*)RotateYBase__12daItemBase_cFv,
    (void*)clothCreate__12daItemBase_cFv,
    (void*)__CreateHeap__12daItemBase_cFv,
    (void*)chkFlag__12daShopItem_cFi,
    (void*)getTevFrm__12daShopItem_cFv,
    (void*)getBtpFrm__12daShopItem_cFv,
    (void*)getShadowSize__12daShopItem_cFv,
    (void*)getCollisionH__12daShopItem_cFv,
    (void*)getCollisionR__12daShopItem_cFv,
};

/* 8059F0D8-8059F294 01BC+00 s=1 e=0 z=0  None .text      daShopItem_Create__FPv */
//	8059F0E8: 803621DC (_savegpr_29)
//	8059F108: 80018B64 (__ct__10fopAc_ac_cFv)
//	8059F10C: 803B3610 (__vt__12daItemBase_c)
//	8059F110: 803B3610 (__vt__12daItemBase_c)
//	8059F120: 800760A0 (__ct__9dBgS_AcchFv)
//	8059F124: 8059F504 (__vt__12dBgS_ObjAcch)
//	8059F128: 8059F504 (__vt__12dBgS_ObjAcch)
//	8059F144: 80078E68 (SetObj__16dBgS_PolyPassChkFv)
//	8059F14C: 80075EAC (__ct__12dBgS_AcchCirFv)
//	8059F150: 803C3728 (__vt__9cCcD_Stts)
//	8059F154: 803C3728 (__vt__9cCcD_Stts)
//	8059F160: 80083760 (__ct__10dCcD_GSttsFv)
//	8059F164: 803AC2E4 (__vt__9dCcD_Stts)
//	8059F168: 803AC2E4 (__vt__9dCcD_Stts)
//	8059F180: 80083A28 (__ct__12dCcD_GObjInfFv)
//	8059F184: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	8059F188: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	8059F190: 8059F4F8 (__vt__8cM3dGAab)
//	8059F194: 8059F4F8 (__vt__8cM3dGAab)
//	8059F19C: 8059F4EC (__vt__8cM3dGCyl)
//	8059F1A0: 8059F4EC (__vt__8cM3dGCyl)
//	8059F1A8: 803C35A4 (__vt__12cCcD_CylAttr)
//	8059F1AC: 803C35A4 (__vt__12cCcD_CylAttr)
//	8059F1BC: 803AC050 (__vt__8dCcD_Cyl)
//	8059F1C0: 803AC050 (__vt__8dCcD_Cyl)
//	8059F1D8: 8059F528 (__vt__12daShopItem_c)
//	8059F1DC: 8059F528 (__vt__12daShopItem_c)
//	8059F208: 8059E9B8 (getShopArcname__12daShopItem_cFv)
//	8059F220: 8059E9B8 (getShopArcname__12daShopItem_cFv)
//	8059F22C: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	8059F248: 8059EC04 (getHeapSize__12daShopItem_cFv)
//	8059F254: 80037C24 (CheckShopItemCreateHeap__FP10fopAc_ac_c)
//	8059F258: 80037C24 (CheckShopItemCreateHeap__FP10fopAc_ac_c)
//	8059F25C: 8001A4B0 (fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl)
//	8059F274: 8059EC1C (CreateInit__12daShopItem_cFv)
//	8059F280: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daShopItem_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/daShopItem_Create__FPv.s"
}
#pragma pop

/* 8059F294-8059F2DC 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv */
//	8059F2AC: 8059F4EC (__vt__8cM3dGCyl)
//	8059F2B0: 8059F4EC (__vt__8cM3dGCyl)
//	8059F2C0: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 8059F2DC-8059F324 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
//	8059F2F4: 8059F4F8 (__vt__8cM3dGAab)
//	8059F2F8: 8059F4F8 (__vt__8cM3dGAab)
//	8059F308: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 8059F324-8059F394 0070+00 s=3 e=0 z=0  None .text      __dt__12dBgS_ObjAcchFv */
//	8059F344: 8059F504 (__vt__12dBgS_ObjAcch)
//	8059F348: 8059F504 (__vt__12dBgS_ObjAcch)
//	8059F364: 80075F94 (__dt__9dBgS_AcchFv)
//	8059F374: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 8059F394-8059F3D0 003C+00 s=1 e=0 z=0  None .text      daShopItem_Delete__FPv */
//	8059F3A8: 8059E9B8 (getShopArcname__12daShopItem_cFv)
//	8059F3B4: 80144724 (DeleteBase__12daItemBase_cFPCc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daShopItem_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/daShopItem_Delete__FPv.s"
}
#pragma pop

/* 8059F3D0-8059F3F4 0024+00 s=1 e=0 z=0  None .text      daShopItem_Draw__FPv */
//	8059F3DC: 8059EF48 (_draw__12daShopItem_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daShopItem_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/daShopItem_Draw__FPv.s"
}
#pragma pop

/* 8059F3F4-8059F418 0024+00 s=1 e=0 z=0  None .text      daShopItem_Execute__FPv */
//	8059F400: 8059EEF4 (_execute__12daShopItem_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daShopItem_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/daShopItem_Execute__FPv.s"
}
#pragma pop

/* 8059F418-8059F420 0008+00 s=1 e=0 z=0  None .text      daShopItem_IsDelete__FPv */
static bool daShopItem_IsDelete(void* param_0) {
    return true;
}

/* 8059F420-8059F428 0008+00 s=1 e=0 z=0  None .text      @36@__dt__12dBgS_ObjAcchFv */
//	8059F424: 8059F324 (__dt__12dBgS_ObjAcchFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8059F420() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/func_8059F420.s"
}
#pragma pop

/* 8059F428-8059F430 0008+00 s=1 e=0 z=0  None .text      @20@__dt__12dBgS_ObjAcchFv */
//	8059F42C: 8059F324 (__dt__12dBgS_ObjAcchFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8059F428() {
    nofralloc
#include "asm/rel/d/a/d_a_shop_item/d_a_shop_item/func_8059F428.s"
}
#pragma pop
