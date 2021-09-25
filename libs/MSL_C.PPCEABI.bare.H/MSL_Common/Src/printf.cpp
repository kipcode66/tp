//
// Generated By: dol2asm
// Translation Unit: MSL_Common/Src/printf
//

#include "MSL_C.PPCEABI.bare.H/MSL_Common/Src/printf.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

struct __va_list_struct;

extern "C" void sprintf();
extern "C" void snprintf();
extern "C" size_t vsnprintf(char* buffer, size_t buffer_size, const char* format, __va_list_struct* args);
extern "C" void vprintf();
extern "C" void fprintf();
extern "C" void printf();
extern "C" void __StringWrite();
extern "C" void __FileWrite();
extern "C" void __pformatter();
extern "C" static void float2str();
extern "C" static void round_decimal();
extern "C" static void double2hex();
extern "C" static void longlong2str();
extern "C" static void long2str();
extern "C" static void parse_format();
extern "C" extern char const* const MSL_Common_Src_printf__stringBase0;

//
// External References:
//

SECTION_INIT void memcpy();
extern "C" void __va_arg();
extern "C" void __div2u();
extern "C" void __mod2u();
extern "C" void __num2dec();
extern "C" void __end_critical_region();
extern "C" void __begin_critical_region();
extern "C" void fwrite();
extern "C" void wcstombs();
extern "C" void memchr();
extern "C" void strchr();
extern "C" void strcpy();
extern "C" void strlen();
extern "C" void fwide();
extern "C" extern void* __files[80];
extern "C" extern u8 __ctype_map[256];

//
// Declarations:
//

/* 803664DC-803665BC 360E1C 00E0+00 0/0 32/32 14/14 .text            sprintf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void sprintf() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/printf/sprintf.s"
}
#pragma pop

/* 803665BC-80366690 360EFC 00D4+00 0/0 19/19 0/0 .text            snprintf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void snprintf() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/printf/snprintf.s"
}
#pragma pop

/* 80366690-80366704 360FD0 0074+00 0/0 8/8 0/0 .text            vsnprintf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm size_t vsnprintf(char* buffer, size_t buffer_size, const char* format, __va_list_struct* args) {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/printf/vsnprintf.s"
}
#pragma pop

/* 80366704-8036679C 361044 0098+00 0/0 2/2 0/0 .text            vprintf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void vprintf() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/printf/vprintf.s"
}
#pragma pop

/* 8036679C-8036687C 3610DC 00E0+00 0/0 9/9 0/0 .text            fprintf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fprintf() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/printf/fprintf.s"
}
#pragma pop

/* 8036687C-80366964 3611BC 00E8+00 0/0 4/4 0/0 .text            printf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void printf() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/printf/printf.s"
}
#pragma pop

/* 80366964-803669D0 3612A4 006C+00 3/3 0/0 0/0 .text            __StringWrite */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __StringWrite() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/printf/__StringWrite.s"
}
#pragma pop

/* 803669D0-80366A28 361310 0058+00 3/3 0/0 0/0 .text            __FileWrite */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __FileWrite() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/printf/__FileWrite.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A2318-803A2318 02E978 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_803A2318 = "";
#pragma pop

/* 80450AD8-80450AE0 000558 0002+06 1/1 0/0 0/0 .sdata           @wstringBase0 */
SECTION_SDATA static u8 data_80450AD8[2 + 6 /* padding */] = {
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80366A28-8036719C 361368 0774+00 6/6 0/0 0/0 .text            __pformatter */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __pformatter() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/printf/__pformatter.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A2318-803A2318 02E978 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_803A2319 = "-INF";
SECTION_DEAD static char const* const stringBase_803A231E = "-inf";
SECTION_DEAD static char const* const stringBase_803A2323 = "INF";
SECTION_DEAD static char const* const stringBase_803A2327 = "inf";
SECTION_DEAD static char const* const stringBase_803A232B = "-NAN";
SECTION_DEAD static char const* const stringBase_803A2330 = "-nan";
SECTION_DEAD static char const* const stringBase_803A2335 = "NAN";
SECTION_DEAD static char const* const stringBase_803A2339 = "nan";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_803A233D = "\0\0";
#pragma pop

/* 80456670-80456678 004C70 0008+00 1/1 0/0 0/0 .sdata2          @1089 */
SECTION_SDATA2 static u8 lit_1089[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8036719C-803678B8 361ADC 071C+00 1/1 0/0 0/0 .text            float2str */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void float2str() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/printf/float2str.s"
}
#pragma pop

/* 803678B8-803679E4 3621F8 012C+00 1/1 0/0 0/0 .text            round_decimal */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void round_decimal() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/printf/round_decimal.s"
}
#pragma pop

/* 803679E4-80367D1C 362324 0338+00 1/1 0/0 0/0 .text            double2hex */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void double2hex() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/printf/double2hex.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D2F18-803D2F9C -00001 0084+00 1/1 0/0 0/0 .data            @1248 */
SECTION_DATA static void* lit_1248[33] = {
    (void*)(((char*)longlong2str) + 0xF8),  (void*)(((char*)longlong2str) + 0x108),
    (void*)(((char*)longlong2str) + 0x108), (void*)(((char*)longlong2str) + 0x108),
    (void*)(((char*)longlong2str) + 0x108), (void*)(((char*)longlong2str) + 0x108),
    (void*)(((char*)longlong2str) + 0x108), (void*)(((char*)longlong2str) + 0x108),
    (void*)(((char*)longlong2str) + 0x108), (void*)(((char*)longlong2str) + 0x108),
    (void*)(((char*)longlong2str) + 0x108), (void*)(((char*)longlong2str) + 0x108),
    (void*)(((char*)longlong2str) + 0x98),  (void*)(((char*)longlong2str) + 0x108),
    (void*)(((char*)longlong2str) + 0x108), (void*)(((char*)longlong2str) + 0x108),
    (void*)(((char*)longlong2str) + 0x108), (void*)(((char*)longlong2str) + 0x98),
    (void*)(((char*)longlong2str) + 0x108), (void*)(((char*)longlong2str) + 0x108),
    (void*)(((char*)longlong2str) + 0x108), (void*)(((char*)longlong2str) + 0x108),
    (void*)(((char*)longlong2str) + 0x108), (void*)(((char*)longlong2str) + 0xD0),
    (void*)(((char*)longlong2str) + 0x108), (void*)(((char*)longlong2str) + 0x108),
    (void*)(((char*)longlong2str) + 0x108), (void*)(((char*)longlong2str) + 0x108),
    (void*)(((char*)longlong2str) + 0x108), (void*)(((char*)longlong2str) + 0xE4),
    (void*)(((char*)longlong2str) + 0x108), (void*)(((char*)longlong2str) + 0x108),
    (void*)(((char*)longlong2str) + 0xF8),
};

/* 80367D1C-80368030 36265C 0314+00 2/1 0/0 0/0 .text            longlong2str */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void longlong2str() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/printf/longlong2str.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D2F9C-803D3020 -00001 0084+00 1/1 0/0 0/0 .data            @1307 */
SECTION_DATA static void* lit_1307[33] = {
    (void*)(((char*)long2str) + 0xA8), (void*)(((char*)long2str) + 0xB4),
    (void*)(((char*)long2str) + 0xB4), (void*)(((char*)long2str) + 0xB4),
    (void*)(((char*)long2str) + 0xB4), (void*)(((char*)long2str) + 0xB4),
    (void*)(((char*)long2str) + 0xB4), (void*)(((char*)long2str) + 0xB4),
    (void*)(((char*)long2str) + 0xB4), (void*)(((char*)long2str) + 0xB4),
    (void*)(((char*)long2str) + 0xB4), (void*)(((char*)long2str) + 0xB4),
    (void*)(((char*)long2str) + 0x70), (void*)(((char*)long2str) + 0xB4),
    (void*)(((char*)long2str) + 0xB4), (void*)(((char*)long2str) + 0xB4),
    (void*)(((char*)long2str) + 0xB4), (void*)(((char*)long2str) + 0x70),
    (void*)(((char*)long2str) + 0xB4), (void*)(((char*)long2str) + 0xB4),
    (void*)(((char*)long2str) + 0xB4), (void*)(((char*)long2str) + 0xB4),
    (void*)(((char*)long2str) + 0xB4), (void*)(((char*)long2str) + 0x88),
    (void*)(((char*)long2str) + 0xB4), (void*)(((char*)long2str) + 0xB4),
    (void*)(((char*)long2str) + 0xB4), (void*)(((char*)long2str) + 0xB4),
    (void*)(((char*)long2str) + 0xB4), (void*)(((char*)long2str) + 0x98),
    (void*)(((char*)long2str) + 0xB4), (void*)(((char*)long2str) + 0xB4),
    (void*)(((char*)long2str) + 0xA8),
};

/* 80368030-80368288 362970 0258+00 3/2 0/0 0/0 .text            long2str */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void long2str() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/printf/long2str.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D3020-803D3100 -00001 00E0+00 1/1 0/0 0/0 .data            @1443 */
SECTION_DATA static void* lit_1443[56] = {
    (void*)(((char*)parse_format) + 0x38C), (void*)(((char*)parse_format) + 0x4BC),
    (void*)(((char*)parse_format) + 0x4BC), (void*)(((char*)parse_format) + 0x4BC),
    (void*)(((char*)parse_format) + 0x3DC), (void*)(((char*)parse_format) + 0x354),
    (void*)(((char*)parse_format) + 0x3C8), (void*)(((char*)parse_format) + 0x4BC),
    (void*)(((char*)parse_format) + 0x4BC), (void*)(((char*)parse_format) + 0x4BC),
    (void*)(((char*)parse_format) + 0x4BC), (void*)(((char*)parse_format) + 0x4BC),
    (void*)(((char*)parse_format) + 0x4BC), (void*)(((char*)parse_format) + 0x4BC),
    (void*)(((char*)parse_format) + 0x4BC), (void*)(((char*)parse_format) + 0x4BC),
    (void*)(((char*)parse_format) + 0x4BC), (void*)(((char*)parse_format) + 0x4BC),
    (void*)(((char*)parse_format) + 0x4BC), (void*)(((char*)parse_format) + 0x4BC),
    (void*)(((char*)parse_format) + 0x4BC), (void*)(((char*)parse_format) + 0x4BC),
    (void*)(((char*)parse_format) + 0x4BC), (void*)(((char*)parse_format) + 0x30C),
    (void*)(((char*)parse_format) + 0x4BC), (void*)(((char*)parse_format) + 0x4BC),
    (void*)(((char*)parse_format) + 0x4BC), (void*)(((char*)parse_format) + 0x4BC),
    (void*)(((char*)parse_format) + 0x4BC), (void*)(((char*)parse_format) + 0x4BC),
    (void*)(((char*)parse_format) + 0x4BC), (void*)(((char*)parse_format) + 0x4BC),
    (void*)(((char*)parse_format) + 0x38C), (void*)(((char*)parse_format) + 0x4BC),
    (void*)(((char*)parse_format) + 0x440), (void*)(((char*)parse_format) + 0x30C),
    (void*)(((char*)parse_format) + 0x3DC), (void*)(((char*)parse_format) + 0x354),
    (void*)(((char*)parse_format) + 0x3C8), (void*)(((char*)parse_format) + 0x4BC),
    (void*)(((char*)parse_format) + 0x30C), (void*)(((char*)parse_format) + 0x4BC),
    (void*)(((char*)parse_format) + 0x4BC), (void*)(((char*)parse_format) + 0x4BC),
    (void*)(((char*)parse_format) + 0x4BC), (void*)(((char*)parse_format) + 0x4A4),
    (void*)(((char*)parse_format) + 0x30C), (void*)(((char*)parse_format) + 0x41C),
    (void*)(((char*)parse_format) + 0x4BC), (void*)(((char*)parse_format) + 0x4BC),
    (void*)(((char*)parse_format) + 0x478), (void*)(((char*)parse_format) + 0x4BC),
    (void*)(((char*)parse_format) + 0x30C), (void*)(((char*)parse_format) + 0x4BC),
    (void*)(((char*)parse_format) + 0x4BC), (void*)(((char*)parse_format) + 0x30C),
};

/* 803D3100-803D3148 -00001 0044+04 1/1 0/0 0/0 .data            @1442 */
SECTION_DATA static void* lit_1442[17 + 1 /* padding */] = {
    (void*)(((char*)parse_format) + 0xBC),
    (void*)(((char*)parse_format) + 0xF8),
    (void*)(((char*)parse_format) + 0xF8),
    (void*)(((char*)parse_format) + 0xD4),
    (void*)(((char*)parse_format) + 0xF8),
    (void*)(((char*)parse_format) + 0xF8),
    (void*)(((char*)parse_format) + 0xF8),
    (void*)(((char*)parse_format) + 0xF8),
    (void*)(((char*)parse_format) + 0xF8),
    (void*)(((char*)parse_format) + 0xF8),
    (void*)(((char*)parse_format) + 0xF8),
    (void*)(((char*)parse_format) + 0xB0),
    (void*)(((char*)parse_format) + 0xF8),
    (void*)(((char*)parse_format) + 0xA4),
    (void*)(((char*)parse_format) + 0xF8),
    (void*)(((char*)parse_format) + 0xF8),
    (void*)(((char*)parse_format) + 0xE0),
    /* padding */
    NULL,
};

/* 80368288-8036878C 362BC8 0504+00 3/1 0/0 0/0 .text            parse_format */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void parse_format() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/printf/parse_format.s"
}
#pragma pop

/* 803A2318-803A2318 02E978 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
