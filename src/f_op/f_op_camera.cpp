//
// Generated By: dol2asm
// Translation Unit: f_op/f_op_camera
//

#include "f_op/f_op_camera.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct process_method_class {};

struct leafdraw_method_class {};

struct leafdraw_class {};

struct create_tag_class {};

struct camera_class {};

//
// Forward References:
//

static void fopCam_Draw(camera_class*);
static void fopCam_Execute(camera_class*);
static void fopCam_IsDelete(camera_class*);
static void fopCam_Delete(camera_class*);
static void fopCam_Create(void*);

extern "C" static void fopCam_Draw__FP12camera_class();
extern "C" static void fopCam_Execute__FP12camera_class();
extern "C" static void fopCam_IsDelete__FP12camera_class();
extern "C" static void fopCam_Delete__FP12camera_class();
extern "C" static void fopCam_Create__FPv();
extern "C" extern void* g_fopCam_Method[5 + 1 /* padding */];

//
// External References:
//

void fopDwTg_ToDrawQ(create_tag_class*, int);
void fopDwTg_DrawQTo(create_tag_class*);
void fopDwTg_Init(create_tag_class*, void*);
void fpcLf_GetPriority(leafdraw_class const*);
void fpcLf_DrawMethod(leafdraw_method_class*, void*);
void fpcMtd_Execute(process_method_class*, void*);
void fpcMtd_IsDelete(process_method_class*, void*);
void fpcMtd_Delete(process_method_class*, void*);
void fpcMtd_Create(process_method_class*, void*);

extern "C" void fopDwTg_ToDrawQ__FP16create_tag_classi();
extern "C" void fopDwTg_DrawQTo__FP16create_tag_class();
extern "C" void fopDwTg_Init__FP16create_tag_classPv();
extern "C" void fpcLf_GetPriority__FPC14leafdraw_class();
extern "C" void fpcLf_DrawMethod__FP21leafdraw_method_classPv();
extern "C" void fpcMtd_Execute__FP20process_method_classPv();
extern "C" void fpcMtd_IsDelete__FP20process_method_classPv();
extern "C" void fpcMtd_Delete__FP20process_method_classPv();
extern "C" void fpcMtd_Create__FP20process_method_classPv();
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 struct_80451124[4];

//
// Declarations:
//

/* 8001E140-8001E180 0040+00 s=1 e=0 z=0  None .text      fopCam_Draw__FP12camera_class */
//	8001E154: 804061C0 (g_dComIfG_gameInfo)
//	8001E158: 804061C0 (g_dComIfG_gameInfo)
//	8001E16C: 80021A24 (fpcLf_DrawMethod__FP21leafdraw_method_classPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void fopCam_Draw(camera_class* param_0) {
    nofralloc
#include "asm/f_op/f_op_camera/fopCam_Draw__FP12camera_class.s"
}
#pragma pop

/* 8001E180-8001E1C8 0048+00 s=1 e=0 z=0  None .text      fopCam_Execute__FP12camera_class */
//	8001E190: 804061C0 (g_dComIfG_gameInfo)
//	8001E194: 804061C0 (g_dComIfG_gameInfo)
//	8001E1A4: 80451124 (struct_80451124)
//	8001E1B4: 80022460 (fpcMtd_Execute__FP20process_method_classPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void fopCam_Execute(camera_class* param_0) {
    nofralloc
#include "asm/f_op/f_op_camera/fopCam_Execute__FP12camera_class.s"
}
#pragma pop

/* 8001E1C8-8001E21C 0054+00 s=1 e=0 z=0  None .text      fopCam_IsDelete__FP12camera_class */
//	8001E1E8: 80022484 (fpcMtd_IsDelete__FP20process_method_classPv)
//	8001E1FC: 800204D4 (fopDwTg_DrawQTo__FP16create_tag_class)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void fopCam_IsDelete(camera_class* param_0) {
    nofralloc
#include "asm/f_op/f_op_camera/fopCam_IsDelete__FP12camera_class.s"
}
#pragma pop

/* 8001E21C-8001E270 0054+00 s=1 e=0 z=0  None .text      fopCam_Delete__FP12camera_class */
//	8001E23C: 800224A8 (fpcMtd_Delete__FP20process_method_classPv)
//	8001E250: 800204D4 (fopDwTg_DrawQTo__FP16create_tag_class)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void fopCam_Delete(camera_class* param_0) {
    nofralloc
#include "asm/f_op/f_op_camera/fopCam_Delete__FP12camera_class.s"
}
#pragma pop

/* 8001E270-8001E308 0098+00 s=1 e=0 z=0  None .text      fopCam_Create__FPv */
//	8001E2A8: 800204F4 (fopDwTg_Init__FP16create_tag_classPv)
//	8001E2C8: 800224CC (fpcMtd_Create__FP20process_method_classPv)
//	8001E2DC: 80021A00 (fpcLf_GetPriority__FPC14leafdraw_class)
//	8001E2E8: 800204AC (fopDwTg_ToDrawQ__FP16create_tag_classi)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void fopCam_Create(void* param_0) {
    nofralloc
#include "asm/f_op/f_op_camera/fopCam_Create__FPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A3860-803A3878 0014+04 s=0 e=2 z=0  None .data      g_fopCam_Method */
SECTION_DATA void* g_fopCam_Method[5 + 1 /* padding */] = {
    (void*)fopCam_Create__FPv,
    (void*)fopCam_Delete__FP12camera_class,
    (void*)fopCam_Execute__FP12camera_class,
    (void*)fopCam_IsDelete__FP12camera_class,
    (void*)fopCam_Draw__FP12camera_class,
    /* padding */
    NULL,
};
