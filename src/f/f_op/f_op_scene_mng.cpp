/* f_op_scene_mng.cpp autogenerated by split.py v0.4 at 2021-02-13 20:33:37.409351 */

#include "f/f_op/f_op_scene_mng.h"
#include "f/f_op/f_op_scene_iter.h"
#include "f/f_op/f_op_scene_req.h"
#include "f/f_pc/f_pc_searcher.h"
#include "global.h"

extern "C" {
void fopScnRq_Request__FiP11scene_classsPvsUs(void);
}

// additional symbols needed for f_op_scene_mng.cpp
// autogenerated by split.py v0.4 at 2021-02-13 20:33:37.409412
extern unsigned int l_scnRqID;

// matches but can be improved
void* fopScnM_SearchByID(unsigned int id) {
    unsigned int local_8[2];
    local_8[0] = id;
    return fopScnIt_Judge((fop_ScnItFunc)fpcSch_JudgeByID, (void*)local_8);
}

int fopScnM_ChangeReq(scene_class* pScene, s16 param_2, s16 param_3, u16 param_4) {
    u32 sceneRequestID = fopScnRq_Request(2, pScene, param_2, 0, param_3, param_4);

    // can't get a match unless the request id is unsigned
    if (sceneRequestID == -1) {
        return 0;
    }
    l_scnRqID = sceneRequestID;
    return 1;
}

#ifdef NONMATCHING
unsigned int fopScnM_DeleteReq(scene_class* pScene) {
    u32 sceneRequestID = fopScnRq_Request(1, pScene, 0x7fff, 0, 0x7fff, 0);
    u32 tmp = (-sceneRequestID - 1);
    u32 tmp2 = (tmp + -1);
    return tmp2;
}
#else
asm unsigned int fopScnM_DeleteReq(scene_class*) {
    nofralloc
#include "f/f_op_scene_mng/asm/func_8001ED3C.s"
}
#endif

#ifdef NONMATCHING
void fopScnM_CreateReq(s16 param_1, s16 param_2, u16 param_3, u32 param_4) {
    u32 sceneRequestID = fopScnRq_Request(0, 0, param_1, (void*)param_4, param_2, param_3);
    u32 tmp = (-sceneRequestID + -1);
    return tmp - (sceneRequestID == 0) + (-sceneRequestID + -2) & 0xFF;
}
#else
asm void fopScnM_CreateReq(s16, s16, u16, u32) {
    nofralloc
#include "f/f_op_scene_mng/asm/func_8001ED84.s"
}
#endif

u32 fopScnM_ReRequest(s16 param_1, u32 param_2) {
    if (l_scnRqID == -1) {
        return 0;
    }

    return fopScnRq_ReRequest(l_scnRqID, param_1, (void*)param_2);
}

void fopScnM_Management(void) {
    fopScnRq_Handler();
}

void fopScnM_Init(void) {
    return;
}
