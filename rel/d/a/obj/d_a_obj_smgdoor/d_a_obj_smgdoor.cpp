//
// Generated By: dol2asm
// Translation Unit: d_a_obj_smgdoor
//

#include "rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
    /* 80266EF4 */ void normalize();
};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CDD4 */ void transM(cXyz const&);
};

struct fopAc_ac_c {};

struct daObjSmgDoor_c {
    /* 80CDBB5C */ void initBaseMtx();
    /* 80CDBBEC */ void setBaseMtx();
    /* 80CDBD38 */ void Create();
    /* 80CDBE1C */ void CreateHeap();
    /* 80CDBED4 */ void create1st();
    /* 80CDBFA4 */ void Execute(f32 (**)[3][4]);
    /* 80CDBFF0 */ void getDemoAction();
    /* 80CDC038 */ void demoProc();
    /* 80CDC248 */ void openInit();
    /* 80CDC378 */ void openProc();
    /* 80CDC4AC */ void setGoal();
    /* 80CDC548 */ void setPos();
    /* 80CDC610 */ void sceneChange();
    /* 80CDC65C */ void event_proc_call();
    /* 80CDC700 */ void actionWaitEvent();
    /* 80CDC790 */ void actionEvent();
    /* 80CDC7F4 */ void actionDead();
    /* 80CDC7F8 */ void checkArea();
    /* 80CDC974 */ void checkOpen();
    /* 80CDCA00 */ void Draw();
    /* 80CDCAC4 */ void Delete();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
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
    /* 8003C6B8 */ void getObjectResName2Index(char const*, char const*);
};

struct dEvt_control_c {
    /* 80042914 */ void setSkipProc(void*, int (*)(void*, int), int);
};

struct dEvent_manager_c {
    /* 80047758 */ void getEventIdx(fopAc_ac_c*, char const*, u8);
    /* 80047B1C */ void getMyStaffId(char const*, fopAc_ac_c*, int);
    /* 80047D4C */ void getIsAddvance(int);
    /* 80047E10 */ void getMyActIdx(int, char const* const*, int, int, int);
    /* 800480EC */ void getMySubstanceP(int, char const*, int);
    /* 8004817C */ void cutEnd(int);
    /* 800483C4 */ void setGoal(cXyz*);
};

struct dBgW_Base {};

struct dBgW {};

struct cBgS_PolyInfo {};

struct csXyz {};

struct dBgS_MoveBgActor {
    /* 80078624 */ dBgS_MoveBgActor();
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

struct cBgW_BgId {
    /* 802681D4 */ void ChkUsed() const;
};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

//
// Forward References:
//

static void eventCallBack(void*, int);
static void daObjSmgDoor_create1st(daObjSmgDoor_c*);
static void daObjSmgDoor_MoveBGDelete(daObjSmgDoor_c*);
static void daObjSmgDoor_MoveBGExecute(daObjSmgDoor_c*);
static void daObjSmgDoor_MoveBGDraw(daObjSmgDoor_c*);
void cLib_calcTimer__template0(u8*);

extern "C" static void eventCallBack__FPvi();
extern "C" void initBaseMtx__14daObjSmgDoor_cFv();
extern "C" void setBaseMtx__14daObjSmgDoor_cFv();
extern "C" void Create__14daObjSmgDoor_cFv();
extern "C" void CreateHeap__14daObjSmgDoor_cFv();
extern "C" void create1st__14daObjSmgDoor_cFv();
extern "C" void Execute__14daObjSmgDoor_cFPPA3_A4_f();
extern "C" void getDemoAction__14daObjSmgDoor_cFv();
extern "C" void demoProc__14daObjSmgDoor_cFv();
extern "C" void openInit__14daObjSmgDoor_cFv();
extern "C" void openProc__14daObjSmgDoor_cFv();
extern "C" void setGoal__14daObjSmgDoor_cFv();
extern "C" void setPos__14daObjSmgDoor_cFv();
extern "C" void sceneChange__14daObjSmgDoor_cFv();
extern "C" void event_proc_call__14daObjSmgDoor_cFv();
extern "C" void actionWaitEvent__14daObjSmgDoor_cFv();
extern "C" void actionEvent__14daObjSmgDoor_cFv();
extern "C" void actionDead__14daObjSmgDoor_cFv();
extern "C" void checkArea__14daObjSmgDoor_cFv();
extern "C" void checkOpen__14daObjSmgDoor_cFv();
extern "C" void Draw__14daObjSmgDoor_cFv();
extern "C" void Delete__14daObjSmgDoor_cFv();
extern "C" static void daObjSmgDoor_create1st__FP14daObjSmgDoor_c();
extern "C" static void daObjSmgDoor_MoveBGDelete__FP14daObjSmgDoor_c();
extern "C" static void daObjSmgDoor_MoveBGExecute__FP14daObjSmgDoor_c();
extern "C" static void daObjSmgDoor_MoveBGDraw__FP14daObjSmgDoor_c();
extern "C" void func_80CDCBD0();
extern "C" extern u32 const lit_3707;
extern "C" extern u32 const lit_3906;
extern "C" extern u32 const lit_3907;
extern "C" extern u32 const lit_4054;
extern "C" extern u32 const lit_4055;
extern "C" extern u32 const lit_4056;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* l_eventName[2];
extern "C" extern u8 l_cull_box[24];
extern "C" extern void* lit_3924[3];
extern "C" extern void* lit_3925[3];
extern "C" extern void* lit_3926[3];
extern "C" extern u8 data_80CDCD58[36];
extern "C" extern void* g_profile_Obj_SmgDoor[12];
extern "C" extern void* __vt__14daObjSmgDoor_c[10];

//
// External References:
//

void mDoMtx_YrotS(f32 (*)[4], s16);
void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dKy_change_colpat(u8);
void cLib_chaseS(s16*, s16, s16);

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void getObjectResName2Index__14dRes_control_cFPCcPCc();
extern "C" void setSkipProc__14dEvt_control_cFPvPFPvi_ii();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyActIdx__16dEvent_manager_cFiPCPCciii();
extern "C" void getMySubstanceP__16dEvent_manager_cFiPCci();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void setGoal__16dEvent_manager_cFP4cXyz();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_change_colpat__FUc();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void normalize__4cXyzFv();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void cLib_chaseS__FPsss();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void PSMTXCopy();
extern "C" void PSMTXMultVec();
extern "C" void PSVECSquareMag();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" void abs();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 g_meter2_info[248];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 data_80CDCDF8[4];

//
// Declarations:
//

/* 80CDBB38-80CDBB5C 0024+00 s=1 e=0 z=0  None .text      eventCallBack__FPvi */
//	80CDBB44: 80CDC610 (sceneChange__14daObjSmgDoor_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void eventCallBack(void* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/eventCallBack__FPvi.s"
}
#pragma pop

/* 80CDBB5C-80CDBBEC 0090+00 s=1 e=0 z=0  None .text      initBaseMtx__14daObjSmgDoor_cFv */
//	80CDBBAC: 8000CD64 (transS__14mDoMtx_stack_cFRC4cXyz)
//	80CDBBB0: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBBB4: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBBBC: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80CDBBC0: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBBC4: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBBCC: 803464B0 (PSMTXCopy)
//	80CDBBD4: 80CDBBEC (setBaseMtx__14daObjSmgDoor_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSmgDoor_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/initBaseMtx__14daObjSmgDoor_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CDCBF4-80CDCBF8 0004+00 s=3 e=0 z=0  None .rodata    @3705 */
SECTION_RODATA static u32 const lit_3705 = 0xC3110000;

/* 80CDBBEC-80CDBD38 014C+00 s=2 e=0 z=0  None .text      setBaseMtx__14daObjSmgDoor_cFv */
//	80CDBC04: 80CDCBF4 (lit_3705)
//	80CDBC08: 80CDCBF4 (lit_3705)
//	80CDBC20: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBC24: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBC2C: 8000C3DC (mDoMtx_YrotS__FPA4_fs)
//	80CDBC30: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBC34: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBC40: 80346D6C (PSMTXMultVec)
//	80CDBC48: 8000CD64 (transS__14mDoMtx_stack_cFRC4cXyz)
//	80CDBC50: 8000CDD4 (transM__14mDoMtx_stack_cFRC4cXyz)
//	80CDBC54: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBC58: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBC60: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80CDBC64: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBC68: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBC70: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80CDBC74: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBC78: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBC84: 803464B0 (PSMTXCopy)
//	80CDBC9C: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBCA0: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBCA8: 8000C3DC (mDoMtx_YrotS__FPA4_fs)
//	80CDBCAC: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBCB0: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBCBC: 80346D6C (PSMTXMultVec)
//	80CDBCC4: 8000CD64 (transS__14mDoMtx_stack_cFRC4cXyz)
//	80CDBCCC: 8000CDD4 (transM__14mDoMtx_stack_cFRC4cXyz)
//	80CDBCD0: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBCD4: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBCDC: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80CDBCE0: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBCE4: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBCEC: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80CDBCF0: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBCF4: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBCFC: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80CDBD00: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBD04: 803DD470 (now__14mDoMtx_stack_c)
//	80CDBD10: 803464B0 (PSMTXCopy)
//	80CDBD1C: 803464B0 (PSMTXCopy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSmgDoor_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/setBaseMtx__14daObjSmgDoor_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CDCBF8-80CDCBFC 0004+00 s=1 e=0 z=0  None .rodata    @3706 */
SECTION_RODATA static u8 const lit_3706[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80CDCBFC-80CDCC00 0004+00 s=0 e=0 z=0  None .rodata    @3707 */
SECTION_RODATA u32 const lit_3707 = 0x43110000;

/* 80CDCC00-80CDCC04 0004+00 s=1 e=0 z=0  None .rodata    @3722 */
SECTION_RODATA static u32 const lit_3722 = 0x43160000;

/* 80CDCCC4-80CDCCD0 000C+00 s=2 e=0 z=0  None .data      cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CDBD38-80CDBE1C 00E4+00 s=1 e=0 z=0  None .text      Create__14daObjSmgDoor_cFv */
//	80CDBD50: 80CDCCC4 (cNullVec__6Z2Calc)
//	80CDBD54: 80CDCCC4 (cNullVec__6Z2Calc)
//	80CDBD58: 80CDBB5C (initBaseMtx__14daObjSmgDoor_cFv)
//	80CDBD84: 8001A548 (fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff)
//	80CDBD8C: 80CDCC00 (lit_3722)
//	80CDBD90: 80CDCC00 (lit_3722)
//	80CDBDD4: 804061C0 (g_dComIfG_gameInfo)
//	80CDBDD8: 804061C0 (g_dComIfG_gameInfo)
//	80CDBDF8: 80047758 (getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSmgDoor_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/Create__14daObjSmgDoor_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CDCC04-80CDCC08 0004+00 s=3 e=0 z=0  None .rodata    @3825 */
SECTION_RODATA static u32 const lit_3825 = 0x3F800000;

/* 80CDCC08-80CDCC0C 0004+00 s=3 e=0 z=0  None .rodata    @3826 */
SECTION_RODATA static u32 const lit_3826 = 0xBF800000;

/* 80CDCC0C-80CDCC10 0004+00 s=1 e=0 z=0  None .rodata    @3888 */
SECTION_RODATA static u32 const lit_3888 = 0x42700000;

/* 80CDCC10-80CDCC14 0004+00 s=0 e=0 z=0  None .rodata    @3906 */
SECTION_RODATA u32 const lit_3906 = 0x43960000;

/* 80CDCC14-80CDCC18 0004+00 s=0 e=0 z=0  None .rodata    @3907 */
SECTION_RODATA u32 const lit_3907 = 0x437A0000;

/* 80CDCC18-80CDCC1C 0004+00 s=0 e=0 z=0  None .rodata    @4054 */
SECTION_RODATA u32 const lit_4054 = 0x47742400;

/* 80CDCC1C-80CDCC20 0004+00 s=0 e=0 z=0  None .rodata    @4055 */
SECTION_RODATA u32 const lit_4055 = 0x47AFC800;

/* 80CDCC20-80CDCC24 0004+00 s=0 e=0 z=0  None .rodata    @4056 */
SECTION_RODATA u32 const lit_4056 = 0x463D1000;

/* 80CDCC24-80CDCC38 0014+00 s=2 e=0 z=0  None .rodata    None */
SECTION_RODATA static u8 const struct_80CDCC24[20] = {
    /* 80CDCC24 000A stringBase_80CDCC24 @stringBase0 */
    0x41,
    0x5F,
    0x53,
    0x4D,
    0x47,
    0x44,
    0x6F,
    0x6F,
    0x72,
    0x00,
    /* 80CDCC2E 000A data_80CDCC2E None */
    0x41,
    0x5F,
    0x53,
    0x4D,
    0x4B,
    0x44,
    0x6F,
    0x6F,
    0x72,
    0x00,
};

/* 80CDCC38-80CDCC54 001C+00 s=1 e=0 z=0  None .rodata    None */
SECTION_RODATA static u8 const struct_80CDCC38[28] = {
    /* 80CDCC38 000E data_80CDCC38 None */
    0x41,
    0x5F,
    0x53,
    0x4D,
    0x47,
    0x44,
    0x6F,
    0x6F,
    0x72,
    0x2E,
    0x62,
    0x6D,
    0x64,
    0x00,
    /* 80CDCC46 000E data_80CDCC46 None */
    0x41,
    0x5F,
    0x53,
    0x4D,
    0x4B,
    0x44,
    0x6F,
    0x6F,
    0x72,
    0x2E,
    0x62,
    0x6D,
    0x64,
    0x00,
};

/* 80CDCCD0-80CDCCE4 0004+10 s=0 e=0 z=0  None .data      @1787 */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};

/* 80CDCCE4-80CDCCEC 0008+00 s=3 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName[2] = {
    (void*)(((char*)&struct_80CDCC24) + 0x0) /* @stringBase0 */,
    (void*)(((char*)&struct_80CDCC24) + 0xA) /* None */,
};

/* 80CDCCEC-80CDCCF4 0008+00 s=1 e=0 z=0  None .data      l_bmd */
SECTION_DATA static void* l_bmd[2] = {
    (void*)(((char*)&struct_80CDCC38) + 0x0) /* None */,
    (void*)(((char*)&struct_80CDCC38) + 0xE) /* None */,
};

/* 80CDBE1C-80CDBED4 00B8+00 s=1 e=0 z=0  None .text      CreateHeap__14daObjSmgDoor_cFv */
//	80CDBE2C: 803621D4 (_savegpr_27)
//	80CDBE3C: 80CDCCE4 (l_arcName)
//	80CDBE40: 80CDCCE4 (l_arcName)
//	80CDBE48: 80CDCCEC (l_bmd)
//	80CDBE4C: 80CDCCEC (l_bmd)
//	80CDBE54: 804061C0 (g_dComIfG_gameInfo)
//	80CDBE58: 804061C0 (g_dComIfG_gameInfo)
//	80CDBE68: 8003C37C (getRes__14dRes_control_cFPCcPCcP11dRes_info_ci)
//	80CDBE88: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
//	80CDBEC0: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSmgDoor_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/CreateHeap__14daObjSmgDoor_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CDCC54-80CDCC70 001C+00 s=1 e=0 z=0  None .rodata    None */
SECTION_RODATA static u8 const struct_80CDCC54[28] = {
    /* 80CDCC54 000E data_80CDCC54 None */
    0x41,
    0x5F,
    0x53,
    0x4D,
    0x47,
    0x44,
    0x6F,
    0x6F,
    0x72,
    0x2E,
    0x64,
    0x7A,
    0x62,
    0x00,
    /* 80CDCC62 000E data_80CDCC62 None */
    0x41,
    0x5F,
    0x53,
    0x4D,
    0x4B,
    0x44,
    0x6F,
    0x6F,
    0x72,
    0x2E,
    0x64,
    0x7A,
    0x62,
    0x00,
};

/* 80CDCCF4-80CDCCFC 0008+00 s=1 e=0 z=0  None .data      l_dzb */
SECTION_DATA static void* l_dzb[2] = {
    (void*)(((char*)&struct_80CDCC54) + 0x0) /* None */,
    (void*)(((char*)&struct_80CDCC54) + 0xE) /* None */,
};

/* 80CDBED4-80CDBFA4 00D0+00 s=1 e=0 z=0  None .text      create1st__14daObjSmgDoor_cFv */
//	80CDBF00: 80CDCCE4 (l_arcName)
//	80CDBF04: 80CDCCE4 (l_arcName)
//	80CDBF0C: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80CDBF24: 804061C0 (g_dComIfG_gameInfo)
//	80CDBF28: 804061C0 (g_dComIfG_gameInfo)
//	80CDBF30: 80CDCCE4 (l_arcName)
//	80CDBF34: 80CDCCE4 (l_arcName)
//	80CDBF3C: 80CDCCF4 (l_dzb)
//	80CDBF40: 80CDCCF4 (l_dzb)
//	80CDBF4C: 8003C6B8 (getObjectResName2Index__14dRes_control_cFPCcPCc)
//	80CDBF60: 80CDCCE4 (l_arcName)
//	80CDBF64: 80CDCCE4 (l_arcName)
//	80CDBF78: 800787BC
//(MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSmgDoor_c::create1st() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/create1st__14daObjSmgDoor_cFv.s"
}
#pragma pop

/* 80CDBFA4-80CDBFF0 004C+00 s=1 e=0 z=0  None .text      Execute__14daObjSmgDoor_cFPPA3_A4_f */
//	80CDBFC0: 80CDC65C (event_proc_call__14daObjSmgDoor_cFv)
//	80CDBFD0: 80CDBBEC (setBaseMtx__14daObjSmgDoor_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSmgDoor_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/Execute__14daObjSmgDoor_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CDCC70-80CDCC7C 000C+00 s=1 e=0 z=0  None .rodata    None */
SECTION_RODATA static u8 const data_80CDCC70[12] = {
    0x4E, 0x4F, 0x57, 0x5F, 0x44, 0x4F, 0x4F, 0x52, 0x5F, 0x49, 0x4E, 0x00,
};

/* 80CDCC7C-80CDCC88 000C+00 s=1 e=0 z=0  None .rodata    None */
SECTION_RODATA static u8 const data_80CDCC7C[12] = {
    0x4F, 0x4C, 0x44, 0x5F, 0x44, 0x4F, 0x4F, 0x52, 0x5F, 0x49, 0x4E, 0x00,
};

/* 80CDCC88-80CDCCC4 003C+00 s=1 e=0 z=0  None .rodata    None */
SECTION_RODATA static u8 const struct_80CDCC88[60] = {
    /* 80CDCC88 0005 data_80CDCC88 None */
    0x57,
    0x41,
    0x49,
    0x54,
    0x00,
    /* 80CDCC8D 0005 data_80CDCC8D None */
    0x4F,
    0x50,
    0x45,
    0x4E,
    0x00,
    /* 80CDCC92 0008 data_80CDCC92 None */
    0x53,
    0x45,
    0x54,
    0x47,
    0x4F,
    0x41,
    0x4C,
    0x00,
    /* 80CDCC9A 0007 data_80CDCC9A None */
    0x53,
    0x45,
    0x54,
    0x50,
    0x4F,
    0x53,
    0x00,
    /* 80CDCCA1 000A data_80CDCCA1 None */
    0x53,
    0x43,
    0x45,
    0x4E,
    0x45,
    0x5F,
    0x43,
    0x48,
    0x47,
    0x00,
    /* 80CDCCAB 0019 data_80CDCCAB None */
    0x43,
    0x4F,
    0x4C,
    0x4F,
    0x52,
    0x5F,
    0x43,
    0x48,
    0x47,
    0x00,
    0x73,
    0x6D,
    0x67,
    0x64,
    0x6F,
    0x6F,
    0x72,
    0x00,
    0x54,
    0x69,
    0x6D,
    0x65,
    0x72,
    0x00,
    0x00,
};

/* 80CDCCFC-80CDCD04 0008+00 s=0 e=0 z=0  None .data      l_eventName */
SECTION_DATA void* l_eventName[2] = {
    (void*)&data_80CDCC70,
    (void*)&data_80CDCC7C,
};

/* 80CDCD04-80CDCD1C 0018+00 s=0 e=0 z=0  None .data      l_cull_box */
SECTION_DATA u8 l_cull_box[24] = {
    0xC3, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC2, 0x48, 0x00, 0x00,
    0x43, 0x48, 0x00, 0x00, 0x43, 0xC8, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00,
};

/* 80CDCD1C-80CDCD34 0018+00 s=1 e=0 z=0  None .data      action_table$3763 */
SECTION_DATA static void* action_table[6] = {
    (void*)(((char*)&struct_80CDCC88) + 0x0) /* None */,
    (void*)(((char*)&struct_80CDCC88) + 0x5) /* None */,
    (void*)(((char*)&struct_80CDCC88) + 0xA) /* None */,
    (void*)(((char*)&struct_80CDCC88) + 0x12) /* None */,
    (void*)(((char*)&struct_80CDCC88) + 0x19) /* None */,
    (void*)(((char*)&struct_80CDCC88) + 0x23) /* None */,
};

/* 80CDBFF0-80CDC038 0048+00 s=1 e=0 z=0  None .text      getDemoAction__14daObjSmgDoor_cFv */
//	80CDC000: 804061C0 (g_dComIfG_gameInfo)
//	80CDC004: 804061C0 (g_dComIfG_gameInfo)
//	80CDC010: 80CDCD1C (action_table)
//	80CDC014: 80CDCD1C (action_table)
//	80CDC024: 80047E10 (getMyActIdx__16dEvent_manager_cFiPCPCciii)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSmgDoor_c::getDemoAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/getDemoAction__14daObjSmgDoor_cFv.s"
}
#pragma pop

/* 80CDC038-80CDC248 0210+00 s=1 e=0 z=0  None .text      demoProc__14daObjSmgDoor_cFv */
//	80CDC048: 803621DC (_savegpr_29)
//	80CDC050: 804061C0 (g_dComIfG_gameInfo)
//	80CDC054: 804061C0 (g_dComIfG_gameInfo)
//	80CDC060: 80CDCC24 (struct_80CDCC24)
//	80CDC064: 80CDCC24 (struct_80CDCC24)
//	80CDC074: 80047B1C (getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci)
//	80CDC080: 80CDBFF0 (getDemoAction__14daObjSmgDoor_cFv)
//	80CDC090: 80047D4C (getIsAddvance__16dEvent_manager_cFi)
//	80CDC0CC: 80CDCC24 (struct_80CDCC24)
//	80CDC0D0: 80CDCC24 (struct_80CDCC24)
//	80CDC0DC: 800480EC (getMySubstanceP__16dEvent_manager_cFiPCci)
//	80CDC104: 80CDC248 (openInit__14daObjSmgDoor_cFv)
//	80CDC110: 80CDC4AC (setGoal__14daObjSmgDoor_cFv)
//	80CDC11C: 801A87E4 (dKy_change_colpat__FUc)
//	80CDC15C: 80CDCBD0 (func_80CDCBD0)
//	80CDC170: 8004817C (cutEnd__16dEvent_manager_cFi)
//	80CDC17C: 80CDC378 (openProc__14daObjSmgDoor_cFv)
//	80CDC190: 8004817C (cutEnd__16dEvent_manager_cFi)
//	80CDC19C: 80CDC610 (sceneChange__14daObjSmgDoor_cFv)
//	80CDC1B8: 8002D06C (dComIfGp_getReverb__Fi)
//	80CDC1CC: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CDC1D0: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CDC1E4: 80CDCC04 (lit_3825)
//	80CDC1E8: 80CDCC04 (lit_3825)
//	80CDC1F0: 80CDCC08 (lit_3826)
//	80CDC1F4: 80CDCC08 (lit_3826)
//	80CDC200: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80CDC20C: 8004817C (cutEnd__16dEvent_manager_cFi)
//	80CDC228: 8004817C (cutEnd__16dEvent_manager_cFi)
//	80CDC234: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSmgDoor_c::demoProc() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/demoProc__14daObjSmgDoor_cFv.s"
}
#pragma pop

/* 80CDC248-80CDC378 0130+00 s=1 e=0 z=0  None .text      openInit__14daObjSmgDoor_cFv */
//	80CDC268: 802681D4 (ChkUsed__9cBgW_BgIdCFv)
//	80CDC274: 804061C0 (g_dComIfG_gameInfo)
//	80CDC278: 804061C0 (g_dComIfG_gameInfo)
//	80CDC284: 80074250 (Release__4cBgSFP9dBgW_Base)
//	80CDC29C: 8002D06C (dComIfGp_getReverb__Fi)
//	80CDC2B0: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CDC2B4: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CDC2C8: 80CDCC04 (lit_3825)
//	80CDC2CC: 80CDCC04 (lit_3825)
//	80CDC2D4: 80CDCC08 (lit_3826)
//	80CDC2D8: 80CDCC08 (lit_3826)
//	80CDC2E4: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80CDC2FC: 8002D06C (dComIfGp_getReverb__Fi)
//	80CDC310: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CDC314: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CDC328: 80CDCC04 (lit_3825)
//	80CDC32C: 80CDCC04 (lit_3825)
//	80CDC334: 80CDCC08 (lit_3826)
//	80CDC338: 80CDCC08 (lit_3826)
//	80CDC344: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSmgDoor_c::openInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/openInit__14daObjSmgDoor_cFv.s"
}
#pragma pop

/* 80CDC378-80CDC4AC 0134+00 s=1 e=0 z=0  None .text      openProc__14daObjSmgDoor_cFv */
//	80CDC3A0: 802706D0 (cLib_chaseS__FPsss)
//	80CDC3B0: 802706D0 (cLib_chaseS__FPsss)
//	80CDC3DC: 802706D0 (cLib_chaseS__FPsss)
//	80CDC3EC: 802706D0 (cLib_chaseS__FPsss)
//	80CDC404: 802706D0 (cLib_chaseS__FPsss)
//	80CDC414: 802706D0 (cLib_chaseS__FPsss)
//	80CDC430: 8002D06C (dComIfGp_getReverb__Fi)
//	80CDC444: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CDC448: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CDC45C: 80CDCC04 (lit_3825)
//	80CDC460: 80CDCC04 (lit_3825)
//	80CDC468: 80CDCC08 (lit_3826)
//	80CDC46C: 80CDCC08 (lit_3826)
//	80CDC478: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80CDC480: 801A87E4 (dKy_change_colpat__FUc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSmgDoor_c::openProc() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/openProc__14daObjSmgDoor_cFv.s"
}
#pragma pop

/* 80CDC4AC-80CDC548 009C+00 s=1 e=0 z=0  None .text      setGoal__14daObjSmgDoor_cFv */
//	80CDC4C0: 80CDCBF8 (lit_3706)
//	80CDC4C4: 80CDCBF8 (lit_3706)
//	80CDC4D0: 80CDCC0C (lit_3888)
//	80CDC4D4: 80CDCC0C (lit_3888)
//	80CDC4F8: 8000CD64 (transS__14mDoMtx_stack_cFRC4cXyz)
//	80CDC4FC: 803DD470 (now__14mDoMtx_stack_c)
//	80CDC500: 803DD470 (now__14mDoMtx_stack_c)
//	80CDC508: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80CDC50C: 803DD470 (now__14mDoMtx_stack_c)
//	80CDC510: 803DD470 (now__14mDoMtx_stack_c)
//	80CDC51C: 80346D6C (PSMTXMultVec)
//	80CDC520: 804061C0 (g_dComIfG_gameInfo)
//	80CDC524: 804061C0 (g_dComIfG_gameInfo)
//	80CDC530: 800483C4 (setGoal__16dEvent_manager_cFP4cXyz)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSmgDoor_c::setGoal() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/setGoal__14daObjSmgDoor_cFv.s"
}
#pragma pop

/* 80CDC548-80CDC610 00C8+00 s=1 e=0 z=0  None .text      setPos__14daObjSmgDoor_cFv */
//	80CDC560: 80CDCBF4 (lit_3705)
//	80CDC564: 80CDCBF4 (lit_3705)
//	80CDC568: 804061C0 (g_dComIfG_gameInfo)
//	80CDC56C: 804061C0 (g_dComIfG_gameInfo)
//	80CDC5A8: 8000CD64 (transS__14mDoMtx_stack_cFRC4cXyz)
//	80CDC5AC: 803DD470 (now__14mDoMtx_stack_c)
//	80CDC5B0: 803DD470 (now__14mDoMtx_stack_c)
//	80CDC5B8: 8000C434 (mDoMtx_YrotM__FPA4_fs)
//	80CDC5BC: 803DD470 (now__14mDoMtx_stack_c)
//	80CDC5C0: 803DD470 (now__14mDoMtx_stack_c)
//	80CDC5CC: 80346D6C (PSMTXMultVec)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSmgDoor_c::setPos() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/setPos__14daObjSmgDoor_cFv.s"
}
#pragma pop

/* 80CDC610-80CDC65C 004C+00 s=2 e=0 z=0  None .text      sceneChange__14daObjSmgDoor_cFv */
//	80CDC620: 804061C0 (g_dComIfG_gameInfo)
//	80CDC624: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSmgDoor_c::sceneChange() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/sceneChange__14daObjSmgDoor_cFv.s"
}
#pragma pop

/* 80CDC65C-80CDC700 00A4+00 s=1 e=0 z=0  None .text      event_proc_call__14daObjSmgDoor_cFv */
//	80CDC668: 80CDCCC4 (cNullVec__6Z2Calc)
//	80CDC66C: 80CDCCC4 (cNullVec__6Z2Calc)
//	80CDC670: 80CDCDF8 (data_80CDCDF8)
//	80CDC674: 80CDCDF8 (data_80CDCDF8)
//	80CDC6E8: 80362084 (__ptmf_scall)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSmgDoor_c::event_proc_call() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/event_proc_call__14daObjSmgDoor_cFv.s"
}
#pragma pop

/* 80CDC700-80CDC790 0090+00 s=1 e=0 z=0  None .text      actionWaitEvent__14daObjSmgDoor_cFv */
//	80CDC74C: 80CDC548 (setPos__14daObjSmgDoor_cFv)
//	80CDC754: 80CDC974 (checkOpen__14daObjSmgDoor_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSmgDoor_c::actionWaitEvent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/actionWaitEvent__14daObjSmgDoor_cFv.s"
}
#pragma pop

/* 80CDC790-80CDC7F4 0064+00 s=1 e=0 z=0  None .text      actionEvent__14daObjSmgDoor_cFv */
//	80CDC7A4: 80430188 (g_meter2_info)
//	80CDC7A8: 80430188 (g_meter2_info)
//	80CDC7B8: 804061C0 (g_dComIfG_gameInfo)
//	80CDC7BC: 804061C0 (g_dComIfG_gameInfo)
//	80CDC7C8: 80CDBB38 (eventCallBack__FPvi)
//	80CDC7CC: 80CDBB38 (eventCallBack__FPvi)
//	80CDC7D4: 80042914 (setSkipProc__14dEvt_control_cFPvPFPvi_ii)
//	80CDC7DC: 80CDC038 (demoProc__14daObjSmgDoor_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSmgDoor_c::actionEvent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/actionEvent__14daObjSmgDoor_cFv.s"
}
#pragma pop

/* 80CDC7F4-80CDC7F8 0004+00 s=1 e=0 z=0  None .text      actionDead__14daObjSmgDoor_cFv */
void daObjSmgDoor_c::actionDead() {
    /* empty function */
}

/* 80CDC7F8-80CDC974 017C+00 s=1 e=0 z=0  None .text      checkArea__14daObjSmgDoor_cFv */
//	80CDC810: 803621DC (_savegpr_29)
//	80CDC818: 80CDCBF4 (lit_3705)
//	80CDC81C: 80CDCBF4 (lit_3705)
//	80CDC820: 804061C0 (g_dComIfG_gameInfo)
//	80CDC824: 804061C0 (g_dComIfG_gameInfo)
//	80CDC858: 80266B34 (__mi__4cXyzCFRC3Vec)
//	80CDC888: 80347138 (PSVECSquareMag)
//	80CDC890: 80439A20 (sincosTable___5JMath)
//	80CDC894: 80439A20 (sincosTable___5JMath)
//	80CDC8D8: 80266EF4 (normalize__4cXyzFv)
//	80CDC93C: 803650D0 (abs)
//	80CDC960: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSmgDoor_c::checkArea() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/checkArea__14daObjSmgDoor_cFv.s"
}
#pragma pop

/* 80CDC974-80CDCA00 008C+00 s=1 e=0 z=0  None .text      checkOpen__14daObjSmgDoor_cFv */
//	80CDC998: 804061C0 (g_dComIfG_gameInfo)
//	80CDC99C: 804061C0 (g_dComIfG_gameInfo)
//	80CDC9A8: 80035360 (isSwitch__10dSv_info_cCFii)
//	80CDC9BC: 804061C0 (g_dComIfG_gameInfo)
//	80CDC9C0: 804061C0 (g_dComIfG_gameInfo)
//	80CDC9E0: 80CDC7F8 (checkArea__14daObjSmgDoor_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSmgDoor_c::checkOpen() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/checkOpen__14daObjSmgDoor_cFv.s"
}
#pragma pop

/* 80CDCA00-80CDCAC4 00C4+00 s=1 e=0 z=0  None .text      Draw__14daObjSmgDoor_cFv */
//	80CDCA18: 8042CA54 (g_env_light)
//	80CDCA1C: 8042CA54 (g_env_light)
//	80CDCA2C: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80CDCA30: 8042CA54 (g_env_light)
//	80CDCA34: 8042CA54 (g_env_light)
//	80CDCA44: 801A4DA0
//(setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c) 	80CDCA48:
// 8042CA54 (g_env_light) 	80CDCA4C: 8042CA54 (g_env_light) 	80CDCA5C: 801A4DA0
//(setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c) 	80CDCA60:
// 804061C0 (g_dComIfG_gameInfo) 	80CDCA64: 804061C0 (g_dComIfG_gameInfo) 	80CDCA6C: 80434AC8
// (j3dSys) 	80CDCA70: 80434AC8 (j3dSys) 	80CDCA84: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	80CDCA8C: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	80CDCA90: 804061C0 (g_dComIfG_gameInfo)
//	80CDCA94: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSmgDoor_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/Draw__14daObjSmgDoor_cFv.s"
}
#pragma pop

/* 80CDCAC4-80CDCB04 0040+00 s=1 e=0 z=0  None .text      Delete__14daObjSmgDoor_cFv */
//	80CDCAE0: 80CDCCE4 (l_arcName)
//	80CDCAE4: 80CDCCE4 (l_arcName)
//	80CDCAEC: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjSmgDoor_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/Delete__14daObjSmgDoor_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CDCD34-80CDCD40 000C+00 s=0 e=0 z=0  None .data      @3924 */
SECTION_DATA void* lit_3924[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWaitEvent__14daObjSmgDoor_cFv,
};

/* 80CDCD40-80CDCD4C 000C+00 s=0 e=0 z=0  None .data      @3925 */
SECTION_DATA void* lit_3925[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionEvent__14daObjSmgDoor_cFv,
};

/* 80CDCD4C-80CDCD58 000C+00 s=0 e=0 z=0  None .data      @3926 */
SECTION_DATA void* lit_3926[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionDead__14daObjSmgDoor_cFv,
};

/* 80CDCD58-80CDCD7C 0024+00 s=0 e=0 z=0  None .data      l_func$3923 */
SECTION_DATA u8 data_80CDCD58[36] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CDCD7C-80CDCD9C 0020+00 s=1 e=0 z=0  None .data      daObjSmgDoor_METHODS */
SECTION_DATA static void* daObjSmgDoor_METHODS[8] = {
    (void*)daObjSmgDoor_create1st__FP14daObjSmgDoor_c,
    (void*)daObjSmgDoor_MoveBGDelete__FP14daObjSmgDoor_c,
    (void*)daObjSmgDoor_MoveBGExecute__FP14daObjSmgDoor_c,
    (void*)NULL,
    (void*)daObjSmgDoor_MoveBGDraw__FP14daObjSmgDoor_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80CDCD9C-80CDCDCC 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_SmgDoor */
SECTION_DATA void* g_profile_Obj_SmgDoor[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00AB0000, (void*)&g_fpcLf_Method,
    (void*)0x000005F4, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02290000, (void*)&daObjSmgDoor_METHODS,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80CDCDCC-80CDCDF4 0028+00 s=1 e=0 z=0  None .data      __vt__14daObjSmgDoor_c */
SECTION_DATA void* __vt__14daObjSmgDoor_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__14daObjSmgDoor_cFv,
    (void*)Create__14daObjSmgDoor_cFv,
    (void*)Execute__14daObjSmgDoor_cFPPA3_A4_f,
    (void*)Draw__14daObjSmgDoor_cFv,
    (void*)Delete__14daObjSmgDoor_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80CDCB04-80CDCB64 0060+00 s=1 e=0 z=0  None .text      daObjSmgDoor_create1st__FP14daObjSmgDoor_c
 */
//	80CDCB2C: 80078624 (__ct__16dBgS_MoveBgActorFv)
//	80CDCB30: 80CDCDCC (__vt__14daObjSmgDoor_c)
//	80CDCB34: 80CDCDCC (__vt__14daObjSmgDoor_c)
//	80CDCB4C: 80CDBED4 (create1st__14daObjSmgDoor_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjSmgDoor_create1st(daObjSmgDoor_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/daObjSmgDoor_create1st__FP14daObjSmgDoor_c.s"
}
#pragma pop

/* 80CDCB64-80CDCB84 0020+00 s=1 e=0 z=0  None .text daObjSmgDoor_MoveBGDelete__FP14daObjSmgDoor_c
 */
//	80CDCB70: 800788DC (MoveBGDelete__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjSmgDoor_MoveBGDelete(daObjSmgDoor_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/daObjSmgDoor_MoveBGDelete__FP14daObjSmgDoor_c.s"
}
#pragma pop

/* 80CDCB84-80CDCBA4 0020+00 s=1 e=0 z=0  None .text
 * daObjSmgDoor_MoveBGExecute__FP14daObjSmgDoor_c               */
//	80CDCB90: 80078950 (MoveBGExecute__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjSmgDoor_MoveBGExecute(daObjSmgDoor_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/daObjSmgDoor_MoveBGExecute__FP14daObjSmgDoor_c.s"
}
#pragma pop

/* 80CDCBA4-80CDCBD0 002C+00 s=1 e=0 z=0  None .text daObjSmgDoor_MoveBGDraw__FP14daObjSmgDoor_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjSmgDoor_MoveBGDraw(daObjSmgDoor_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/daObjSmgDoor_MoveBGDraw__FP14daObjSmgDoor_c.s"
}
#pragma pop

/* 80CDCBD0-80CDCBEC 001C+00 s=1 e=0 z=0  None .text      cLib_calcTimer<Uc>__FPUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cLib_calcTimer__template0(u8* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smgdoor/d_a_obj_smgdoor/func_80CDCBD0.s"
}
#pragma pop
