//
// Generated By: dol2asm
// Translation Unit: d_a_b_go
//

#include "rel/d/a/b/d_a_b_go/d_a_b_go.h"
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

struct daB_GO_HIO_c {
    /* 806031AC */ daB_GO_HIO_c();
    /* 80603F9C */ ~daB_GO_HIO_c();
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
    /* 80603F2C */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F58 */ void SetWall(f32, f32);
};

struct dBgS {};

struct csXyz {
    /* 802673F4 */ csXyz(s16, s16, s16);
};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cM3dGSph {
    /* 80603E9C */ ~cM3dGSph();
};

struct cM3dGCyl {
    /* 80603E54 */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80603EE4 */ ~cM3dGAab();
};

struct b_go_class {
    /* 80603CA0 */ b_go_class();
};

struct Vec {};

struct Z2CreatureEnemy {
    /* 802C0F64 */ Z2CreatureEnemy();
    /* 802C1094 */ void init(Vec*, Vec*, u8, u8);
};

//
// Forward References:
//

static void daB_GO_Draw(b_go_class*);
static void anm_init(b_go_class*, int, f32, u8, f32);
static void damage_check(b_go_class*);
static void h_wait(b_go_class*);
static void h_walk(b_go_class*);
static void h_attack(b_go_class*);
static void action(b_go_class*);
static void daB_GO_Execute(b_go_class*);
static bool daB_GO_IsDelete(b_go_class*);
static void daB_GO_Delete(b_go_class*);
static void useHeapInit(fopAc_ac_c*);
static void daB_GO_Create(fopAc_ac_c*);

extern "C" void __ct__12daB_GO_HIO_cFv();
extern "C" static void daB_GO_Draw__FP10b_go_class();
extern "C" static void anm_init__FP10b_go_classifUcf();
extern "C" static void damage_check__FP10b_go_class();
extern "C" static void h_wait__FP10b_go_class();
extern "C" static void h_walk__FP10b_go_class();
extern "C" static void h_attack__FP10b_go_class();
extern "C" static void action__FP10b_go_class();
extern "C" static void daB_GO_Execute__FP10b_go_class();
extern "C" static bool daB_GO_IsDelete__FP10b_go_class();
extern "C" static void daB_GO_Delete__FP10b_go_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daB_GO_Create__FP10fopAc_ac_c();
extern "C" void __ct__10b_go_classFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12daB_GO_HIO_cFv();
extern "C" void __sinit_d_a_b_go_cpp();
extern "C" static void func_80604020();
extern "C" static void func_80604028();
extern "C" extern u32 const lit_3647;
extern "C" extern u32 const lit_3648;
extern "C" extern u32 const lit_3702;
extern "C" extern u32 const lit_3704;
extern "C" extern u32 const lit_3705;
extern "C" extern u32 const lit_3719;
extern "C" extern u32 const lit_3784;
extern "C" extern u32 const lit_3785;
extern "C" extern u32 const lit_3924;
extern "C" extern u32 const lit_3925;
extern "C" extern u32 const lit_3926;
extern "C" extern u32 const lit_3927;
extern "C" extern u32 const lit_3928;
extern "C" extern u32 const lit_3929;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_B_GO[12];
extern "C" extern void* __vt__8cM3dGCyl[3];
extern "C" extern void* __vt__8cM3dGSph[3];
extern "C" extern void* __vt__8cM3dGAab[3];
extern "C" extern void* __vt__12dBgS_ObjAcch[9];
extern "C" extern void* __vt__12daB_GO_HIO_c[3];

//
// External References:
//

void mDoMtx_YrotS(f32 (*)[4], s16);
void mDoMtx_YrotM(f32 (*)[4], s16);
void fopAcM_createChild(s16, unsigned int, u32, cXyz const*, int, csXyz const*, cXyz const*, s8,
                        int (*)(void*));
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_SetMin(fopAc_ac_c*, f32, f32, f32);
void fopAcM_SetMax(fopAc_ac_c*, f32, f32, f32);
void fopAcM_searchActorAngleY(fopAc_ac_c const*, fopAc_ac_c const*);
void fopAcM_searchActorDistance(fopAc_ac_c const*, fopAc_ac_c const*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void cM_rndF(f32);
void cM_rndFX(f32);
void cLib_addCalc2(f32*, f32, f32, f32);
void cLib_addCalc0(f32*, f32, f32);
void cLib_addCalcAngleS2(s16*, s16, s16, s16);
void MtxPosition(cXyz*, cXyz*);
void* operator new(u32);
void operator delete(void*);

extern "C" void mDoMtx_YrotS__FPA4_fs();
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
extern "C" void fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __ct__5csXyzFsss();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSVECAdd();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
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
/* 80604044-80604048 0004+00 s=6 e=0 z=0  None .rodata    @3646 */
SECTION_RODATA static u32 const lit_3646 = 0x3FC00000;

/* 80604094-806040B4 0020+00 s=1 e=0 z=0  None .data      l_daB_GO_Method */
SECTION_DATA static void* l_daB_GO_Method[8] = {
    (void*)daB_GO_Create__FP10fopAc_ac_c,
    (void*)daB_GO_Delete__FP10b_go_class,
    (void*)daB_GO_Execute__FP10b_go_class,
    (void*)daB_GO_IsDelete__FP10b_go_class,
    (void*)daB_GO_Draw__FP10b_go_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 806040B4-806040E4 0030+00 s=0 e=0 z=1  None .data      g_profile_B_GO */
SECTION_DATA void* g_profile_B_GO[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x020F0000, (void*)&g_fpcLf_Method,
    (void*)0x00000D38, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00D70000, (void*)&l_daB_GO_Method,
    (void*)0x00040100, (void*)0x020E0000,
};

/* 806040E4-806040F0 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGCyl */
SECTION_DATA void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 806040F0-806040FC 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGSph */
SECTION_DATA void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 806040FC-80604108 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80604108-8060412C 0024+00 s=2 e=0 z=0  None .data      __vt__12dBgS_ObjAcch */
SECTION_DATA void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80604028,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80604020,
};

/* 8060412C-80604138 000C+00 s=2 e=0 z=0  None .data      __vt__12daB_GO_HIO_c */
SECTION_DATA void* __vt__12daB_GO_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daB_GO_HIO_cFv,
};

/* 806031AC-806031EC 0040+00 s=1 e=0 z=0  None .text      __ct__12daB_GO_HIO_cFv */
//	806031AC: 80604044 (lit_3646)
//	806031B0: 80604044 (lit_3646)
//	806031B4: 8060412C (__vt__12daB_GO_HIO_c)
//	806031B8: 8060412C (__vt__12daB_GO_HIO_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daB_GO_HIO_c::daB_GO_HIO_c() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/__ct__12daB_GO_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80604140-80604144 0004+00 s=2 e=0 z=0  None .bss       None */
static u8 data_80604140[4];

/* 80604144-80604150 000C+00 s=1 e=0 z=0  None .bss       @3641 */
static u8 lit_3641[12];

/* 80604150-80604168 0018+00 s=6 e=0 z=0  None .bss       l_HIO */
static u8 l_HIO[24];

/* 806031EC-80603270 0084+00 s=1 e=0 z=0  None .text      daB_GO_Draw__FP10b_go_class */
//	80603204: 80604150 (l_HIO)
//	80603208: 80604150 (l_HIO)
//	80603220: 8042CA54 (g_env_light)
//	80603224: 8042CA54 (g_env_light)
//	80603234: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80603238: 8042CA54 (g_env_light)
//	8060323C: 8042CA54 (g_env_light)
//	80603248: 801A4DA0
//(setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c) 	80603250:
// 800111C0 (entryDL__16mDoExt_McaMorfSOFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daB_GO_Draw(b_go_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/daB_GO_Draw__FP10b_go_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80604048-8060404C 0004+00 s=0 e=0 z=0  None .rodata    @3647 */
SECTION_RODATA u32 const lit_3647 = 0x41700000;

/* 8060404C-80604050 0004+00 s=0 e=0 z=0  None .rodata    @3648 */
SECTION_RODATA u32 const lit_3648 = 0x43960000;

/* 80604050-80604054 0004+00 s=1 e=0 z=0  None .rodata    @3673 */
SECTION_RODATA static u8 const lit_3673[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80604054-80604058 0004+00 s=1 e=0 z=0  None .rodata    @3674 */
SECTION_RODATA static u32 const lit_3674 = 0xBF800000;

/* 80604058-8060405C 0004+00 s=0 e=0 z=0  None .rodata    @3702 */
SECTION_RODATA u32 const lit_3702 = 0x41200000;

/* 8060405C-80604060 0004+00 s=1 e=0 z=0  None .rodata    @3703 */
SECTION_RODATA static u32 const lit_3703 = 0x3F800000;

/* 80604060-80604064 0004+00 s=0 e=0 z=0  None .rodata    @3704 */
SECTION_RODATA u32 const lit_3704 = 0x42C80000;

/* 80604064-80604068 0004+00 s=0 e=0 z=0  None .rodata    @3705 */
SECTION_RODATA u32 const lit_3705 = 0x42700000;

/* 80604068-8060406C 0004+00 s=0 e=0 z=0  None .rodata    @3719 */
SECTION_RODATA u32 const lit_3719 = 0x43160000;

/* 8060406C-80604070 0004+00 s=0 e=0 z=0  None .rodata    @3784 */
SECTION_RODATA u32 const lit_3784 = 0x447A0000;

/* 80604070-80604074 0004+00 s=0 e=0 z=0  None .rodata    @3785 */
SECTION_RODATA u32 const lit_3785 = 0x43480000;

/* 80604074-80604078 0004+00 s=0 e=0 z=0  None .rodata    @3924 */
SECTION_RODATA u32 const lit_3924 = 0xC3FA0000;

/* 80604078-8060407C 0004+00 s=0 e=0 z=0  None .rodata    @3925 */
SECTION_RODATA u32 const lit_3925 = 0xC4FA0000;

/* 8060407C-80604080 0004+00 s=0 e=0 z=0  None .rodata    @3926 */
SECTION_RODATA u32 const lit_3926 = 0x43FA0000;

/* 80604080-80604084 0004+00 s=0 e=0 z=0  None .rodata    @3927 */
SECTION_RODATA u32 const lit_3927 = 0x44FA0000;

/* 80604084-80604088 0004+00 s=0 e=0 z=0  None .rodata    @3928 */
SECTION_RODATA u32 const lit_3928 = 0xC0E00000;

/* 80604088-8060408C 0004+00 s=0 e=0 z=0  None .rodata    @3929 */
SECTION_RODATA u32 const lit_3929 = 0x47800000;

/* 8060408C-80604091 0005+00 s=4 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_8060408C = "B_go";
#pragma pop

/* 80603270-8060331C 00AC+00 s=3 e=0 z=0  None .text      anm_init__FP10b_go_classifUcf */
//	80603290: 803621DC (_savegpr_29)
//	806032A8: 8060408C (stringBase0)
//	806032AC: 8060408C (stringBase0)
//	806032B0: 804061C0 (g_dComIfG_gameInfo)
//	806032B4: 804061C0 (g_dComIfG_gameInfo)
//	806032C4: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	806032DC: 80604050 (lit_3673)
//	806032E0: 80604050 (lit_3673)
//	806032E4: 80604054 (lit_3674)
//	806032E8: 80604054 (lit_3674)
//	806032EC: 80010E70 (setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff)
//	80603308: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void anm_init(b_go_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/anm_init__FP10b_go_classifUcf.s"
}
#pragma pop

/* 8060331C-80603320 0004+00 s=1 e=0 z=0  None .text      damage_check__FP10b_go_class */
static void damage_check(b_go_class* param_0) {
    /* empty function */
}

/* 80603320-806033F0 00D0+00 s=1 e=0 z=0  None .text      h_wait__FP10b_go_class */
//	80603338: 80604044 (lit_3646)
//	8060333C: 80604044 (lit_3646)
//	80603374: 80603270 (anm_init__FP10b_go_classifUcf)
//	80603384: 80267954 (cM_rndF__Ff)
//	806033B4: 80604150 (l_HIO)
//	806033B8: 80604150 (l_HIO)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void h_wait(b_go_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/h_wait__FP10b_go_class.s"
}
#pragma pop

/* 806033F0-80603508 0118+00 s=1 e=0 z=0  None .text      h_walk__FP10b_go_class */
//	80603410: 80604044 (lit_3646)
//	80603414: 80604044 (lit_3646)
//	80603448: 80603270 (anm_init__FP10b_go_classifUcf)
//	80603458: 80267954 (cM_rndF__Ff)
//	80603478: 80604150 (l_HIO)
//	8060347C: 80604150 (l_HIO)
//	806034D0: 8026FA3C (cLib_addCalc2__FPffff)
//	806034E4: 80270608 (cLib_addCalcAngleS2__FPssss)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void h_walk(b_go_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/h_walk__FP10b_go_class.s"
}
#pragma pop

/* 80603508-80603638 0130+00 s=1 e=0 z=0  None .text      h_attack__FP10b_go_class */
//	80603518: 803621DC (_savegpr_29)
//	80603520: 80604044 (lit_3646)
//	80603524: 80604044 (lit_3646)
//	80603548: 8026FA80 (cLib_addCalc0__FPfff)
//	8060357C: 80603270 (anm_init__FP10b_go_classifUcf)
//	80603624: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void h_attack(b_go_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/h_attack__FP10b_go_class.s"
}
#pragma pop

/* 80603638-806037E8 01B0+00 s=1 e=0 z=0  None .text      action__FP10b_go_class */
//	80603648: 803621DC (_savegpr_29)
//	80603650: 80604044 (lit_3646)
//	80603654: 80604044 (lit_3646)
//	80603658: 804061C0 (g_dComIfG_gameInfo)
//	8060365C: 804061C0 (g_dComIfG_gameInfo)
//	80603664: 8001A710 (fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c)
//	80603674: 8001A7E0 (fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c)
//	806036B4: 80267954 (cM_rndF__Ff)
//	806036E0: 80267954 (cM_rndF__Ff)
//	80603728: 80603320 (h_wait__FP10b_go_class)
//	80603734: 806033F0 (h_walk__FP10b_go_class)
//	80603740: 80603508 (h_attack__FP10b_go_class)
//	80603754: 80270608 (cLib_addCalcAngleS2__FPssss)
//	80603758: 80450768 (calc_mtx)
//	8060375C: 80450768 (calc_mtx)
//	80603768: 8000C3DC (mDoMtx_YrotS__FPA4_fs)
//	80603788: 80270EEC (MtxPosition__FP4cXyzP4cXyz)
//	806037A8: 80347090 (PSVECAdd)
//	806037C0: 804061C0 (g_dComIfG_gameInfo)
//	806037C4: 804061C0 (g_dComIfG_gameInfo)
//	806037CC: 80076AAC (CrrPos__9dBgS_AcchFR4dBgS)
//	806037D4: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void action(b_go_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/action__FP10b_go_class.s"
}
#pragma pop

/* 806037E8-806038EC 0104+00 s=2 e=0 z=0  None .text      daB_GO_Execute__FP10b_go_class */
//	8060384C: 80603638 (action__FP10b_go_class)
//	80603854: 8060331C (damage_check__FP10b_go_class)
//	80603858: 803DD470 (now__14mDoMtx_stack_c)
//	8060385C: 803DD470 (now__14mDoMtx_stack_c)
//	8060386C: 803468E8 (PSMTXTrans)
//	80603870: 803DD470 (now__14mDoMtx_stack_c)
//	80603874: 803DD470 (now__14mDoMtx_stack_c)
//	8060387C: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80603880: 80604150 (l_HIO)
//	80603884: 80604150 (l_HIO)
//	80603894: 8000CE38 (scaleM__14mDoMtx_stack_cFfff)
//	806038A0: 803DD470 (now__14mDoMtx_stack_c)
//	806038A4: 803DD470 (now__14mDoMtx_stack_c)
//	806038AC: 803464B0 (PSMTXCopy)
//	806038B8: 8002D06C (dComIfGp_getReverb__Fi)
//	806038C8: 800110B0 (play__16mDoExt_McaMorfSOFUlSc)
//	806038D0: 800111EC (modelCalc__16mDoExt_McaMorfSOFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daB_GO_Execute(b_go_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/daB_GO_Execute__FP10b_go_class.s"
}
#pragma pop

/* 806038EC-806038F4 0008+00 s=1 e=0 z=0  None .text      daB_GO_IsDelete__FP10b_go_class */
static bool daB_GO_IsDelete(b_go_class* param_0) {
    return true;
}

/* 806038F4-8060395C 0068+00 s=1 e=0 z=0  None .text      daB_GO_Delete__FP10b_go_class */
//	8060390C: 8060408C (stringBase0)
//	80603910: 8060408C (stringBase0)
//	80603914: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
//	80603928: 80604140 (data_80604140)
//	8060392C: 80604140 (data_80604140)
//	80603940: 80011310 (stopZelAnime__16mDoExt_McaMorfSOFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daB_GO_Delete(b_go_class* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/daB_GO_Delete__FP10b_go_class.s"
}
#pragma pop

/* 8060395C-80603A54 00F8+00 s=1 e=0 z=0  None .text      useHeapInit__FP10fopAc_ac_c */
//	8060396C: 803621D8 (_savegpr_28)
//	80603978: 802CEC4C (__nw__FUl)
//	80603984: 8060408C (stringBase0)
//	80603988: 8060408C (stringBase0)
//	80603990: 804061C0 (g_dComIfG_gameInfo)
//	80603994: 804061C0 (g_dComIfG_gameInfo)
//	806039A8: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	806039B0: 8060408C (stringBase0)
//	806039B4: 8060408C (stringBase0)
//	806039C4: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	806039FC: 8060405C (lit_3703)
//	80603A00: 8060405C (lit_3703)
//	80603A0C: 800107D0
//(__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl)
//	80603A40: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80603A54-80603CA0 024C+00 s=1 e=0 z=0  None .text      daB_GO_Create__FP10fopAc_ac_c */
//	80603A64: 803621D4 (_savegpr_27)
//	80603A6C: 80604044 (lit_3646)
//	80603A70: 80604044 (lit_3646)
//	80603A88: 80603CA0 (__ct__10b_go_classFv)
//	80603A9C: 8060408C (stringBase0)
//	80603AA0: 8060408C (stringBase0)
//	80603AA4: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80603AB8: 8060395C (useHeapInit__FP10fopAc_ac_c)
//	80603ABC: 8060395C (useHeapInit__FP10fopAc_ac_c)
//	80603AC8: 8001A4B0 (fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl)
//	80603ADC: 80604140 (data_80604140)
//	80603AE0: 80604140 (data_80604140)
//	80603AFC: 80604150 (l_HIO)
//	80603B00: 80604150 (l_HIO)
//	80603B30: 8001A528 (fopAcM_SetMin__FP10fopAc_ac_cfff)
//	80603B44: 8001A538 (fopAcM_SetMax__FP10fopAc_ac_cfff)
//	80603B7C: 80076248
//(Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz) 	80603B8C:
//80075F58
//(SetWall__12dBgS_AcchCirFff) 	80603BA4: 802C1094 (init__15Z2CreatureEnemyFP3VecP3VecUcUc)
//80603BC4: 806037E8 (daB_GO_Execute__FP10b_go_class) 	80603BE0: 802673F4 (__ct__5csXyzFsss)
// 80603BF0: 8026798C (cM_rndFX__Ff) 	80603C04: 8026798C (cM_rndFX__Ff) 	80603C18: 80267954
//(cM_rndF__Ff) 	80603C68: 80019EF0 (fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i)
// 80603C8C: 80362220
//(_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daB_GO_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/daB_GO_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80603CA0-80603E54 01B4+00 s=1 e=0 z=0  None .text      __ct__10b_go_classFv */
//	80603CB0: 803621D4 (_savegpr_27)
//	80603CB8: 80018B64 (__ct__10fopAc_ac_cFv)
//	80603CC0: 802C0F64 (__ct__15Z2CreatureEnemyFv)
//	80603CC8: 80075EAC (__ct__12dBgS_AcchCirFv)
//	80603CD4: 800760A0 (__ct__9dBgS_AcchFv)
//	80603CD8: 80604108 (__vt__12dBgS_ObjAcch)
//	80603CDC: 80604108 (__vt__12dBgS_ObjAcch)
//	80603CF8: 80078E68 (SetObj__16dBgS_PolyPassChkFv)
//	80603CFC: 803C3728 (__vt__9cCcD_Stts)
//	80603D00: 803C3728 (__vt__9cCcD_Stts)
//	80603D0C: 80083760 (__ct__10dCcD_GSttsFv)
//	80603D10: 803AC2E4 (__vt__9dCcD_Stts)
//	80603D14: 803AC2E4 (__vt__9dCcD_Stts)
//	80603D2C: 80083A28 (__ct__12dCcD_GObjInfFv)
//	80603D30: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80603D34: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80603D3C: 806040FC (__vt__8cM3dGAab)
//	80603D40: 806040FC (__vt__8cM3dGAab)
//	80603D48: 806040F0 (__vt__8cM3dGSph)
//	80603D4C: 806040F0 (__vt__8cM3dGSph)
//	80603D54: 803C3540 (__vt__12cCcD_SphAttr)
//	80603D58: 803C3540 (__vt__12cCcD_SphAttr)
//	80603D68: 803ABFC0 (__vt__8dCcD_Sph)
//	80603D6C: 803ABFC0 (__vt__8dCcD_Sph)
//	80603D8C: 80083A28 (__ct__12dCcD_GObjInfFv)
//	80603D90: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80603D94: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80603D9C: 806040FC (__vt__8cM3dGAab)
//	80603DA0: 806040FC (__vt__8cM3dGAab)
//	80603DA8: 806040F0 (__vt__8cM3dGSph)
//	80603DAC: 806040F0 (__vt__8cM3dGSph)
//	80603DB4: 803C3540 (__vt__12cCcD_SphAttr)
//	80603DB8: 803C3540 (__vt__12cCcD_SphAttr)
//	80603DC4: 803ABFC0 (__vt__8dCcD_Sph)
//	80603DC8: 803ABFC0 (__vt__8dCcD_Sph)
//	80603DE0: 80083A28 (__ct__12dCcD_GObjInfFv)
//	80603DE4: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80603DE8: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80603DF0: 806040FC (__vt__8cM3dGAab)
//	80603DF4: 806040FC (__vt__8cM3dGAab)
//	80603DFC: 806040E4 (__vt__8cM3dGCyl)
//	80603E00: 806040E4 (__vt__8cM3dGCyl)
//	80603E08: 803C35A4 (__vt__12cCcD_CylAttr)
//	80603E0C: 803C35A4 (__vt__12cCcD_CylAttr)
//	80603E1C: 803AC050 (__vt__8dCcD_Cyl)
//	80603E20: 803AC050 (__vt__8dCcD_Cyl)
//	80603E40: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm b_go_class::b_go_class() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/__ct__10b_go_classFv.s"
}
#pragma pop

/* 80603E54-80603E9C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv */
//	80603E6C: 806040E4 (__vt__8cM3dGCyl)
//	80603E70: 806040E4 (__vt__8cM3dGCyl)
//	80603E80: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80603E9C-80603EE4 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGSphFv */
//	80603EB4: 806040F0 (__vt__8cM3dGSph)
//	80603EB8: 806040F0 (__vt__8cM3dGSph)
//	80603EC8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80603EE4-80603F2C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
//	80603EFC: 806040FC (__vt__8cM3dGAab)
//	80603F00: 806040FC (__vt__8cM3dGAab)
//	80603F10: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80603F2C-80603F9C 0070+00 s=3 e=0 z=0  None .text      __dt__12dBgS_ObjAcchFv */
//	80603F4C: 80604108 (__vt__12dBgS_ObjAcch)
//	80603F50: 80604108 (__vt__12dBgS_ObjAcch)
//	80603F6C: 80075F94 (__dt__9dBgS_AcchFv)
//	80603F7C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80603F9C-80603FE4 0048+00 s=2 e=0 z=0  None .text      __dt__12daB_GO_HIO_cFv */
//	80603FB4: 8060412C (__vt__12daB_GO_HIO_c)
//	80603FB8: 8060412C (__vt__12daB_GO_HIO_c)
//	80603FC8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daB_GO_HIO_c::~daB_GO_HIO_c() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/__dt__12daB_GO_HIO_cFv.s"
}
#pragma pop

/* 80603FE4-80604020 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_b_go_cpp */
//	80603FF0: 80604150 (l_HIO)
//	80603FF4: 80604150 (l_HIO)
//	80603FF8: 806031AC (__ct__12daB_GO_HIO_cFv)
//	80603FFC: 80603F9C (__dt__12daB_GO_HIO_cFv)
//	80604000: 80603F9C (__dt__12daB_GO_HIO_cFv)
//	80604004: 80604144 (lit_3641)
//	80604008: 80604144 (lit_3641)
//	8060400C: 80603138 (__register_global_object)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_b_go_cpp() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/__sinit_d_a_b_go_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80603FE4 = (void*)__sinit_d_a_b_go_cpp;
#pragma pop

/* 80604020-80604028 0008+00 s=1 e=0 z=0  None .text      @36@__dt__12dBgS_ObjAcchFv */
//	80604024: 80603F2C (__dt__12dBgS_ObjAcchFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80604020() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/func_80604020.s"
}
#pragma pop

/* 80604028-80604030 0008+00 s=1 e=0 z=0  None .text      @20@__dt__12dBgS_ObjAcchFv */
//	8060402C: 80603F2C (__dt__12dBgS_ObjAcchFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80604028() {
    nofralloc
#include "asm/rel/d/a/b/d_a_b_go/d_a_b_go/func_80604028.s"
}
#pragma pop
