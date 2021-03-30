//
// Generated By: dol2asm
// Translation Unit: d_a_obj_window
//

#include "rel/d/a/obj/d_a_obj_window/d_a_obj_window.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct cXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
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

struct daObjWindow_c {
    /* 80D38758 */ void initBaseMtx();
    /* 80D387B8 */ void setBaseMtx();
    /* 80D38840 */ void Create();
    /* 80D388F0 */ void CreateHeap();
    /* 80D38A68 */ void create1st();
    /* 80D38B04 */ void Execute(f32 (**)[3][4]);
    /* 80D38F28 */ void Draw();
    /* 80D39000 */ void Delete();
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

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgW {};

struct csXyz {};

struct cBgS_PolyInfo {};

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

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F200 */ void SetR(f32);
    /* 80D39128 */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80D39170 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80D38A20 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

static void daObjWindow_create1st(daObjWindow_c*);
static void daObjWindow_MoveBGDelete(daObjWindow_c*);
static void daObjWindow_MoveBGExecute(daObjWindow_c*);
static void daObjWindow_MoveBGDraw(daObjWindow_c*);

extern "C" void initBaseMtx__13daObjWindow_cFv();
extern "C" void setBaseMtx__13daObjWindow_cFv();
extern "C" void Create__13daObjWindow_cFv();
extern "C" void CreateHeap__13daObjWindow_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void create1st__13daObjWindow_cFv();
extern "C" void Execute__13daObjWindow_cFPPA3_A4_f();
extern "C" void Draw__13daObjWindow_cFv();
extern "C" void Delete__13daObjWindow_cFv();
extern "C" static void daObjWindow_create1st__FP13daObjWindow_c();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" static void daObjWindow_MoveBGDelete__FP13daObjWindow_c();
extern "C" static void daObjWindow_MoveBGExecute__FP13daObjWindow_c();
extern "C" static void daObjWindow_MoveBGDraw__FP13daObjWindow_c();
extern "C" extern char const* const stringBase0;
extern "C" extern void* g_profile_Obj_Window[12];

//
// External References:
//

void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void* operator new(u32);
void operator delete(void*);

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXMultVec();
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
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* 80D38758-80D387B8 0060+00 s=1 e=0 z=0  None .text      initBaseMtx__13daObjWindow_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWindow_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/initBaseMtx__13daObjWindow_cFv.s"
}
#pragma pop

/* 80D387B8-80D38840 0088+00 s=2 e=0 z=0  None .text      setBaseMtx__13daObjWindow_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWindow_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/setBaseMtx__13daObjWindow_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D3922C-80D39238 000C+00 s=3 e=0 z=0  None .rodata    l_bck */
SECTION_RODATA static u8 const l_bck[12] = {
    0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x06, 0xFF, 0xFF, 0xFF, 0xFF,
};

/* 80D39238-80D3923C 0004+00 s=1 e=0 z=0  None .rodata    @3661 */
SECTION_RODATA static u32 const lit_3661 = 0xC37A0000;

/* 80D3923C-80D39240 0004+00 s=1 e=0 z=0  None .rodata    @3662 */
SECTION_RODATA static u32 const lit_3662 = 0x44160000;

/* 80D39240-80D39244 0004+00 s=1 e=0 z=0  None .rodata    @3663 */
SECTION_RODATA static u32 const lit_3663 = 0x437A0000;

/* 80D39244-80D39248 0004+00 s=2 e=0 z=0  None .rodata    @3664 */
SECTION_RODATA static u8 const lit_3664[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80D39248-80D3924C 0004+00 s=2 e=0 z=0  None .rodata    @3696 */
SECTION_RODATA static u32 const lit_3696 = 0x3F800000;

/* 80D3924C-80D39250 0004+00 s=1 e=0 z=0  None .rodata    @3821 */
SECTION_RODATA static u32 const lit_3821 = 0x43240000;

/* 80D39250-80D39254 0004+00 s=1 e=0 z=0  None .rodata    @3822 */
SECTION_RODATA static u32 const lit_3822 = 0x443D4000;

/* 80D39254-80D39258 0004+00 s=1 e=0 z=0  None .rodata    @3823 */
SECTION_RODATA static u32 const lit_3823 = 0xBF800000;

/* 80D39258-80D3925C 0004+00 s=1 e=0 z=0  None .rodata    @3824 */
SECTION_RODATA static u32 const lit_3824 = 0x42FA0000;

/* 80D3925C-80D39260 0004+00 s=1 e=0 z=0  None .rodata    @3825 */
SECTION_RODATA static u32 const lit_3825 = 0x43840000;

/* 80D39260-80D39264 0004+00 s=1 e=0 z=0  None .rodata    @3826 */
SECTION_RODATA static u32 const lit_3826 = 0x43B60000;

/* 80D39264-80D39268 0004+00 s=1 e=0 z=0  None .rodata    @3827 */
SECTION_RODATA static u32 const lit_3827 = 0x43E80000;

/* 80D39268-80D3926C 0004+00 s=1 e=0 z=0  None .rodata    @3828 */
SECTION_RODATA static u32 const lit_3828 = 0x44080000;

/* 80D3926C-80D39270 0004+00 s=1 e=0 z=0  None .rodata    @3829 */
SECTION_RODATA static u32 const lit_3829 = 0x44328000;

/* 80D39270-80D39274 0004+00 s=1 e=0 z=0  None .rodata    @3830 */
SECTION_RODATA static u32 const lit_3830 = 0x444F4000;

/* 80D39274-80D39278 0004+00 s=1 e=0 z=0  None .rodata    @3831 */
SECTION_RODATA static u32 const lit_3831 = 0xC2480000;

/* 80D39278-80D3927C 0004+00 s=1 e=0 z=0  None .rodata    @3832 */
SECTION_RODATA static u32 const lit_3832 = 0x42A00000;

/* 80D3927C-80D39284 0008+00 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80D3927C = "J_KazeD";
#pragma pop

/* 80D39284-80D39288 0004+00 s=3 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName = (void*)&stringBase0;

/* 80D39288-80D392CC 0044+00 s=1 e=0 z=0  None .data      l_cyl_src */
SECTION_DATA static u8 l_cyl_src[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x79,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00, 0x43, 0xC8, 0x00, 0x00,
};

/* 80D38840-80D388F0 00B0+00 s=1 e=0 z=0  None .text      Create__13daObjWindow_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWindow_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/Create__13daObjWindow_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D392CC-80D392EC 0020+00 s=1 e=0 z=0  None .data      daObjWindow_METHODS */
SECTION_DATA static void* daObjWindow_METHODS[8] = {
    (void*)daObjWindow_create1st__FP13daObjWindow_c,
    (void*)daObjWindow_MoveBGDelete__FP13daObjWindow_c,
    (void*)daObjWindow_MoveBGExecute__FP13daObjWindow_c,
    (void*)NULL,
    (void*)daObjWindow_MoveBGDraw__FP13daObjWindow_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D392EC-80D3931C 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Window */
SECTION_DATA void* g_profile_Obj_Window[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00780000, (void*)&g_fpcLf_Method,
    (void*)0x0000072C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01EB0000, (void*)&daObjWindow_METHODS,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80D3931C-80D39328 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGCyl */
SECTION_DATA static void* __vt__8cM3dGCyl[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80D39328-80D39334 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA static void* __vt__8cM3dGAab[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80D39334-80D39340 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl */
SECTION_DATA static void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80D388F0-80D38A20 0130+00 s=1 e=0 z=0  None .text      CreateHeap__13daObjWindow_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWindow_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/CreateHeap__13daObjWindow_cFv.s"
}
#pragma pop

/* 80D38A20-80D38A68 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80D38A68-80D38B04 009C+00 s=1 e=0 z=0  None .text      create1st__13daObjWindow_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWindow_c::create1st() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/create1st__13daObjWindow_cFv.s"
}
#pragma pop

/* 80D38B04-80D38F28 0424+00 s=1 e=0 z=0  None .text      Execute__13daObjWindow_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWindow_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/Execute__13daObjWindow_cFPPA3_A4_f.s"
}
#pragma pop

/* 80D38F28-80D39000 00D8+00 s=1 e=0 z=0  None .text      Draw__13daObjWindow_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWindow_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/Draw__13daObjWindow_cFv.s"
}
#pragma pop

/* 80D39000-80D39034 0034+00 s=1 e=0 z=0  None .text      Delete__13daObjWindow_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWindow_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/Delete__13daObjWindow_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D39340-80D39368 0028+00 s=1 e=0 z=0  None .data      __vt__13daObjWindow_c */
SECTION_DATA static void* __vt__13daObjWindow_c[10] = {
    (void*)NULL,
    (void*)NULL,
    (void*)CreateHeap__13daObjWindow_cFv,
    (void*)Create__13daObjWindow_cFv,
    (void*)Execute__13daObjWindow_cFPPA3_A4_f,
    (void*)Draw__13daObjWindow_cFv,
    (void*)Delete__13daObjWindow_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80D39034-80D39128 00F4+00 s=1 e=0 z=0  None .text      daObjWindow_create1st__FP13daObjWindow_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjWindow_create1st(daObjWindow_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/daObjWindow_create1st__FP13daObjWindow_c.s"
}
#pragma pop

/* 80D39128-80D39170 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80D39170-80D391B8 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80D391B8-80D391D8 0020+00 s=1 e=0 z=0  None .text daObjWindow_MoveBGDelete__FP13daObjWindow_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjWindow_MoveBGDelete(daObjWindow_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/daObjWindow_MoveBGDelete__FP13daObjWindow_c.s"
}
#pragma pop

/* 80D391D8-80D391F8 0020+00 s=1 e=0 z=0  None .text daObjWindow_MoveBGExecute__FP13daObjWindow_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjWindow_MoveBGExecute(daObjWindow_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/daObjWindow_MoveBGExecute__FP13daObjWindow_c.s"
}
#pragma pop

/* 80D391F8-80D39224 002C+00 s=1 e=0 z=0  None .text      daObjWindow_MoveBGDraw__FP13daObjWindow_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjWindow_MoveBGDraw(daObjWindow_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_window/d_a_obj_window/daObjWindow_MoveBGDraw__FP13daObjWindow_c.s"
}
#pragma pop