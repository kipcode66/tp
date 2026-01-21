#ifndef GZ_WARP_PREVIEW_H
#define GZ_WARP_PREVIEW_H

#include "JSystem/J2DGraph/J2DPicture.h"

class gzWarpPreview_c {
public:
    gzWarpPreview_c();
    ~gzWarpPreview_c();

    void loadPreview(const char* stageId, u8 roomId, u8 spawnId);
    void unloadPreview();
    void draw(f32 x, f32 y, f32 w, f32 h);
    bool isLoaded() const { return mpPicture != NULL; }

private:
    J2DPicture* mpPicture;
    void* mpTextureData;
    char mCurrentStage[8];
    u8 mCurrentRoom;
    u8 mCurrentSpawn;
};

#endif // GZ_WARP_PREVIEW_H
