//
// Generated By: dol2asm
// Translation Unit: d_a_obj_eff
//

#include "rel/d/a/obj/d_a_obj_eff/d_a_obj_eff.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daObjEff {
    struct Act_c {
        struct Prm_e {};

        /* 8057C9D8 */ void _create();
    };
};

struct daObj {
    /*          */ template <typename A1>
    /*          */ void
        PrmAbstract(/* fopAc_ac_c const*, daObjEff::Act_c::Prm_e, daObjEff::Act_c::Prm_e */);
    /* 8057CAD4 */ /* PrmAbstract<daObjEff::Act_c::Prm_e> */
    void PrmAbstract__template0(fopAc_ac_c const*, daObjEff::Act_c::Prm_e, daObjEff::Act_c::Prm_e);
};

struct dPa_levelEcallBack {};

struct cXyz {};

struct csXyz {};

struct dKy_tevstr_c {};

struct _GXColor {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

//
// Forward References:
//

extern "C" void _create__Q28daObjEff5Act_cFv();
extern "C" static void func_8057CA94();
extern "C" static bool func_8057CAB4();
extern "C" static bool func_8057CABC();
extern "C" static bool func_8057CAC4();
extern "C" static bool func_8057CACC();
extern "C" void func_8057CAD4();
extern "C" extern void* g_profile_Obj_Eff[12];

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* ############################################################################################## */
/* 8057CAF8-8057CAFC 0004+00 s=1 e=0 z=0  None .rodata    @3648 */
SECTION_RODATA static u8 const lit_3648[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8057C9D8-8057CA94 00BC+00 s=1 e=0 z=0  None .text      _create__Q28daObjEff5Act_cFv */
//	8057CA00: 80018B64 (__ct__10fopAc_ac_cFv)
//	8057CA1C: 8057CAD4 (func_8057CAD4)
//	8057CA30: 804061C0 (g_dComIfG_gameInfo)
//	8057CA34: 804061C0 (g_dComIfG_gameInfo)
//	8057CA70: 8057CAF8 (lit_3648)
//	8057CA74: 8057CAF8 (lit_3648)
//	8057CA78: 8004CA90
//(set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjEff::Act_c::_create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_eff/d_a_obj_eff/_create__Q28daObjEff5Act_cFv.s"
}
#pragma pop

/* 8057CA94-8057CAB4 0020+00 s=1 e=0 z=0  None .text
 * Mthd_Create__Q28daObjEff25@unnamed@d_a_obj_eff_cpp@FPv       */
//	8057CAA0: 8057C9D8 (_create__Q28daObjEff5Act_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void func_8057CA94() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_eff/d_a_obj_eff/func_8057CA94.s"
}
#pragma pop

/* 8057CAB4-8057CABC 0008+00 s=1 e=0 z=0  None .text
 * Mthd_Delete__Q28daObjEff25@unnamed@d_a_obj_eff_cpp@FPv       */
extern "C" static bool func_8057CAB4() {
    return true;
}

/* 8057CABC-8057CAC4 0008+00 s=1 e=0 z=0  None .text
 * Mthd_Execute__Q28daObjEff25@unnamed@d_a_obj_eff_cpp@FPv      */
extern "C" static bool func_8057CABC() {
    return true;
}

/* 8057CAC4-8057CACC 0008+00 s=1 e=0 z=0  None .text
 * Mthd_Draw__Q28daObjEff25@unnamed@d_a_obj_eff_cpp@FPv         */
extern "C" static bool func_8057CAC4() {
    return true;
}

/* 8057CACC-8057CAD4 0008+00 s=1 e=0 z=0  None .text
 * Mthd_IsDelete__Q28daObjEff25@unnamed@d_a_obj_eff_cpp@FPv     */
extern "C" static bool func_8057CACC() {
    return true;
}

/* 8057CAD4-8057CAF0 001C+00 s=1 e=0 z=0  None .text
 * PrmAbstract<Q38daObjEff5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ38daObjEff5Act_c5Prm_eQ38daObjEff5Act_c5Prm_e
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj::PrmAbstract__template0(fopAc_ac_c const* param_0, daObjEff::Act_c::Prm_e param_1,
                                       daObjEff::Act_c::Prm_e param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_eff/d_a_obj_eff/func_8057CAD4.s"
}
#pragma pop

/* ############################################################################################## */
/* 8057CAFC-8057CB1C 0020+00 s=1 e=0 z=0  None .data
 * Mthd_Table__Q28daObjEff25@unnamed@d_a_obj_eff_cpp@           */
SECTION_DATA static void* data_8057CAFC[8] = {
    (void*)func_8057CA94, (void*)func_8057CAB4, (void*)func_8057CABC, (void*)func_8057CACC,
    (void*)func_8057CAC4, (void*)NULL,          (void*)NULL,          (void*)NULL,
};

/* 8057CB1C-8057CB4C 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Eff */
SECTION_DATA void* g_profile_Obj_Eff[12] = {
    (void*)0xFFFFFFFD, (void*)0x0009FFFD,     (void*)0x03010000, (void*)&g_fpcLf_Method,
    (void*)0x00000568, (void*)NULL,           (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x010B0000, (void*)&data_8057CAFC, (void*)0x00040000, (void*)NULL,
};
