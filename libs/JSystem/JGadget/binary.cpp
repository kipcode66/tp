//
// Generated By: dol2asm
// Translation Unit: binary
//

#include "JSystem/JGadget/binary.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

namespace JGadget {
struct binary {
    struct TEBit {};

    struct TParse_header_block {
        /* 802DC8C8 */ ~TParse_header_block();
        /* 802DC910 */ void parse_next(void const**, u32);
    };

    /* 802DC864 */ void parseVariableUInt_16_32_following(void const*, u32*, u32*,
                                                          JGadget::binary::TEBit*);
};

};  // namespace JGadget

//
// Forward References:
//

extern "C" void
parseVariableUInt_16_32_following__Q27JGadget6binaryFPCvPUlPUlPQ37JGadget6binary5TEBit();
extern "C" void __dt__Q37JGadget6binary19TParse_header_blockFv();
extern "C" void parse_next__Q37JGadget6binary19TParse_header_blockFPPCvUl();

//
// External References:
//

void operator delete(void*);

extern "C" void __dl__FPv();
extern "C" void _savegpr_26();
extern "C" void _restgpr_26();
extern "C" extern void* __vt__Q37JGadget6binary19TParse_header_block[5];

//
// Declarations:
//

/* 802DC864-802DC8C8 0064+00 s=0 e=2 z=0  None .text
 * parseVariableUInt_16_32_following__Q27JGadget6binaryFPCvPUlPUlPQ37JGadget6binary5TEBit */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JGadget::binary::parseVariableUInt_16_32_following(void const* param_0, u32* param_1,
                                                            u32* param_2,
                                                            JGadget::binary::TEBit* param_3) {
    nofralloc
#include "asm/JSystem/JGadget/binary/parseVariableUInt_16_32_following__Q27JGadget6binaryFPCvPUlPUlPQ37JGadget6binary5TEBit.s"
}
#pragma pop

/* 802DC8C8-802DC910 0048+00 s=0 e=4 z=0  None .text
 * __dt__Q37JGadget6binary19TParse_header_blockFv               */
//	802DC8E0: 803C488C (__vt__Q37JGadget6binary19TParse_header_block)
//	802DC8E4: 803C488C (__vt__Q37JGadget6binary19TParse_header_block)
//	802DC8F4: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JGadget::binary::TParse_header_block::~TParse_header_block() {
    nofralloc
#include "asm/JSystem/JGadget/binary/__dt__Q37JGadget6binary19TParse_header_blockFv.s"
}
#pragma pop

/* 802DC910-802DCA1C 010C+00 s=0 e=9 z=0  None .text
 * parse_next__Q37JGadget6binary19TParse_header_blockFPPCvUl    */
//	802DC920: 803621D0 (_savegpr_26)
//	802DCA08: 8036221C (_restgpr_26)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JGadget::binary::TParse_header_block::parse_next(void const** param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JGadget/binary/parse_next__Q37JGadget6binary19TParse_header_blockFPPCvUl.s"
}
#pragma pop
