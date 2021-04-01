//
// Generated By: dol2asm
// Translation Unit: d_a_e_tk2
//

#include "rel/d/a/e/d_a_e_tk2/d_a_e_tk2.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    /* 8000CE38 */ void scaleM(f32, f32, f32);
};

struct J3DAnmTransform {};

struct Z2Creature {};

struct mDoExt_McaMorfCallBack1_c {};

struct mDoExt_McaMorfCallBack2_c {};

struct J3DModelData {};

struct mDoExt_McaMorfSO {
    /* 800107D0 */ mDoExt_McaMorfSO(J3DModelData*, mDoExt_McaMorfCallBack1_c*,
                                    mDoExt_McaMorfCallBack2_c*, J3DAnmTransform*, int, f32, int,
                                    int, Z2Creature*, u32, u32);
    /* 80010E70 */ void setAnm(J3DAnmTransform*, int, f32, f32, f32, f32);
    /* 800110B0 */ void play(u32, s8);
    /* 800111C0 */ void entryDL();
    /* 800111EC */ void modelCalc();
    /* 80011310 */ void stopZelAnime();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct e_tk2_class {};

struct daE_TK2_HIO_c {
    /* 807BA56C */ daE_TK2_HIO_c();
    /* 807BBD00 */ ~daE_TK2_HIO_c();
};

struct cXyz {};

struct dKy_tevstr_c {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dPa_levelEcallBack {};

struct csXyz {};

struct _GXColor {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct dCcU_AtInfo {};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {};

struct dCcD_Sph {
    /* 80084A34 */ void Set(dCcD_SrcSph const&);
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80083830 */ void Move();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
    /* 800844F8 */ void GetTgHitObj();
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjGndChk_Spl {
    /* 800777B0 */ dBgS_ObjGndChk_Spl();
    /* 80077848 */ ~dBgS_ObjGndChk_Spl();
};

struct dBgS_ObjAcch {
    /* 807BBC90 */ ~dBgS_ObjAcch();
};

struct dBgS_LinChk {
    /* 80077C68 */ dBgS_LinChk();
    /* 80077CDC */ ~dBgS_LinChk();
    /* 80077D64 */ void Set(cXyz const*, cXyz const*, fopAc_ac_c const*);
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F58 */ void SetWall(f32, f32);
};

struct dBgS {};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cM3dGSph {
    /* 8026F648 */ void SetC(cXyz const&);
    /* 8026F708 */ void SetR(f32);
    /* 807BBC00 */ ~cM3dGSph();
};

struct cM3dGAab {
    /* 807BBC48 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cBgS_LinChk {};

struct cBgS_GndChk {
    /* 80267D28 */ void SetPos(cXyz const*);
};

struct cBgS {
    /* 800743B4 */ void LineCross(cBgS_LinChk*);
    /* 800744A0 */ void GroundCross(cBgS_GndChk*);
};

struct Vec {};

struct Z2CreatureEnemy {
    /* 802C0F64 */ Z2CreatureEnemy();
    /* 802C1094 */ void init(Vec*, Vec*, u8, u8);
    /* 802C1B7C */ void setLinkSearch(bool);
    /* 802C1B90 */ void setEnemyName(char const*);
};

struct J3DFrameCtrl {
    /* 8032842C */ void checkPass(f32);
};

//
// Forward References:
//

static void anm_init(e_tk2_class*, int, f32, u8, f32);
static void daE_TK2_Draw(e_tk2_class*);
static void other_bg_check(e_tk2_class*, fopAc_ac_c*);
static void pl_check(e_tk2_class*, f32, s16);
static void damage_check(e_tk2_class*);
static void e_tk2_wait_0(e_tk2_class*);
static void e_tk2_find(e_tk2_class*);
static void e_tk2_attack(e_tk2_class*);
static void e_tk2_s_damage(e_tk2_class*);
static void e_tk2_damage(e_tk2_class*);
static void action(e_tk2_class*);
static void daE_TK2_Execute(e_tk2_class*);
static bool daE_TK2_IsDelete(e_tk2_class*);
static void daE_TK2_Delete(e_tk2_class*);
static void useHeapInit(fopAc_ac_c*);
static void daE_TK2_Create(fopAc_ac_c*);

extern "C" void __ct__13daE_TK2_HIO_cFv();
extern "C" static void anm_init__FP11e_tk2_classifUcf();
extern "C" static void daE_TK2_Draw__FP11e_tk2_class();
extern "C" static void other_bg_check__FP11e_tk2_classP10fopAc_ac_c();
extern "C" static void pl_check__FP11e_tk2_classfs();
extern "C" static void damage_check__FP11e_tk2_class();
extern "C" static void e_tk2_wait_0__FP11e_tk2_class();
extern "C" static void e_tk2_find__FP11e_tk2_class();
extern "C" static void e_tk2_attack__FP11e_tk2_class();
extern "C" static void e_tk2_s_damage__FP11e_tk2_class();
extern "C" static void e_tk2_damage__FP11e_tk2_class();
extern "C" static void action__FP11e_tk2_class();
extern "C" static void daE_TK2_Execute__FP11e_tk2_class();
extern "C" static bool daE_TK2_IsDelete__FP11e_tk2_class();
extern "C" static void daE_TK2_Delete__FP11e_tk2_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daE_TK2_Create__FP10fopAc_ac_c();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__13daE_TK2_HIO_cFv();
extern "C" void __sinit_d_a_e_tk2_cpp();
extern "C" static void func_807BBD84();
extern "C" static void func_807BBD8C();
extern "C" extern u32 const lit_3763;
extern "C" extern u32 const lit_3764;
extern "C" extern u32 const lit_3765;
extern "C" extern u32 const lit_3766;
extern "C" extern u32 const lit_3938;
extern "C" extern u32 const lit_3940;
extern "C" extern u32 const lit_3941;
extern "C" extern u32 const lit_3942;
extern "C" extern u32 const lit_3943;
extern "C" extern u32 const lit_3944;
extern "C" extern u32 const lit_3945;
extern "C" extern u32 const lit_3946;
extern "C" extern u32 const lit_3988;
extern "C" extern u32 const lit_3989;
extern "C" extern u32 const lit_4204;
extern "C" extern u32 const lit_4205;
extern "C" extern u32 const lit_4206;
extern "C" extern u32 const lit_4207;
extern "C" extern u32 const lit_4208;
extern "C" extern u32 const lit_4209;
extern "C" extern u32 const lit_4210;
extern "C" extern u32 const lit_4211;
extern "C" extern u32 const lit_4328;
extern "C" extern u32 const lit_4329;
extern "C" extern u32 const lit_4330;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_E_TK2[12];
extern "C" extern void* __vt__8cM3dGSph[3];
extern "C" extern void* __vt__8cM3dGAab[3];
extern "C" extern void* __vt__12dBgS_ObjAcch[9];
extern "C" extern void* __vt__13daE_TK2_HIO_c[3];

//
// External References:
//

void mDoMtx_YrotM(f32 (*)[4], s16);
void fopAcIt_Judge(void* (*)(void*, void*), void*);
void fopAcM_delete(fopAc_ac_c*);
void fopAcM_createChild(s16, unsigned int, u32, cXyz const*, int, csXyz const*, cXyz const*, s8,
                        int (*)(void*));
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_SetMin(fopAc_ac_c*, f32, f32, f32);
void fopAcM_SetMax(fopAc_ac_c*, f32, f32, f32);
void fopAcM_searchActorAngleY(fopAc_ac_c const*, fopAc_ac_c const*);
void fopAcM_searchActorDistance(fopAc_ac_c const*, fopAc_ac_c const*);
void fopAcM_createDisappear(fopAc_ac_c const*, cXyz const*, u8, u8, u8);
void fpcSch_JudgeByID(void*, void*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void at_power_check(dCcU_AtInfo*);
void cc_at_check(fopAc_ac_c*, dCcU_AtInfo*);
void cM_rndF(f32);
void cM_rndFX(f32);
void cLib_addCalc2(f32*, f32, f32, f32);
void cLib_addCalcAngleS2(s16*, s16, s16, s16);
void MtxPosition(cXyz*, cXyz*);
void* operator new(u32);
void operator delete(void*);

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_createDisappear__FPC10fopAc_ac_cPC4cXyzUcUcUc();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__18dBgS_ObjGndChk_SplFv();
extern "C" void __dt__18dBgS_ObjGndChk_SplFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void at_power_check__FP11dCcU_AtInfo();
extern "C" void cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void setLinkSearch__15Z2CreatureEnemyFb();
extern "C" void setEnemyName__15Z2CreatureEnemyFPCc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 807BBDA8-807BBDAC 0004+00 s=7 e=0 z=0  None .rodata    @3762 */
SECTION_RODATA static u32 const lit_3762 = 0x40133333;

/* 807BBE28-807BBE5C 0034+00 s=1 e=0 z=0  None .data      @3947 */
SECTION_DATA static void* lit_3947[13] = {
    (void*)(((char*)e_tk2_find__FP11e_tk2_class) + 0x44),
    (void*)(((char*)e_tk2_find__FP11e_tk2_class) + 0x64),
    (void*)(((char*)e_tk2_find__FP11e_tk2_class) + 0xD8),
    (void*)(((char*)e_tk2_find__FP11e_tk2_class) + 0xF8),
    (void*)(((char*)e_tk2_find__FP11e_tk2_class) + 0x118),
    (void*)(((char*)e_tk2_find__FP11e_tk2_class) + 0x2E4),
    (void*)(((char*)e_tk2_find__FP11e_tk2_class) + 0x2E4),
    (void*)(((char*)e_tk2_find__FP11e_tk2_class) + 0x2E4),
    (void*)(((char*)e_tk2_find__FP11e_tk2_class) + 0x2E4),
    (void*)(((char*)e_tk2_find__FP11e_tk2_class) + 0x2E4),
    (void*)(((char*)e_tk2_find__FP11e_tk2_class) + 0x17C),
    (void*)(((char*)e_tk2_find__FP11e_tk2_class) + 0x19C),
    (void*)(((char*)e_tk2_find__FP11e_tk2_class) + 0x208),
};

/* 807BBE5C-807BBE9C 0040+00 s=1 e=0 z=0  None .data      cc_sph_src$4256 */
SECTION_DATA static u8 cc_sph_src[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D,
    0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};

/* 807BBE9C-807BBEBC 0020+00 s=1 e=0 z=0  None .data      l_daE_TK2_Method */
SECTION_DATA static void* l_daE_TK2_Method[8] = {
    (void*)daE_TK2_Create__FP10fopAc_ac_c,
    (void*)daE_TK2_Delete__FP11e_tk2_class,
    (void*)daE_TK2_Execute__FP11e_tk2_class,
    (void*)daE_TK2_IsDelete__FP11e_tk2_class,
    (void*)daE_TK2_Draw__FP11e_tk2_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 807BBEBC-807BBEEC 0030+00 s=0 e=0 z=1  None .data      g_profile_E_TK2 */
SECTION_DATA void* g_profile_E_TK2[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01D10000, (void*)&g_fpcLf_Method,
    (void*)0x00000A50, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00960000, (void*)&l_daE_TK2_Method,
    (void*)0x00040100, (void*)0x020E0000,
};

/* 807BBEEC-807BBEF8 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGSph */
SECTION_DATA void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 807BBEF8-807BBF04 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 807BBF04-807BBF28 0024+00 s=2 e=0 z=0  None .data      __vt__12dBgS_ObjAcch */
SECTION_DATA void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_807BBD8C,
    (void*)NULL,
    (void*)NULL,
    (void*)func_807BBD84,
};

/* 807BBF28-807BBF34 000C+00 s=2 e=0 z=0  None .data      __vt__13daE_TK2_HIO_c */
SECTION_DATA void* __vt__13daE_TK2_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__13daE_TK2_HIO_cFv,
};

/* 807BA56C-807BA5B4 0048+00 s=1 e=0 z=0  None .text      __ct__13daE_TK2_HIO_cFv */
//	807BA56C: 807BBDA8 (lit_3762)
//	807BA570: 807BBDA8 (lit_3762)
//	807BA574: 807BBF28 (__vt__13daE_TK2_HIO_c)
//	807BA578: 807BBF28 (__vt__13daE_TK2_HIO_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_TK2_HIO_c::daE_TK2_HIO_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/d_a_e_tk2/__ct__13daE_TK2_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 807BBDAC-807BBDB0 0004+00 s=0 e=0 z=0  None .rodata    @3763 */
SECTION_RODATA u32 const lit_3763 = 0x44AF0000;

/* 807BBDB0-807BBDB4 0004+00 s=0 e=0 z=0  None .rodata    @3764 */
SECTION_RODATA u32 const lit_3764 = 0x43FA0000;

/* 807BBDB4-807BBDB8 0004+00 s=0 e=0 z=0  None .rodata    @3765 */
SECTION_RODATA u32 const lit_3765 = 0x41200000;

/* 807BBDB8-807BBDBC 0004+00 s=0 e=0 z=0  None .rodata    @3766 */
SECTION_RODATA u32 const lit_3766 = 0x41C80000;

/* 807BBDBC-807BBDC0 0004+00 s=1 e=0 z=0  None .rodata    @3780 */
SECTION_RODATA static u8 const lit_3780[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 807BBDC0-807BBDC4 0004+00 s=1 e=0 z=0  None .rodata    @3781 */
SECTION_RODATA static u32 const lit_3781 = 0xBF800000;

/* 807BBDC4-807BBDC8 0004+00 s=1 e=0 z=0  None .rodata    @3820 */
SECTION_RODATA static u32 const lit_3820 = 0x42C80000;

/* 807BBDC8-807BBDCC 0004+00 s=0 e=0 z=0  None .rodata    @3938 */
SECTION_RODATA u32 const lit_3938 = 0x40400000;

/* 807BBDCC-807BBDD0 0004+00 s=1 e=0 z=0  None .rodata    @3939 */
SECTION_RODATA static u32 const lit_3939 = 0x3F800000;

/* 807BBDD0-807BBDD4 0004+00 s=0 e=0 z=0  None .rodata    @3940 */
SECTION_RODATA u32 const lit_3940 = 0x41F00000;

/* 807BBDD4-807BBDD8 0004+00 s=0 e=0 z=0  None .rodata    @3941 */
SECTION_RODATA u32 const lit_3941 = 0x40800000;

/* 807BBDD8-807BBDDC 0004+00 s=0 e=0 z=0  None .rodata    @3942 */
SECTION_RODATA u32 const lit_3942 = 0x40000000;

/* 807BBDDC-807BBDE0 0004+00 s=0 e=0 z=0  None .rodata    @3943 */
SECTION_RODATA u32 const lit_3943 = 0x3E19999A;

/* 807BBDE0-807BBDE4 0004+00 s=0 e=0 z=0  None .rodata    @3944 */
SECTION_RODATA u32 const lit_3944 = 0x3F99999A;

/* 807BBDE4-807BBDE8 0004+00 s=0 e=0 z=0  None .rodata    @3945 */
SECTION_RODATA u32 const lit_3945 = 0x41A00000;

/* 807BBDE8-807BBDEC 0004+00 s=0 e=0 z=0  None .rodata    @3946 */
SECTION_RODATA u32 const lit_3946 = 0x45FA0000;

/* 807BBDEC-807BBDF0 0004+00 s=0 e=0 z=0  None .rodata    @3988 */
SECTION_RODATA u32 const lit_3988 = 0x428C0000;

/* 807BBDF0-807BBDF4 0004+00 s=0 e=0 z=0  None .rodata    @3989 */
SECTION_RODATA u32 const lit_3989 = 0x42480000;

/* 807BBDF4-807BBDF8 0004+00 s=0 e=0 z=0  None .rodata    @4204 */
SECTION_RODATA u32 const lit_4204 = 0x43480000;

/* 807BBDF8-807BBDFC 0004+00 s=0 e=0 z=0  None .rodata    @4205 */
SECTION_RODATA u32 const lit_4205 = 0x40C00000;

/* 807BBDFC-807BBE00 0004+00 s=0 e=0 z=0  None .rodata    @4206 */
SECTION_RODATA u32 const lit_4206 = 0x41400000;

/* 807BBE00-807BBE04 0004+00 s=0 e=0 z=0  None .rodata    @4207 */
SECTION_RODATA u32 const lit_4207 = 0x41900000;

/* 807BBE04-807BBE08 0004+00 s=0 e=0 z=0  None .rodata    @4208 */
SECTION_RODATA u32 const lit_4208 = 0x41C00000;

/* 807BBE08-807BBE0C 0004+00 s=0 e=0 z=0  None .rodata    @4209 */
SECTION_RODATA u32 const lit_4209 = 0x40A00000;

/* 807BBE0C-807BBE10 0004+00 s=0 e=0 z=0  None .rodata    @4210 */
SECTION_RODATA u32 const lit_4210 = 0x41D80000;

/* 807BBE10-807BBE14 0004+00 s=0 e=0 z=0  None .rodata    @4211 */
SECTION_RODATA u32 const lit_4211 = 0x420C0000;

/* 807BBE14-807BBE18 0004+00 s=0 e=0 z=0  None .rodata    @4328 */
SECTION_RODATA u32 const lit_4328 = 0xC2C80000;

/* 807BBE18-807BBE1C 0004+00 s=0 e=0 z=0  None .rodata    @4329 */
SECTION_RODATA u32 const lit_4329 = 0xC2480000;

/* 807BBE1C-807BBE20 0004+00 s=0 e=0 z=0  None .rodata    @4330 */
SECTION_RODATA u32 const lit_4330 = 0x42700000;

/* 807BBE20-807BBE26 0006+00 s=4 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_807BBE20 = "E_tk2";
#pragma pop

/* 807BA5B4-807BA660 00AC+00 s=4 e=0 z=0  None .text      anm_init__FP11e_tk2_classifUcf */
//	807BA5D4: 803621DC (_savegpr_29)
//	807BA5EC: 807BBE20 (stringBase0)
//	807BA5F0: 807BBE20 (stringBase0)
//	807BA5F4: 804061C0 (g_dComIfG_gameInfo)
//	807BA5F8: 804061C0 (g_dComIfG_gameInfo)
//	807BA608: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	807BA620: 807BBDBC (lit_3780)
//	807BA624: 807BBDBC (lit_3780)
//	807BA628: 807BBDC0 (lit_3781)
//	807BA62C: 807BBDC0 (lit_3781)
//	807BA630: 80010E70 (setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff)
//	807BA64C: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void anm_init(e_tk2_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/d_a_e_tk2/anm_init__FP11e_tk2_classifUcf.s"
}
#pragma pop

/* 807BA660-807BA6D0 0070+00 s=1 e=0 z=0  None .text      daE_TK2_Draw__FP11e_tk2_class */
//	807BA680: 8042CA54 (g_env_light)
//	807BA684: 8042CA54 (g_env_light)
//	807BA694: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	807BA698: 8042CA54 (g_env_light)
//	807BA69C: 8042CA54 (g_env_light)
//	807BA6A8: 801A4DA0
//(setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c) 	807BA6B0:
// 800111C0 (entryDL__16mDoExt_McaMorfSOFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_TK2_Draw(e_tk2_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/d_a_e_tk2/daE_TK2_Draw__FP11e_tk2_class.s"
}
#pragma pop

/* 807BA6D0-807BA7A8 00D8+00 s=1 e=0 z=0  None .text other_bg_check__FP11e_tk2_classP10fopAc_ac_c
 */
//	807BA6F0: 80077C68 (__ct__11dBgS_LinChkFv)
//	807BA70C: 807BBDC4 (lit_3820)
//	807BA710: 807BBDC4 (lit_3820)
//	807BA74C: 80077D64 (Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c)
//	807BA750: 804061C0 (g_dComIfG_gameInfo)
//	807BA754: 804061C0 (g_dComIfG_gameInfo)
//	807BA760: 800743B4 (LineCross__4cBgSFP11cBgS_LinChk)
//	807BA774: 80077CDC (__dt__11dBgS_LinChkFv)
//	807BA788: 80077CDC (__dt__11dBgS_LinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void other_bg_check(e_tk2_class* param_0, fopAc_ac_c* param_1) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/d_a_e_tk2/other_bg_check__FP11e_tk2_classP10fopAc_ac_c.s"
}
#pragma pop

/* 807BA7A8-807BA824 007C+00 s=2 e=0 z=0  None .text      pl_check__FP11e_tk2_classfs */
//	807BA7B4: 804061C0 (g_dComIfG_gameInfo)
//	807BA7B8: 804061C0 (g_dComIfG_gameInfo)
//	807BA7FC: 807BA6D0 (other_bg_check__FP11e_tk2_classP10fopAc_ac_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void pl_check(e_tk2_class* param_0, f32 param_1, s16 param_2) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/d_a_e_tk2/pl_check__FP11e_tk2_classfs.s"
}
#pragma pop

/* 807BA824-807BA940 011C+00 s=1 e=0 z=0  None .text      damage_check__FP11e_tk2_class */
//	807BA848: 80083830 (Move__10dCcD_GSttsFv)
//	807BA850: 80084460 (ChkTgHit__12dCcD_GObjInfFv)
//	807BA860: 800844F8 (GetTgHitObj__12dCcD_GObjInfFv)
//	807BA86C: 80087A58 (at_power_check__FP11dCcU_AtInfo)
//	807BA8C8: 80087C04 (cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void damage_check(e_tk2_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/d_a_e_tk2/damage_check__FP11e_tk2_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 807BBF40-807BBF44 0004+00 s=2 e=0 z=0  None .bss       None */
static u8 data_807BBF40[4];

/* 807BBF44-807BBF50 000C+00 s=1 e=0 z=0  None .bss       @3757 */
static u8 lit_3757[12];

/* 807BBF50-807BBF6C 001C+00 s=6 e=0 z=0  None .bss       l_HIO */
static u8 l_HIO[28];

/* 807BA940-807BA9E8 00A8+00 s=1 e=0 z=0  None .text      e_tk2_wait_0__FP11e_tk2_class */
//	807BA98C: 807BBF50 (l_HIO)
//	807BA990: 807BBF50 (l_HIO)
//	807BA99C: 807BA7A8 (pl_check__FP11e_tk2_classfs)
//	807BA9D0: 80270608 (cLib_addCalcAngleS2__FPssss)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_tk2_wait_0(e_tk2_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/d_a_e_tk2/e_tk2_wait_0__FP11e_tk2_class.s"
}
#pragma pop

/* 807BA9E8-807BACF8 0310+00 s=2 e=0 z=0  None .text      e_tk2_find__FP11e_tk2_class */
//	807BAA00: 807BBDA8 (lit_3762)
//	807BAA04: 807BBDA8 (lit_3762)
//	807BAA14: 807BBE28 (lit_3947)
//	807BAA18: 807BBE28 (lit_3947)
//	807BAA3C: 807BA5B4 (anm_init__FP11e_tk2_classifUcf)
//	807BAA90: 807BA5B4 (anm_init__FP11e_tk2_classifUcf)
//	807BAAA0: 80267954 (cM_rndF__Ff)
//	807BAAF0: 807BA5B4 (anm_init__FP11e_tk2_classifUcf)
//	807BAB44: 80267954 (cM_rndF__Ff)
//	807BAB74: 807BA5B4 (anm_init__FP11e_tk2_classifUcf)
//	807BABE0: 807BA5B4 (anm_init__FP11e_tk2_classifUcf)
//	807BAC08: 8026FA3C (cLib_addCalc2__FPffff)
//	807BAC2C: 807BBF50 (l_HIO)
//	807BAC30: 807BBF50 (l_HIO)
//	807BAC6C: 80267954 (cM_rndF__Ff)
//	807BAC8C: 8026798C (cM_rndFX__Ff)
//	807BACDC: 80270608 (cLib_addCalcAngleS2__FPssss)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_tk2_find(e_tk2_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/d_a_e_tk2/e_tk2_find__FP11e_tk2_class.s"
}
#pragma pop

/* 807BACF8-807BAED0 01D8+00 s=1 e=0 z=0  None .text      e_tk2_attack__FP11e_tk2_class */
//	807BAD10: 807BBDA8 (lit_3762)
//	807BAD14: 807BBDA8 (lit_3762)
//	807BAD58: 807BA5B4 (anm_init__FP11e_tk2_classifUcf)
//	807BADB8: 80019EF0 (fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i)
//	807BAE28: 807BA5B4 (anm_init__FP11e_tk2_classifUcf)
//	807BAE30: 80267954 (cM_rndF__Ff)
//	807BAE74: 807BBF50 (l_HIO)
//	807BAE78: 807BBF50 (l_HIO)
//	807BAE88: 807BA7A8 (pl_check__FP11e_tk2_classfs)
//	807BAEB4: 80270608 (cLib_addCalcAngleS2__FPssss)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_tk2_attack(e_tk2_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/d_a_e_tk2/e_tk2_attack__FP11e_tk2_class.s"
}
#pragma pop

/* 807BAED0-807BAF60 0090+00 s=1 e=0 z=0  None .text      e_tk2_s_damage__FP11e_tk2_class */
//	807BAEE4: 807BBDA8 (lit_3762)
//	807BAEE8: 807BBDA8 (lit_3762)
//	807BAF18: 807BA5B4 (anm_init__FP11e_tk2_classifUcf)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_tk2_s_damage(e_tk2_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/d_a_e_tk2/e_tk2_s_damage__FP11e_tk2_class.s"
}
#pragma pop

/* 807BAF60-807BB028 00C8+00 s=1 e=0 z=0  None .text      e_tk2_damage__FP11e_tk2_class */
//	807BAF74: 807BBDA8 (lit_3762)
//	807BAF78: 807BBDA8 (lit_3762)
//	807BAFB8: 807BA5B4 (anm_init__FP11e_tk2_classifUcf)
//	807BB008: 8001CAD8 (fopAcM_createDisappear__FPC10fopAc_ac_cPC4cXyzUcUcUc)
//	807BB010: 80019C7C (fopAcM_delete__FP10fopAc_ac_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void e_tk2_damage(e_tk2_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/d_a_e_tk2/e_tk2_damage__FP11e_tk2_class.s"
}
#pragma pop

/* 807BB028-807BB128 0100+00 s=1 e=0 z=0  None .text      action__FP11e_tk2_class */
//	807BB038: 803621DC (_savegpr_29)
//	807BB044: 804061C0 (g_dComIfG_gameInfo)
//	807BB048: 804061C0 (g_dComIfG_gameInfo)
//	807BB050: 8001A710 (fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c)
//	807BB060: 8001A7E0 (fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c)
//	807BB06C: 807BA824 (damage_check__FP11e_tk2_class)
//	807BB0B0: 807BA940 (e_tk2_wait_0__FP11e_tk2_class)
//	807BB0BC: 807BA9E8 (e_tk2_find__FP11e_tk2_class)
//	807BB0CC: 807BACF8 (e_tk2_attack__FP11e_tk2_class)
//	807BB0DC: 807BAED0 (e_tk2_s_damage__FP11e_tk2_class)
//	807BB0E8: 807BAF60 (e_tk2_damage__FP11e_tk2_class)
//	807BB0FC: 802C1B7C (setLinkSearch__15Z2CreatureEnemyFb)
//	807BB10C: 802C1B7C (setLinkSearch__15Z2CreatureEnemyFb)
//	807BB114: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void action(e_tk2_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/d_a_e_tk2/action__FP11e_tk2_class.s"
}
#pragma pop

/* 807BB128-807BB7E4 06BC+00 s=2 e=0 z=0  None .text      daE_TK2_Execute__FP11e_tk2_class */
//	807BB138: 803621D4 (_savegpr_27)
//	807BB140: 807BBDA8 (lit_3762)
//	807BB144: 807BBDA8 (lit_3762)
//	807BB158: 800777B0 (__ct__18dBgS_ObjGndChk_SplFv)
//	807BB188: 80267D28 (SetPos__11cBgS_GndChkFPC4cXyz)
//	807BB18C: 804061C0 (g_dComIfG_gameInfo)
//	807BB190: 804061C0 (g_dComIfG_gameInfo)
//	807BB19C: 800744A0 (GroundCross__4cBgSFP11cBgS_GndChk)
//	807BB1B4: 80077848 (__dt__18dBgS_ObjGndChk_SplFv)
//	807BB20C: 807BB028 (action__FP11e_tk2_class)
//	807BB214: 804061C0 (g_dComIfG_gameInfo)
//	807BB218: 804061C0 (g_dComIfG_gameInfo)
//	807BB220: 80076AAC (CrrPos__9dBgS_AcchFR4dBgS)
//	807BB224: 803DD470 (now__14mDoMtx_stack_c)
//	807BB228: 803DD470 (now__14mDoMtx_stack_c)
//	807BB238: 803468E8 (PSMTXTrans)
//	807BB23C: 803DD470 (now__14mDoMtx_stack_c)
//	807BB240: 803DD470 (now__14mDoMtx_stack_c)
//	807BB248: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	807BB24C: 807BBF50 (l_HIO)
//	807BB250: 807BBF50 (l_HIO)
//	807BB260: 8000CE38 (scaleM__14mDoMtx_stack_cFfff)
//	807BB26C: 803DD470 (now__14mDoMtx_stack_c)
//	807BB270: 803DD470 (now__14mDoMtx_stack_c)
//	807BB278: 803464B0 (PSMTXCopy)
//	807BB284: 8002D06C (dComIfGp_getReverb__Fi)
//	807BB294: 800110B0 (play__16mDoExt_McaMorfSOFUlSc)
//	807BB2B0: 8032842C (checkPass__12J3DFrameCtrlFf)
//	807BB2C8: 8032842C (checkPass__12J3DFrameCtrlFf)
//	807BB2E0: 8032842C (checkPass__12J3DFrameCtrlFf)
//	807BB2F8: 8032842C (checkPass__12J3DFrameCtrlFf)
//	807BB310: 8032842C (checkPass__12J3DFrameCtrlFf)
//	807BB360: 8032842C (checkPass__12J3DFrameCtrlFf)
//	807BB3A8: 8032842C (checkPass__12J3DFrameCtrlFf)
//	807BB3F8: 8032842C (checkPass__12J3DFrameCtrlFf)
//	807BB448: 8032842C (checkPass__12J3DFrameCtrlFf)
//	807BB490: 8032842C (checkPass__12J3DFrameCtrlFf)
//	807BB4E0: 8032842C (checkPass__12J3DFrameCtrlFf)
//	807BB52C: 8032842C (checkPass__12J3DFrameCtrlFf)
//	807BB578: 8032842C (checkPass__12J3DFrameCtrlFf)
//	807BB590: 8032842C (checkPass__12J3DFrameCtrlFf)
//	807BB5C8: 800111EC (modelCalc__16mDoExt_McaMorfSOFv)
//	807BB5D8: 80450768 (calc_mtx)
//	807BB5DC: 80450768 (calc_mtx)
//	807BB5E4: 803464B0 (PSMTXCopy)
//	807BB600: 80270EEC (MtxPosition__FP4cXyzP4cXyz)
//	807BB648: 80023590 (fpcSch_JudgeByID__FPvPv)
//	807BB64C: 80023590 (fpcSch_JudgeByID__FPvPv)
//	807BB654: 800197F8 (fopAcIt_Judge__FPFPvPv_PvPv)
//	807BB690: 804061C0 (g_dComIfG_gameInfo)
//	807BB694: 804061C0 (g_dComIfG_gameInfo)
//	807BB6DC: 8004CA90
//(set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	807BB724: 8004CA90
//(set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	807BB768: 80450768 (calc_mtx)
//	807BB76C: 80450768 (calc_mtx)
//	807BB774: 803464B0 (PSMTXCopy)
//	807BB790: 80270EEC (MtxPosition__FP4cXyzP4cXyz)
//	807BB79C: 8026F648 (SetC__8cM3dGSphFRC4cXyz)
//	807BB7B0: 8026F708 (SetR__8cM3dGSphFf)
//	807BB7B4: 804061C0 (g_dComIfG_gameInfo)
//	807BB7B8: 804061C0 (g_dComIfG_gameInfo)
//	807BB7C4: 80264BA8 (Set__4cCcSFP8cCcD_Obj)
//	807BB7D0: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_TK2_Execute(e_tk2_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/d_a_e_tk2/daE_TK2_Execute__FP11e_tk2_class.s"
}
#pragma pop

/* 807BB7E4-807BB7EC 0008+00 s=1 e=0 z=0  None .text      daE_TK2_IsDelete__FP11e_tk2_class */
static bool daE_TK2_IsDelete(e_tk2_class* param_0) {
    return true;
}

/* 807BB7EC-807BB854 0068+00 s=1 e=0 z=0  None .text      daE_TK2_Delete__FP11e_tk2_class */
//	807BB804: 807BBE20 (stringBase0)
//	807BB808: 807BBE20 (stringBase0)
//	807BB80C: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
//	807BB820: 807BBF40 (data_807BBF40)
//	807BB824: 807BBF40 (data_807BBF40)
//	807BB838: 80011310 (stopZelAnime__16mDoExt_McaMorfSOFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_TK2_Delete(e_tk2_class* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/d_a_e_tk2/daE_TK2_Delete__FP11e_tk2_class.s"
}
#pragma pop

/* 807BB854-807BB94C 00F8+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c */
//	807BB864: 803621D8 (_savegpr_28)
//	807BB870: 802CEC4C (__nw__FUl)
//	807BB87C: 807BBE20 (stringBase0)
//	807BB880: 807BBE20 (stringBase0)
//	807BB888: 804061C0 (g_dComIfG_gameInfo)
//	807BB88C: 804061C0 (g_dComIfG_gameInfo)
//	807BB8A0: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	807BB8A8: 807BBE20 (stringBase0)
//	807BB8AC: 807BBE20 (stringBase0)
//	807BB8BC: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	807BB8F4: 807BBDCC (lit_3939)
//	807BB8F8: 807BBDCC (lit_3939)
//	807BB904: 800107D0
//(__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl)
//	807BB938: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/d_a_e_tk2/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 807BB94C-807BBC00 02B4+00 s=1 e=0 z=0  None .text      daE_TK2_Create__FP10fopAc_ac_c */
//	807BB95C: 803621D8 (_savegpr_28)
//	807BB964: 807BBDA8 (lit_3762)
//	807BB968: 807BBDA8 (lit_3762)
//	807BB984: 80018B64 (__ct__10fopAc_ac_cFv)
//	807BB98C: 802C0F64 (__ct__15Z2CreatureEnemyFv)
//	807BB994: 80075EAC (__ct__12dBgS_AcchCirFv)
//	807BB9A0: 800760A0 (__ct__9dBgS_AcchFv)
//	807BB9A4: 807BBF04 (__vt__12dBgS_ObjAcch)
//	807BB9A8: 807BBF04 (__vt__12dBgS_ObjAcch)
//	807BB9C4: 80078E68 (SetObj__16dBgS_PolyPassChkFv)
//	807BB9C8: 803C3728 (__vt__9cCcD_Stts)
//	807BB9CC: 803C3728 (__vt__9cCcD_Stts)
//	807BB9D8: 80083760 (__ct__10dCcD_GSttsFv)
//	807BB9DC: 803AC2E4 (__vt__9dCcD_Stts)
//	807BB9E0: 803AC2E4 (__vt__9dCcD_Stts)
//	807BB9F8: 80083A28 (__ct__12dCcD_GObjInfFv)
//	807BB9FC: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	807BBA00: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	807BBA08: 807BBEF8 (__vt__8cM3dGAab)
//	807BBA0C: 807BBEF8 (__vt__8cM3dGAab)
//	807BBA14: 807BBEEC (__vt__8cM3dGSph)
//	807BBA18: 807BBEEC (__vt__8cM3dGSph)
//	807BBA20: 803C3540 (__vt__12cCcD_SphAttr)
//	807BBA24: 803C3540 (__vt__12cCcD_SphAttr)
//	807BBA34: 803ABFC0 (__vt__8dCcD_Sph)
//	807BBA38: 803ABFC0 (__vt__8dCcD_Sph)
//	807BBA60: 807BBE20 (stringBase0)
//	807BBA64: 807BBE20 (stringBase0)
//	807BBA68: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	807BBA9C: 807BB854 (useHeapInit__FP10fopAc_ac_c)
//	807BBAA0: 807BB854 (useHeapInit__FP10fopAc_ac_c)
//	807BBAA8: 8001A4B0 (fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl)
//	807BBABC: 807BBF40 (data_807BBF40)
//	807BBAC0: 807BBF40 (data_807BBF40)
//	807BBADC: 807BBF50 (l_HIO)
//	807BBAE0: 807BBF50 (l_HIO)
//	807BBB10: 8001A528 (fopAcM_SetMin__FP10fopAc_ac_cfff)
//	807BBB24: 8001A538 (fopAcM_SetMax__FP10fopAc_ac_cfff)
//	807BBB4C: 80083860 (Init__9dCcD_SttsFiiP10fopAc_ac_c)
//	807BBB54: 807BBE5C (cc_sph_src)
//	807BBB58: 807BBE5C (cc_sph_src)
//	807BBB5C: 80084A34 (Set__8dCcD_SphFRC11dCcD_SrcSph)
//	807BBB90: 80076248
//(Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz) 	807BBBA0:
//80075F58
//(SetWall__12dBgS_AcchCirFff) 	807BBBB8: 802C1094 (init__15Z2CreatureEnemyFP3VecP3VecUcUc)
//807BBBC0: 807BBE20 (stringBase0) 	807BBBC4: 807BBE20 (stringBase0) 	807BBBC8: 802C1B90
//(setEnemyName__15Z2CreatureEnemyFPCc) 	807BBBE0: 807BB128 (daE_TK2_Execute__FP11e_tk2_class)
//	807BBBEC: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daE_TK2_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/d_a_e_tk2/daE_TK2_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 807BBC00-807BBC48 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGSphFv */
//	807BBC18: 807BBEEC (__vt__8cM3dGSph)
//	807BBC1C: 807BBEEC (__vt__8cM3dGSph)
//	807BBC2C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/d_a_e_tk2/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 807BBC48-807BBC90 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
//	807BBC60: 807BBEF8 (__vt__8cM3dGAab)
//	807BBC64: 807BBEF8 (__vt__8cM3dGAab)
//	807BBC74: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/d_a_e_tk2/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 807BBC90-807BBD00 0070+00 s=3 e=0 z=0  None .text      __dt__12dBgS_ObjAcchFv */
//	807BBCB0: 807BBF04 (__vt__12dBgS_ObjAcch)
//	807BBCB4: 807BBF04 (__vt__12dBgS_ObjAcch)
//	807BBCD0: 80075F94 (__dt__9dBgS_AcchFv)
//	807BBCE0: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/d_a_e_tk2/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 807BBD00-807BBD48 0048+00 s=2 e=0 z=0  None .text      __dt__13daE_TK2_HIO_cFv */
//	807BBD18: 807BBF28 (__vt__13daE_TK2_HIO_c)
//	807BBD1C: 807BBF28 (__vt__13daE_TK2_HIO_c)
//	807BBD2C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daE_TK2_HIO_c::~daE_TK2_HIO_c() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/d_a_e_tk2/__dt__13daE_TK2_HIO_cFv.s"
}
#pragma pop

/* 807BBD48-807BBD84 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_e_tk2_cpp */
//	807BBD54: 807BBF50 (l_HIO)
//	807BBD58: 807BBF50 (l_HIO)
//	807BBD5C: 807BA56C (__ct__13daE_TK2_HIO_cFv)
//	807BBD60: 807BBD00 (__dt__13daE_TK2_HIO_cFv)
//	807BBD64: 807BBD00 (__dt__13daE_TK2_HIO_cFv)
//	807BBD68: 807BBF44 (lit_3757)
//	807BBD6C: 807BBF44 (lit_3757)
//	807BBD70: 807BA4F8 (__register_global_object)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_e_tk2_cpp() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/d_a_e_tk2/__sinit_d_a_e_tk2_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_807BBD48 = (void*)__sinit_d_a_e_tk2_cpp;
#pragma pop

/* 807BBD84-807BBD8C 0008+00 s=1 e=0 z=0  None .text      @36@__dt__12dBgS_ObjAcchFv */
//	807BBD88: 807BBC90 (__dt__12dBgS_ObjAcchFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_807BBD84() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/d_a_e_tk2/func_807BBD84.s"
}
#pragma pop

/* 807BBD8C-807BBD94 0008+00 s=1 e=0 z=0  None .text      @20@__dt__12dBgS_ObjAcchFv */
//	807BBD90: 807BBC90 (__dt__12dBgS_ObjAcchFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_807BBD8C() {
    nofralloc
#include "asm/rel/d/a/e/d_a_e_tk2/d_a_e_tk2/func_807BBD8C.s"
}
#pragma pop
