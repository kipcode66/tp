/* Do NOT include d/dolzel.h — conflicts with targimpl.h struct definitions */

#include "TRK_MINNOW_DOLPHIN/ppc/Generic/targimpl.h"
#include <dolphin/os/OSCache.h>
#include <dolphin/os/OSContext.h>
#include <dolphin/os/OSException.h>
#include <dolphin/os/OSIC.h>

#include "umbra/umbra_gdb.h"
#include "umbra/umbra_nintendont.h"
#include "umbra/umbra_platform.h"

extern "C" {
    void* VIGetCurrentFrameBuffer(void);
    void OSReport(const char* msg, ...);
    void AIStopDMA(void);
    void AIStartDMA(void);
    BOOL OSDisableInterrupts(void);
}

/* Must match kernel/gdb.h */

#define GDB_SHM_BASE      ((volatile u32*)0x93003600)
#define GDB_SHM_SIZE      512

#define GDB_SHM_MAGIC     0x47444253  /* "GDBS" */

#define GDB_STATE_IDLE    0
#define GDB_STATE_STOPPED 1
#define GDB_STATE_RESUME  2
#define GDB_STATE_STEP    3
#define GDB_STATE_DETACH  4

#define SHM_MAGIC       0
#define SHM_STATE       1
#define SHM_STOP_REASON 2
#define SHM_SIGNAL      3
#define SHM_GPR_BASE    4
#define SHM_PC          36
#define SHM_LR          37
#define SHM_CR          38
#define SHM_CTR         39
#define SHM_XER         40
#define SHM_MSR         41
#define SHM_FPR_BYTE_OFF   0x0A8
#define SHM_FPSCR_BYTE_OFF 0x1A8
#define SHM_HALT_REQ       108

#define MSR_SE (1 << 10)

#define SI_C0INBUFH   (*(volatile u32*)0xCC006404)
#define PAD_TRIGGER_Z 0x0010

/* 8x8 bitmap font, ASCII 0x20-0x7E */
static const u8 font8x8[95][8] = {
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, /*   */
    {0x18,0x3C,0x3C,0x18,0x18,0x00,0x18,0x00}, /* ! */
    {0x36,0x36,0x00,0x00,0x00,0x00,0x00,0x00}, /* " */
    {0x36,0x7F,0x36,0x36,0x36,0x7F,0x36,0x00}, /* # */
    {0x0C,0x3E,0x03,0x1E,0x30,0x1F,0x0C,0x00}, /* $ */
    {0x00,0x63,0x33,0x18,0x0C,0x66,0x63,0x00}, /* % */
    {0x1C,0x36,0x1C,0x6E,0x3B,0x33,0x6E,0x00}, /* & */
    {0x06,0x06,0x03,0x00,0x00,0x00,0x00,0x00}, /* ' */
    {0x18,0x0C,0x06,0x06,0x06,0x0C,0x18,0x00}, /* ( */
    {0x06,0x0C,0x18,0x18,0x18,0x0C,0x06,0x00}, /* ) */
    {0x00,0x66,0x3C,0xFF,0x3C,0x66,0x00,0x00}, /* * */
    {0x00,0x0C,0x0C,0x3F,0x0C,0x0C,0x00,0x00}, /* + */
    {0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x06}, /* , */
    {0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00}, /* - */
    {0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x00}, /* . */
    {0x60,0x30,0x18,0x0C,0x06,0x03,0x01,0x00}, /* / */
    {0x3E,0x63,0x73,0x7B,0x6F,0x67,0x3E,0x00}, /* 0 */
    {0x0C,0x0E,0x0C,0x0C,0x0C,0x0C,0x3F,0x00}, /* 1 */
    {0x1E,0x33,0x30,0x1C,0x06,0x33,0x3F,0x00}, /* 2 */
    {0x1E,0x33,0x30,0x1C,0x30,0x33,0x1E,0x00}, /* 3 */
    {0x38,0x3C,0x36,0x33,0x7F,0x30,0x78,0x00}, /* 4 */
    {0x3F,0x03,0x1F,0x30,0x30,0x33,0x1E,0x00}, /* 5 */
    {0x1C,0x06,0x03,0x1F,0x33,0x33,0x1E,0x00}, /* 6 */
    {0x3F,0x33,0x30,0x18,0x0C,0x0C,0x0C,0x00}, /* 7 */
    {0x1E,0x33,0x33,0x1E,0x33,0x33,0x1E,0x00}, /* 8 */
    {0x1E,0x33,0x33,0x3E,0x30,0x18,0x0E,0x00}, /* 9 */
    {0x00,0x0C,0x0C,0x00,0x00,0x0C,0x0C,0x00}, /* : */
    {0x00,0x0C,0x0C,0x00,0x00,0x0C,0x0C,0x06}, /* ; */
    {0x18,0x0C,0x06,0x03,0x06,0x0C,0x18,0x00}, /* < */
    {0x00,0x00,0x3F,0x00,0x00,0x3F,0x00,0x00}, /* = */
    {0x06,0x0C,0x18,0x30,0x18,0x0C,0x06,0x00}, /* > */
    {0x1E,0x33,0x30,0x18,0x0C,0x00,0x0C,0x00}, /* ? */
    {0x3E,0x63,0x7B,0x7B,0x7B,0x03,0x1E,0x00}, /* @ */
    {0x0C,0x1E,0x33,0x33,0x3F,0x33,0x33,0x00}, /* A */
    {0x3F,0x66,0x66,0x3E,0x66,0x66,0x3F,0x00}, /* B */
    {0x3C,0x66,0x03,0x03,0x03,0x66,0x3C,0x00}, /* C */
    {0x1F,0x36,0x66,0x66,0x66,0x36,0x1F,0x00}, /* D */
    {0x7F,0x46,0x16,0x1E,0x16,0x46,0x7F,0x00}, /* E */
    {0x7F,0x46,0x16,0x1E,0x16,0x06,0x0F,0x00}, /* F */
    {0x3C,0x66,0x03,0x03,0x73,0x66,0x7C,0x00}, /* G */
    {0x33,0x33,0x33,0x3F,0x33,0x33,0x33,0x00}, /* H */
    {0x1E,0x0C,0x0C,0x0C,0x0C,0x0C,0x1E,0x00}, /* I */
    {0x78,0x30,0x30,0x30,0x33,0x33,0x1E,0x00}, /* J */
    {0x67,0x66,0x36,0x1E,0x36,0x66,0x67,0x00}, /* K */
    {0x0F,0x06,0x06,0x06,0x46,0x66,0x7F,0x00}, /* L */
    {0x63,0x77,0x7F,0x7F,0x6B,0x63,0x63,0x00}, /* M */
    {0x63,0x67,0x6F,0x7B,0x73,0x63,0x63,0x00}, /* N */
    {0x1C,0x36,0x63,0x63,0x63,0x36,0x1C,0x00}, /* O */
    {0x3F,0x66,0x66,0x3E,0x06,0x06,0x0F,0x00}, /* P */
    {0x1E,0x33,0x33,0x33,0x3B,0x1E,0x38,0x00}, /* Q */
    {0x3F,0x66,0x66,0x3E,0x36,0x66,0x67,0x00}, /* R */
    {0x1E,0x33,0x07,0x0E,0x38,0x33,0x1E,0x00}, /* S */
    {0x3F,0x2D,0x0C,0x0C,0x0C,0x0C,0x1E,0x00}, /* T */
    {0x33,0x33,0x33,0x33,0x33,0x33,0x3F,0x00}, /* U */
    {0x33,0x33,0x33,0x33,0x33,0x1E,0x0C,0x00}, /* V */
    {0x63,0x63,0x63,0x6B,0x7F,0x77,0x63,0x00}, /* W */
    {0x63,0x63,0x36,0x1C,0x1C,0x36,0x63,0x00}, /* X */
    {0x33,0x33,0x33,0x1E,0x0C,0x0C,0x1E,0x00}, /* Y */
    {0x7F,0x63,0x31,0x18,0x4C,0x66,0x7F,0x00}, /* Z */
    {0x1E,0x06,0x06,0x06,0x06,0x06,0x1E,0x00}, /* [ */
    {0x03,0x06,0x0C,0x18,0x30,0x60,0x40,0x00}, /* \ */
    {0x1E,0x18,0x18,0x18,0x18,0x18,0x1E,0x00}, /* ] */
    {0x08,0x1C,0x36,0x63,0x00,0x00,0x00,0x00}, /* ^ */
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF}, /* _ */
    {0x0C,0x0C,0x18,0x00,0x00,0x00,0x00,0x00}, /* ` */
    {0x00,0x00,0x1E,0x30,0x3E,0x33,0x6E,0x00}, /* a */
    {0x07,0x06,0x06,0x3E,0x66,0x66,0x3B,0x00}, /* b */
    {0x00,0x00,0x1E,0x33,0x03,0x33,0x1E,0x00}, /* c */
    {0x38,0x30,0x30,0x3E,0x33,0x33,0x6E,0x00}, /* d */
    {0x00,0x00,0x1E,0x33,0x3F,0x03,0x1E,0x00}, /* e */
    {0x1C,0x36,0x06,0x0F,0x06,0x06,0x0F,0x00}, /* f */
    {0x00,0x00,0x6E,0x33,0x33,0x3E,0x30,0x1F}, /* g */
    {0x07,0x06,0x36,0x6E,0x66,0x66,0x67,0x00}, /* h */
    {0x0C,0x00,0x0E,0x0C,0x0C,0x0C,0x1E,0x00}, /* i */
    {0x30,0x00,0x30,0x30,0x30,0x33,0x33,0x1E}, /* j */
    {0x07,0x06,0x66,0x36,0x1E,0x36,0x67,0x00}, /* k */
    {0x0E,0x0C,0x0C,0x0C,0x0C,0x0C,0x1E,0x00}, /* l */
    {0x00,0x00,0x33,0x7F,0x7F,0x6B,0x63,0x00}, /* m */
    {0x00,0x00,0x1F,0x33,0x33,0x33,0x33,0x00}, /* n */
    {0x00,0x00,0x1E,0x33,0x33,0x33,0x1E,0x00}, /* o */
    {0x00,0x00,0x3B,0x66,0x66,0x3E,0x06,0x0F}, /* p */
    {0x00,0x00,0x6E,0x33,0x33,0x3E,0x30,0x78}, /* q */
    {0x00,0x00,0x3B,0x6E,0x66,0x06,0x0F,0x00}, /* r */
    {0x00,0x00,0x3E,0x03,0x1E,0x30,0x1F,0x00}, /* s */
    {0x08,0x0C,0x3E,0x0C,0x0C,0x2C,0x18,0x00}, /* t */
    {0x00,0x00,0x33,0x33,0x33,0x33,0x6E,0x00}, /* u */
    {0x00,0x00,0x33,0x33,0x33,0x1E,0x0C,0x00}, /* v */
    {0x00,0x00,0x63,0x6B,0x7F,0x7F,0x36,0x00}, /* w */
    {0x00,0x00,0x63,0x36,0x1C,0x36,0x63,0x00}, /* x */
    {0x00,0x00,0x33,0x33,0x33,0x3E,0x30,0x1F}, /* y */
    {0x00,0x00,0x3F,0x19,0x0C,0x26,0x3F,0x00}, /* z */
    {0x38,0x0C,0x0C,0x07,0x0C,0x0C,0x38,0x00}, /* { */
    {0x18,0x18,0x18,0x00,0x18,0x18,0x18,0x00}, /* | */
    {0x07,0x0C,0x0C,0x38,0x0C,0x0C,0x07,0x00}, /* } */
    {0x6E,0x3B,0x00,0x00,0x00,0x00,0x00,0x00}, /* ~ */
};

/* XFB YUYV: [Y0][Cb][Y1][Cr] per 2 pixels */
static void draw_glyph(u8* xfb, int xfb_stride, int px, int py, char c) {
    if (c < 0x20 || c > 0x7E)
        return;
    const u8* glyph = font8x8[c - 0x20];
    for (int row = 0; row < 8; row++) {
        u8 bits = glyph[row];
        u8* line = xfb + (py + row) * xfb_stride;
        for (int col = 0; col < 8; col++) {
            if (bits & (0x80 >> col)) {
                int x = px + col;
                line[x * 2] = 235;
                if (x & 1) {
                    line[x * 2 - 1] = 128;
                    line[x * 2 + 1] = 128;
                } else {
                    line[x * 2 + 1] = 128;
                    if (x * 2 + 3 < xfb_stride)
                        line[x * 2 + 3] = 128;
                }
            }
        }
    }
}

static int draw_string(u8* xfb, int xfb_stride, int px, int py, const char* str) {
    int x = px;
    while (*str) {
        if (*str == '\n') {
            py += 10;
            x = px;
            str++;
            continue;
        }
        draw_glyph(xfb, xfb_stride, x, py, *str);
        x += 8;
        str++;
    }
    return x;
}

static void draw_hex32(u8* xfb, int xfb_stride, int px, int py, u32 val) {
    const char* hex = "0123456789ABCDEF";
    char buf[9];
    for (int i = 7; i >= 0; i--) {
        buf[i] = hex[val & 0xF];
        val >>= 4;
    }
    buf[8] = '\0';
    draw_string(xfb, xfb_stride, px, py, buf);
}

static u32 exception_to_signal(u32 exception_id) {
    switch (exception_id & 0xFFFF) {
    case 0x0200: return 11; /* SIGSEGV */
    case 0x0300: return 11; /* SIGSEGV */
    case 0x0400: return 11; /* SIGSEGV */
    case 0x0500: return 2;  /* SIGINT */
    case 0x0600: return 11; /* SIGSEGV */
    case 0x0700: return 5;  /* SIGTRAP */
    case 0x0800: return 8;  /* SIGFPE */
    case 0x0900: return 14; /* SIGALRM */
    case 0x0D00: return 5;  /* SIGTRAP */
    default:     return 5;  /* SIGTRAP */
    }
}

static const char* exception_name(u32 exception_id) {
    switch (exception_id & 0xFFFF) {
    case 0x0200: return "Machine Check";
    case 0x0300: return "DSI";
    case 0x0400: return "ISI";
    case 0x0500: return "External Interrupt";
    case 0x0600: return "Alignment";
    case 0x0700: return "Program";
    case 0x0800: return "FP Unavailable";
    case 0x0900: return "Decrementer";
    case 0x0D00: return "Trace";
    default:     return "Unknown";
    }
}

/* Reads SI hardware directly — works in exception context */
static bool read_z_button(void) {
    u32 data0 = SI_C0INBUFH;
    u16 buttons = (u16)(data0 >> 16);
    return (buttons & PAD_TRIGGER_Z) != 0;
}

static int start_gdb_server(u16 port) {
    if (!umbraHasUmbraSupport()) {
        return -1;
    }

    u8 buf[32] ATTRIBUTE_ALIGN(32);
    u8 statusBuf[32] ATTRIBUTE_ALIGN(32);

    /* No memset — dolzel.h PCH not available */
    for (int i = 0; i < 32; i++) {
        buf[i] = 0;
        statusBuf[i] = 0;
    }

    *(u32*)(buf + 0) = UMBRA_CMD_WORD(UMBRA_CMD_GDB_START);
    buf[4] = (port >> 8) & 0xFF;
    buf[5] = port & 0xFF;

    if (!umbraTransfer(buf, sizeof(buf), 1) ||
        !umbraTransfer(statusBuf, sizeof(statusBuf), 0)) {
        return -1;
    }

    u32 status = *(u32*)(statusBuf + 0);
    return (status == 0) ? 0 : -1;
}

static void draw_crash_screen(u32 exc_id, u32 pc, u32 lr) {
    u8* xfb = (u8*)VIGetCurrentFrameBuffer();
    if (!xfb)
        return;

    int stride = 640 * 2;
    int y = 40;

    draw_string(xfb, stride, 48, y, "tpgz crashed! listening for gdbserver...");
    y += 14;

    int x = draw_string(xfb, stride, 48, y, "Exception: ");
    draw_string(xfb, stride, x, y, exception_name(exc_id));
    y += 10;

    x = draw_string(xfb, stride, 48, y, "  PC: 0x");
    draw_hex32(xfb, stride, x, y, pc);
    y += 10;

    x = draw_string(xfb, stride, 48, y, "  LR: 0x");
    draw_hex32(xfb, stride, x, y, lr);
    y += 14;

    draw_string(xfb, stride, 48, y, "Press Z to continue with crash");

    DCFlushRange(xfb, (u32)(stride * 480));
}

static __OSExceptionHandler old_handlers[__OS_EXCEPTION_MAX];

static void save_ctx_to_shm(OSContext* ctx, u32 exc_vector) {
    for (int i = 0; i < 32; i++)
        GDB_SHM_BASE[SHM_GPR_BASE + i] = ctx->gpr[i];

    GDB_SHM_BASE[SHM_PC]  = ctx->srr0;
    GDB_SHM_BASE[SHM_LR]  = ctx->lr;
    GDB_SHM_BASE[SHM_CR]  = ctx->cr;
    GDB_SHM_BASE[SHM_CTR] = ctx->ctr;
    GDB_SHM_BASE[SHM_XER] = ctx->xer;
    GDB_SHM_BASE[SHM_MSR] = ctx->srr1;

    volatile u64* fpr_shm = (volatile u64*)((u8*)GDB_SHM_BASE + SHM_FPR_BYTE_OFF);
    for (int i = 0; i < 32; i++)
        fpr_shm[i] = *(volatile u64*)&ctx->fpr[i];

    volatile u64* fpscr_shm = (volatile u64*)((u8*)GDB_SHM_BASE + SHM_FPSCR_BYTE_OFF);
    *fpscr_shm = (u64)ctx->fpscr;

    GDB_SHM_BASE[SHM_STOP_REASON] = exc_vector;
    GDB_SHM_BASE[SHM_SIGNAL] = exception_to_signal(exc_vector);
}

static void restore_shm_to_ctx(OSContext* ctx, u32 state) {
    for (int i = 0; i < 32; i++)
        ctx->gpr[i] = GDB_SHM_BASE[SHM_GPR_BASE + i];

    ctx->srr0 = GDB_SHM_BASE[SHM_PC];
    ctx->lr   = GDB_SHM_BASE[SHM_LR];
    ctx->cr   = GDB_SHM_BASE[SHM_CR];
    ctx->ctr  = GDB_SHM_BASE[SHM_CTR];
    ctx->xer  = GDB_SHM_BASE[SHM_XER];

    u32 msr = GDB_SHM_BASE[SHM_MSR];
    if (state == GDB_STATE_STEP)
        msr |= MSR_SE;
    else
        msr &= ~MSR_SE;
    ctx->srr1 = msr;

    volatile u64* fpr_shm = (volatile u64*)((u8*)GDB_SHM_BASE + SHM_FPR_BYTE_OFF);
    for (int i = 0; i < 32; i++)
        *(volatile u64*)&ctx->fpr[i] = fpr_shm[i];

    volatile u64* fpscr_shm = (volatile u64*)((u8*)GDB_SHM_BASE + SHM_FPSCR_BYTE_OFF);
    ctx->fpscr = (u32)*fpscr_shm;
}

static void umbra_gdb_crash_handler(__OSException exception, OSContext* ctx) {
    u32 exc_vector = ((u32)exception + 1) * 0x100;

    OSReport("tpgz: exception 0x%04X (%s) at PC=0x%08X LR=0x%08X\n",
             exc_vector, exception_name(exc_vector), ctx->srr0, ctx->lr);

    if (!umbraIsNintendont()) {
        /* Dolphin handles GDB at emulator level; just start server and chain */
        start_gdb_server(2159);
        OSReport("tpgz: gdbserver listening on port 2159\n");
        if (old_handlers[exception])
            old_handlers[exception](exception, ctx);
        return;
    }

    int server_err = start_gdb_server(2159);
    OSReport("tpgz: gdbserver start result=%d\n", server_err);

    draw_crash_screen(exc_vector, ctx->srr0, ctx->lr);

    if (server_err != 0) {
        OSReport("tpgz: gdb server failed to start\n");
        while (!read_z_button()) {}
        if (old_handlers[exception])
            old_handlers[exception](exception, ctx);
        return;
    }

    for (int wait = 0; wait < 500000000; wait++) {
        DCInvalidateRange((void*)GDB_SHM_BASE, GDB_SHM_SIZE);
        if (GDB_SHM_BASE[SHM_MAGIC] == GDB_SHM_MAGIC) {
            save_ctx_to_shm(ctx, exc_vector);
            GDB_SHM_BASE[SHM_STATE] = GDB_STATE_STOPPED;
            DCFlushRange((void*)GDB_SHM_BASE, GDB_SHM_SIZE);
            OSReport("tpgz: gdb shm ready, waiting for debugger\n");

            while (1) {
                DCInvalidateRange((void*)GDB_SHM_BASE, GDB_SHM_SIZE);
                u32 state = GDB_SHM_BASE[SHM_STATE];

                if (state == GDB_STATE_RESUME || state == GDB_STATE_STEP) {
                    restore_shm_to_ctx(ctx, state);
                    OSLoadContext(ctx);
                } else if (state == GDB_STATE_DETACH) {
                    GDB_SHM_BASE[SHM_MAGIC] = 0;
                    DCFlushRange((void*)GDB_SHM_BASE, GDB_SHM_SIZE);
                    OSLoadContext(ctx);
                }

                if (read_z_button()) {
                    GDB_SHM_BASE[SHM_MAGIC] = 0;
                    DCFlushRange((void*)GDB_SHM_BASE, GDB_SHM_SIZE);
                    break;
                }
            }
            break;
        }
    }

    OSReport("tpgz: gdb exiting crash handler\n");
    if (old_handlers[exception])
        old_handlers[exception](exception, ctx);
}

static void arm_crash_gdb(u16 port) {
    if (!umbraHasUmbraSupport())
        return;

    u8 buf[32] ATTRIBUTE_ALIGN(32);
    u8 statusBuf[32] ATTRIBUTE_ALIGN(32);

    for (int i = 0; i < 32; i++) {
        buf[i] = 0;
        statusBuf[i] = 0;
    }

    *(u32*)(buf + 0) = UMBRA_CMD_WORD(UMBRA_CMD_GDB_ARM_CRASH);
    buf[4] = (port >> 8) & 0xFF;
    buf[5] = port & 0xFF;

    umbraTransfer(buf, sizeof(buf), 1);
    umbraTransfer(statusBuf, sizeof(statusBuf), 0);
}

extern "C" void umbra_gdb_auto_start(void) {
    start_gdb_server(2159);
}

extern "C" void umbra_gdb_install_crash_handlers(void) {
    static const __OSException exceptions[] = {
        __OS_EXCEPTION_MACHINE_CHECK,
        __OS_EXCEPTION_DSI,
        __OS_EXCEPTION_ISI,
        __OS_EXCEPTION_ALIGNMENT,
        /* NOT FLOATING_POINT — OS uses it for lazy FPU context switching */
    };

    for (u32 i = 0; i < sizeof(exceptions) / sizeof(exceptions[0]); i++) {
        old_handlers[exceptions[i]] =
            __OSSetExceptionHandler(exceptions[i], umbra_gdb_crash_handler);
    }

    if (!umbraIsNintendont()) {
        arm_crash_gdb(2159);
    }
}

static void save_regs_to_shm(void) {
    for (int i = 0; i < 32; i++)
        GDB_SHM_BASE[SHM_GPR_BASE + i] = gTRKCPUState.Default.GPR[i];

    GDB_SHM_BASE[SHM_PC]  = gTRKCPUState.Default.PC;
    GDB_SHM_BASE[SHM_LR]  = gTRKCPUState.Default.LR;
    GDB_SHM_BASE[SHM_CR]  = gTRKCPUState.Default.CR;
    GDB_SHM_BASE[SHM_CTR] = gTRKCPUState.Default.CTR;
    GDB_SHM_BASE[SHM_XER] = gTRKCPUState.Default.XER;
    GDB_SHM_BASE[SHM_MSR] = gTRKCPUState.Extended1.MSR;

    volatile u64* fpr_shm = (volatile u64*)((u8*)GDB_SHM_BASE + SHM_FPR_BYTE_OFF);
    for (int i = 0; i < 32; i++)
        fpr_shm[i] = gTRKCPUState.Float.FPR[i];

    volatile u64* fpscr_shm = (volatile u64*)((u8*)GDB_SHM_BASE + SHM_FPSCR_BYTE_OFF);
    *fpscr_shm = gTRKCPUState.Float.FPSCR;

    u32 exc_id = gTRKCPUState.Extended1.exceptionID;
    GDB_SHM_BASE[SHM_STOP_REASON] = exc_id;
    GDB_SHM_BASE[SHM_SIGNAL] = exception_to_signal(exc_id);
}

static void restore_regs_from_shm(u32 state) {
    for (int i = 0; i < 32; i++)
        gTRKCPUState.Default.GPR[i] = GDB_SHM_BASE[SHM_GPR_BASE + i];

    gTRKCPUState.Default.PC  = GDB_SHM_BASE[SHM_PC];
    gTRKCPUState.Default.LR  = GDB_SHM_BASE[SHM_LR];
    gTRKCPUState.Default.CR  = GDB_SHM_BASE[SHM_CR];
    gTRKCPUState.Default.CTR = GDB_SHM_BASE[SHM_CTR];
    gTRKCPUState.Default.XER = GDB_SHM_BASE[SHM_XER];

    u32 msr = GDB_SHM_BASE[SHM_MSR];
    if (state == GDB_STATE_STEP) {
        msr |= MSR_SE;
    } else {
        msr &= ~MSR_SE;
    }
    gTRKCPUState.Extended1.MSR = msr;

    volatile u64* fpr_shm = (volatile u64*)((u8*)GDB_SHM_BASE + SHM_FPR_BYTE_OFF);
    for (int i = 0; i < 32; i++)
        gTRKCPUState.Float.FPR[i] = fpr_shm[i];
    volatile u64* fpscr_shm = (volatile u64*)((u8*)GDB_SHM_BASE + SHM_FPSCR_BYTE_OFF);
    gTRKCPUState.Float.FPSCR = *fpscr_shm;
}

static void gdb_spin_wait(void) {
    while (1) {
        DCInvalidateRange((void*)GDB_SHM_BASE, GDB_SHM_SIZE);
        u32 state = GDB_SHM_BASE[SHM_STATE];

        if (state == GDB_STATE_RESUME || state == GDB_STATE_STEP) {
            restore_regs_from_shm(state);
            ICFlashInvalidate(); /* ARM may have patched PPC code */
            TRKSwapAndGo();
        }
        else if (state == GDB_STATE_DETACH) {
            GDB_SHM_BASE[SHM_MAGIC] = 0;
            DCFlushRange((void*)GDB_SHM_BASE, GDB_SHM_SIZE);
            ICFlashInvalidate();
            TRKSwapAndGo();
        }
    }
}

#define SHM_PPC_HEARTBEAT 109
#define SHM_PPC_HALT_SEEN 110
#define SHM_EXIT_REQ      111

/* Uncached MEM2 mirror, shared with Nintendont kernel at 0x13003420 */
#define PPC_RESET_STATUS  ((volatile u32*)0xD3003420)

/* Must match loader/source/ppc/PADReadGC/source/PADReadGC.c DoGameExit() */
static void do_game_exit(void) {
    OSDisableInterrupts();
    AIStopDMA();
    /* Signal kernel to exit */
    *PPC_RESET_STATUS = 0x1DEA;
    while (*PPC_RESET_STATUS == 0x1DEA)
        ;
    /* Disable memory protection */
    *(volatile u32*)0xCC00403C = 0xF;
    *(volatile u32*)0xCC004040 = 0;
    *(volatile u32*)0xCC004020 = 0xFF;
    /* Copy return stub from MEM2 */
    volatile u32* dest = (volatile u32*)0x80004000;
    volatile u32* src  = (volatile u32*)0x93011810;
    u32 size = 0x1800;
    do { *dest++ = *src++; } while ((size -= 4) > 0);
    DCFlushRange((void*)0x80004000, 0x1800);
    ICInvalidateRange((void*)0x80004000, 0x1800);
    *(volatile u32*)0xCD800004 = 0x36;
    ((void(*)(void))0x80004000)();
}

extern "C" void umbra_gdb_poll(void) {
    static u32 heartbeat = 0;
    static bool auto_started = false;

    if (!auto_started) {
        auto_started = true;
        start_gdb_server(2159);
    }

    DCInvalidateRange((void*)GDB_SHM_BASE, GDB_SHM_SIZE);

    if (GDB_SHM_BASE[SHM_EXIT_REQ] == 1) {
        GDB_SHM_BASE[SHM_EXIT_REQ] = 0;
        DCFlushRange((void*)GDB_SHM_BASE, GDB_SHM_SIZE);
        do_game_exit(); /* does not return */
    }

    GDB_SHM_BASE[SHM_PPC_HEARTBEAT] = ++heartbeat;
    GDB_SHM_BASE[SHM_PPC_HALT_SEEN] = GDB_SHM_BASE[SHM_HALT_REQ];
    DCFlushRange((void*)GDB_SHM_BASE, GDB_SHM_SIZE);

    if (GDB_SHM_BASE[SHM_HALT_REQ] != 1)
        return;

    OSContext ctx;
    OSSaveContext(&ctx);

    /* OSSaveContext saves its own return address as LR, not our caller's.
     * Walk the back chain to get the real caller LR. */
    u32 sp = ctx.gpr[1];
    u32 back_chain = *(volatile u32*)sp;
    if (back_chain >= 0x80000000 && back_chain < 0x81800000) {
        ctx.lr = *(volatile u32*)(back_chain + 4);
    }

    save_ctx_to_shm(&ctx, 0x0500);
    GDB_SHM_BASE[SHM_SIGNAL] = 2; /* SIGINT */
    GDB_SHM_BASE[SHM_STATE] = GDB_STATE_STOPPED;
    GDB_SHM_BASE[SHM_HALT_REQ] = 0;
    DCFlushRange((void*)GDB_SHM_BASE, GDB_SHM_SIZE);

    /* Flush stack so ARM can read PPC memory via physical addresses */
    DCFlushRange((void*)(sp & ~0x1F), 32 * 1024);

    AIStopDMA();

    while (1) {
        DCInvalidateRange((void*)GDB_SHM_BASE, GDB_SHM_SIZE);
        u32 state = GDB_SHM_BASE[SHM_STATE];

        if (state == GDB_STATE_RESUME || state == GDB_STATE_STEP) {
            ICFlashInvalidate(); /* ARM may have patched PPC code */
            AIStartDMA();
            return;
        } else if (state == GDB_STATE_DETACH) {
            GDB_SHM_BASE[SHM_MAGIC] = 0;
            DCFlushRange((void*)GDB_SHM_BASE, GDB_SHM_SIZE);
            ICFlashInvalidate();
            AIStartDMA();
            return;
        }

        if (read_z_button()) {
            GDB_SHM_BASE[SHM_HALT_REQ] = 0;
            GDB_SHM_BASE[SHM_STATE] = GDB_STATE_RESUME;
            DCFlushRange((void*)GDB_SHM_BASE, GDB_SHM_SIZE);
            ICFlashInvalidate();
            AIStartDMA();
            return;
        }
    }
}

extern "C" void umbra_gdb_trk_hook(void) {
    DCInvalidateRange((void*)GDB_SHM_BASE, GDB_SHM_SIZE);

    if (GDB_SHM_BASE[SHM_MAGIC] == GDB_SHM_MAGIC) {
        save_regs_to_shm();
        GDB_SHM_BASE[SHM_STATE] = GDB_STATE_STOPPED;
        DCFlushRange((void*)GDB_SHM_BASE, GDB_SHM_SIZE);
        gdb_spin_wait(); /* does not return */
    }
}
