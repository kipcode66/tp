/* f_op_kankyo_mng.cpp autogenerated by split.py v0.4 at 2021-02-15 20:20:10.089723 */

#include "d/d_com/d_com_inf_game/d_com_inf_game.h"
#include "global.h"

// additional symbols needed for f_op_kankyo_mng.cpp
// autogenerated by split.py v0.4 at 2021-02-15 20:20:10.089754
extern "C" {
void _restgpr_28(void);
void _restgpr_29(void);
void _savegpr_28(void);
void _savegpr_29(void);
void cLib_memSet__FPviUl(void);
void createAppend_X1_(void);
void dPa_control_c_NS_set(void);
void fopKyM_Create(void);
void fopKyM_CreateAppend(void);
void fopKyM_Delete(void);
void fopKyM_create(void);
void fopKyM_createWpillar(void);
void fopKyM_fastCreate(void);
void fpcLy_CurrentLayer(void);
void fpcM_Delete(void);
void fpcM_FastCreate(void);
void fpcSCtRq_Request(void);
void func_8001F90C(void);
void memalignB__3cMlFiUl(void);
}

// additional symbols needed for f_op_kankyo_mng.cpp
// autogenerated by split.py v0.4 at 2021-02-15 20:20:10.089760
extern u8 lbl_804505C0;
extern u8 lbl_80451C68;

extern "C" {
// fopKyM_CreateAppend__Fv
// fopKyM_CreateAppend(void)
asm void fopKyM_CreateAppend(void) {
    nofralloc
#include "f/f_op/f_op_kankyo_mng/asm/func_8001F660.s"
}

// createAppend__FiP4cXyzP4cXyz
// createAppend(int, cXyz*, cXyz*)
asm void createAppend_X1_(void) {
    nofralloc
#include "f/f_op/f_op_kankyo_mng/asm/func_8001F6B8.s"
}

// fopKyM_Delete__FPv
// fopKyM_Delete(void*)
asm void fopKyM_Delete(void) {
    nofralloc
#include "f/f_op/f_op_kankyo_mng/asm/func_8001F748.s"
}

// fopKyM_Create__FsPFPv_iPv
// fopKyM_Create(s16, int (*)(void*), void*)
asm void fopKyM_Create(void) {
    nofralloc
#include "f/f_op/f_op_kankyo_mng/asm/func_8001F768.s"
}

// fopKyM_create__FsiP4cXyzP4cXyzPFPv_i
// fopKyM_create(s16, int, cXyz*, cXyz*, int (*)(void*))
asm void fopKyM_create(void) {
    nofralloc
#include "f/f_op/f_op_kankyo_mng/asm/func_8001F7B8.s"
}

// fopKyM_fastCreate__FsiP4cXyzP4cXyzPFPv_i
// fopKyM_fastCreate(s16, int, cXyz*, cXyz*, int (*)(void*))
asm void fopKyM_fastCreate(void) {
    nofralloc
#include "f/f_op/f_op_kankyo_mng/asm/func_8001F818.s"
}

// fopKyM_createWpillar__FPC4cXyzfi
// fopKyM_createWpillar(const cXyz*, f32, int)
asm void fopKyM_createWpillar(void) {
    nofralloc
#include "f/f_op/f_op_kankyo_mng/asm/func_8001F87C.s"
}

// fopKyM_createMpillar__FPC4cXyzf
// fopKyM_createMpillar(const cXyz*, f32)
asm void func_8001F90C(void) {
    nofralloc
#include "f/f_op/f_op_kankyo_mng/asm/func_8001F90C.s"
}
};