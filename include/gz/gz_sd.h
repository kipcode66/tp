#ifndef GZ_SD_H
#define GZ_SD_H

#include "dolphin/types.h"

class gzSD_c {
public:
    int write(const void* data, u32 size);
    int read(void* data, u32 size);
    int _delete();

    int storeSettings();
    int loadSettings();
    int deleteSettings();
};

#endif
