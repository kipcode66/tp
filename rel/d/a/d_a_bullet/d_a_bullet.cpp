//
// Generated By: dol2asm
// Translation Unit: d_a_bullet
//

#include "rel/d/a/d_a_bullet/d_a_bullet.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct cXyz {};

struct csXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CE70 */ void scaleM(cXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daBullet_c {
    /* 8065594C */ ~daBullet_c();
    /* 80655B08 */ void create();
    /* 80655E5C */ void CreateHeap();
    /* 80655EDC */ void Delete();
    /* 80655F10 */ void Execute();
    /* 806560FC */ void Draw();
    /* 80656160 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80656180 */ void getResName();
    /* 80656198 */ void getBmdName();
    /* 806561B0 */ void getTypeFromParam();
    /* 806561D0 */ void initialize();
    /* 80656378 */ void setProcess(int (daBullet_c::*)(void*));
    /* 80656420 */ void wait(void*);
    /* 806564B8 */ void move(void*);
};

struct daBullet_Param_c {
    /* 806566A8 */ ~daBullet_Param_c();
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C37C */ void getRes(char const*, char const*, dRes_info_c*, int);
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
    /* 80655D90 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80655DEC */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F58 */ void SetWall(f32, f32);
    /* 80655D20 */ ~dBgS_AcchCir();
};

struct cBgS_PolyInfo {
    /* 802680B0 */ ~cBgS_PolyInfo();
};

struct dBgS {
    /* 80074BE8 */ void GetPolyColor(cBgS_PolyInfo const&);
    /* 80075100 */ void GetRoomId(cBgS_PolyInfo const&);
};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cM3dGSph {
    /* 80655C90 */ ~cM3dGSph();
};

struct cM3dGCir {
    /* 8026EF18 */ ~cM3dGCir();
};

struct cM3dGAab {
    /* 80655CD8 */ ~cM3dGAab();
};

struct cCcD_GStts {
    /* 806565D0 */ ~cCcD_GStts();
};

struct cBgS_GndChk {
    /* 80267C1C */ cBgS_GndChk();
    /* 80267C94 */ ~cBgS_GndChk();
};

struct J3DModel {};

//
// Forward References:
//

static void daBullet_Create(void*);
static void daBullet_Delete(void*);
static void daBullet_Execute(void*);
static void daBullet_Draw(void*);
static bool daBullet_IsDelete(void*);
void cLib_calcTimer__template0(int*);

extern "C" void __dt__10daBullet_cFv();
extern "C" void create__10daBullet_cFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void CreateHeap__10daBullet_cFv();
extern "C" void Delete__10daBullet_cFv();
extern "C" void Execute__10daBullet_cFv();
extern "C" void Draw__10daBullet_cFv();
extern "C" void createHeapCallBack__10daBullet_cFP10fopAc_ac_c();
extern "C" void getResName__10daBullet_cFv();
extern "C" void getBmdName__10daBullet_cFv();
extern "C" void getTypeFromParam__10daBullet_cFv();
extern "C" void initialize__10daBullet_cFv();
extern "C" void setProcess__10daBullet_cFM10daBullet_cFPCvPvPv_i();
extern "C" void wait__10daBullet_cFPv();
extern "C" void move__10daBullet_cFPv();
extern "C" static void daBullet_Create__FPv();
extern "C" static void daBullet_Delete__FPv();
extern "C" static void daBullet_Execute__FPv();
extern "C" static void daBullet_Draw__FPv();
extern "C" static bool daBullet_IsDelete__FPv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void func_80656618();
extern "C" void __sinit_d_a_bullet_cpp();
extern "C" void __dt__16daBullet_Param_cFv();
extern "C" static void func_806566F0();
extern "C" static void func_806566F8();
extern "C" extern u32 const lit_3843;
extern "C" extern u32 const lit_3844;
extern "C" extern u8 const lit_3845[4];
extern "C" extern u32 const lit_3908;
extern "C" extern u32 const lit_3909;
extern "C" extern void* g_profile_BULLET[12];
extern "C" extern void* __vt__12dBgS_ObjAcch[9];
extern "C" extern void* __vt__10cCcD_GStts[3];
extern "C" extern void* __vt__10dCcD_GStts[3];
extern "C" extern void* __vt__12dBgS_AcchCir[3];
extern "C" extern void* __vt__8cM3dGAab[3];
extern "C" extern void* __vt__8cM3dGSph[3];
extern "C" extern void* __vt__10daBullet_c[3];
extern "C" extern void* __vt__16daBullet_Param_c[3];

//
// External References:
//

void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_delete(fopAc_ac_c*);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void fopAcM_posMoveF(fopAc_ac_c*, cXyz const*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void operator delete(void*);

extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void GetPolyColor__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetRoomId__4dBgSFRC13cBgS_PolyInfo();
extern "C" void __ct__12dBgS_AcchCirFv();
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
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __ct__11cBgS_GndChkFv();
extern "C" void __dt__11cBgS_GndChkFv();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void __ptmf_test();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_29();
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
extern "C" extern u8 struct_80450D64[4];
extern "C" extern f32 G_CM3D_F_ABS_MIN[1 + 1 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80656714-80656744 0030+00 s=2 e=0 z=0  None .rodata    mCcDObjInfo__10daBullet_c */
SECTION_RODATA static u8 const mCcDObjInfo__10daBullet_c[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80656744-8065675C 0018+00 s=1 e=0 z=0  None .rodata    m__16daBullet_Param_c */
SECTION_RODATA static u8 const m__16daBullet_Param_c[24] = {
    0xC0, 0x40, 0x00, 0x00, 0x43, 0x7F, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00,
    0x3F, 0xC0, 0x00, 0x00, 0x40, 0x40, 0x00, 0x00, 0x07, 0x08, 0x00, 0x00,
};

/* 8065675C-80656760 0004+00 s=1 e=0 z=0  None .rodata    @3824 */
SECTION_RODATA static u32 const lit_3824 = 0xCE6E6B28;

/* 80656760-80656764 0004+00 s=0 e=0 z=0  None .rodata    @3843 */
SECTION_RODATA u32 const lit_3843 = 0x3DCCCCCD;

/* 80656764-80656768 0004+00 s=0 e=0 z=0  None .rodata    @3844 */
SECTION_RODATA u32 const lit_3844 = 0x3F000000;

/* 80656768-8065676C 0004+00 s=0 e=0 z=0  None .rodata    @3845 */
SECTION_RODATA u8 const lit_3845[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8065676C-80656770 0004+00 s=0 e=0 z=0  None .rodata    @3908 */
SECTION_RODATA u32 const lit_3908 = 0xC1200000;

/* 80656770-80656774 0004+00 s=0 e=0 z=0  None .rodata    @3909 */
SECTION_RODATA u32 const lit_3909 = 0x41200000;

/* 80656774-8065678C 0018+00 s=2 e=0 z=0  None .rodata    None */
SECTION_RODATA static u8 const struct_80656774[24] = {
    /* 80656774 0007 stringBase_80656774 @stringBase0 */
    0x48,
    0x61,
    0x6E,
    0x6A,
    0x6F,
    0x31,
    0x00,
    /* 8065677B 0011 data_8065677B None */
    0x68,
    0x61,
    0x6E,
    0x6A,
    0x6F,
    0x5F,
    0x73,
    0x74,
    0x6F,
    0x6E,
    0x65,
    0x2E,
    0x62,
    0x6D,
    0x64,
    0x00,
    0x00,
};

/* 8065678C-80656790 0004+00 s=1 e=0 z=0  None .data      l_resFileNameList */
SECTION_DATA static void* l_resFileNameList =
    (void*)(((char*)&struct_80656774) + 0x0) /* @stringBase0 */;

/* 80656790-80656794 0004+00 s=1 e=0 z=0  None .data      l_bmdFileNameList */
SECTION_DATA static void* l_bmdFileNameList = (void*)(((char*)&struct_80656774) + 0x7) /* None */;

/* 80656794-806567D4 0040+00 s=2 e=0 z=0  None .data      mCcDSph__10daBullet_c */
SECTION_DATA static u8 mCcDSph__10daBullet_c[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 806567D4-806567E0 000C+00 s=1 e=0 z=0  None .data      @3878 */
SECTION_DATA static void* lit_3878[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait__10daBullet_cFPv,
};

/* 806567E0-806567EC 000C+00 s=1 e=0 z=0  None .data      @3933 */
SECTION_DATA static void* lit_3933[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)move__10daBullet_cFPv,
};

/* 806567EC-8065680C 0020+00 s=1 e=0 z=0  None .data      daBullet_MethodTable */
SECTION_DATA static void* daBullet_MethodTable[8] = {
    (void*)daBullet_Create__FPv,
    (void*)daBullet_Delete__FPv,
    (void*)daBullet_Execute__FPv,
    (void*)daBullet_IsDelete__FPv,
    (void*)daBullet_Draw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8065680C-8065683C 0030+00 s=0 e=0 z=1  None .data      g_profile_BULLET */
SECTION_DATA void* g_profile_BULLET[12] = {
    (void*)0xFFFFFFFD, (void*)0x0008FFFD,
    (void*)0x02E60000, (void*)&g_fpcLf_Method,
    (void*)0x0000095C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02EF0000, (void*)&daBullet_MethodTable,
    (void*)0x00044000, (void*)0x000E0000,
};

/* 8065683C-80656860 0024+00 s=3 e=0 z=0  None .data      __vt__12dBgS_ObjAcch */
SECTION_DATA void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_806566F8,
    (void*)NULL,
    (void*)NULL,
    (void*)func_806566F0,
};

/* 80656860-8065686C 000C+00 s=3 e=0 z=0  None .data      __vt__10cCcD_GStts */
SECTION_DATA void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 8065686C-80656878 000C+00 s=2 e=0 z=0  None .data      __vt__10dCcD_GStts */
SECTION_DATA void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80656878-80656884 000C+00 s=2 e=0 z=0  None .data      __vt__12dBgS_AcchCir */
SECTION_DATA void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80656884-80656890 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80656890-8065689C 000C+00 s=3 e=0 z=0  None .data      __vt__8cM3dGSph */
SECTION_DATA void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 8065689C-806568A8 000C+00 s=2 e=0 z=0  None .data      __vt__10daBullet_c */
SECTION_DATA void* __vt__10daBullet_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10daBullet_cFv,
};

/* 8065594C-80655B08 01BC+00 s=1 e=0 z=0  None .text      __dt__10daBullet_cFv */
//	8065596C: 8065689C (__vt__10daBullet_c)
//	80655970: 8065689C (__vt__10daBullet_c)
//	80655978: 80656180 (getResName__10daBullet_cFv)
//	80655984: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
//	80655990: 80267C94 (__dt__11cBgS_GndChkFv)
//	8065599C: 803ABFC0 (__vt__8dCcD_Sph)
//	806559A0: 803ABFC0 (__vt__8dCcD_Sph)
//	806559C0: 803C3540 (__vt__12cCcD_SphAttr)
//	806559C4: 803C3540 (__vt__12cCcD_SphAttr)
//	806559DC: 80656890 (__vt__8cM3dGSph)
//	806559E0: 80656890 (__vt__8cM3dGSph)
//	806559F0: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	806559F4: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80655A04: 80656884 (__vt__8cM3dGAab)
//	80655A08: 80656884 (__vt__8cM3dGAab)
//	80655A18: 800840E4 (__dt__12dCcD_GObjInfFv)
//	80655A24: 80656878 (__vt__12dBgS_AcchCir)
//	80655A28: 80656878 (__vt__12dBgS_AcchCir)
//	80655A38: 8026EF18 (__dt__8cM3dGCirFv)
//	80655A44: 802680B0 (__dt__13cBgS_PolyInfoFv)
//	80655A50: 803AC2E4 (__vt__9dCcD_Stts)
//	80655A54: 803AC2E4 (__vt__9dCcD_Stts)
//	80655A6C: 8065686C (__vt__10dCcD_GStts)
//	80655A70: 8065686C (__vt__10dCcD_GStts)
//	80655A80: 80656860 (__vt__10cCcD_GStts)
//	80655A84: 80656860 (__vt__10cCcD_GStts)
//	80655A94: 803C3728 (__vt__9cCcD_Stts)
//	80655A98: 803C3728 (__vt__9cCcD_Stts)
//	80655AA8: 8065683C (__vt__12dBgS_ObjAcch)
//	80655AAC: 8065683C (__vt__12dBgS_ObjAcch)
//	80655ACC: 80075F94 (__dt__9dBgS_AcchFv)
//	80655AD8: 80018C8C (__dt__10fopAc_ac_cFv)
//	80655AE8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daBullet_c::~daBullet_c() {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/__dt__10daBullet_cFv.s"
}
#pragma pop

/* 80655B08-80655C90 0188+00 s=1 e=0 z=0  None .text      create__10daBullet_cFv */
//	80655B18: 803621DC (_savegpr_29)
//	80655B38: 80018B64 (__ct__10fopAc_ac_cFv)
//	80655B3C: 8065689C (__vt__10daBullet_c)
//	80655B40: 8065689C (__vt__10daBullet_c)
//	80655B50: 800760A0 (__ct__9dBgS_AcchFv)
//	80655B54: 8065683C (__vt__12dBgS_ObjAcch)
//	80655B58: 8065683C (__vt__12dBgS_ObjAcch)
//	80655B74: 80078E68 (SetObj__16dBgS_PolyPassChkFv)
//	80655B78: 803C3728 (__vt__9cCcD_Stts)
//	80655B7C: 803C3728 (__vt__9cCcD_Stts)
//	80655B88: 80083760 (__ct__10dCcD_GSttsFv)
//	80655B8C: 803AC2E4 (__vt__9dCcD_Stts)
//	80655B90: 803AC2E4 (__vt__9dCcD_Stts)
//	80655BA4: 80075EAC (__ct__12dBgS_AcchCirFv)
//	80655BB0: 80083A28 (__ct__12dCcD_GObjInfFv)
//	80655BB4: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80655BB8: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80655BC0: 80656884 (__vt__8cM3dGAab)
//	80655BC4: 80656884 (__vt__8cM3dGAab)
//	80655BCC: 80656890 (__vt__8cM3dGSph)
//	80655BD0: 80656890 (__vt__8cM3dGSph)
//	80655BD8: 803C3540 (__vt__12cCcD_SphAttr)
//	80655BDC: 803C3540 (__vt__12cCcD_SphAttr)
//	80655BEC: 803ABFC0 (__vt__8dCcD_Sph)
//	80655BF0: 803ABFC0 (__vt__8dCcD_Sph)
//	80655C0C: 80267C1C (__ct__11cBgS_GndChkFv)
//	80655C20: 806561B0 (getTypeFromParam__10daBullet_cFv)
//	80655C2C: 80656180 (getResName__10daBullet_cFv)
//	80655C38: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80655C4C: 80656160 (createHeapCallBack__10daBullet_cFP10fopAc_ac_c)
//	80655C50: 80656160 (createHeapCallBack__10daBullet_cFP10fopAc_ac_c)
//	80655C58: 8001A4B0 (fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl)
//	80655C70: 806561D0 (initialize__10daBullet_cFv)
//	80655C7C: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBullet_c::create() {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/create__10daBullet_cFv.s"
}
#pragma pop

/* 80655C90-80655CD8 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGSphFv */
//	80655CA8: 80656890 (__vt__8cM3dGSph)
//	80655CAC: 80656890 (__vt__8cM3dGSph)
//	80655CBC: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80655CD8-80655D20 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
//	80655CF0: 80656884 (__vt__8cM3dGAab)
//	80655CF4: 80656884 (__vt__8cM3dGAab)
//	80655D04: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80655D20-80655D90 0070+00 s=1 e=0 z=0  None .text      __dt__12dBgS_AcchCirFv */
//	80655D40: 80656878 (__vt__12dBgS_AcchCir)
//	80655D44: 80656878 (__vt__12dBgS_AcchCir)
//	80655D54: 8026EF18 (__dt__8cM3dGCirFv)
//	80655D60: 802680B0 (__dt__13cBgS_PolyInfoFv)
//	80655D70: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80655D90-80655DEC 005C+00 s=1 e=0 z=0  None .text      __dt__10dCcD_GSttsFv */
//	80655DA8: 8065686C (__vt__10dCcD_GStts)
//	80655DAC: 8065686C (__vt__10dCcD_GStts)
//	80655DB8: 80656860 (__vt__10cCcD_GStts)
//	80655DBC: 80656860 (__vt__10cCcD_GStts)
//	80655DD0: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80655DEC-80655E5C 0070+00 s=3 e=0 z=0  None .text      __dt__12dBgS_ObjAcchFv */
//	80655E0C: 8065683C (__vt__12dBgS_ObjAcch)
//	80655E10: 8065683C (__vt__12dBgS_ObjAcch)
//	80655E2C: 80075F94 (__dt__9dBgS_AcchFv)
//	80655E3C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80655E5C-80655EDC 0080+00 s=1 e=0 z=0  None .text      CreateHeap__10daBullet_cFv */
//	80655E74: 80656198 (getBmdName__10daBullet_cFv)
//	80655E80: 80656180 (getResName__10daBullet_cFv)
//	80655E88: 804061C0 (g_dComIfG_gameInfo)
//	80655E8C: 804061C0 (g_dComIfG_gameInfo)
//	80655E9C: 8003C37C (getRes__14dRes_control_cFPCcPCcP11dRes_info_ci)
//	80655EAC: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBullet_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/CreateHeap__10daBullet_cFv.s"
}
#pragma pop

/* 80655EDC-80655F10 0034+00 s=1 e=0 z=0  None .text      Delete__10daBullet_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBullet_c::Delete() {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/Delete__10daBullet_cFv.s"
}
#pragma pop

/* 80655F10-806560FC 01EC+00 s=2 e=0 z=0  None .text      Execute__10daBullet_cFv */
//	80655F20: 803621DC (_savegpr_29)
//	80655F28: 80656744 (m__16daBullet_Param_c)
//	80655F2C: 80656744 (m__16daBullet_Param_c)
//	80655F44: 80362018 (__ptmf_test)
//	80655F5C: 80362084 (__ptmf_scall)
//	80655F6C: 8001A6CC (fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz)
//	80655F74: 804061C0 (g_dComIfG_gameInfo)
//	80655F78: 804061C0 (g_dComIfG_gameInfo)
//	80655F80: 80076AAC (CrrPos__9dBgS_AcchFR4dBgS)
//	80656000: 8065675C (lit_3824)
//	80656004: 8065675C (lit_3824)
//	8065600C: 8065675C (lit_3824)
//	80656010: 8065675C (lit_3824)
//	80656020: 804061C0 (g_dComIfG_gameInfo)
//	80656024: 804061C0 (g_dComIfG_gameInfo)
//	80656034: 80075100 (GetRoomId__4dBgSFRC13cBgS_PolyInfo)
//	80656044: 80074BE8 (GetPolyColor__4dBgSFRC13cBgS_PolyInfo)
//	80656050: 80450D64 (struct_80450D64)
//	80656054: 80450D64 (struct_80450D64)
//	806560B0: 8000CD64 (transS__14mDoMtx_stack_cFRC4cXyz)
//	806560B8: 8000CF44 (ZXYrotM__14mDoMtx_stack_cFRC5csXyz)
//	806560C0: 8000CE70 (scaleM__14mDoMtx_stack_cFRC4cXyz)
//	806560C4: 803DD470 (now__14mDoMtx_stack_c)
//	806560C8: 803DD470 (now__14mDoMtx_stack_c)
//	806560D4: 803464B0 (PSMTXCopy)
//	806560E8: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBullet_c::Execute() {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/Execute__10daBullet_cFv.s"
}
#pragma pop

/* 806560FC-80656160 0064+00 s=1 e=0 z=0  None .text      Draw__10daBullet_cFv */
//	80656110: 8042CA54 (g_env_light)
//	80656114: 8042CA54 (g_env_light)
//	80656124: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80656128: 8042CA54 (g_env_light)
//	8065612C: 8042CA54 (g_env_light)
//	8065613C: 801A4DA0
//(setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c) 	80656144:
// 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBullet_c::Draw() {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/Draw__10daBullet_cFv.s"
}
#pragma pop

/* 80656160-80656180 0020+00 s=1 e=0 z=0  None .text
 * createHeapCallBack__10daBullet_cFP10fopAc_ac_c               */
//	8065616C: 80655E5C (CreateHeap__10daBullet_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBullet_c::createHeapCallBack(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/createHeapCallBack__10daBullet_cFP10fopAc_ac_c.s"
}
#pragma pop

/* 80656180-80656198 0018+00 s=3 e=0 z=0  None .text      getResName__10daBullet_cFv */
//	80656188: 8065678C (l_resFileNameList)
//	8065618C: 8065678C (l_resFileNameList)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBullet_c::getResName() {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/getResName__10daBullet_cFv.s"
}
#pragma pop

/* 80656198-806561B0 0018+00 s=1 e=0 z=0  None .text      getBmdName__10daBullet_cFv */
//	806561A0: 80656790 (l_bmdFileNameList)
//	806561A4: 80656790 (l_bmdFileNameList)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBullet_c::getBmdName() {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/getBmdName__10daBullet_cFv.s"
}
#pragma pop

/* 806561B0-806561D0 0020+00 s=1 e=0 z=0  None .text      getTypeFromParam__10daBullet_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBullet_c::getTypeFromParam() {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/getTypeFromParam__10daBullet_cFv.s"
}
#pragma pop

/* 806561D0-80656378 01A8+00 s=1 e=0 z=0  None .text      initialize__10daBullet_cFv */
//	806561E8: 80656714 (mCcDObjInfo__10daBullet_c)
//	806561EC: 80656714 (mCcDObjInfo__10daBullet_c)
//	80656214: 8001A548 (fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff)
//	80656228: 80075F58 (SetWall__12dBgS_AcchCirFff)
//	80656254: 80076248
//(Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz) 	80656278:
//80083860
//(Init__9dCcD_SttsFiiP10fopAc_ac_c) 	80656280: 80656794 (mCcDSph__10daBullet_c) 	80656284:
//80656794
//(mCcDSph__10daBullet_c) 	80656288: 80084A34 (Set__8dCcD_SphFRC11dCcD_SrcSph) 	80656298:
//804061C0 (g_dComIfG_gameInfo) 	8065629C: 804061C0 (g_dComIfG_gameInfo) 	806562A4: 80076AAC
//(CrrPos__9dBgS_AcchFR4dBgS) 	80656320: 806567D4 (lit_3878) 	80656324: 806567D4 (lit_3878)
//80656348: 80656378 (setProcess__10daBullet_cFM10daBullet_cFPCvPvPv_i) 	8065635C: 80655F10
//(Execute__10daBullet_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBullet_c::initialize() {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/initialize__10daBullet_cFv.s"
}
#pragma pop

/* 80656378-80656420 00A8+00 s=2 e=0 z=0  None .text
 * setProcess__10daBullet_cFM10daBullet_cFPCvPvPv_i             */
//	806563A0: 80362018 (__ptmf_test)
//	806563B8: 80362084 (__ptmf_scall)
//	806563E4: 80362018 (__ptmf_test)
//	806563FC: 80362084 (__ptmf_scall)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBullet_c::setProcess(int (daBullet_c::*)(void*)) {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/setProcess__10daBullet_cFM10daBullet_cFPCvPvPv_i.s"
}
#pragma pop

/* 80656420-806564B8 0098+00 s=1 e=0 z=0  None .text      wait__10daBullet_cFPv */
//	80656464: 80451180 (G_CM3D_F_ABS_MIN)
//	80656468: 80451180 (G_CM3D_F_ABS_MIN)
//	8065647C: 806567E0 (lit_3933)
//	80656480: 806567E0 (lit_3933)
//	806564A0: 80656378 (setProcess__10daBullet_cFM10daBullet_cFPCvPvPv_i)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBullet_c::wait(void* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/wait__10daBullet_cFPv.s"
}
#pragma pop

/* 806564B8-80656548 0090+00 s=1 e=0 z=0  None .text      move__10daBullet_cFPv */
//	806564FC: 80656618 (func_80656618)
//	8065650C: 80019C7C (fopAcM_delete__FP10fopAc_ac_c)
//	8065652C: 80019C7C (fopAcM_delete__FP10fopAc_ac_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBullet_c::move(void* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/move__10daBullet_cFPv.s"
}
#pragma pop

/* 80656548-80656568 0020+00 s=1 e=0 z=0  None .text      daBullet_Create__FPv */
//	80656554: 80655B08 (create__10daBullet_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daBullet_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/daBullet_Create__FPv.s"
}
#pragma pop

/* 80656568-80656588 0020+00 s=1 e=0 z=0  None .text      daBullet_Delete__FPv */
//	80656574: 80655EDC (Delete__10daBullet_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daBullet_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/daBullet_Delete__FPv.s"
}
#pragma pop

/* 80656588-806565A8 0020+00 s=1 e=0 z=0  None .text      daBullet_Execute__FPv */
//	80656594: 80655F10 (Execute__10daBullet_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daBullet_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/daBullet_Execute__FPv.s"
}
#pragma pop

/* 806565A8-806565C8 0020+00 s=1 e=0 z=0  None .text      daBullet_Draw__FPv */
//	806565B4: 806560FC (Draw__10daBullet_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daBullet_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/daBullet_Draw__FPv.s"
}
#pragma pop

/* 806565C8-806565D0 0008+00 s=1 e=0 z=0  None .text      daBullet_IsDelete__FPv */
static bool daBullet_IsDelete(void* param_0) {
    return true;
}

/* 806565D0-80656618 0048+00 s=1 e=0 z=0  None .text      __dt__10cCcD_GSttsFv */
//	806565E8: 80656860 (__vt__10cCcD_GStts)
//	806565EC: 80656860 (__vt__10cCcD_GStts)
//	806565FC: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80656618-80656634 001C+00 s=1 e=0 z=0  None .text      cLib_calcTimer<i>__FPi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cLib_calcTimer__template0(int* param_0) {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/func_80656618.s"
}
#pragma pop

/* ############################################################################################## */
/* 806568A8-806568B4 000C+00 s=2 e=0 z=0  None .data      __vt__16daBullet_Param_c */
SECTION_DATA void* __vt__16daBullet_Param_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16daBullet_Param_cFv,
};

/* 806568C0-806568CC 000C+00 s=1 e=0 z=0  None .bss       @3619 */
static u8 lit_3619[12];

/* 806568CC-806568D0 0004+00 s=1 e=0 z=0  None .bss       l_HIO */
static u8 l_HIO[4];

/* 80656634-806566A8 0074+00 s=0 e=1 z=0  None .text      __sinit_d_a_bullet_cpp */
//	80656640: 806568A8 (__vt__16daBullet_Param_c)
//	80656644: 806568A8 (__vt__16daBullet_Param_c)
//	80656648: 806568CC (l_HIO)
//	8065664C: 806568CC (l_HIO)
//	80656650: 806566A8 (__dt__16daBullet_Param_cFv)
//	80656654: 806566A8 (__dt__16daBullet_Param_cFv)
//	80656658: 806568C0 (lit_3619)
//	8065665C: 806568C0 (lit_3619)
//	80656660: 806558D8 (__register_global_object)
//	80656664: 80656794 (mCcDSph__10daBullet_c)
//	80656668: 80656794 (mCcDSph__10daBullet_c)
//	80656670: 80656714 (mCcDObjInfo__10daBullet_c)
//	80656674: 80656714 (mCcDObjInfo__10daBullet_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_bullet_cpp() {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/__sinit_d_a_bullet_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80656634 = (void*)__sinit_d_a_bullet_cpp;
#pragma pop

/* 806566A8-806566F0 0048+00 s=2 e=0 z=0  None .text      __dt__16daBullet_Param_cFv */
//	806566C0: 806568A8 (__vt__16daBullet_Param_c)
//	806566C4: 806568A8 (__vt__16daBullet_Param_c)
//	806566D4: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daBullet_Param_c::~daBullet_Param_c() {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/__dt__16daBullet_Param_cFv.s"
}
#pragma pop

/* 806566F0-806566F8 0008+00 s=1 e=0 z=0  None .text      @36@__dt__12dBgS_ObjAcchFv */
//	806566F4: 80655DEC (__dt__12dBgS_ObjAcchFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_806566F0() {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/func_806566F0.s"
}
#pragma pop

/* 806566F8-80656700 0008+00 s=1 e=0 z=0  None .text      @20@__dt__12dBgS_ObjAcchFv */
//	806566FC: 80655DEC (__dt__12dBgS_ObjAcchFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_806566F8() {
    nofralloc
#include "asm/rel/d/a/d_a_bullet/d_a_bullet/func_806566F8.s"
}
#pragma pop
