/* f_op_scene_tag.cpp autogenerated by split.py v0.4 at 2021-02-15 20:28:40.331340 */

#include "global.h"

// additional symbols needed for f_op_scene_tag.cpp
// autogenerated by split.py v0.4 at 2021-02-15 20:28:40.331363
extern "C" {
void cTg_Addition(void);
void cTg_Create(void);
void cTg_SingleCut(void);
void fopScnTg_Init(void);
void fopScnTg_QueueTo(void);
void fopScnTg_ToQueue(void);
}

// additional symbols needed for f_op_scene_tag.cpp
// autogenerated by split.py v0.4 at 2021-02-15 20:28:40.331367
extern u8 lbl_803A3918;

extern "C" {
// fopScnTg_QueueTo__FP15scene_tag_class
// fopScnTg_QueueTo(scene_tag_class*)
asm void fopScnTg_QueueTo(void) {
    nofralloc
#include "f/f_op/f_op_scene_tag/asm/func_8001F13C.s"
}

// fopScnTg_ToQueue__FP15scene_tag_class
// fopScnTg_ToQueue(scene_tag_class*)
asm void fopScnTg_ToQueue(void) {
    nofralloc
#include "f/f_op/f_op_scene_tag/asm/func_8001F15C.s"
}

// fopScnTg_Init__FP15scene_tag_classPv
// fopScnTg_Init(scene_tag_class*, void*)
asm void fopScnTg_Init(void) {
    nofralloc
#include "f/f_op/f_op_scene_tag/asm/func_8001F188.s"
}
};