#include "d/dolzel.h" // IWYU pragma: keep

#include "gz/gz.h"
#include "gz/gz_menu_main.h"
#include "SSystem/SComponent/c_counter.h"
#include "gz/gz_utility_notification.h"
#include "d/d_com_inf_game.h"
#include "d/d_drawlist.h"
#include "d/d_select_cursor.h"
#include "m_Do/m_Do_controller_pad.h"
#include "m_Do/m_Do_graphic.h"
#include "JSystem/J2DGraph/J2DOrthoGraph.h"
#include "JSystem/JKernel/JKRExpHeap.h"
#include "JSystem/JUtility/JUTDbPrint.h"
#include "m_Do/m_Do_MemCard.h"
#include "dolphin/card.h"
#include "dolphin/gx/GXTexture.h"
#include "dolphin/gx/GXCull.h"
#include "dolphin/gx/GXGet.h"
#include "dolphin/gx/GXTransform.h"
#include "dolphin/gx/GXGeometry.h"
#include "dolphin/gx/GXVert.h"
#include "dolphin/gx/GXPixel.h"
#include "dolphin/gx/GXTev.h"
#include "dolphin/gx/GXLighting.h"
#include "m_Do/m_Do_mtx.h"
#include <cmath>

class gzCapture_c : public dDlst_base_c {
public:
    virtual void draw() {
        if (mFlag == 0) {
            return;
        } else if (mFlag == 1) {
            mFlag = 3;
            GXSetTexCopySrc(0, 0, FB_WIDTH, FB_HEIGHT);
            GXSetTexCopyDst(FB_WIDTH / 2, FB_HEIGHT / 2, (GXTexFmt)mDoGph_gInf_c::getFrameBufferTimg()->format, GX_ENABLE);
            GXCopyTex(mDoGph_gInf_c::getFrameBufferTex(), GX_FALSE);
            GXPixModeSync();
            dComIfGp_onPauseFlag();
        } else {
            GXTexObj tex;
            GXInitTexObj(&tex, mDoGph_gInf_c::getFrameBufferTex(), FB_WIDTH / 2, FB_HEIGHT / 2,
                        (GXTexFmt)mDoGph_gInf_c::getFrameBufferTimg()->format, GX_CLAMP, GX_CLAMP, GX_FALSE);
            GXInitTexObjLOD(&tex, GX_LINEAR, GX_LINEAR, 0.0f, 0.0f, 0.0f, GX_FALSE, GX_FALSE, GX_ANISO_1);
            GXLoadTexObj(&tex, GX_TEXMAP0);
            GXSetNumChans(0);
            GXSetNumTexGens(1);
            GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX2x4, GX_TG_TEX0, 60, GX_FALSE, 125);
            GXSetNumTevStages(1);
            GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR_NULL);
            GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_ZERO, GX_CC_ZERO, GX_CC_ZERO, GX_CC_TEXC);
            GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
            const GXColor color = {0, 0, 0, mAlpha};
            GXSetTevColor(GX_TEVREG0, color);
            GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_ZERO, GX_CA_ZERO, GX_CA_ZERO, GX_CA_A0);
            GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
            GXSetZCompLoc(GX_TRUE);
            GXSetZMode(GX_FALSE, GX_ALWAYS, GX_FALSE);
            GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_OR);
            GXSetAlphaCompare(GX_ALWAYS, 0, GX_AOP_OR, GX_ALWAYS, 0);
            GXSetFog(GX_FOG_NONE, 0.0f, 0.0f, 0.0f, 0.0f, g_clearColor);
            GXSetFogRangeAdj(GX_FALSE, 0, NULL);
            GXSetCullMode(GX_CULL_NONE);
            GXSetDither(GX_TRUE);
            GXLoadPosMtxImm(g_mDoMtx_identity, GX_PNMTX0);
            GXSetCurrentMtx(0);
            GXClearVtxDesc();
            GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
            GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
            GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_RGBA4, 0);
            GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_CLR_RGBA, GX_RGB8, 0);

            GXBegin(GX_QUADS, GX_VTXFMT0, 4);
            GXPosition3s16(mDoGph_gInf_c::getMinX(), mDoGph_gInf_c::getMinY(), 0);
            GXTexCoord2s8(0, 0);
            GXPosition3s16(mDoGph_gInf_c::getMaxX(), mDoGph_gInf_c::getMinY(), 0);
            GXTexCoord2s8(1, 0);
            GXPosition3s16(mDoGph_gInf_c::getMaxX(), mDoGph_gInf_c::getMaxY(), 0);
            GXTexCoord2s8(1, 1);
            GXPosition3s16(mDoGph_gInf_c::getMinX(), mDoGph_gInf_c::getMaxY(), 0);
            GXTexCoord2s8(0, 1);
            GXEnd();
        }
    }

    virtual ~gzCapture_c() {}

    static const u8 CAPTURE_DIM_ALPHA = 128;

    gzCapture_c() {
        mFlag = 0;
        mAlpha = CAPTURE_DIM_ALPHA;
    }

    void setCaptureFlag() { mFlag = 1; }
    void disable() { mFlag = 0; }
    bool isCapturing() { return mFlag != 0; }

private:
    u8 mFlag;
    u8 mAlpha;
};

gzInfo_c g_gzInfo;

// Automation state for Python scripts - address dumped on boot
gzAutoState_s g_gzAutoState = {
    0x475A4155,  // magic = "GZAU"
    false,       // menuVisible
    false,       // optionMode
    0, 0,        // cursorX, cursorY
    3, 0, 0, 0,  // warpTypeIdx (OVERWORLD default), stage, room, spawn
    false,       // warpExecuted
    {0},         // currentStage
    0            // faderStatus
};

int gzPrint(int x, int y, u32 color, char const* string, ...) {
    JUTDbPrint::getManager()->setVisible(true);
    char buffer[256];

    va_list list;
    va_start(list, string);
    vsnprintf(buffer, sizeof(buffer), string, list);
    va_end(list);

    JUTDbPrint::getManager()->flush();

    static JUtility::TColor ShadowDarkColor(0, 0, 0, 0x80);
    JUTDbPrint::getManager()->setCharColor(ShadowDarkColor);

    JUTReport(x + 2, y + 2, buffer);
    JUTDbPrint::getManager()->flush();

    JUTDbPrint::getManager()->setCharColor(color);
    JUTReport(x, y, buffer);

    JUTDbPrint::getManager()->flush();
    return 1;
}

void gzDVDLoadFile(const char* filePath, void* buffer, int length, int offset) {
    DVDFileInfo ATTRIBUTE_ALIGN(32) fileInfo;
    if (DVDOpen(filePath, &fileInfo)) {
        int bytesRead = DVDReadPrio(&fileInfo, buffer, length, offset, 2);
        if (bytesRead > 0) {
            DVDClose(&fileInfo);
        } else {
            OSReport("no bytes read!\n");
        }
    } else {
        OSReport("failed to open file %s\n", filePath);
    }
}

void gzDrawRectOutline(f32 x, f32 y, f32 w, f32 h, f32 thickness, GXColor color) {
    GXSetNumChans(1);
    GXSetNumTexGens(0);
    GXSetNumTevStages(1);
    GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
    GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_ZERO, GX_CC_ZERO, GX_CC_ZERO, GX_CC_RASC);
    GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
    GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_ZERO, GX_CA_ZERO, GX_CA_ZERO, GX_CA_RASA);
    GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);

    GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, 0, GX_DF_NONE, GX_AF_NONE);

    GXSetZMode(GX_FALSE, GX_ALWAYS, GX_FALSE);
    GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_OR);
    GXSetAlphaCompare(GX_ALWAYS, 0, GX_AOP_OR, GX_ALWAYS, 0);
    GXSetCullMode(GX_CULL_NONE);

    GXLoadPosMtxImm(g_mDoMtx_identity, GX_PNMTX0);
    GXSetCurrentMtx(0);

    GXClearVtxDesc();
    GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
    GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XY, GX_F32, 0);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_CLR_RGBA, GX_RGBA8, 0);

    f32 x1 = x;
    f32 y1 = y;
    f32 x2 = x + w;
    f32 y2 = y + h;

    GXBegin(GX_QUADS, GX_VTXFMT0, 16);

    GXPosition2f32(x1, y1);
    GXColor4u8(color.r, color.g, color.b, color.a);
    GXPosition2f32(x2, y1);
    GXColor4u8(color.r, color.g, color.b, color.a);
    GXPosition2f32(x2, y1 + thickness);
    GXColor4u8(color.r, color.g, color.b, color.a);
    GXPosition2f32(x1, y1 + thickness);
    GXColor4u8(color.r, color.g, color.b, color.a);

    GXPosition2f32(x1, y2 - thickness);
    GXColor4u8(color.r, color.g, color.b, color.a);
    GXPosition2f32(x2, y2 - thickness);
    GXColor4u8(color.r, color.g, color.b, color.a);
    GXPosition2f32(x2, y2);
    GXColor4u8(color.r, color.g, color.b, color.a);
    GXPosition2f32(x1, y2);
    GXColor4u8(color.r, color.g, color.b, color.a);

    GXPosition2f32(x1, y1 + thickness);
    GXColor4u8(color.r, color.g, color.b, color.a);
    GXPosition2f32(x1 + thickness, y1 + thickness);
    GXColor4u8(color.r, color.g, color.b, color.a);
    GXPosition2f32(x1 + thickness, y2 - thickness);
    GXColor4u8(color.r, color.g, color.b, color.a);
    GXPosition2f32(x1, y2 - thickness);
    GXColor4u8(color.r, color.g, color.b, color.a);

    GXPosition2f32(x2 - thickness, y1 + thickness);
    GXColor4u8(color.r, color.g, color.b, color.a);
    GXPosition2f32(x2, y1 + thickness);
    GXColor4u8(color.r, color.g, color.b, color.a);
    GXPosition2f32(x2, y2 - thickness);
    GXColor4u8(color.r, color.g, color.b, color.a);
    GXPosition2f32(x2 - thickness, y2 - thickness);
    GXColor4u8(color.r, color.g, color.b, color.a);

    GXEnd();
}

void gzDrawVerticalLine(f32 x, f32 y1, f32 y2, f32 thickness, GXColor color) {
    GXSetNumChans(1);
    GXSetNumTexGens(0);
    GXSetNumTevStages(1);
    GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
    GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_ZERO, GX_CC_ZERO, GX_CC_ZERO, GX_CC_RASC);
    GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
    GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_ZERO, GX_CA_ZERO, GX_CA_ZERO, GX_CA_RASA);
    GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);

    GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, 0, GX_DF_NONE, GX_AF_NONE);

    GXSetZMode(GX_FALSE, GX_ALWAYS, GX_FALSE);
    GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_OR);
    GXSetAlphaCompare(GX_ALWAYS, 0, GX_AOP_OR, GX_ALWAYS, 0);
    GXSetCullMode(GX_CULL_NONE);

    GXLoadPosMtxImm(g_mDoMtx_identity, GX_PNMTX0);
    GXSetCurrentMtx(0);

    GXClearVtxDesc();
    GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
    GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XY, GX_F32, 0);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_CLR_RGBA, GX_RGBA8, 0);

    f32 halfThick = thickness / 2.0f;

    GXBegin(GX_QUADS, GX_VTXFMT0, 4);
    GXPosition2f32(x - halfThick, y1);
    GXColor4u8(color.r, color.g, color.b, color.a);
    GXPosition2f32(x + halfThick, y1);
    GXColor4u8(color.r, color.g, color.b, color.a);
    GXPosition2f32(x + halfThick, y2);
    GXColor4u8(color.r, color.g, color.b, color.a);
    GXPosition2f32(x - halfThick, y2);
    GXColor4u8(color.r, color.g, color.b, color.a);
    GXEnd();
}

void gzDrawHorizontalLine(f32 x1, f32 x2, f32 y, f32 thickness, GXColor color) {
    GXSetNumChans(1);
    GXSetNumTexGens(0);
    GXSetNumTevStages(1);
    GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
    GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_ZERO, GX_CC_ZERO, GX_CC_ZERO, GX_CC_RASC);
    GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
    GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_ZERO, GX_CA_ZERO, GX_CA_ZERO, GX_CA_RASA);
    GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);

    GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, 0, GX_DF_NONE, GX_AF_NONE);

    GXSetZMode(GX_FALSE, GX_ALWAYS, GX_FALSE);
    GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_OR);
    GXSetAlphaCompare(GX_ALWAYS, 0, GX_AOP_OR, GX_ALWAYS, 0);
    GXSetCullMode(GX_CULL_NONE);

    GXLoadPosMtxImm(g_mDoMtx_identity, GX_PNMTX0);
    GXSetCurrentMtx(0);

    GXClearVtxDesc();
    GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
    GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XY, GX_F32, 0);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_CLR_RGBA, GX_RGBA8, 0);

    f32 halfThick = thickness / 2.0f;

    GXBegin(GX_QUADS, GX_VTXFMT0, 4);
    GXPosition2f32(x1, y - halfThick);
    GXColor4u8(color.r, color.g, color.b, color.a);
    GXPosition2f32(x2, y - halfThick);
    GXColor4u8(color.r, color.g, color.b, color.a);
    GXPosition2f32(x2, y + halfThick);
    GXColor4u8(color.r, color.g, color.b, color.a);
    GXPosition2f32(x1, y + halfThick);
    GXColor4u8(color.r, color.g, color.b, color.a);
    GXEnd();
}

void gzInfo_c::loadDefaultSettings() {
    mSettings.mTextColor = COLOR_GOLD_DROP;
    mSettings.mCommandCombos.mMoveLink = (PAD_TRIGGER_L | PAD_TRIGGER_R | PAD_BUTTON_Y);
    mSettings.mCommandCombos.mMoonJump = (PAD_TRIGGER_R | PAD_BUTTON_A);
    mSettings.mCommandCombos.mTeleportSave = (PAD_TRIGGER_R | PAD_BUTTON_UP);
    mSettings.mCommandCombos.mTeleportLoad = (PAD_TRIGGER_R | PAD_BUTTON_DOWN);
    mSettings.mCommandCombos.mFreeCamToggle = (PAD_TRIGGER_Z | PAD_BUTTON_B | PAD_BUTTON_A);
    mSettings.mDropShadows = true;
    mSettings.mMenuPausesGame = true;
    setCursorType(1);
    mpFont = mDoExt_getMesgFont();
    mCursor.x = 0;
    mCursor.y = 0;
    mSettings.mMenuSfx = true;

    mStickTriggers = 0;
    mRepeatDirection = 0;
    mRepeatCounter = 0;

    mDisplay = false;
    mpCapture = NULL;

    mBackgroundXPos = 5.0f;
    mBackgroundYPos = 5.0f;
    mBackgroundWidth = 595.0f;
    mBackgroundHeight = 415.0f;

    mBorderAnimTimer = 0.0f;
    mBorderHighlightAlpha = 200;

    mSeparatorVisibleX = mBackgroundXPos + 165.0f;
    mSeparatorHiddenX = mBackgroundXPos - 10.0f;
    mSeparatorXPos = mSeparatorVisibleX;

    mIconXPos = mBackgroundXPos + 8.0f;
    mIconYPos = mBackgroundYPos + 7.0f;
    mIconWidth = 30.0f;
    mIconHeight = 30.0f;

    mHeaderXPos = mBackgroundXPos + 40.0f;
    mHeaderYPos = mBackgroundYPos + 30.0f;
}


int gzInfo_c::_create() {
    OSReport("creating gzInfo_c\n");

    // Create dedicated GZ heap
    gzCreateHeap();

    // load default settings. config from mem card will overwrite if it exists
    loadDefaultSettings();

    ResTIMG* icon = (ResTIMG*)dComIfGp_getMain2DArchive()->getResource('TIMG', "midona64.bti");
    mpIcon = new (gzHeap(GZ_GROUP_GRAPHICS), 4) J2DPicture(icon);

    void* buf = JKRHeap::alloc(54432, 32, gzHeap(GZ_GROUP_GRAPHICS));
    gzDVDLoadFile("/gz/bg.bti", buf, 54432, 0);
    ResTIMG* bg = (ResTIMG*)buf;
    mpBackground = new (gzHeap(GZ_GROUP_GRAPHICS), 4) J2DPicture(bg);
    mpBackground->setWhite(JUtility::TColor(55, 52, 40, 255));

    JKRArchive* collectArc = dComIfGp_getCollectResArchive();
    ResTIMG* decoSrc = (ResTIMG*)collectArc->getResource('TIMG', "tt_gold_uzu_long2.bti");
    if (decoSrc != NULL) {
        u32 imgSize = GXGetTexBufferSize(decoSrc->width, decoSrc->height, decoSrc->format,
                                          decoSrc->mipmapEnabled, decoSrc->mipmapCount);
        u32 decoSize = decoSrc->imageOffset + imgSize;
        void* decoBuf = JKRHeap::alloc(decoSize, 32, gzHeap(GZ_GROUP_GRAPHICS));
        memcpy(decoBuf, decoSrc, decoSize);
        mpDecoration = new (gzHeap(GZ_GROUP_GRAPHICS), 4) J2DPicture((ResTIMG*)decoBuf);
    } else {
        mpDecoration = NULL;
    }

    ResTIMG* bannerSrc = (ResTIMG*)collectArc->getResource('TIMG', "tt_line2.bti");
    if (bannerSrc != NULL) {
        u32 bannerImgSize = GXGetTexBufferSize(bannerSrc->width, bannerSrc->height, bannerSrc->format,
                                                bannerSrc->mipmapEnabled, bannerSrc->mipmapCount);
        u32 bannerSize = bannerSrc->imageOffset + bannerImgSize;
        void* bannerBuf = JKRHeap::alloc(bannerSize, 32, gzHeap(GZ_GROUP_GRAPHICS));
        memcpy(bannerBuf, bannerSrc, bannerSize);
        mpBanner = new (gzHeap(GZ_GROUP_GRAPHICS), 4) J2DPicture((ResTIMG*)bannerBuf);
    } else {
        mpBanner = NULL;
    }

    JKRArchive* msgArc = dComIfGp_getMsgArchive(4);
    if (msgArc != NULL) {
        ResTIMG* bgSrc = (ResTIMG*)msgArc->getResource('TIMG', "i4_gra.bti");
        if (bgSrc != NULL) {
            u32 bgImgSize = GXGetTexBufferSize(bgSrc->width, bgSrc->height, bgSrc->format,
                                                bgSrc->mipmapEnabled, bgSrc->mipmapCount);
            u32 bgSize = bgSrc->imageOffset + bgImgSize;
            void* bgBuf = JKRHeap::alloc(bgSize, 32, gzHeap(GZ_GROUP_GRAPHICS));
            memcpy(bgBuf, bgSrc, bgSize);
            mpBannerBg = new (gzHeap(GZ_GROUP_GRAPHICS), 4) J2DPicture((ResTIMG*)bgBuf);
        } else {
            mpBannerBg = NULL;
        }
    } else {
        mpBannerBg = NULL;
    }

    JKRArchive* main2dArc = dComIfGp_getMain2DArchive();
    mpBtnABBase = NULL;
    mpBtnAText = NULL;
    mpBtnBText = NULL;
    mpBtnXBase = NULL;
    mpBtnXText = NULL;
    mpBtnYBase = NULL;
    mpBtnYText = NULL;
    mpBtnZBase = NULL;
    mpBtnZText = NULL;
    if (main2dArc != NULL) {
        const char* btnNames[] = {
            "tt_zelda_button_ab_maru.bti",
            "tt_zelda_button_a_text.bti",
            "tt_zelda_button_b_text.bti",
            "tt_zelda_button_x_base.bti",
            "tt_zelda_button_x_text.bti",
            "tt_zelda_button_y_base.bti",
            "tt_zelda_button_y_text.bti",
            "im_zelda_button_z_base.bti",
            "im_zelda_button_z_text.bti"
        };
        J2DPicture** btnPtrs[] = {
            &mpBtnABBase, &mpBtnAText, &mpBtnBText,
            &mpBtnXBase, &mpBtnXText, &mpBtnYBase, &mpBtnYText,
            &mpBtnZBase, &mpBtnZText
        };
        for (int i = 0; i < 9; i++) {
            ResTIMG* src = (ResTIMG*)main2dArc->getResource('TIMG', btnNames[i]);
            if (src != NULL) {
                u32 imgSize = GXGetTexBufferSize(src->width, src->height, src->format,
                                                  src->mipmapEnabled, src->mipmapCount);
                u32 totalSize = src->imageOffset + imgSize;
                void* buf = JKRHeap::alloc(totalSize, 32, gzHeap(GZ_GROUP_GRAPHICS));
                memcpy(buf, src, totalSize);
                *btnPtrs[i] = new (gzHeap(GZ_GROUP_GRAPHICS), 4) J2DPicture((ResTIMG*)buf);
            }
        }
    }

    mpHeader = gzTextBox_allocate();
    mpHeader->setString("tpgz v2.0.0");

    mpMainMenu = new (gzHeap(GZ_GROUP_MENU), 4) gzMainMenu_c();
    if (mpMainMenu == NULL) {
        return 0;
    }

    mpNotification = new (gzHeap(GZ_GROUP_UI), 4) gzNotification_c();

    mpTPCursor = new (gzHeap(GZ_GROUP_GRAPHICS), 4) dSelect_cursor_c(2, 1.0f, NULL);
    mpTPCursor->setParam(0.96f, 0.84f, 0.03f, 0.5f, 0.5f);
    mpTPCursor->setAlphaRate(1.0f);

    mpMenuDescription = gzTextBox_allocate();
    mMenuOption = false;
    mTopLine = 0;
    mVisibleLines = 15;

    mpButtonHintText = gzTextBox_allocate();

    mInputWaitTimer = 2;
    mGZInitialized = true;

    // Dump automation state address for Python scripts
    OSReport("tpgz auto: 0x%08X\n", (u32)&g_gzAutoState);

    loadSettingsMemcard();

    // If boot to menu is enabled, show the menu immediately
    if (mSettings.mBootToMenu) {
        mDisplay = true;
    }

    // initialize oxygen now instead of waiting to go to the file select screen
    dComIfGp_setOxygen(600);
    dComIfGp_setNowOxygen(600);
    dComIfGp_setMaxOxygen(600);

    // load the default menu
    gzChangeMenu(mpMainMenu->getMenu(0));

    return 1;
}

int gzInfo_c::_delete() {
    OSReport("deleting gzInfo_c\n");
    delete mpIcon;
    mpIcon = NULL;

    gzTextBox_free(mpHeader);
    mpHeader = NULL;

    delete mpBackground;
    mpBackground = NULL;

    delete mpDecoration;
    mpDecoration = NULL;

    delete mpBanner;
    mpBanner = NULL;

    delete mpBannerBg;
    mpBannerBg = NULL;

    delete mpBtnABBase;
    mpBtnABBase = NULL;
    delete mpBtnAText;
    mpBtnAText = NULL;
    delete mpBtnBText;
    mpBtnBText = NULL;
    delete mpBtnXBase;
    mpBtnXBase = NULL;
    delete mpBtnXText;
    mpBtnXText = NULL;
    delete mpBtnYBase;
    mpBtnYBase = NULL;
    delete mpBtnYText;
    mpBtnYText = NULL;
    delete mpBtnZBase;
    mpBtnZBase = NULL;
    delete mpBtnZText;
    mpBtnZText = NULL;

    mpCurrentMenu = NULL;

    delete mpMainMenu;
    mpMainMenu = NULL;

    delete mpNotification;
    mpNotification = NULL;

    delete mpTPCursor;
    mpTPCursor = NULL;

    gzTextBox_free(mpMenuDescription);
    mpMenuDescription = NULL;

    gzTextBox_free(mpButtonHintText);
    mpButtonHintText = NULL;

    return 1;
}

void gzInfo_c::updateStickTriggers() {
    static const f32 STICK_THRESHOLD = 0.5f;
    static const s16 REPEAT_DELAY = 12;  // Frames before repeat starts
    static const s16 REPEAT_RATE = 2;    // Frames between repeats

    // Get current direction from d-pad
    u32 currentDir = 0;
    u32 dpadHold = mDoCPd_c::m_gzPadInfo.mButtonFlags & (PAD_BUTTON_UP | PAD_BUTTON_DOWN | PAD_BUTTON_LEFT | PAD_BUTTON_RIGHT);
    currentDir |= dpadHold;

    // Only use analog stick for menu navigation if menu pauses game is enabled
    // (otherwise stick passes through to game)
    if (gzInfo_isMenuPausesGame()) {
        f32 stickX = gzPad::getStickX();
        f32 stickY = gzPad::getStickY();

        if (stickY > STICK_THRESHOLD) currentDir |= PAD_BUTTON_UP;
        if (stickY < -STICK_THRESHOLD) currentDir |= PAD_BUTTON_DOWN;
        if (stickX < -STICK_THRESHOLD) currentDir |= PAD_BUTTON_LEFT;
        if (stickX > STICK_THRESHOLD) currentDir |= PAD_BUTTON_RIGHT;
    }

    mStickTriggers = 0;

    if (currentDir == 0) {
        // No direction held - reset
        mRepeatDirection = 0;
        mRepeatCounter = 0;
    } else if (currentDir != mRepeatDirection) {
        // New direction - trigger immediately and start counting
        mStickTriggers = currentDir;
        mRepeatDirection = currentDir;
        mRepeatCounter = 0;
    } else {
        // Same direction held - handle repeat
        mRepeatCounter++;
        if (mRepeatCounter == REPEAT_DELAY) {
            mStickTriggers = currentDir;
        } else if (mRepeatCounter > REPEAT_DELAY && (mRepeatCounter - REPEAT_DELAY) % REPEAT_RATE == 0) {
            mStickTriggers = currentDir;
        }
    }
}

int gzInfo_c::execute() {
    if (!mGZInitialized) return 0;

    bool wasDisplayed = mDisplay;

    updateStickTriggers();

    if (gzPad::getHoldL() && gzPad::getHoldR() && (gzPad::getTrig() & PAD_BUTTON_DOWN)) {
        mDisplay = !mDisplay;
        gzClearControllerInput();

        if (mDisplay)
            mInputWaitTimer = 2;
    }

    // Handle menu OPEN transition
    if (!wasDisplayed && mDisplay) {
        if (isMenuPausesGame() && !dComIfGp_isPauseFlag() && mpCapture == NULL) {
            mpCapture = new (gzHeap(GZ_GROUP_UI), 4) gzCapture_c();
            mpCapture->setCaptureFlag();
        }
    }

    if (mDisplay) {
        mBorderAnimTimer += 0.07f;
        f32 sineVal = sinf(mBorderAnimTimer);
        mBorderHighlightAlpha = (u8)(168 + (s32)(87.0f * sineVal));

        if (mInputWaitTimer != 0) {
            mInputWaitTimer--;
            return 1;
        }

        if (mpMainMenu != NULL && mCursor.x == 0) mpMainMenu->execute();
        if (mpCurrentMenu != NULL && mCursor.x > 0) mpCurrentMenu->execute();

        // Handle setting toggle while menu is displayed
        if (!isMenuPausesGame() && mpCapture != NULL) {
            delete mpCapture;
            mpCapture = NULL;
            dComIfGp_offPauseFlag();
        } else if (isMenuPausesGame() && mpCapture == NULL && !dComIfGp_isPauseFlag()) {
            mpCapture = new (gzHeap(GZ_GROUP_UI), 4) gzCapture_c();
            mpCapture->setCaptureFlag();
        }
    } else {
        mCheatsMng.execute();
        mToolsMng.execute();
        mSaveLoaderMng.execute();
    }

    // Handle menu CLOSE transition
    if (wasDisplayed && !mDisplay) {
        if (mpCapture != NULL) {
            delete mpCapture;
            mpCapture = NULL;
        }
        dComIfGp_offPauseFlag();
    }

    // Update automation state for Python scripts
    g_gzAutoState.menuVisible = mDisplay;
    g_gzAutoState.optionMode = mMenuOption;
    g_gzAutoState.cursorX = mCursor.x;
    g_gzAutoState.cursorY = mCursor.y;
    strncpy(g_gzAutoState.currentStage, dComIfGp_getStartStageName(), 7);
    g_gzAutoState.currentStage[7] = '\0';
    g_gzAutoState.faderStatus = mDoGph_gInf_c::getFader()->getStatus();

    return 1;
}

// Scissor padding to prevent drawing right up to menu edge
static const u32 SCISSOR_PADDING = 8;

static void getThemeRGB(u32 theme, u8& r, u8& g, u8& b) {
    r = (theme >> 24) & 0xFF;
    g = (theme >> 16) & 0xFF;
    b = (theme >> 8) & 0xFF;
}

static void warmBlendRGB(u8& r, u8& g, u8& b, f32 blend) {
    static const f32 WARM_R = 165.0f;
    static const f32 WARM_G = 218.0f;
    static const f32 WARM_B = 115.0f;
    r = (u8)(r * (1.0f - blend) + WARM_R * blend);
    g = (u8)(g * (1.0f - blend) + WARM_G * blend);
    b = (u8)(b * (1.0f - blend) + WARM_B * blend);
}

GXColor gzGetThemedBorderColor(u32 theme, u8 alpha) {
    GXColor c;
    getThemeRGB(theme, c.r, c.g, c.b);
    warmBlendRGB(c.r, c.g, c.b, 0.52f);
    c.a = alpha;
    return c;
}


GXColor gzGetThemedHighlightColor(u32 theme, u8 alpha) {
    GXColor c;
    u8 r, g, b;
    getThemeRGB(theme, r, g, b);
    warmBlendRGB(r, g, b, 0.52f);

    // Brighten toward white
    c.r = (u8)((r + 255) / 2);
    c.g = (u8)((g + 255) / 2);
    c.b = (u8)((b + 255) / 2);
    c.a = alpha;
    return c;
}

static GXColor getThemedSeparatorColor(u32 theme, u8 alpha) {
    GXColor c;
    u8 r, g, b;
    getThemeRGB(theme, r, g, b);
    warmBlendRGB(r, g, b, 0.6f);
    c.r = (u8)(r * 0.85f);
    c.g = (u8)(g * 0.85f);
    c.b = (u8)(b * 0.85f);
    c.a = alpha;
    return c;
}

static JUtility::TColor getThemedDecorationColor(u32 theme) {
    u8 r, g, b;
    getThemeRGB(theme, r, g, b);
    warmBlendRGB(r, g, b, 0.6f);
    r = (u8)(r * 0.7f);
    g = (u8)(g * 0.7f);
    b = (u8)(b * 0.7f);
    return JUtility::TColor(r, g, b, 255);
}

static JUtility::TColor getThemedBannerLineColor(u32 theme) {
    u8 r, g, b;
    getThemeRGB(theme, r, g, b);
    warmBlendRGB(r, g, b, 0.52f);
    return JUtility::TColor(r, g, b, 255);
}

int gzInfo_c::draw() {
    if (!mGZInitialized) return 0;

    // Draw capture directly (dims the background game)
    if (mpCapture != NULL && mpCapture->isCapturing()) {
        mpCapture->draw();
    }

    if (mDisplay) {
        u8 baseAlpha = isMenuPausesGame() ? 255 : 128;
        u32 theme = mSettings.mTextColor;

        if (mpBackground != NULL) {
            mpBackground->setAlpha(baseAlpha);
            mpBackground->draw(mBackgroundXPos, mBackgroundYPos, mBackgroundWidth, mBackgroundHeight, false, false, false);
        }

        static const f32 OUTER_THICKNESS = 3.0f;
        GXColor outerShadow = {30, 28, 20, baseAlpha};
        gzDrawRectOutline(mBackgroundXPos, mBackgroundYPos,
                          mBackgroundWidth, mBackgroundHeight,
                          OUTER_THICKNESS, outerShadow);

        static const f32 GOLD_THICKNESS = 2.0f;
        static const f32 GOLD_INSET = OUTER_THICKNESS;
        GXColor goldBorder = gzGetThemedBorderColor(theme, baseAlpha);
        gzDrawRectOutline(mBackgroundXPos + GOLD_INSET, mBackgroundYPos + GOLD_INSET,
                          mBackgroundWidth - (GOLD_INSET * 2), mBackgroundHeight - (GOLD_INSET * 2),
                          GOLD_THICKNESS, goldBorder);

        static const f32 HIGHLIGHT_THICKNESS = 2.0f;
        static const f32 HIGHLIGHT_INSET = GOLD_INSET + GOLD_THICKNESS;
        u8 highlightAlpha = (u8)((mBorderHighlightAlpha * baseAlpha) / 255);
        GXColor highlightBorder = gzGetThemedHighlightColor(theme, highlightAlpha);
        gzDrawRectOutline(mBackgroundXPos + HIGHLIGHT_INSET, mBackgroundYPos + HIGHLIGHT_INSET,
                          mBackgroundWidth - (HIGHLIGHT_INSET * 2), mBackgroundHeight - (HIGHLIGHT_INSET * 2),
                          HIGHLIGHT_THICKNESS, highlightBorder);

        if (mpDecoration != NULL) {
            u8 decoAlpha = (u8)((baseAlpha * 180) / 255);
            mpDecoration->setAlpha(decoAlpha);
            mpDecoration->setWhite(getThemedDecorationColor(theme));

            f32 decoW = 100.0f;
            f32 decoH = 50.0f;
            f32 inset = 8.0f;

            f32 leftX = mBackgroundXPos + inset;
            f32 rightX = mBackgroundXPos + mBackgroundWidth - decoW - inset;
            f32 topY = mBackgroundYPos + inset;
            f32 bottomY = mBackgroundYPos + mBackgroundHeight - decoH - inset;

            mpDecoration->draw(leftX, topY, decoW, decoH, false, false, false);
            mpDecoration->draw(rightX, topY, decoW, decoH, true, false, false);
            mpDecoration->draw(leftX, bottomY, decoW, decoH, false, true, false);
            mpDecoration->draw(rightX, bottomY, decoW, decoH, true, true, false);
        }

        if (mpMainMenu != NULL) {
            if (mpMainMenu->isTransitioning()) {
                u32 currentFrame = cCt_getFrameCount();
                f32 sepStartX = mpMainMenu->isTransitionForward() ? mSeparatorVisibleX : mSeparatorHiddenX;
                f32 sepEndX = mpMainMenu->isTransitionForward() ? mSeparatorHiddenX : mSeparatorVisibleX;
                mSeparatorXPos = calcSlidePosition(currentFrame, mpMainMenu->getTransitionStart(),
                                                   sepStartX, sepEndX, mpMainMenu->getTransitionDuration());
            } else {
                mSeparatorXPos = (mCursor.x == 0) ? mSeparatorVisibleX : mSeparatorHiddenX;
            }
        }

        f32 separatorY = mBackgroundYPos + 40.0f;
        f32 separatorLeft = mBackgroundXPos + HIGHLIGHT_INSET + 2.0f;
        f32 separatorRight = mBackgroundXPos + mBackgroundWidth - HIGHLIGHT_INSET - 2.0f;
        GXColor separatorColor = getThemedSeparatorColor(theme, baseAlpha);
        if (mpBanner != NULL) {
            mpBanner->setAlpha(baseAlpha);
            mpBanner->setWhite(getThemedBannerLineColor(theme));
            mpBanner->draw(separatorLeft, separatorY - 1.0f, separatorRight - separatorLeft, 3.0f, false, false, false);
        }

        if (mSeparatorXPos > mBackgroundXPos + HIGHLIGHT_INSET) {
            f32 separatorBottom = mBackgroundYPos + mBackgroundHeight - 10.0f;
            gzDrawVerticalLine(mSeparatorXPos, separatorY, separatorBottom, 2.0f, separatorColor);
        }

        if (mpIcon != NULL) mpIcon->draw(mIconXPos, mIconYPos, mIconWidth, mIconHeight, false, false, false);
        if (mpHeader != NULL) mpHeader->draw(mHeaderXPos, mHeaderYPos, mSettings.mTextColor);

        bool inMainMenu = (mCursor.x == 0);

        f32 circleRadius = 9.0f;
        f32 iconY = mBackgroundYPos + 21.0f;
        f32 textY = mBackgroundYPos + 30.0f;

        f32 bannerX = mSeparatorVisibleX;
        f32 bannerY = mBackgroundYPos + 8.0f;
        f32 bannerW = mBackgroundXPos + mBackgroundWidth - bannerX - 8.0f;
        f32 bannerH = 30.0f;

        if (mpBannerBg != NULL) {
            u8 bgAlpha = (u8)((baseAlpha * 180) / 255);
            mpBannerBg->setAlpha(bgAlpha);
            mpBannerBg->setWhite(JUtility::TColor(60, 55, 45, 255));
            mpBannerBg->draw(bannerX, bannerY, bannerW, bannerH, false, false, false);
        }

        if (mpDecoration != NULL) {
            u8 swirlAlpha = (u8)((baseAlpha * 200) / 255);
            mpDecoration->setAlpha(swirlAlpha);
            mpDecoration->setWhite(getThemedDecorationColor(theme));
            f32 swirlW = 50.0f;
            f32 swirlH = 26.0f;
            mpDecoration->draw(bannerX + 2.0f, bannerY + 2.0f, swirlW, swirlH, false, false, false);
        }

        f32 hintStartX = mSeparatorVisibleX + 55.0f;
        f32 btnSize = 16.0f;
        f32 letterSizeAB = 10.0f;
        f32 letterSizeXY = 8.0f;
        f32 letterOffsetAB = (btnSize - letterSizeAB) / 2.0f;
        f32 letterOffsetXY = (btnSize - letterSizeXY) / 2.0f;

        // Gamecube Button Colors
        static const JUtility::TColor colorA(0, 200, 80, 255);
        static const JUtility::TColor colorB(200, 60, 60, 255);
        static const JUtility::TColor colorXY(180, 180, 180, 255);
        static const JUtility::TColor colorZ(100, 100, 200, 255);

        if (inMainMenu) {
            f32 iconX = hintStartX;
            f32 btnY = iconY - btnSize/2;
            if (mpBtnABBase != NULL) {
                mpBtnABBase->setAlpha(255);
                mpBtnABBase->setWhite(colorA);
                mpBtnABBase->draw(iconX, btnY, btnSize, btnSize, false, false, false);
            }
            if (mpBtnAText != NULL) {
                mpBtnAText->setAlpha(255);
                mpBtnAText->draw(iconX + letterOffsetAB, btnY + letterOffsetAB, letterSizeAB, letterSizeAB, false, false, false);
            }
            if (mpButtonHintText != NULL) {
                mpButtonHintText->setFontSize(18.0f, 18.0f);
                mpButtonHintText->setString("Enter Menu");
                mpButtonHintText->draw(iconX + btnSize + 4.0f, textY, COLOR_WHITE);
            }
        } else if (mpCurrentMenu != NULL) {
            gzButtonHints_s hints = mpCurrentMenu->getButtonHints();
            f32 currentX = hintStartX;

            for (int i = 0; i < hints.count && i < 5; i++) {
                J2DPicture* base = NULL;
                J2DPicture* text = NULL;
                JUtility::TColor baseColor(255, 255, 255, 255);
                f32 lSize = letterSizeAB;
                f32 lOffset = letterOffsetAB;
                switch (hints.hints[i].button) {
                case GZ_BTN_A:
                    base = mpBtnABBase;
                    text = mpBtnAText;
                    baseColor = colorA;
                    break;
                case GZ_BTN_B:
                    base = mpBtnABBase;
                    text = mpBtnBText;
                    baseColor = colorB;
                    break;
                case GZ_BTN_X:
                    base = mpBtnXBase;
                    text = mpBtnXText;
                    baseColor = colorXY;
                    lSize = letterSizeXY;
                    lOffset = letterOffsetXY;
                    break;
                case GZ_BTN_Y:
                    base = mpBtnYBase;
                    text = mpBtnYText;
                    baseColor = colorXY;
                    lSize = letterSizeXY;
                    lOffset = letterOffsetXY;
                    break;
                case GZ_BTN_Z:
                    base = mpBtnZBase;
                    text = mpBtnZText;
                    baseColor = colorZ;
                    lSize = letterSizeXY;
                    lOffset = letterOffsetXY;
                    break;
                }
                f32 btnY = iconY - btnSize/2;
                if (base != NULL) {
                    base->setAlpha(255);
                    base->setWhite(baseColor);
                    base->draw(currentX, btnY, btnSize, btnSize, false, false, false);
                }
                if (text != NULL) {
                    text->setAlpha(255);
                    text->draw(currentX + lOffset, btnY + lOffset, lSize, lSize, false, false, false);
                }

                if (mpButtonHintText != NULL) {
                    mpButtonHintText->setFontSize(18.0f, 18.0f);
                    mpButtonHintText->setString(hints.hints[i].text);
                    f32 textX = currentX + btnSize + 3.0f;
                    mpButtonHintText->draw(textX, textY, COLOR_WHITE);
                }
                currentX += 90.0f;
            }
        }

        u32 savedLeft, savedTop, savedWidth, savedHeight;
        GXGetScissor(&savedLeft, &savedTop, &savedWidth, &savedHeight);
        GXSetScissor((u32)mBackgroundXPos + SCISSOR_PADDING,
                     (u32)mBackgroundYPos + SCISSOR_PADDING,
                     (u32)mBackgroundWidth - (SCISSOR_PADDING * 2),
                     (u32)mBackgroundHeight - (SCISSOR_PADDING * 2));

        // Draw menus directly to avoid issues with deferred rendering
        if (mpMainMenu != NULL) mpMainMenu->draw();
        if (mpCurrentMenu != NULL) mpCurrentMenu->draw();

        GXSetScissor(savedLeft, savedTop, savedWidth, savedHeight);

        if (mpMenuDescription != NULL && mpMenuDescription->getStringPtr() != NULL && mpMenuDescription->getStringPtr()[0] != '\0') {
            f32 description_y = mBackgroundYPos + mBackgroundHeight + 15.0f;
            mpMenuDescription->draw(0.0f, description_y, gzInfo_getCursorColor(), HBIND_CENTER);
        }
    }

    // Draw any notifications
    if (mpNotification != NULL) mpNotification->draw();

    return 1;
}

void gzSetup2DContext() {
    // Set up 2D orthographic projection for drawing J2DScreen-based elements.
    // This is necessary because GZ draws after the game's normal 2D render pass,
    // when the original graphics context (a stack-local ortho) is no longer valid.
    // We must also set the current graf port because J2DScreen::draw uses it.
    static J2DOrthoGraph sGzOrtho(0.0f, 0.0f, 608.0f, 448.0f, -1.0f, 1.0f);
    sGzOrtho.setPort();
    dComIfGp_setCurrentGrafPort(&sGzOrtho);

    // Restore menu scissor after J2D setup (J2D resets scissor)
    if (g_gzInfo.mDisplay) {
        u32 left = (u32)g_gzInfo.mBackgroundXPos + SCISSOR_PADDING;
        u32 top = (u32)g_gzInfo.mBackgroundYPos + SCISSOR_PADDING;
        u32 width = (u32)g_gzInfo.mBackgroundWidth - (SCISSOR_PADDING * 2);
        u32 height = (u32)g_gzInfo.mBackgroundHeight - (SCISSOR_PADDING * 2);
        GXSetScissor(left, top, width, height);
    }
}

int gzInfo_c::storeSettingsMemcard() {
    CARDFileInfo file;
    int ret;

    ret = CARDProbeEx(0, NULL, NULL);
    if (ret != CARD_RESULT_READY) {
        return -1;
    }

    ret = CARDCreate(0, "tpgzcfg", SECTOR_SIZE, &file);
    if (ret == CARD_RESULT_READY || ret == CARD_RESULT_EXIST) {
        ret = CARDOpen(0, "tpgzcfg", &file);
        if (ret == CARD_RESULT_READY) {
            gzConfigHeader_s cfg;
            cfg.version = GZ_SAVE_VERSION;
            cfg.settingsOffset = sizeof(gzConfigHeader_s);

            memcpy(mDoMemCd_Ctrl_c::sTmpBuf, &cfg, sizeof(gzConfigHeader_s));
            memcpy(mDoMemCd_Ctrl_c::sTmpBuf + cfg.settingsOffset, &mSettings, sizeof(gzSettings_s));

            ret = CARDWrite(&file, mDoMemCd_Ctrl_c::sTmpBuf, SECTOR_SIZE, 0);
            if (ret == CARD_RESULT_READY) {
                OSReport("stored tpgz settings to memcard!\n");
                gzInfo_sendNotification("settings saved!");
            }

            CARDClose(&file);
        }
    }

    return ret;
}

int gzInfo_c::loadSettingsMemcard() {
    CARDFileInfo file;
    int ret;

    ret = CARDProbeEx(0, NULL, NULL);
    if (ret != CARD_RESULT_READY) {
        return -1;
    }

    ret = CARDOpen(0, "tpgzcfg", &file);
    if (ret == CARD_RESULT_READY) {
        ret = CARDRead(&file, mDoMemCd_Ctrl_c::sTmpBuf, SECTOR_SIZE, 0);
        if (ret == CARD_RESULT_READY) {
            OSReport("loaded tpgz settings from memcard!\n");
            gzInfo_sendNotification("settings loaded!");

            gzConfigHeader_s cfg;
            memcpy(&cfg, mDoMemCd_Ctrl_c::sTmpBuf, sizeof(gzConfigHeader_s));
            if (cfg.version != GZ_SAVE_VERSION) {
                OSReport("outdated tpgz save version!\n");
                return -1;
            }

            gzSettings_s settings;
            memcpy(&mSettings, mDoMemCd_Ctrl_c::sTmpBuf + cfg.settingsOffset, sizeof(gzSettings_s));
        }

        CARDClose(&file);
    } else {
        gzInfo_sendNotification("no stored settings found!");
    }

    return ret;
}

int gzInfo_c::deleteSettingsMemcard() {
    CARDFileInfo file;
    int ret;

    ret = CARDProbeEx(0, NULL, NULL);
    if (ret != CARD_RESULT_READY) {
        return -1;
    }

    ret = CARDDelete(0, "tpgzcfg");
    if (ret == CARD_RESULT_READY) {
        OSReport("deleted tpgz settings from memcard!\n");
        gzInfo_sendNotification("settings deleted!");
    } else {
        OSReport_Error("failed to delete tpgz settings from memcard!\n");
    }

    return ret;
}

void gzInfo_c::sendNotification(const char* msg) { 
    if (mpNotification != NULL) mpNotification->send(msg);
}

void gzInfo_c::sendNotification(const char* msg, int i_notificationType) {
    if (mpNotification != NULL) mpNotification->send(msg, (gzNotification_c::NotificationType)i_notificationType);
}

void gzDrawFilledCircle(f32 cx, f32 cy, f32 radius, GXColor fillColor, GXColor outlineColor, f32 outlineWidth) {
    GXSetNumChans(1);
    GXSetNumTexGens(0);
    GXSetNumTevStages(1);
    GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
    GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_ZERO, GX_CC_ZERO, GX_CC_ZERO, GX_CC_RASC);
    GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
    GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_ZERO, GX_CA_ZERO, GX_CA_ZERO, GX_CA_RASA);
    GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);

    GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, 0, GX_DF_NONE, GX_AF_NONE);

    GXSetZMode(GX_FALSE, GX_ALWAYS, GX_FALSE);
    GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_OR);
    GXSetAlphaCompare(GX_ALWAYS, 0, GX_AOP_OR, GX_ALWAYS, 0);
    GXSetCullMode(GX_CULL_NONE);

    GXLoadPosMtxImm(g_mDoMtx_identity, GX_PNMTX0);
    GXSetCurrentMtx(0);

    GXClearVtxDesc();
    GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
    GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XY, GX_F32, 0);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_CLR_RGBA, GX_RGBA8, 0);

    static const int NUM_SEGMENTS = 16;

    f32 outerRadius = radius;
    GXBegin(GX_TRIANGLEFAN, GX_VTXFMT0, NUM_SEGMENTS + 2);
    GXPosition2f32(cx, cy);
    GXColor4u8(outlineColor.r, outlineColor.g, outlineColor.b, outlineColor.a);
    for (int i = 0; i <= NUM_SEGMENTS; i++) {
        f32 angle = (f32)i * (2.0f * 3.14159f / (f32)NUM_SEGMENTS);
        f32 x = cx + outerRadius * cosf(angle);
        f32 y = cy + outerRadius * sinf(angle);
        GXPosition2f32(x, y);
        GXColor4u8(outlineColor.r, outlineColor.g, outlineColor.b, outlineColor.a);
    }
    GXEnd();

    f32 innerRadius = radius - outlineWidth;
    GXBegin(GX_TRIANGLEFAN, GX_VTXFMT0, NUM_SEGMENTS + 2);
    GXPosition2f32(cx, cy);
    GXColor4u8(fillColor.r, fillColor.g, fillColor.b, fillColor.a);
    for (int i = 0; i <= NUM_SEGMENTS; i++) {
        f32 angle = (f32)i * (2.0f * 3.14159f / (f32)NUM_SEGMENTS);
        f32 x = cx + innerRadius * cosf(angle);
        f32 y = cy + innerRadius * sinf(angle);
        GXPosition2f32(x, y);
        GXColor4u8(fillColor.r, fillColor.g, fillColor.b, fillColor.a);
    }
    GXEnd();
}

static JKRExpHeap* s_gzHeap = NULL;
static const u32 GZ_HEAP_SIZE = 0xC0000;  // 768KB

void gzCreateHeap() {
    if (s_gzHeap != NULL) return;

    JKRExpHeap* archiveHeap = (JKRExpHeap*)mDoExt_getArchiveHeap();
    s_gzHeap = JKRExpHeap::create(GZ_HEAP_SIZE, archiveHeap, true);
}

void gzSetGzHeap(JKRHeap* heap) {
    s_gzHeap = (JKRExpHeap*)heap;
}

JKRHeap* gzGetGzHeap() {
    return s_gzHeap;
}

JKRHeap* gzHeap(gzGroupId_e groupId) {
    s_gzHeap->mCurrentGroupId = (u8)groupId;
    return s_gzHeap;
}
