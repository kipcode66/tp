//
// Generated By: dol2asm
// Translation Unit: Gecko_ExceptionPPC
//

#include "Runtime.PPCEABI.H/Gecko_ExceptionPPC.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __unregister_fragment();
extern "C" void __register_fragment();

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
/* 8044D430-8044D440 000C+04 s=2 e=0 z=0  None .bss       fragmentinfo */
static u8 fragmentinfo[12 + 4 /* padding */];

/* 803628AC-803628E0 0034+00 s=0 e=1 z=0  None .text      __unregister_fragment */
//	803628C0: 8044D430 (fragmentinfo)
//	803628C8: 8044D430 (fragmentinfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __unregister_fragment() {
    nofralloc
#include "asm/Runtime.PPCEABI.H/Gecko_ExceptionPPC/__unregister_fragment.s"
}
#pragma pop

/* 803628E0-80362914 0034+00 s=0 e=1 z=0  None .text      __register_fragment */
//	803628E0: 8044D430 (fragmentinfo)
//	803628E4: 8044D430 (fragmentinfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __register_fragment() {
    nofralloc
#include "asm/Runtime.PPCEABI.H/Gecko_ExceptionPPC/__register_fragment.s"
}
#pragma pop
