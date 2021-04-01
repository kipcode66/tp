//
// Generated By: dol2asm
// Translation Unit: d_a_npc_fguard
//

#include "rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct mDoExt_morf_c {
    /* 8000FB7C */ void setMorf(f32);
};

struct mDoExt_McaMorfSO {
    /* 800111EC */ void modelCalc();
    /* 80011310 */ void stopZelAnime();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct Vec {};

struct daNpcFgd_c {
    /* 809BA53C */ void initPosAngle(Vec&, s16);
    /* 809BA584 */ void create();
    /* 809BA730 */ void create_init();
    /* 809BAA80 */ ~daNpcFgd_c();
};

struct J3DAnmTransformKey {};

struct J3DModel {};

struct daNpcCd2_c {
    /* 80157D00 */ void NpcCreate(int);
    /* 80157F28 */ void ObjCreate(int);
    /* 801580F0 */ void getAnmP(int, int);
    /* 80158420 */ void setAttention(int);
    /* 80158BB8 */ void loadResrc(int, int);
    /* 80158CBC */ void removeResrc(int, int);
    /* 80158D88 */ void setEnvTevCol();
    /* 80158DE4 */ void setRoomNo();
    /* 80158E28 */ void animation(int);
    /* 80158F00 */ void setAnm(J3DAnmTransformKey*, f32, f32, int, int, int);
    /* 80158F6C */ void drawShadow(f32);
    /* 80158FF0 */ void drawObj(int, J3DModel*, f32);
    /* 801590FC */ void drawNpc();
    /* 809BAE80 */ ~daNpcCd2_c();
};

struct dNpcLib_lookat_c {
    /* 80251314 */ dNpcLib_lookat_c();
    /* 809BB10C */ ~dNpcLib_lookat_c();
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 809BB284 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 809BB38C */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F40 */ void SetWallR(f32);
    /* 80075F58 */ void SetWall(f32, f32);
    /* 809BB31C */ ~dBgS_AcchCir();
};

struct cXyz {
    /* 809BB2E0 */ ~cXyz();
};

struct dBgS {};

struct csXyz {
    /* 809BB0D0 */ ~csXyz();
};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cM3dGPla {
    /* 809BAD3C */ ~cM3dGPla();
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F1F8 */ void SetH(f32);
    /* 8026F200 */ void SetR(f32);
    /* 809BB1F4 */ ~cM3dGCyl();
};

struct cM3dGCir {
    /* 8026EF18 */ ~cM3dGCir();
};

struct cM3dGAab {
    /* 809BB23C */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 809BAE28 */ ~cCcD_GStts();
};

struct cBgS_PolyInfo {
    /* 802680B0 */ ~cBgS_PolyInfo();
};

struct cBgS {
    /* 80074744 */ void GetTriPla(cBgS_PolyInfo const&, cM3dGPla*) const;
};

struct Z2CreatureCitizen {
    /* 802C0C10 */ Z2CreatureCitizen();
    /* 802C0C6C */ ~Z2CreatureCitizen();
};

//
// Forward References:
//

static void createHeapCallBack(fopAc_ac_c*);
static void daNpcFgd_Create(void*);
static void daNpcFgd_Delete(void*);
static void daNpcFgd_Execute(void*);
static void daNpcFgd_Draw(void*);
static bool daNpcFgd_IsDelete(void*);

extern "C" static void createHeapCallBack__FP10fopAc_ac_c();
extern "C" void initPosAngle__10daNpcFgd_cFR3Vecs();
extern "C" static void daNpcFgd_Create__FPv();
extern "C" void create__10daNpcFgd_cFv();
extern "C" void create_init__10daNpcFgd_cFv();
extern "C" static void daNpcFgd_Delete__FPv();
extern "C" void __dt__10daNpcFgd_cFv();
extern "C" static void daNpcFgd_Execute__FPv();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" static void daNpcFgd_Draw__FPv();
extern "C" static bool daNpcFgd_IsDelete__FPv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" static void func_809BAE70();
extern "C" static void func_809BAE78();
extern "C" void __dt__10daNpcCd2_cFv();
extern "C" void __dt__5csXyzFv();
extern "C" void __dt__16dNpcLib_lookat_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__4cXyzFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" extern u32 const lit_3980;
extern "C" extern u32 const lit_3981;
extern "C" extern u32 const lit_3982;
extern "C" extern u32 const lit_3983;
extern "C" extern u32 const lit_3984;
extern "C" extern u32 const lit_3985;
extern "C" extern u32 const lit_3986;
extern "C" extern u32 const lit_3987;
extern "C" extern u32 const lit_3988;
extern "C" extern u32 const lit_3989;
extern "C" extern u8 const lit_3990[4];
extern "C" extern void* g_profile_NPC_FGUARD[12];
extern "C" extern void* __vt__8cM3dGPla[3];
extern "C" extern void* __vt__12dBgS_AcchCir[3];
extern "C" extern void* __vt__10cCcD_GStts[3];
extern "C" extern void* __vt__10dCcD_GStts[3];
extern "C" extern void* __vt__16dNpcLib_lookat_c[3];
extern "C" extern void* __vt__10daNpcFgd_c[3];
extern "C" extern void* __vt__8cM3dGCyl[3];
extern "C" extern void* __vt__8cM3dGAab[3];
extern "C" extern void* __vt__12dBgS_ObjAcch[9];
extern "C" extern void* __vt__10daNpcCd2_c[3];

//
// External References:
//

void mDoMtx_YrotM(f32 (*)[4], s16);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void fopAcM_getPolygonAngle(cM3dGPla const*, s16);
void dKy_darkworld_check();
void cM_rndF(f32);
void cLib_addCalc2(f32*, f32, f32, f32);
void operator delete(void*);

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void setMorf__13mDoExt_morf_cFf();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_getPolygonAngle__FPC8cM3dGPlas();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWallR__12dBgS_AcchCirFf();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void NpcCreate__10daNpcCd2_cFi();
extern "C" void ObjCreate__10daNpcCd2_cFi();
extern "C" void getAnmP__10daNpcCd2_cFii();
extern "C" void setAttention__10daNpcCd2_cFi();
extern "C" void loadResrc__10daNpcCd2_cFii();
extern "C" void removeResrc__10daNpcCd2_cFii();
extern "C" void setEnvTevCol__10daNpcCd2_cFv();
extern "C" void setRoomNo__10daNpcCd2_cFv();
extern "C" void animation__10daNpcCd2_cFi();
extern "C" void setAnm__10daNpcCd2_cFP18J3DAnmTransformKeyffiii();
extern "C" void drawShadow__10daNpcCd2_cFf();
extern "C" void drawObj__10daNpcCd2_cFiP8J3DModelf();
extern "C" void drawNpc__10daNpcCd2_cFv();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void __ct__16dNpcLib_lookat_cFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void cM_rndF__Ff();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void __ct__17Z2CreatureCitizenFv();
extern "C" void __dt__17Z2CreatureCitizenFv();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __destroy_arr();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern u8 const m_cylDat__10daNpcCd2_c[68];
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 l_Cd2_HIO[16396];

//
// Declarations:
//

/* 809BA4B8-809BA53C 0084+00 s=1 e=0 z=0  None .text      createHeapCallBack__FP10fopAc_ac_c */
//	809BA4D4: 80157D00 (NpcCreate__10daNpcCd2_cFi)
//	809BA4F0: 80157F28 (ObjCreate__10daNpcCd2_cFi)
//	809BA50C: 80011310 (stopZelAnime__16mDoExt_McaMorfSOFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void createHeapCallBack(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/createHeapCallBack__FP10fopAc_ac_c.s"
}
#pragma pop

/* 809BA53C-809BA564 0028+00 s=0 e=0 z=1  None .text      initPosAngle__10daNpcFgd_cFR3Vecs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcFgd_c::initPosAngle(Vec& param_0, s16 param_1) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/initPosAngle__10daNpcFgd_cFR3Vecs.s"
}
#pragma pop

/* 809BA564-809BA584 0020+00 s=1 e=0 z=0  None .text      daNpcFgd_Create__FPv */
//	809BA570: 809BA584 (create__10daNpcFgd_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daNpcFgd_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/daNpcFgd_Create__FPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 809BB440-809BB460 0020+00 s=1 e=0 z=0  None .data      daNpcFgd_METHODS */
SECTION_DATA static void* daNpcFgd_METHODS[8] = {
    (void*)daNpcFgd_Create__FPv,
    (void*)daNpcFgd_Delete__FPv,
    (void*)daNpcFgd_Execute__FPv,
    (void*)daNpcFgd_IsDelete__FPv,
    (void*)daNpcFgd_Draw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 809BB460-809BB490 0030+00 s=0 e=0 z=1  None .data      g_profile_NPC_FGUARD */
SECTION_DATA void* g_profile_NPC_FGUARD[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02940000, (void*)&g_fpcLf_Method,
    (void*)0x00000ADC, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01990000, (void*)&daNpcFgd_METHODS,
    (void*)0x00040107, (void*)0x040E0000,
};

/* 809BB490-809BB49C 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGPla */
SECTION_DATA void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 809BB49C-809BB4A8 000C+00 s=2 e=0 z=0  None .data      __vt__12dBgS_AcchCir */
SECTION_DATA void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 809BB4A8-809BB4B4 000C+00 s=3 e=0 z=0  None .data      __vt__10cCcD_GStts */
SECTION_DATA void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 809BB4B4-809BB4C0 000C+00 s=2 e=0 z=0  None .data      __vt__10dCcD_GStts */
SECTION_DATA void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 809BB4C0-809BB4CC 000C+00 s=2 e=0 z=0  None .data      __vt__16dNpcLib_lookat_c */
SECTION_DATA void* __vt__16dNpcLib_lookat_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16dNpcLib_lookat_cFv,
};

/* 809BB4CC-809BB4D8 000C+00 s=2 e=0 z=0  None .data      __vt__10daNpcFgd_c */
SECTION_DATA void* __vt__10daNpcFgd_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10daNpcFgd_cFv,
};

/* 809BB4D8-809BB4E4 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGCyl */
SECTION_DATA void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 809BB4E4-809BB4F0 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 809BB4F0-809BB514 0024+00 s=3 e=0 z=0  None .data      __vt__12dBgS_ObjAcch */
SECTION_DATA void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_809BAE78,
    (void*)NULL,
    (void*)NULL,
    (void*)func_809BAE70,
};

/* 809BB514-809BB520 000C+00 s=2 e=0 z=0  None .data      __vt__10daNpcCd2_c */
SECTION_DATA void* __vt__10daNpcCd2_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10daNpcCd2_cFv,
};

/* 809BA584-809BA730 01AC+00 s=1 e=0 z=0  None .text      create__10daNpcFgd_cFv */
//	809BA594: 803621DC (_savegpr_29)
//	809BA5B4: 80018B64 (__ct__10fopAc_ac_cFv)
//	809BA5B8: 809BB514 (__vt__10daNpcCd2_c)
//	809BA5BC: 809BB514 (__vt__10daNpcCd2_c)
//	809BA5C8: 802C0C10 (__ct__17Z2CreatureCitizenFv)
//	809BA5D4: 800760A0 (__ct__9dBgS_AcchFv)
//	809BA5D8: 809BB4F0 (__vt__12dBgS_ObjAcch)
//	809BA5DC: 809BB4F0 (__vt__12dBgS_ObjAcch)
//	809BA5F8: 80078E68 (SetObj__16dBgS_PolyPassChkFv)
//	809BA600: 80075EAC (__ct__12dBgS_AcchCirFv)
//	809BA604: 803C3728 (__vt__9cCcD_Stts)
//	809BA608: 803C3728 (__vt__9cCcD_Stts)
//	809BA614: 80083760 (__ct__10dCcD_GSttsFv)
//	809BA618: 803AC2E4 (__vt__9dCcD_Stts)
//	809BA61C: 803AC2E4 (__vt__9dCcD_Stts)
//	809BA634: 80083A28 (__ct__12dCcD_GObjInfFv)
//	809BA638: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	809BA63C: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	809BA644: 809BB4E4 (__vt__8cM3dGAab)
//	809BA648: 809BB4E4 (__vt__8cM3dGAab)
//	809BA650: 809BB4D8 (__vt__8cM3dGCyl)
//	809BA654: 809BB4D8 (__vt__8cM3dGCyl)
//	809BA65C: 803C35A4 (__vt__12cCcD_CylAttr)
//	809BA660: 803C35A4 (__vt__12cCcD_CylAttr)
//	809BA670: 803AC050 (__vt__8dCcD_Cyl)
//	809BA674: 803AC050 (__vt__8dCcD_Cyl)
//	809BA690: 80251314 (__ct__16dNpcLib_lookat_cFv)
//	809BA694: 809BB4CC (__vt__10daNpcFgd_c)
//	809BA698: 809BB4CC (__vt__10daNpcFgd_c)
//	809BA6AC: 801AC57C (dKy_darkworld_check__Fv)
//	809BA6D8: 80158BB8 (loadResrc__10daNpcCd2_cFii)
//	809BA6EC: 809BA4B8 (createHeapCallBack__FP10fopAc_ac_c)
//	809BA6F0: 809BA4B8 (createHeapCallBack__FP10fopAc_ac_c)
//	809BA6F8: 8001A4B0 (fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl)
//	809BA710: 809BA730 (create_init__10daNpcFgd_cFv)
//	809BA71C: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcFgd_c::create() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/create__10daNpcFgd_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 809BB404-809BB408 0004+00 s=1 e=0 z=0  None .rodata    @3979 */
SECTION_RODATA static u32 const lit_3979 = 0xC0400000;

/* 809BA730-809BAA4C 031C+00 s=1 e=0 z=0  None .text      create_init__10daNpcFgd_cFv */
//	809BA740: 803621DC (_savegpr_29)
//	809BA748: 809BB404 (lit_3979)
//	809BA74C: 809BB404 (lit_3979)
//	809BA788: 8001A548 (fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff)
//	809BA798: 8042861C (l_Cd2_HIO)
//	809BA79C: 8042861C (l_Cd2_HIO)
//	809BA7B0: 8042861C (l_Cd2_HIO)
//	809BA7B4: 8042861C (l_Cd2_HIO)
//	809BA7D0: 8042861C (l_Cd2_HIO)
//	809BA7D4: 8042861C (l_Cd2_HIO)
//	809BA7E8: 8042861C (l_Cd2_HIO)
//	809BA7EC: 8042861C (l_Cd2_HIO)
//	809BA7FC: 80075F58 (SetWall__12dBgS_AcchCirFff)
//	809BA828: 80076248
//(Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz) 	809BA848:
//804061C0 (g_dComIfG_gameInfo) 	809BA84C: 804061C0 (g_dComIfG_gameInfo) 	809BA854: 80076AAC
//(CrrPos__9dBgS_AcchFR4dBgS) 	809BA85C: 80158D88 (setEnvTevCol__10daNpcCd2_cFv) 	809BA864:
//80158DE4 (setRoomNo__10daNpcCd2_cFv) 	809BA884: 80083860 (Init__9dCcD_SttsFiiP10fopAc_ac_c)
//809BA89C: 80393950 (m_cylDat__10daNpcCd2_c) 	809BA8A0: 80393950 (m_cylDat__10daNpcCd2_c)
// 809BA8A4: 800848B4 (Set__8dCcD_CylFRC11dCcD_SrcCyl) 	809BA8B8: 8042861C (l_Cd2_HIO) 	809BA8BC:
//8042861C (l_Cd2_HIO) 	809BA8D0: 8042861C (l_Cd2_HIO) 	809BA8D4: 8042861C (l_Cd2_HIO) 	809BA8E4:
//8026F200 (SetR__8cM3dGCylFf) 	809BA8F8: 8042861C (l_Cd2_HIO) 	809BA8FC: 8042861C (l_Cd2_HIO)
//	809BA910: 8042861C (l_Cd2_HIO)
//	809BA914: 8042861C (l_Cd2_HIO)
//	809BA924: 8026F1F8 (SetH__8cM3dGCylFf)
//	809BA94C: 80267954 (cM_rndF__Ff)
//	809BA968: 801580F0 (getAnmP__10daNpcCd2_cFii)
//	809BA988: 80158F00 (setAnm__10daNpcCd2_cFP18J3DAnmTransformKeyffiii)
//	809BA994: 80267954 (cM_rndF__Ff)
//	809BA9B0: 801580F0 (getAnmP__10daNpcCd2_cFii)
//	809BA9D0: 80158F00 (setAnm__10daNpcCd2_cFP18J3DAnmTransformKeyffiii)
//	809BA9DC: 8000FB7C (setMorf__13mDoExt_morf_cFf)
//	809BA9E0: 803DD470 (now__14mDoMtx_stack_c)
//	809BA9E4: 803DD470 (now__14mDoMtx_stack_c)
//	809BA9F4: 803468E8 (PSMTXTrans)
//	809BA9F8: 803DD470 (now__14mDoMtx_stack_c)
//	809BA9FC: 803DD470 (now__14mDoMtx_stack_c)
//	809BAA04: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	809BAA10: 803DD470 (now__14mDoMtx_stack_c)
//	809BAA14: 803DD470 (now__14mDoMtx_stack_c)
//	809BAA1C: 803464B0 (PSMTXCopy)
//	809BAA24: 800111EC (modelCalc__16mDoExt_McaMorfSOFv)
//	809BAA30: 80158420 (setAttention__10daNpcCd2_cFi)
//	809BAA38: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcFgd_c::create_init() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/create_init__10daNpcFgd_cFv.s"
}
#pragma pop

/* 809BAA4C-809BAA80 0034+00 s=1 e=0 z=0  None .text      daNpcFgd_Delete__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daNpcFgd_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/daNpcFgd_Delete__FPv.s"
}
#pragma pop

/* 809BAA80-809BAB04 0084+00 s=1 e=0 z=0  None .text      __dt__10daNpcFgd_cFv */
//	809BAAA0: 809BB4CC (__vt__10daNpcFgd_c)
//	809BAAA4: 809BB4CC (__vt__10daNpcFgd_c)
//	809BAAB4: 80158CBC (removeResrc__10daNpcCd2_cFii)
//	809BAAC8: 80011310 (stopZelAnime__16mDoExt_McaMorfSOFv)
//	809BAAD4: 809BAE80 (__dt__10daNpcCd2_cFv)
//	809BAAE4: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpcFgd_c::~daNpcFgd_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/__dt__10daNpcFgd_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 809BB408-809BB40C 0004+00 s=0 e=0 z=0  None .rodata    @3980 */
SECTION_RODATA u32 const lit_3980 = 0xC1A80000;

/* 809BB40C-809BB410 0004+00 s=0 e=0 z=0  None .rodata    @3981 */
SECTION_RODATA u32 const lit_3981 = 0xC2480000;

/* 809BB410-809BB414 0004+00 s=0 e=0 z=0  None .rodata    @3982 */
SECTION_RODATA u32 const lit_3982 = 0xC1200000;

/* 809BB414-809BB418 0004+00 s=0 e=0 z=0  None .rodata    @3983 */
SECTION_RODATA u32 const lit_3983 = 0xC2B40000;

/* 809BB418-809BB41C 0004+00 s=0 e=0 z=0  None .rodata    @3984 */
SECTION_RODATA u32 const lit_3984 = 0x42480000;

/* 809BB41C-809BB420 0004+00 s=0 e=0 z=0  None .rodata    @3985 */
SECTION_RODATA u32 const lit_3985 = 0x43910000;

/* 809BB420-809BB424 0004+00 s=0 e=0 z=0  None .rodata    @3986 */
SECTION_RODATA u32 const lit_3986 = 0x42700000;

/* 809BB424-809BB428 0004+00 s=0 e=0 z=0  None .rodata    @3987 */
SECTION_RODATA u32 const lit_3987 = 0x3F800000;

/* 809BB428-809BB42C 0004+00 s=0 e=0 z=0  None .rodata    @3988 */
SECTION_RODATA u32 const lit_3988 = 0x41400000;

/* 809BB42C-809BB430 0004+00 s=0 e=0 z=0  None .rodata    @3989 */
SECTION_RODATA u32 const lit_3989 = 0x40A00000;

/* 809BB430-809BB434 0004+00 s=0 e=0 z=0  None .rodata    @3990 */
SECTION_RODATA u8 const lit_3990[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 809BB434-809BB438 0004+00 s=1 e=0 z=0  None .rodata    @4182 */
SECTION_RODATA static u32 const lit_4182 = 0x3ECCCCCD;

/* 809BB438-809BB43C 0004+00 s=1 e=0 z=0  None .rodata    @4183 */
SECTION_RODATA static u32 const lit_4183 = 0x41C80000;

/* 809BAB04-809BAD3C 0238+00 s=1 e=0 z=0  None .text      daNpcFgd_Execute__FPv */
//	809BAB14: 803621DC (_savegpr_29)
//	809BAB28: 8042861C (l_Cd2_HIO)
//	809BAB2C: 8042861C (l_Cd2_HIO)
//	809BAB40: 8042861C (l_Cd2_HIO)
//	809BAB44: 8042861C (l_Cd2_HIO)
//	809BAB68: 8042861C (l_Cd2_HIO)
//	809BAB6C: 8042861C (l_Cd2_HIO)
//	809BAB80: 8042861C (l_Cd2_HIO)
//	809BAB84: 8042861C (l_Cd2_HIO)
//	809BAB94: 80075F40 (SetWallR__12dBgS_AcchCirFf)
//	809BAC00: 804061C0 (g_dComIfG_gameInfo)
//	809BAC04: 804061C0 (g_dComIfG_gameInfo)
//	809BAC10: 80076AAC (CrrPos__9dBgS_AcchFR4dBgS)
//	809BAC18: 809BB490 (__vt__8cM3dGPla)
//	809BAC1C: 809BB490 (__vt__8cM3dGPla)
//	809BAC30: 80074744 (GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla)
//	809BAC44: 8001DBD8 (fopAcM_getPolygonAngle__FPC8cM3dGPlas)
//	809BAC68: 809BB434 (lit_4182)
//	809BAC6C: 809BB434 (lit_4182)
//	809BAC70: 809BB438 (lit_4183)
//	809BAC74: 809BB438 (lit_4183)
//	809BAC78: 8026FA3C (cLib_addCalc2__FPffff)
//	809BAC7C: 809BB490 (__vt__8cM3dGPla)
//	809BAC80: 809BB490 (__vt__8cM3dGPla)
//	809BAC90: 80158E28 (animation__10daNpcCd2_cFi)
//	809BACB4: 8026F1DC (SetC__8cM3dGCylFRC4cXyz)
//	809BACB8: 804061C0 (g_dComIfG_gameInfo)
//	809BACBC: 804061C0 (g_dComIfG_gameInfo)
//	809BACC8: 80264BA8 (Set__4cCcSFP8cCcD_Obj)
//	809BACCC: 803DD470 (now__14mDoMtx_stack_c)
//	809BACD0: 803DD470 (now__14mDoMtx_stack_c)
//	809BACE0: 803468E8 (PSMTXTrans)
//	809BACE4: 803DD470 (now__14mDoMtx_stack_c)
//	809BACE8: 803DD470 (now__14mDoMtx_stack_c)
//	809BACF0: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	809BACFC: 803DD470 (now__14mDoMtx_stack_c)
//	809BAD00: 803DD470 (now__14mDoMtx_stack_c)
//	809BAD08: 803464B0 (PSMTXCopy)
//	809BAD10: 800111EC (modelCalc__16mDoExt_McaMorfSOFv)
//	809BAD1C: 80158420 (setAttention__10daNpcCd2_cFi)
//	809BAD28: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daNpcFgd_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/daNpcFgd_Execute__FPv.s"
}
#pragma pop

/* 809BAD3C-809BAD84 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGPlaFv */
//	809BAD54: 809BB490 (__vt__8cM3dGPla)
//	809BAD58: 809BB490 (__vt__8cM3dGPla)
//	809BAD68: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGPla::~cM3dGPla() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/__dt__8cM3dGPlaFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 809BB43C-809BB440 0004+00 s=1 e=0 z=0  None .rodata    @4201 */
SECTION_RODATA static u32 const lit_4201 = 0x42200000;

/* 809BAD84-809BAE20 009C+00 s=1 e=0 z=0  None .text      daNpcFgd_Draw__FPv */
//	809BADAC: 801590FC (drawNpc__10daNpcCd2_cFv)
//	809BADBC: 8042861C (l_Cd2_HIO)
//	809BADC0: 8042861C (l_Cd2_HIO)
//	809BADD4: 8042861C (l_Cd2_HIO)
//	809BADD8: 8042861C (l_Cd2_HIO)
//	809BADF4: 80158FF0 (drawObj__10daNpcCd2_cFiP8J3DModelf)
//	809BADFC: 809BB43C (lit_4201)
//	809BAE00: 809BB43C (lit_4201)
//	809BAE04: 80158F6C (drawShadow__10daNpcCd2_cFf)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daNpcFgd_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/daNpcFgd_Draw__FPv.s"
}
#pragma pop

/* 809BAE20-809BAE28 0008+00 s=1 e=0 z=0  None .text      daNpcFgd_IsDelete__FPv */
static bool daNpcFgd_IsDelete(void* param_0) {
    return true;
}

/* 809BAE28-809BAE70 0048+00 s=1 e=0 z=0  None .text      __dt__10cCcD_GSttsFv */
//	809BAE40: 809BB4A8 (__vt__10cCcD_GStts)
//	809BAE44: 809BB4A8 (__vt__10cCcD_GStts)
//	809BAE54: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 809BAE70-809BAE78 0008+00 s=1 e=0 z=0  None .text      @36@__dt__12dBgS_ObjAcchFv */
//	809BAE74: 809BB38C (__dt__12dBgS_ObjAcchFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_809BAE70() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/func_809BAE70.s"
}
#pragma pop

/* 809BAE78-809BAE80 0008+00 s=1 e=0 z=0  None .text      @20@__dt__12dBgS_ObjAcchFv */
//	809BAE7C: 809BB38C (__dt__12dBgS_ObjAcchFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_809BAE78() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/func_809BAE78.s"
}
#pragma pop

/* 809BAE80-809BB0D0 0250+00 s=2 e=0 z=0  None .text      __dt__10daNpcCd2_cFv */
//	809BAEA0: 809BB514 (__vt__10daNpcCd2_c)
//	809BAEA4: 809BB514 (__vt__10daNpcCd2_c)
//	809BAEB4: 809BB4C0 (__vt__16dNpcLib_lookat_c)
//	809BAEB8: 809BB4C0 (__vt__16dNpcLib_lookat_c)
//	809BAEC4: 809BB0D0 (__dt__5csXyzFv)
//	809BAEC8: 809BB0D0 (__dt__5csXyzFv)
//	809BAED4: 80361CE8 (__destroy_arr)
//	809BAEDC: 809BB0D0 (__dt__5csXyzFv)
//	809BAEE0: 809BB0D0 (__dt__5csXyzFv)
//	809BAEEC: 80361CE8 (__destroy_arr)
//	809BAEF4: 809BB0D0 (__dt__5csXyzFv)
//	809BAEF8: 809BB0D0 (__dt__5csXyzFv)
//	809BAF04: 80361CE8 (__destroy_arr)
//	809BAF0C: 809BB0D0 (__dt__5csXyzFv)
//	809BAF10: 809BB0D0 (__dt__5csXyzFv)
//	809BAF1C: 80361CE8 (__destroy_arr)
//	809BAF24: 809BB0D0 (__dt__5csXyzFv)
//	809BAF28: 809BB0D0 (__dt__5csXyzFv)
//	809BAF34: 80361CE8 (__destroy_arr)
//	809BAF3C: 809BB2E0 (__dt__4cXyzFv)
//	809BAF40: 809BB2E0 (__dt__4cXyzFv)
//	809BAF4C: 80361CE8 (__destroy_arr)
//	809BAF58: 803AC050 (__vt__8dCcD_Cyl)
//	809BAF5C: 803AC050 (__vt__8dCcD_Cyl)
//	809BAF7C: 803C35A4 (__vt__12cCcD_CylAttr)
//	809BAF80: 803C35A4 (__vt__12cCcD_CylAttr)
//	809BAF98: 809BB4D8 (__vt__8cM3dGCyl)
//	809BAF9C: 809BB4D8 (__vt__8cM3dGCyl)
//	809BAFAC: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	809BAFB0: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	809BAFC0: 809BB4E4 (__vt__8cM3dGAab)
//	809BAFC4: 809BB4E4 (__vt__8cM3dGAab)
//	809BAFD4: 800840E4 (__dt__12dCcD_GObjInfFv)
//	809BAFE0: 803AC2E4 (__vt__9dCcD_Stts)
//	809BAFE4: 803AC2E4 (__vt__9dCcD_Stts)
//	809BAFFC: 809BB4B4 (__vt__10dCcD_GStts)
//	809BB000: 809BB4B4 (__vt__10dCcD_GStts)
//	809BB010: 809BB4A8 (__vt__10cCcD_GStts)
//	809BB014: 809BB4A8 (__vt__10cCcD_GStts)
//	809BB024: 803C3728 (__vt__9cCcD_Stts)
//	809BB028: 803C3728 (__vt__9cCcD_Stts)
//	809BB038: 809BB49C (__vt__12dBgS_AcchCir)
//	809BB03C: 809BB49C (__vt__12dBgS_AcchCir)
//	809BB04C: 8026EF18 (__dt__8cM3dGCirFv)
//	809BB058: 802680B0 (__dt__13cBgS_PolyInfoFv)
//	809BB064: 809BB4F0 (__vt__12dBgS_ObjAcch)
//	809BB068: 809BB4F0 (__vt__12dBgS_ObjAcch)
//	809BB088: 80075F94 (__dt__9dBgS_AcchFv)
//	809BB094: 802C0C6C (__dt__17Z2CreatureCitizenFv)
//	809BB0A0: 80018C8C (__dt__10fopAc_ac_cFv)
//	809BB0B0: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpcCd2_c::~daNpcCd2_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/__dt__10daNpcCd2_cFv.s"
}
#pragma pop

/* 809BB0D0-809BB10C 003C+00 s=2 e=0 z=0  None .text      __dt__5csXyzFv */
//	809BB0F0: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm csXyz::~csXyz() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/__dt__5csXyzFv.s"
}
#pragma pop

/* 809BB10C-809BB1F4 00E8+00 s=1 e=0 z=0  None .text      __dt__16dNpcLib_lookat_cFv */
//	809BB12C: 809BB4C0 (__vt__16dNpcLib_lookat_c)
//	809BB130: 809BB4C0 (__vt__16dNpcLib_lookat_c)
//	809BB13C: 809BB0D0 (__dt__5csXyzFv)
//	809BB140: 809BB0D0 (__dt__5csXyzFv)
//	809BB14C: 80361CE8 (__destroy_arr)
//	809BB154: 809BB0D0 (__dt__5csXyzFv)
//	809BB158: 809BB0D0 (__dt__5csXyzFv)
//	809BB164: 80361CE8 (__destroy_arr)
//	809BB16C: 809BB0D0 (__dt__5csXyzFv)
//	809BB170: 809BB0D0 (__dt__5csXyzFv)
//	809BB17C: 80361CE8 (__destroy_arr)
//	809BB184: 809BB0D0 (__dt__5csXyzFv)
//	809BB188: 809BB0D0 (__dt__5csXyzFv)
//	809BB194: 80361CE8 (__destroy_arr)
//	809BB19C: 809BB0D0 (__dt__5csXyzFv)
//	809BB1A0: 809BB0D0 (__dt__5csXyzFv)
//	809BB1AC: 80361CE8 (__destroy_arr)
//	809BB1B4: 809BB2E0 (__dt__4cXyzFv)
//	809BB1B8: 809BB2E0 (__dt__4cXyzFv)
//	809BB1C4: 80361CE8 (__destroy_arr)
//	809BB1D4: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dNpcLib_lookat_c::~dNpcLib_lookat_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/__dt__16dNpcLib_lookat_cFv.s"
}
#pragma pop

/* 809BB1F4-809BB23C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv */
//	809BB20C: 809BB4D8 (__vt__8cM3dGCyl)
//	809BB210: 809BB4D8 (__vt__8cM3dGCyl)
//	809BB220: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 809BB23C-809BB284 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
//	809BB254: 809BB4E4 (__vt__8cM3dGAab)
//	809BB258: 809BB4E4 (__vt__8cM3dGAab)
//	809BB268: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 809BB284-809BB2E0 005C+00 s=1 e=0 z=0  None .text      __dt__10dCcD_GSttsFv */
//	809BB29C: 809BB4B4 (__vt__10dCcD_GStts)
//	809BB2A0: 809BB4B4 (__vt__10dCcD_GStts)
//	809BB2AC: 809BB4A8 (__vt__10cCcD_GStts)
//	809BB2B0: 809BB4A8 (__vt__10cCcD_GStts)
//	809BB2C4: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 809BB2E0-809BB31C 003C+00 s=2 e=0 z=0  None .text      __dt__4cXyzFv */
//	809BB300: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/__dt__4cXyzFv.s"
}
#pragma pop

/* 809BB31C-809BB38C 0070+00 s=1 e=0 z=0  None .text      __dt__12dBgS_AcchCirFv */
//	809BB33C: 809BB49C (__vt__12dBgS_AcchCir)
//	809BB340: 809BB49C (__vt__12dBgS_AcchCir)
//	809BB350: 8026EF18 (__dt__8cM3dGCirFv)
//	809BB35C: 802680B0 (__dt__13cBgS_PolyInfoFv)
//	809BB36C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 809BB38C-809BB3FC 0070+00 s=3 e=0 z=0  None .text      __dt__12dBgS_ObjAcchFv */
//	809BB3AC: 809BB4F0 (__vt__12dBgS_ObjAcch)
//	809BB3B0: 809BB4F0 (__vt__12dBgS_ObjAcch)
//	809BB3CC: 80075F94 (__dt__9dBgS_AcchFv)
//	809BB3DC: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_fguard/d_a_npc_fguard/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop
