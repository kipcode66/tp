//
// Generated By: dol2asm
// Translation Unit: d_a_obj_lv6Tenbin
//

#include "rel/d/a/obj/d_a_obj_lv6Tenbin/d_a_obj_lv6Tenbin.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    /* 8000CD9C */ void transM(f32, f32, f32);
};

struct mDoHIO_entry_c {
    /* 80C76988 */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {};

struct dBgW {
    /* 8007B970 */ dBgW();
    /* 8007B9C0 */ void Move();
};

struct daTenbin_c {
    /* 80C769D0 */ void setBaseMtx();
    /* 80C76BCC */ void CreateHeap();
    /* 80C76D10 */ void create();
    /* 80C76EE0 */ void rideCallBackRight(dBgW*, fopAc_ac_c*, fopAc_ac_c*);
    /* 80C77078 */ void rideCallBackLeft(dBgW*, fopAc_ac_c*, fopAc_ac_c*);
    /* 80C77200 */ void Execute(f32 (**)[3][4]);
    /* 80C772BC */ void procMain();
    /* 80C77464 */ void init_modeWait();
    /* 80C77470 */ void modeWait();
    /* 80C77668 */ void balanceCheck();
    /* 80C7772C */ void Draw();
    /* 80C77810 */ void Delete();
};

struct daTenbin_HIO_c {
    /* 80C768EC */ daTenbin_HIO_c();
    /* 80C77904 */ ~daTenbin_HIO_c();
};

struct cXyz {};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dBgW_Base {};

struct cBgS_PolyInfo {};

struct csXyz {};

struct dBgS_MoveBgActor {
    /* 80078624 */ dBgS_MoveBgActor();
    /* 80078690 */ bool Create();
    /* 800786B0 */ bool IsDelete();
    /* 800786B8 */ bool ToFore();
    /* 800786C0 */ bool ToBack();
    /* 800787BC */ void MoveBGCreate(char const*, int,
                                     void (*)(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*,
                                              csXyz*, csXyz*),
                                     u32, f32 (*)[3][4]);
    /* 800788DC */ void MoveBGDelete();
    /* 80078950 */ void MoveBGExecute();
};

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct cBgW_BgId {
    /* 802681D4 */ void ChkUsed() const;
};

struct cBgD_t {};

struct cBgW {
    /* 80079F38 */ void Set(cBgD_t*, u32, f32 (*)[3][4]);
};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct Vec {};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

//
// Forward References:
//

static void daTenbin_Draw(daTenbin_c*);
static void daTenbin_Execute(daTenbin_c*);
static void daTenbin_Delete(daTenbin_c*);
static void daTenbin_Create(fopAc_ac_c*);

extern "C" void __ct__14daTenbin_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__10daTenbin_cFv();
extern "C" void CreateHeap__10daTenbin_cFv();
extern "C" void create__10daTenbin_cFv();
extern "C" void rideCallBackRight__10daTenbin_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" void rideCallBackLeft__10daTenbin_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" void Execute__10daTenbin_cFPPA3_A4_f();
extern "C" void procMain__10daTenbin_cFv();
extern "C" void init_modeWait__10daTenbin_cFv();
extern "C" void modeWait__10daTenbin_cFv();
extern "C" void balanceCheck__10daTenbin_cFv();
extern "C" void Draw__10daTenbin_cFv();
extern "C" void Delete__10daTenbin_cFv();
extern "C" static void daTenbin_Draw__FP10daTenbin_c();
extern "C" static void daTenbin_Execute__FP10daTenbin_c();
extern "C" static void daTenbin_Delete__FP10daTenbin_c();
extern "C" static void daTenbin_Create__FP10fopAc_ac_c();
extern "C" void __dt__14daTenbin_HIO_cFv();
extern "C" void __sinit_d_a_obj_lv6Tenbin_cpp();
extern "C" extern u32 const lit_3669;
extern "C" extern u32 const lit_3671;
extern "C" extern u32 const lit_3672;
extern "C" extern u32 const lit_3673;
extern "C" extern u32 const lit_3674;
extern "C" extern u32 const lit_3675;
extern "C" extern u32 const lit_3676;
extern "C" extern u32 const lit_3677;
extern "C" extern u32 const lit_3678;
extern "C" extern u32 const lit_3679;
extern "C" extern u32 const lit_3680;
extern "C" extern u32 const lit_3971;
extern "C" extern u32 const lit_3972;
extern "C" extern u32 const lit_3973;
extern "C" extern u32 const lit_3974;
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_Lv6Tenbin[12];
extern "C" extern void* __vt__10daTenbin_c[10];
extern "C" extern void* __vt__14daTenbin_HIO_c[3];
extern "C" extern void* __vt__14mDoHIO_entry_c[3];

//
// External References:
//

void mDoMtx_ZXYrotM(f32 (*)[4], s16, s16, s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcIt_Judge(void* (*)(void*, void*), void*);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void fopAcM_setEffectMtx(fopAc_ac_c const*, J3DModelData const*);
void fpcSch_JudgeByID(void*, void*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dBgS_MoveBGProc_Typical(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void cLib_addCalc(f32*, f32, f32, f32, f32);
void* operator new(u32);
void operator delete(void*);

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_setEffectMtx__FPC10fopAc_ac_cPC12J3DModelData();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80C779B0-80C779B4 0004+00 s=2 e=0 z=0  None .rodata    @3668 */
SECTION_RODATA static u32 const lit_3668 = 0x43F00000;

/* 80C77A08-80C77A20 0018+00 s=2 e=0 z=0  None .data      l_cull_box */
SECTION_DATA static u8 l_cull_box[24] = {
    0xC3, 0x96, 0x00, 0x00, 0xC3, 0xFA, 0x00, 0x00, 0xC3, 0xC8, 0x00, 0x00,
    0x44, 0x96, 0x00, 0x00, 0x43, 0x96, 0x00, 0x00, 0x44, 0xA2, 0x80, 0x00,
};

/* 80C77A20-80C77A2C 000C+00 s=1 e=0 z=0  None .data      @3913 */
SECTION_DATA static void* lit_3913[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__10daTenbin_cFv,
};

/* 80C77A2C-80C77A38 000C+00 s=1 e=0 z=0  None .data      mode_proc$3912 */
SECTION_DATA static u8 mode_proc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C77A38-80C77A58 0020+00 s=1 e=0 z=0  None .data      l_daTenbin_Method */
SECTION_DATA static void* l_daTenbin_Method[8] = {
    (void*)daTenbin_Create__FP10fopAc_ac_c,
    (void*)daTenbin_Delete__FP10daTenbin_c,
    (void*)daTenbin_Execute__FP10daTenbin_c,
    (void*)NULL,
    (void*)daTenbin_Draw__FP10daTenbin_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C77A58-80C77A88 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Lv6Tenbin */
SECTION_DATA void* g_profile_Obj_Lv6Tenbin[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00950000, (void*)&g_fpcLf_Method,
    (void*)0x00000654, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x026F0000, (void*)&l_daTenbin_Method,
    (void*)0x00060100, (void*)0x000E0000,
};

/* 80C77A88-80C77AB0 0028+00 s=1 e=0 z=0  None .data      __vt__10daTenbin_c */
SECTION_DATA void* __vt__10daTenbin_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__10daTenbin_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__10daTenbin_cFPPA3_A4_f,
    (void*)Draw__10daTenbin_cFv,
    (void*)Delete__10daTenbin_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C77AB0-80C77ABC 000C+00 s=2 e=0 z=0  None .data      __vt__14daTenbin_HIO_c */
SECTION_DATA void* __vt__14daTenbin_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14daTenbin_HIO_cFv,
};

/* 80C77ABC-80C77AC8 000C+00 s=3 e=0 z=0  None .data      __vt__14mDoHIO_entry_c */
SECTION_DATA void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80C768EC-80C76988 009C+00 s=1 e=0 z=0  None .text      __ct__14daTenbin_HIO_cFv */
//	80C768EC: 80C779B0 (lit_3668)
//	80C768F0: 80C779B0 (lit_3668)
//	80C768F4: 80C77ABC (__vt__14mDoHIO_entry_c)
//	80C768F8: 80C77ABC (__vt__14mDoHIO_entry_c)
//	80C76900: 80C77AB0 (__vt__14daTenbin_HIO_c)
//	80C76904: 80C77AB0 (__vt__14daTenbin_HIO_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTenbin_HIO_c::daTenbin_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Tenbin/d_a_obj_lv6Tenbin/__ct__14daTenbin_HIO_cFv.s"
}
#pragma pop

/* 80C76988-80C769D0 0048+00 s=1 e=0 z=0  None .text      __dt__14mDoHIO_entry_cFv */
//	80C769A0: 80C77ABC (__vt__14mDoHIO_entry_c)
//	80C769A4: 80C77ABC (__vt__14mDoHIO_entry_c)
//	80C769B4: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Tenbin/d_a_obj_lv6Tenbin/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C779B4-80C779B8 0004+00 s=0 e=0 z=0  None .rodata    @3669 */
SECTION_RODATA u32 const lit_3669 = 0x43200000;

/* 80C779B8-80C779BC 0004+00 s=4 e=0 z=0  None .rodata    @3670 */
SECTION_RODATA static u8 const lit_3670[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80C779BC-80C779C0 0004+00 s=0 e=0 z=0  None .rodata    @3671 */
SECTION_RODATA u32 const lit_3671 = 0x42340000;

/* 80C779C0-80C779C4 0004+00 s=0 e=0 z=0  None .rodata    @3672 */
SECTION_RODATA u32 const lit_3672 = 0x42480000;

/* 80C779C4-80C779C8 0004+00 s=0 e=0 z=0  None .rodata    @3673 */
SECTION_RODATA u32 const lit_3673 = 0x3D75C28F;

/* 80C779C8-80C779CC 0004+00 s=0 e=0 z=0  None .rodata    @3674 */
SECTION_RODATA u32 const lit_3674 = 0x40A00000;

/* 80C779CC-80C779D0 0004+00 s=0 e=0 z=0  None .rodata    @3675 */
SECTION_RODATA u32 const lit_3675 = 0x3F800000;

/* 80C779D0-80C779D4 0004+00 s=0 e=0 z=0  None .rodata    @3676 */
SECTION_RODATA u32 const lit_3676 = 0x42B40000;

/* 80C779D4-80C779D8 0004+00 s=0 e=0 z=0  None .rodata    @3677 */
SECTION_RODATA u32 const lit_3677 = 0x41F00000;

/* 80C779D8-80C779DC 0004+00 s=0 e=0 z=0  None .rodata    @3678 */
SECTION_RODATA u32 const lit_3678 = 0x41200000;

/* 80C779DC-80C779E0 0004+00 s=0 e=0 z=0  None .rodata    @3679 */
SECTION_RODATA u32 const lit_3679 = 0x3C23D70A;

/* 80C779E0-80C779E4 0004+00 s=0 e=0 z=0  None .rodata    @3680 */
SECTION_RODATA u32 const lit_3680 = 0x3E99999A;

/* 80C779E4-80C779E8 0004+00 s=2 e=0 z=0  None .rodata    @3735 */
SECTION_RODATA static u32 const lit_3735 = 0x43360B61;

/* 80C77AD0-80C77ADC 000C+00 s=1 e=0 z=0  None .bss       @3662 */
static u8 lit_3662[12];

/* 80C77ADC-80C77B20 0044+00 s=5 e=0 z=0  None .bss       l_HIO */
static u8 l_HIO[68];

/* 80C769D0-80C76BCC 01FC+00 s=2 e=0 z=0  None .text      setBaseMtx__10daTenbin_cFv */
//	80C769E0: 803621DC (_savegpr_29)
//	80C769E8: 803DD470 (now__14mDoMtx_stack_c)
//	80C769EC: 803DD470 (now__14mDoMtx_stack_c)
//	80C769FC: 803468E8 (PSMTXTrans)
//	80C76A00: 803DD470 (now__14mDoMtx_stack_c)
//	80C76A04: 803DD470 (now__14mDoMtx_stack_c)
//	80C76A14: 8000C2A0 (mDoMtx_ZXYrotM__FPA4_fsss)
//	80C76A18: 80C77ADC (l_HIO)
//	80C76A1C: 80C77ADC (l_HIO)
//	80C76A28: 80C779B8 (lit_3670)
//	80C76A2C: 80C779B8 (lit_3670)
//	80C76A30: 8000CD9C (transM__14mDoMtx_stack_cFfff)
//	80C76A34: 80C779E4 (lit_3735)
//	80C76A38: 80C779E4 (lit_3735)
//	80C76A3C: 80C77ADC (l_HIO)
//	80C76A40: 80C77ADC (l_HIO)
//	80C76A58: 803DD470 (now__14mDoMtx_stack_c)
//	80C76A5C: 803DD470 (now__14mDoMtx_stack_c)
//	80C76A68: 8000C2A0 (mDoMtx_ZXYrotM__FPA4_fsss)
//	80C76A6C: 803DD470 (now__14mDoMtx_stack_c)
//	80C76A70: 803DD470 (now__14mDoMtx_stack_c)
//	80C76A80: 8000C2A0 (mDoMtx_ZXYrotM__FPA4_fsss)
//	80C76A90: 8000CD9C (transM__14mDoMtx_stack_cFfff)
//	80C76AB0: 803DD470 (now__14mDoMtx_stack_c)
//	80C76AB4: 803DD470 (now__14mDoMtx_stack_c)
//	80C76AC0: 803464B0 (PSMTXCopy)
//	80C76AC4: 803DD470 (now__14mDoMtx_stack_c)
//	80C76AC8: 803DD470 (now__14mDoMtx_stack_c)
//	80C76AD0: 803464B0 (PSMTXCopy)
//	80C76AD4: 803DD470 (now__14mDoMtx_stack_c)
//	80C76AD8: 803DD470 (now__14mDoMtx_stack_c)
//	80C76AE8: 803468E8 (PSMTXTrans)
//	80C76AEC: 803DD470 (now__14mDoMtx_stack_c)
//	80C76AF0: 803DD470 (now__14mDoMtx_stack_c)
//	80C76B00: 8000C2A0 (mDoMtx_ZXYrotM__FPA4_fsss)
//	80C76B10: 80C779B8 (lit_3670)
//	80C76B14: 80C779B8 (lit_3670)
//	80C76B18: 8000CD9C (transM__14mDoMtx_stack_cFfff)
//	80C76B1C: 80C779E4 (lit_3735)
//	80C76B20: 80C779E4 (lit_3735)
//	80C76B38: 803DD470 (now__14mDoMtx_stack_c)
//	80C76B3C: 803DD470 (now__14mDoMtx_stack_c)
//	80C76B48: 8000C2A0 (mDoMtx_ZXYrotM__FPA4_fsss)
//	80C76B4C: 803DD470 (now__14mDoMtx_stack_c)
//	80C76B50: 803DD470 (now__14mDoMtx_stack_c)
//	80C76B60: 8000C2A0 (mDoMtx_ZXYrotM__FPA4_fsss)
//	80C76B70: 8000CD9C (transM__14mDoMtx_stack_cFfff)
//	80C76B90: 803DD470 (now__14mDoMtx_stack_c)
//	80C76B94: 803DD470 (now__14mDoMtx_stack_c)
//	80C76BA0: 803464B0 (PSMTXCopy)
//	80C76BA4: 803DD470 (now__14mDoMtx_stack_c)
//	80C76BA8: 803DD470 (now__14mDoMtx_stack_c)
//	80C76BB0: 803464B0 (PSMTXCopy)
//	80C76BB8: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTenbin_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Tenbin/d_a_obj_lv6Tenbin/setBaseMtx__10daTenbin_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C779E8-80C779EC 0004+00 s=1 e=0 z=0  None .rodata    @3908 */
SECTION_RODATA static u32 const lit_3908 = 0x3F000000;

/* 80C779EC-80C779F0 0004+00 s=0 e=0 z=0  None .rodata    @3971 */
SECTION_RODATA u32 const lit_3971 = 0x3ECCCCCD;

/* 80C779F0-80C779F4 0004+00 s=0 e=0 z=0  None .rodata    @3972 */
SECTION_RODATA u32 const lit_3972 = 0x41000000;

/* 80C779F4-80C779F8 0004+00 s=0 e=0 z=0  None .rodata    @3973 */
SECTION_RODATA u32 const lit_3973 = 0x3DCCCCCD;

/* 80C779F8-80C779FC 0004+00 s=0 e=0 z=0  None .rodata    @3974 */
SECTION_RODATA u32 const lit_3974 = 0xBF800000;

/* 80C779FC-80C77A05 0009+00 s=3 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C779FC = "L6Tenbin";
#pragma pop

/* 80C76BCC-80C76D10 0144+00 s=1 e=0 z=0  None .text      CreateHeap__10daTenbin_cFv */
//	80C76BE4: 80C779FC (stringBase0)
//	80C76BE8: 80C779FC (stringBase0)
//	80C76BF0: 804061C0 (g_dComIfG_gameInfo)
//	80C76BF4: 804061C0 (g_dComIfG_gameInfo)
//	80C76C08: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80C76C18: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
//	80C76C34: 80C779FC (stringBase0)
//	80C76C38: 80C779FC (stringBase0)
//	80C76C48: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80C76C58: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
//	80C76C78: 802CEC4C (__nw__FUl)
//	80C76C84: 8007B970 (__ct__4dBgWFv)
//	80C76C9C: 80C779FC (stringBase0)
//	80C76CA0: 80C779FC (stringBase0)
//	80C76CB0: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80C76CC4: 80079F38 (Set__4cBgWFP6cBgD_tUlPA3_A4_f)
//	80C76CD0: 80075A24 (dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80C76CD4: 80075A24 (dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTenbin_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Tenbin/d_a_obj_lv6Tenbin/CreateHeap__10daTenbin_cFv.s"
}
#pragma pop

/* 80C76D10-80C76EE0 01D0+00 s=1 e=0 z=0  None .text      create__10daTenbin_cFv */
//	80C76D3C: 80078624 (__ct__16dBgS_MoveBgActorFv)
//	80C76D40: 80C77A88 (__vt__10daTenbin_c)
//	80C76D44: 80C77A88 (__vt__10daTenbin_c)
//	80C76D5C: 80C779FC (stringBase0)
//	80C76D60: 80C779FC (stringBase0)
//	80C76D64: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80C76D78: 80C779FC (stringBase0)
//	80C76D7C: 80C779FC (stringBase0)
//	80C76D84: 80075A24 (dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80C76D88: 80075A24 (dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz)
//	80C76D94: 800787BC
//(MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f)
//	80C76DB4: 80C77A08 (l_cull_box)
//	80C76DB8: 80C77A08 (l_cull_box)
//	80C76DD8: 8001A548 (fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff)
//	80C76DDC: 80C77078 (rideCallBackLeft__10daTenbin_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c)
//	80C76DE0: 80C77078 (rideCallBackLeft__10daTenbin_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c)
//	80C76DEC: 80C76EE0 (rideCallBackRight__10daTenbin_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c)
//	80C76DF0: 80C76EE0 (rideCallBackRight__10daTenbin_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c)
//	80C76E18: 80C779B8 (lit_3670)
//	80C76E1C: 80C779B8 (lit_3670)
//	80C76E88: 80C769D0 (setBaseMtx__10daTenbin_cFv)
//	80C76E98: 804061C0 (g_dComIfG_gameInfo)
//	80C76E9C: 804061C0 (g_dComIfG_gameInfo)
//	80C76EA8: 80074A08 (Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c)
//	80C76EB0: 8007B9C0 (Move__4dBgWFv)
//	80C76EB8: 80078950 (MoveBGExecute__16dBgS_MoveBgActorFv)
//	80C76EC0: 80C77464 (init_modeWait__10daTenbin_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTenbin_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Tenbin/d_a_obj_lv6Tenbin/create__10daTenbin_cFv.s"
}
#pragma pop

/* 80C76EE0-80C77078 0198+00 s=1 e=0 z=0  None .text
 * rideCallBackRight__10daTenbin_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c */
//	80C76EF0: 803621DC (_savegpr_29)
//	80C76EFC: 804061C0 (g_dComIfG_gameInfo)
//	80C76F00: 804061C0 (g_dComIfG_gameInfo)
//	80C76F48: 804061C0 (g_dComIfG_gameInfo)
//	80C76F4C: 804061C0 (g_dComIfG_gameInfo)
//	80C76FCC: 80023590 (fpcSch_JudgeByID__FPvPv)
//	80C76FD0: 80023590 (fpcSch_JudgeByID__FPvPv)
//	80C76FD8: 800197F8 (fopAcIt_Judge__FPFPvPv_PvPv)
//	80C77064: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTenbin_c::rideCallBackRight(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Tenbin/d_a_obj_lv6Tenbin/rideCallBackRight__10daTenbin_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c.s"
}
#pragma pop

/* 80C77078-80C77200 0188+00 s=1 e=0 z=0  None .text
 * rideCallBackLeft__10daTenbin_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c */
//	80C77088: 803621DC (_savegpr_29)
//	80C77094: 804061C0 (g_dComIfG_gameInfo)
//	80C77098: 804061C0 (g_dComIfG_gameInfo)
//	80C770E0: 804061C0 (g_dComIfG_gameInfo)
//	80C770E4: 804061C0 (g_dComIfG_gameInfo)
//	80C77154: 80023590 (fpcSch_JudgeByID__FPvPv)
//	80C77158: 80023590 (fpcSch_JudgeByID__FPvPv)
//	80C77160: 800197F8 (fopAcIt_Judge__FPFPvPv_PvPv)
//	80C771EC: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTenbin_c::rideCallBackLeft(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Tenbin/d_a_obj_lv6Tenbin/rideCallBackLeft__10daTenbin_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c.s"
}
#pragma pop

/* 80C77200-80C772BC 00BC+00 s=1 e=0 z=0  None .text      Execute__10daTenbin_cFPPA3_A4_f */
//	80C7721C: 80C77A08 (l_cull_box)
//	80C77220: 80C77A08 (l_cull_box)
//	80C77228: 80C77ADC (l_HIO)
//	80C7722C: 80C77ADC (l_HIO)
//	80C77234: 80C779E8 (lit_3908)
//	80C77238: 80C779E8 (lit_3908)
//	80C7725C: 8001A548 (fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff)
//	80C77264: 80C772BC (procMain__10daTenbin_cFv)
//	80C7726C: 80C769D0 (setBaseMtx__10daTenbin_cFv)
//	80C77288: 8007B9C0 (Move__4dBgWFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTenbin_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Tenbin/d_a_obj_lv6Tenbin/Execute__10daTenbin_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C77B20-80C77B24 0004+00 s=1 e=0 z=0  None .bss       None */
static u8 data_80C77B20[4];

/* 80C772BC-80C77464 01A8+00 s=1 e=0 z=0  None .text      procMain__10daTenbin_cFv */
//	80C772D0: 80C77B20 (data_80C77B20)
//	80C772D4: 80C77B20 (data_80C77B20)
//	80C772E4: 80C77A2C (mode_proc)
//	80C772E8: 80C77A2C (mode_proc)
//	80C772EC: 80C77A20 (lit_3913)
//	80C772F0: 80C77A20 (lit_3913)
//	80C77320: 80C77A2C (mode_proc)
//	80C77324: 80C77A2C (mode_proc)
//	80C7732C: 80362084 (__ptmf_scall)
//	80C77334: 80C779E4 (lit_3735)
//	80C77338: 80C779E4 (lit_3735)
//	80C77350: 80439A20 (sincosTable___5JMath)
//	80C77354: 80439A20 (sincosTable___5JMath)
//	80C773CC: 80C779B8 (lit_3670)
//	80C773D0: 80C779B8 (lit_3670)
//	80C773E0: 8026F97C (cLib_addCalc__FPfffff)
//	80C773E4: 80C779E4 (lit_3735)
//	80C773E8: 80C779E4 (lit_3735)
//	80C77410: 80439A20 (sincosTable___5JMath)
//	80C77414: 80439A20 (sincosTable___5JMath)
//	80C7742C: 80C779B8 (lit_3670)
//	80C77430: 80C779B8 (lit_3670)
//	80C77440: 8026F97C (cLib_addCalc__FPfffff)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTenbin_c::procMain() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Tenbin/d_a_obj_lv6Tenbin/procMain__10daTenbin_cFv.s"
}
#pragma pop

/* 80C77464-80C77470 000C+00 s=1 e=0 z=0  None .text      init_modeWait__10daTenbin_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTenbin_c::init_modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Tenbin/d_a_obj_lv6Tenbin/init_modeWait__10daTenbin_cFv.s"
}
#pragma pop

/* 80C77470-80C77668 01F8+00 s=1 e=0 z=0  None .text      modeWait__10daTenbin_cFv */
//	80C77498: 80C779B0 (lit_3668)
//	80C7749C: 80C779B0 (lit_3668)
//	80C774A0: 80C77668 (balanceCheck__10daTenbin_cFv)
//	80C774C4: 8026F97C (cLib_addCalc__FPfffff)
//	80C774E0: 8026F97C (cLib_addCalc__FPfffff)
//	80C77504: 8002D06C (dComIfGp_getReverb__Fi)
//	80C77518: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C7751C: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C77544: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80C7757C: 8002D06C (dComIfGp_getReverb__Fi)
//	80C77590: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C77594: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C775BC: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80C775C0: 80C77ADC (l_HIO)
//	80C775C4: 80C77ADC (l_HIO)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTenbin_c::modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Tenbin/d_a_obj_lv6Tenbin/modeWait__10daTenbin_cFv.s"
}
#pragma pop

/* 80C77668-80C7772C 00C4+00 s=1 e=0 z=0  None .text      balanceCheck__10daTenbin_cFv */
//	80C77694: 80C779B8 (lit_3670)
//	80C77698: 80C779B8 (lit_3670)
//	80C776AC: 80C77ADC (l_HIO)
//	80C776B0: 80C77ADC (l_HIO)
//	80C776D0: 80C77ADC (l_HIO)
//	80C776D4: 80C77ADC (l_HIO)
//	80C776EC: 80C77ADC (l_HIO)
//	80C776F0: 80C77ADC (l_HIO)
//	80C776FC: 80C779B8 (lit_3670)
//	80C77700: 80C779B8 (lit_3670)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTenbin_c::balanceCheck() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Tenbin/d_a_obj_lv6Tenbin/balanceCheck__10daTenbin_cFv.s"
}
#pragma pop

/* 80C7772C-80C77810 00E4+00 s=1 e=0 z=0  None .text      Draw__10daTenbin_cFv */
//	80C77744: 8042CA54 (g_env_light)
//	80C77748: 8042CA54 (g_env_light)
//	80C77758: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80C7775C: 8042CA54 (g_env_light)
//	80C77760: 8042CA54 (g_env_light)
//	80C77770: 801A4DA0
//(setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c) 	80C77774:
// 8042CA54 (g_env_light) 	80C77778: 8042CA54 (g_env_light) 	80C77788: 801A4DA0
//(setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c) 	80C77798:
// 8001D42C (fopAcM_setEffectMtx__FPC10fopAc_ac_cPC12J3DModelData) 	80C777A8: 8001D42C
//(fopAcM_setEffectMtx__FPC10fopAc_ac_cPC12J3DModelData) 	80C777AC: 804061C0 (g_dComIfG_gameInfo)
//	80C777B0: 804061C0 (g_dComIfG_gameInfo)
//	80C777B8: 80434AC8 (j3dSys)
//	80C777BC: 80434AC8 (j3dSys)
//	80C777D0: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	80C777D8: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	80C777DC: 804061C0 (g_dComIfG_gameInfo)
//	80C777E0: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTenbin_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Tenbin/d_a_obj_lv6Tenbin/Draw__10daTenbin_cFv.s"
}
#pragma pop

/* 80C77810-80C77878 0068+00 s=1 e=0 z=0  None .text      Delete__10daTenbin_cFv */
//	80C77828: 80C779FC (stringBase0)
//	80C7782C: 80C779FC (stringBase0)
//	80C77830: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
//	80C77840: 802681D4 (ChkUsed__9cBgW_BgIdCFv)
//	80C7784C: 804061C0 (g_dComIfG_gameInfo)
//	80C77850: 804061C0 (g_dComIfG_gameInfo)
//	80C7785C: 80074250 (Release__4cBgSFP9dBgW_Base)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTenbin_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Tenbin/d_a_obj_lv6Tenbin/Delete__10daTenbin_cFv.s"
}
#pragma pop

/* 80C77878-80C778A4 002C+00 s=1 e=0 z=0  None .text      daTenbin_Draw__FP10daTenbin_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTenbin_Draw(daTenbin_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Tenbin/d_a_obj_lv6Tenbin/daTenbin_Draw__FP10daTenbin_c.s"
}
#pragma pop

/* 80C778A4-80C778C4 0020+00 s=1 e=0 z=0  None .text      daTenbin_Execute__FP10daTenbin_c */
//	80C778B0: 80078950 (MoveBGExecute__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTenbin_Execute(daTenbin_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Tenbin/d_a_obj_lv6Tenbin/daTenbin_Execute__FP10daTenbin_c.s"
}
#pragma pop

/* 80C778C4-80C778E4 0020+00 s=1 e=0 z=0  None .text      daTenbin_Delete__FP10daTenbin_c */
//	80C778D0: 800788DC (MoveBGDelete__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTenbin_Delete(daTenbin_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Tenbin/d_a_obj_lv6Tenbin/daTenbin_Delete__FP10daTenbin_c.s"
}
#pragma pop

/* 80C778E4-80C77904 0020+00 s=1 e=0 z=0  None .text      daTenbin_Create__FP10fopAc_ac_c */
//	80C778F0: 80C76D10 (create__10daTenbin_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTenbin_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Tenbin/d_a_obj_lv6Tenbin/daTenbin_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C77904-80C77960 005C+00 s=2 e=0 z=0  None .text      __dt__14daTenbin_HIO_cFv */
//	80C7791C: 80C77AB0 (__vt__14daTenbin_HIO_c)
//	80C77920: 80C77AB0 (__vt__14daTenbin_HIO_c)
//	80C7792C: 80C77ABC (__vt__14mDoHIO_entry_c)
//	80C77930: 80C77ABC (__vt__14mDoHIO_entry_c)
//	80C77944: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTenbin_HIO_c::~daTenbin_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Tenbin/d_a_obj_lv6Tenbin/__dt__14daTenbin_HIO_cFv.s"
}
#pragma pop

/* 80C77960-80C7799C 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_lv6Tenbin_cpp */
//	80C7796C: 80C77ADC (l_HIO)
//	80C77970: 80C77ADC (l_HIO)
//	80C77974: 80C768EC (__ct__14daTenbin_HIO_cFv)
//	80C77978: 80C77904 (__dt__14daTenbin_HIO_cFv)
//	80C7797C: 80C77904 (__dt__14daTenbin_HIO_cFv)
//	80C77980: 80C77AD0 (lit_3662)
//	80C77984: 80C77AD0 (lit_3662)
//	80C77988: 80C76878 (__register_global_object)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_obj_lv6Tenbin_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6Tenbin/d_a_obj_lv6Tenbin/__sinit_d_a_obj_lv6Tenbin_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80C77960 = (void*)__sinit_d_a_obj_lv6Tenbin_cpp;
#pragma pop
