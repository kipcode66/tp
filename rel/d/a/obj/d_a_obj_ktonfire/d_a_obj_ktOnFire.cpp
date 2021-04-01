//
// Generated By: dol2asm
// Translation Unit: d_a_obj_ktOnFire
//

#include "rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct mDoHIO_entry_c {
    /* 8058C630 */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daKtOnFire_c {
    /* 8058C678 */ void setBaseMtx();
    /* 8058C6D0 */ void create();
    /* 8058C960 */ void lightInit();
    /* 8058C9D4 */ void setLight();
    /* 8058C9F8 */ void cutLight();
    /* 8058CA1C */ void Execute();
    /* 8058CDF8 */ bool Draw();
    /* 8058CE00 */ void Delete();
};

struct daKtOnFire_HIO_c {
    /* 8058C60C */ daKtOnFire_HIO_c();
    /* 8058CEA8 */ ~daKtOnFire_HIO_c();
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 800352B0 */ void offSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dPa_levelEcallBack {};

struct cXyz {};

struct csXyz {};

struct dKy_tevstr_c {};

struct _GXColor {};

struct dPa_control_c {
    /* 8004D4CC */ void set(u32, u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*,
                            cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*,
                            _GXColor const*, cXyz const*, f32);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
    /* 80084548 */ void GetTgHitGObj();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F1F8 */ void SetH(f32);
    /* 8026F200 */ void SetR(f32);
    /* 8058C8D0 */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 8058C918 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct Vec {};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct LIGHT_INFLUENCE {};

//
// Forward References:
//

static void daKtOnFire_Draw(daKtOnFire_c*);
static void daKtOnFire_Execute(daKtOnFire_c*);
static void daKtOnFire_Delete(daKtOnFire_c*);
static void daKtOnFire_Create(fopAc_ac_c*);

extern "C" void __ct__16daKtOnFire_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__12daKtOnFire_cFv();
extern "C" void create__12daKtOnFire_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void lightInit__12daKtOnFire_cFv();
extern "C" void setLight__12daKtOnFire_cFv();
extern "C" void cutLight__12daKtOnFire_cFv();
extern "C" void Execute__12daKtOnFire_cFv();
extern "C" bool Draw__12daKtOnFire_cFv();
extern "C" void Delete__12daKtOnFire_cFv();
extern "C" static void daKtOnFire_Draw__FP12daKtOnFire_c();
extern "C" static void daKtOnFire_Execute__FP12daKtOnFire_c();
extern "C" static void daKtOnFire_Delete__FP12daKtOnFire_c();
extern "C" static void daKtOnFire_Create__FP10fopAc_ac_c();
extern "C" void __dt__16daKtOnFire_HIO_cFv();
extern "C" void __sinit_d_a_obj_ktOnFire_cpp();
extern "C" extern u32 const lit_3797;
extern "C" extern u32 const lit_3798;
extern "C" extern u32 const lit_3913;
extern "C" extern u32 const lit_3914;
extern "C" extern u32 const lit_3915;
extern "C" extern void* g_profile_Tag_KtOnFire[12];
extern "C" extern void* __vt__8cM3dGCyl[3];
extern "C" extern void* __vt__8cM3dGAab[3];
extern "C" extern void* __vt__16daKtOnFire_HIO_c[3];
extern "C" extern void* __vt__14mDoHIO_entry_c[3];

//
// External References:
//

void mDoMtx_ZXYrotM(f32 (*)[4], s16, s16, s16);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void dComIfGp_getReverb(int);
void dKy_plight_set(LIGHT_INFLUENCE*);
void dKy_plight_cut(LIGHT_INFLUENCE*);
void operator delete(void*);

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void dKy_plight_set__FP15LIGHT_INFLUENCE();
extern "C" void dKy_plight_cut__FP15LIGHT_INFLUENCE();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 8058CFDC-8058CFF4 0018+00 s=1 e=0 z=0  None .data      l_cull_box */
SECTION_DATA static u8 l_cull_box[24] = {
    0xC2, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC2, 0x48, 0x00, 0x00,
    0x42, 0x48, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00,
};

/* 8058CFF4-8058D038 0044+00 s=2 e=0 z=0  None .data      mCcDCyl__12daKtOnFire_c */
SECTION_DATA static u8 mCcDCyl__12daKtOnFire_c[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8058D038-8058D058 0020+00 s=1 e=0 z=0  None .data      l_daKtOnFire_Method */
SECTION_DATA static void* l_daKtOnFire_Method[8] = {
    (void*)daKtOnFire_Create__FP10fopAc_ac_c,
    (void*)daKtOnFire_Delete__FP12daKtOnFire_c,
    (void*)daKtOnFire_Execute__FP12daKtOnFire_c,
    (void*)NULL,
    (void*)daKtOnFire_Draw__FP12daKtOnFire_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8058D058-8058D088 0030+00 s=0 e=0 z=1  None .data      g_profile_Tag_KtOnFire */
SECTION_DATA void* g_profile_Tag_KtOnFire[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01680000, (void*)&g_fpcLf_Method,
    (void*)0x00000728, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01F60000, (void*)&l_daKtOnFire_Method,
    (void*)0x00044000, (void*)0x000E0000,
};

/* 8058D088-8058D094 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGCyl */
SECTION_DATA void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 8058D094-8058D0A0 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 8058D0A0-8058D0AC 000C+00 s=2 e=0 z=0  None .data      __vt__16daKtOnFire_HIO_c */
SECTION_DATA void* __vt__16daKtOnFire_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16daKtOnFire_HIO_cFv,
};

/* 8058D0AC-8058D0B8 000C+00 s=3 e=0 z=0  None .data      __vt__14mDoHIO_entry_c */
SECTION_DATA void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 8058C60C-8058C630 0024+00 s=1 e=0 z=0  None .text      __ct__16daKtOnFire_HIO_cFv */
//	8058C60C: 8058D0AC (__vt__14mDoHIO_entry_c)
//	8058C610: 8058D0AC (__vt__14mDoHIO_entry_c)
//	8058C618: 8058D0A0 (__vt__16daKtOnFire_HIO_c)
//	8058C61C: 8058D0A0 (__vt__16daKtOnFire_HIO_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daKtOnFire_HIO_c::daKtOnFire_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/__ct__16daKtOnFire_HIO_cFv.s"
}
#pragma pop

/* 8058C630-8058C678 0048+00 s=1 e=0 z=0  None .text      __dt__14mDoHIO_entry_cFv */
//	8058C648: 8058D0AC (__vt__14mDoHIO_entry_c)
//	8058C64C: 8058D0AC (__vt__14mDoHIO_entry_c)
//	8058C65C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 8058C678-8058C6D0 0058+00 s=1 e=0 z=0  None .text      setBaseMtx__12daKtOnFire_cFv */
//	8058C68C: 803DD470 (now__14mDoMtx_stack_c)
//	8058C690: 803DD470 (now__14mDoMtx_stack_c)
//	8058C6A0: 803468E8 (PSMTXTrans)
//	8058C6A4: 803DD470 (now__14mDoMtx_stack_c)
//	8058C6A8: 803DD470 (now__14mDoMtx_stack_c)
//	8058C6B8: 8000C2A0 (mDoMtx_ZXYrotM__FPA4_fsss)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daKtOnFire_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/setBaseMtx__12daKtOnFire_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8058CF88-8058CFB8 0030+00 s=3 e=0 z=0  None .rodata    mCcDObjInfo__12daKtOnFire_c */
SECTION_RODATA static u8 const mCcDObjInfo__12daKtOnFire_c[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13,
    0xD8, 0xFB, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8058CFB8-8058CFC0 0004+04 s=1 e=0 z=0  None .rodata    @3710 */
SECTION_RODATA static u32 const lit_3710[1 + 1 /* padding */] = {
    0x41200000,
    /* padding */
    0x00000000,
};

/* 8058CFC0-8058CFC8 0008+00 s=1 e=0 z=0  None .rodata    @3712 */
SECTION_RODATA static u8 const lit_3712[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8058C6D0-8058C8D0 0200+00 s=1 e=0 z=0  None .text      create__12daKtOnFire_cFv */
//	8058C700: 80018B64 (__ct__10fopAc_ac_cFv)
//	8058C704: 803C3728 (__vt__9cCcD_Stts)
//	8058C708: 803C3728 (__vt__9cCcD_Stts)
//	8058C714: 80083760 (__ct__10dCcD_GSttsFv)
//	8058C718: 803AC2E4 (__vt__9dCcD_Stts)
//	8058C71C: 803AC2E4 (__vt__9dCcD_Stts)
//	8058C734: 80083A28 (__ct__12dCcD_GObjInfFv)
//	8058C738: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	8058C73C: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	8058C744: 8058D094 (__vt__8cM3dGAab)
//	8058C748: 8058D094 (__vt__8cM3dGAab)
//	8058C750: 8058D088 (__vt__8cM3dGCyl)
//	8058C754: 8058D088 (__vt__8cM3dGCyl)
//	8058C75C: 803C35A4 (__vt__12cCcD_CylAttr)
//	8058C760: 803C35A4 (__vt__12cCcD_CylAttr)
//	8058C770: 803AC050 (__vt__8dCcD_Cyl)
//	8058C774: 803AC050 (__vt__8dCcD_Cyl)
//	8058C79C: 8058C678 (setBaseMtx__12daKtOnFire_cFv)
//	8058C7B0: 80083860 (Init__9dCcD_SttsFiiP10fopAc_ac_c)
//	8058C7B8: 8058CFF4 (mCcDCyl__12daKtOnFire_c)
//	8058C7BC: 8058CFF4 (mCcDCyl__12daKtOnFire_c)
//	8058C7C0: 800848B4 (Set__8dCcD_CylFRC11dCcD_SrcCyl)
//	8058C7CC: 8058CFDC (l_cull_box)
//	8058C7D0: 8058CFDC (l_cull_box)
//	8058C80C: 8001A548 (fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff)
//	8058C824: 8058CFB8 (lit_3710)
//	8058C828: 8058CFB8 (lit_3710)
//	8058C82C: 8058CFC0 (lit_3712)
//	8058C830: 8058CFC0 (lit_3712)
//	8058C860: 8058C960 (lightInit__12daKtOnFire_cFv)
//	8058C870: 804061C0 (g_dComIfG_gameInfo)
//	8058C874: 804061C0 (g_dComIfG_gameInfo)
//	8058C888: 80035360 (isSwitch__10dSv_info_cCFii)
//	8058C8A8: 8058C9D4 (setLight__12daKtOnFire_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daKtOnFire_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/create__12daKtOnFire_cFv.s"
}
#pragma pop

/* 8058C8D0-8058C918 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv */
//	8058C8E8: 8058D088 (__vt__8cM3dGCyl)
//	8058C8EC: 8058D088 (__vt__8cM3dGCyl)
//	8058C8FC: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 8058C918-8058C960 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
//	8058C930: 8058D094 (__vt__8cM3dGAab)
//	8058C934: 8058D094 (__vt__8cM3dGAab)
//	8058C944: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 8058C960-8058C9D4 0074+00 s=1 e=0 z=0  None .text      lightInit__12daKtOnFire_cFv */
//	8058C960: 8058CF88 (mCcDObjInfo__12daKtOnFire_c)
//	8058C964: 8058CF88 (mCcDObjInfo__12daKtOnFire_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daKtOnFire_c::lightInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/lightInit__12daKtOnFire_cFv.s"
}
#pragma pop

/* 8058C9D4-8058C9F8 0024+00 s=2 e=0 z=0  None .text      setLight__12daKtOnFire_cFv */
//	8058C9E4: 801A7790 (dKy_plight_set__FP15LIGHT_INFLUENCE)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daKtOnFire_c::setLight() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/setLight__12daKtOnFire_cFv.s"
}
#pragma pop

/* 8058C9F8-8058CA1C 0024+00 s=1 e=0 z=0  None .text      cutLight__12daKtOnFire_cFv */
//	8058CA08: 801A792C (dKy_plight_cut__FP15LIGHT_INFLUENCE)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daKtOnFire_c::cutLight() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/cutLight__12daKtOnFire_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8058D0C0-8058D0CC 000C+00 s=1 e=0 z=0  None .bss       @3619 */
static u8 lit_3619[12];

/* 8058D0CC-8058D0D4 0008+00 s=2 e=0 z=0  None .bss       l_HIO */
static u8 l_HIO[8];

/* 8058CA1C-8058CDF8 03DC+00 s=1 e=0 z=0  None .text      Execute__12daKtOnFire_cFv */
//	8058CA2C: 803621DC (_savegpr_29)
//	8058CA34: 8058CF88 (mCcDObjInfo__12daKtOnFire_c)
//	8058CA38: 8058CF88 (mCcDObjInfo__12daKtOnFire_c)
//	8058CA40: 804061C0 (g_dComIfG_gameInfo)
//	8058CA44: 804061C0 (g_dComIfG_gameInfo)
//	8058CA58: 80035360 (isSwitch__10dSv_info_cCFii)
//	8058CA74: 804061C0 (g_dComIfG_gameInfo)
//	8058CA78: 804061C0 (g_dComIfG_gameInfo)
//	8058CA8C: 800352B0 (offSwitch__10dSv_info_cFii)
//	8058CA9C: 8058C9F8 (cutLight__12daKtOnFire_cFv)
//	8058CAAC: 80084460 (ChkTgHit__12dCcD_GObjInfFv)
//	8058CABC: 80084548 (GetTgHitGObj__12dCcD_GObjInfFv)
//	8058CAFC: 8002D06C (dComIfGp_getReverb__Fi)
//	8058CB10: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	8058CB14: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	8058CB3C: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	8058CB40: 8058D0CC (l_HIO)
//	8058CB44: 8058D0CC (l_HIO)
//	8058CB54: 8058C9D4 (setLight__12daKtOnFire_cFv)
//	8058CB90: 8002D06C (dComIfGp_getReverb__Fi)
//	8058CBA4: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	8058CBA8: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	8058CBD0: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	8058CBD4: 8058D0CC (l_HIO)
//	8058CBD8: 8058D0CC (l_HIO)
//	8058CBE8: 8058C9F8 (cutLight__12daKtOnFire_cFv)
//	8058CBF4: 8026F200 (SetR__8cM3dGCylFf)
//	8058CC00: 8026F1F8 (SetH__8cM3dGCylFf)
//	8058CC0C: 8026F1DC (SetC__8cM3dGCylFRC4cXyz)
//	8058CC10: 804061C0 (g_dComIfG_gameInfo)
//	8058CC14: 804061C0 (g_dComIfG_gameInfo)
//	8058CC20: 80264BA8 (Set__4cCcSFP8cCcD_Obj)
//	8058CC30: 804061C0 (g_dComIfG_gameInfo)
//	8058CC34: 804061C0 (g_dComIfG_gameInfo)
//	8058CC80: 8004D4CC
//(set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	8058CCD0: 8004D4CC
//(set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	8058CD20: 8004D4CC
//(set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	8058CD30: 8002D06C (dComIfGp_getReverb__Fi)
//	8058CD44: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	8058CD48: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	8058CD70: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	8058CDA0: 804061C0 (g_dComIfG_gameInfo)
//	8058CDA4: 804061C0 (g_dComIfG_gameInfo)
//	8058CDB8: 80035200 (onSwitch__10dSv_info_cFii)
//	8058CDC0: 804061C0 (g_dComIfG_gameInfo)
//	8058CDC4: 804061C0 (g_dComIfG_gameInfo)
//	8058CDD8: 800352B0 (offSwitch__10dSv_info_cFii)
//	8058CDE4: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daKtOnFire_c::Execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/Execute__12daKtOnFire_cFv.s"
}
#pragma pop

/* 8058CDF8-8058CE00 0008+00 s=1 e=0 z=0  None .text      Draw__12daKtOnFire_cFv */
bool daKtOnFire_c::Draw() {
    return true;
}

/* 8058CE00-8058CE28 0028+00 s=1 e=0 z=0  None .text      Delete__12daKtOnFire_cFv */
//	8058CE10: 801A792C (dKy_plight_cut__FP15LIGHT_INFLUENCE)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daKtOnFire_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/Delete__12daKtOnFire_cFv.s"
}
#pragma pop

/* 8058CE28-8058CE48 0020+00 s=1 e=0 z=0  None .text      daKtOnFire_Draw__FP12daKtOnFire_c */
//	8058CE34: 8058CDF8 (Draw__12daKtOnFire_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daKtOnFire_Draw(daKtOnFire_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/daKtOnFire_Draw__FP12daKtOnFire_c.s"
}
#pragma pop

/* 8058CE48-8058CE68 0020+00 s=1 e=0 z=0  None .text      daKtOnFire_Execute__FP12daKtOnFire_c */
//	8058CE54: 8058CA1C (Execute__12daKtOnFire_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daKtOnFire_Execute(daKtOnFire_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/daKtOnFire_Execute__FP12daKtOnFire_c.s"
}
#pragma pop

/* 8058CE68-8058CE88 0020+00 s=1 e=0 z=0  None .text      daKtOnFire_Delete__FP12daKtOnFire_c */
//	8058CE74: 8058CE00 (Delete__12daKtOnFire_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daKtOnFire_Delete(daKtOnFire_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/daKtOnFire_Delete__FP12daKtOnFire_c.s"
}
#pragma pop

/* 8058CE88-8058CEA8 0020+00 s=1 e=0 z=0  None .text      daKtOnFire_Create__FP10fopAc_ac_c */
//	8058CE94: 8058C6D0 (create__12daKtOnFire_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daKtOnFire_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/daKtOnFire_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 8058CEA8-8058CF04 005C+00 s=2 e=0 z=0  None .text      __dt__16daKtOnFire_HIO_cFv */
//	8058CEC0: 8058D0A0 (__vt__16daKtOnFire_HIO_c)
//	8058CEC4: 8058D0A0 (__vt__16daKtOnFire_HIO_c)
//	8058CED0: 8058D0AC (__vt__14mDoHIO_entry_c)
//	8058CED4: 8058D0AC (__vt__14mDoHIO_entry_c)
//	8058CEE8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daKtOnFire_HIO_c::~daKtOnFire_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/__dt__16daKtOnFire_HIO_cFv.s"
}
#pragma pop

/* 8058CF04-8058CF74 0070+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_ktOnFire_cpp */
//	8058CF10: 8058D0CC (l_HIO)
//	8058CF14: 8058D0CC (l_HIO)
//	8058CF18: 8058C60C (__ct__16daKtOnFire_HIO_cFv)
//	8058CF1C: 8058CEA8 (__dt__16daKtOnFire_HIO_cFv)
//	8058CF20: 8058CEA8 (__dt__16daKtOnFire_HIO_cFv)
//	8058CF24: 8058D0C0 (lit_3619)
//	8058CF28: 8058D0C0 (lit_3619)
//	8058CF2C: 8058C598 (__register_global_object)
//	8058CF30: 8058CFF4 (mCcDCyl__12daKtOnFire_c)
//	8058CF34: 8058CFF4 (mCcDCyl__12daKtOnFire_c)
//	8058CF3C: 8058CF88 (mCcDObjInfo__12daKtOnFire_c)
//	8058CF40: 8058CF88 (mCcDObjInfo__12daKtOnFire_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_obj_ktOnFire_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire/__sinit_d_a_obj_ktOnFire_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_8058CF04 = (void*)__sinit_d_a_obj_ktOnFire_cpp;
#pragma pop

/* ############################################################################################## */
/* 8058CFC8-8058CFCC 0004+00 s=0 e=0 z=0  None .rodata    @3797 */
SECTION_RODATA u32 const lit_3797 = 0x43FA0000;

/* 8058CFCC-8058CFD0 0004+00 s=0 e=0 z=0  None .rodata    @3798 */
SECTION_RODATA u32 const lit_3798 = 0x3F800000;

/* 8058CFD0-8058CFD4 0004+00 s=0 e=0 z=0  None .rodata    @3913 */
SECTION_RODATA u32 const lit_3913 = 0xBF800000;

/* 8058CFD4-8058CFD8 0004+00 s=0 e=0 z=0  None .rodata    @3914 */
SECTION_RODATA u32 const lit_3914 = 0x42480000;

/* 8058CFD8-8058CFDC 0004+00 s=0 e=0 z=0  None .rodata    @3915 */
SECTION_RODATA u32 const lit_3915 = 0x42C80000;
