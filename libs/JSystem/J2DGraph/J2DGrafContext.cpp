//
// Generated By: dol2asm
// Translation Unit: J2DGrafContext
//

#include "JSystem/J2DGraph/J2DGrafContext.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __ct__14J2DGrafContextFffff();
extern "C" void setPort__14J2DGrafContextFv();
extern "C" void setup2D__14J2DGrafContextFv();
extern "C" void setScissor__14J2DGrafContextFv();
extern "C" void func_802E90C0();
extern "C" void func_802E90E4();
extern "C" void
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor();
extern "C" void setLineWidth__14J2DGrafContextFUc();
extern "C" void func_802E9260();
extern "C" void func_802E9368();
extern "C" void func_802E9488();
extern "C" void func_802E9564();
extern "C" void __dt__14J2DGrafContextFv();
extern "C" void place__14J2DGrafContextFffff();
extern "C" bool getGrafType__14J2DGrafContextCFv();
extern "C" void setLookat__14J2DGrafContextFv();

//
// External References:
//

extern "C" void __dl__FPv();
extern "C" void __cvt_fp2unsigned();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" void ceil();

//
// Declarations:
//

/* ############################################################################################## */
/* 803CC9B8-803CC9E0 029AD8 0028+00 2/2 13/13 0/0 .data            __vt__14J2DGrafContext */
SECTION_DATA extern void* __vt__14J2DGrafContext[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14J2DGrafContextFv,
    (void*)func_802E90E4,
    (void*)place__14J2DGrafContextFffff,
    (void*)setPort__14J2DGrafContextFv,
    (void*)setup2D__14J2DGrafContextFv,
    (void*)setScissor__14J2DGrafContextFv,
    (void*)getGrafType__14J2DGrafContextCFv,
    (void*)setLookat__14J2DGrafContextFv,
};

/* 802E8B08-802E8BB4 2E3448 00AC+00 0/0 2/2 0/0 .text            __ct__14J2DGrafContextFffff */
// reversed stack
#ifdef NONMATCHING
J2DGrafContext::J2DGrafContext(f32 left, f32 top, f32 right, f32 bottom)
    : mBounds(left, top, left + right, top + bottom),
      mScissorBounds(left, top, left + right, top + bottom), field_0x24(-1), field_0x28(-1),
      field_0x2c(-1), field_0x30(-1) {
    JUtility::TColor color(-1);
    setColor(color, color, color, color);
    setLineWidth(6);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DGrafContext::J2DGrafContext(f32 param_0, f32 param_1, f32 param_2, f32 param_3) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DGrafContext/__ct__14J2DGrafContextFffff.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80456148-8045614C 004748 0004+00 5/5 0/0 0/0 .sdata2          @627 */
SECTION_SDATA2 static u8 lit_627[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8045614C-80456150 00474C 0004+00 1/1 0/0 0/0 .sdata2          @628 */
SECTION_SDATA2 static f32 lit_628 = 1.0f;

/* 802E8BB4-802E8C44 2E34F4 0090+00 1/0 1/1 0/0 .text            setPort__14J2DGrafContextFv */
// matches with literal
#ifdef NONMATCHING
void J2DGrafContext::setPort() {
    setScissor();
    setup2D();

    f32 x_origin = mBounds.i.x;
    f32 y_origin = mBounds.i.y;
    f32 width = mBounds.f.x;
    f32 height = mBounds.f.y;

    if (x_origin < 0.0f) {
        x_origin = 0.0f;
    }
    if (y_origin < 0.0f) {
        y_origin = 0.0f;
    }
    GXSetViewport(x_origin, y_origin, width - x_origin, height - y_origin, 0.0f, 1.0f);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DGrafContext::setPort() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DGrafContext/setPort__14J2DGrafContextFv.s"
}
#pragma pop
#endif

/* 802E8C44-802E8E20 2E3584 01DC+00 1/0 1/0 0/0 .text            setup2D__14J2DGrafContextFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DGrafContext::setup2D() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DGrafContext/setup2D__14J2DGrafContextFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456150-80456158 004750 0004+04 1/1 0/0 0/0 .sdata2          @730 */
SECTION_SDATA2 static f32 lit_730[1 + 1 /* padding */] = {
    1024.0f,
    /* padding */
    0.0f,
};

/* 80456158-80456160 004758 0008+00 1/1 0/0 0/0 .sdata2          @732 */
SECTION_SDATA2 static f64 lit_732 = 4503599627370496.0 /* cast u32 to float */;

/* 802E8E20-802E90C0 2E3760 02A0+00 1/0 2/1 0/0 .text            setScissor__14J2DGrafContextFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DGrafContext::setScissor() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DGrafContext/setScissor__14J2DGrafContextFv.s"
}
#pragma pop

/* 802E90C0-802E90E4 2E3A00 0024+00 0/0 10/10 0/0 .text
 * scissor__14J2DGrafContextFRCQ29JGeometry8TBox2<f>            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DGrafContext::scissor(JGeometry::TBox2<f32> const& param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DGrafContext/func_802E90C0.s"
}
#pragma pop

/* 802E90E4-802E9118 2E3A24 0034+00 1/0 1/0 0/0 .text
 * place__14J2DGrafContextFRCQ29JGeometry8TBox2<f>              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DGrafContext::place(JGeometry::TBox2<f32> const& param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DGrafContext/func_802E90E4.s"
}
#pragma pop

/* 802E9118-802E9234 2E3A58 011C+00 1/1 4/4 0/0 .text
 * setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DGrafContext::setColor(JUtility::TColor param_0, JUtility::TColor param_1,
                                  JUtility::TColor param_2, JUtility::TColor param_3) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DGrafContext/func_802E9118.s"
}
#pragma pop

/* 802E9234-802E9260 2E3B74 002C+00 1/1 2/2 0/0 .text            setLineWidth__14J2DGrafContextFUc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DGrafContext::setLineWidth(u8 param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DGrafContext/setLineWidth__14J2DGrafContextFUc.s"
}
#pragma pop

/* 802E9260-802E9368 2E3BA0 0108+00 0/0 2/2 0/0 .text
 * fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DGrafContext::fillBox(JGeometry::TBox2<f32> const& param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DGrafContext/func_802E9260.s"
}
#pragma pop

/* 802E9368-802E9488 2E3CA8 0120+00 0/0 1/1 0/0 .text
 * drawFrame__14J2DGrafContextFRCQ29JGeometry8TBox2<f>          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DGrafContext::drawFrame(JGeometry::TBox2<f32> const& param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DGrafContext/func_802E9368.s"
}
#pragma pop

/* 802E9488-802E9564 2E3DC8 00DC+00 1/1 0/0 0/0 .text
 * line__14J2DGrafContextFQ29JGeometry8TVec2<f>Q29JGeometry8TVec2<f> */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DGrafContext::line(JGeometry::TVec2<f32> param_0, JGeometry::TVec2<f32> param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DGrafContext/func_802E9488.s"
}
#pragma pop

/* 802E9564-802E95D4 2E3EA4 0070+00 0/0 1/1 0/0 .text
 * lineTo__14J2DGrafContextFQ29JGeometry8TVec2<f>               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DGrafContext::lineTo(JGeometry::TVec2<f32> param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DGrafContext/func_802E9564.s"
}
#pragma pop

/* 802E95D4-802E961C 2E3F14 0048+00 1/0 0/0 0/0 .text            __dt__14J2DGrafContextFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DGrafContext::~J2DGrafContext() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DGrafContext/__dt__14J2DGrafContextFv.s"
}
#pragma pop

/* 802E961C-802E9664 2E3F5C 0048+00 1/0 1/0 0/0 .text            place__14J2DGrafContextFffff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DGrafContext::place(f32 param_0, f32 param_1, f32 param_2, f32 param_3) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DGrafContext/place__14J2DGrafContextFffff.s"
}
#pragma pop

/* 802E9664-802E966C 2E3FA4 0008+00 1/0 0/0 0/0 .text            getGrafType__14J2DGrafContextCFv */
bool J2DGrafContext::getGrafType() const {
    return false;
}

/* 802E966C-802E9670 2E3FAC 0004+00 1/0 0/0 0/0 .text            setLookat__14J2DGrafContextFv */
void J2DGrafContext::setLookat() {
    /* empty function */
}
