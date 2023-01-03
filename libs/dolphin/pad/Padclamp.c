//
// Generated By: dol2asm
// Translation Unit: Padclamp
//

#include "dolphin/pad/Pad.h"
#include "dolphin/pad/Padclamp.h"
#include "dol2asm.h"

//
// Forward References:
//

static void ClampStick(s8* px, s8* py, s8 max, s8 xy, s8 min);
static void ClampCircle(s8* px, s8* py, s8 radius, s8 min);

//
// Declarations:
//

/* 8034DDBC-8034DEEC 3486FC 0130+00 1/1 0/0 0/0 .text            ClampStick */
static void ClampStick(s8* px, s8* py, s8 max, s8 xy, s8 min) {
    int x = *px;
    int y = *py;
    int signX;
    int signY;
    int d;

    if (0 <= x) {
        signX = 1;
    } else {
        signX = -1;
        x = -x;
    }

    if (0 <= y) {
        signY = 1;
    } else {
        signY = -1;
        y = -y;
    }

    if (x <= min) {
        x = 0;
    } else {
        x -= min;
    }
    if (y <= min) {
        y = 0;
    } else {
        y -= min;
    }

    if (x == 0 && y == 0) {
        *px = *py = 0;
        return;
    }

    if (xy * y <= xy * x) {
        d = xy * x + (max - xy) * y;
        if (xy * max < d) {
            x = (s8)(xy * max * x / d);
            y = (s8)(xy * max * y / d);
        }
    } else {
        d = xy * y + (max - xy) * x;
        if (xy * max < d) {
            x = (s8)(xy * max * x / d);
            y = (s8)(xy * max * y / d);
        }
    }

    *px = (s8)(signX * x);
    *py = (s8)(signY * y);
}

/* ############################################################################################## */
/* 80456560-80456568 004B60 0004+04 1/1 0/0 0/0 .sdata2          @160 */
SECTION_SDATA2 static f32 lit_160[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

/* 80456568-80456570 004B68 0008+00 1/1 0/0 0/0 .sdata2          @161 */
SECTION_SDATA2 static f64 lit_161 = 0.5;

/* 80456570-80456578 004B70 0008+00 1/1 0/0 0/0 .sdata2          @162 */
SECTION_SDATA2 static f64 lit_162 = 3.0;

/* 80456578-80456580 004B78 0008+00 1/1 0/0 0/0 .sdata2          @164 */
SECTION_SDATA2 static f64 lit_164 = 4503601774854144.0 /* cast s32 to float */;

/* 8034DEEC-8034E094 34882C 01A8+00 1/1 0/0 0/0 .text            ClampCircle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void ClampCircle(s8* px, s8* py, s8 radius, s8 min) {
    nofralloc
#include "asm/dolphin/pad/Padclamp/ClampCircle.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A2170-803A2180 02E7D0 000A+06 2/2 0/0 0/0 .rodata          ClampRegion */
static const PADClampRegion ClampRegion = {
    // Triggers
    30,
    180,

    // Left stick
    15,
    72,
    40,

    // Right stick
    15,
    59,
    31,

    // Stick radii
    56,
    44,
};

inline void ClampTrigger(u8* trigger, u8 min, u8 max) {
    if (*trigger <= min) {
        *trigger = 0;
    } else {
        if (max < *trigger) {
            *trigger = max;
        }
        *trigger -= min;
    }
}

/* 8034E094-8034E1A8 3489D4 0114+00 0/0 1/1 0/0 .text            PADClamp */
void PADClamp(PADStatus* status) {
    int i;
    for (i = 0; i < 4; i++, status++) {
        if (status->error != PAD_ERR_NONE) {
            continue;
        }

        ClampStick(&status->stick_x, &status->stick_y, ClampRegion.maxStick, ClampRegion.xyStick,
                   ClampRegion.minStick);
        ClampStick(&status->substick_x, &status->substick_y, ClampRegion.maxSubstick,
                   ClampRegion.xySubstick, ClampRegion.minSubstick);
        ClampTrigger(&status->trigger_left, ClampRegion.minTrigger, ClampRegion.maxTrigger);
        ClampTrigger(&status->trigger_right, ClampRegion.minTrigger, ClampRegion.maxTrigger);
    }
}

/* 8034E1A8-8034E2B4 348AE8 010C+00 0/0 1/1 0/0 .text            PADClampCircle */
void PADClampCircle(PADStatus* status) {
    int i;
    for (i = 0; i < 4; ++i, status++) {
        if (status->error != PAD_ERR_NONE) {
            continue;
        }

        ClampCircle(&status->stick_x, &status->stick_y, ClampRegion.radStick, ClampRegion.minStick);
        ClampCircle(&status->substick_x, &status->substick_y, ClampRegion.radSubstick,
                    ClampRegion.minSubstick);
        ClampTrigger(&status->trigger_left, ClampRegion.minTrigger, ClampRegion.maxTrigger);
        ClampTrigger(&status->trigger_right, ClampRegion.minTrigger, ClampRegion.maxTrigger);
    }
}
