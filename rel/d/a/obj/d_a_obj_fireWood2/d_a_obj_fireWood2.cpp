//
// Generated By: dol2asm
// Translation Unit: d_a_obj_fireWood2
//

#include "rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct mDoHIO_entry_c {
    /* 80BE8288 */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daFireWood2_c {
    /* 80BE82D0 */ void setBaseMtx();
    /* 80BE8328 */ void create();
    /* 80BE8640 */ void lightInit();
    /* 80BE86CC */ void setLight();
    /* 80BE86FC */ void cutLight();
    /* 80BE872C */ void pointLightProc();
    /* 80BE87DC */ void Execute();
    /* 80BE8D98 */ bool Draw();
    /* 80BE8DA0 */ void Delete();
};

struct daFireWood2_HIO_c {
    /* 80BE824C */ daFireWood2_HIO_c();
    /* 80BE8E54 */ ~daFireWood2_HIO_c();
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
    /* 80BE85B0 */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80BE85F8 */ ~cM3dGAab();
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

static void daFireWood2_Draw(daFireWood2_c*);
static void daFireWood2_Execute(daFireWood2_c*);
static void daFireWood2_Delete(daFireWood2_c*);
static void daFireWood2_Create(fopAc_ac_c*);

extern "C" void __ct__17daFireWood2_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__13daFireWood2_cFv();
extern "C" void create__13daFireWood2_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void lightInit__13daFireWood2_cFv();
extern "C" void setLight__13daFireWood2_cFv();
extern "C" void cutLight__13daFireWood2_cFv();
extern "C" void pointLightProc__13daFireWood2_cFv();
extern "C" void Execute__13daFireWood2_cFv();
extern "C" bool Draw__13daFireWood2_cFv();
extern "C" void Delete__13daFireWood2_cFv();
extern "C" static void daFireWood2_Draw__FP13daFireWood2_c();
extern "C" static void daFireWood2_Execute__FP13daFireWood2_c();
extern "C" static void daFireWood2_Delete__FP13daFireWood2_c();
extern "C" static void daFireWood2_Create__FP10fopAc_ac_c();
extern "C" void __dt__17daFireWood2_HIO_cFv();
extern "C" void __sinit_d_a_obj_fireWood2_cpp();
extern "C" extern u32 const lit_3626;
extern "C" extern u32 const lit_3627;
extern "C" extern u32 const lit_3834;
extern "C" extern u32 const lit_3835;
extern "C" extern u8 const lit_3837[4];
extern "C" extern u32 const lit_3855;
extern "C" extern u32 const lit_3863;
extern "C" extern u32 const lit_3864;
extern "C" extern u32 const lit_3865;
extern "C" extern u32 const lit_3866;
extern "C" extern void* g_profile_Obj_FireWood2[12];
extern "C" extern void* __vt__8cM3dGCyl[3];
extern "C" extern void* __vt__8cM3dGAab[3];
extern "C" extern void* __vt__17daFireWood2_HIO_c[3];
extern "C" extern void* __vt__14mDoHIO_entry_c[3];

//
// External References:
//

void mDoMtx_ZXYrotM(f32 (*)[4], s16, s16, s16);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void dComIfGp_getReverb(int);
void dKy_plight_set(LIGHT_INFLUENCE*);
void dKy_plight_cut(LIGHT_INFLUENCE*);
void dKy_BossLight_set(cXyz*, _GXColor*, f32, u8);
void cLib_addCalc(f32*, f32, f32, f32, f32);
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
extern "C" void dKy_BossLight_set__FP4cXyzP8_GXColorfUc();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXTrans();
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
/* 80BE8F34-80BE8F38 0004+00 s=3 e=0 z=0  None .rodata    @3625 */
SECTION_RODATA static u32 const lit_3625 = 0x41700000;

/* 80BE8F98-80BE8FDC 0044+00 s=2 e=0 z=0  None .data      mCcDCyl__13daFireWood2_c */
SECTION_DATA static u8 mCcDCyl__13daFireWood2_c[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BE8FDC-80BE8FF4 0018+00 s=1 e=0 z=0  None .data      l_cull_box */
SECTION_DATA static u8 l_cull_box[24] = {
    0xC2, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC2, 0x48, 0x00, 0x00,
    0x42, 0x48, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00,
};

/* 80BE8FF4-80BE9014 0020+00 s=1 e=0 z=0  None .data      l_daFireWood2_Method */
SECTION_DATA static void* l_daFireWood2_Method[8] = {
    (void*)daFireWood2_Create__FP10fopAc_ac_c,
    (void*)daFireWood2_Delete__FP13daFireWood2_c,
    (void*)daFireWood2_Execute__FP13daFireWood2_c,
    (void*)NULL,
    (void*)daFireWood2_Draw__FP13daFireWood2_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BE9014-80BE9044 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_FireWood2 */
SECTION_DATA void* g_profile_Obj_FireWood2[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00390000, (void*)&g_fpcLf_Method,
    (void*)0x00000740, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01EE0000, (void*)&l_daFireWood2_Method,
    (void*)0x00060000, (void*)0x000E0000,
};

/* 80BE9044-80BE9050 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGCyl */
SECTION_DATA void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80BE9050-80BE905C 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80BE905C-80BE9068 000C+00 s=2 e=0 z=0  None .data      __vt__17daFireWood2_HIO_c */
SECTION_DATA void* __vt__17daFireWood2_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17daFireWood2_HIO_cFv,
};

/* 80BE9068-80BE9074 000C+00 s=3 e=0 z=0  None .data      __vt__14mDoHIO_entry_c */
SECTION_DATA void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80BE824C-80BE8288 003C+00 s=1 e=0 z=0  None .text      __ct__17daFireWood2_HIO_cFv */
//	80BE824C: 80BE8F34 (lit_3625)
//	80BE8250: 80BE8F34 (lit_3625)
//	80BE8254: 80BE9068 (__vt__14mDoHIO_entry_c)
//	80BE8258: 80BE9068 (__vt__14mDoHIO_entry_c)
//	80BE8260: 80BE905C (__vt__17daFireWood2_HIO_c)
//	80BE8264: 80BE905C (__vt__17daFireWood2_HIO_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daFireWood2_HIO_c::daFireWood2_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/__ct__17daFireWood2_HIO_cFv.s"
}
#pragma pop

/* 80BE8288-80BE82D0 0048+00 s=1 e=0 z=0  None .text      __dt__14mDoHIO_entry_cFv */
//	80BE82A0: 80BE9068 (__vt__14mDoHIO_entry_c)
//	80BE82A4: 80BE9068 (__vt__14mDoHIO_entry_c)
//	80BE82B4: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 80BE82D0-80BE8328 0058+00 s=2 e=0 z=0  None .text      setBaseMtx__13daFireWood2_cFv */
//	80BE82E4: 803DD470 (now__14mDoMtx_stack_c)
//	80BE82E8: 803DD470 (now__14mDoMtx_stack_c)
//	80BE82F8: 803468E8 (PSMTXTrans)
//	80BE82FC: 803DD470 (now__14mDoMtx_stack_c)
//	80BE8300: 803DD470 (now__14mDoMtx_stack_c)
//	80BE8310: 8000C2A0 (mDoMtx_ZXYrotM__FPA4_fsss)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood2_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/setBaseMtx__13daFireWood2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BE9080-80BE908C 000C+00 s=1 e=0 z=0  None .bss       @3619 */
static u8 lit_3619[12];

/* 80BE908C-80BE909C 0010+00 s=3 e=0 z=0  None .bss       l_HIO */
static u8 l_HIO[16];

/* 80BE8328-80BE85B0 0288+00 s=1 e=0 z=0  None .text      create__13daFireWood2_cFv */
//	80BE8358: 80018B64 (__ct__10fopAc_ac_cFv)
//	80BE835C: 803C3728 (__vt__9cCcD_Stts)
//	80BE8360: 803C3728 (__vt__9cCcD_Stts)
//	80BE836C: 80083760 (__ct__10dCcD_GSttsFv)
//	80BE8370: 803AC2E4 (__vt__9dCcD_Stts)
//	80BE8374: 803AC2E4 (__vt__9dCcD_Stts)
//	80BE838C: 80083A28 (__ct__12dCcD_GObjInfFv)
//	80BE8390: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80BE8394: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80BE839C: 80BE9050 (__vt__8cM3dGAab)
//	80BE83A0: 80BE9050 (__vt__8cM3dGAab)
//	80BE83A8: 80BE9044 (__vt__8cM3dGCyl)
//	80BE83AC: 80BE9044 (__vt__8cM3dGCyl)
//	80BE83B4: 803C35A4 (__vt__12cCcD_CylAttr)
//	80BE83B8: 803C35A4 (__vt__12cCcD_CylAttr)
//	80BE83C8: 803AC050 (__vt__8dCcD_Cyl)
//	80BE83CC: 803AC050 (__vt__8dCcD_Cyl)
//	80BE83F4: 80BE82D0 (setBaseMtx__13daFireWood2_cFv)
//	80BE8408: 80083860 (Init__9dCcD_SttsFiiP10fopAc_ac_c)
//	80BE8410: 80BE8F98 (mCcDCyl__13daFireWood2_c)
//	80BE8414: 80BE8F98 (mCcDCyl__13daFireWood2_c)
//	80BE8418: 800848B4 (Set__8dCcD_CylFRC11dCcD_SrcCyl)
//	80BE8424: 80BE8FDC (l_cull_box)
//	80BE8428: 80BE8FDC (l_cull_box)
//	80BE8464: 8001A548 (fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff)
//	80BE8474: 80BE908C (l_HIO)
//	80BE8478: 80BE908C (l_HIO)
//	80BE84D4: 80BE8640 (lightInit__13daFireWood2_cFv)
//	80BE851C: 804061C0 (g_dComIfG_gameInfo)
//	80BE8520: 804061C0 (g_dComIfG_gameInfo)
//	80BE8534: 80035360 (isSwitch__10dSv_info_cCFii)
//	80BE856C: 80BE86CC (setLight__13daFireWood2_cFv)
//	80BE8590: 80BE86CC (setLight__13daFireWood2_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood2_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/create__13daFireWood2_cFv.s"
}
#pragma pop

/* 80BE85B0-80BE85F8 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv */
//	80BE85C8: 80BE9044 (__vt__8cM3dGCyl)
//	80BE85CC: 80BE9044 (__vt__8cM3dGCyl)
//	80BE85DC: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80BE85F8-80BE8640 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
//	80BE8610: 80BE9050 (__vt__8cM3dGAab)
//	80BE8614: 80BE9050 (__vt__8cM3dGAab)
//	80BE8624: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80BE8640-80BE86CC 008C+00 s=1 e=0 z=0  None .text      lightInit__13daFireWood2_cFv */
//	80BE8640: 80BE8F34 (lit_3625)
//	80BE8644: 80BE8F34 (lit_3625)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood2_c::lightInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/lightInit__13daFireWood2_cFv.s"
}
#pragma pop

/* 80BE86CC-80BE86FC 0030+00 s=2 e=0 z=0  None .text      setLight__13daFireWood2_cFv */
//	80BE86E8: 801A7790 (dKy_plight_set__FP15LIGHT_INFLUENCE)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood2_c::setLight() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/setLight__13daFireWood2_cFv.s"
}
#pragma pop

/* 80BE86FC-80BE872C 0030+00 s=1 e=0 z=0  None .text      cutLight__13daFireWood2_cFv */
//	80BE8718: 801A792C (dKy_plight_cut__FP15LIGHT_INFLUENCE)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood2_c::cutLight() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/cutLight__13daFireWood2_cFv.s"
}
#pragma pop

/* 80BE872C-80BE87DC 00B0+00 s=1 e=0 z=0  None .text      pointLightProc__13daFireWood2_cFv */
//	80BE8744: 80BE8F34 (lit_3625)
//	80BE8748: 80BE8F34 (lit_3625)
//	80BE8780: 8026F97C (cLib_addCalc__FPfffff)
//	80BE879C: 8026F97C (cLib_addCalc__FPfffff)
//	80BE87C0: 801A9D60 (dKy_BossLight_set__FP4cXyzP8_GXColorfUc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood2_c::pointLightProc() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/pointLightProc__13daFireWood2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BE8F38-80BE8F3C 0004+00 s=0 e=0 z=0  None .rodata    @3626 */
SECTION_RODATA u32 const lit_3626 = 0x41C80000;

/* 80BE8F3C-80BE8F40 0004+00 s=0 e=0 z=0  None .rodata    @3627 */
SECTION_RODATA u32 const lit_3627 = 0x42480000;

/* 80BE8F40-80BE8F70 0030+00 s=1 e=0 z=0  None .rodata    mCcDObjInfo__13daFireWood2_c */
SECTION_RODATA static u8 const mCcDObjInfo__13daFireWood2_c[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13,
    0xD8, 0xFB, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x79, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BE8F70-80BE8F74 0004+00 s=0 e=0 z=0  None .rodata    @3834 */
SECTION_RODATA u32 const lit_3834 = 0x41200000;

/* 80BE8F74-80BE8F78 0004+00 s=0 e=0 z=0  None .rodata    @3835 */
SECTION_RODATA u32 const lit_3835 = 0x43FA0000;

/* 80BE8F78-80BE8F7C 0004+00 s=1 e=0 z=0  None .rodata    @3836 */
SECTION_RODATA static u32 const lit_3836 = 0x3F800000;

/* 80BE8F7C-80BE8F80 0004+00 s=0 e=0 z=0  None .rodata    @3837 */
SECTION_RODATA u8 const lit_3837[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80BE8F80-80BE8F84 0004+00 s=0 e=0 z=0  None .rodata    @3855 */
SECTION_RODATA u32 const lit_3855 = 0xBC6642FF;

/* 80BE8F84-80BE8F88 0004+00 s=0 e=0 z=0  None .rodata    @3863 */
SECTION_RODATA u32 const lit_3863 = 0x3F000000;

/* 80BE8F88-80BE8F8C 0004+00 s=0 e=0 z=0  None .rodata    @3864 */
SECTION_RODATA u32 const lit_3864 = 0x3DCCCCCD;

/* 80BE8F8C-80BE8F90 0004+00 s=0 e=0 z=0  None .rodata    @3865 */
SECTION_RODATA u32 const lit_3865 = 0x38D1B717;

/* 80BE8F90-80BE8F94 0004+00 s=0 e=0 z=0  None .rodata    @3866 */
SECTION_RODATA u32 const lit_3866 = 0x358637BD;

/* 80BE8F94-80BE8F98 0004+00 s=1 e=0 z=0  None .rodata    @4018 */
SECTION_RODATA static u32 const lit_4018 = 0xBF800000;

/* 80BE87DC-80BE8D98 05BC+00 s=1 e=0 z=0  None .text      Execute__13daFireWood2_cFv */
//	80BE87F4: 804061C0 (g_dComIfG_gameInfo)
//	80BE87F8: 804061C0 (g_dComIfG_gameInfo)
//	80BE880C: 80035360 (isSwitch__10dSv_info_cCFii)
//	80BE8830: 80BE86FC (cutLight__13daFireWood2_cFv)
//	80BE8858: 80BE86CC (setLight__13daFireWood2_cFv)
//	80BE8878: 80BE86CC (setLight__13daFireWood2_cFv)
//	80BE8898: 804061C0 (g_dComIfG_gameInfo)
//	80BE889C: 804061C0 (g_dComIfG_gameInfo)
//	80BE88E8: 80BE8F78 (lit_3836)
//	80BE88EC: 80BE8F78 (lit_3836)
//	80BE88F0: 8004D4CC
//(set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80BE8940: 80BE8F78 (lit_3836)
//	80BE8944: 80BE8F78 (lit_3836)
//	80BE8948: 8004D4CC
//(set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80BE8998: 80BE8F78 (lit_3836)
//	80BE899C: 80BE8F78 (lit_3836)
//	80BE89A0: 8004D4CC
//(set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80BE89F0: 80BE8F78 (lit_3836)
//	80BE89F4: 80BE8F78 (lit_3836)
//	80BE89F8: 8004D4CC
//(set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80BE8A04: 804061C0 (g_dComIfG_gameInfo)
//	80BE8A08: 804061C0 (g_dComIfG_gameInfo)
//	80BE8A50: 80BE8F78 (lit_3836)
//	80BE8A54: 80BE8F78 (lit_3836)
//	80BE8A58: 8004D4CC
//(set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80BE8AA4: 80BE8F78 (lit_3836)
//	80BE8AA8: 80BE8F78 (lit_3836)
//	80BE8AAC: 8004D4CC
//(set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80BE8AF8: 80BE8F78 (lit_3836)
//	80BE8AFC: 80BE8F78 (lit_3836)
//	80BE8B00: 8004D4CC
//(set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80BE8B10: 8002D06C (dComIfGp_getReverb__Fi)
//	80BE8B24: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BE8B28: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BE8B3C: 80BE8F78 (lit_3836)
//	80BE8B40: 80BE8F78 (lit_3836)
//	80BE8B48: 80BE8F94 (lit_4018)
//	80BE8B4C: 80BE8F94 (lit_4018)
//	80BE8B58: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80BE8B60: 80BE82D0 (setBaseMtx__13daFireWood2_cFv)
//	80BE8B68: 80084460 (ChkTgHit__12dCcD_GObjInfFv)
//	80BE8B78: 80084548 (GetTgHitGObj__12dCcD_GObjInfFv)
//	80BE8BBC: 804061C0 (g_dComIfG_gameInfo)
//	80BE8BC0: 804061C0 (g_dComIfG_gameInfo)
//	80BE8BD4: 80035200 (onSwitch__10dSv_info_cFii)
//	80BE8BDC: 804061C0 (g_dComIfG_gameInfo)
//	80BE8BE0: 804061C0 (g_dComIfG_gameInfo)
//	80BE8BF4: 800352B0 (offSwitch__10dSv_info_cFii)
//	80BE8C00: 8002D06C (dComIfGp_getReverb__Fi)
//	80BE8C14: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BE8C18: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BE8C2C: 80BE8F78 (lit_3836)
//	80BE8C30: 80BE8F78 (lit_3836)
//	80BE8C38: 80BE8F94 (lit_4018)
//	80BE8C3C: 80BE8F94 (lit_4018)
//	80BE8C48: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80BE8C50: 80BE86CC (setLight__13daFireWood2_cFv)
//	80BE8C94: 804061C0 (g_dComIfG_gameInfo)
//	80BE8C98: 804061C0 (g_dComIfG_gameInfo)
//	80BE8CAC: 800352B0 (offSwitch__10dSv_info_cFii)
//	80BE8CB4: 804061C0 (g_dComIfG_gameInfo)
//	80BE8CB8: 804061C0 (g_dComIfG_gameInfo)
//	80BE8CCC: 80035200 (onSwitch__10dSv_info_cFii)
//	80BE8CD8: 8002D06C (dComIfGp_getReverb__Fi)
//	80BE8CEC: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BE8CF0: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BE8D04: 80BE8F78 (lit_3836)
//	80BE8D08: 80BE8F78 (lit_3836)
//	80BE8D10: 80BE8F94 (lit_4018)
//	80BE8D14: 80BE8F94 (lit_4018)
//	80BE8D20: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80BE8D28: 80BE86FC (cutLight__13daFireWood2_cFv)
//	80BE8D30: 80BE908C (l_HIO)
//	80BE8D34: 80BE908C (l_HIO)
//	80BE8D3C: 8026F200 (SetR__8cM3dGCylFf)
//	80BE8D44: 80BE908C (l_HIO)
//	80BE8D48: 80BE908C (l_HIO)
//	80BE8D50: 8026F1F8 (SetH__8cM3dGCylFf)
//	80BE8D5C: 8026F1DC (SetC__8cM3dGCylFRC4cXyz)
//	80BE8D60: 804061C0 (g_dComIfG_gameInfo)
//	80BE8D64: 804061C0 (g_dComIfG_gameInfo)
//	80BE8D70: 80264BA8 (Set__4cCcSFP8cCcD_Obj)
//	80BE8D78: 80BE872C (pointLightProc__13daFireWood2_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood2_c::Execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/Execute__13daFireWood2_cFv.s"
}
#pragma pop

/* 80BE8D98-80BE8DA0 0008+00 s=1 e=0 z=0  None .text      Draw__13daFireWood2_cFv */
bool daFireWood2_c::Draw() {
    return true;
}

/* 80BE8DA0-80BE8DD4 0034+00 s=1 e=0 z=0  None .text      Delete__13daFireWood2_cFv */
//	80BE8DBC: 801A792C (dKy_plight_cut__FP15LIGHT_INFLUENCE)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood2_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/Delete__13daFireWood2_cFv.s"
}
#pragma pop

/* 80BE8DD4-80BE8DF4 0020+00 s=1 e=0 z=0  None .text      daFireWood2_Draw__FP13daFireWood2_c */
//	80BE8DE0: 80BE8D98 (Draw__13daFireWood2_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daFireWood2_Draw(daFireWood2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/daFireWood2_Draw__FP13daFireWood2_c.s"
}
#pragma pop

/* 80BE8DF4-80BE8E14 0020+00 s=1 e=0 z=0  None .text      daFireWood2_Execute__FP13daFireWood2_c */
//	80BE8E00: 80BE87DC (Execute__13daFireWood2_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daFireWood2_Execute(daFireWood2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/daFireWood2_Execute__FP13daFireWood2_c.s"
}
#pragma pop

/* 80BE8E14-80BE8E34 0020+00 s=1 e=0 z=0  None .text      daFireWood2_Delete__FP13daFireWood2_c */
//	80BE8E20: 80BE8DA0 (Delete__13daFireWood2_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daFireWood2_Delete(daFireWood2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/daFireWood2_Delete__FP13daFireWood2_c.s"
}
#pragma pop

/* 80BE8E34-80BE8E54 0020+00 s=1 e=0 z=0  None .text      daFireWood2_Create__FP10fopAc_ac_c */
//	80BE8E40: 80BE8328 (create__13daFireWood2_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daFireWood2_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/daFireWood2_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BE8E54-80BE8EB0 005C+00 s=2 e=0 z=0  None .text      __dt__17daFireWood2_HIO_cFv */
//	80BE8E6C: 80BE905C (__vt__17daFireWood2_HIO_c)
//	80BE8E70: 80BE905C (__vt__17daFireWood2_HIO_c)
//	80BE8E7C: 80BE9068 (__vt__14mDoHIO_entry_c)
//	80BE8E80: 80BE9068 (__vt__14mDoHIO_entry_c)
//	80BE8E94: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daFireWood2_HIO_c::~daFireWood2_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/__dt__17daFireWood2_HIO_cFv.s"
}
#pragma pop

/* 80BE8EB0-80BE8F20 0070+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_fireWood2_cpp */
//	80BE8EBC: 80BE908C (l_HIO)
//	80BE8EC0: 80BE908C (l_HIO)
//	80BE8EC4: 80BE824C (__ct__17daFireWood2_HIO_cFv)
//	80BE8EC8: 80BE8E54 (__dt__17daFireWood2_HIO_cFv)
//	80BE8ECC: 80BE8E54 (__dt__17daFireWood2_HIO_cFv)
//	80BE8ED0: 80BE9080 (lit_3619)
//	80BE8ED4: 80BE9080 (lit_3619)
//	80BE8ED8: 80BE81D8 (__register_global_object)
//	80BE8EDC: 80BE8F98 (mCcDCyl__13daFireWood2_c)
//	80BE8EE0: 80BE8F98 (mCcDCyl__13daFireWood2_c)
//	80BE8EE8: 80BE8F40 (mCcDObjInfo__13daFireWood2_c)
//	80BE8EEC: 80BE8F40 (mCcDObjInfo__13daFireWood2_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_obj_fireWood2_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/d_a_obj_fireWood2/__sinit_d_a_obj_fireWood2_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80BE8EB0 = (void*)__sinit_d_a_obj_fireWood2_cpp;
#pragma pop
