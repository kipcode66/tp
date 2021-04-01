//
// Generated By: dol2asm
// Translation Unit: d/d_model
//

#include "d/d_model.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct dMdl_obj_c {};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct dMdl_mng_c {
    /* 8009C6DC */ void search(J3DModelData*, u16, dKy_tevstr_c*);
    /* 8009C724 */ void entry(J3DModelData*, u16, dKy_tevstr_c*);
    /* 8009C8D8 */ void entry(J3DModelData*, u16, int);
    /* 8009C7AC */ void create();
    /* 8009C864 */ void remove();
    /* 8009C8C0 */ void reset();
};

struct dMdl_c {
    /* 8009C4FC */ void draw();
    /* 8009C650 */ void create(J3DModelData*, u16, dKy_tevstr_c*);
    /* 8009C668 */ void entryObj(dMdl_obj_c*);
    /* 8009C808 */ ~dMdl_c();
    /* 8009C930 */ dMdl_c();
};

struct J3DShape {
    /* 80315300 */ void loadPreDrawSetting() const;
};

struct J3DPacket;
struct J3DDrawBuffer {
    /* 8032548C */ void entryImm(J3DPacket*, u16);
};

struct J3DPacket {
    /* 80312750 */ bool entry(J3DDrawBuffer*);
};

//
// Forward References:
//

extern "C" void draw__6dMdl_cFv();
extern "C" void create__6dMdl_cFP12J3DModelDataUsP12dKy_tevstr_c();
extern "C" void entryObj__6dMdl_cFP10dMdl_obj_c();
extern "C" void search__10dMdl_mng_cFP12J3DModelDataUsP12dKy_tevstr_c();
extern "C" void entry__10dMdl_mng_cFP12J3DModelDataUsP12dKy_tevstr_c();
extern "C" void create__10dMdl_mng_cFv();
extern "C" void __dt__6dMdl_cFv();
extern "C" void remove__10dMdl_mng_cFv();
extern "C" void reset__10dMdl_mng_cFv();
extern "C" void entry__10dMdl_mng_cFP12J3DModelDataUsi();
extern "C" void __ct__6dMdl_cFv();
extern "C" extern void* __vt__6dMdl_c[5 + 1 /* padding */];

//
// External References:
//

void dKy_setLight_nowroom_actor(dKy_tevstr_c*);
void dKy_setLight_again();
void dKy_GxFog_tevstr_set(dKy_tevstr_c*);
void* operator new(u32);
void operator delete(void*);

extern "C" void dKy_setLight_nowroom_actor__FP12dKy_tevstr_c();
extern "C" void dKy_setLight_again__Fv();
extern "C" void dKy_GxFog_tevstr_set__FP12dKy_tevstr_c();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" bool entry__9J3DPacketFP13J3DDrawBuffer();
extern "C" void loadPreDrawSetting__8J3DShapeCFv();
extern "C" void entryImm__13J3DDrawBufferFP9J3DPacketUs();
extern "C" void PSMTXConcat();
extern "C" void GXSetChanAmbColor();
extern "C" void GXSetChanMatColor();
extern "C" void GXLoadPosMtxImm();
extern "C" void GXLoadNrmMtxImm();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" extern void* __vt__9J3DPacket[5];
extern "C" extern u8 mStatus__20dStage_roomControl_c[65792];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 j3dSys[284];
extern "C" extern u32 g_whiteColor;
extern "C" extern u8 sOldVcdVatCmd__8J3DShape[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80456B70-80456B78 0004+04 s=1 e=0 z=0  None .sbss2     @3621 */
SECTION_SBSS2 static u8 lit_3621[4 + 4 /* padding */];

/* 8009C4FC-8009C650 0154+00 s=1 e=0 z=0  None .text      draw__6dMdl_cFv */
//	8009C50C: 803621D8 (_savegpr_28)
//	8009C51C: 80434AC8 (j3dSys)
//	8009C520: 80434AC8 (j3dSys)
//	8009C53C: 804515D0 (sOldVcdVatCmd__8J3DShape)
//	8009C56C: 80315300 (loadPreDrawSetting__8J3DShapeCFv)
//	8009C570: 80456B70 (lit_3621)
//	8009C5AC: 8035D960 (GXSetChanAmbColor)
//	8009C5B0: 80450608 (g_whiteColor)
//	8009C5C0: 8035DA48 (GXSetChanMatColor)
//	8009C5C8: 801A6E9C (dKy_setLight_nowroom_actor__FP12dKy_tevstr_c)
//	8009C5CC: 801A75C0 (dKy_setLight_again__Fv)
//	8009C5D4: 801A8650 (dKy_GxFog_tevstr_set__FP12dKy_tevstr_c)
//	8009C5DC: 80434AC8 (j3dSys)
//	8009C5E0: 80434AC8 (j3dSys)
//	8009C5F4: 803464E4 (PSMTXConcat)
//	8009C600: 8036024C (GXLoadPosMtxImm)
//	8009C60C: 8036029C (GXLoadNrmMtxImm)
//	8009C63C: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMdl_c::draw() {
    nofralloc
#include "asm/d/d_model/draw__6dMdl_cFv.s"
}
#pragma pop

/* 8009C650-8009C668 0018+00 s=1 e=0 z=1  None .text
 * create__6dMdl_cFP12J3DModelDataUsP12dKy_tevstr_c             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMdl_c::create(J3DModelData* param_0, u16 param_1, dKy_tevstr_c* param_2) {
    nofralloc
#include "asm/d/d_model/create__6dMdl_cFP12J3DModelDataUsP12dKy_tevstr_c.s"
}
#pragma pop

/* 8009C668-8009C6DC 0074+00 s=0 e=0 z=5  None .text      entryObj__6dMdl_cFP10dMdl_obj_c */
//	8009C690: 804061C0 (g_dComIfG_gameInfo)
//	8009C694: 804061C0 (g_dComIfG_gameInfo)
//	8009C6A4: 8032548C (entryImm__13J3DDrawBufferFP9J3DPacketUs)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMdl_c::entryObj(dMdl_obj_c* param_0) {
    nofralloc
#include "asm/d/d_model/entryObj__6dMdl_cFP10dMdl_obj_c.s"
}
#pragma pop

/* 8009C6DC-8009C724 0048+00 s=1 e=0 z=0  None .text
 * search__10dMdl_mng_cFP12J3DModelDataUsP12dKy_tevstr_c        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMdl_mng_c::search(J3DModelData* param_0, u16 param_1, dKy_tevstr_c* param_2) {
    nofralloc
#include "asm/d/d_model/search__10dMdl_mng_cFP12J3DModelDataUsP12dKy_tevstr_c.s"
}
#pragma pop

/* 8009C724-8009C7AC 0088+00 s=1 e=0 z=0  None .text
 * entry__10dMdl_mng_cFP12J3DModelDataUsP12dKy_tevstr_c         */
//	8009C734: 803621D4 (_savegpr_27)
//	8009C748: 8009C6DC (search__10dMdl_mng_cFP12J3DModelDataUsP12dKy_tevstr_c)
//	8009C780: 8009C650 (create__6dMdl_cFP12J3DModelDataUsP12dKy_tevstr_c)
//	8009C798: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMdl_mng_c::entry(J3DModelData* param_0, u16 param_1, dKy_tevstr_c* param_2) {
    nofralloc
#include "asm/d/d_model/entry__10dMdl_mng_cFP12J3DModelDataUsP12dKy_tevstr_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450FA0-80450FA8 0004+04 s=4 e=0 z=0  None .sbss      m_myObj__10dMdl_mng_c */
static u8 m_myObj__10dMdl_mng_c[4 + 4 /* padding */];

/* 8009C7AC-8009C808 005C+00 s=0 e=1 z=0  None .text      create__10dMdl_mng_cFv */
//	8009C7C0: 802CEC4C (__nw__FUl)
//	8009C7CC: 8009C930 (__ct__6dMdl_cFv)
//	8009C7D0: 8009C930 (__ct__6dMdl_cFv)
//	8009C7D4: 8009C808 (__dt__6dMdl_cFv)
//	8009C7D8: 8009C808 (__dt__6dMdl_cFv)
//	8009C7E4: 80361D60 (__construct_array)
//	8009C7F0: 80450FA0 (m_myObj__10dMdl_mng_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMdl_mng_c::create() {
    nofralloc
#include "asm/d/d_model/create__10dMdl_mng_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803AF978-803AF990 0014+04 s=2 e=0 z=1  None .data      __vt__6dMdl_c */
SECTION_DATA void* __vt__6dMdl_c[5 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)entry__9J3DPacketFP13J3DDrawBuffer,
    (void*)draw__6dMdl_cFv,
    (void*)__dt__6dMdl_cFv,
    /* padding */
    NULL,
};

/* 8009C808-8009C864 005C+00 s=3 e=0 z=0  None .text      __dt__6dMdl_cFv */
//	8009C820: 803AF978 (__vt__6dMdl_c)
//	8009C824: 803AF978 (__vt__6dMdl_c)
//	8009C830: 803CD97C (__vt__9J3DPacket)
//	8009C834: 803CD97C (__vt__9J3DPacket)
//	8009C848: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMdl_c::~dMdl_c() {
    nofralloc
#include "asm/d/d_model/__dt__6dMdl_cFv.s"
}
#pragma pop

/* 8009C864-8009C8C0 005C+00 s=0 e=1 z=0  None .text      remove__10dMdl_mng_cFv */
//	8009C874: 80450FA0 (m_myObj__10dMdl_mng_c)
//	8009C888: 8009C808 (__dt__6dMdl_cFv)
//	8009C88C: 8009C808 (__dt__6dMdl_cFv)
//	8009C898: 80361CE8 (__destroy_arr)
//	8009C8A0: 802CED3C (__dl__FPv)
//	8009C8A8: 80450FA0 (m_myObj__10dMdl_mng_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMdl_mng_c::remove() {
    nofralloc
#include "asm/d/d_model/remove__10dMdl_mng_cFv.s"
}
#pragma pop

/* 8009C8C0-8009C8D8 0018+00 s=0 e=1 z=0  None .text      reset__10dMdl_mng_cFv */
//	8009C8C0: 80450FA0 (m_myObj__10dMdl_mng_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMdl_mng_c::reset() {
    nofralloc
#include "asm/d/d_model/reset__10dMdl_mng_cFv.s"
}
#pragma pop

/* 8009C8D8-8009C930 0058+00 s=0 e=0 z=4  None .text      entry__10dMdl_mng_cFP12J3DModelDataUsi */
//	8009C8EC: 80450FA0 (m_myObj__10dMdl_mng_c)
//	8009C904: 803F6094 (mStatus__20dStage_roomControl_c)
//	8009C908: 803F6094 (mStatus__20dStage_roomControl_c)
//	8009C91C: 8009C724 (entry__10dMdl_mng_cFP12J3DModelDataUsP12dKy_tevstr_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMdl_mng_c::entry(J3DModelData* param_0, u16 param_1, int param_2) {
    nofralloc
#include "asm/d/d_model/entry__10dMdl_mng_cFP12J3DModelDataUsi.s"
}
#pragma pop

/* 8009C930-8009C964 0034+00 s=1 e=0 z=0  None .text      __ct__6dMdl_cFv */
//	8009C930: 803CD97C (__vt__9J3DPacket)
//	8009C934: 803CD97C (__vt__9J3DPacket)
//	8009C94C: 803AF978 (__vt__6dMdl_c)
//	8009C950: 803AF978 (__vt__6dMdl_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMdl_c::dMdl_c() {
    nofralloc
#include "asm/d/d_model/__ct__6dMdl_cFv.s"
}
#pragma pop
