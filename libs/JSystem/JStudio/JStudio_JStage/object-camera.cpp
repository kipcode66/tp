//
// Generated By: dol2asm
// Translation Unit: object-camera
//

#include "JSystem/JStudio/JStudio_JStage/object-camera.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct Vec {};

namespace JStudio {
struct data {
    struct TEOperationData {};
};

struct TControl {
    struct TTransform_position {};
};

struct TAdaptor {
    /* 80286204 */ void adaptor_setVariableValue_Vec(u32 const*, Vec const&);
    /* 80286274 */ void adaptor_getVariableValue_Vec(Vec*, u32 const*) const;
};

struct TVariableValue {
    struct TOutput {
        /* 80285E0C */ ~TOutput();
    };

    /* 80285EB8 */ void update_immediate_(JStudio::TVariableValue*, f64);
    /* 8028B568 */ TVariableValue();
};

struct TAdaptor_camera {
    /* 80286E1C */ ~TAdaptor_camera();
};

};  // namespace JStudio

struct JStage {
    struct TSystem {};

    struct TCamera {};

    struct TObject {};
};

struct JStudio_JStage {
    struct TAdaptor_camera {
        /* 8028B8A0 */ TAdaptor_camera(JStage::TSystem const*, JStage::TCamera*);
        /* 8028B960 */ ~TAdaptor_camera();
        /* 8028B9D4 */ void adaptor_do_prepare();
        /* 8028BA1C */ void adaptor_do_begin();
        /* 8028BAF8 */ void adaptor_do_end();
        /* 8028BB4C */ void adaptor_do_update(u32);
        /* 8028BBAC */ void adaptor_do_data(void const*, u32, void const*, u32);
        /* 8028BBD0 */ void adaptor_do_PARENT(JStudio::data::TEOperationData, void const*, u32);
        /* 8028BC14 */ void adaptor_do_PARENT_NODE(JStudio::data::TEOperationData, void const*,
                                                   u32);
        /* 8028BC70 */ void adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData, void const*,
                                                     u32);
        /* 8028BCEC */ void adaptor_do_PARENT_FUNCTION(JStudio::data::TEOperationData, void const*,
                                                       u32);
        /* 8028BD00 */ void adaptor_do_TARGET_PARENT(JStudio::data::TEOperationData, void const*,
                                                     u32);
        /* 8028BD44 */ void adaptor_do_TARGET_PARENT_NODE(JStudio::data::TEOperationData,
                                                          void const*, u32);
        /* 8028BDA0 */ void adaptor_do_TARGET_PARENT_ENABLE(JStudio::data::TEOperationData,
                                                            void const*, u32);
        /* 8028BDBC */ void setJSG_position_(JStudio::TControl const*);
        /* 8028BEB8 */ void getJSG_position_(JStudio::TControl const*);
        /* 8028BFBC */ void setJSG_targetPosition_(JStudio::TControl const*);
        /* 8028C09C */ void getJSG_targetPosition_(JStudio::TControl const*);
    };

    template <typename A1, typename B1>
    struct TVariableValueOutput_object_ {};
    /* TVariableValueOutput_object_<JStudio_JStage::TAdaptor_camera, JStage::TCamera> */
    struct TVariableValueOutput_object___template1 {
        /* 8028C4E4 */ ~TVariableValueOutput_object___template1();
        /* 8028C544 */ void operator()(f32, JStudio::TAdaptor*) const;
    };

    struct TAdaptor_object_ {
        /* 8028A470 */ void adaptor_object_data_(void const*, u32, void const*, u32);
        /* 8028A4BC */ void adaptor_object_findJSGObject_(char const*);
        /* 8028A50C */ void adaptor_object_findJSGObjectNode_(JStage::TObject const*, char const*);
    };

    /* 8028A290 */ void transform_toGlobalFromLocal(f32 (*)[4],
                                                    JStudio::TControl::TTransform_position const&,
                                                    JStage::TObject const*, u32);
    /* 8028A3CC */ void transform_toLocalFromGlobal(f32 (*)[4],
                                                    JStudio::TControl::TTransform_position const&,
                                                    JStage::TObject const*, u32);
};

//
// Forward References:
//

extern "C" void __ct__Q214JStudio_JStage15TAdaptor_cameraFPCQ26JStage7TSystemPQ26JStage7TCamera();
extern "C" void __dt__Q214JStudio_JStage15TAdaptor_cameraFv();
extern "C" void adaptor_do_prepare__Q214JStudio_JStage15TAdaptor_cameraFv();
extern "C" void adaptor_do_begin__Q214JStudio_JStage15TAdaptor_cameraFv();
extern "C" void adaptor_do_end__Q214JStudio_JStage15TAdaptor_cameraFv();
extern "C" void adaptor_do_update__Q214JStudio_JStage15TAdaptor_cameraFUl();
extern "C" void adaptor_do_data__Q214JStudio_JStage15TAdaptor_cameraFPCvUlPCvUl();
extern "C" void
adaptor_do_PARENT__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_PARENT_NODE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_PARENT_ENABLE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_PARENT_FUNCTION__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_TARGET_PARENT__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_TARGET_PARENT_NODE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void
adaptor_do_TARGET_PARENT_ENABLE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl();
extern "C" void setJSG_position___Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio8TControl();
extern "C" void getJSG_position___Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio8TControl();
extern "C" void setJSG_targetPosition___Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio8TControl();
extern "C" void getJSG_targetPosition___Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio8TControl();
extern "C" void func_8028C180();
extern "C" void func_8028C4E4();
extern "C" void func_8028C544();
extern "C" extern u8 lit_1015[12];
extern "C" extern u8 lit_1019[12];
extern "C" extern u8 lit_1020[12];
extern "C" extern u8 lit_1024[12];
extern "C" extern u8 lit_1025[12];
extern "C" extern u8 lit_1029[12];
extern "C" extern u8 lit_1030[12];
extern "C" extern void* __vt__Q214JStudio_JStage15TAdaptor_camera[15 + 15 /* padding */];
extern "C" extern void* data_803C5980[4 + 4 /* padding */];
extern "C" extern u8 lit_1023[12];
extern "C" extern u8 lit_1028[12];
extern "C" extern u8 lit_1033[12];
extern "C" extern u8 lit_1034[12];

//
// External References:
//

void operator delete(void*);

extern "C" void __dt__Q37JStudio14TVariableValue7TOutputFv();
extern "C" void update_immediate___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued();
extern "C" void adaptor_setVariableValue_Vec__Q27JStudio8TAdaptorFPCUlRC3Vec();
extern "C" void adaptor_getVariableValue_Vec__Q27JStudio8TAdaptorCFP3VecPCUl();
extern "C" void __dt__Q27JStudio15TAdaptor_cameraFv();
extern "C" void
transform_toGlobalFromLocal__14JStudio_JStageFPA4_fRCQ37JStudio8TControl19TTransform_positionPCQ26JStage7TObjectUl();
extern "C" void
transform_toLocalFromGlobal__14JStudio_JStageFPA4_fRCQ37JStudio8TControl19TTransform_positionPCQ26JStage7TObjectUl();
extern "C" void adaptor_object_data___Q214JStudio_JStage16TAdaptor_object_FPCvUlPCvUl();
extern "C" void adaptor_object_findJSGObject___Q214JStudio_JStage16TAdaptor_object_FPCc();
extern "C" void
adaptor_object_findJSGObjectNode___Q214JStudio_JStage16TAdaptor_object_FPCQ26JStage7TObjectPCc();
extern "C" void __ct__Q27JStudio14TVariableValueFv();
extern "C" void __dl__FPv();
extern "C" void PSMTXMultVec();
extern "C" void __register_global_object();
extern "C" void __construct_array();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern u8 const sauVariableValue_3_POSITION_XYZ__Q27JStudio15TAdaptor_camera[12];
extern "C" extern u8 const sauVariableValue_3_TARGET_POSITION_XYZ__Q27JStudio15TAdaptor_camera[12];
extern "C" extern u8 const __ptmf_null[12 + 4 /* padding */];
extern "C" extern void* __vt__Q27JStudio15TAdaptor_camera[15];
extern "C" extern void* __vt__Q27JStudio8TAdaptor[8];
extern "C" extern void* __vt__Q37JStudio14TVariableValue7TOutput[4];
extern "C" extern u8 soOutput_none___Q27JStudio14TVariableValue[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 803C58A8-803C58B4 000C+00 s=1 e=0 z=0  None .data      @1014 */
SECTION_DATA static u8 lit_1014[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x00,
};

/* 803C58B4-803C58C0 000C+00 s=0 e=0 z=0  None .data      @1015 */
SECTION_DATA u8 lit_1015[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8C, 0x00, 0x00, 0x00, 0x00,
};

/* 803C58C0-803C58CC 000C+00 s=0 e=0 z=0  None .data      @1019 */
SECTION_DATA u8 lit_1019[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x00,
};

/* 803C58CC-803C58D8 000C+00 s=0 e=0 z=0  None .data      @1020 */
SECTION_DATA u8 lit_1020[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x00,
};

/* 803C58D8-803C58E4 000C+00 s=0 e=0 z=0  None .data      @1024 */
SECTION_DATA u8 lit_1024[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00,
};

/* 803C58E4-803C58F0 000C+00 s=0 e=0 z=0  None .data      @1025 */
SECTION_DATA u8 lit_1025[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00,
};

/* 803C58F0-803C58FC 000C+00 s=0 e=0 z=0  None .data      @1029 */
SECTION_DATA u8 lit_1029[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00,
};

/* 803C58FC-803C5908 000C+00 s=0 e=0 z=0  None .data      @1030 */
SECTION_DATA u8 lit_1030[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4C, 0x00, 0x00, 0x00, 0x00,
};

/* 803C5908-803C5980 003C+3C s=2 e=0 z=0  None .data      __vt__Q214JStudio_JStage15TAdaptor_camera
 */
SECTION_DATA void* __vt__Q214JStudio_JStage15TAdaptor_camera[15 + 15 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q214JStudio_JStage15TAdaptor_cameraFv,
    (void*)adaptor_do_prepare__Q214JStudio_JStage15TAdaptor_cameraFv,
    (void*)adaptor_do_begin__Q214JStudio_JStage15TAdaptor_cameraFv,
    (void*)adaptor_do_end__Q214JStudio_JStage15TAdaptor_cameraFv,
    (void*)adaptor_do_update__Q214JStudio_JStage15TAdaptor_cameraFUl,
    (void*)adaptor_do_data__Q214JStudio_JStage15TAdaptor_cameraFPCvUlPCvUl,
    (void*)
        adaptor_do_PARENT__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl,
    (void*)
        adaptor_do_PARENT_NODE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl,
    (void*)
        adaptor_do_PARENT_ENABLE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl,
    (void*)
        adaptor_do_PARENT_FUNCTION__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl,
    (void*)
        adaptor_do_TARGET_PARENT__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl,
    (void*)
        adaptor_do_TARGET_PARENT_NODE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl,
    (void*)
        adaptor_do_TARGET_PARENT_ENABLE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl,
    /* padding */
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
};

/* 8028B8A0-8028B960 00C0+00 s=0 e=1 z=0  None .text
 * __ct__Q214JStudio_JStage15TAdaptor_cameraFPCQ26JStage7TSystemPQ26JStage7TCamera */
//	8028B8B0: 803621DC (_savegpr_29)
//	8028B8C4: 803C5610 (__vt__Q27JStudio8TAdaptor)
//	8028B8C8: 803C5610 (__vt__Q27JStudio8TAdaptor)
//	8028B8E8: 803C5504 (__vt__Q27JStudio15TAdaptor_camera)
//	8028B8EC: 803C5504 (__vt__Q27JStudio15TAdaptor_camera)
//	8028B8F4: 8028B568 (__ct__Q27JStudio14TVariableValueFv)
//	8028B8F8: 8028B568 (__ct__Q27JStudio14TVariableValueFv)
//	8028B908: 80361D60 (__construct_array)
//	8028B914: 803C5908 (__vt__Q214JStudio_JStage15TAdaptor_camera)
//	8028B918: 803C5908 (__vt__Q214JStudio_JStage15TAdaptor_camera)
//	8028B94C: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio_JStage::TAdaptor_camera::TAdaptor_camera(JStage::TSystem const* param_0,
                                                     JStage::TCamera* param_1) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028B8A0.s"
}
#pragma pop

/* 8028B960-8028B9D4 0074+00 s=1 e=0 z=0  None .text __dt__Q214JStudio_JStage15TAdaptor_cameraFv
 */
//	8028B980: 803C5908 (__vt__Q214JStudio_JStage15TAdaptor_camera)
//	8028B984: 803C5908 (__vt__Q214JStudio_JStage15TAdaptor_camera)
//	8028B9A4: 80286E1C (__dt__Q27JStudio15TAdaptor_cameraFv)
//	8028B9B4: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio_JStage::TAdaptor_camera::~TAdaptor_camera() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/__dt__Q214JStudio_JStage15TAdaptor_cameraFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80431298-804312A4 000C+00 s=1 e=0 z=0  None .bss       @1018 */
static u8 lit_1018[12];

/* 804312A4-804312B0 000C+00 s=0 e=0 z=0  None .bss       @1023 */
u8 lit_1023[12];

/* 804312B0-804312BC 000C+00 s=0 e=0 z=0  None .bss       @1028 */
u8 lit_1028[12];

/* 804312BC-804312C8 000C+00 s=0 e=0 z=0  None .bss       @1033 */
u8 lit_1033[12];

/* 804312C8-804312D4 000C+00 s=0 e=0 z=0  None .bss       @1034 */
u8 lit_1034[12];

/* 804312D4-80431378 00A0+04 s=2 e=0 z=0  None .bss
 * saoVVOutput___Q214JStudio_JStage15TAdaptor_camera            */
static u8 saoVVOutput___Q214JStudio_JStage15TAdaptor_camera[160 + 4 /* padding */];

/* 8028B9D4-8028BA1C 0048+00 s=1 e=0 z=0  None .text
 * adaptor_do_prepare__Q214JStudio_JStage15TAdaptor_cameraFv    */
//	8028B9D4: 804312D4 (saoVVOutput___Q214JStudio_JStage15TAdaptor_camera)
//	8028B9D8: 804312D4 (saoVVOutput___Q214JStudio_JStage15TAdaptor_camera)
//	8028BA00: 804511F0 (soOutput_none___Q27JStudio14TVariableValue)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_camera::adaptor_do_prepare() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/adaptor_do_prepare__Q214JStudio_JStage15TAdaptor_cameraFv.s"
}
#pragma pop

/* 8028BA1C-8028BAF8 00DC+00 s=1 e=0 z=0  None .text
 * adaptor_do_begin__Q214JStudio_JStage15TAdaptor_cameraFv      */
//	8028BA2C: 803621D4 (_savegpr_27)
//	8028BA78: 8028BEB8 (getJSG_position___Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio8TControl)
//	8028BA84: 8028C09C
//(getJSG_targetPosition___Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio8TControl) 	8028BA88:
// 804312D4 (saoVVOutput___Q214JStudio_JStage15TAdaptor_camera) 	8028BA8C: 804312D4
//(saoVVOutput___Q214JStudio_JStage15TAdaptor_camera) 	8028BA94: 80285EB8
//(update_immediate___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued) 	8028BA98: 80285EB8
//(update_immediate___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued) 	8028BAAC: 80362084
//(__ptmf_scall) 	8028BAE4: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_camera::adaptor_do_begin() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/adaptor_do_begin__Q214JStudio_JStage15TAdaptor_cameraFv.s"
}
#pragma pop

/* 8028BAF8-8028BB4C 0054+00 s=1 e=0 z=0  None .text
 * adaptor_do_end__Q214JStudio_JStage15TAdaptor_cameraFv        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_camera::adaptor_do_end() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/adaptor_do_end__Q214JStudio_JStage15TAdaptor_cameraFv.s"
}
#pragma pop

/* 8028BB4C-8028BBAC 0060+00 s=1 e=0 z=0  None .text
 * adaptor_do_update__Q214JStudio_JStage15TAdaptor_cameraFUl    */
//	8028BB70: 8028BDBC (setJSG_position___Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio8TControl)
//	8028BB7C: 8028BFBC
//(setJSG_targetPosition___Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio8TControl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_camera::adaptor_do_update(u32 param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/adaptor_do_update__Q214JStudio_JStage15TAdaptor_cameraFUl.s"
}
#pragma pop

/* 8028BBAC-8028BBD0 0024+00 s=1 e=0 z=0  None .text
 * adaptor_do_data__Q214JStudio_JStage15TAdaptor_cameraFPCvUlPCvUl */
//	8028BBBC: 8028A470 (adaptor_object_data___Q214JStudio_JStage16TAdaptor_object_FPCvUlPCvUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_camera::adaptor_do_data(void const* param_0, u32 param_1,
                                                          void const* param_2, u32 param_3) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/adaptor_do_data__Q214JStudio_JStage15TAdaptor_cameraFPCvUlPCvUl.s"
}
#pragma pop

/* 8028BBD0-8028BC14 0044+00 s=1 e=0 z=0  None .text
 * adaptor_do_PARENT__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl */
//	8028BBF8: 8028A4BC (adaptor_object_findJSGObject___Q214JStudio_JStage16TAdaptor_object_FPCc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_camera::adaptor_do_PARENT(JStudio::data::TEOperationData param_0,
                                                            void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028BBD0.s"
}
#pragma pop

/* 8028BC14-8028BC70 005C+00 s=1 e=0 z=0  None .text
 * adaptor_do_PARENT_NODE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
 */
//	8028BC48: 8028A50C
//(adaptor_object_findJSGObjectNode___Q214JStudio_JStage16TAdaptor_object_FPCQ26JStage7TObjectPCc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void
JStudio_JStage::TAdaptor_camera::adaptor_do_PARENT_NODE(JStudio::data::TEOperationData param_0,
                                                        void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028BC14.s"
}
#pragma pop

/* 8028BC70-8028BCEC 007C+00 s=1 e=0 z=0  None .text
 * adaptor_do_PARENT_ENABLE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void
JStudio_JStage::TAdaptor_camera::adaptor_do_PARENT_ENABLE(JStudio::data::TEOperationData param_0,
                                                          void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028BC70.s"
}
#pragma pop

/* 8028BCEC-8028BD00 0014+00 s=1 e=0 z=0  None .text
 * adaptor_do_PARENT_FUNCTION__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void
JStudio_JStage::TAdaptor_camera::adaptor_do_PARENT_FUNCTION(JStudio::data::TEOperationData param_0,
                                                            void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028BCEC.s"
}
#pragma pop

/* 8028BD00-8028BD44 0044+00 s=1 e=0 z=0  None .text
 * adaptor_do_TARGET_PARENT__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
 */
//	8028BD28: 8028A4BC (adaptor_object_findJSGObject___Q214JStudio_JStage16TAdaptor_object_FPCc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void
JStudio_JStage::TAdaptor_camera::adaptor_do_TARGET_PARENT(JStudio::data::TEOperationData param_0,
                                                          void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028BD00.s"
}
#pragma pop

/* 8028BD44-8028BDA0 005C+00 s=1 e=0 z=0  None .text
 * adaptor_do_TARGET_PARENT_NODE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
 */
//	8028BD78: 8028A50C
//(adaptor_object_findJSGObjectNode___Q214JStudio_JStage16TAdaptor_object_FPCQ26JStage7TObjectPCc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_camera::adaptor_do_TARGET_PARENT_NODE(
    JStudio::data::TEOperationData param_0, void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028BD44.s"
}
#pragma pop

/* 8028BDA0-8028BDBC 001C+00 s=1 e=0 z=0  None .text
 * adaptor_do_TARGET_PARENT_ENABLE__Q214JStudio_JStage15TAdaptor_cameraFQ37JStudio4data15TEOperationDataPCvUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_camera::adaptor_do_TARGET_PARENT_ENABLE(
    JStudio::data::TEOperationData param_0, void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028BDA0.s"
}
#pragma pop

/* 8028BDBC-8028BEB8 00FC+00 s=1 e=0 z=0  None .text
 * setJSG_position___Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio8TControl */
//	8028BDDC: 8039AAA8 (sauVariableValue_3_POSITION_XYZ__Q27JStudio15TAdaptor_camera)
//	8028BDE0: 8039AAA8 (sauVariableValue_3_POSITION_XYZ__Q27JStudio15TAdaptor_camera)
//	8028BDE4: 80286274 (adaptor_getVariableValue_Vec__Q27JStudio8TAdaptorCFP3VecPCUl)
//	8028BE14: 80346D6C (PSMTXMultVec)
//	8028BE50: 8028A290
//(transform_toGlobalFromLocal__14JStudio_JStageFPA4_fRCQ37JStudio8TControl19TTransform_positionPCQ26JStage7TObjectUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_camera::setJSG_position_(JStudio::TControl const* param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028BDBC.s"
}
#pragma pop

/* 8028BEB8-8028BFBC 0104+00 s=1 e=0 z=0  None .text
 * getJSG_position___Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio8TControl */
//	8028BF18: 80346D6C (PSMTXMultVec)
//	8028BF58: 8028A3CC
//(transform_toLocalFromGlobal__14JStudio_JStageFPA4_fRCQ37JStudio8TControl19TTransform_positionPCQ26JStage7TObjectUl)
//	8028BF98: 8039AAA8 (sauVariableValue_3_POSITION_XYZ__Q27JStudio15TAdaptor_camera)
//	8028BF9C: 8039AAA8 (sauVariableValue_3_POSITION_XYZ__Q27JStudio15TAdaptor_camera)
//	8028BFA0: 80286204 (adaptor_setVariableValue_Vec__Q27JStudio8TAdaptorFPCUlRC3Vec)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_camera::getJSG_position_(JStudio::TControl const* param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028BEB8.s"
}
#pragma pop

/* 8028BFBC-8028C09C 00E0+00 s=1 e=0 z=0  None .text
 * setJSG_targetPosition___Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio8TControl */
//	8028BFDC: 8039AAB4 (sauVariableValue_3_TARGET_POSITION_XYZ__Q27JStudio15TAdaptor_camera)
//	8028BFE0: 8039AAB4 (sauVariableValue_3_TARGET_POSITION_XYZ__Q27JStudio15TAdaptor_camera)
//	8028BFE4: 80286274 (adaptor_getVariableValue_Vec__Q27JStudio8TAdaptorCFP3VecPCUl)
//	8028C014: 80346D6C (PSMTXMultVec)
//	8028C034: 8028A290
//(transform_toGlobalFromLocal__14JStudio_JStageFPA4_fRCQ37JStudio8TControl19TTransform_positionPCQ26JStage7TObjectUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_camera::setJSG_targetPosition_(JStudio::TControl const* param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028BFBC.s"
}
#pragma pop

/* 8028C09C-8028C180 00E4+00 s=1 e=0 z=0  None .text
 * getJSG_targetPosition___Q214JStudio_JStage15TAdaptor_cameraFPCQ27JStudio8TControl */
//	8028C0FC: 80346D6C (PSMTXMultVec)
//	8028C11C: 8028A3CC
//(transform_toLocalFromGlobal__14JStudio_JStageFPA4_fRCQ37JStudio8TControl19TTransform_positionPCQ26JStage7TObjectUl)
//	8028C15C: 8039AAB4 (sauVariableValue_3_TARGET_POSITION_XYZ__Q27JStudio15TAdaptor_camera)
//	8028C160: 8039AAB4 (sauVariableValue_3_TARGET_POSITION_XYZ__Q27JStudio15TAdaptor_camera)
//	8028C164: 80286204 (adaptor_setVariableValue_Vec__Q27JStudio8TAdaptorFPCUlRC3Vec)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_camera::getJSG_targetPosition_(JStudio::TControl const* param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028C09C.s"
}
#pragma pop

/* ############################################################################################## */
/* 803C5980-803C59A0 0010+10 s=2 e=0 z=0  None .data
 * __vt__Q214JStudio_JStage83TVariableValueOutput_object_<Q214JStudio_JStage15TAdaptor_camera,Q26JStage7TCamera>
 */
SECTION_DATA void* data_803C5980[4 + 4 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)func_8028C544,
    (void*)func_8028C4E4,
    /* padding */
    NULL,
    NULL,
    NULL,
    NULL,
};

/* 8028C180-8028C4E4 0364+00 s=0 e=0 z=0  None .text      __sinit_object-camera_cpp */
//	8028C194: 80431298 (lit_1018)
//	8028C198: 80431298 (lit_1018)
//	8028C19C: 803C58A8 (lit_1014)
//	8028C1A0: 803C58A8 (lit_1014)
//	8028C1A4: 803C5640 (__vt__Q37JStudio14TVariableValue7TOutput)
//	8028C1A8: 803C5640 (__vt__Q37JStudio14TVariableValue7TOutput)
//	8028C1B0: 803C5980 (data_803C5980)
//	8028C1B4: 803C5980 (data_803C5980)
//	8028C21C: 8028C4E4 (func_8028C4E4)
//	8028C220: 8028C4E4 (func_8028C4E4)
//	8028C228: 80361C24 (__register_global_object)
//	8028C22C: 803C5980 (data_803C5980)
//	8028C230: 803C5980 (data_803C5980)
//	8028C240: 80285E0C (__dt__Q37JStudio14TVariableValue7TOutputFv)
//	8028C244: 803C5640 (__vt__Q37JStudio14TVariableValue7TOutput)
//	8028C248: 803C5640 (__vt__Q37JStudio14TVariableValue7TOutput)
//	8028C250: 803C5980 (data_803C5980)
//	8028C254: 803C5980 (data_803C5980)
//	8028C2C0: 8028C4E4 (func_8028C4E4)
//	8028C2C4: 8028C4E4 (func_8028C4E4)
//	8028C2CC: 80361C24 (__register_global_object)
//	8028C2D0: 803C5980 (data_803C5980)
//	8028C2D4: 803C5980 (data_803C5980)
//	8028C2E4: 80285E0C (__dt__Q37JStudio14TVariableValue7TOutputFv)
//	8028C2E8: 803C5640 (__vt__Q37JStudio14TVariableValue7TOutput)
//	8028C2EC: 803C5640 (__vt__Q37JStudio14TVariableValue7TOutput)
//	8028C2F4: 803C5980 (data_803C5980)
//	8028C2F8: 803C5980 (data_803C5980)
//	8028C364: 8028C4E4 (func_8028C4E4)
//	8028C368: 8028C4E4 (func_8028C4E4)
//	8028C370: 80361C24 (__register_global_object)
//	8028C374: 803C5980 (data_803C5980)
//	8028C378: 803C5980 (data_803C5980)
//	8028C388: 80285E0C (__dt__Q37JStudio14TVariableValue7TOutputFv)
//	8028C38C: 803C5640 (__vt__Q37JStudio14TVariableValue7TOutput)
//	8028C390: 803C5640 (__vt__Q37JStudio14TVariableValue7TOutput)
//	8028C398: 803C5980 (data_803C5980)
//	8028C39C: 803C5980 (data_803C5980)
//	8028C408: 8028C4E4 (func_8028C4E4)
//	8028C40C: 8028C4E4 (func_8028C4E4)
//	8028C414: 80361C24 (__register_global_object)
//	8028C418: 803C5980 (data_803C5980)
//	8028C41C: 803C5980 (data_803C5980)
//	8028C42C: 80285E0C (__dt__Q37JStudio14TVariableValue7TOutputFv)
//	8028C430: 803C5640 (__vt__Q37JStudio14TVariableValue7TOutput)
//	8028C434: 803C5640 (__vt__Q37JStudio14TVariableValue7TOutput)
//	8028C43C: 803C5980 (data_803C5980)
//	8028C440: 803C5980 (data_803C5980)
//	8028C450: 803A2180 (__ptmf_null)
//	8028C454: 803A2180 (__ptmf_null)
//	8028C4A4: 8028C4E4 (func_8028C4E4)
//	8028C4A8: 8028C4E4 (func_8028C4E4)
//	8028C4B0: 80361C24 (__register_global_object)
//	8028C4B4: 803C5980 (data_803C5980)
//	8028C4B8: 803C5980 (data_803C5980)
//	8028C4C8: 80285E0C (__dt__Q37JStudio14TVariableValue7TOutputFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_8028C180() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028C180.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_8028C180 = (void*)func_8028C180;
#pragma pop

/* 8028C4E4-8028C544 0060+00 s=2 e=0 z=0  None .text
 * __dt__Q214JStudio_JStage83TVariableValueOutput_object_<Q214JStudio_JStage15TAdaptor_camera,Q26JStage7TCamera>Fv
 */
//	8028C504: 803C5980 (data_803C5980)
//	8028C508: 803C5980 (data_803C5980)
//	8028C514: 80285E0C (__dt__Q37JStudio14TVariableValue7TOutputFv)
//	8028C524: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio_JStage::TVariableValueOutput_object___template1::
    ~TVariableValueOutput_object___template1() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028C4E4.s"
}
#pragma pop

/* 8028C544-8028C574 0030+00 s=1 e=0 z=0  None .text
 * __cl__Q214JStudio_JStage83TVariableValueOutput_object_<Q214JStudio_JStage15TAdaptor_camera,Q26JStage7TCamera>CFfPQ27JStudio8TAdaptor
 */
//	8028C55C: 80362084 (__ptmf_scall)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TVariableValueOutput_object___template1::operator()(
    f32 param_0, JStudio::TAdaptor* param_1) const {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-camera/func_8028C544.s"
}
#pragma pop
