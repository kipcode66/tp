//
// Generated By: dol2asm
// Translation Unit: d_a_obj_waterGate
//

#include "rel/d/a/obj/d_a_obj_waterGate/d_a_obj_waterGate.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoHIO_entry_c {
    /* 80D2BBC4 */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {};

struct daWtGate_c {
    /* 80D2BC0C */ void setBaseMtx();
    /* 80D2BC94 */ void CreateHeap();
    /* 80D2BD00 */ void create();
    /* 80D2BE7C */ void Execute(f32 (**)[3][4]);
    /* 80D2BECC */ void move();
    /* 80D2BF88 */ void init_modeWait();
    /* 80D2BF94 */ void modeWait();
    /* 80D2C010 */ void init_modeOpen();
    /* 80D2C02C */ void modeOpen();
    /* 80D2C134 */ void init_modeClose();
    /* 80D2C150 */ void modeClose();
    /* 80D2C250 */ void init_modeEnd();
    /* 80D2C25C */ void modeEnd();
    /* 80D2C260 */ void Draw();
    /* 80D2C304 */ void Delete();
};

struct daWtGate_HIO_c {
    /* 80D2BB8C */ daWtGate_HIO_c();
    /* 80D2C3C0 */ ~daWtGate_HIO_c();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
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

struct dBgW {};

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

static void daWtGate_Draw(daWtGate_c*);
static void daWtGate_Execute(daWtGate_c*);
static void daWtGate_Delete(daWtGate_c*);
static void daWtGate_Create(fopAc_ac_c*);

extern "C" void __ct__14daWtGate_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__10daWtGate_cFv();
extern "C" void CreateHeap__10daWtGate_cFv();
extern "C" void create__10daWtGate_cFv();
extern "C" void Execute__10daWtGate_cFPPA3_A4_f();
extern "C" void move__10daWtGate_cFv();
extern "C" void init_modeWait__10daWtGate_cFv();
extern "C" void modeWait__10daWtGate_cFv();
extern "C" void init_modeOpen__10daWtGate_cFv();
extern "C" void modeOpen__10daWtGate_cFv();
extern "C" void init_modeClose__10daWtGate_cFv();
extern "C" void modeClose__10daWtGate_cFv();
extern "C" void init_modeEnd__10daWtGate_cFv();
extern "C" void modeEnd__10daWtGate_cFv();
extern "C" void Draw__10daWtGate_cFv();
extern "C" void Delete__10daWtGate_cFv();
extern "C" static void daWtGate_Draw__FP10daWtGate_c();
extern "C" static void daWtGate_Execute__FP10daWtGate_c();
extern "C" static void daWtGate_Delete__FP10daWtGate_c();
extern "C" static void daWtGate_Create__FP10fopAc_ac_c();
extern "C" void __dt__14daWtGate_HIO_cFv();
extern "C" void __sinit_d_a_obj_waterGate_cpp();
extern "C" extern u32 const lit_3781;
extern "C" extern u32 const lit_3782;
extern "C" extern u8 const lit_3783[4];
extern "C" extern u32 const lit_3784;
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* lit_3728[3];
extern "C" extern void* lit_3729[3];
extern "C" extern void* lit_3730[3];
extern "C" extern void* lit_3731[3];
extern "C" extern u8 data_80D2C4E8[48];
extern "C" extern void* g_profile_Obj_WtGate[12];
extern "C" extern void* __vt__10daWtGate_c[10];
extern "C" extern void* __vt__14daWtGate_HIO_c[3];
extern "C" extern void* __vt__14mDoHIO_entry_c[3];

//
// External References:
//

void mDoMtx_ZXYrotM(f32 (*)[4], s16, s16, s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_setCullSizeBox2(fopAc_ac_c*, J3DModelData*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dBgS_MoveBGProc_TypicalRotY(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void cLib_addCalc(f32*, f32, f32, f32, f32);
void operator delete(void*);

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
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
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __ptmf_scall();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80D2C46C-80D2C470 0004+00 s=3 e=0 z=0  None .rodata    @3625 */
SECTION_RODATA static u32 const lit_3625 = 0x40800000;

/* 80D2C498-80D2C4A4 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D2C4A4-80D2C4B8 0004+10 s=0 e=0 z=0  None .data      @1787 */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};

/* 80D2C4B8-80D2C4C4 000C+00 s=0 e=0 z=0  None .data      @3728 */
SECTION_DATA void* lit_3728[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__10daWtGate_cFv,
};

/* 80D2C4C4-80D2C4D0 000C+00 s=0 e=0 z=0  None .data      @3729 */
SECTION_DATA void* lit_3729[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeOpen__10daWtGate_cFv,
};

/* 80D2C4D0-80D2C4DC 000C+00 s=0 e=0 z=0  None .data      @3730 */
SECTION_DATA void* lit_3730[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeClose__10daWtGate_cFv,
};

/* 80D2C4DC-80D2C4E8 000C+00 s=0 e=0 z=0  None .data      @3731 */
SECTION_DATA void* lit_3731[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeEnd__10daWtGate_cFv,
};

/* 80D2C4E8-80D2C518 0030+00 s=0 e=0 z=0  None .data      mode_proc$3727 */
SECTION_DATA u8 data_80D2C4E8[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D2C518-80D2C538 0020+00 s=1 e=0 z=0  None .data      l_daWtGate_Method */
SECTION_DATA static void* l_daWtGate_Method[8] = {
    (void*)daWtGate_Create__FP10fopAc_ac_c,
    (void*)daWtGate_Delete__FP10daWtGate_c,
    (void*)daWtGate_Execute__FP10daWtGate_c,
    (void*)NULL,
    (void*)daWtGate_Draw__FP10daWtGate_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D2C538-80D2C568 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_WtGate */
SECTION_DATA void* g_profile_Obj_WtGate[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00480000, (void*)&g_fpcLf_Method,
    (void*)0x000005BC, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x020A0000, (void*)&l_daWtGate_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80D2C568-80D2C590 0028+00 s=1 e=0 z=0  None .data      __vt__10daWtGate_c */
SECTION_DATA void* __vt__10daWtGate_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__10daWtGate_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__10daWtGate_cFPPA3_A4_f,
    (void*)Draw__10daWtGate_cFv,
    (void*)Delete__10daWtGate_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80D2C590-80D2C59C 000C+00 s=2 e=0 z=0  None .data      __vt__14daWtGate_HIO_c */
SECTION_DATA void* __vt__14daWtGate_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14daWtGate_HIO_cFv,
};

/* 80D2C59C-80D2C5A8 000C+00 s=3 e=0 z=0  None .data      __vt__14mDoHIO_entry_c */
SECTION_DATA void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80D2BB8C-80D2BBC4 0038+00 s=1 e=0 z=0  None .text      __ct__14daWtGate_HIO_cFv */
//	80D2BB8C: 80D2C59C (__vt__14mDoHIO_entry_c)
//	80D2BB90: 80D2C59C (__vt__14mDoHIO_entry_c)
//	80D2BB98: 80D2C590 (__vt__14daWtGate_HIO_c)
//	80D2BB9C: 80D2C590 (__vt__14daWtGate_HIO_c)
//	80D2BBA4: 80D2C46C (lit_3625)
//	80D2BBA8: 80D2C46C (lit_3625)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daWtGate_HIO_c::daWtGate_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_waterGate/d_a_obj_waterGate/__ct__14daWtGate_HIO_cFv.s"
}
#pragma pop

/* 80D2BBC4-80D2BC0C 0048+00 s=1 e=0 z=0  None .text      __dt__14mDoHIO_entry_cFv */
//	80D2BBDC: 80D2C59C (__vt__14mDoHIO_entry_c)
//	80D2BBE0: 80D2C59C (__vt__14mDoHIO_entry_c)
//	80D2BBF0: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_waterGate/d_a_obj_waterGate/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 80D2BC0C-80D2BC94 0088+00 s=2 e=0 z=0  None .text      setBaseMtx__10daWtGate_cFv */
//	80D2BC20: 803DD470 (now__14mDoMtx_stack_c)
//	80D2BC24: 803DD470 (now__14mDoMtx_stack_c)
//	80D2BC34: 803468E8 (PSMTXTrans)
//	80D2BC38: 803DD470 (now__14mDoMtx_stack_c)
//	80D2BC3C: 803DD470 (now__14mDoMtx_stack_c)
//	80D2BC4C: 8000C2A0 (mDoMtx_ZXYrotM__FPA4_fsss)
//	80D2BC6C: 803DD470 (now__14mDoMtx_stack_c)
//	80D2BC70: 803DD470 (now__14mDoMtx_stack_c)
//	80D2BC7C: 803464B0 (PSMTXCopy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWtGate_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_waterGate/d_a_obj_waterGate/setBaseMtx__10daWtGate_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D2C470-80D2C474 0004+00 s=1 e=0 z=0  None .rodata    @3712 */
SECTION_RODATA static u32 const lit_3712 = 0x41200000;

/* 80D2C474-80D2C47C 0008+00 s=1 e=0 z=0  None .rodata    @3714 */
SECTION_RODATA static u8 const lit_3714[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D2C47C-80D2C480 0004+00 s=0 e=0 z=0  None .rodata    @3781 */
SECTION_RODATA u32 const lit_3781 = 0x3E4CCCCD;

/* 80D2C480-80D2C484 0004+00 s=0 e=0 z=0  None .rodata    @3782 */
SECTION_RODATA u32 const lit_3782 = 0x3F800000;

/* 80D2C484-80D2C488 0004+00 s=0 e=0 z=0  None .rodata    @3783 */
SECTION_RODATA u8 const lit_3783[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80D2C488-80D2C48C 0004+00 s=0 e=0 z=0  None .rodata    @3784 */
SECTION_RODATA u32 const lit_3784 = 0xBF800000;

/* 80D2C48C-80D2C496 000A+00 s=3 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80D2C48C = "S_Zsuimon";
#pragma pop

/* 80D2BC94-80D2BD00 006C+00 s=1 e=0 z=0  None .text      CreateHeap__10daWtGate_cFv */
//	80D2BCA8: 80D2C48C (stringBase0)
//	80D2BCAC: 80D2C48C (stringBase0)
//	80D2BCB4: 804061C0 (g_dComIfG_gameInfo)
//	80D2BCB8: 804061C0 (g_dComIfG_gameInfo)
//	80D2BCC8: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80D2BCD8: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWtGate_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_waterGate/d_a_obj_waterGate/CreateHeap__10daWtGate_cFv.s"
}
#pragma pop

/* 80D2BD00-80D2BE7C 017C+00 s=1 e=0 z=0  None .text      create__10daWtGate_cFv */
//	80D2BD2C: 80078624 (__ct__16dBgS_MoveBgActorFv)
//	80D2BD30: 80D2C568 (__vt__10daWtGate_c)
//	80D2BD34: 80D2C568 (__vt__10daWtGate_c)
//	80D2BD4C: 80D2C48C (stringBase0)
//	80D2BD50: 80D2C48C (stringBase0)
//	80D2BD54: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80D2BD68: 80D2C48C (stringBase0)
//	80D2BD6C: 80D2C48C (stringBase0)
//	80D2BD74: 80075AD8
//(dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz) 	80D2BD78:
//80075AD8
//(dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz) 	80D2BD84:
//800787BC
//(MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f)
//	80D2BDB0: 8001A578 (fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData)
//	80D2BDB4: 80D2C470 (lit_3712)
//	80D2BDB8: 80D2C470 (lit_3712)
//	80D2BDC4: 80D2C474 (lit_3714)
//	80D2BDC8: 80D2C474 (lit_3714)
//	80D2BE0C: 80D2C250 (init_modeEnd__10daWtGate_cFv)
//	80D2BE14: 804061C0 (g_dComIfG_gameInfo)
//	80D2BE18: 804061C0 (g_dComIfG_gameInfo)
//	80D2BE24: 80035360 (isSwitch__10dSv_info_cCFii)
//	80D2BE54: 80D2BF88 (init_modeWait__10daWtGate_cFv)
//	80D2BE5C: 80D2BC0C (setBaseMtx__10daWtGate_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWtGate_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_waterGate/d_a_obj_waterGate/create__10daWtGate_cFv.s"
}
#pragma pop

/* 80D2BE7C-80D2BECC 0050+00 s=1 e=0 z=0  None .text      Execute__10daWtGate_cFPPA3_A4_f */
//	80D2BE98: 80D2BECC (move__10daWtGate_cFv)
//	80D2BEAC: 80D2BC0C (setBaseMtx__10daWtGate_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWtGate_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_waterGate/d_a_obj_waterGate/Execute__10daWtGate_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D2C5B0-80D2C5BC 000C+00 s=1 e=0 z=0  None .bss       @3619 */
static u8 lit_3619[12];

/* 80D2C5BC-80D2C5C8 000C+00 s=3 e=0 z=0  None .bss       l_HIO */
static u8 l_HIO[12];

/* 80D2C5C8-80D2C5CC 0004+00 s=1 e=0 z=0  None .bss       None */
static u8 data_80D2C5C8[4];

/* 80D2BECC-80D2BF88 00BC+00 s=1 e=0 z=0  None .text      move__10daWtGate_cFv */
//	80D2BED8: 80D2C498 (cNullVec__6Z2Calc)
//	80D2BEDC: 80D2C498 (cNullVec__6Z2Calc)
//	80D2BEE0: 80D2C5C8 (data_80D2C5C8)
//	80D2BEE4: 80D2C5C8 (data_80D2C5C8)
//	80D2BF70: 80362084 (__ptmf_scall)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWtGate_c::move() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_waterGate/d_a_obj_waterGate/move__10daWtGate_cFv.s"
}
#pragma pop

/* 80D2BF88-80D2BF94 000C+00 s=3 e=0 z=0  None .text      init_modeWait__10daWtGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWtGate_c::init_modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_waterGate/d_a_obj_waterGate/init_modeWait__10daWtGate_cFv.s"
}
#pragma pop

/* 80D2BF94-80D2C010 007C+00 s=1 e=0 z=0  None .text      modeWait__10daWtGate_cFv */
//	80D2BFAC: 804061C0 (g_dComIfG_gameInfo)
//	80D2BFB0: 804061C0 (g_dComIfG_gameInfo)
//	80D2BFC4: 80035360 (isSwitch__10dSv_info_cCFii)
//	80D2BFE4: 80D2C010 (init_modeOpen__10daWtGate_cFv)
//	80D2BFF0: 80D2C134 (init_modeClose__10daWtGate_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWtGate_c::modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_waterGate/d_a_obj_waterGate/modeWait__10daWtGate_cFv.s"
}
#pragma pop

/* 80D2C010-80D2C02C 001C+00 s=1 e=0 z=0  None .text      init_modeOpen__10daWtGate_cFv */
//	80D2C010: 80D2C5BC (l_HIO)
//	80D2C014: 80D2C5BC (l_HIO)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWtGate_c::init_modeOpen() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_waterGate/d_a_obj_waterGate/init_modeOpen__10daWtGate_cFv.s"
}
#pragma pop

/* 80D2C02C-80D2C134 0108+00 s=1 e=0 z=0  None .text      modeOpen__10daWtGate_cFv */
//	80D2C044: 80D2C46C (lit_3625)
//	80D2C048: 80D2C46C (lit_3625)
//	80D2C068: 8026F97C (cLib_addCalc__FPfffff)
//	80D2C080: 8002D06C (dComIfGp_getReverb__Fi)
//	80D2C094: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D2C098: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D2C0C0: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80D2C0C8: 80D2BF88 (init_modeWait__10daWtGate_cFv)
//	80D2C0D8: 8002D06C (dComIfGp_getReverb__Fi)
//	80D2C0EC: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D2C0F0: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D2C118: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWtGate_c::modeOpen() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_waterGate/d_a_obj_waterGate/modeOpen__10daWtGate_cFv.s"
}
#pragma pop

/* 80D2C134-80D2C150 001C+00 s=1 e=0 z=0  None .text      init_modeClose__10daWtGate_cFv */
//	80D2C134: 80D2C5BC (l_HIO)
//	80D2C138: 80D2C5BC (l_HIO)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWtGate_c::init_modeClose() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_waterGate/d_a_obj_waterGate/init_modeClose__10daWtGate_cFv.s"
}
#pragma pop

/* 80D2C150-80D2C250 0100+00 s=1 e=0 z=0  None .text      modeClose__10daWtGate_cFv */
//	80D2C168: 80D2C46C (lit_3625)
//	80D2C16C: 80D2C46C (lit_3625)
//	80D2C184: 8026F97C (cLib_addCalc__FPfffff)
//	80D2C19C: 8002D06C (dComIfGp_getReverb__Fi)
//	80D2C1B0: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D2C1B4: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D2C1DC: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80D2C1E4: 80D2BF88 (init_modeWait__10daWtGate_cFv)
//	80D2C1F4: 8002D06C (dComIfGp_getReverb__Fi)
//	80D2C208: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D2C20C: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80D2C234: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWtGate_c::modeClose() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_waterGate/d_a_obj_waterGate/modeClose__10daWtGate_cFv.s"
}
#pragma pop

/* 80D2C250-80D2C25C 000C+00 s=1 e=0 z=0  None .text      init_modeEnd__10daWtGate_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWtGate_c::init_modeEnd() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_waterGate/d_a_obj_waterGate/init_modeEnd__10daWtGate_cFv.s"
}
#pragma pop

/* 80D2C25C-80D2C260 0004+00 s=1 e=0 z=0  None .text      modeEnd__10daWtGate_cFv */
void daWtGate_c::modeEnd() {
    /* empty function */
}

/* 80D2C260-80D2C304 00A4+00 s=1 e=0 z=0  None .text      Draw__10daWtGate_cFv */
//	80D2C278: 8042CA54 (g_env_light)
//	80D2C27C: 8042CA54 (g_env_light)
//	80D2C28C: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80D2C290: 8042CA54 (g_env_light)
//	80D2C294: 8042CA54 (g_env_light)
//	80D2C2A4: 801A4DA0
//(setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c) 	80D2C2A8:
// 804061C0 (g_dComIfG_gameInfo) 	80D2C2AC: 804061C0 (g_dComIfG_gameInfo) 	80D2C2B4: 80434AC8
// (j3dSys) 	80D2C2B8: 80434AC8 (j3dSys) 	80D2C2CC: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	80D2C2D0: 804061C0 (g_dComIfG_gameInfo)
//	80D2C2D4: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWtGate_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_waterGate/d_a_obj_waterGate/Draw__10daWtGate_cFv.s"
}
#pragma pop

/* 80D2C304-80D2C334 0030+00 s=1 e=0 z=0  None .text      Delete__10daWtGate_cFv */
//	80D2C310: 80D2C48C (stringBase0)
//	80D2C314: 80D2C48C (stringBase0)
//	80D2C31C: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daWtGate_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_waterGate/d_a_obj_waterGate/Delete__10daWtGate_cFv.s"
}
#pragma pop

/* 80D2C334-80D2C360 002C+00 s=1 e=0 z=0  None .text      daWtGate_Draw__FP10daWtGate_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daWtGate_Draw(daWtGate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_waterGate/d_a_obj_waterGate/daWtGate_Draw__FP10daWtGate_c.s"
}
#pragma pop

/* 80D2C360-80D2C380 0020+00 s=1 e=0 z=0  None .text      daWtGate_Execute__FP10daWtGate_c */
//	80D2C36C: 80078950 (MoveBGExecute__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daWtGate_Execute(daWtGate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_waterGate/d_a_obj_waterGate/daWtGate_Execute__FP10daWtGate_c.s"
}
#pragma pop

/* 80D2C380-80D2C3A0 0020+00 s=1 e=0 z=0  None .text      daWtGate_Delete__FP10daWtGate_c */
//	80D2C38C: 800788DC (MoveBGDelete__16dBgS_MoveBgActorFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daWtGate_Delete(daWtGate_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_waterGate/d_a_obj_waterGate/daWtGate_Delete__FP10daWtGate_c.s"
}
#pragma pop

/* 80D2C3A0-80D2C3C0 0020+00 s=1 e=0 z=0  None .text      daWtGate_Create__FP10fopAc_ac_c */
//	80D2C3AC: 80D2BD00 (create__10daWtGate_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daWtGate_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_waterGate/d_a_obj_waterGate/daWtGate_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D2C3C0-80D2C41C 005C+00 s=2 e=0 z=0  None .text      __dt__14daWtGate_HIO_cFv */
//	80D2C3D8: 80D2C590 (__vt__14daWtGate_HIO_c)
//	80D2C3DC: 80D2C590 (__vt__14daWtGate_HIO_c)
//	80D2C3E8: 80D2C59C (__vt__14mDoHIO_entry_c)
//	80D2C3EC: 80D2C59C (__vt__14mDoHIO_entry_c)
//	80D2C400: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daWtGate_HIO_c::~daWtGate_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_waterGate/d_a_obj_waterGate/__dt__14daWtGate_HIO_cFv.s"
}
#pragma pop

/* 80D2C41C-80D2C458 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_waterGate_cpp */
//	80D2C428: 80D2C5BC (l_HIO)
//	80D2C42C: 80D2C5BC (l_HIO)
//	80D2C430: 80D2BB8C (__ct__14daWtGate_HIO_cFv)
//	80D2C434: 80D2C3C0 (__dt__14daWtGate_HIO_cFv)
//	80D2C438: 80D2C3C0 (__dt__14daWtGate_HIO_cFv)
//	80D2C43C: 80D2C5B0 (lit_3619)
//	80D2C440: 80D2C5B0 (lit_3619)
//	80D2C444: 80D2BB18 (__register_global_object)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_obj_waterGate_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_waterGate/d_a_obj_waterGate/__sinit_d_a_obj_waterGate_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80D2C41C = (void*)__sinit_d_a_obj_waterGate_cpp;
#pragma pop
