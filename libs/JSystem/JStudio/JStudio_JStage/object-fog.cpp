//
// Generated By: dol2asm
// Translation Unit: object-fog
//

#include "JSystem/JStudio/JStudio_JStage/object-fog.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __ct__Q214JStudio_JStage12TAdaptor_fogFPCQ26JStage7TSystemPQ26JStage4TFog();
extern "C" void __dt__Q214JStudio_JStage12TAdaptor_fogFv();
extern "C" void adaptor_do_prepare__Q214JStudio_JStage12TAdaptor_fogFv();
extern "C" void adaptor_do_begin__Q214JStudio_JStage12TAdaptor_fogFv();
extern "C" void adaptor_do_end__Q214JStudio_JStage12TAdaptor_fogFv();
extern "C" void adaptor_do_update__Q214JStudio_JStage12TAdaptor_fogFUl();
extern "C" void adaptor_do_data__Q214JStudio_JStage12TAdaptor_fogFPCvUlPCvUl();
extern "C" void func_8028C8A4();
extern "C" void func_8028CAC0(void* _this);
extern "C" void func_8028CB20(void* _this, f32, JStudio::TAdaptor*);
extern "C" u8 saoVVOutput___Q214JStudio_JStage12TAdaptor_fog[96 + 4 /* padding */];

//
// External References:
//

extern "C" void __dt__Q37JStudio14TVariableValue7TOutputFv();
extern "C" void update_immediate___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued();
extern "C" void adaptor_setVariableValue_GXColor__Q27JStudio8TAdaptorFPCUlRC8_GXColor();
extern "C" void adaptor_getVariableValue_GXColor__Q27JStudio8TAdaptorCFP8_GXColorPCUl();
extern "C" void __dt__Q27JStudio12TAdaptor_fogFv();
extern "C" void adaptor_object_data___Q214JStudio_JStage16TAdaptor_object_FPCvUlPCvUl();
extern "C" void __ct__Q27JStudio14TVariableValueFv();
extern "C" void __dl__FPv();
extern "C" void __register_global_object();
extern "C" void __construct_array();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" u8 const sauVariableValue_4_COLOR_RGBA__Q27JStudio12TAdaptor_fog[16];
extern "C" extern u8 const __ptmf_null[12 + 4 /* padding */];
extern "C" extern void* __vt__Q27JStudio12TAdaptor_fog[8];
extern "C" extern void* __vt__Q27JStudio8TAdaptor[8];
extern "C" extern void* __vt__Q37JStudio14TVariableValue7TOutput[4];
extern "C" u8 soOutput_none___Q27JStudio14TVariableValue[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 803C59A0-803C59AC 022AC0 000C+00 1/1 0/0 0/0 .data            @844 */
SECTION_DATA static u8 lit_844[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00,
};

/* 803C59AC-803C59B8 022ACC 000C+00 0/1 0/0 0/0 .data            @845 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_845[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 803C59B8-803C59C4 022AD8 000C+00 0/1 0/0 0/0 .data            @849 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_849[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 803C59C4-803C59D0 022AE4 000C+00 0/1 0/0 0/0 .data            @850 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_850[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4C, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 803C59D0-803C5A10 022AF0 0020+20 2/2 0/0 0/0 .data __vt__Q214JStudio_JStage12TAdaptor_fog */
SECTION_DATA extern void* __vt__Q214JStudio_JStage12TAdaptor_fog[8 + 8 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q214JStudio_JStage12TAdaptor_fogFv,
    (void*)adaptor_do_prepare__Q214JStudio_JStage12TAdaptor_fogFv,
    (void*)adaptor_do_begin__Q214JStudio_JStage12TAdaptor_fogFv,
    (void*)adaptor_do_end__Q214JStudio_JStage12TAdaptor_fogFv,
    (void*)adaptor_do_update__Q214JStudio_JStage12TAdaptor_fogFUl,
    (void*)adaptor_do_data__Q214JStudio_JStage12TAdaptor_fogFPCvUlPCvUl,
    /* padding */
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
};

/* 8028C574-8028C610 286EB4 009C+00 0/0 1/1 0/0 .text
 * __ct__Q214JStudio_JStage12TAdaptor_fogFPCQ26JStage7TSystemPQ26JStage4TFog */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio_JStage::TAdaptor_fog::TAdaptor_fog(JStage::TSystem const* param_0,
                                               JStage::TFog* param_1) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-fog/func_8028C574.s"
}
#pragma pop

/* 8028C610-8028C684 286F50 0074+00 1/0 0/0 0/0 .text __dt__Q214JStudio_JStage12TAdaptor_fogFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm JStudio_JStage::TAdaptor_fog::~TAdaptor_fog() {
extern "C" asm void __dt__Q214JStudio_JStage12TAdaptor_fogFv() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-fog/__dt__Q214JStudio_JStage12TAdaptor_fogFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80431378-80431384 05E098 000C+00 1/1 0/0 0/0 .bss             @848 */
static u8 lit_848[12];

/* 80431384-80431390 05E0A4 000C+00 0/1 0/0 0/0 .bss             @853 */
#pragma push
#pragma force_active on
static u8 lit_853[12];
#pragma pop

/* 80431390-8043139C 05E0B0 000C+00 0/1 0/0 0/0 .bss             @854 */
#pragma push
#pragma force_active on
static u8 lit_854[12];
#pragma pop

/* 8043139C-80431400 05E0BC 0060+04 2/3 0/0 0/0 .bss
 * saoVVOutput___Q214JStudio_JStage12TAdaptor_fog               */
u8 JStudio_JStage::TAdaptor_fog::saoVVOutput_[96 + 4 /* padding */];

/* 8028C684-8028C6CC 286FC4 0048+00 1/0 0/0 0/0 .text
 * adaptor_do_prepare__Q214JStudio_JStage12TAdaptor_fogFv       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_fog::adaptor_do_prepare() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-fog/adaptor_do_prepare__Q214JStudio_JStage12TAdaptor_fogFv.s"
}
#pragma pop

/* 8028C6CC-8028C7B4 28700C 00E8+00 1/0 0/0 0/0 .text
 * adaptor_do_begin__Q214JStudio_JStage12TAdaptor_fogFv         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_fog::adaptor_do_begin() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-fog/adaptor_do_begin__Q214JStudio_JStage12TAdaptor_fogFv.s"
}
#pragma pop

/* 8028C7B4-8028C808 2870F4 0054+00 1/0 0/0 0/0 .text
 * adaptor_do_end__Q214JStudio_JStage12TAdaptor_fogFv           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_fog::adaptor_do_end() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-fog/adaptor_do_end__Q214JStudio_JStage12TAdaptor_fogFv.s"
}
#pragma pop

/* 8028C808-8028C880 287148 0078+00 1/0 0/0 0/0 .text
 * adaptor_do_update__Q214JStudio_JStage12TAdaptor_fogFUl       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_fog::adaptor_do_update(u32 param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-fog/adaptor_do_update__Q214JStudio_JStage12TAdaptor_fogFUl.s"
}
#pragma pop

/* 8028C880-8028C8A4 2871C0 0024+00 1/0 0/0 0/0 .text
 * adaptor_do_data__Q214JStudio_JStage12TAdaptor_fogFPCvUlPCvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio_JStage::TAdaptor_fog::adaptor_do_data(void const* param_0, u32 param_1,
                                                       void const* param_2, u32 param_3) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-fog/adaptor_do_data__Q214JStudio_JStage12TAdaptor_fogFPCvUlPCvUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 803C5A10-803C5A30 022B30 0010+10 2/2 0/0 0/0 .data
 * __vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>
 */
SECTION_DATA extern void* data_803C5A10[4 + 4 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)func_8028CB20,
    (void*)func_8028CAC0,
    /* padding */
    NULL,
    NULL,
    NULL,
    NULL,
};

/* 8028C8A4-8028CAC0 2871E4 021C+00 0/0 1/0 0/0 .text            __sinit_object-fog_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void func_8028C8A4() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-fog/func_8028C8A4.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x8028C8A4, func_8028C8A4);
#pragma pop

/* 8028CAC0-8028CB20 287400 0060+00 2/1 0/0 0/0 .text
 * __dt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>Fv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_8028CAC0(void* _this) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-fog/func_8028CAC0.s"
}
#pragma pop

/* 8028CB20-8028CB50 287460 0030+00 1/0 0/0 0/0 .text
 * __cl__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>CFfPQ27JStudio8TAdaptor
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_8028CB20(void* _this, f32 param_0,
                                  JStudio::TAdaptor* param_1) /* const */ {
    nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-fog/func_8028CB20.s"
}
#pragma pop
