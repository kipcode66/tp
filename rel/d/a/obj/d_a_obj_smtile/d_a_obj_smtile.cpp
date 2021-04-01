//
// Generated By: dol2asm
// Translation Unit: d_a_obj_smtile
//

#include "rel/d/a/obj/d_a_obj_smtile/d_a_obj_smtile.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct Vec {};

struct cXyz {
    /* 80266AE4 */ void operator+(Vec const&) const;
    /* 80CDD3AC */ ~cXyz();
    /* 80CDD580 */ cXyz();
};

struct csXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CE70 */ void scaleM(cXyz const&);
    /* 8000CF44 */ void ZXYrotM(csXyz const&);
};

struct J3DAnmTevRegKey {};

struct J3DMaterialTable {
    /* 8032F880 */ void removeTevRegAnimator(J3DAnmTevRegKey*);
};

struct mDoExt_brkAnm {
    /* 8000D70C */ void init(J3DMaterialTable*, J3DAnmTevRegKey*, int, int, f32, s16, s16);
    /* 8000D7A8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daObj_SMTile_c {
    /* 80CDD2AC */ ~daObj_SMTile_c();
    /* 80CDD3E8 */ void create();
    /* 80CDD5CC */ void CreateHeap();
    /* 80CDD6E8 */ void Delete();
    /* 80CDD71C */ void Execute();
    /* 80CDDA98 */ void Draw();
    /* 80CDDB28 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80CDDB48 */ void setDstPos();
    /* 80CDDD28 */ void setPrtcls(int, int);
    /* 80CDDEFC */ void touchPrtcls(f32);
    /* 80CDE1A8 */ void setMtx();
};

struct daObj_SMTile_Param_c {
    /* 80CDE300 */ ~daObj_SMTile_Param_c();
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
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dPa_levelEcallBack {};

struct _GXColor {};

struct dPa_control_c {
    struct level_c {
        /* 8004B918 */ void getEmitter(u32);
    };

    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
    /* 8004D4CC */ void set(u32, u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*,
                            cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*,
                            _GXColor const*, cXyz const*, f32);
};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80CDD584 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

static void daObj_SMTile_Create(void*);
static void daObj_SMTile_Delete(void*);
static void daObj_SMTile_Execute(void*);
static void daObj_SMTile_Draw(void*);
static bool daObj_SMTile_IsDelete(void*);
void cLib_calcTimer__template0(int*);

extern "C" void __dt__14daObj_SMTile_cFv();
extern "C" void __dt__4cXyzFv();
extern "C" void create__14daObj_SMTile_cFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void CreateHeap__14daObj_SMTile_cFv();
extern "C" void Delete__14daObj_SMTile_cFv();
extern "C" void Execute__14daObj_SMTile_cFv();
extern "C" void Draw__14daObj_SMTile_cFv();
extern "C" void createHeapCallBack__14daObj_SMTile_cFP10fopAc_ac_c();
extern "C" void setDstPos__14daObj_SMTile_cFv();
extern "C" void setPrtcls__14daObj_SMTile_cFii();
extern "C" void touchPrtcls__14daObj_SMTile_cFf();
extern "C" void setMtx__14daObj_SMTile_cFv();
extern "C" static void daObj_SMTile_Create__FPv();
extern "C" static void daObj_SMTile_Delete__FPv();
extern "C" static void daObj_SMTile_Execute__FPv();
extern "C" static void daObj_SMTile_Draw__FPv();
extern "C" static bool daObj_SMTile_IsDelete__FPv();
extern "C" void func_80CDE2A4();
extern "C" void __sinit_d_a_obj_smtile_cpp();
extern "C" void __dt__20daObj_SMTile_Param_cFv();
extern "C" extern u32 const lit_3978;
extern "C" extern u32 const lit_3979;
extern "C" extern u32 const lit_3980;
extern "C" extern u8 const lit_3982[8];
extern "C" extern u8 const data_80CDE37C[8];
extern "C" extern u32 const lit_4194;
extern "C" extern void* g_profile_OBJ_SMTILE[12];
extern "C" extern void* __vt__12J3DFrameCtrl[3];
extern "C" extern void* __vt__14daObj_SMTile_c[3];
extern "C" extern void* __vt__20daObj_SMTile_Param_c[3];

//
// External References:
//

void mDoMtx_YrotS(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void operator delete(void*);

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void removeTevRegAnimator__16J3DMaterialTableFP15J3DAnmTevRegKey();
extern "C" void PSMTXCopy();
extern "C" void PSMTXMultVec();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void _savegpr_20();
extern "C" void _savegpr_22();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_20();
extern "C" void _restgpr_22();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 struct_80450D64[4];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80CDE35C-80CDE364 0008+00 s=4 e=0 z=0  None .rodata    m__20daObj_SMTile_Param_c */
SECTION_RODATA static u8 const m__20daObj_SMTile_Param_c[8] = {
    0x44, 0x16, 0x00, 0x00, 0x41, 0xA0, 0x00, 0x00,
};

/* 80CDE364-80CDE368 0004+00 s=1 e=0 z=0  None .rodata    @3892 */
SECTION_RODATA static u8 const lit_3892[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80CDE368-80CDE36C 0004+00 s=0 e=0 z=0  None .rodata    @3978 */
SECTION_RODATA u32 const lit_3978 = 0x3F800000;

/* 80CDE36C-80CDE370 0004+00 s=0 e=0 z=0  None .rodata    @3979 */
SECTION_RODATA u32 const lit_3979 = 0xBF800000;

/* 80CDE370-80CDE374 0004+00 s=0 e=0 z=0  None .rodata    @3980 */
SECTION_RODATA u32 const lit_3980 = 0x42200000;

/* 80CDE374-80CDE37C 0008+00 s=0 e=0 z=0  None .rodata    @3982 */
SECTION_RODATA u8 const lit_3982[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80CDE37C-80CDE384 0008+00 s=0 e=0 z=0  None .rodata    id$4105 */
SECTION_RODATA u8 const data_80CDE37C[8] = {
    0xFF, 0xFF, 0x86, 0xEC, 0x86, 0xED, 0x86, 0xEE,
};

/* 80CDE384-80CDE388 0004+00 s=0 e=0 z=0  None .rodata    @4194 */
SECTION_RODATA u32 const lit_4194 = 0x437F0000;

/* 80CDE388-80CDE394 000C+00 s=1 e=0 z=0  None .rodata    None */
SECTION_RODATA static u8 const struct_80CDE388[12] = {
    /* 80CDE388 0001 stringBase_80CDE388 @stringBase0 */
    0x00,
    /* 80CDE389 000B data_80CDE389 None */
    0x41,
    0x5F,
    0x53,
    0x4D,
    0x54,
    0x69,
    0x6C,
    0x65,
    0x00,
    0x00,
    0x00,
};

/* 80CDE394-80CDE39C 0008+00 s=3 e=0 z=0  None .data      l_bmdData */
SECTION_DATA static u8 l_bmdData[8] = {
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01,
};

/* 80CDE39C-80CDE3A4 0008+00 s=3 e=0 z=0  None .data      l_resNameList */
SECTION_DATA static void* l_resNameList[2] = {
    (void*)(((char*)&struct_80CDE388) + 0x0) /* @stringBase0 */,
    (void*)(((char*)&struct_80CDE388) + 0x1) /* None */,
};

/* 80CDE3A4-80CDE3F8 0054+00 s=3 e=0 z=0  None .data      l_tileMoveData */
SECTION_DATA static u8 l_tileMoveData[84] = {
    0x01, 0x03, 0x05, 0x01, 0x01, 0x02, 0x04, 0x01, 0x01, 0x01, 0x03, 0x01, 0x01, 0x02,
    0x04, 0x00, 0x00, 0x02, 0x03, 0x01, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x01,
    0x00, 0xFF, 0x02, 0x01, 0x00, 0x01, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0x01, 0x03, 0x00, 0xFF, 0x02, 0x03, 0xFF, 0x02, 0x04, 0x00,
    0x00, 0x02, 0x03, 0x02, 0xFF, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x02, 0x00, 0xFF,
    0x02, 0x02, 0xFF, 0x03, 0x05, 0x02, 0xFF, 0x02, 0x04, 0x02, 0xFF, 0x01, 0x03, 0x02,
};

/* 80CDE3F8-80CDE418 0020+00 s=1 e=0 z=0  None .data      daObj_SMTile_MethodTable */
SECTION_DATA static void* daObj_SMTile_MethodTable[8] = {
    (void*)daObj_SMTile_Create__FPv,
    (void*)daObj_SMTile_Delete__FPv,
    (void*)daObj_SMTile_Execute__FPv,
    (void*)daObj_SMTile_IsDelete__FPv,
    (void*)daObj_SMTile_Draw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80CDE418-80CDE448 0030+00 s=0 e=0 z=1  None .data      g_profile_OBJ_SMTILE */
SECTION_DATA void* g_profile_OBJ_SMTILE[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01340000, (void*)&g_fpcLf_Method,
    (void*)0x00000B30, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00590000, (void*)&daObj_SMTile_MethodTable,
    (void*)0x00044000, (void*)0x000E0000,
};

/* 80CDE448-80CDE454 000C+00 s=3 e=0 z=0  None .data      __vt__12J3DFrameCtrl */
SECTION_DATA void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80CDE454-80CDE460 000C+00 s=2 e=0 z=0  None .data      __vt__14daObj_SMTile_c */
SECTION_DATA void* __vt__14daObj_SMTile_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14daObj_SMTile_cFv,
};

/* 80CDD2AC-80CDD3AC 0100+00 s=1 e=0 z=0  None .text      __dt__14daObj_SMTile_cFv */
//	80CDD2CC: 80CDE454 (__vt__14daObj_SMTile_c)
//	80CDD2D0: 80CDE454 (__vt__14daObj_SMTile_c)
//	80CDD2DC: 80CDE394 (l_bmdData)
//	80CDD2E0: 80CDE394 (l_bmdData)
//	80CDD2F8: 80CDE39C (l_resNameList)
//	80CDD2FC: 80CDE39C (l_resNameList)
//	80CDD304: 8002D008 (dComIfG_resDelete__FP30request_of_phase_process_classPCc)
//	80CDD30C: 80CDD3AC (__dt__4cXyzFv)
//	80CDD310: 80CDD3AC (__dt__4cXyzFv)
//	80CDD31C: 80361CE8 (__destroy_arr)
//	80CDD324: 80CDD3AC (__dt__4cXyzFv)
//	80CDD328: 80CDD3AC (__dt__4cXyzFv)
//	80CDD334: 80361CE8 (__destroy_arr)
//	80CDD33C: 80CDD3AC (__dt__4cXyzFv)
//	80CDD340: 80CDD3AC (__dt__4cXyzFv)
//	80CDD34C: 80361CE8 (__destroy_arr)
//	80CDD368: 80CDE448 (__vt__12J3DFrameCtrl)
//	80CDD36C: 80CDE448 (__vt__12J3DFrameCtrl)
//	80CDD37C: 80018C8C (__dt__10fopAc_ac_cFv)
//	80CDD38C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_SMTile_c::~daObj_SMTile_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smtile/d_a_obj_smtile/__dt__14daObj_SMTile_cFv.s"
}
#pragma pop

/* 80CDD3AC-80CDD3E8 003C+00 s=2 e=0 z=0  None .text      __dt__4cXyzFv */
//	80CDD3CC: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smtile/d_a_obj_smtile/__dt__4cXyzFv.s"
}
#pragma pop

/* 80CDD3E8-80CDD580 0198+00 s=1 e=0 z=0  None .text      create__14daObj_SMTile_cFv */
//	80CDD3F8: 803621DC (_savegpr_29)
//	80CDD418: 80018B64 (__ct__10fopAc_ac_cFv)
//	80CDD41C: 80CDE454 (__vt__14daObj_SMTile_c)
//	80CDD420: 80CDE454 (__vt__14daObj_SMTile_c)
//	80CDD42C: 80CDE448 (__vt__12J3DFrameCtrl)
//	80CDD430: 80CDE448 (__vt__12J3DFrameCtrl)
//	80CDD440: 803283FC (init__12J3DFrameCtrlFs)
//	80CDD450: 80CDD580 (__ct__4cXyzFv)
//	80CDD454: 80CDD580 (__ct__4cXyzFv)
//	80CDD458: 80CDD3AC (__dt__4cXyzFv)
//	80CDD45C: 80CDD3AC (__dt__4cXyzFv)
//	80CDD468: 80361D60 (__construct_array)
//	80CDD470: 80CDD580 (__ct__4cXyzFv)
//	80CDD474: 80CDD580 (__ct__4cXyzFv)
//	80CDD478: 80CDD3AC (__dt__4cXyzFv)
//	80CDD47C: 80CDD3AC (__dt__4cXyzFv)
//	80CDD488: 80361D60 (__construct_array)
//	80CDD490: 80CDD580 (__ct__4cXyzFv)
//	80CDD494: 80CDD580 (__ct__4cXyzFv)
//	80CDD498: 80CDD3AC (__dt__4cXyzFv)
//	80CDD49C: 80CDD3AC (__dt__4cXyzFv)
//	80CDD4A8: 80361D60 (__construct_array)
//	80CDD4C4: 80CDE394 (l_bmdData)
//	80CDD4C8: 80CDE394 (l_bmdData)
//	80CDD4E0: 80CDE39C (l_resNameList)
//	80CDD4E4: 80CDE39C (l_resNameList)
//	80CDD4EC: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80CDD50C: 804061C0 (g_dComIfG_gameInfo)
//	80CDD510: 804061C0 (g_dComIfG_gameInfo)
//	80CDD51C: 80035360 (isSwitch__10dSv_info_cCFii)
//	80CDD534: 80CDDB28 (createHeapCallBack__14daObj_SMTile_cFP10fopAc_ac_c)
//	80CDD538: 80CDDB28 (createHeapCallBack__14daObj_SMTile_cFP10fopAc_ac_c)
//	80CDD540: 8001A4B0 (fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl)
//	80CDD560: 80CDD71C (Execute__14daObj_SMTile_cFv)
//	80CDD56C: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SMTile_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smtile/d_a_obj_smtile/create__14daObj_SMTile_cFv.s"
}
#pragma pop

/* 80CDD580-80CDD584 0004+00 s=1 e=0 z=0  None .text      __ct__4cXyzFv */
cXyz::cXyz() {
    /* empty function */
}

/* 80CDD584-80CDD5CC 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv */
//	80CDD59C: 80CDE448 (__vt__12J3DFrameCtrl)
//	80CDD5A0: 80CDE448 (__vt__12J3DFrameCtrl)
//	80CDD5B0: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smtile/d_a_obj_smtile/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80CDD5CC-80CDD6E8 011C+00 s=1 e=0 z=0  None .text      CreateHeap__14daObj_SMTile_cFv */
//	80CDD5DC: 803621D8 (_savegpr_28)
//	80CDD5EC: 80CDE394 (l_bmdData)
//	80CDD5F0: 80CDE394 (l_bmdData)
//	80CDD600: 80CDE39C (l_resNameList)
//	80CDD604: 80CDE39C (l_resNameList)
//	80CDD610: 804061C0 (g_dComIfG_gameInfo)
//	80CDD614: 804061C0 (g_dComIfG_gameInfo)
//	80CDD628: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80CDD648: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
//	80CDD674: 80CDE39C (l_resNameList)
//	80CDD678: 80CDE39C (l_resNameList)
//	80CDD68C: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80CDD6A8: 80CDE364 (lit_3892)
//	80CDD6AC: 80CDE364 (lit_3892)
//	80CDD6B8: 8000D70C (init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss)
//	80CDD6D4: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SMTile_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smtile/d_a_obj_smtile/CreateHeap__14daObj_SMTile_cFv.s"
}
#pragma pop

/* 80CDD6E8-80CDD71C 0034+00 s=1 e=0 z=0  None .text      Delete__14daObj_SMTile_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SMTile_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smtile/d_a_obj_smtile/Delete__14daObj_SMTile_cFv.s"
}
#pragma pop

/* 80CDD71C-80CDDA98 037C+00 s=2 e=0 z=0  None .text      Execute__14daObj_SMTile_cFv */
//	80CDD72C: 803621D0 (_savegpr_26)
//	80CDD734: 80CDE35C (m__20daObj_SMTile_Param_c)
//	80CDD738: 80CDE35C (m__20daObj_SMTile_Param_c)
//	80CDD744: 80450D64 (struct_80450D64)
//	80CDD748: 80450D64 (struct_80450D64)
//	80CDD76C: 804061C0 (g_dComIfG_gameInfo)
//	80CDD770: 804061C0 (g_dComIfG_gameInfo)
//	80CDD784: 8004B918 (getEmitter__Q213dPa_control_c7level_cFUl)
//	80CDD810: 80CDDB48 (setDstPos__14daObj_SMTile_cFv)
//	80CDD89C: 80CDDD28 (setPrtcls__14daObj_SMTile_cFii)
//	80CDD8B4: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CDD8B8: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CDD8E0: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80CDD8F4: 80CDDD28 (setPrtcls__14daObj_SMTile_cFii)
//	80CDD908: 80CDDD28 (setPrtcls__14daObj_SMTile_cFii)
//	80CDD91C: 80CDDD28 (setPrtcls__14daObj_SMTile_cFii)
//	80CDD930: 80CDDD28 (setPrtcls__14daObj_SMTile_cFii)
//	80CDD944: 80CDDD28 (setPrtcls__14daObj_SMTile_cFii)
//	80CDD958: 80CDDD28 (setPrtcls__14daObj_SMTile_cFii)
//	80CDD970: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CDD974: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CDD9A8: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80CDDA24: 80CDDEFC (touchPrtcls__14daObj_SMTile_cFf)
//	80CDDA38: 8000D428 (play__14mDoExt_baseAnmFv)
//	80CDDA40: 80CDE1A8 (setMtx__14daObj_SMTile_cFv)
//	80CDDA84: 8036221C (_restgpr_26)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SMTile_c::Execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smtile/d_a_obj_smtile/Execute__14daObj_SMTile_cFv.s"
}
#pragma pop

/* 80CDDA98-80CDDB28 0090+00 s=1 e=0 z=0  None .text      Draw__14daObj_SMTile_cFv */
//	80CDDAB8: 8042CA54 (g_env_light)
//	80CDDABC: 8042CA54 (g_env_light)
//	80CDDACC: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80CDDAD0: 8042CA54 (g_env_light)
//	80CDDAD4: 8042CA54 (g_env_light)
//	80CDDAE4: 801A4DA0
//(setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c) 	80CDDAF4:
// 8000D7A8 (entry__13mDoExt_brkAnmFP16J3DMaterialTablef) 	80CDDAFC: 8000DCC4
//(mDoExt_modelUpdateDL__FP8J3DModel) 	80CDDB08: 8032F880
//(removeTevRegAnimator__16J3DMaterialTableFP15J3DAnmTevRegKey)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SMTile_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smtile/d_a_obj_smtile/Draw__14daObj_SMTile_cFv.s"
}
#pragma pop

/* 80CDDB28-80CDDB48 0020+00 s=1 e=0 z=0  None .text
 * createHeapCallBack__14daObj_SMTile_cFP10fopAc_ac_c           */
//	80CDDB34: 80CDD5CC (CreateHeap__14daObj_SMTile_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SMTile_c::createHeapCallBack(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smtile/d_a_obj_smtile/createHeapCallBack__14daObj_SMTile_cFP10fopAc_ac_c.s"
}
#pragma pop

/* 80CDDB48-80CDDD28 01E0+00 s=1 e=0 z=0  None .text      setDstPos__14daObj_SMTile_cFv */
//	80CDDB70: 803621C0 (_savegpr_22)
//	80CDDB78: 80CDE35C (m__20daObj_SMTile_Param_c)
//	80CDDB7C: 80CDE35C (m__20daObj_SMTile_Param_c)
//	80CDDB80: 803DD470 (now__14mDoMtx_stack_c)
//	80CDDB84: 803DD470 (now__14mDoMtx_stack_c)
//	80CDDB8C: 8000C3DC (mDoMtx_YrotS__FPA4_fs)
//	80CDDBA0: 80CDE3A4 (l_tileMoveData)
//	80CDDBA4: 80CDE3A4 (l_tileMoveData)
//	80CDDBB4: 803DD470 (now__14mDoMtx_stack_c)
//	80CDDBB8: 803DD470 (now__14mDoMtx_stack_c)
//	80CDDC40: 80346D6C (PSMTXMultVec)
//	80CDDCE0: 80346D6C (PSMTXMultVec)
//	80CDDD14: 8036220C (_restgpr_22)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SMTile_c::setDstPos() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smtile/d_a_obj_smtile/setDstPos__14daObj_SMTile_cFv.s"
}
#pragma pop

/* 80CDDD28-80CDDEFC 01D4+00 s=1 e=0 z=0  None .text      setPrtcls__14daObj_SMTile_cFii */
//	80CDDD38: 803621C0 (_savegpr_22)
//	80CDDD48: 80CDE35C (m__20daObj_SMTile_Param_c)
//	80CDDD4C: 80CDE35C (m__20daObj_SMTile_Param_c)
//	80CDDD78: 80CDE3A4 (l_tileMoveData)
//	80CDDD7C: 80CDE3A4 (l_tileMoveData)
//	80CDDDA8: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CDDDAC: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CDDDDC: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80CDDDF0: 80266AE4 (__pl__4cXyzCFRC3Vec)
//	80CDDE4C: 804061C0 (g_dComIfG_gameInfo)
//	80CDDE50: 804061C0 (g_dComIfG_gameInfo)
//	80CDDE68: 80266AE4 (__pl__4cXyzCFRC3Vec)
//	80CDDEC4: 8004CA90
//(set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80CDDEE8: 8036220C (_restgpr_22)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SMTile_c::setPrtcls(int param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smtile/d_a_obj_smtile/setPrtcls__14daObj_SMTile_cFii.s"
}
#pragma pop

/* 80CDDEFC-80CDE1A8 02AC+00 s=1 e=0 z=0  None .text      touchPrtcls__14daObj_SMTile_cFf */
//	80CDDF0C: 803621B8 (_savegpr_20)
//	80CDDF14: 80CDE35C (m__20daObj_SMTile_Param_c)
//	80CDDF18: 80CDE35C (m__20daObj_SMTile_Param_c)
//	80CDDF40: 803DD470 (now__14mDoMtx_stack_c)
//	80CDDF44: 803DD470 (now__14mDoMtx_stack_c)
//	80CDDF4C: 8000C3DC (mDoMtx_YrotS__FPA4_fs)
//	80CDDF5C: 804061C0 (g_dComIfG_gameInfo)
//	80CDDF60: 804061C0 (g_dComIfG_gameInfo)
//	80CDDFD8: 8004D4CC
//(set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80CDDFEC: 8004B918 (getEmitter__Q213dPa_control_c7level_cFUl)
//	80CDE034: 80CDE3A4 (l_tileMoveData)
//	80CDE038: 80CDE3A4 (l_tileMoveData)
//	80CDE0B8: 803DD470 (now__14mDoMtx_stack_c)
//	80CDE0BC: 803DD470 (now__14mDoMtx_stack_c)
//	80CDE0C8: 80346D6C (PSMTXMultVec)
//	80CDE0D8: 80266AE4 (__pl__4cXyzCFRC3Vec)
//	80CDE0E8: 80266AE4 (__pl__4cXyzCFRC3Vec)
//	80CDE114: 80CDE2A4 (func_80CDE2A4)
//	80CDE12C: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CDE130: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CDE15C: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80CDE194: 80362204 (_restgpr_20)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SMTile_c::touchPrtcls(f32 param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smtile/d_a_obj_smtile/touchPrtcls__14daObj_SMTile_cFf.s"
}
#pragma pop

/* 80CDE1A8-80CDE21C 0074+00 s=1 e=0 z=0  None .text      setMtx__14daObj_SMTile_cFv */
//	80CDE1E0: 8000CD64 (transS__14mDoMtx_stack_cFRC4cXyz)
//	80CDE1E8: 8000CF44 (ZXYrotM__14mDoMtx_stack_cFRC5csXyz)
//	80CDE1F0: 8000CE70 (scaleM__14mDoMtx_stack_cFRC4cXyz)
//	80CDE1F4: 803DD470 (now__14mDoMtx_stack_c)
//	80CDE1F8: 803DD470 (now__14mDoMtx_stack_c)
//	80CDE204: 803464B0 (PSMTXCopy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj_SMTile_c::setMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smtile/d_a_obj_smtile/setMtx__14daObj_SMTile_cFv.s"
}
#pragma pop

/* 80CDE21C-80CDE23C 0020+00 s=1 e=0 z=0  None .text      daObj_SMTile_Create__FPv */
//	80CDE228: 80CDD3E8 (create__14daObj_SMTile_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_SMTile_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smtile/d_a_obj_smtile/daObj_SMTile_Create__FPv.s"
}
#pragma pop

/* 80CDE23C-80CDE25C 0020+00 s=1 e=0 z=0  None .text      daObj_SMTile_Delete__FPv */
//	80CDE248: 80CDD6E8 (Delete__14daObj_SMTile_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_SMTile_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smtile/d_a_obj_smtile/daObj_SMTile_Delete__FPv.s"
}
#pragma pop

/* 80CDE25C-80CDE27C 0020+00 s=1 e=0 z=0  None .text      daObj_SMTile_Execute__FPv */
//	80CDE268: 80CDD71C (Execute__14daObj_SMTile_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_SMTile_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smtile/d_a_obj_smtile/daObj_SMTile_Execute__FPv.s"
}
#pragma pop

/* 80CDE27C-80CDE29C 0020+00 s=1 e=0 z=0  None .text      daObj_SMTile_Draw__FPv */
//	80CDE288: 80CDDA98 (Draw__14daObj_SMTile_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObj_SMTile_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smtile/d_a_obj_smtile/daObj_SMTile_Draw__FPv.s"
}
#pragma pop

/* 80CDE29C-80CDE2A4 0008+00 s=1 e=0 z=0  None .text      daObj_SMTile_IsDelete__FPv */
static bool daObj_SMTile_IsDelete(void* param_0) {
    return true;
}

/* 80CDE2A4-80CDE2C0 001C+00 s=1 e=0 z=0  None .text      cLib_calcTimer<i>__FPi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cLib_calcTimer__template0(int* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smtile/d_a_obj_smtile/func_80CDE2A4.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CDE460-80CDE46C 000C+00 s=2 e=0 z=0  None .data      __vt__20daObj_SMTile_Param_c */
SECTION_DATA void* __vt__20daObj_SMTile_Param_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__20daObj_SMTile_Param_cFv,
};

/* 80CDE478-80CDE484 000C+00 s=1 e=0 z=0  None .bss       @3805 */
static u8 lit_3805[12];

/* 80CDE484-80CDE488 0004+00 s=1 e=0 z=0  None .bss       l_HIO */
static u8 l_HIO[4];

/* 80CDE2C0-80CDE300 0040+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_smtile_cpp */
//	80CDE2CC: 80CDE460 (__vt__20daObj_SMTile_Param_c)
//	80CDE2D0: 80CDE460 (__vt__20daObj_SMTile_Param_c)
//	80CDE2D4: 80CDE484 (l_HIO)
//	80CDE2D8: 80CDE484 (l_HIO)
//	80CDE2DC: 80CDE300 (__dt__20daObj_SMTile_Param_cFv)
//	80CDE2E0: 80CDE300 (__dt__20daObj_SMTile_Param_cFv)
//	80CDE2E4: 80CDE478 (lit_3805)
//	80CDE2E8: 80CDE478 (lit_3805)
//	80CDE2EC: 80CDD238 (__register_global_object)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_a_obj_smtile_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smtile/d_a_obj_smtile/__sinit_d_a_obj_smtile_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80CDE2C0 = (void*)__sinit_d_a_obj_smtile_cpp;
#pragma pop

/* 80CDE300-80CDE348 0048+00 s=2 e=0 z=0  None .text      __dt__20daObj_SMTile_Param_cFv */
//	80CDE318: 80CDE460 (__vt__20daObj_SMTile_Param_c)
//	80CDE31C: 80CDE460 (__vt__20daObj_SMTile_Param_c)
//	80CDE32C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_SMTile_Param_c::~daObj_SMTile_Param_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smtile/d_a_obj_smtile/__dt__20daObj_SMTile_Param_cFv.s"
}
#pragma pop
