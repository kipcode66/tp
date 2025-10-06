#include "d/dolzel.h" // IWYU pragma: keep

#include "gz/gz.h"
#include "gz/gz_menu.h"

// gzMenu_c::gzCursor gzCreditsMenu_c::mCursor = {0, 0};

gzCreditsMenu_c::gzCreditsMenu_c() {
    OSReport("creating gzCreditsMenu_c\n");
}

gzCreditsMenu_c::~gzCreditsMenu_c() {
    _delete();
}

void gzCreditsMenu_c::_delete() {
    OSReport("deleting gzCreditsMenu_c\n");
}

void gzCreditsMenu_c::execute() {
    if (gzPad::getTrigB()) {
        gzChangeMenu<gzSettingsMenu_c>();
        return;
    }
}

void gzCreditsMenu_c::draw() {

}
