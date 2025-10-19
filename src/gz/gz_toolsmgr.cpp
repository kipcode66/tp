#include "gz/gz.h"
#include "gz/gz_menu.h"

void gzToolsMng_c::executeMoveLink() {
    
}

void gzToolsMng_c::execute() {
     if (gzInfo_isMoveLink())
        executeMoveLink();
}
