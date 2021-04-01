//
// Generated By: dol2asm
// Translation Unit: f_op/f_op_draw_iter
//

#include "f_op/f_op_draw_iter.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct create_tag_class {};

//
// Forward References:
//

static void fopDwIt_GetTag();
void fopDwIt_Begin();
void fopDwIt_Next(create_tag_class*);

extern "C" static void fopDwIt_GetTag__Fv();
extern "C" void fopDwIt_Begin__Fv();
extern "C" void fopDwIt_Next__FP16create_tag_class();

//
// External References:
//

extern "C" extern u8 g_fopDwTg_Queue[8];

//
// Declarations:
//

/* ############################################################################################## */
/* 80450CF8-80450D00 0004+04 s=2 e=0 z=0  None .sbss      l_fopDwTg_id */
static u8 l_fopDwTg_id[4 + 4 /* padding */];

/* 80020400-80020444 0044+00 s=2 e=0 z=0  None .text      fopDwIt_GetTag__Fv */
//	80020400: 804505D0 (g_fopDwTg_Queue)
//	80020404: 804505D0 (g_fopDwTg_Queue)
//	80020410: 80450CF8 (l_fopDwTg_id)
//	80020418: 80450CF8 (l_fopDwTg_id)
//	8002042C: 80450CF8 (l_fopDwTg_id)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void fopDwIt_GetTag() {
    nofralloc
#include "asm/f_op/f_op_draw_iter/fopDwIt_GetTag__Fv.s"
}
#pragma pop

/* 80020444-80020480 003C+00 s=0 e=1 z=0  None .text      fopDwIt_Begin__Fv */
//	80020450: 804505D0 (g_fopDwTg_Queue)
//	8002045C: 80450CF8 (l_fopDwTg_id)
//	8002046C: 80020400 (fopDwIt_GetTag__Fv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopDwIt_Begin() {
    nofralloc
#include "asm/f_op/f_op_draw_iter/fopDwIt_Begin__Fv.s"
}
#pragma pop

/* 80020480-800204AC 002C+00 s=0 e=1 z=0  None .text      fopDwIt_Next__FP16create_tag_class */
//	80020498: 80020400 (fopDwIt_GetTag__Fv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopDwIt_Next(create_tag_class* param_0) {
    nofralloc
#include "asm/f_op/f_op_draw_iter/fopDwIt_Next__FP16create_tag_class.s"
}
#pragma pop
