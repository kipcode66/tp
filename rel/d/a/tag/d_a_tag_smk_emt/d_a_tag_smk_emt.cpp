//
// Generated By: dol2asm
// Translation Unit: d_a_tag_smk_emt
//

#include "rel/d/a/tag/d_a_tag_smk_emt/d_a_tag_smk_emt.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTagSmkEmt_c {
    /* 80D612D8 */ daTagSmkEmt_c();
    /* 80D61324 */ ~daTagSmkEmt_c();
    /* 80D61384 */ void create();
    /* 80D613DC */ void Delete();
    /* 80D61400 */ bool draw();
    /* 80D61408 */ bool execute();
    /* 80D61410 */ void createSmkEmt();
    /* 80D61500 */ void deleteSmkEmt();
};

struct dPa_levelEcallBack {};

struct cXyz {};

struct csXyz {
    /* 802673F4 */ csXyz(s16, s16, s16);
};

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

static void daTagSmkEmt_create(daTagSmkEmt_c*);
static void daTagSmkEmt_Delete(daTagSmkEmt_c*);
static void daTagSmkEmt_execute(daTagSmkEmt_c*);
static void daTagSmkEmt_draw(daTagSmkEmt_c*);

extern "C" void __ct__13daTagSmkEmt_cFv();
extern "C" void __dt__13daTagSmkEmt_cFv();
extern "C" void create__13daTagSmkEmt_cFv();
extern "C" void Delete__13daTagSmkEmt_cFv();
extern "C" bool draw__13daTagSmkEmt_cFv();
extern "C" bool execute__13daTagSmkEmt_cFv();
extern "C" void createSmkEmt__13daTagSmkEmt_cFv();
extern "C" void deleteSmkEmt__13daTagSmkEmt_cFv();
extern "C" static void daTagSmkEmt_create__FP13daTagSmkEmt_c();
extern "C" static void daTagSmkEmt_Delete__FP13daTagSmkEmt_c();
extern "C" static void daTagSmkEmt_execute__FP13daTagSmkEmt_c();
extern "C" static void daTagSmkEmt_draw__FP13daTagSmkEmt_c();
extern "C" extern void* g_profile_Tag_SmkEmt[12];
extern "C" extern void* __vt__13daTagSmkEmt_c[3];

//
// External References:
//

void operator delete(void*);

SECTION_INIT void memset();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void __ct__5csXyzFsss();
extern "C" void __dl__FPv();
extern "C" void _savegpr_25();
extern "C" void _restgpr_25();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* ############################################################################################## */
/* 80D6160C-80D6162C 0020+00 s=1 e=0 z=0  None .data      daTagSmkEmt_METHODS */
SECTION_DATA static void* daTagSmkEmt_METHODS[8] = {
    (void*)daTagSmkEmt_create__FP13daTagSmkEmt_c,
    (void*)daTagSmkEmt_Delete__FP13daTagSmkEmt_c,
    (void*)daTagSmkEmt_execute__FP13daTagSmkEmt_c,
    (void*)NULL,
    (void*)daTagSmkEmt_draw__FP13daTagSmkEmt_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D6162C-80D6165C 0030+00 s=0 e=0 z=1  None .data      g_profile_Tag_SmkEmt */
SECTION_DATA void* g_profile_Tag_SmkEmt[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01A00000, (void*)&g_fpcLf_Method,
    (void*)0x00000578, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02E70000, (void*)&daTagSmkEmt_METHODS,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80D6165C-80D61668 000C+00 s=2 e=0 z=0  None .data      __vt__13daTagSmkEmt_c */
SECTION_DATA void* __vt__13daTagSmkEmt_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__13daTagSmkEmt_cFv,
};

/* 80D612D8-80D61324 004C+00 s=2 e=0 z=0  None .text      __ct__13daTagSmkEmt_cFv */
//	80D612EC: 80018B64 (__ct__10fopAc_ac_cFv)
//	80D612F0: 80D6165C (__vt__13daTagSmkEmt_c)
//	80D612F4: 80D6165C (__vt__13daTagSmkEmt_c)
//	80D61308: 80003458 (memset)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTagSmkEmt_c::daTagSmkEmt_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_smk_emt/d_a_tag_smk_emt/__ct__13daTagSmkEmt_cFv.s"
}
#pragma pop

/* 80D61324-80D61384 0060+00 s=1 e=0 z=0  None .text      __dt__13daTagSmkEmt_cFv */
//	80D61344: 80D6165C (__vt__13daTagSmkEmt_c)
//	80D61348: 80D6165C (__vt__13daTagSmkEmt_c)
//	80D61354: 80018C8C (__dt__10fopAc_ac_cFv)
//	80D61364: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTagSmkEmt_c::~daTagSmkEmt_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_smk_emt/d_a_tag_smk_emt/__dt__13daTagSmkEmt_cFv.s"
}
#pragma pop

/* 80D61384-80D613DC 0058+00 s=1 e=0 z=0  None .text      create__13daTagSmkEmt_cFv */
//	80D613AC: 80D612D8 (__ct__13daTagSmkEmt_cFv)
//	80D613C0: 80D61410 (createSmkEmt__13daTagSmkEmt_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagSmkEmt_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_smk_emt/d_a_tag_smk_emt/create__13daTagSmkEmt_cFv.s"
}
#pragma pop

/* 80D613DC-80D61400 0024+00 s=1 e=0 z=0  None .text      Delete__13daTagSmkEmt_cFv */
//	80D613E8: 80D61500 (deleteSmkEmt__13daTagSmkEmt_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagSmkEmt_c::Delete() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_smk_emt/d_a_tag_smk_emt/Delete__13daTagSmkEmt_cFv.s"
}
#pragma pop

/* 80D61400-80D61408 0008+00 s=1 e=0 z=0  None .text      draw__13daTagSmkEmt_cFv */
bool daTagSmkEmt_c::draw() {
    return true;
}

/* 80D61408-80D61410 0008+00 s=1 e=0 z=0  None .text      execute__13daTagSmkEmt_cFv */
bool daTagSmkEmt_c::execute() {
    return true;
}

/* ############################################################################################## */
/* 80D61600-80D61608 0006+02 s=1 e=0 z=0  None .rodata    PARTICLE_NAME$3654 */
SECTION_RODATA static u8 const PARTICLE_NAME[6 + 2 /* padding */] = {
    0x87,
    0xE7,
    0x87,
    0xE8,
    0x87,
    0xE9,
    /* padding */
    0x00,
    0x00,
};

/* 80D61608-80D6160C 0004+00 s=1 e=0 z=0  None .rodata    @3677 */
SECTION_RODATA static u32 const lit_3677 = 0x3F800000;

/* 80D61410-80D61500 00F0+00 s=1 e=0 z=0  None .text      createSmkEmt__13daTagSmkEmt_cFv */
//	80D61420: 803621CC (_savegpr_25)
//	80D61450: 802673F4 (__ct__5csXyzFsss)
//	80D61454: 80D61608 (lit_3677)
//	80D61458: 80D61608 (lit_3677)
//	80D61478: 804061C0 (g_dComIfG_gameInfo)
//	80D6147C: 804061C0 (g_dComIfG_gameInfo)
//	80D61480: 80D61600 (PARTICLE_NAME)
//	80D61484: 80D61600 (PARTICLE_NAME)
//	80D614C8: 8004CA90
//(set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80D614EC: 80362218 (_restgpr_25)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagSmkEmt_c::createSmkEmt() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_smk_emt/d_a_tag_smk_emt/createSmkEmt__13daTagSmkEmt_cFv.s"
}
#pragma pop

/* 80D61500-80D61544 0044+00 s=1 e=0 z=0  None .text      deleteSmkEmt__13daTagSmkEmt_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagSmkEmt_c::deleteSmkEmt() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_smk_emt/d_a_tag_smk_emt/deleteSmkEmt__13daTagSmkEmt_cFv.s"
}
#pragma pop

/* 80D61544-80D61598 0054+00 s=1 e=0 z=0  None .text      daTagSmkEmt_create__FP13daTagSmkEmt_c */
//	80D6156C: 80D612D8 (__ct__13daTagSmkEmt_cFv)
//	80D61580: 80D61384 (create__13daTagSmkEmt_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagSmkEmt_create(daTagSmkEmt_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_smk_emt/d_a_tag_smk_emt/daTagSmkEmt_create__FP13daTagSmkEmt_c.s"
}
#pragma pop

/* 80D61598-80D615B8 0020+00 s=1 e=0 z=0  None .text      daTagSmkEmt_Delete__FP13daTagSmkEmt_c */
//	80D615A4: 80D613DC (Delete__13daTagSmkEmt_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagSmkEmt_Delete(daTagSmkEmt_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_smk_emt/d_a_tag_smk_emt/daTagSmkEmt_Delete__FP13daTagSmkEmt_c.s"
}
#pragma pop

/* 80D615B8-80D615D8 0020+00 s=1 e=0 z=0  None .text      daTagSmkEmt_execute__FP13daTagSmkEmt_c */
//	80D615C4: 80D61408 (execute__13daTagSmkEmt_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagSmkEmt_execute(daTagSmkEmt_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_smk_emt/d_a_tag_smk_emt/daTagSmkEmt_execute__FP13daTagSmkEmt_c.s"
}
#pragma pop

/* 80D615D8-80D615F8 0020+00 s=1 e=0 z=0  None .text      daTagSmkEmt_draw__FP13daTagSmkEmt_c */
//	80D615E4: 80D61400 (draw__13daTagSmkEmt_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daTagSmkEmt_draw(daTagSmkEmt_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_smk_emt/d_a_tag_smk_emt/daTagSmkEmt_draw__FP13daTagSmkEmt_c.s"
}
#pragma pop
