#ifndef GZ_TAB_H
#define GZ_TAB_H

#include "gz/gz.h"

struct gzOption_s {
    const char* name;
    const char* desc;
    bool (*is)();
    void (*on)();
    void (*off)();
};
    
class gzTab_c {
public:
    void create();
    void _delete();
    int execute();
    void updateDynamicLines();

    gzTextBox* mpLines[7];
    gzTextBox* mpLineOptions[7];
    int mMax;
    gzOption_s* mOptions;
    bool mOptionToggle;
};

#endif //GZ_TAB_H
