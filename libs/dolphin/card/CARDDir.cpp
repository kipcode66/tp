//
// Generated By: dol2asm
// Translation Unit: CARDDir
//

#include "dolphin/card/CARDDir.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __CARDGetDirBlock();
extern "C" static void WriteCallback();
extern "C" static void EraseCallback();
extern "C" void __CARDUpdateDir();

//
// External References:
//

SECTION_INIT void memcpy();
extern "C" void DCStoreRange();
extern "C" void __CARDEraseSector();
extern "C" void __CARDPutControlBlock();
extern "C" void __CARDWrite();
extern "C" void __CARDCheckSum();
extern "C" extern u8 __CARDBlock[544];

//
// Declarations:
//

/* 8035577C-80355784 0008+00 s=0 e=10 z=0  None .text      __CARDGetDirBlock */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __CARDGetDirBlock() {
    nofralloc
#include "asm/dolphin/card/CARDDir/__CARDGetDirBlock.s"
}
#pragma pop

/* 80355784-80355854 00D0+00 s=1 e=0 z=0  None .text      WriteCallback */
//	803557A8: 8044CBC0 (__CARDBlock)
//	803557AC: 8044CBC0 (__CARDBlock)
//	803557DC: 80003540 (memcpy)
//	803557F4: 80003540 (memcpy)
//	8035580C: 80353C6C (__CARDPutControlBlock)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void WriteCallback() {
    nofralloc
#include "asm/dolphin/card/CARDDir/WriteCallback.s"
}
#pragma pop

/* 80355854-8035591C 00C8+00 s=1 e=0 z=0  None .text      EraseCallback */
//	80355868: 8044CBC0 (__CARDBlock)
//	80355878: 8044CBC0 (__CARDBlock)
//	8035588C: 80355784 (WriteCallback)
//	80355894: 80355784 (WriteCallback)
//	803558B4: 803553AC (__CARDWrite)
//	803558D4: 80353C6C (__CARDPutControlBlock)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm static void EraseCallback() {
    nofralloc
#include "asm/dolphin/card/CARDDir/EraseCallback.s"
}
#pragma pop

/* 8035591C-803559E0 00C4+00 s=0 e=4 z=0  None .text      __CARDUpdateDir */
//	80355944: 8044CBC0 (__CARDBlock)
//	80355948: 8044CBC0 (__CARDBlock)
//	80355988: 803559E0 (__CARDCheckSum)
//	80355994: 8033B5DC (DCStoreRange)
//	8035599C: 80355854 (EraseCallback)
//	803559A0: 80355854 (EraseCallback)
//	803559BC: 803539B8 (__CARDEraseSector)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __CARDUpdateDir() {
    nofralloc
#include "asm/dolphin/card/CARDDir/__CARDUpdateDir.s"
}
#pragma pop
