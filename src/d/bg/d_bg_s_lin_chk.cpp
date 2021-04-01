//
// Generated By: dol2asm
// Translation Unit: d/bg/d_bg_s_lin_chk
//

#include "d/bg/d_bg_s_lin_chk.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {};

struct dBgS_RopeLinChk {
    /* 8007838C */ dBgS_RopeLinChk();
    /* 800783E8 */ ~dBgS_RopeLinChk();
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
    /* 80078E80 */ void SetCam();
    /* 80078E98 */ void SetLink();
    /* 80078EB0 */ void SetArrow();
    /* 80078EBC */ void SetBomb();
    /* 80078ED4 */ void SetBoomerang();
    /* 80078EE0 */ void SetRope();
    /* 80078EF8 */ void SetHorse();
};

struct dBgS_ObjLinChk {
    /* 80077F5C */ dBgS_ObjLinChk();
    /* 80077FB8 */ ~dBgS_ObjLinChk();
};

struct dBgS_LinkLinChk {
    /* 80078030 */ dBgS_LinkLinChk();
    /* 8007808C */ ~dBgS_LinkLinChk();
};

struct cXyz {};

struct dBgS_LinChk {
    /* 80077C68 */ dBgS_LinChk();
    /* 80077CDC */ ~dBgS_LinChk();
    /* 80077D64 */ void Set(cXyz const*, cXyz const*, fopAc_ac_c const*);
};

struct dBgS_HorseLinChk {
    /* 80078460 */ dBgS_HorseLinChk();
    /* 800784BC */ ~dBgS_HorseLinChk();
};

struct dBgS_Chk {
    /* 8007749C */ dBgS_Chk();
    /* 800774E8 */ ~dBgS_Chk();
    /* 80077560 */ void GetPolyPassChkInfo();
    /* 80077564 */ void GetGrpPassChkInfo();
};

struct dBgS_CamLinChk_NorWtr {
    /* 80077E78 */ dBgS_CamLinChk_NorWtr();
    /* 80077EE4 */ ~dBgS_CamLinChk_NorWtr();
};

struct dBgS_CamLinChk {
    /* 80077DA4 */ dBgS_CamLinChk();
    /* 80077E00 */ ~dBgS_CamLinChk();
};

struct dBgS_BoomerangLinChk {
    /* 800782B8 */ dBgS_BoomerangLinChk();
    /* 80078314 */ ~dBgS_BoomerangLinChk();
};

struct dBgS_BombLinChk {
    /* 80078104 */ dBgS_BombLinChk();
    /* 80078160 */ ~dBgS_BombLinChk();
};

struct dBgS_ArrowLinChk {
    /* 800781D8 */ dBgS_ArrowLinChk();
    /* 80078240 */ ~dBgS_ArrowLinChk();
};

struct cBgS_LinChk {
    /* 80267D5C */ cBgS_LinChk();
    /* 80267DBC */ ~cBgS_LinChk();
    /* 80267ED0 */ void Set2(cXyz const*, cXyz const*, unsigned int);
};

//
// Forward References:
//

extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void __ct__14dBgS_CamLinChkFv();
extern "C" void __dt__14dBgS_CamLinChkFv();
extern "C" void __ct__21dBgS_CamLinChk_NorWtrFv();
extern "C" void __dt__21dBgS_CamLinChk_NorWtrFv();
extern "C" void __ct__14dBgS_ObjLinChkFv();
extern "C" void __dt__14dBgS_ObjLinChkFv();
extern "C" void __ct__15dBgS_LinkLinChkFv();
extern "C" void __dt__15dBgS_LinkLinChkFv();
extern "C" void __ct__15dBgS_BombLinChkFv();
extern "C" void __dt__15dBgS_BombLinChkFv();
extern "C" void __ct__16dBgS_ArrowLinChkFv();
extern "C" void __dt__16dBgS_ArrowLinChkFv();
extern "C" void __ct__20dBgS_BoomerangLinChkFv();
extern "C" void __dt__20dBgS_BoomerangLinChkFv();
extern "C" void __ct__15dBgS_RopeLinChkFv();
extern "C" void __dt__15dBgS_RopeLinChkFv();
extern "C" void __ct__16dBgS_HorseLinChkFv();
extern "C" void __dt__16dBgS_HorseLinChkFv();
extern "C" static void func_80078534();
extern "C" static void func_8007853C();
extern "C" static void func_80078544();
extern "C" static void func_8007854C();
extern "C" static void func_80078554();
extern "C" static void func_8007855C();
extern "C" static void func_80078564();
extern "C" static void func_8007856C();
extern "C" static void func_80078574();
extern "C" static void func_8007857C();
extern "C" static void func_80078584();
extern "C" static void func_8007858C();
extern "C" static void func_80078594();
extern "C" static void func_8007859C();
extern "C" static void func_800785A4();
extern "C" static void func_800785AC();
extern "C" static void func_800785B4();
extern "C" static void func_800785BC();
extern "C" static void func_800785C4();
extern "C" static void func_800785CC();
extern "C" static void func_800785D4();
extern "C" static void func_800785DC();
extern "C" static void func_800785E4();
extern "C" static void func_800785EC();
extern "C" static void func_800785F4();
extern "C" static void func_800785FC();
extern "C" static void func_80078604();
extern "C" static void func_8007860C();
extern "C" static void func_80078614();
extern "C" static void func_8007861C();
extern "C" extern void* __vt__16dBgS_HorseLinChk[12];
extern "C" extern void* __vt__15dBgS_RopeLinChk[12];
extern "C" extern void* __vt__20dBgS_BoomerangLinChk[12];
extern "C" extern void* __vt__16dBgS_ArrowLinChk[12];
extern "C" extern void* __vt__15dBgS_BombLinChk[12];
extern "C" extern void* __vt__15dBgS_LinkLinChk[12];
extern "C" extern void* __vt__14dBgS_ObjLinChk[12];
extern "C" extern void* __vt__21dBgS_CamLinChk_NorWtr[12];
extern "C" extern void* __vt__14dBgS_CamLinChk[12];
extern "C" extern void* __vt__11dBgS_LinChk[12];

//
// External References:
//

void operator delete(void*);

extern "C" void __ct__8dBgS_ChkFv();
extern "C" void __dt__8dBgS_ChkFv();
extern "C" void GetPolyPassChkInfo__8dBgS_ChkFv();
extern "C" void GetGrpPassChkInfo__8dBgS_ChkFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void SetCam__16dBgS_PolyPassChkFv();
extern "C" void SetLink__16dBgS_PolyPassChkFv();
extern "C" void SetArrow__16dBgS_PolyPassChkFv();
extern "C" void SetBomb__16dBgS_PolyPassChkFv();
extern "C" void SetBoomerang__16dBgS_PolyPassChkFv();
extern "C" void SetRope__16dBgS_PolyPassChkFv();
extern "C" void SetHorse__16dBgS_PolyPassChkFv();
extern "C" void __ct__11cBgS_LinChkFv();
extern "C" void __dt__11cBgS_LinChkFv();
extern "C" void Set2__11cBgS_LinChkFPC4cXyzPC4cXyzUi();
extern "C" void __dl__FPv();

//
// Declarations:
//

/* ############################################################################################## */
/* 803AB7C0-803AB7F0 0030+00 s=2 e=0 z=0  None .data      __vt__16dBgS_HorseLinChk */
SECTION_DATA void* __vt__16dBgS_HorseLinChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16dBgS_HorseLinChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8007860C,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8007861C,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80078614,
};

/* 803AB7F0-803AB820 0030+00 s=2 e=0 z=0  None .data      __vt__15dBgS_RopeLinChk */
SECTION_DATA void* __vt__15dBgS_RopeLinChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15dBgS_RopeLinChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_800785F4,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80078604,
    (void*)NULL,
    (void*)NULL,
    (void*)func_800785FC,
};

/* 803AB820-803AB850 0030+00 s=2 e=0 z=0  None .data      __vt__20dBgS_BoomerangLinChk */
SECTION_DATA void* __vt__20dBgS_BoomerangLinChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__20dBgS_BoomerangLinChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_800785DC,
    (void*)NULL,
    (void*)NULL,
    (void*)func_800785EC,
    (void*)NULL,
    (void*)NULL,
    (void*)func_800785E4,
};

/* 803AB850-803AB880 0030+00 s=2 e=0 z=0  None .data      __vt__16dBgS_ArrowLinChk */
SECTION_DATA void* __vt__16dBgS_ArrowLinChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16dBgS_ArrowLinChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_800785C4,
    (void*)NULL,
    (void*)NULL,
    (void*)func_800785D4,
    (void*)NULL,
    (void*)NULL,
    (void*)func_800785CC,
};

/* 803AB880-803AB8B0 0030+00 s=2 e=0 z=0  None .data      __vt__15dBgS_BombLinChk */
SECTION_DATA void* __vt__15dBgS_BombLinChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15dBgS_BombLinChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_800785AC,
    (void*)NULL,
    (void*)NULL,
    (void*)func_800785BC,
    (void*)NULL,
    (void*)NULL,
    (void*)func_800785B4,
};

/* 803AB8B0-803AB8E0 0030+00 s=2 e=0 z=0  None .data      __vt__15dBgS_LinkLinChk */
SECTION_DATA void* __vt__15dBgS_LinkLinChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15dBgS_LinkLinChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80078594,
    (void*)NULL,
    (void*)NULL,
    (void*)func_800785A4,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8007859C,
};

/* 803AB8E0-803AB910 0030+00 s=2 e=0 z=0  None .data      __vt__14dBgS_ObjLinChk */
SECTION_DATA void* __vt__14dBgS_ObjLinChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14dBgS_ObjLinChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8007857C,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8007858C,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80078584,
};

/* 803AB910-803AB940 0030+00 s=2 e=0 z=0  None .data      __vt__21dBgS_CamLinChk_NorWtr */
SECTION_DATA void* __vt__21dBgS_CamLinChk_NorWtr[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__21dBgS_CamLinChk_NorWtrFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80078564,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80078574,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8007856C,
};

/* 803AB940-803AB970 0030+00 s=2 e=0 z=0  None .data      __vt__14dBgS_CamLinChk */
SECTION_DATA void* __vt__14dBgS_CamLinChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14dBgS_CamLinChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8007854C,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8007855C,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80078554,
};

/* 803AB970-803AB9A0 0030+00 s=2 e=0 z=0  None .data      __vt__11dBgS_LinChk */
SECTION_DATA void* __vt__11dBgS_LinChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__11dBgS_LinChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80078534,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80078544,
    (void*)NULL,
    (void*)NULL,
    (void*)func_8007853C,
};

/* 80077C68-80077CDC 0074+00 s=8 e=3 z=388  None .text      __ct__11dBgS_LinChkFv */
//	80077C7C: 80267D5C (__ct__11cBgS_LinChkFv)
//	80077C84: 8007749C (__ct__8dBgS_ChkFv)
//	80077C88: 803AB970 (__vt__11dBgS_LinChk)
//	80077C8C: 803AB970 (__vt__11dBgS_LinChk)
//	80077CB0: 80077560 (GetPolyPassChkInfo__8dBgS_ChkFv)
//	80077CBC: 80077564 (GetGrpPassChkInfo__8dBgS_ChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_LinChk::dBgS_LinChk() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/__ct__11dBgS_LinChkFv.s"
}
#pragma pop

/* 80077CDC-80077D64 0088+00 s=12 e=5 z=378  None .text      __dt__11dBgS_LinChkFv */
//	80077CFC: 803AB970 (__vt__11dBgS_LinChk)
//	80077D00: 803AB970 (__vt__11dBgS_LinChk)
//	80077D28: 800774E8 (__dt__8dBgS_ChkFv)
//	80077D34: 80267DBC (__dt__11cBgS_LinChkFv)
//	80077D44: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_LinChk::~dBgS_LinChk() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/__dt__11dBgS_LinChkFv.s"
}
#pragma pop

/* 80077D64-80077DA4 0040+00 s=0 e=15 z=307  None .text
 * Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c              */
//	80077D90: 80267ED0 (Set2__11cBgS_LinChkFPC4cXyzPC4cXyzUi)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_LinChk::Set(cXyz const* param_0, cXyz const* param_1, fopAc_ac_c const* param_2) {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c.s"
}
#pragma pop

/* 80077DA4-80077E00 005C+00 s=1 e=12 z=1  None .text      __ct__14dBgS_CamLinChkFv */
//	80077DB8: 80077C68 (__ct__11dBgS_LinChkFv)
//	80077DBC: 803AB940 (__vt__14dBgS_CamLinChk)
//	80077DC0: 803AB940 (__vt__14dBgS_CamLinChk)
//	80077DE4: 80078E80 (SetCam__16dBgS_PolyPassChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_CamLinChk::dBgS_CamLinChk() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/__ct__14dBgS_CamLinChkFv.s"
}
#pragma pop

/* 80077E00-80077E78 0078+00 s=5 e=12 z=1  None .text      __dt__14dBgS_CamLinChkFv */
//	80077E20: 803AB940 (__vt__14dBgS_CamLinChk)
//	80077E24: 803AB940 (__vt__14dBgS_CamLinChk)
//	80077E48: 80077CDC (__dt__11dBgS_LinChkFv)
//	80077E58: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_CamLinChk::~dBgS_CamLinChk() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/__dt__14dBgS_CamLinChkFv.s"
}
#pragma pop

/* 80077E78-80077EE4 006C+00 s=0 e=0 z=1  None .text      __ct__21dBgS_CamLinChk_NorWtrFv */
//	80077E8C: 80077DA4 (__ct__14dBgS_CamLinChkFv)
//	80077E90: 803AB910 (__vt__21dBgS_CamLinChk_NorWtr)
//	80077E94: 803AB910 (__vt__21dBgS_CamLinChk_NorWtr)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_CamLinChk_NorWtr::dBgS_CamLinChk_NorWtr() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/__ct__21dBgS_CamLinChk_NorWtrFv.s"
}
#pragma pop

/* 80077EE4-80077F5C 0078+00 s=4 e=0 z=1  None .text      __dt__21dBgS_CamLinChk_NorWtrFv */
//	80077F04: 803AB910 (__vt__21dBgS_CamLinChk_NorWtr)
//	80077F08: 803AB910 (__vt__21dBgS_CamLinChk_NorWtr)
//	80077F2C: 80077E00 (__dt__14dBgS_CamLinChkFv)
//	80077F3C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_CamLinChk_NorWtr::~dBgS_CamLinChk_NorWtr() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/__dt__21dBgS_CamLinChk_NorWtrFv.s"
}
#pragma pop

/* 80077F5C-80077FB8 005C+00 s=0 e=4 z=9  None .text      __ct__14dBgS_ObjLinChkFv */
//	80077F70: 80077C68 (__ct__11dBgS_LinChkFv)
//	80077F74: 803AB8E0 (__vt__14dBgS_ObjLinChk)
//	80077F78: 803AB8E0 (__vt__14dBgS_ObjLinChk)
//	80077F9C: 80078E68 (SetObj__16dBgS_PolyPassChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjLinChk::dBgS_ObjLinChk() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/__ct__14dBgS_ObjLinChkFv.s"
}
#pragma pop

/* 80077FB8-80078030 0078+00 s=4 e=2 z=11  None .text      __dt__14dBgS_ObjLinChkFv */
//	80077FD8: 803AB8E0 (__vt__14dBgS_ObjLinChk)
//	80077FDC: 803AB8E0 (__vt__14dBgS_ObjLinChk)
//	80078000: 80077CDC (__dt__11dBgS_LinChkFv)
//	80078010: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjLinChk::~dBgS_ObjLinChk() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/__dt__14dBgS_ObjLinChkFv.s"
}
#pragma pop

/* 80078030-8007808C 005C+00 s=0 e=1 z=4  None .text      __ct__15dBgS_LinkLinChkFv */
//	80078044: 80077C68 (__ct__11dBgS_LinChkFv)
//	80078048: 803AB8B0 (__vt__15dBgS_LinkLinChk)
//	8007804C: 803AB8B0 (__vt__15dBgS_LinkLinChk)
//	80078070: 80078E98 (SetLink__16dBgS_PolyPassChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_LinkLinChk::dBgS_LinkLinChk() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/__ct__15dBgS_LinkLinChkFv.s"
}
#pragma pop

/* 8007808C-80078104 0078+00 s=4 e=1 z=5  None .text      __dt__15dBgS_LinkLinChkFv */
//	800780AC: 803AB8B0 (__vt__15dBgS_LinkLinChk)
//	800780B0: 803AB8B0 (__vt__15dBgS_LinkLinChk)
//	800780D4: 80077CDC (__dt__11dBgS_LinChkFv)
//	800780E4: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_LinkLinChk::~dBgS_LinkLinChk() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/__dt__15dBgS_LinkLinChkFv.s"
}
#pragma pop

/* 80078104-80078160 005C+00 s=0 e=0 z=1  None .text      __ct__15dBgS_BombLinChkFv */
//	80078118: 80077C68 (__ct__11dBgS_LinChkFv)
//	8007811C: 803AB880 (__vt__15dBgS_BombLinChk)
//	80078120: 803AB880 (__vt__15dBgS_BombLinChk)
//	80078144: 80078EBC (SetBomb__16dBgS_PolyPassChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_BombLinChk::dBgS_BombLinChk() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/__ct__15dBgS_BombLinChkFv.s"
}
#pragma pop

/* 80078160-800781D8 0078+00 s=4 e=0 z=1  None .text      __dt__15dBgS_BombLinChkFv */
//	80078180: 803AB880 (__vt__15dBgS_BombLinChk)
//	80078184: 803AB880 (__vt__15dBgS_BombLinChk)
//	800781A8: 80077CDC (__dt__11dBgS_LinChkFv)
//	800781B8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_BombLinChk::~dBgS_BombLinChk() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/__dt__15dBgS_BombLinChkFv.s"
}
#pragma pop

/* 800781D8-80078240 0068+00 s=0 e=1 z=2  None .text      __ct__16dBgS_ArrowLinChkFv */
//	800781EC: 80077C68 (__ct__11dBgS_LinChkFv)
//	800781F0: 803AB850 (__vt__16dBgS_ArrowLinChk)
//	800781F4: 803AB850 (__vt__16dBgS_ArrowLinChk)
//	80078218: 80078EB0 (SetArrow__16dBgS_PolyPassChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ArrowLinChk::dBgS_ArrowLinChk() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/__ct__16dBgS_ArrowLinChkFv.s"
}
#pragma pop

/* 80078240-800782B8 0078+00 s=4 e=1 z=2  None .text      __dt__16dBgS_ArrowLinChkFv */
//	80078260: 803AB850 (__vt__16dBgS_ArrowLinChk)
//	80078264: 803AB850 (__vt__16dBgS_ArrowLinChk)
//	80078288: 80077CDC (__dt__11dBgS_LinChkFv)
//	80078298: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ArrowLinChk::~dBgS_ArrowLinChk() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/__dt__16dBgS_ArrowLinChkFv.s"
}
#pragma pop

/* 800782B8-80078314 005C+00 s=0 e=1 z=1  None .text      __ct__20dBgS_BoomerangLinChkFv */
//	800782CC: 80077C68 (__ct__11dBgS_LinChkFv)
//	800782D0: 803AB820 (__vt__20dBgS_BoomerangLinChk)
//	800782D4: 803AB820 (__vt__20dBgS_BoomerangLinChk)
//	800782F8: 80078ED4 (SetBoomerang__16dBgS_PolyPassChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_BoomerangLinChk::dBgS_BoomerangLinChk() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/__ct__20dBgS_BoomerangLinChkFv.s"
}
#pragma pop

/* 80078314-8007838C 0078+00 s=4 e=1 z=1  None .text      __dt__20dBgS_BoomerangLinChkFv */
//	80078334: 803AB820 (__vt__20dBgS_BoomerangLinChk)
//	80078338: 803AB820 (__vt__20dBgS_BoomerangLinChk)
//	8007835C: 80077CDC (__dt__11dBgS_LinChkFv)
//	8007836C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_BoomerangLinChk::~dBgS_BoomerangLinChk() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/__dt__20dBgS_BoomerangLinChkFv.s"
}
#pragma pop

/* 8007838C-800783E8 005C+00 s=0 e=1 z=0  None .text      __ct__15dBgS_RopeLinChkFv */
//	800783A0: 80077C68 (__ct__11dBgS_LinChkFv)
//	800783A4: 803AB7F0 (__vt__15dBgS_RopeLinChk)
//	800783A8: 803AB7F0 (__vt__15dBgS_RopeLinChk)
//	800783CC: 80078EE0 (SetRope__16dBgS_PolyPassChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_RopeLinChk::dBgS_RopeLinChk() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/__ct__15dBgS_RopeLinChkFv.s"
}
#pragma pop

/* 800783E8-80078460 0078+00 s=4 e=1 z=0  None .text      __dt__15dBgS_RopeLinChkFv */
//	80078408: 803AB7F0 (__vt__15dBgS_RopeLinChk)
//	8007840C: 803AB7F0 (__vt__15dBgS_RopeLinChk)
//	80078430: 80077CDC (__dt__11dBgS_LinChkFv)
//	80078440: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_RopeLinChk::~dBgS_RopeLinChk() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/__dt__15dBgS_RopeLinChkFv.s"
}
#pragma pop

/* 80078460-800784BC 005C+00 s=0 e=0 z=1  None .text      __ct__16dBgS_HorseLinChkFv */
//	80078474: 80077C68 (__ct__11dBgS_LinChkFv)
//	80078478: 803AB7C0 (__vt__16dBgS_HorseLinChk)
//	8007847C: 803AB7C0 (__vt__16dBgS_HorseLinChk)
//	800784A0: 80078EF8 (SetHorse__16dBgS_PolyPassChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_HorseLinChk::dBgS_HorseLinChk() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/__ct__16dBgS_HorseLinChkFv.s"
}
#pragma pop

/* 800784BC-80078534 0078+00 s=4 e=0 z=1  None .text      __dt__16dBgS_HorseLinChkFv */
//	800784DC: 803AB7C0 (__vt__16dBgS_HorseLinChk)
//	800784E0: 803AB7C0 (__vt__16dBgS_HorseLinChk)
//	80078504: 80077CDC (__dt__11dBgS_LinChkFv)
//	80078514: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_HorseLinChk::~dBgS_HorseLinChk() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/__dt__16dBgS_HorseLinChkFv.s"
}
#pragma pop

/* 80078534-8007853C 0008+00 s=1 e=0 z=0  None .text      @20@__dt__11dBgS_LinChkFv */
//	80078538: 80077CDC (__dt__11dBgS_LinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80078534() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_80078534.s"
}
#pragma pop

/* 8007853C-80078544 0008+00 s=1 e=0 z=0  None .text      @104@__dt__11dBgS_LinChkFv */
//	80078540: 80077CDC (__dt__11dBgS_LinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8007853C() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_8007853C.s"
}
#pragma pop

/* 80078544-8007854C 0008+00 s=1 e=0 z=0  None .text      @88@__dt__11dBgS_LinChkFv */
//	80078548: 80077CDC (__dt__11dBgS_LinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80078544() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_80078544.s"
}
#pragma pop

/* 8007854C-80078554 0008+00 s=1 e=0 z=0  None .text      @20@__dt__14dBgS_CamLinChkFv */
//	80078550: 80077E00 (__dt__14dBgS_CamLinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8007854C() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_8007854C.s"
}
#pragma pop

/* 80078554-8007855C 0008+00 s=1 e=0 z=0  None .text      @104@__dt__14dBgS_CamLinChkFv */
//	80078558: 80077E00 (__dt__14dBgS_CamLinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80078554() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_80078554.s"
}
#pragma pop

/* 8007855C-80078564 0008+00 s=1 e=0 z=0  None .text      @88@__dt__14dBgS_CamLinChkFv */
//	80078560: 80077E00 (__dt__14dBgS_CamLinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8007855C() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_8007855C.s"
}
#pragma pop

/* 80078564-8007856C 0008+00 s=1 e=0 z=0  None .text      @20@__dt__21dBgS_CamLinChk_NorWtrFv */
//	80078568: 80077EE4 (__dt__21dBgS_CamLinChk_NorWtrFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80078564() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_80078564.s"
}
#pragma pop

/* 8007856C-80078574 0008+00 s=1 e=0 z=0  None .text      @104@__dt__21dBgS_CamLinChk_NorWtrFv */
//	80078570: 80077EE4 (__dt__21dBgS_CamLinChk_NorWtrFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8007856C() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_8007856C.s"
}
#pragma pop

/* 80078574-8007857C 0008+00 s=1 e=0 z=0  None .text      @88@__dt__21dBgS_CamLinChk_NorWtrFv */
//	80078578: 80077EE4 (__dt__21dBgS_CamLinChk_NorWtrFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80078574() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_80078574.s"
}
#pragma pop

/* 8007857C-80078584 0008+00 s=1 e=0 z=0  None .text      @20@__dt__14dBgS_ObjLinChkFv */
//	80078580: 80077FB8 (__dt__14dBgS_ObjLinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8007857C() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_8007857C.s"
}
#pragma pop

/* 80078584-8007858C 0008+00 s=1 e=0 z=0  None .text      @104@__dt__14dBgS_ObjLinChkFv */
//	80078588: 80077FB8 (__dt__14dBgS_ObjLinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80078584() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_80078584.s"
}
#pragma pop

/* 8007858C-80078594 0008+00 s=1 e=0 z=0  None .text      @88@__dt__14dBgS_ObjLinChkFv */
//	80078590: 80077FB8 (__dt__14dBgS_ObjLinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8007858C() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_8007858C.s"
}
#pragma pop

/* 80078594-8007859C 0008+00 s=1 e=0 z=0  None .text      @20@__dt__15dBgS_LinkLinChkFv */
//	80078598: 8007808C (__dt__15dBgS_LinkLinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80078594() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_80078594.s"
}
#pragma pop

/* 8007859C-800785A4 0008+00 s=1 e=0 z=0  None .text      @104@__dt__15dBgS_LinkLinChkFv */
//	800785A0: 8007808C (__dt__15dBgS_LinkLinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8007859C() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_8007859C.s"
}
#pragma pop

/* 800785A4-800785AC 0008+00 s=1 e=0 z=0  None .text      @88@__dt__15dBgS_LinkLinChkFv */
//	800785A8: 8007808C (__dt__15dBgS_LinkLinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_800785A4() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_800785A4.s"
}
#pragma pop

/* 800785AC-800785B4 0008+00 s=1 e=0 z=0  None .text      @20@__dt__15dBgS_BombLinChkFv */
//	800785B0: 80078160 (__dt__15dBgS_BombLinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_800785AC() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_800785AC.s"
}
#pragma pop

/* 800785B4-800785BC 0008+00 s=1 e=0 z=0  None .text      @104@__dt__15dBgS_BombLinChkFv */
//	800785B8: 80078160 (__dt__15dBgS_BombLinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_800785B4() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_800785B4.s"
}
#pragma pop

/* 800785BC-800785C4 0008+00 s=1 e=0 z=0  None .text      @88@__dt__15dBgS_BombLinChkFv */
//	800785C0: 80078160 (__dt__15dBgS_BombLinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_800785BC() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_800785BC.s"
}
#pragma pop

/* 800785C4-800785CC 0008+00 s=1 e=0 z=0  None .text      @20@__dt__16dBgS_ArrowLinChkFv */
//	800785C8: 80078240 (__dt__16dBgS_ArrowLinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_800785C4() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_800785C4.s"
}
#pragma pop

/* 800785CC-800785D4 0008+00 s=1 e=0 z=0  None .text      @104@__dt__16dBgS_ArrowLinChkFv */
//	800785D0: 80078240 (__dt__16dBgS_ArrowLinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_800785CC() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_800785CC.s"
}
#pragma pop

/* 800785D4-800785DC 0008+00 s=1 e=0 z=0  None .text      @88@__dt__16dBgS_ArrowLinChkFv */
//	800785D8: 80078240 (__dt__16dBgS_ArrowLinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_800785D4() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_800785D4.s"
}
#pragma pop

/* 800785DC-800785E4 0008+00 s=1 e=0 z=0  None .text      @20@__dt__20dBgS_BoomerangLinChkFv */
//	800785E0: 80078314 (__dt__20dBgS_BoomerangLinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_800785DC() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_800785DC.s"
}
#pragma pop

/* 800785E4-800785EC 0008+00 s=1 e=0 z=0  None .text      @104@__dt__20dBgS_BoomerangLinChkFv */
//	800785E8: 80078314 (__dt__20dBgS_BoomerangLinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_800785E4() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_800785E4.s"
}
#pragma pop

/* 800785EC-800785F4 0008+00 s=1 e=0 z=0  None .text      @88@__dt__20dBgS_BoomerangLinChkFv */
//	800785F0: 80078314 (__dt__20dBgS_BoomerangLinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_800785EC() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_800785EC.s"
}
#pragma pop

/* 800785F4-800785FC 0008+00 s=1 e=0 z=0  None .text      @20@__dt__15dBgS_RopeLinChkFv */
//	800785F8: 800783E8 (__dt__15dBgS_RopeLinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_800785F4() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_800785F4.s"
}
#pragma pop

/* 800785FC-80078604 0008+00 s=1 e=0 z=0  None .text      @104@__dt__15dBgS_RopeLinChkFv */
//	80078600: 800783E8 (__dt__15dBgS_RopeLinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_800785FC() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_800785FC.s"
}
#pragma pop

/* 80078604-8007860C 0008+00 s=1 e=0 z=0  None .text      @88@__dt__15dBgS_RopeLinChkFv */
//	80078608: 800783E8 (__dt__15dBgS_RopeLinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80078604() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_80078604.s"
}
#pragma pop

/* 8007860C-80078614 0008+00 s=1 e=0 z=0  None .text      @20@__dt__16dBgS_HorseLinChkFv */
//	80078610: 800784BC (__dt__16dBgS_HorseLinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8007860C() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_8007860C.s"
}
#pragma pop

/* 80078614-8007861C 0008+00 s=1 e=0 z=0  None .text      @104@__dt__16dBgS_HorseLinChkFv */
//	80078618: 800784BC (__dt__16dBgS_HorseLinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_80078614() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_80078614.s"
}
#pragma pop

/* 8007861C-80078624 0008+00 s=1 e=0 z=0  None .text      @88@__dt__16dBgS_HorseLinChkFv */
//	80078620: 800784BC (__dt__16dBgS_HorseLinChkFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8007861C() {
    nofralloc
#include "asm/d/bg/d_bg_s_lin_chk/func_8007861C.s"
}
#pragma pop
