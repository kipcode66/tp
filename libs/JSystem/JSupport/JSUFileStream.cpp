//
// Generated By: dol2asm
// Translation Unit: JSUFileStream
//

#include "JSystem/JSupport/JSUFileStream.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void __ct__18JSUFileInputStreamFP7JKRFile();
extern "C" void readData__18JSUFileInputStreamFPvl();
extern "C" void seekPos__18JSUFileInputStreamFl17JSUStreamSeekFrom();
extern "C" void getLength__18JSUFileInputStreamCFv();
extern "C" void getPosition__18JSUFileInputStreamCFv();

//
// External References:
//

extern "C" void getAvailable__20JSURandomInputStreamCFv();
extern "C" void __dt__18JSUFileInputStreamFv();
extern "C" void skip__20JSURandomInputStreamFl();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__10JSUIosBase[3];
extern "C" extern void* __vt__20JSURandomInputStream[9];
extern "C" extern void* __vt__14JSUInputStream[6 + 1 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 803CC518-803CC540 029638 0024+04 1/1 1/1 0/0 .data            __vt__18JSUFileInputStream */
SECTION_DATA extern void* __vt__18JSUFileInputStream[9 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18JSUFileInputStreamFv,
    (void*)getAvailable__20JSURandomInputStreamCFv,
    (void*)skip__20JSURandomInputStreamFl,
    (void*)readData__18JSUFileInputStreamFPvl,
    (void*)getLength__18JSUFileInputStreamCFv,
    (void*)getPosition__18JSUFileInputStreamCFv,
    (void*)seekPos__18JSUFileInputStreamFl17JSUStreamSeekFrom,
    /* padding */
    NULL,
};

/* 802DC638-802DC67C 2D6F78 0044+00 0/0 1/1 0/0 .text __ct__18JSUFileInputStreamFP7JKRFile */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JSUFileInputStream::JSUFileInputStream(JKRFile* param_0) {
    nofralloc
#include "asm/JSystem/JSupport/JSUFileStream/__ct__18JSUFileInputStreamFP7JKRFile.s"
}
#pragma pop

/* 802DC67C-802DC74C 2D6FBC 00D0+00 1/0 0/0 0/0 .text            readData__18JSUFileInputStreamFPvl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm s32 JSUFileInputStream::readData(void* param_0, s32 param_1) {
    nofralloc
#include "asm/JSystem/JSupport/JSUFileStream/readData__18JSUFileInputStreamFPvl.s"
}
#pragma pop

/* 802DC74C-802DC82C 2D708C 00E0+00 1/0 0/0 0/0 .text
 * seekPos__18JSUFileInputStreamFl17JSUStreamSeekFrom           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JSUFileInputStream::seekPos(s32 param_0, JSUStreamSeekFrom param_1) {
    nofralloc
#include "asm/JSystem/JSupport/JSUFileStream/seekPos__18JSUFileInputStreamFl17JSUStreamSeekFrom.s"
}
#pragma pop

/* 802DC82C-802DC85C 2D716C 0030+00 1/0 0/0 0/0 .text            getLength__18JSUFileInputStreamCFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm s32 JSUFileInputStream::getLength() const {
    nofralloc
#include "asm/JSystem/JSupport/JSUFileStream/getLength__18JSUFileInputStreamCFv.s"
}
#pragma pop

/* 802DC85C-802DC864 2D719C 0008+00 1/0 0/0 0/0 .text getPosition__18JSUFileInputStreamCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm s32 JSUFileInputStream::getPosition() const {
    nofralloc
#include "asm/JSystem/JSupport/JSUFileStream/getPosition__18JSUFileInputStreamCFv.s"
}
#pragma pop
