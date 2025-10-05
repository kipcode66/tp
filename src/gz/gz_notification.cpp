#include "gz/gz.h"
#include "SSystem/SComponent/c_counter.h"
#include "JSystem/JUtility/JUTFont.h"

gzNotification_c::gzNotification_c() {
    mNumNotifications = 0;
    for (int i = 0; i < NOTIFICATION_MAX; i++) {
        mpNotifications[i] = NULL;
        mStartFrames[i] = 0;
    }
}

gzNotification_c::~gzNotification_c() {
    for (int i = 0; i < NOTIFICATION_MAX; i++) {
        delete mpNotifications[i];
        mpNotifications[i] = NULL;
    }
}

void gzNotification_c::send(const char* message) {
    if (mNumNotifications == NOTIFICATION_MAX) {
        // FIFO
        delete mpNotifications[0];
        for (int i = 0; i < NOTIFICATION_MAX - 1; i++) {
            mpNotifications[i] = mpNotifications[i + 1];
            mStartFrames[i] = mStartFrames[i + 1];
        }
        mNumNotifications--;
    }

    mpNotifications[mNumNotifications] = new gzTextBox();
    mpNotifications[mNumNotifications]->setString(message);
    mStartFrames[mNumNotifications] = cCt_getFrameCount();
    mNumNotifications++;
}

void gzNotification_c::draw() {
    removeExpired();

    u32 current = cCt_getFrameCount();
    const u32 ttl_frames = 5 * 30;
    const u32 fade_frames = ttl_frames / 3;
    const u32 wait_frames = ttl_frames - fade_frames;

    f32 x_alignment = 0.0f;
    f32 y_alignment = 30.0f;

    for (int i = 0; i < mNumNotifications; i++) {
        u32 age = current - mStartFrames[i];
        u32 alpha = 255;
        if (age >= wait_frames) {
            u32 fade_age = age - wait_frames;
            if (fade_age < fade_frames) {
                u32 remaining = fade_frames - fade_age;
                alpha = (remaining * 255) / fade_frames;
            } else {
                alpha = 0;
            }
        }
        u32 color = 0xFFFFFF00 | alpha;

        mpNotifications[i]->draw(x_alignment, y_alignment + ((mNumNotifications - 1 - i) * 22.0f), color, HBIND_CENTER);
    }
}

// #define MIN(a, b) ((a) < (b) ? (a) : (b))
// #define MAX(a, b) ((a) > (b) ? (a) : (b))

// void gzNotification_c::send(const char* message) {
//     if (mNumNotifications == NOTIFICATION_MAX) {
//         // FIFO
//         delete mpNotifications[0];
//         for (int i = 0; i < NOTIFICATION_MAX - 1; i++) {
//             mpNotifications[i] = mpNotifications[i + 1];
//             mStartFrames[i] = mStartFrames[i + 1];
//         }
//         mNumNotifications--;
//     }

//     mpNotifications[mNumNotifications] = new gzTextBox();
//     mpNotifications[mNumNotifications]->setString(message);

//     gzTextBox* tb = mpNotifications[mNumNotifications];

//     f32 scaleX = tb->mFontSizeX / tb->mFont->getWidth();
//     f32 scaleY = tb->mFontSizeY / tb->mFont->getHeight();

//     f32 ascent = tb->mFont->getAscent() * scaleY;
//     f32 descent = tb->mFont->getDescent() * scaleY;
//     f32 height = ascent + descent;

//     f32 char_space = tb->getCharSpace();

//     f32 total_width = 0.0f;
//     const char* p = tb->getStringPtr();
//     int glyph_count = 0;
//     while (*p) {
//         int code = (u8)(*p++);
//         if (tb->mFont->isLeadByte(code)) {
//             if (*p) {
//                 code = (code << 8) | (u8)(*p++);
//             }
//         }
//         JUTFont::TWidth wd;
//         tb->mFont->getWidthEntry(code, &wd);
//         total_width += wd.field_0x1 * scaleX;
//         glyph_count++;
//     }
//     if (glyph_count > 1) {
//         total_width += char_space * (glyph_count - 1);
//     }

//     f32 start_pen = -total_width / 2.0f;
//     f32 min_x = 1e9f;
//     f32 max_x = -1e9f;

//     p = tb->getStringPtr();
//     f32 current_pos = 0.0f;
//     int j = 0;
//     f32 cell_width = tb->mFont->getCellWidth() * scaleX;

//     while (*p) {
//         int code = (u8)(*p++);
//         if (tb->mFont->isLeadByte(code)) {
//             if (*p) {
//                 code = (code << 8) | (u8)(*p++);
//             }
//         }
//         JUTFont::TWidth wd;
//         tb->mFont->getWidthEntry(code, &wd);
//         f32 glyph_left = start_pen + current_pos + wd.field_0x0 * scaleX;
//         f32 glyph_right = glyph_left + cell_width;
//         min_x = MIN(min_x, glyph_left);
//         max_x = MAX(max_x, glyph_right);
//         current_pos += wd.field_0x1 * scaleX;
//         if (j < glyph_count - 1) {
//             current_pos += char_space;
//         }
//         j++;
//     }

//     f32 ink_width = max_x - min_x;
//     tb->resize(ink_width, height);
//     tb->mBounds.set(min_x, -ascent, max_x, descent);
//     tb->mFlags = (HBIND_CENTER << 2) | VBIND_TOP;

//     mStartFrames[mNumNotifications] = cCt_getFrameCount();
//     mNumNotifications++;
// }

// void gzNotification_c::draw() {
//     removeExpired();

//     u32 current = cCt_getFrameCount();
//     const u32 ttl_frames = 5 * 30;
//     const u32 fade_frames = ttl_frames / 3;
//     const u32 wait_frames = ttl_frames - fade_frames;

//     f32 vp[GX_VIEWPORT_SZ];
//     GXGetViewportv(vp);
//     f32 x_alignment = vp[0] + vp[2] * 0.5f;
//     f32 y_alignment = vp[1] + 30.0f;

//     for (int i = 0; i < mNumNotifications; i++) {
//         u32 age = current - mStartFrames[i];
//         u32 alpha = 255;
//         if (age >= wait_frames) {
//             u32 fade_age = age - wait_frames;
//             if (fade_age < fade_frames) {
//                 u32 remaining = fade_frames - fade_age;
//                 alpha = (remaining * 255) / fade_frames;
//             } else {
//                 alpha = 0;
//             }
//         }
//         u32 color = 0xFFFFFF00 | alpha;

//         f32 y_pos = y_alignment + ((mNumNotifications - 1 - i) * 22.0f);
//         f32 text_x = x_alignment;

//         f32 padding_x = 5.0f;
//         f32 padding_y = 2.0f;
//         f32 left = text_x + mpNotifications[i]->mBounds.i.x - padding_x;
//         f32 right = text_x + mpNotifications[i]->mBounds.f.x + padding_x;
//         f32 top = y_pos + mpNotifications[i]->mBounds.i.y - padding_y;
//         f32 bottom = y_pos + mpNotifications[i]->mBounds.f.y + padding_y;

//         // Set up state for background quad
//         GXClearVtxDesc();
//         GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
//         GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
//         GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XY, GX_F32, 0);
//         GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_CLR_RGBA, GX_RGBA8, 0);

//         GXSetNumChans(1);
//         GXSetChanCtrl(GX_COLOR0A0, GX_DISABLE, GX_SRC_REG, GX_SRC_VTX, 0, GX_DF_NONE, GX_AF_NONE);

//         GXSetNumTexGens(0);
//         GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
//         GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
//         GXSetNumTevStages(1);

//         GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_CLEAR);
//         GXSetAlphaCompare(GX_ALWAYS, 0, GX_AOP_AND, GX_ALWAYS, 0);
//         GXSetZMode(GX_FALSE, GX_ALWAYS, GX_FALSE);
//         GXSetColorUpdate(GX_TRUE);
//         GXSetAlphaUpdate(GX_FALSE);
//         GXSetCullMode(GX_CULL_NONE);

//         // Draw background quad
//         GXBegin(GX_QUADS, GX_VTXFMT0, 4);
//             GXPosition2f32(left, top);
//             GXColor4u8(0, 0, 0, (u8)(128 * alpha / 255));
//             GXPosition2f32(right, top);
//             GXColor4u8(0, 0, 0, (u8)(128 * alpha / 255));
//             GXPosition2f32(right, bottom);
//             GXColor4u8(0, 0, 0, (u8)(128 * alpha / 255));
//             GXPosition2f32(left, bottom);
//             GXColor4u8(0, 0, 0, (u8)(128 * alpha / 255));
//         GXEnd();

//         mpNotifications[i]->draw(text_x, y_pos, color);
//     }
// }

void gzNotification_c::removeExpired() {
    u32 current = cCt_getFrameCount();
    u32 ttl_frames = 5 * 30;

    while (mNumNotifications > 0 && (current - mStartFrames[0]) > ttl_frames) {
        delete mpNotifications[0];
        for (int i = 0; i < mNumNotifications - 1; i++) {
            mpNotifications[i] = mpNotifications[i + 1];
            mStartFrames[i] = mStartFrames[i + 1];
        }
        mNumNotifications--;
    }
}
