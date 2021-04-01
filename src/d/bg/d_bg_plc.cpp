//
// Generated By: dol2asm
// Translation Unit: d/bg/d_bg_plc
//

#include "d/bg/d_bg_plc.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct sBgPc {};

struct dBgPlc {
    /* 80074074 */ dBgPlc();
    /* 80074080 */ ~dBgPlc();
    /* 800740BC */ void setBase(void*);
    /* 800740C4 */ void getCode(int, sBgPc**) const;
    /* 800740DC */ void getGrpCode(int) const;
};

//
// Forward References:
//

extern "C" void __ct__6dBgPlcFv();
extern "C" void __dt__6dBgPlcFv();
extern "C" void setBase__6dBgPlcFPv();
extern "C" void getCode__6dBgPlcCFiPP5sBgPc();
extern "C" void getGrpCode__6dBgPlcCFi();

//
// External References:
//

void operator delete(void*);

extern "C" void __dl__FPv();

//
// Declarations:
//

/* 80074074-80074080 000C+00 s=0 e=1 z=0  None .text      __ct__6dBgPlcFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgPlc::dBgPlc() {
    nofralloc
#include "asm/d/bg/d_bg_plc/__ct__6dBgPlcFv.s"
}
#pragma pop

/* 80074080-800740BC 003C+00 s=0 e=1 z=0  None .text      __dt__6dBgPlcFv */
//	800740A0: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgPlc::~dBgPlc() {
    nofralloc
#include "asm/d/bg/d_bg_plc/__dt__6dBgPlcFv.s"
}
#pragma pop

/* 800740BC-800740C4 0008+00 s=0 e=1 z=0  None .text      setBase__6dBgPlcFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgPlc::setBase(void* param_0) {
    nofralloc
#include "asm/d/bg/d_bg_plc/setBase__6dBgPlcFPv.s"
}
#pragma pop

/* 800740C4-800740DC 0018+00 s=0 e=1 z=0  None .text      getCode__6dBgPlcCFiPP5sBgPc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgPlc::getCode(int param_0, sBgPc** param_1) const {
    nofralloc
#include "asm/d/bg/d_bg_plc/getCode__6dBgPlcCFiPP5sBgPc.s"
}
#pragma pop

/* 800740DC-800740F4 0018+00 s=0 e=1 z=0  None .text      getGrpCode__6dBgPlcCFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgPlc::getGrpCode(int param_0) const {
    nofralloc
#include "asm/d/bg/d_bg_plc/getGrpCode__6dBgPlcCFi.s"
}
#pragma pop
