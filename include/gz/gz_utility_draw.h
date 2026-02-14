#ifndef GZ_UTILITY_DRAW_H
#define GZ_UTILITY_DRAW_H

#include "dolphin/gx/GXStruct.h"
#include "dolphin/types.h"

void gzDrawRectOutline(f32 x, f32 y, f32 w, f32 h, f32 thickness, GXColor color);
void gzDrawFilledRect(f32 x, f32 y, f32 w, f32 h, GXColor color);
void gzDrawFilledRoundedTopRect(f32 x, f32 y, f32 w, f32 h, f32 radius, GXColor color);
void gzDrawVerticalLine(f32 x, f32 y1, f32 y2, f32 thickness, GXColor color);
void gzDrawHorizontalLine(f32 x1, f32 x2, f32 y, f32 thickness, GXColor color);
void gzDrawFilledCircle(f32 cx, f32 cy, f32 radius, GXColor fillColor, GXColor outlineColor,
                        f32 outlineWidth);
GXColor gzGetThemedBorderColor(u32 theme, u8 alpha);
GXColor gzGetThemedHighlightColor(u32 theme, u8 alpha);
GXColor gzGetThemedSeparatorColor(u32 theme, u8 alpha);

#endif // GZ_UTILITY_DRAW_H
