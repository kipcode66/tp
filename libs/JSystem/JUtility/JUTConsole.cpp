//
// Generated By: dol2asm
// Translation Unit: JUTConsole
//

#include "JSystem/JUtility/JUTConsole.h"
#include "JSystem/J2DGraph/J2DOrthoGraph.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JUtility/JUTDirectPrint.h"
#include "JSystem/JUtility/JUTVideo.h"
#include "MSL_C/MSL_Common/Src/printf.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void create__10JUTConsoleFUiUiP7JKRHeap();
extern "C" void create__10JUTConsoleFUiPvUl();
extern "C" void __ct__10JUTConsoleFUiUib();
extern "C" void __dt__10JUTConsoleFv();
extern "C" void getObjectSizeFromBufferSize__10JUTConsoleFUiUi();
extern "C" void getLineFromObjectSize__10JUTConsoleFUlUi();
extern "C" void clear__10JUTConsoleFv();
extern "C" void doDraw__10JUTConsoleCFQ210JUTConsole12EConsoleType();
extern "C" void print_f__10JUTConsoleFPCce();
extern "C" void print__10JUTConsoleFPCc();
extern "C" void dumpToTerminal__10JUTConsoleFUi();
extern "C" void scroll__10JUTConsoleFi();
extern "C" void getUsedLine__10JUTConsoleCFv();
extern "C" void getLineOffset__10JUTConsoleCFv();
extern "C" void __ct__17JUTConsoleManagerFv();
extern "C" void createManager__17JUTConsoleManagerFP7JKRHeap();
extern "C" void appendConsole__17JUTConsoleManagerFP10JUTConsole();
extern "C" void removeConsole__17JUTConsoleManagerFP10JUTConsole();
extern "C" void draw__17JUTConsoleManagerCFv();
extern "C" void drawDirect__17JUTConsoleManagerCFb();
extern "C" void setDirectConsole__17JUTConsoleManagerFP10JUTConsole();
extern "C" void JUTReportConsole(const char* message);
extern "C" void JUTWarningConsole_f(const char* fmt, ...);
extern "C" void JUTWarningConsole(const char*);
extern "C" extern char const* const JUTConsole__stringBase0;
extern "C" u8 sManager__17JUTConsoleManager[4];

//
// External References:
//

extern "C" void alloc__7JKRHeapFUliP7JKRHeap();
extern "C" void* __nw__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void __ct__11JKRDisposerFv();
extern "C" void __dt__11JKRDisposerFv();
extern "C" void
Insert__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorPQ27JGadget13TLinkListNode();
extern "C" void Remove__Q27JGadget13TNodeLinkListFPQ27JGadget13TLinkListNode();
extern "C" void setCharColor__7JUTFontFQ28JUtility6TColor();
extern "C" void drawString_size_scale__7JUTFontFffffPCcUlb();
extern "C" void erase__14JUTDirectPrintFiiii();
extern "C" void drawString__14JUTDirectPrintFUsUsPc();
extern "C" void setCharColor__14JUTDirectPrintFQ28JUtility6TColor();
extern "C" void __ct__13J2DOrthoGraphFffffff();
extern "C" void setPort__13J2DOrthoGraphFv();
extern "C" void J2DFillBox__FffffQ28JUtility6TColor();
extern "C" u32 VIGetRetraceCount();
extern "C" void _savegpr_20();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_20();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__14J2DGrafContext[10];
extern "C" extern void* __vt__13J2DOrthoGraph[10];
extern "C" u8 sCurrentHeap__7JKRHeap[4];
extern "C" u8 sDirectPrint__14JUTDirectPrint[4 + 4 /* padding */];
extern "C" u8 sManager__8JUTVideo[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80451570-80451574 000A70 0004+00 4/4 7/7 0/0 .sbss            sManager__17JUTConsoleManager */
JUTConsoleManager* JUTConsoleManager::sManager;

/* 802E7354-802E73E4 2E1C94 0090+00 0/0 1/1 0/0 .text            create__10JUTConsoleFUiUiP7JKRHeap
 */
JUTConsole* JUTConsole::create(unsigned int param_0, unsigned int maxLines, JKRHeap* p_heap) {
    JUTConsoleManager* pManager = JUTConsoleManager::sManager;

    void* buffer = JKRHeap::alloc(getObjectSizeFromBufferSize(param_0, maxLines), 0, p_heap);
    u8* tmpBuf = (u8*)buffer;

    JUTConsole* newConsole = new (tmpBuf) JUTConsole(param_0, maxLines, true);
    newConsole->mBuf = tmpBuf + sizeof(JUTConsole);
    newConsole->clear();

    pManager->appendConsole(newConsole);
    return newConsole;
}

/* 802E73E4-802E746C 2E1D24 0088+00 0/0 1/1 0/0 .text            create__10JUTConsoleFUiPvUl */
JUTConsole* JUTConsole::create(unsigned int param_0, void* buffer, u32 bufferSize) {
    JUTConsoleManager* pManager = JUTConsoleManager::sManager;
    u32 maxLines = getLineFromObjectSize(bufferSize, param_0);

    JUTConsole* newConsole = new (buffer) JUTConsole(param_0, maxLines, false);
    newConsole->mBuf = (u8*)buffer + sizeof(JUTConsole);
    newConsole->clear();

    pManager->appendConsole(newConsole);
    return newConsole;
}

/* 802E746C-802E755C 2E1DAC 00F0+00 2/2 0/0 0/0 .text            __ct__10JUTConsoleFUiUib */
JUTConsole::JUTConsole(unsigned int param_0, unsigned int maxLines, bool param_2) {
    field_0x2c = param_2;
    field_0x20 = param_0;
    mMaxLines = maxLines;

    mPositionX = 30;
    mPositionY = 50;
    mHeight = 20;

    if (mHeight > mMaxLines) {
        mHeight = mMaxLines;
    }

    mFont = NULL;
    mVisible = true;
    field_0x69 = false;
    field_0x6a = false;
    field_0x6b = false;
    mOutput = 1;

    field_0x5c.set(0, 0, 0, 100);
    field_0x60.set(0, 0, 0, 230);
    field_0x64 = 8;
}

/* 802E755C-802E75CC 2E1E9C 0070+00 1/0 0/0 0/0 .text            __dt__10JUTConsoleFv */
JUTConsole::~JUTConsole() {
    JUTConsoleManager::getManager()->removeConsole(this);
}

/* 802E75CC-802E75DC 2E1F0C 0010+00 1/1 0/0 0/0 .text
 * getObjectSizeFromBufferSize__10JUTConsoleFUiUi               */
size_t JUTConsole::getObjectSizeFromBufferSize(unsigned int param_0, unsigned int maxLines) {
    return (param_0 + 2) * maxLines + sizeof(JUTConsole);
}

/* 802E75DC-802E75EC 2E1F1C 0010+00 1/1 1/1 0/0 .text getLineFromObjectSize__10JUTConsoleFUlUi */
size_t JUTConsole::getLineFromObjectSize(u32 bufferSize, unsigned int param_1) {
    return (bufferSize - sizeof(JUTConsole)) / (param_1 + 2);
}

/* 802E75EC-802E7648 2E1F2C 005C+00 2/2 2/2 0/0 .text            clear__10JUTConsoleFv */
void JUTConsole::clear() {
    field_0x30 = 0;
    field_0x34 = 0;
    field_0x38 = 0;
    field_0x3c = 0;

    for (int i = 0; i < mMaxLines; i++) {
        setLineAttr(i, 0);
    }
    setLineAttr(0, -1);
    *getLinePtr(0) = 0;
}

/* 802E7648-802E7BB8 2E1F88 0570+00 2/2 0/0 0/0 .text
 * doDraw__10JUTConsoleCFQ210JUTConsole12EConsoleType           */
void JUTConsole::doDraw(JUTConsole::EConsoleType consoleType) const {
    f32 font_yOffset;
    s32 changeLine_1;
    s32 changeLine_2;

    if (mVisible && (mFont != NULL || consoleType == CONSOLE_TYPE_2)) {
        if (mHeight != 0) {
            bool temp_r30 = consoleType == CONSOLE_TYPE_0;
            font_yOffset = 2.0f + mFontSizeY;

            if (consoleType != CONSOLE_TYPE_2) {
                if (JUTVideo::getManager() == NULL) {
                    J2DOrthoGraph ortho(0.0f, 0.0f, 640.0f, 480.0f, -1.0f, 1.0f);
                    ortho.setPort();
                } else {
                    J2DOrthoGraph ortho(0.0f, 0.0f, JUTVideo::getManager()->getFbWidth(),
                                        JUTVideo::getManager()->getEfbHeight(), -1.0f, 1.0f);
                    ortho.setPort();
                }

                const JUtility::TColor* color;
                if (temp_r30) {
                    color = &field_0x60;
                } else {
                    color = &field_0x5c;
                }

                J2DFillBox(mPositionX - 2, (int)(mPositionY - font_yOffset),
                           (int)((mFontSizeX * field_0x20) + 4.0f), (int)(font_yOffset * mHeight),
                           *color);
                mFont->setGX();

                if (temp_r30) {
                    s32 s = (diffIndex(field_0x30, field_0x38) - mHeight) + 1;
                    if (s <= 0) {
                        mFont->setCharColor(JUtility::TColor(255, 255, 255, 255));
                    } else if (field_0x30 == field_0x34) {
                        mFont->setCharColor(JUtility::TColor(255, 230, 230, 255));
                    } else {
                        mFont->setCharColor(JUtility::TColor(230, 230, 255, 255));
                    }
                } else {
                    mFont->setCharColor(JUtility::TColor(230, 230, 230, 255));
                }
            } else {
                JUTDirectPrint::getManager()->erase(mPositionX - 3, mPositionY - 2,
                                                    (field_0x20 * 6) + 6,
                                                    (int)(font_yOffset * mHeight) + 4);
                JUTDirectPrint::getManager()->setCharColor(JUtility::TColor(255, 255, 255, 255));
            }

            char* linePtr;
            s32 curLine = field_0x30;
            s32 yFactor = 0;

            do {
                linePtr = (char*)getLinePtr(curLine);

                if ((u8)linePtr[-1] != NULL) {
                    if (consoleType != CONSOLE_TYPE_2) {
                        mFont->drawString_scale(mPositionX, ((yFactor * font_yOffset) + mPositionY),
                                                mFontSizeX, mFontSizeY, linePtr, true);
                    } else {
                        JUTDirectPrint::getManager()->drawString(
                            mPositionX, ((yFactor * font_yOffset) + mPositionY), linePtr);
                    }

                    changeLine_1 = curLine + 1;
                    yFactor += 1;
                    changeLine_2 = changeLine_1 & ~(-((s32)mMaxLines <= (s32)changeLine_1));
                    curLine = changeLine_2;
                } else {
                    break;
                }
            } while (yFactor < mHeight && changeLine_2 != field_0x34);
        }
    }
}

/* 802E7BB8-802E7C38 2E24F8 0080+00 0/0 13/13 0/0 .text            print_f__10JUTConsoleFPCce */
void JUTConsole::print_f(char const* fmt, ...) {
    va_list args;
    va_start(args, fmt);
    JUTConsole_print_f_va_(this, fmt, args);
    va_end(args);
}

/* 802E7C38-802E7F30 2E2578 02F8+00 2/2 10/10 0/0 .text            print__10JUTConsoleFPCc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTConsole::print(char const* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/print__10JUTConsoleFPCc.s"
}
#pragma pop

/* 802E7F30-802E7F7C 2E2870 004C+00 1/1 1/1 0/0 .text            JUTConsole_print_f_va_ */
extern "C" void JUTConsole_print_f_va_(JUTConsole* console, const char* fmt, va_list args) {
    char buf[1024];
    vsnprintf(buf, sizeof(buf), fmt, args);
    console->print(buf);
}

/* ############################################################################################## */
/* 8039D9A8-8039D9A8 02A008 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039D9A8 = "[%03d] %s\n";
SECTION_DEAD static char const* const stringBase_8039D9B3 = "%s\n";
#pragma pop

/* 802E7F7C-802E80A8 2E28BC 012C+00 0/0 2/2 0/0 .text            dumpToTerminal__10JUTConsoleFUi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTConsole::dumpToTerminal(unsigned int param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/dumpToTerminal__10JUTConsoleFUi.s"
}
#pragma pop

/* 802E80A8-802E8184 2E29E8 00DC+00 0/0 3/3 0/0 .text            scroll__10JUTConsoleFi */
void JUTConsole::scroll(int scrollAmnt) {
    if (scrollAmnt < 0) {
        int diff = diffIndex(field_0x34, field_0x30);
        if (scrollAmnt < -diff) {
            scrollAmnt = -diff;
        }
    } else {
        if (scrollAmnt > 0) {
            int diff = diffIndex(field_0x34, field_0x38);
            if (diff + 1 <= mHeight) {
                scrollAmnt = 0;
            } else {
                diff = diffIndex(field_0x30, field_0x38);
                if (scrollAmnt > (int)(diff - mHeight) + 1) {
                    scrollAmnt = (int)(diff - mHeight) + 1;
                }
            }
        }
    }
    field_0x30 += scrollAmnt;
    if (field_0x30 < 0) {
        field_0x30 += mMaxLines;
    }
    if (field_0x30 >= mMaxLines) {
        field_0x30 -= mMaxLines;
    }
}

/* 802E8184-802E81A8 2E2AC4 0024+00 0/0 2/2 0/0 .text            getUsedLine__10JUTConsoleCFv */
int JUTConsole::getUsedLine() const {
    return diffIndex(field_0x34, field_0x38);
}

/* 802E81A8-802E81CC 2E2AE8 0024+00 0/0 3/3 0/0 .text            getLineOffset__10JUTConsoleCFv */
int JUTConsole::getLineOffset() const {
    return diffIndex(field_0x34, field_0x30);
}

/* 802E81CC-802E81F4 2E2B0C 0028+00 1/1 0/0 0/0 .text            __ct__17JUTConsoleManagerFv */
JUTConsoleManager::JUTConsoleManager() {
    mActiveConsole = NULL;
    mDirectConsole = NULL;
}

/* 802E81F4-802E8240 2E2B34 004C+00 0/0 1/1 0/0 .text createManager__17JUTConsoleManagerFP7JKRHeap
 */
JUTConsoleManager* JUTConsoleManager::createManager(JKRHeap* pHeap) {
    if (pHeap == NULL) {
        pHeap = JKRHeap::sCurrentHeap;
    }
    JUTConsoleManager* manager = new (pHeap, 0) JUTConsoleManager();
    sManager = manager;
    return manager;
}

/* 802E8240-802E82B0 2E2B80 0070+00 3/3 0/0 0/0 .text
 * appendConsole__17JUTConsoleManagerFP10JUTConsole             */
#ifdef NONMATCHING
void JUTConsoleManager::appendConsole(JUTConsole* param_0) {
    mLinkList.Push_back(param_0);
    if (mActiveConsole == NULL) {
        mActiveConsole = param_0;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTConsoleManager::appendConsole(JUTConsole* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/appendConsole__17JUTConsoleManagerFP10JUTConsole.s"
}
#pragma pop
#endif

/* 802E82B0-802E8384 2E2BF0 00D4+00 2/2 0/0 0/0 .text
 * removeConsole__17JUTConsoleManagerFP10JUTConsole             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTConsoleManager::removeConsole(JUTConsole* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/removeConsole__17JUTConsoleManagerFP10JUTConsole.s"
}
#pragma pop

/* 802E8384-802E8450 2E2CC4 00CC+00 0/0 1/1 0/0 .text            draw__17JUTConsoleManagerCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTConsoleManager::draw() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTConsole/draw__17JUTConsoleManagerCFv.s"
}
#pragma pop

/* 802E8450-802E84C4 2E2D90 0074+00 0/0 5/5 0/0 .text            drawDirect__17JUTConsoleManagerCFb
 */
void JUTConsoleManager::drawDirect(bool waitRetrace) const {
    if (mDirectConsole != NULL) {
        if (waitRetrace) {
            s32 interrupt_status = OSEnableInterrupts();
            u32 retrace_count = VIGetRetraceCount();
            u32 new_count;
            do {
                new_count = VIGetRetraceCount();
            } while (retrace_count == new_count);
            OSRestoreInterrupts(interrupt_status);
        }
        mDirectConsole->doDraw(JUTConsole::CONSOLE_TYPE_2);
    }
}

/* 802E84C4-802E8520 2E2E04 005C+00 0/0 2/2 0/0 .text
 * setDirectConsole__17JUTConsoleManagerFP10JUTConsole          */
void JUTConsoleManager::setDirectConsole(JUTConsole* p_console) {
    if (mDirectConsole != NULL) {
        appendConsole(mDirectConsole);
    }

    if (p_console != NULL) {
        removeConsole(p_console);
    }
    mDirectConsole = p_console;
}

/* ############################################################################################## */
/* 80451574-80451578 000A74 0004+00 2/1 0/0 0/0 .sbss            sReportConsole */
static JUTConsole* sReportConsole;

/* 802E8520-802E8528 2E2E60 0008+00 1/1 1/1 0/0 .text            JUTSetReportConsole */
extern "C" void JUTSetReportConsole(JUTConsole* p_console) {
    sReportConsole = p_console;
}

/* 802E8528-802E8530 -00001 0008+00 0/0 0/0 0/0 .text            JUTGetReportConsole */
extern "C" JUTConsole* JUTGetReportConsole() {
    return sReportConsole;
}

/* ############################################################################################## */
/* 80451578-80451580 000A78 0004+04 2/1 0/0 0/0 .sbss            sWarningConsole */
static JUTConsole* sWarningConsole;

/* 802E8530-802E8538 2E2E70 0008+00 1/1 1/1 0/0 .text            JUTSetWarningConsole */
extern "C" void JUTSetWarningConsole(JUTConsole* p_console) {
    sWarningConsole = p_console;
}

/* 802E8538-802E8540 -00001 0008+00 0/0 0/0 0/0 .text            JUTGetWarningConsole */
extern "C" JUTConsole* JUTGetWarningConsole() {
    return sWarningConsole;
}

/* 802E8540-802E85C8 2E2E80 0088+00 2/2 0/0 0/0 .text            JUTReportConsole_f_va */
extern "C" void JUTReportConsole_f_va(const char* fmt, va_list args) {
    char buf[256];

    if (JUTGetReportConsole() == NULL) {
        vsnprintf(buf, sizeof(buf), fmt, args);
    } else if (JUTGetReportConsole()->getOutput() &
               (JUTConsole::OUTPUT_CONSOLE | JUTConsole::OUTPUT_OSREPORT)) {
        vsnprintf(buf, sizeof(buf), fmt, args);
        JUTGetReportConsole()->print(buf);
    }
}

/* 802E85C8-802E8648 2E2F08 0080+00 2/2 8/8 0/0 .text            JUTReportConsole_f */
extern "C" void JUTReportConsole_f(const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);
    JUTReportConsole_f_va(fmt, args);
    va_end(args);
}

/* ############################################################################################## */
/* 8039D9A8-8039D9A8 02A008 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039D9B7 =
    "\n:::dump of console[%x]----------------\n";
SECTION_DEAD static char const* const stringBase_8039D9E0 =
    ":::dump of console[%x] END------------\n";
SECTION_DEAD static char const* const stringBase_8039DA08 = "%s";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_8039DA0B = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
#pragma pop

/* 802E8648-802E867C 2E2F88 0034+00 0/0 6/6 0/0 .text            JUTReportConsole */
void JUTReportConsole(const char* message) {
    JUTReportConsole_f("%s", message);
}

/* 802E867C-802E86FC 2E2FBC 0080+00 0/0 9/9 0/0 .text            JUTWarningConsole_f */
void JUTWarningConsole_f(const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);
    JUTReportConsole_f_va(fmt, args);
    va_end(args);
}

/* 802E86FC-802E8730 2E303C 0034+00 0/0 2/2 0/0 .text            JUTWarningConsole */
void JUTWarningConsole(const char* message) {
    JUTReportConsole_f("%s", message);
}
