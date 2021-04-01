//
// Generated By: dol2asm
// Translation Unit: d_a_obj_rotBridge
//

#include "rel/d/a/obj/d_a_obj_rotBridge/d_a_obj_rotBridge.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoHIO_entry_c {
    /* 80CBE9DC */ ~mDoHIO_entry_c();
};

struct J3DAnmTransform {};

struct J3DModelData {};

struct mDoExt_bckAnm {
    /* 8000D7DC */ void init(J3DAnmTransform*, int, int, f32, s16, s16, bool);
    /* 8000D9CC */ void entry(J3DModelData*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct fopAc_ac_c {};

struct dBgW {
    /* 8007B970 */ dBgW();
    /* 8007B9C0 */ void Move();
};

struct daRotBridge_c {
    /* 80CBEA24 */ void setBaseMtx();
    /* 80CBEB38 */ void CreateHeap();
    /* 80CBECBC */ void create();
    /* 80CBEF1C */ void rideCallBack(dBgW*, fopAc_ac_c*, fopAc_ac_c*);
    /* 80CBEF34 */ void Execute(f32 (**)[3][4]);
    /* 80CBF050 */ void playerAreaCheck();
    /* 80CBF1EC */ void moveBridge();
    /* 80CBF404 */ void Draw();
    /* 80CBF4BC */ void Delete();
};

struct daRotBridge_HIO_c {
    /* 80CBE98C */ daRotBridge_HIO_c();
    /* 80CBF5BC */ ~daRotBridge_HIO_c();
};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dKy_tevstr_c {};

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

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {
    /* 80327BD4 */ void calcAnmMtx();
};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80CBEED4 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

static void daRotBridge_Draw(daRotBridge_c*);
static void daRotBridge_Execute(daRotBridge_c*);
static void daRotBridge_Delete(daRotBridge_c*);
static void daRotBridge_Create(fopAc_ac_c*);

extern "C" void __ct__17daRotBridge_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__13daRotBridge_cFv();
extern "C" void CreateHeap__13daRotBridge_cFv();
extern "C" void create__13daRotBridge_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void rideCallBack__13daRotBridge_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" void Execute__13daRotBridge_cFPPA3_A4_f();
extern "C" void playerAreaCheck__13daRotBridge_cFv();
extern "C" void moveBridge__13daRotBridge_cFv();
extern "C" void Draw__13daRotBridge_cFv();
extern "C" void Delete__13daRotBridge_cFv();
extern "C" static void daRotBridge_Draw__FP13daRotBridge_c();
extern "C" static void daRotBridge_Execute__FP13daRotBridge_c();
extern "C" static void daRotBridge_Delete__FP13daRotBridge_c();
extern "C" static void daRotBridge_Create__FP10fopAc_ac_c();
extern "C" void __dt__17daRotBridge_HIO_cFv();
extern "C" void __sinit_d_a_obj_rotBridge_cpp();
extern "C" extern u8 const l_bmdIdx[12];
extern "C" extern u8 const l_bckIdx[12];
extern "C" extern u8 const lit_3878[4];
extern "C" extern u8 const lit_3879[8];
extern "C" extern u8 const lit_3880[8];
extern "C" extern u8 const lit_3881[8];
extern "C" extern u32 const lit_3939;
extern "C" extern void* g_profile_Obj_RotBridge[12];
extern "C" extern void* __vt__12J3DFrameCtrl[3];
extern "C" extern void* __vt__13daRotBridge_c[10];
extern "C" extern void* __vt__17daRotBridge_HIO_c[3];
extern "C" extern void* __vt__14mDoHIO_entry_c[3];

//
// External References:
//

void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoMtx_MtxToRot(f32 const (*)[4], csXyz*);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_setCullSizeBox2(fopAc_ac_c*, J3DModelData*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dBgS_MoveBGProc_TypicalRotY(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void* operator new(u32);
void operator delete(void*);

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_MtxToRot__FPA4_CfP5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
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
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void calcAnmMtx__8J3DModelFv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSVECSquareMag();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u32 __float_nan;
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80CBF668-80CBF66C 0004+00 s=4 e=0 z=0  None .rodata    @3626 */
SECTION_RODATA static u32 const lit_3626 = 0x44BB8000;

/* 80CBF66C-80CBF678 000C+00 s=0 e=0 z=0  None .rodata    l_bmdIdx */
SECTION_RODATA u8 const l_bmdIdx[12] = {
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x08,
};

/* 80CBF678-80CBF684 000C+00 s=1 e=0 z=0  None .rodata    l_dzbIdx */
SECTION_RODATA static u8 const l_dzbIdx[12] = {
    0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0B,
};

/* 80CBF684-80CBF690 000C+00 s=0 e=0 z=0  None .rodata    l_bckIdx */
SECTION_RODATA u8 const l_bckIdx[12] = {
    0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05,
};

/* 80CBF690-80CBF698 0004+04 s=2 e=0 z=0  None .rodata    @3694 */
SECTION_RODATA static u32 const lit_3694[1 + 1 /* padding */] = {
    0x3F800000,
    /* padding */
    0x00000000,
};

/* 80CBF698-80CBF6A0 0008+00 s=1 e=0 z=0  None .rodata    @3776 */
SECTION_RODATA static u8 const lit_3776[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80CBF6A0-80CBF6A4 0004+00 s=1 e=0 z=0  None .rodata    @3833 */
SECTION_RODATA static u32 const lit_3833 = 0xBF800000;

/* 80CBF6A4-80CBF6A8 0004+00 s=0 e=0 z=0  None .rodata    @3878 */
SECTION_RODATA u8 const lit_3878[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80CBF6A8-80CBF6B0 0008+00 s=0 e=0 z=0  None .rodata    @3879 */
SECTION_RODATA u8 const lit_3879[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CBF6B0-80CBF6B8 0008+00 s=0 e=0 z=0  None .rodata    @3880 */
SECTION_RODATA u8 const lit_3880[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CBF6B8-80CBF6C0 0008+00 s=0 e=0 z=0  None .rodata    @3881 */
SECTION_RODATA u8 const lit_3881[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CBF6C0-80CBF6C4 0004+00 s=0 e=0 z=0  None .rodata    @3939 */
SECTION_RODATA u32 const lit_3939 = 0x41200000;

/* 80CBF6C4-80CBF6D8 0014+00 s=1 e=0 z=0  None .rodata    None */
SECTION_RODATA static u8 const struct_80CBF6C4[20] = {
    /* 80CBF6C4 000A stringBase_80CBF6C4 @stringBase0 */
    0x50,
    0x5F,
    0x4D,
    0x62,
    0x72,
    0x69,
    0x64,
    0x67,
    0x65,
    0x00,
    /* 80CBF6CE 000A data_80CBF6CE None */
    0x50,
    0x5F,
    0x4D,
    0x62,
    0x72,
    0x69,
    0x64,
    0x39,
    0x00,
    0x00,
};

/* 80CBF6D8-80CBF6E4 000C+00 s=3 e=0 z=0  None .data      l_resNameIdx */
SECTION_DATA static void* l_resNameIdx[3] = {
    (void*)(((char*)&struct_80CBF6C4) + 0x0) /* @stringBase0 */,
    (void*)(((char*)&struct_80CBF6C4) + 0x0) /* @stringBase0 */,
    (void*)(((char*)&struct_80CBF6C4) + 0xA) /* None */,
};

/* 80CBF6E4-80CBF704 0020+00 s=1 e=0 z=0  None .data      l_daRotBridge_Method */
SECTION_DATA static void* l_daRotBridge_Method[8] = {
    (void*)daRotBridge_Create__FP10fopAc_ac_c,
    (void*)daRotBridge_Delete__FP13daRotBridge_c,
    (void*)daRotBridge_Execute__FP13daRotBridge_c,
    (void*)NULL,
    (void*)daRotBridge_Draw__FP13daRotBridge_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80CBF704-80CBF734 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_RotBridge */
SECTION_DATA void* g_profile_Obj_RotBridge[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00360000, (void*)&g_fpcLf_Method,
    (void*)0x00000610, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01EA0000, (void*)&l_daRotBridge_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80CBF734-80CBF740 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl */
SECTION_DATA void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80CBF740-80CBF768 0028+00 s=1 e=0 z=0  None .data      __vt__13daRotBridge_c */
SECTION_DATA void* __vt__13daRotBridge_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__13daRotBridge_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__13daRotBridge_cFPPA3_A4_f,
    (void*)Draw__13daRotBridge_cFv,
    (void*)Delete__13daRotBridge_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80CBF768-80CBF774 000C+00 s=2 e=0 z=0  None .data      __vt__17daRotBridge_HIO_c */
SECTION_DATA void* __vt__17daRotBridge_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17daRotBridge_HIO_cFv,
};

/* 80CBF774-80CBF780 000C+00 s=3 e=0 z=0  None .data      __vt__14mDoHIO_entry_c */
SECTION_DATA void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80CBE98C-80CBE9DC 0050+00 s=1 e=0 z=0  None .text      __ct__17daRotBridge_HIO_cFv */
//	80CBE98C: 80CBF774 (__vt__14mDoHIO_entry_c)
//	80CBE990: 80CBF774 (__vt__14mDoHIO_entry_c)
//	80CBE998: 80CBF768 (__vt__17daRotBridge_HIO_c)
//	80CBE99C: 80CBF768 (__vt__17daRotBridge_HIO_c)
//	80CBE9BC: 80CBF668 (lit_3626)
//	80CBE9C0: 80CBF668 (lit_3626)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daRotBridge_HIO_c::daRotBridge_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rotBridge/d_a_obj_rotBridge/__ct__17daRotBridge_HIO_cFv.s"
}
#pragma pop

/* 80CBE9DC-80CBEA24 0048+00 s=1 e=0 z=0  None .text      __dt__14mDoHIO_entry_cFv */
//	80CBE9F4: 80CBF774 (__vt__14mDoHIO_entry_c)
//	80CBE9F8: 80CBF774 (__vt__14mDoHIO_entry_c)
//	80CBEA08: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rotBridge/d_a_obj_rotBridge/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 80CBEA24-80CBEB38 0114+00 s=2 e=0 z=0  None .text      setBaseMtx__13daRotBridge_cFv */
//	80CBEA44: 803DD470 (now__14mDoMtx_stack_c)
//	80CBEA48: 803DD470 (now__14mDoMtx_stack_c)
//	80CBEA58: 803468E8 (PSMTXTrans)
//	80CBEA68: 803DD470 (now__14mDoMtx_stack_c)
//	80CBEA6C: 803DD470 (now__14mDoMtx_stack_c)
//	80CBEA74: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80CBEA7C: 803DD470 (now__14mDoMtx_stack_c)
//	80CBEA80: 803DD470 (now__14mDoMtx_stack_c)
//	80CBEA88: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80CBEAA8: 803DD470 (now__14mDoMtx_stack_c)
//	80CBEAAC: 803DD470 (now__14mDoMtx_stack_c)
//	80CBEAB8: 803464B0 (PSMTXCopy)
//	80CBEABC: 803DD470 (now__14mDoMtx_stack_c)
//	80CBEAC0: 803DD470 (now__14mDoMtx_stack_c)
//	80CBEAC8: 803464B0 (PSMTXCopy)
//	80CBEACC: 803DD470 (now__14mDoMtx_stack_c)
//	80CBEAD0: 803DD470 (now__14mDoMtx_stack_c)
//	80CBEAE0: 803468E8 (PSMTXTrans)
//	80CBEAE4: 803DD470 (now__14mDoMtx_stack_c)
//	80CBEAE8: 803DD470 (now__14mDoMtx_stack_c)
//	80CBEAF0: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80CBEB10: 803DD470 (now__14mDoMtx_stack_c)
//	80CBEB14: 803DD470 (now__14mDoMtx_stack_c)
//	80CBEB20: 803464B0 (PSMTXCopy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRotBridge_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rotBridge/d_a_obj_rotBridge/setBaseMtx__13daRotBridge_cFv.s"
}
#pragma pop

/* 80CBEB38-80CBECBC 0184+00 s=1 e=0 z=0  None .text      CreateHeap__13daRotBridge_cFv */
//	80CBEB48: 803621DC (_savegpr_29)
//	80CBEB50: 80CBF668 (lit_3626)
//	80CBEB54: 80CBF668 (lit_3626)
//	80CBEB60: 80CBF6D8 (l_resNameIdx)
//	80CBEB64: 80CBF6D8 (l_resNameIdx)
//	80CBEB74: 804061C0 (g_dComIfG_gameInfo)
//	80CBEB78: 804061C0 (g_dComIfG_gameInfo)
//	80CBEB8C: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80CBEB9C: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
//	80CBEBC0: 80CBF6D8 (l_resNameIdx)
//	80CBEBC4: 80CBF6D8 (l_resNameIdx)
//	80CBEBDC: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80CBEC00: 8000D7DC (init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb)
//	80CBEC24: 802CEC4C (__nw__FUl)
//	80CBEC30: 8007B970 (__ct__4dBgWFv)
//	80CBEC50: 80CBF6D8 (l_resNameIdx)
//	80CBEC54: 80CBF6D8 (l_resNameIdx)
//	80CBEC68: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80CBEC7C: 80079F38 (Set__4cBgWFP6cBgD_tUlPA3_A4_f)
//	80CBECA8: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRotBridge_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rotBridge/d_a_obj_rotBridge/CreateHeap__13daRotBridge_cFv.s"
}
#pragma pop

/* 80CBECBC-80CBEED4 0218+00 s=1 e=0 z=0  None .text      create__13daRotBridge_cFv */
//	80CBECEC: 80078624 (__ct__16dBgS_MoveBgActorFv)
//	80CBECF0: 80CBF740 (__vt__13daRotBridge_c)
//	80CBECF4: 80CBF740 (__vt__13daRotBridge_c)
//	80CBECFC: 80CBF734 (__vt__12J3DFrameCtrl)
//	80CBED00: 80CBF734 (__vt__12J3DFrameCtrl)
//	80CBED10: 803283FC (init__12J3DFrameCtrlFs)
//	80CBED40: 80CBF6D8 (l_resNameIdx)
//	80CBED44: 80CBF6D8 (l_resNameIdx)
//	80CBED4C: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80CBED68: 80CBF6D8 (l_resNameIdx)
//	80CBED6C: 80CBF6D8 (l_resNameIdx)
//	80CBED74: 80CBF678 (l_dzbIdx)
//	80CBED78: 80CBF678 (l_dzbIdx)
//	80CBED80: 80075AD8
//(dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz) 	80CBED84:
//80075AD8
//(dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz) 	80CBED90:
//800787BC
//(MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f)
//	80CBEDA4: 804061C0 (g_dComIfG_gameInfo)
//	80CBEDA8: 804061C0 (g_dComIfG_gameInfo)
//	80CBEDBC: 80035360 (isSwitch__10dSv_info_cCFii)
//	80CBEDC8: 80CBF698 (lit_3776)
//	80CBEDCC: 80CBF698 (lit_3776)
//	80CBEDE8: 80CBF690 (lit_3694)
//	80CBEDEC: 80CBF690 (lit_3694)
//	80CBEE3C: 80327BD4 (calcAnmMtx__8J3DModelFv)
//	80CBEE40: 80CBEF1C (rideCallBack__13daRotBridge_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c)
//	80CBEE44: 80CBEF1C (rideCallBack__13daRotBridge_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c)
//	80CBEE5C: 802681D4 (ChkUsed__9cBgW_BgIdCFv)
//	80CBEE68: 804061C0 (g_dComIfG_gameInfo)
//	80CBEE6C: 804061C0 (g_dComIfG_gameInfo)
//	80CBEE78: 80074250 (Release__4cBgSFP9dBgW_Base)
//	80CBEE80: 8007B9C0 (Move__4dBgWFv)
//	80CBEEAC: 8001A578 (fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData)
//	80CBEEB4: 80CBEA24 (setBaseMtx__13daRotBridge_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRotBridge_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rotBridge/d_a_obj_rotBridge/create__13daRotBridge_cFv.s"
}
#pragma pop

/* 80CBEED4-80CBEF1C 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv */
//	80CBEEEC: 80CBF734 (__vt__12J3DFrameCtrl)
//	80CBEEF0: 80CBF734 (__vt__12J3DFrameCtrl)
//	80CBEF00: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rotBridge/d_a_obj_rotBridge/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80CBEF1C-80CBEF34 0018+00 s=1 e=0 z=0  None .text
 * rideCallBack__13daRotBridge_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRotBridge_c::rideCallBack(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rotBridge/d_a_obj_rotBridge/rideCallBack__13daRotBridge_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c.s"
}
#pragma pop

/* 80CBEF34-80CBF050 011C+00 s=1 e=0 z=0  None .text      Execute__13daRotBridge_cFPPA3_A4_f */
//	80CBEF44: 803621DC (_savegpr_29)
//	80CBEF50: 804061C0 (g_dComIfG_gameInfo)
//	80CBEF54: 804061C0 (g_dComIfG_gameInfo)
//	80CBEF68: 80035360 (isSwitch__10dSv_info_cCFii)
//	80CBEF94: 8002D06C (dComIfGp_getReverb__Fi)
//	80CBEFA8: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CBEFAC: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CBEFC0: 80CBF690 (lit_3694)
//	80CBEFC4: 80CBF690 (lit_3694)
//	80CBEFCC: 80CBF6A0 (lit_3833)
//	80CBEFD0: 80CBF6A0 (lit_3833)
//	80CBEFDC: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80CBEFEC: 804061C0 (g_dComIfG_gameInfo)
//	80CBEFF0: 804061C0 (g_dComIfG_gameInfo)
//	80CBEFFC: 80074A08 (Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c)
//	80CBF004: 8007B9C0 (Move__4dBgWFv)
//	80CBF010: 80CBF050 (playerAreaCheck__13daRotBridge_cFv)
//	80CBF018: 80CBF1EC (moveBridge__13daRotBridge_cFv)
//	80CBF03C: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRotBridge_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rotBridge/d_a_obj_rotBridge/Execute__13daRotBridge_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CBF788-80CBF794 000C+00 s=1 e=0 z=0  None .bss       @3620 */
static u8 lit_3620[12];

/* 80CBF794-80CBF7AC 0018+00 s=3 e=0 z=0  None .bss       l_HIO */
static u8 l_HIO[24];

/* 80CBF050-80CBF1EC 019C+00 s=1 e=0 z=0  None .text      playerAreaCheck__13daRotBridge_cFv */
//	80CBF068: 80CBF668 (lit_3626)
//	80CBF06C: 80CBF668 (lit_3626)
//	80CBF070: 804061C0 (g_dComIfG_gameInfo)
//	80CBF074: 804061C0 (g_dComIfG_gameInfo)
//	80CBF088: 80266B34 (__mi__4cXyzCFRC3Vec)
//	80CBF0B8: 80347138 (PSVECSquareMag)
//	80CBF128: 80450AE0 (__float_nan)
//	80CBF12C: 80450AE0 (__float_nan)
//	80CBF198: 80450AE0 (__float_nan)
//	80CBF19C: 80450AE0 (__float_nan)
//	80CBF1A8: 80CBF794 (l_HIO)
//	80CBF1AC: 80CBF794 (l_HIO)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRotBridge_c::playerAreaCheck() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rotBridge/d_a_obj_rotBridge/playerAreaCheck__13daRotBridge_cFv.s"
}
#pragma pop

/* 80CBF1EC-80CBF404 0218+00 s=1 e=0 z=0  None .text      moveBridge__13daRotBridge_cFv */
//	80CBF204: 80CBF668 (lit_3626)
//	80CBF208: 80CBF668 (lit_3626)
//	80CBF228: 8000CC00 (mDoMtx_MtxToRot__FPA4_CfP5csXyz)
//	80CBF238: 8000D428 (play__14mDoExt_baseAnmFv)
//	80CBF284: 802681D4 (ChkUsed__9cBgW_BgIdCFv)
//	80CBF290: 804061C0 (g_dComIfG_gameInfo)
//	80CBF294: 804061C0 (g_dComIfG_gameInfo)
//	80CBF2A0: 80074250 (Release__4cBgSFP9dBgW_Base)
//	80CBF2A8: 8007B9C0 (Move__4dBgWFv)
//	80CBF2D8: 804061C0 (g_dComIfG_gameInfo)
//	80CBF2DC: 804061C0 (g_dComIfG_gameInfo)
//	80CBF2E4: 80CBF794 (l_HIO)
//	80CBF2E8: 80CBF794 (l_HIO)
//	80CBF2F8: 8006FA24 (StartShock__12dVibration_cFii4cXyz)
//	80CBF30C: 80CBEA24 (setBaseMtx__13daRotBridge_cFv)
//	80CBF35C: 8002D06C (dComIfGp_getReverb__Fi)
//	80CBF370: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CBF374: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CBF39C: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80CBF3A8: 8002D06C (dComIfGp_getReverb__Fi)
//	80CBF3BC: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CBF3C0: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CBF3E8: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRotBridge_c::moveBridge() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rotBridge/d_a_obj_rotBridge/moveBridge__13daRotBridge_cFv.s"
}
#pragma pop

/* 80CBF404-80CBF4BC 00B8+00 s=1 e=0 z=0  None .text      Draw__13daRotBridge_cFv */
//	80CBF41C: 8042CA54 (g_env_light)
//	80CBF420: 8042CA54 (g_env_light)
//	80CBF430: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80CBF434: 8042CA54 (g_env_light)
//	80CBF438: 8042CA54 (g_env_light)
//	80CBF448: 801A4DA0
//(setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c) 	80CBF45C:
// 8000D9CC (entry__13mDoExt_bckAnmFP12J3DModelDataf) 	80CBF460: 804061C0 (g_dComIfG_gameInfo)
//	80CBF464: 804061C0 (g_dComIfG_gameInfo)
//	80CBF46C: 80434AC8 (j3dSys)
//	80CBF470: 80434AC8 (j3dSys)
//	80CBF484: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	80CBF488: 804061C0 (g_dComIfG_gameInfo)
//	80CBF48C: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRotBridge_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rotBridge/d_a_obj_rotBridge/Draw__13daRotBridge_cFv.s"
}
#pragma pop

/* 80CBF4BC-80CBF530 0074+00 s=1 e=0 z=0  None .text      Delete__13daRotBridge_cFv */
//	80CBF4DC: 80CBF6D8 (l_resNameIdx)
//	80CBF4E0: 80CBF6D8 (l_resNameIdx)
//	80CBF4E8: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
//	80CBF4F8: 802681D4 (ChkUsed__9cBgW_BgIdCFv)
//	80CBF504: 804061C0 (g_dComIfG_gameInfo)
//	80CBF508: 804061C0 (g_dComIfG_gameInfo)
//	80CBF514: 80074250 (Release__4cBgSFP9dBgW_Base)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daRotBridge_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rotBridge/d_a_obj_rotBridge/Delete__13daRotBridge_cFv.s"
}
#pragma pop

/* 80CBF530-80CBF55C 002C+00 s=1 e=0 z=0  None .text      daRotBridge_Draw__FP13daRotBridge_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daRotBridge_Draw(daRotBridge_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rotBridge/d_a_obj_rotBridge/daRotBridge_Draw__FP13daRotBridge_c.s"
}
#pragma pop

/* 80CBF55C-80CBF57C 0020+00 s=1 e=0 z=0  None .text      daRotBridge_Execute__FP13daRotBridge_c */
//	80CBF568: 80078950 (MoveBGExecute__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daRotBridge_Execute(daRotBridge_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rotBridge/d_a_obj_rotBridge/daRotBridge_Execute__FP13daRotBridge_c.s"
}
#pragma pop

/* 80CBF57C-80CBF59C 0020+00 s=1 e=0 z=0  None .text      daRotBridge_Delete__FP13daRotBridge_c */
//	80CBF588: 800788DC (MoveBGDelete__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daRotBridge_Delete(daRotBridge_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rotBridge/d_a_obj_rotBridge/daRotBridge_Delete__FP13daRotBridge_c.s"
}
#pragma pop

/* 80CBF59C-80CBF5BC 0020+00 s=1 e=0 z=0  None .text      daRotBridge_Create__FP10fopAc_ac_c */
//	80CBF5A8: 80CBECBC (create__13daRotBridge_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daRotBridge_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rotBridge/d_a_obj_rotBridge/daRotBridge_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80CBF5BC-80CBF618 005C+00 s=2 e=0 z=0  None .text      __dt__17daRotBridge_HIO_cFv */
//	80CBF5D4: 80CBF768 (__vt__17daRotBridge_HIO_c)
//	80CBF5D8: 80CBF768 (__vt__17daRotBridge_HIO_c)
//	80CBF5E4: 80CBF774 (__vt__14mDoHIO_entry_c)
//	80CBF5E8: 80CBF774 (__vt__14mDoHIO_entry_c)
//	80CBF5FC: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daRotBridge_HIO_c::~daRotBridge_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rotBridge/d_a_obj_rotBridge/__dt__17daRotBridge_HIO_cFv.s"
}
#pragma pop

/* 80CBF618-80CBF654 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_rotBridge_cpp */
//	80CBF624: 80CBF794 (l_HIO)
//	80CBF628: 80CBF794 (l_HIO)
//	80CBF62C: 80CBE98C (__ct__17daRotBridge_HIO_cFv)
//	80CBF630: 80CBF5BC (__dt__17daRotBridge_HIO_cFv)
//	80CBF634: 80CBF5BC (__dt__17daRotBridge_HIO_cFv)
//	80CBF638: 80CBF788 (lit_3620)
//	80CBF63C: 80CBF788 (lit_3620)
//	80CBF640: 80CBE918 (__register_global_object)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_obj_rotBridge_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rotBridge/d_a_obj_rotBridge/__sinit_d_a_obj_rotBridge_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80CBF618 = (void*)__sinit_d_a_obj_rotBridge_cpp;
#pragma pop
