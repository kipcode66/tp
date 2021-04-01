//
// Generated By: dol2asm
// Translation Unit: d_a_obj_kantera
//

#include "rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daItemKantera_c {
    /* 80C389BC */ void initBaseMtx();
    /* 80C389F8 */ void setBaseMtx();
    /* 80C38A64 */ void Create();
    /* 80C38BA8 */ bool __CreateHeap();
    /* 80C38BB0 */ void create();
    /* 80C38F78 */ void bg_check();
    /* 80C39068 */ void actionInit();
    /* 80C390A0 */ void actionWaitInit();
    /* 80C3911C */ void actionWait();
    /* 80C39234 */ void initActionOrderGetDemo();
    /* 80C392D0 */ void actionOrderGetDemo();
    /* 80C3934C */ void actionGetDemo();
    /* 80C393B0 */ void execute();
    /* 80C394DC */ void draw();
    /* 80C39530 */ void _delete();
};

struct daItemBase_c {
    /* 80037A64 */ void hide();
    /* 80037A74 */ void show();
    /* 80037ACC */ void chkDraw();
    /* 80144724 */ void DeleteBase(char const*);
    /* 8014474C */ bool clothCreate();
    /* 80144B94 */ void DrawBase();
    /* 80144C30 */ void RotateYBase();
    /* 80144C7C */ void setListStart();
    /* 80144CC4 */ void settingBeforeDraw();
    /* 80144D18 */ void setTevStr();
    /* 80144D70 */ void setShadow();
    /* 80144EDC */ void animEntry();
    /* 80145144 */ void chkFlag(int);
    /* 80145164 */ void getTevFrm();
    /* 80145180 */ void getBtpFrm();
    /* 8014519C */ void getShadowSize();
    /* 801451B4 */ void getCollisionH();
    /* 801451D0 */ void getCollisionR();
};

struct dEvt_control_c {
    /* 80042468 */ void reset();
    /* 800436EC */ void setPtI_Id(unsigned int);
};

struct dEvent_manager_c {
    /* 80047ADC */ void endCheckOld(char const*);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80C38E3C */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80C38F08 */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F58 */ void SetWall(f32, f32);
    /* 80C38E98 */ ~dBgS_AcchCir();
};

struct cXyz {
    /* 80266B84 */ void operator*(f32) const;
};

struct dBgS {};

struct csXyz {};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cM3dGPla {
    /* 80C38974 */ ~cM3dGPla();
};

struct cM3dGCyl {
    /* 8026F1F8 */ void SetH(f32);
    /* 8026F200 */ void SetR(f32);
    /* 80C38DAC */ ~cM3dGCyl();
};

struct cM3dGCir {
    /* 8026EF18 */ ~cM3dGCir();
};

struct cM3dGAab {
    /* 80C38DF4 */ ~cM3dGAab();
};

struct cCcD_GStts {
    /* 80C395E8 */ ~cCcD_GStts();
};

struct cBgS_PolyInfo {
    /* 802680B0 */ ~cBgS_PolyInfo();
};

struct cBgS {
    /* 80074744 */ void GetTriPla(cBgS_PolyInfo const&, cM3dGPla*) const;
};

//
// Forward References:
//

static void Reflect(cXyz*, cBgS_PolyInfo const&, f32);
static void daItemKantera_Draw(daItemKantera_c*);
static void daItemKantera_Execute(daItemKantera_c*);
static void daItemKantera_Delete(daItemKantera_c*);
static void daItemKantera_Create(fopAc_ac_c*);

extern "C" static void Reflect__FP4cXyzRC13cBgS_PolyInfof();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" void initBaseMtx__15daItemKantera_cFv();
extern "C" void setBaseMtx__15daItemKantera_cFv();
extern "C" void Create__15daItemKantera_cFv();
extern "C" bool __CreateHeap__15daItemKantera_cFv();
extern "C" void create__15daItemKantera_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void bg_check__15daItemKantera_cFv();
extern "C" void actionInit__15daItemKantera_cFv();
extern "C" void actionWaitInit__15daItemKantera_cFv();
extern "C" void actionWait__15daItemKantera_cFv();
extern "C" void initActionOrderGetDemo__15daItemKantera_cFv();
extern "C" void actionOrderGetDemo__15daItemKantera_cFv();
extern "C" void actionGetDemo__15daItemKantera_cFv();
extern "C" void execute__15daItemKantera_cFv();
extern "C" void draw__15daItemKantera_cFv();
extern "C" void _delete__15daItemKantera_cFv();
extern "C" static void daItemKantera_Draw__FP15daItemKantera_c();
extern "C" static void daItemKantera_Execute__FP15daItemKantera_c();
extern "C" static void daItemKantera_Delete__FP15daItemKantera_c();
extern "C" static void daItemKantera_Create__FP10fopAc_ac_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" static void func_80C39630();
extern "C" static void func_80C39638();
extern "C" extern u8 const lit_3855[4];
extern "C" extern u8 const lit_3856[8];
extern "C" extern u8 const lit_3857[8];
extern "C" extern u8 const lit_3858[8];
extern "C" extern u32 const lit_3910;
extern "C" extern u32 const lit_3911;
extern "C" extern u8 const lit_3913[8];
extern "C" extern u32 const lit_4076;
extern "C" extern u32 const lit_4077;
extern "C" extern u32 const lit_4078;
extern "C" extern u32 const lit_4079;
extern "C" extern u32 const lit_4145;
extern "C" extern char const* const stringBase0;
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* lit_4184[3];
extern "C" extern void* lit_4185[3];
extern "C" extern void* lit_4186[3];
extern "C" extern void* lit_4187[3];
extern "C" extern u8 data_80C3972C[48];
extern "C" extern void* g_profile_Obj_Kantera[12];
extern "C" extern void* __vt__12dBgS_AcchCir[3];
extern "C" extern void* __vt__10cCcD_GStts[3];
extern "C" extern void* __vt__10dCcD_GStts[3];
extern "C" extern void* __vt__8cM3dGCyl[3];
extern "C" extern void* __vt__8cM3dGAab[3];
extern "C" extern void* __vt__12dBgS_ObjAcch[9];
extern "C" extern void* __vt__15daItemKantera_c[17];
extern "C" extern void* __vt__8cM3dGPla[3];

//
// External References:
//

void mDoMtx_ZXYrotM(f32 (*)[4], s16, s16, s16);
void fopAcM_delete(fopAc_ac_c*);
void fopAcM_entrySolidHeap(fopAc_ac_c*, int (*)(fopAc_ac_c*), u32);
void fopAcM_posMoveF(fopAc_ac_c*, cXyz const*);
void fopAcM_orderItemEvent(fopAc_ac_c*, u16, u16);
void fopAcM_createItemForTrBoxDemo(cXyz const*, int, int, int, csXyz const*, cXyz const*);
void fopAcM_cancelCarryNow(fopAc_ac_c*);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void CheckFieldItemCreateHeap(fopAc_ac_c*);
void checkItemGet(u8, int);
void cM_atan2s(f32, f32);
void operator delete(void*);

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_orderItemEvent__FP10fopAc_ac_cUsUs();
extern "C" void fopAcM_createItemForTrBoxDemo__FPC4cXyziiiPC5csXyzPC4cXyz();
extern "C" void fopAcM_cancelCarryNow__FP10fopAc_ac_c();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void hide__12daItemBase_cFv();
extern "C" void show__12daItemBase_cFv();
extern "C" void chkDraw__12daItemBase_cFv();
extern "C" void CheckFieldItemCreateHeap__FP10fopAc_ac_c();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void setPtI_Id__14dEvt_control_cFUi();
extern "C" void endCheckOld__16dEvent_manager_cFPCc();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
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
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void checkItemGet__FUci();
extern "C" void DeleteBase__12daItemBase_cFPCc();
extern "C" bool clothCreate__12daItemBase_cFv();
extern "C" void DrawBase__12daItemBase_cFv();
extern "C" void RotateYBase__12daItemBase_cFv();
extern "C" void setListStart__12daItemBase_cFv();
extern "C" void settingBeforeDraw__12daItemBase_cFv();
extern "C" void setTevStr__12daItemBase_cFv();
extern "C" void setShadow__12daItemBase_cFv();
extern "C" void animEntry__12daItemBase_cFv();
extern "C" void chkFlag__12daItemBase_cFi();
extern "C" void getTevFrm__12daItemBase_cFv();
extern "C" void getBtpFrm__12daItemBase_cFv();
extern "C" void getShadowSize__12daItemBase_cFv();
extern "C" void getCollisionH__12daItemBase_cFv();
extern "C" void getCollisionR__12daItemBase_cFv();
extern "C" void __ml__4cXyzCFf();
extern "C" void cM_atan2s__Fff();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSVECSquareMag();
extern "C" void C_VECReflect();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* field_item_res__10dItem_data[1020];
extern "C" extern u8 item_info__10dItem_data[1020 + 4 /* padding */];
extern "C" extern void* __vt__12daItemBase_c[17 + 1 /* padding */];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 __float_nan;
extern "C" extern u8 data_80C39860[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80C39648-80C3968C 0044+00 s=4 e=0 z=0  None .rodata    l_cyl_src */
SECTION_RODATA static u8 const l_cyl_src[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x59,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x41, 0xA0, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};

/* 80C396DC-80C396E8 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C396E8-80C396FC 0004+10 s=0 e=0 z=0  None .data      @1787 */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};

/* 80C396FC-80C39708 000C+00 s=0 e=0 z=0  None .data      @4184 */
SECTION_DATA void* lit_4184[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionInit__15daItemKantera_cFv,
};

/* 80C39708-80C39714 000C+00 s=0 e=0 z=0  None .data      @4185 */
SECTION_DATA void* lit_4185[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWait__15daItemKantera_cFv,
};

/* 80C39714-80C39720 000C+00 s=0 e=0 z=0  None .data      @4186 */
SECTION_DATA void* lit_4186[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOrderGetDemo__15daItemKantera_cFv,
};

/* 80C39720-80C3972C 000C+00 s=0 e=0 z=0  None .data      @4187 */
SECTION_DATA void* lit_4187[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionGetDemo__15daItemKantera_cFv,
};

/* 80C3972C-80C3975C 0030+00 s=0 e=0 z=0  None .data      l_demoFunc$4183 */
SECTION_DATA u8 data_80C3972C[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C3975C-80C3977C 0020+00 s=1 e=0 z=0  None .data      l_daItemKantera_Method */
SECTION_DATA static void* l_daItemKantera_Method[8] = {
    (void*)daItemKantera_Create__FP10fopAc_ac_c,
    (void*)daItemKantera_Delete__FP15daItemKantera_c,
    (void*)daItemKantera_Execute__FP15daItemKantera_c,
    (void*)NULL,
    (void*)daItemKantera_Draw__FP15daItemKantera_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C3977C-80C397AC 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Kantera */
SECTION_DATA void* g_profile_Obj_Kantera[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x021A0000, (void*)&g_fpcLf_Method,
    (void*)0x00000948, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00EE0000, (void*)&l_daItemKantera_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80C397AC-80C397B8 000C+00 s=1 e=0 z=0  None .data      __vt__12dBgS_AcchCir */
SECTION_DATA void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80C397B8-80C397C4 000C+00 s=2 e=0 z=0  None .data      __vt__10cCcD_GStts */
SECTION_DATA void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80C397C4-80C397D0 000C+00 s=1 e=0 z=0  None .data      __vt__10dCcD_GStts */
SECTION_DATA void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80C397D0-80C397DC 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGCyl */
SECTION_DATA void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80C397DC-80C397E8 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab */
SECTION_DATA void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C397E8-80C3980C 0024+00 s=2 e=0 z=0  None .data      __vt__12dBgS_ObjAcch */
SECTION_DATA void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C39638,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C39630,
};

/* 80C3980C-80C39850 0044+00 s=1 e=0 z=0  None .data      __vt__15daItemKantera_c */
SECTION_DATA void* __vt__15daItemKantera_c[17] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)DrawBase__12daItemBase_cFv,
    (void*)setListStart__12daItemBase_cFv,
    (void*)settingBeforeDraw__12daItemBase_cFv,
    (void*)setTevStr__12daItemBase_cFv,
    (void*)setShadow__12daItemBase_cFv,
    (void*)animEntry__12daItemBase_cFv,
    (void*)RotateYBase__12daItemBase_cFv,
    (void*)clothCreate__12daItemBase_cFv,
    (void*)__CreateHeap__15daItemKantera_cFv,
    (void*)chkFlag__12daItemBase_cFi,
    (void*)getTevFrm__12daItemBase_cFv,
    (void*)getBtpFrm__12daItemBase_cFv,
    (void*)getShadowSize__12daItemBase_cFv,
    (void*)getCollisionH__12daItemBase_cFv,
    (void*)getCollisionR__12daItemBase_cFv,
};

/* 80C39850-80C3985C 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGPla */
SECTION_DATA void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 80C38678-80C38974 02FC+00 s=1 e=0 z=0  None .text      Reflect__FP4cXyzRC13cBgS_PolyInfof */
//	80C386A4: 80C39648 (l_cyl_src)
//	80C386A8: 80C39648 (l_cyl_src)
//	80C386AC: 80C39850 (__vt__8cM3dGPla)
//	80C386B0: 80C39850 (__vt__8cM3dGPla)
//	80C386B8: 804061C0 (g_dComIfG_gameInfo)
//	80C386BC: 804061C0 (g_dComIfG_gameInfo)
//	80C386C8: 80074744 (GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla)
//	80C386F0: 80347138 (PSVECSquareMag)
//	80C38760: 80450AE0 (__float_nan)
//	80C38764: 80450AE0 (__float_nan)
//	80C387D0: 80450AE0 (__float_nan)
//	80C387D4: 80450AE0 (__float_nan)
//	80C387EC: 803472C8 (C_VECReflect)
//	80C387FC: 80266B84 (__ml__4cXyzCFf)
//	80C3880C: 80266B84 (__ml__4cXyzCFf)
//	80C38844: 80347138 (PSVECSquareMag)
//	80C388B4: 80450AE0 (__float_nan)
//	80C388B8: 80450AE0 (__float_nan)
//	80C38924: 80450AE0 (__float_nan)
//	80C38928: 80450AE0 (__float_nan)
//	80C3892C: 80C39850 (__vt__8cM3dGPla)
//	80C38930: 80C39850 (__vt__8cM3dGPla)
//	80C3893C: 80C39850 (__vt__8cM3dGPla)
//	80C38940: 80C39850 (__vt__8cM3dGPla)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void Reflect(cXyz* param_0, cBgS_PolyInfo const& param_1, f32 param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/Reflect__FP4cXyzRC13cBgS_PolyInfof.s"
}
#pragma pop

/* 80C38974-80C389BC 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGPlaFv */
//	80C3898C: 80C39850 (__vt__8cM3dGPla)
//	80C38990: 80C39850 (__vt__8cM3dGPla)
//	80C389A0: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGPla::~cM3dGPla() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/__dt__8cM3dGPlaFv.s"
}
#pragma pop

/* 80C389BC-80C389F8 003C+00 s=1 e=0 z=0  None .text      initBaseMtx__15daItemKantera_cFv */
//	80C389E4: 80C389F8 (setBaseMtx__15daItemKantera_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/initBaseMtx__15daItemKantera_cFv.s"
}
#pragma pop

/* 80C389F8-80C38A64 006C+00 s=2 e=0 z=0  None .text      setBaseMtx__15daItemKantera_cFv */
//	80C38A0C: 803DD470 (now__14mDoMtx_stack_c)
//	80C38A10: 803DD470 (now__14mDoMtx_stack_c)
//	80C38A20: 803468E8 (PSMTXTrans)
//	80C38A24: 803DD470 (now__14mDoMtx_stack_c)
//	80C38A28: 803DD470 (now__14mDoMtx_stack_c)
//	80C38A38: 8000C2A0 (mDoMtx_ZXYrotM__FPA4_fsss)
//	80C38A3C: 803DD470 (now__14mDoMtx_stack_c)
//	80C38A40: 803DD470 (now__14mDoMtx_stack_c)
//	80C38A4C: 803464B0 (PSMTXCopy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/setBaseMtx__15daItemKantera_cFv.s"
}
#pragma pop

/* 80C38A64-80C38BA8 0144+00 s=1 e=0 z=0  None .text      Create__15daItemKantera_cFv */
//	80C38A7C: 80C39648 (l_cyl_src)
//	80C38A80: 80C39648 (l_cyl_src)
//	80C38A84: 80C389BC (initBaseMtx__15daItemKantera_cFv)
//	80C38AA0: 80075F58 (SetWall__12dBgS_AcchCirFff)
//	80C38ACC: 80076248
//(Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz) 	80C38AE0:
//80083860 (Init__9dCcD_SttsFiiP10fopAc_ac_c) 	80C38AEC: 800848B4 (Set__8dCcD_CylFRC11dCcD_SrcCyl)
//80C38AF8: 803AED78 (item_info__10dItem_data) 	80C38AFC: 803AED78 (item_info__10dItem_data)
// 80C38B2C: 8026F200 (SetR__8cM3dGCylFf) 	80C38B30: 803AED78 (item_info__10dItem_data) 80C38B34:
//803AED78 (item_info__10dItem_data) 	80C38B64: 8026F1F8 (SetH__8cM3dGCylFf) 	80C38B74: 80C390A0
//(actionWaitInit__15daItemKantera_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/Create__15daItemKantera_cFv.s"
}
#pragma pop

/* 80C38BA8-80C38BB0 0008+00 s=1 e=0 z=0  None .text      __CreateHeap__15daItemKantera_cFv */
bool daItemKantera_c::__CreateHeap() {
    return true;
}

/* 80C38BB0-80C38DAC 01FC+00 s=1 e=0 z=0  None .text      create__15daItemKantera_cFv */
//	80C38BC0: 803621DC (_savegpr_29)
//	80C38BE0: 80018B64 (__ct__10fopAc_ac_cFv)
//	80C38BE4: 803B3610 (__vt__12daItemBase_c)
//	80C38BE8: 803B3610 (__vt__12daItemBase_c)
//	80C38BF8: 800760A0 (__ct__9dBgS_AcchFv)
//	80C38BFC: 80C397E8 (__vt__12dBgS_ObjAcch)
//	80C38C00: 80C397E8 (__vt__12dBgS_ObjAcch)
//	80C38C1C: 80078E68 (SetObj__16dBgS_PolyPassChkFv)
//	80C38C24: 80075EAC (__ct__12dBgS_AcchCirFv)
//	80C38C28: 803C3728 (__vt__9cCcD_Stts)
//	80C38C2C: 803C3728 (__vt__9cCcD_Stts)
//	80C38C38: 80083760 (__ct__10dCcD_GSttsFv)
//	80C38C3C: 803AC2E4 (__vt__9dCcD_Stts)
//	80C38C40: 803AC2E4 (__vt__9dCcD_Stts)
//	80C38C58: 80083A28 (__ct__12dCcD_GObjInfFv)
//	80C38C5C: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80C38C60: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80C38C68: 80C397DC (__vt__8cM3dGAab)
//	80C38C6C: 80C397DC (__vt__8cM3dGAab)
//	80C38C74: 80C397D0 (__vt__8cM3dGCyl)
//	80C38C78: 80C397D0 (__vt__8cM3dGCyl)
//	80C38C80: 803C35A4 (__vt__12cCcD_CylAttr)
//	80C38C84: 803C35A4 (__vt__12cCcD_CylAttr)
//	80C38C94: 803AC050 (__vt__8dCcD_Cyl)
//	80C38C98: 803AC050 (__vt__8dCcD_Cyl)
//	80C38CB0: 80C3980C (__vt__15daItemKantera_c)
//	80C38CB4: 80C3980C (__vt__15daItemKantera_c)
//	80C38D18: 80097EE0 (checkItemGet__FUci)
//	80C38D34: 803ADD88 (field_item_res__10dItem_data)
//	80C38D38: 803ADD88 (field_item_res__10dItem_data)
//	80C38D44: 8002CEBC (dComIfG_resLoad__FP30request_of_phase_process_classPCc)
//	80C38D58: 80037B78 (CheckFieldItemCreateHeap__FP10fopAc_ac_c)
//	80C38D5C: 80037B78 (CheckFieldItemCreateHeap__FP10fopAc_ac_c)
//	80C38D64: 8001A4B0 (fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl)
//	80C38D7C: 80C38A64 (Create__15daItemKantera_cFv)
//	80C38D98: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/func_80C38BB0.s"
}
#pragma pop

/* 80C38DAC-80C38DF4 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv */
//	80C38DC4: 80C397D0 (__vt__8cM3dGCyl)
//	80C38DC8: 80C397D0 (__vt__8cM3dGCyl)
//	80C38DD8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80C38DF4-80C38E3C 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv */
//	80C38E0C: 80C397DC (__vt__8cM3dGAab)
//	80C38E10: 80C397DC (__vt__8cM3dGAab)
//	80C38E20: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80C38E3C-80C38E98 005C+00 s=1 e=0 z=0  None .text      __dt__10dCcD_GSttsFv */
//	80C38E54: 80C397C4 (__vt__10dCcD_GStts)
//	80C38E58: 80C397C4 (__vt__10dCcD_GStts)
//	80C38E64: 80C397B8 (__vt__10cCcD_GStts)
//	80C38E68: 80C397B8 (__vt__10cCcD_GStts)
//	80C38E7C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80C38E98-80C38F08 0070+00 s=1 e=0 z=0  None .text      __dt__12dBgS_AcchCirFv */
//	80C38EB8: 80C397AC (__vt__12dBgS_AcchCir)
//	80C38EBC: 80C397AC (__vt__12dBgS_AcchCir)
//	80C38ECC: 8026EF18 (__dt__8cM3dGCirFv)
//	80C38ED8: 802680B0 (__dt__13cBgS_PolyInfoFv)
//	80C38EE8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80C38F08-80C38F78 0070+00 s=3 e=0 z=0  None .text      __dt__12dBgS_ObjAcchFv */
//	80C38F28: 80C397E8 (__vt__12dBgS_ObjAcch)
//	80C38F2C: 80C397E8 (__vt__12dBgS_ObjAcch)
//	80C38F48: 80075F94 (__dt__9dBgS_AcchFv)
//	80C38F58: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 80C38F78-80C39068 00F0+00 s=1 e=0 z=0  None .text      bg_check__15daItemKantera_cFv */
//	80C38F90: 80C39648 (l_cyl_src)
//	80C38F94: 80C39648 (l_cyl_src)
//	80C38FC0: 80C38678 (Reflect__FP4cXyzRC13cBgS_PolyInfof)
//	80C38FCC: 80267674 (cM_atan2s__Fff)
//	80C39014: 80C38678 (Reflect__FP4cXyzRC13cBgS_PolyInfof)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::bg_check() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/bg_check__15daItemKantera_cFv.s"
}
#pragma pop

/* 80C39068-80C390A0 0038+00 s=1 e=0 z=0  None .text      actionInit__15daItemKantera_cFv */
//	80C3907C: 80037A74 (show__12daItemBase_cFv)
//	80C39084: 80C390A0 (actionWaitInit__15daItemKantera_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::actionInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/actionInit__15daItemKantera_cFv.s"
}
#pragma pop

/* 80C390A0-80C3911C 007C+00 s=2 e=0 z=0  None .text      actionWaitInit__15daItemKantera_cFv */
//	80C390F8: 80037A74 (show__12daItemBase_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::actionWaitInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/actionWaitInit__15daItemKantera_cFv.s"
}
#pragma pop

/* 80C3911C-80C39234 0118+00 s=1 e=0 z=0  None .text      actionWait__15daItemKantera_cFv */
//	80C39134: 80C39648 (l_cyl_src)
//	80C39138: 80C39648 (l_cyl_src)
//	80C39140: 8001A6CC (fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz)
//	80C39148: 804061C0 (g_dComIfG_gameInfo)
//	80C3914C: 804061C0 (g_dComIfG_gameInfo)
//	80C39154: 80076AAC (CrrPos__9dBgS_AcchFR4dBgS)
//	80C3915C: 80C38F78 (bg_check__15daItemKantera_cFv)
//	80C391B0: 804061C0 (g_dComIfG_gameInfo)
//	80C391B4: 804061C0 (g_dComIfG_gameInfo)
//	80C391E4: 8001CBA0 (fopAcM_cancelCarryNow__FP10fopAc_ac_c)
//	80C391EC: 80C39234 (initActionOrderGetDemo__15daItemKantera_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::actionWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/actionWait__15daItemKantera_cFv.s"
}
#pragma pop

/* 80C39234-80C392D0 009C+00 s=1 e=0 z=0  None .text initActionOrderGetDemo__15daItemKantera_cFv
 */
//	80C3926C: 80037A64 (hide__12daItemBase_cFv)
//	80C3927C: 8001B9D0 (fopAcM_orderItemEvent__FP10fopAc_ac_cUsUs)
//	80C392A8: 8001BC74 (fopAcM_createItemForTrBoxDemo__FPC4cXyziiiPC5csXyzPC4cXyz)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::initActionOrderGetDemo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/initActionOrderGetDemo__15daItemKantera_cFv.s"
}
#pragma pop

/* 80C392D0-80C3934C 007C+00 s=1 e=0 z=0  None .text      actionOrderGetDemo__15daItemKantera_cFv */
//	80C39308: 804061C0 (g_dComIfG_gameInfo)
//	80C3930C: 804061C0 (g_dComIfG_gameInfo)
//	80C39314: 800436EC (setPtI_Id__14dEvt_control_cFUi)
//	80C39324: 8001B9D0 (fopAcM_orderItemEvent__FP10fopAc_ac_cUsUs)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::actionOrderGetDemo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/actionOrderGetDemo__15daItemKantera_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C3968C-80C39690 0004+00 s=0 e=0 z=0  None .rodata    @3855 */
SECTION_RODATA u8 const lit_3855[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80C39690-80C39698 0008+00 s=0 e=0 z=0  None .rodata    @3856 */
SECTION_RODATA u8 const lit_3856[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C39698-80C396A0 0008+00 s=0 e=0 z=0  None .rodata    @3857 */
SECTION_RODATA u8 const lit_3857[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C396A0-80C396A8 0008+00 s=0 e=0 z=0  None .rodata    @3858 */
SECTION_RODATA u8 const lit_3858[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C396A8-80C396AC 0004+00 s=0 e=0 z=0  None .rodata    @3910 */
SECTION_RODATA u32 const lit_3910 = 0x41F00000;

/* 80C396AC-80C396B0 0004+00 s=0 e=0 z=0  None .rodata    @3911 */
SECTION_RODATA u32 const lit_3911 = 0xC0C00000;

/* 80C396B0-80C396B8 0008+00 s=0 e=0 z=0  None .rodata    @3913 */
SECTION_RODATA u8 const lit_3913[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C396B8-80C396BC 0004+00 s=0 e=0 z=0  None .rodata    @4076 */
SECTION_RODATA u32 const lit_4076 = 0x40A00000;

/* 80C396BC-80C396C0 0004+00 s=0 e=0 z=0  None .rodata    @4077 */
SECTION_RODATA u32 const lit_4077 = 0x3F800000;

/* 80C396C0-80C396C4 0004+00 s=0 e=0 z=0  None .rodata    @4078 */
SECTION_RODATA u32 const lit_4078 = 0x3F333333;

/* 80C396C4-80C396C8 0004+00 s=0 e=0 z=0  None .rodata    @4079 */
SECTION_RODATA u32 const lit_4079 = 0x40400000;

/* 80C396C8-80C396CC 0004+00 s=0 e=0 z=0  None .rodata    @4145 */
SECTION_RODATA u32 const lit_4145 = 0x3F666666;

/* 80C396CC-80C396DC 0010+00 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80C396CC = "DEFAULT_GETITEM";
#pragma pop

/* 80C3934C-80C393B0 0064+00 s=1 e=0 z=0  None .text      actionGetDemo__15daItemKantera_cFv */
//	80C39364: 804061C0 (g_dComIfG_gameInfo)
//	80C39368: 804061C0 (g_dComIfG_gameInfo)
//	80C39370: 80C396CC (stringBase0)
//	80C39374: 80C396CC (stringBase0)
//	80C39378: 80047ADC (endCheckOld__16dEvent_manager_cFPCc)
//	80C39388: 80042468 (reset__14dEvt_control_cFv)
//	80C39390: 80019C7C (fopAcM_delete__FP10fopAc_ac_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::actionGetDemo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/actionGetDemo__15daItemKantera_cFv.s"
}
#pragma pop

/* 80C393B0-80C394DC 012C+00 s=1 e=0 z=0  None .text      execute__15daItemKantera_cFv */
//	80C393C4: 80C396DC (cNullVec__6Z2Calc)
//	80C393C8: 80C396DC (cNullVec__6Z2Calc)
//	80C393CC: 80C39860 (data_80C39860)
//	80C393D0: 80C39860 (data_80C39860)
//	80C39484: 80362084 (__ptmf_scall)
//	80C394C0: 80C389F8 (setBaseMtx__15daItemKantera_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/execute__15daItemKantera_cFv.s"
}
#pragma pop

/* 80C394DC-80C39530 0054+00 s=1 e=0 z=0  None .text      draw__15daItemKantera_cFv */
//	80C394F0: 80037ACC (chkDraw__12daItemBase_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/draw__15daItemKantera_cFv.s"
}
#pragma pop

/* 80C39530-80C39568 0038+00 s=1 e=0 z=0  None .text      _delete__15daItemKantera_cFv */
//	80C39544: 803ADD88 (field_item_res__10dItem_data)
//	80C39548: 803ADD88 (field_item_res__10dItem_data)
//	80C39550: 80144724 (DeleteBase__12daItemBase_cFPCc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemKantera_c::_delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/_delete__15daItemKantera_cFv.s"
}
#pragma pop

/* 80C39568-80C39588 0020+00 s=1 e=0 z=0  None .text      daItemKantera_Draw__FP15daItemKantera_c */
//	80C39574: 80C394DC (draw__15daItemKantera_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daItemKantera_Draw(daItemKantera_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/daItemKantera_Draw__FP15daItemKantera_c.s"
}
#pragma pop

/* 80C39588-80C395A8 0020+00 s=1 e=0 z=0  None .text      daItemKantera_Execute__FP15daItemKantera_c
 */
//	80C39594: 80C393B0 (execute__15daItemKantera_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daItemKantera_Execute(daItemKantera_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/daItemKantera_Execute__FP15daItemKantera_c.s"
}
#pragma pop

/* 80C395A8-80C395C8 0020+00 s=1 e=0 z=0  None .text      daItemKantera_Delete__FP15daItemKantera_c
 */
//	80C395B4: 80C39530 (_delete__15daItemKantera_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daItemKantera_Delete(daItemKantera_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/daItemKantera_Delete__FP15daItemKantera_c.s"
}
#pragma pop

/* 80C395C8-80C395E8 0020+00 s=1 e=0 z=0  None .text      daItemKantera_Create__FP10fopAc_ac_c */
//	80C395D4: 80C38BB0 (create__15daItemKantera_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daItemKantera_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/daItemKantera_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C395E8-80C39630 0048+00 s=1 e=0 z=0  None .text      __dt__10cCcD_GSttsFv */
//	80C39600: 80C397B8 (__vt__10cCcD_GStts)
//	80C39604: 80C397B8 (__vt__10cCcD_GStts)
//	80C39614: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80C39630-80C39638 0008+00 s=1 e=0 z=0  None .text      @36@__dt__12dBgS_ObjAcchFv */
//	80C39634: 80C38F08 (__dt__12dBgS_ObjAcchFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80C39630() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/func_80C39630.s"
}
#pragma pop

/* 80C39638-80C39640 0008+00 s=1 e=0 z=0  None .text      @20@__dt__12dBgS_ObjAcchFv */
//	80C3963C: 80C38F08 (__dt__12dBgS_ObjAcchFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80C39638() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kantera/d_a_obj_kantera/func_80C39638.s"
}
#pragma pop
