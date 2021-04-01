//
// Generated By: dol2asm
// Translation Unit: d_a_obj_crope
//

#include "rel/d/a/obj/d_a_obj_crope/d_a_obj_crope.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoExt_3DlineMat_c {};

struct mDoExt_3DlineMatSortPacket {
    /* 80014738 */ void setMat(mDoExt_3DlineMat_c*);
};

struct _GXColor {};

struct dKy_tevstr_c {};

struct ResTIMG {};

struct mDoExt_3DlineMat1_c {
    /* 80013360 */ void init(u16, u16, ResTIMG*, int);
    /* 8001373C */ void update(int, f32, _GXColor&, u16, dKy_tevstr_c*);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daObjCrope_c {
    /* 80BCCCD8 */ void createHeap();
    /* 80BCCD64 */ void create();
    /* 80BCD524 */ ~daObjCrope_c();
    /* 80BCD6C4 */ void setNormalRopePos();
    /* 80BCD9EC */ void setRideRopePos();
    /* 80BCE4FC */ void execute();
    /* 80BCE9BC */ void draw();
};

struct Vec {};

struct cXyz {
    /* 80266AE4 */ void operator+(Vec const&) const;
    /* 80266B34 */ void operator-(Vec const&) const;
    /* 80266B84 */ void operator*(f32) const;
    /* 80266F48 */ void normalizeZP();
    /* 80267128 */ void atan2sX_Z() const;
    /* 80267150 */ void atan2sY_XZ() const;
    /* 80BCD3D8 */ cXyz();
    /* 80BCD4C8 */ ~cXyz();
};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {};

struct dCcD_Sph {
    /* 80084A34 */ void Set(dCcD_SrcSph const&);
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80BCD46C */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
};

struct cM3dGSph {
    /* 8026F648 */ void SetC(cXyz const&);
    /* 80BCD3DC */ ~cM3dGSph();
};

struct cM3dGLin {
    /* 8026F2A8 */ cM3dGLin(cXyz const&, cXyz const&);
    /* 80BCE954 */ ~cM3dGLin();
};

struct cM3dGAab {
    /* 80BCD424 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 80BCEA7C */ ~cCcD_GStts();
};

//
// Forward References:
//

static void daObjCrope_createHeap(fopAc_ac_c*);
static void daObjCrope_Create(fopAc_ac_c*);
static void daObjCrope_Delete(daObjCrope_c*);
static void daObjCrope_Execute(daObjCrope_c*);
static void daObjCrope_Draw(daObjCrope_c*);

extern "C" void createHeap__12daObjCrope_cFv();
extern "C" static void daObjCrope_createHeap__FP10fopAc_ac_c();
extern "C" void create__12daObjCrope_cFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__4cXyzFv();
extern "C" static void daObjCrope_Create__FP10fopAc_ac_c();
extern "C" void __dt__12daObjCrope_cFv();
extern "C" static void daObjCrope_Delete__FP12daObjCrope_c();
extern "C" void setNormalRopePos__12daObjCrope_cFv();
extern "C" void setRideRopePos__12daObjCrope_cFv();
extern "C" void execute__12daObjCrope_cFv();
extern "C" void __dt__8cM3dGLinFv();
extern "C" static void daObjCrope_Execute__FP12daObjCrope_c();
extern "C" void draw__12daObjCrope_cFv();
extern "C" static void daObjCrope_Draw__FP12daObjCrope_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" extern u32 const lit_3870;
extern "C" extern u32 const lit_3871;
extern "C" extern u32 const lit_3872;
extern "C" extern u8 const lit_3873[4];
extern "C" extern u8 const lit_3874[8];
extern "C" extern u8 const lit_3875[8];
extern "C" extern u8 const lit_3876[8];
extern "C" extern u32 const lit_3877;
extern "C" extern u32 const lit_3878;
extern "C" extern u32 const lit_3879;
extern "C" extern u32 const lit_3880;
extern "C" extern u32 const lit_3881;
extern "C" extern u32 const lit_3882;
extern "C" extern u32 const lit_4115;
extern "C" extern u32 const lit_4116;
extern "C" extern u32 const lit_4117;
extern "C" extern u32 const lit_4118;
extern "C" extern u32 const lit_4119;
extern "C" extern u32 const lit_4408[1 + 1 /* padding */];
extern "C" extern u8 const lit_4410[8];
extern "C" extern void* g_profile_Obj_Crope[12];
extern "C" extern void* __vt__8cM3dGLin[3];
extern "C" extern void* __vt__10cCcD_GStts[3];
extern "C" extern void* __vt__10dCcD_GStts[3];
extern "C" extern void* __vt__18mDoExt_3DlineMat_c[5];
extern "C" extern void* __vt__8cM3dGSph[3];
extern "C" extern void* __vt__8cM3dGAab[3];

//
// External References:
//

void mDoMtx_ZXYrotM(f32 (*)[4], s16, s16, s16);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_SetMin(fopAc_ac_c*, f32, f32, f32);
void fopAcM_SetMax(fopAc_ac_c*, f32, f32, f32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dPath_GetRoomPath(int, int);
void dKyw_get_AllWind_vec(cXyz*, cXyz*, f32*);
void cM_rnd();
void cM3d_Len2dSqPntAndSegLine(f32, f32, f32, f32, f32, f32, f32*, f32*, f32*);
void operator delete(void*);

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void init__19mDoExt_3DlineMat1_cFUsUsP7ResTIMGi();
extern "C" void update__19mDoExt_3DlineMat1_cFifR8_GXColorUsP12dKy_tevstr_c();
extern "C" void setMat__26mDoExt_3DlineMatSortPacketFP18mDoExt_3DlineMat_c();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void dKyw_get_AllWind_vec__FP4cXyzP4cXyzPf();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void normalizeZP__4cXyzFv();
extern "C" void atan2sX_Z__4cXyzCFv();
extern "C" void atan2sY_XZ__4cXyzCFv();
extern "C" void cM_rnd__Fv();
extern "C" void cM3d_Len2dSqPntAndSegLine__FffffffPfPfPf();
extern "C" void __ct__8cM3dGLinFRC4cXyzRC4cXyz();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void __dl__FPv();
extern "C" void PSMTXTrans();
extern "C" void PSVECAdd();
extern "C" void PSVECScale();
extern "C" void PSVECSquareMag();
extern "C" void PSVECSquareDistance();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void _savegpr_23();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _restgpr_23();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" extern void* __vt__19mDoExt_3DlineMat1_c[5];
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u32 __float_nan;

//
// Declarations:
//

/* ############################################################################################## */
/* 80BCEACC-80BCEAD4 0006+02 s=6 e=0 z=0  None .rodata    l_arcName */
SECTION_RODATA static u8 const l_arcName[6 + 2 /* padding */] = {
    0x43,
    0x72,
    0x6F,
    0x70,
    0x65,
    0x00,
    /* padding */
    0x00,
    0x00,
};

/* 80BCCCD8-80BCCD44 006C+00 s=1 e=0 z=0  None .text      createHeap__12daObjCrope_cFv */
//	80BCCCEC: 80BCEACC (l_arcName)
//	80BCCCF0: 80BCEACC (l_arcName)
//	80BCCCF8: 804061C0 (g_dComIfG_gameInfo)
//	80BCCCFC: 804061C0 (g_dComIfG_gameInfo)
//	80BCCD0C: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80BCCD24: 80013360 (init__19mDoExt_3DlineMat1_cFUsUsP7ResTIMGi)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCrope_c::createHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crope/d_a_obj_crope/createHeap__12daObjCrope_cFv.s"
}
#pragma pop

/* 80BCCD44-80BCCD64 0020+00 s=1 e=0 z=0  None .text      daObjCrope_createHeap__FP10fopAc_ac_c */
//	80BCCD50: 80BCCCD8 (createHeap__12daObjCrope_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjCrope_createHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crope/d_a_obj_crope/daObjCrope_createHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BCEB3C-80BCEB7C 0040+00 s=1 e=0 z=0  None .data      l_sphSrc */
SECTION_DATA static u8 l_sphSrc[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00,
};

/* 80BCEB7C-80BCEB80 0004+00 s=1 e=0 z=0  None .data      color$4550 */
SECTION_DATA static u8 color[4] = {
    0x00,
    0x00,
    0x00,
    0xFF,
};

/* 80BCEB80-80BCEBA0 0020+00 s=1 e=0 z=0  None .data      l_daObjCrope_Method */
SECTION_DATA static void* l_daObjCrope_Method[8] = {
    (void*)daObjCrope_Create__FP10fopAc_ac_c,
    (void*)daObjCrope_Delete__FP12daObjCrope_c,
    (void*)daObjCrope_Execute__FP12daObjCrope_c,
    (void*)NULL,
    (void*)daObjCrope_Draw__FP12daObjCrope_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BCEBA0-80BCEBD0 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Crope */
SECTION_DATA void* g_profile_Obj_Crope[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02BE0000, (void*)&g_fpcLf_Method,
    (void*)0x000010AC, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00F80000, (void*)&l_daObjCrope_Method,
    (void*)0x00040100, (void*)0x030E0000,
};

/* 80BCEBD0-80BCEBDC 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGLin */
SECTION_DATA void* __vt__8cM3dGLin[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGLinFv,
};

/* 80BCEBDC-80BCEBE8 000C+00 s=3 e=0 z=0  None .data      __vt__10cCcD_GStts */
SECTION_DATA void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80BCEBE8-80BCEBF4 000C+00 s=2 e=0 z=0  None .data      __vt__10dCcD_GStts */
SECTION_DATA void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80BCEBF4-80BCEC08 0014+00 s=1 e=0 z=0  None .data      __vt__18mDoExt_3DlineMat_c */
SECTION_DATA void* __vt__18mDoExt_3DlineMat_c[5] = {
    (void*)NULL /* RTTI */, (void*)NULL, (void*)NULL, (void*)NULL, (void*)NULL,
};

/* 80BCEC08-80BCEC14 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGSph */
SECTION_DATA void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80BCEC14-80BCEC20 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80BCCD64-80BCD3D8 0674+00 s=1 e=0 z=0  None .text      create__12daObjCrope_cFv */
//	80BCCD7C: 803621D4 (_savegpr_27)
//	80BCCD84: 80BCEACC (l_arcName)
//	80BCCD88: 80BCEACC (l_arcName)
//	80BCCDA4: 80018B64 (__ct__10fopAc_ac_cFv)
//	80BCCDA8: 803C3728 (__vt__9cCcD_Stts)
//	80BCCDAC: 803C3728 (__vt__9cCcD_Stts)
//	80BCCDB8: 80083760 (__ct__10dCcD_GSttsFv)
//	80BCCDBC: 803AC2E4 (__vt__9dCcD_Stts)
//	80BCCDC0: 803AC2E4 (__vt__9dCcD_Stts)
//	80BCCDD8: 80083A28 (__ct__12dCcD_GObjInfFv)
//	80BCCDDC: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80BCCDE0: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80BCCDE8: 80BCEC14 (__vt__8cM3dGAab)
//	80BCCDEC: 80BCEC14 (__vt__8cM3dGAab)
//	80BCCDF4: 80BCEC08 (__vt__8cM3dGSph)
//	80BCCDF8: 80BCEC08 (__vt__8cM3dGSph)
//	80BCCE00: 803C3540 (__vt__12cCcD_SphAttr)
//	80BCCE04: 803C3540 (__vt__12cCcD_SphAttr)
//	80BCCE14: 803ABFC0 (__vt__8dCcD_Sph)
//	80BCCE18: 803ABFC0 (__vt__8dCcD_Sph)
//	80BCCE34: 80BCD3D8 (__ct__4cXyzFv)
//	80BCCE38: 80BCD3D8 (__ct__4cXyzFv)
//	80BCCE3C: 80BCD4C8 (__dt__4cXyzFv)
//	80BCCE40: 80BCD4C8 (__dt__4cXyzFv)
//	80BCCE4C: 80361D60 (__construct_array)
//	80BCCE54: 80BCD3D8 (__ct__4cXyzFv)
//	80BCCE58: 80BCD3D8 (__ct__4cXyzFv)
//	80BCCE5C: 80BCD4C8 (__dt__4cXyzFv)
//	80BCCE60: 80BCD4C8 (__dt__4cXyzFv)
//	80BCCE6C: 80361D60 (__construct_array)
//	80BCCE70: 80BCEBF4 (__vt__18mDoExt_3DlineMat_c)
//	80BCCE74: 80BCEBF4 (__vt__18mDoExt_3DlineMat_c)
//	80BCCE7C: 803A3248 (__vt__19mDoExt_3DlineMat1_c)
//	80BCCE80: 803A3248 (__vt__19mDoExt_3DlineMat1_c)
//	80BCCE9C: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80BCCEB0: 80BCCD44 (daObjCrope_createHeap__FP10fopAc_ac_c)
//	80BCCEB4: 80BCCD44 (daObjCrope_createHeap__FP10fopAc_ac_c)
//	80BCCEBC: 8001A4B0 (fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl)
//	80BCCF10: 80083860 (Init__9dCcD_SttsFiiP10fopAc_ac_c)
//	80BCCF20: 80BCEB3C (l_sphSrc)
//	80BCCF24: 80BCEB3C (l_sphSrc)
//	80BCCF28: 80084A34 (Set__8dCcD_SphFRC11dCcD_SrcSph)
//	80BCCF60: 800517EC (dPath_GetRoomPath__Fii)
//	80BCCFC0: 80266AE4 (__pl__4cXyzCFRC3Vec)
//	80BCCFD0: 80266B84 (__ml__4cXyzCFf)
//	80BCCFF8: 80266B34 (__mi__4cXyzCFRC3Vec)
//	80BCD064: 80267128 (atan2sX_Z__4cXyzCFv)
//	80BCD070: 80267150 (atan2sY_XZ__4cXyzCFv)
//	80BCD088: 803468E8 (PSMTXTrans)
//	80BCD09C: 8000C2A0 (mDoMtx_ZXYrotM__FPA4_fsss)
//	80BCD0BC: 80347138 (PSVECSquareMag)
//	80BCD12C: 80450AE0 (__float_nan)
//	80BCD130: 80450AE0 (__float_nan)
//	80BCD19C: 80450AE0 (__float_nan)
//	80BCD1A0: 80450AE0 (__float_nan)
//	80BCD1CC: 8001A538 (fopAcM_SetMax__FP10fopAc_ac_cfff)
//	80BCD1E0: 8001A528 (fopAcM_SetMin__FP10fopAc_ac_cfff)
//	80BCD1E8: 80347138 (PSVECSquareMag)
//	80BCD258: 80450AE0 (__float_nan)
//	80BCD25C: 80450AE0 (__float_nan)
//	80BCD2C8: 80450AE0 (__float_nan)
//	80BCD2CC: 80450AE0 (__float_nan)
//	80BCD340: 80266AE4 (__pl__4cXyzCFRC3Vec)
//	80BCD3B0: 80BCD6C4 (setNormalRopePos__12daObjCrope_cFv)
//	80BCD3C4: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCrope_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crope/d_a_obj_crope/create__12daObjCrope_cFv.s"
}
#pragma pop

/* 80BCD3D8-80BCD3DC 0004+00 s=1 e=0 z=0  None .text      __ct__4cXyzFv */
cXyz::cXyz() {
    /* empty function */
}

/* 80BCD3DC-80BCD424 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGSphFv */
//	80BCD3F4: 80BCEC08 (__vt__8cM3dGSph)
//	80BCD3F8: 80BCEC08 (__vt__8cM3dGSph)
//	80BCD408: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crope/d_a_obj_crope/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80BCD424-80BCD46C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
//	80BCD43C: 80BCEC14 (__vt__8cM3dGAab)
//	80BCD440: 80BCEC14 (__vt__8cM3dGAab)
//	80BCD450: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crope/d_a_obj_crope/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80BCD46C-80BCD4C8 005C+00 s=1 e=0 z=0  None .text      __dt__10dCcD_GSttsFv */
//	80BCD484: 80BCEBE8 (__vt__10dCcD_GStts)
//	80BCD488: 80BCEBE8 (__vt__10dCcD_GStts)
//	80BCD494: 80BCEBDC (__vt__10cCcD_GStts)
//	80BCD498: 80BCEBDC (__vt__10cCcD_GStts)
//	80BCD4AC: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crope/d_a_obj_crope/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80BCD4C8-80BCD504 003C+00 s=2 e=0 z=0  None .text      __dt__4cXyzFv */
//	80BCD4E8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crope/d_a_obj_crope/__dt__4cXyzFv.s"
}
#pragma pop

/* 80BCD504-80BCD524 0020+00 s=1 e=0 z=0  None .text      daObjCrope_Create__FP10fopAc_ac_c */
//	80BCD510: 80BCCD64 (create__12daObjCrope_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjCrope_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crope/d_a_obj_crope/daObjCrope_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BCD524-80BCD69C 0178+00 s=1 e=0 z=0  None .text      __dt__12daObjCrope_cFv */
//	80BCD548: 80BCEACC (l_arcName)
//	80BCD54C: 80BCEACC (l_arcName)
//	80BCD550: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
//	80BCD558: 80BCD4C8 (__dt__4cXyzFv)
//	80BCD55C: 80BCD4C8 (__dt__4cXyzFv)
//	80BCD568: 80361CE8 (__destroy_arr)
//	80BCD570: 80BCD4C8 (__dt__4cXyzFv)
//	80BCD574: 80BCD4C8 (__dt__4cXyzFv)
//	80BCD580: 80361CE8 (__destroy_arr)
//	80BCD58C: 803ABFC0 (__vt__8dCcD_Sph)
//	80BCD590: 803ABFC0 (__vt__8dCcD_Sph)
//	80BCD5B0: 803C3540 (__vt__12cCcD_SphAttr)
//	80BCD5B4: 803C3540 (__vt__12cCcD_SphAttr)
//	80BCD5CC: 80BCEC08 (__vt__8cM3dGSph)
//	80BCD5D0: 80BCEC08 (__vt__8cM3dGSph)
//	80BCD5E0: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80BCD5E4: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80BCD5F4: 80BCEC14 (__vt__8cM3dGAab)
//	80BCD5F8: 80BCEC14 (__vt__8cM3dGAab)
//	80BCD608: 800840E4 (__dt__12dCcD_GObjInfFv)
//	80BCD614: 803AC2E4 (__vt__9dCcD_Stts)
//	80BCD618: 803AC2E4 (__vt__9dCcD_Stts)
//	80BCD630: 80BCEBE8 (__vt__10dCcD_GStts)
//	80BCD634: 80BCEBE8 (__vt__10dCcD_GStts)
//	80BCD644: 80BCEBDC (__vt__10cCcD_GStts)
//	80BCD648: 80BCEBDC (__vt__10cCcD_GStts)
//	80BCD658: 803C3728 (__vt__9cCcD_Stts)
//	80BCD65C: 803C3728 (__vt__9cCcD_Stts)
//	80BCD66C: 80018C8C (__dt__10fopAc_ac_cFv)
//	80BCD67C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjCrope_c::~daObjCrope_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crope/d_a_obj_crope/__dt__12daObjCrope_cFv.s"
}
#pragma pop

/* 80BCD69C-80BCD6C4 0028+00 s=1 e=0 z=0  None .text      daObjCrope_Delete__FP12daObjCrope_c */
//	80BCD6AC: 80BCD524 (__dt__12daObjCrope_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjCrope_Delete(daObjCrope_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crope/d_a_obj_crope/daObjCrope_Delete__FP12daObjCrope_c.s"
}
#pragma pop

/* 80BCD6C4-80BCD9EC 0328+00 s=3 e=0 z=0  None .text      setNormalRopePos__12daObjCrope_cFv */
//	80BCD6E4: 803621CC (_savegpr_25)
//	80BCD6EC: 80BCEACC (l_arcName)
//	80BCD6F0: 80BCEACC (l_arcName)
//	80BCD714: 8005B2F8 (dKyw_get_AllWind_vec__FP4cXyzP4cXyzPf)
//	80BCD718: 8026786C (cM_rnd__Fv)
//	80BCD744: 803470D8 (PSVECScale)
//	80BCD758: 803470D8 (PSVECScale)
//	80BCD778: 80266B34 (__mi__4cXyzCFRC3Vec)
//	80BCD7AC: 80347090 (PSVECAdd)
//	80BCD7B0: 8026786C (cM_rnd__Fv)
//	80BCD7C8: 80347090 (PSVECAdd)
//	80BCD7D4: 80266F48 (normalizeZP__4cXyzFv)
//	80BCD7E4: 80266B84 (__ml__4cXyzCFf)
//	80BCD7F4: 80266AE4 (__pl__4cXyzCFRC3Vec)
//	80BCD848: 80266B34 (__mi__4cXyzCFRC3Vec)
//	80BCD87C: 80347090 (PSVECAdd)
//	80BCD888: 80266F48 (normalizeZP__4cXyzFv)
//	80BCD898: 80266B84 (__ml__4cXyzCFf)
//	80BCD8A8: 80266AE4 (__pl__4cXyzCFRC3Vec)
//	80BCD954: 80266B34 (__mi__4cXyzCFRC3Vec)
//	80BCD964: 80266B84 (__ml__4cXyzCFf)
//	80BCD9D8: 80362218 (_restgpr_25)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCrope_c::setNormalRopePos() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crope/d_a_obj_crope/setNormalRopePos__12daObjCrope_cFv.s"
}
#pragma pop

/* 80BCD9EC-80BCE4FC 0B10+00 s=1 e=0 z=0  None .text      setRideRopePos__12daObjCrope_cFv */
//	80BCDA54: 803621C4 (_savegpr_23)
//	80BCDA5C: 80BCEACC (l_arcName)
//	80BCDA60: 80BCEACC (l_arcName)
//	80BCDA64: 804061C0 (g_dComIfG_gameInfo)
//	80BCDA68: 804061C0 (g_dComIfG_gameInfo)
//	80BCDA7C: 80BCD6C4 (setNormalRopePos__12daObjCrope_cFv)
//	80BCDBCC: 8034739C (PSVECSquareDistance)
//	80BCDC3C: 80450AE0 (__float_nan)
//	80BCDC40: 80450AE0 (__float_nan)
//	80BCDCAC: 80450AE0 (__float_nan)
//	80BCDCB0: 80450AE0 (__float_nan)
//	80BCDCC4: 8034739C (PSVECSquareDistance)
//	80BCDD34: 80450AE0 (__float_nan)
//	80BCDD38: 80450AE0 (__float_nan)
//	80BCDDA4: 80450AE0 (__float_nan)
//	80BCDDA8: 80450AE0 (__float_nan)
//	80BCDDBC: 8034739C (PSVECSquareDistance)
//	80BCDE2C: 80450AE0 (__float_nan)
//	80BCDE30: 80450AE0 (__float_nan)
//	80BCDE9C: 80450AE0 (__float_nan)
//	80BCDEA0: 80450AE0 (__float_nan)
//	80BCDEB0: 8034739C (PSVECSquareDistance)
//	80BCDF20: 80450AE0 (__float_nan)
//	80BCDF24: 80450AE0 (__float_nan)
//	80BCDF90: 80450AE0 (__float_nan)
//	80BCDF94: 80450AE0 (__float_nan)
//	80BCE06C: 80266B34 (__mi__4cXyzCFRC3Vec)
//	80BCE094: 80266B34 (__mi__4cXyzCFRC3Vec)
//	80BCE0E0: 80266F48 (normalizeZP__4cXyzFv)
//	80BCE0FC: 80266B84 (__ml__4cXyzCFf)
//	80BCE10C: 80266AE4 (__pl__4cXyzCFRC3Vec)
//	80BCE174: 80266F48 (normalizeZP__4cXyzFv)
//	80BCE190: 80266B84 (__ml__4cXyzCFf)
//	80BCE1A0: 80266AE4 (__pl__4cXyzCFRC3Vec)
//	80BCE1F8: 80266B34 (__mi__4cXyzCFRC3Vec)
//	80BCE218: 80347138 (PSVECSquareMag)
//	80BCE288: 80450AE0 (__float_nan)
//	80BCE28C: 80450AE0 (__float_nan)
//	80BCE2F8: 80450AE0 (__float_nan)
//	80BCE2FC: 80450AE0 (__float_nan)
//	80BCE32C: 80266F48 (normalizeZP__4cXyzFv)
//	80BCE348: 80266B84 (__ml__4cXyzCFf)
//	80BCE358: 80266AE4 (__pl__4cXyzCFRC3Vec)
//	80BCE430: 80266B34 (__mi__4cXyzCFRC3Vec)
//	80BCE440: 80266B84 (__ml__4cXyzCFf)
//	80BCE4E8: 80362210 (_restgpr_23)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCrope_c::setRideRopePos() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crope/d_a_obj_crope/setRideRopePos__12daObjCrope_cFv.s"
}
#pragma pop

/* 80BCE4FC-80BCE954 0458+00 s=1 e=0 z=0  None .text      execute__12daObjCrope_cFv */
//	80BCE51C: 803621D4 (_savegpr_27)
//	80BCE524: 80BCEACC (l_arcName)
//	80BCE528: 80BCEACC (l_arcName)
//	80BCE52C: 804061C0 (g_dComIfG_gameInfo)
//	80BCE530: 804061C0 (g_dComIfG_gameInfo)
//	80BCE550: 80BCD6C4 (setNormalRopePos__12daObjCrope_cFv)
//	80BCE56C: 8026F2A8 (__ct__8cM3dGLinFRC4cXyzRC4cXyz)
//	80BCE594: 8026862C (cM3d_Len2dSqPntAndSegLine__FffffffPfPfPf)
//	80BCE620: 8034739C (PSVECSquareDistance)
//	80BCE690: 80450AE0 (__float_nan)
//	80BCE694: 80450AE0 (__float_nan)
//	80BCE700: 80450AE0 (__float_nan)
//	80BCE704: 80450AE0 (__float_nan)
//	80BCE744: 8034739C (PSVECSquareDistance)
//	80BCE7B4: 80450AE0 (__float_nan)
//	80BCE7B8: 80450AE0 (__float_nan)
//	80BCE824: 80450AE0 (__float_nan)
//	80BCE828: 80450AE0 (__float_nan)
//	80BCE840: 80266B34 (__mi__4cXyzCFRC3Vec)
//	80BCE850: 80266B84 (__ml__4cXyzCFf)
//	80BCE860: 80266AE4 (__pl__4cXyzCFRC3Vec)
//	80BCE888: 8034739C (PSVECSquareDistance)
//	80BCE898: 8034739C (PSVECSquareDistance)
//	80BCE8E0: 8026F648 (SetC__8cM3dGSphFRC4cXyz)
//	80BCE8FC: 804061C0 (g_dComIfG_gameInfo)
//	80BCE900: 804061C0 (g_dComIfG_gameInfo)
//	80BCE90C: 80264BA8 (Set__4cCcSFP8cCcD_Obj)
//	80BCE910: 80BCEBD0 (__vt__8cM3dGLin)
//	80BCE914: 80BCEBD0 (__vt__8cM3dGLin)
//	80BCE924: 80BCD9EC (setRideRopePos__12daObjCrope_cFv)
//	80BCE940: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCrope_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crope/d_a_obj_crope/execute__12daObjCrope_cFv.s"
}
#pragma pop

/* 80BCE954-80BCE99C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGLinFv */
//	80BCE96C: 80BCEBD0 (__vt__8cM3dGLin)
//	80BCE970: 80BCEBD0 (__vt__8cM3dGLin)
//	80BCE980: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGLin::~cM3dGLin() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crope/d_a_obj_crope/__dt__8cM3dGLinFv.s"
}
#pragma pop

/* 80BCE99C-80BCE9BC 0020+00 s=1 e=0 z=0  None .text      daObjCrope_Execute__FP12daObjCrope_c */
//	80BCE9A8: 80BCE4FC (execute__12daObjCrope_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjCrope_Execute(daObjCrope_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crope/d_a_obj_crope/daObjCrope_Execute__FP12daObjCrope_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BCEAD4-80BCEAD8 0004+00 s=0 e=0 z=0  None .rodata    @3870 */
SECTION_RODATA u32 const lit_3870 = 0xC0A00000;

/* 80BCEAD8-80BCEADC 0004+00 s=0 e=0 z=0  None .rodata    @3871 */
SECTION_RODATA u32 const lit_3871 = 0x3F000000;

/* 80BCEADC-80BCEAE0 0004+00 s=0 e=0 z=0  None .rodata    @3872 */
SECTION_RODATA u32 const lit_3872 = 0x3F800000;

/* 80BCEAE0-80BCEAE4 0004+00 s=0 e=0 z=0  None .rodata    @3873 */
SECTION_RODATA u8 const lit_3873[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80BCEAE4-80BCEAEC 0008+00 s=0 e=0 z=0  None .rodata    @3874 */
SECTION_RODATA u8 const lit_3874[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BCEAEC-80BCEAF4 0008+00 s=0 e=0 z=0  None .rodata    @3875 */
SECTION_RODATA u8 const lit_3875[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BCEAF4-80BCEAFC 0008+00 s=0 e=0 z=0  None .rodata    @3876 */
SECTION_RODATA u8 const lit_3876[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BCEAFC-80BCEB00 0004+00 s=0 e=0 z=0  None .rodata    @3877 */
SECTION_RODATA u32 const lit_3877 = 0x40400000;

/* 80BCEB00-80BCEB04 0004+00 s=0 e=0 z=0  None .rodata    @3878 */
SECTION_RODATA u32 const lit_3878 = 0x42960000;

/* 80BCEB04-80BCEB08 0004+00 s=0 e=0 z=0  None .rodata    @3879 */
SECTION_RODATA u32 const lit_3879 = 0x42480000;

/* 80BCEB08-80BCEB0C 0004+00 s=0 e=0 z=0  None .rodata    @3880 */
SECTION_RODATA u32 const lit_3880 = 0xC2960000;

/* 80BCEB0C-80BCEB10 0004+00 s=0 e=0 z=0  None .rodata    @3881 */
SECTION_RODATA u32 const lit_3881 = 0xC3480000;

/* 80BCEB10-80BCEB14 0004+00 s=0 e=0 z=0  None .rodata    @3882 */
SECTION_RODATA u32 const lit_3882 = 0x3C257EB5;

/* 80BCEB14-80BCEB18 0004+00 s=0 e=0 z=0  None .rodata    @4115 */
SECTION_RODATA u32 const lit_4115 = 0x3DCCCCCD;

/* 80BCEB18-80BCEB1C 0004+00 s=0 e=0 z=0  None .rodata    @4116 */
SECTION_RODATA u32 const lit_4116 = 0x3E4CCCCD;

/* 80BCEB1C-80BCEB20 0004+00 s=0 e=0 z=0  None .rodata    @4117 */
SECTION_RODATA u32 const lit_4117 = 0x3F19999A;

/* 80BCEB20-80BCEB24 0004+00 s=0 e=0 z=0  None .rodata    @4118 */
SECTION_RODATA u32 const lit_4118 = 0x3EFAE148;

/* 80BCEB24-80BCEB28 0004+00 s=0 e=0 z=0  None .rodata    @4119 */
SECTION_RODATA u32 const lit_4119 = 0x3F4CCCCD;

/* 80BCEB28-80BCEB2C 0004+00 s=1 e=0 z=0  None .rodata    @4407 */
SECTION_RODATA static u32 const lit_4407 = 0x40A00000;

/* 80BCE9BC-80BCEA5C 00A0+00 s=1 e=0 z=0  None .text      draw__12daObjCrope_cFv */
//	80BCE9D0: 8042CA54 (g_env_light)
//	80BCE9D4: 8042CA54 (g_env_light)
//	80BCE9E4: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80BCE9F0: 80BCEB28 (lit_4407)
//	80BCE9F4: 80BCEB28 (lit_4407)
//	80BCE9F8: 80BCEB7C (color)
//	80BCE9FC: 80BCEB7C (color)
//	80BCEA08: 8001373C (update__19mDoExt_3DlineMat1_cFifR8_GXColorUsP12dKy_tevstr_c)
//	80BCEA24: 804061C0 (g_dComIfG_gameInfo)
//	80BCEA28: 804061C0 (g_dComIfG_gameInfo)
//	80BCEA40: 80014738 (setMat__26mDoExt_3DlineMatSortPacketFP18mDoExt_3DlineMat_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCrope_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crope/d_a_obj_crope/draw__12daObjCrope_cFv.s"
}
#pragma pop

/* 80BCEA5C-80BCEA7C 0020+00 s=1 e=0 z=0  None .text      daObjCrope_Draw__FP12daObjCrope_c */
//	80BCEA68: 80BCE9BC (draw__12daObjCrope_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjCrope_Draw(daObjCrope_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crope/d_a_obj_crope/daObjCrope_Draw__FP12daObjCrope_c.s"
}
#pragma pop

/* 80BCEA7C-80BCEAC4 0048+00 s=1 e=0 z=0  None .text      __dt__10cCcD_GSttsFv */
//	80BCEA94: 80BCEBDC (__vt__10cCcD_GStts)
//	80BCEA98: 80BCEBDC (__vt__10cCcD_GStts)
//	80BCEAA8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crope/d_a_obj_crope/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BCEB2C-80BCEB34 0004+04 s=0 e=0 z=0  None .rodata    @4408 */
SECTION_RODATA u32 const lit_4408[1 + 1 /* padding */] = {
    0x40A00001,
    /* padding */
    0x00000000,
};

/* 80BCEB34-80BCEB3C 0008+00 s=0 e=0 z=0  None .rodata    @4410 */
SECTION_RODATA u8 const lit_4410[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
