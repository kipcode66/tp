#include "d/dolzel.h" // IWYU pragma: keep

#include "gz/gz.h"
#include "gz/gz_menu.h"

gzMenu_c::gzCursor gzFrameworkMenu_c::mCursor = {0, 0};

char* gzFrameworkMenu_c::getLayerType(layer_class* layer) {
    if (layer->process_node == NULL) {
        return "root";
    }

    switch (layer->process_node->base.name) {
    case PROC_OPENING_SCENE:
        return "opening scene";
    case PROC_PLAY_SCENE:
        return "play scene";
    case PROC_ROOM_SCENE:
        return "room scene";
    case PROC_NAME_SCENE:
        return "name scene";
    case PROC_LOGO_SCENE:
        return "logo scene";
    case PROC_MENU_SCENE:
        return "menu scene";
    default:
        // shouldn't ever be reached, but just in case
        return "unk?";
    }
}

// TODO(Pheenoh): Replace these with lookup table that loads the name
// off disk by using the proc name as the index into the table
char* gzFrameworkMenu_c::getProcessName(base_process_class* process) {
    switch (process->name) {
    case PROC_OPENING_SCENE:
        return "opening scene";
    case PROC_PLAY_SCENE:
        return "play scene";
    case PROC_ROOM_SCENE:
        return "room scene";
    case PROC_NAME_SCENE:
        return "name scene";
    case PROC_LOGO_SCENE:
        return "logo scene";
    case PROC_MENU_SCENE:
        return "menu scene";
    default:
        return "unk";
    }
}

void gzFrameworkMenu_c::setMetadata() {
    int active_node_lists = 0;

    layer_class* curr_layer = getCurrentLayer();
    if (curr_layer != NULL) {
        char* layer_type = getLayerType(curr_layer);
        active_node_lists = getActiveNodeLists(curr_layer);
        mpLinesMetadata[FRAMEWORK_LINE_LAYER]->setStringf("layer type: %s -- active node lists: %d", layer_type, active_node_lists);
    } else {
        mpLinesMetadata[FRAMEWORK_LINE_LAYER]->setString("layer type: n/a -- active node lists: n/a");
    }

    node_list_class* curr_node_list = getCurrentNodeList(curr_layer);
    if (curr_node_list != NULL) {
        mpLinesMetadata[FRAMEWORK_LINE_NODE_LIST]->setStringf("active processes: %d", curr_node_list->mSize);
    } else {
        mpLinesMetadata[FRAMEWORK_LINE_NODE_LIST]->setString("active processes: n/a");
    }

    base_process_class* curr_proc = getCurrentProcess(curr_node_list);
    if (curr_proc != NULL){
        mpLinesMetadata[FRAMEWORK_LINE_PROCESS]->setStringf("process: %s -- paused: %s -- params: 0x%08X", getProcessName(curr_proc), curr_proc->pause_flag ? "yes" : "no", curr_proc->parameters);
    } else {
        mpLinesMetadata[FRAMEWORK_LINE_PROCESS]->setString("process: n/a -- paused: n/a -- params: n/a");
    }
}

u8 gzFrameworkMenu_c::getHaihaiFlags(int i) {
    u8 haihai_flags = ARROW_LEFT | ARROW_RIGHT;
    switch (i) {
    case FRAMEWORK_LINE_LAYER: {
        int num_layers = mNumActiveLayers;
        if (num_layers <= 1) {
            haihai_flags = 0;
        } else if (mCurrentLayerIndex == 0) {
            haihai_flags &= ~ARROW_LEFT;
        } else if (mCurrentLayerIndex == num_layers - 1) {
            haihai_flags &= ~ARROW_RIGHT;
        }
        break;
    }
    case FRAMEWORK_LINE_NODE_LIST: {
        layer_class* layer = getCurrentLayer();
        if (!layer || layer->node_tree.mNumLists <= 0 || !layer->node_tree.mpLists) {
            haihai_flags = 0;
            break;
        }
        int num_lists = layer->node_tree.mNumLists;
        int num_valid = 0;
        int min_valid = -1;
        int max_valid = -1;
        for (int j = 0; j < num_lists; ++j) {
            if (layer->node_tree.mpLists[j].mSize > 0) {
                ++num_valid;
                if (min_valid == -1) min_valid = j;
                max_valid = j;
            }
        }
        if (num_valid <= 1) {
            haihai_flags = 0;
        } else if (mCurrentNodeListIndex == min_valid) {
            haihai_flags &= ~ARROW_LEFT;
        } else if (mCurrentNodeListIndex == max_valid) {
            haihai_flags &= ~ARROW_RIGHT;
        }
        break;
    }
    case FRAMEWORK_LINE_PROCESS: {
        node_list_class* list = getCurrentNodeList(getCurrentLayer());
        if (!list || list->mSize <= 0) {
            haihai_flags = 0;
            break;
        }
        int num_nodes = list->mSize;
        int num_valid = 0;
        int min_valid = -1;
        int max_valid = -1;
        node_class* node = list->mpHead;
        for (int j = 0; j < num_nodes; ++j) {
            if (node != NULL) {
                create_tag_class* tag = (create_tag_class*)node;
                base_process_class* process = (base_process_class*)tag->mpTagData;
                if (process != NULL) {
                    ++num_valid;
                    if (min_valid == -1) min_valid = j;
                    max_valid = j;
                }
            }
            node = node ? node->mpNextNode : NULL;
        }
        if (num_valid <= 1) {
            haihai_flags = 0;
        } else if (mCurrentProcessIndex == min_valid) {
            haihai_flags &= ~ARROW_LEFT;
        } else if (mCurrentProcessIndex == max_valid) {
            haihai_flags &= ~ARROW_RIGHT;
        }
        break;
    }
    }
    return haihai_flags;
}

// Helper to cycle index to next valid one
void gzFrameworkMenu_c::cycleValidIndex(int& idx, int max, int dir, IndexValidityFunc isValid, void* context) {
    if (max <= 0) {
        idx = -1;
        return;
    }
    int original_idx = idx;
    if (idx < 0) {
        idx = (dir > 0) ? -1 : max;  // Adjust start for negative index
    }
    int steps = 0;
    do {
        idx = (idx + dir + max) % max;  // Wrap around
        if (isValid(idx, context)) {
            return;
        }
        steps++;
    } while (steps < max && idx != original_idx);  // Prevent infinite loop
    idx = -1;  // No valid found
}

bool gzFrameworkMenu_c::isNodeListValid(int idx, void* ctx) {
    layer_class* layer = static_cast<layer_class*>(ctx);
    if (layer && layer->node_tree.mpLists) {
        return layer->node_tree.mpLists[idx].mSize > 0;
    }
    return false;
}

bool gzFrameworkMenu_c::isProcessValid(int idx, void* ctx) {
    node_list_class* list = static_cast<node_list_class*>(ctx);
    if (list && list->mSize > idx) {
        node_class* node = list->mpHead;
        for (int j = 0; j < idx; ++j) {
            if (node == NULL) return false;
            node = node->mpNextNode;
        }
        if (node) {
            create_tag_class* tag = (create_tag_class*)node;
            base_process_class* process = (base_process_class*)tag->mpTagData;
            return process != NULL;
        }
    }
    return false;
}

// Helper to find first active node list in a layer
int gzFrameworkMenu_c::getFirstActiveNodeListIndex(layer_class* layer) {
    if (layer == NULL || layer->node_tree.mNumLists <= 0 || layer->node_tree.mpLists == NULL) {
        return -1;
    }
    for (int i = 0; i < layer->node_tree.mNumLists; ++i) {
        if (layer->node_tree.mpLists[i].mSize > 0) {
            return i;
        }
    }
    return -1;
}

int gzFrameworkMenu_c::getActiveNodeLists(layer_class* layer) {
    int ret = 0;

    for (int i = 0; i < layer->node_tree.mNumLists; i++) {
        if (layer->node_tree.mpLists[i].mSize > 0) ret++;
    }

    return ret;
}

// Reset node list index to first active in current layer
void gzFrameworkMenu_c::resetNodeListIndexForCurrentLayer() {
    layer_class* current_layer = getCurrentLayer();
    mCurrentNodeListIndex = getFirstActiveNodeListIndex(current_layer);
}

// Helper to find first valid process index in a node list
int gzFrameworkMenu_c::getFirstActiveProcessIndex(node_list_class* list) {
    if (list == NULL || list->mSize <= 0) {
        return -1;
    }
    node_class* node = list->mpHead;
    for (int i = 0; i < list->mSize; ++i) {
        if (node != NULL) {
            create_tag_class* tag = (create_tag_class*)node;
            base_process_class* process = (base_process_class*)tag->mpTagData;
            if (process != NULL) {
                return i;
            }
        }
        node = node ? node->mpNextNode : NULL;
    }
    return -1;
}

// Reset process index to first valid in current node list
void gzFrameworkMenu_c::resetProcessIndexForCurrentNodeList() {
    node_list_class* current_list = getCurrentNodeList(getCurrentLayer());
    mCurrentProcessIndex = getFirstActiveProcessIndex(current_list);
}

// Get current layer
layer_class* gzFrameworkMenu_c::getCurrentLayer() {
    if (mNumActiveLayers > 0) {
        return mpActiveLayers[mCurrentLayerIndex];
    }
    return NULL;
}

// Get current node list from layer
node_list_class* gzFrameworkMenu_c::getCurrentNodeList(layer_class* i_layer) {
    if (i_layer == NULL || i_layer->node_tree.mNumLists == 0 || i_layer->node_tree.mpLists == NULL) {
        return NULL;
    }
    int clamped_idx = mCurrentNodeListIndex;
    if (clamped_idx < 0) {
        return NULL;
    }
    if (clamped_idx >= i_layer->node_tree.mNumLists) {
        clamped_idx = 0;
    }
    return &i_layer->node_tree.mpLists[clamped_idx];
}

// Get current process from node list
base_process_class* gzFrameworkMenu_c::getCurrentProcess(node_list_class* i_node_list) {
    if (i_node_list == NULL || i_node_list->mSize <= 0 || mCurrentProcessIndex < 0 || mCurrentProcessIndex >= i_node_list->mSize) {
        return NULL;
    }
    node_class* node = i_node_list->mpHead;
    for (int i = 0; i < mCurrentProcessIndex; ++i) {
        if (node == NULL) return NULL;
        node = node->mpNextNode;
    }
    if (node == NULL) return NULL;
    create_tag_class* tag = (create_tag_class*)node;
    return (base_process_class*)tag->mpTagData;
}

// Update dynamic menu lines
void gzFrameworkMenu_c::updateDynamicLines() {
    mpLineOptions[FRAMEWORK_LINE_LAYER]->setString("n/a");
    mpLineOptions[FRAMEWORK_LINE_NODE_LIST]->setString("n/a");
    mpLineOptions[FRAMEWORK_LINE_PROCESS]->setString("n/a");
    
    layer_class* current_layer = getCurrentLayer();
    if (current_layer) {
        mpLineOptions[FRAMEWORK_LINE_LAYER]->setStringf("%u", current_layer->layer_id);
        node_list_class* current_list = getCurrentNodeList(current_layer);
        if (current_list) {
            mpLineOptions[FRAMEWORK_LINE_NODE_LIST]->setStringf("%d", mCurrentNodeListIndex);
            base_process_class* process = getCurrentProcess(current_list);
            if (process) {
                mpLineOptions[FRAMEWORK_LINE_PROCESS]->setStringf("%d", process->name);
            }
        }
    }

    J2DTextBox::TFontSize font_size;
    for (int i = 0; i < LINE_NUM; i++) {
        mpLineOptions[i]->getFontSize(font_size);
        font_size.mSizeX *= 0.5f;
        mpLineOptions[i]->mBounds.f.x = mpLineOptions[i]->mStringLength * font_size.mSizeX;
    }

    setMetadata();
}

gzFrameworkMenu_c::gzFrameworkMenu_c() {
    OSReport("creating gzFrameworkMenu_c\n");

    mCurrentLayerIndex = 0;
    mNumActiveLayers = 0;
    mCurrentNodeListIndex = 0;
    mCurrentProcessIndex = 0;
    memset(mpActiveLayers, 0, sizeof(mpActiveLayers));

    for (int i = 0; i < LINE_NUM; i++) {
        mpLines[i] = new gzTextBox();
        mpLinesMetadata[i] = new gzTextBox();
        mpLinesMetadata[i]->setFontSize(12.0f,12.0f);
        mpLineOptions[i] = new gzTextBox();
        mpLineOptions[i]->mBounds.f.y = 10.0f;
    }

    mpDescription = new gzTextBox();

    mpLines[FRAMEWORK_LINE_LAYER]->setStringDesc("layer", "layer containing node lists");
    mpLines[FRAMEWORK_LINE_NODE_LIST]->setStringDesc("node list", "node lists in this layer");
    mpLines[FRAMEWORK_LINE_PROCESS]->setStringDesc("process", "processes in this node list");

    mpDrawCursor = new dSelect_cursor_c(2, 1.0f, NULL);
    mpDrawCursor->setParam(0.96f, 0.84f, 0.06f, 0.5f, 0.5f);
    mpDrawCursor->setAlphaRate(1.0f);

    mpMeterHaihai = new dMeterHaihai_c(3);
}

gzFrameworkMenu_c::~gzFrameworkMenu_c() {
    _delete();
}

void gzFrameworkMenu_c::_delete() {
    OSReport("deleting gzFrameworkMenu_c\n");

    for (int i = 0; i < LINE_NUM; i++) {
        delete mpLines[i];
        mpLines[i] = NULL;

        delete mpLineOptions[i];
        mpLineOptions[i] = NULL;

        delete mpLinesMetadata[i];
        mpLinesMetadata[i] = NULL;
    }

    delete mpDescription;
    mpDescription = NULL;

    delete mpDrawCursor;
    mpDrawCursor = NULL;

    delete mpMeterHaihai;
    mpMeterHaihai = NULL;
}

void gzFrameworkMenu_c::execute() {
    // Update active layers
    mNumActiveLayers = 0;
    memset(mpActiveLayers, 0, sizeof(mpActiveLayers));

    layer_class* layer = fpcLy_RootLayer();
    while (layer != NULL && mNumActiveLayers < MAX_LAYERS) {
        mpActiveLayers[mNumActiveLayers++] = layer;
        layer = (layer_class*)layer->node.mpNextNode;
    }

    // Clamp layer index
    if (mNumActiveLayers == 0) {
        mCurrentLayerIndex = 0;
    } else {
        if (mCurrentLayerIndex < 0 || mCurrentLayerIndex >= mNumActiveLayers) {
            mCurrentLayerIndex = 0;
        }
    }

    // Conditional reset for node list if invalid
    layer_class* cur_layer = getCurrentLayer();
    if (!cur_layer || !cur_layer->node_tree.mpLists || mCurrentNodeListIndex < 0 ||
        mCurrentNodeListIndex >= cur_layer->node_tree.mNumLists ||
        cur_layer->node_tree.mpLists[mCurrentNodeListIndex].mSize <= 0) {
        resetNodeListIndexForCurrentLayer();
    }

    // Conditional reset for process if invalid
    node_list_class* cur_list = getCurrentNodeList(cur_layer);
    bool need_process_reset = true;
    
    if (cur_list != NULL && mCurrentProcessIndex >= 0 && mCurrentProcessIndex < cur_list->mSize) {
        node_class* node = cur_list->mpHead;
        for (int i = 0; i < mCurrentProcessIndex; ++i) {
            if (node == NULL) {
                need_process_reset = true;
                break;
            }
            node = node->mpNextNode;
        }
        if (node != NULL) {
            create_tag_class* tag = (create_tag_class*)node;
            base_process_class* process = (base_process_class*)tag->mpTagData;
            if (process != NULL) {
                need_process_reset = false;
            }
        }
    }

    if (need_process_reset) {
        resetProcessIndexForCurrentNodeList();
    }

    if (gzPad::getTrigDown()) mCursor.y = (mCursor.y + 1) % LINE_NUM;
    if (gzPad::getTrigUp()) mCursor.y = (mCursor.y - 1 + LINE_NUM) % LINE_NUM;

    // Handle right trigger input
    if (gzPad::getTrigRight()) {
        switch (mCursor.y) {
        case FRAMEWORK_LINE_LAYER:
            if (mNumActiveLayers > 0) {
                mCurrentLayerIndex = (mCurrentLayerIndex + 1) % mNumActiveLayers;
                resetNodeListIndexForCurrentLayer();
                resetProcessIndexForCurrentNodeList();
            }
            break;
        case FRAMEWORK_LINE_NODE_LIST: {
            layer_class* cur_layer = getCurrentLayer();
            if (cur_layer != NULL && cur_layer->node_tree.mNumLists > 0 && cur_layer->node_tree.mpLists != NULL) {
                cycleValidIndex(mCurrentNodeListIndex, cur_layer->node_tree.mNumLists, 1, isNodeListValid, cur_layer);
                resetProcessIndexForCurrentNodeList();
            }
            break;
        }
        case FRAMEWORK_LINE_PROCESS: {
            node_list_class* cur_list = getCurrentNodeList(getCurrentLayer());
            if (cur_list != NULL && cur_list->mSize > 0) {
                cycleValidIndex(mCurrentProcessIndex, cur_list->mSize, 1, isProcessValid, cur_list);
            }
            break;
        }
        }
    }

    // Handle left trigger input (dir = -1)
    if (gzPad::getTrigLeft()) {
        switch (mCursor.y) {
        case FRAMEWORK_LINE_LAYER:
            if (mNumActiveLayers > 0) {
                mCurrentLayerIndex = (mCurrentLayerIndex - 1 + mNumActiveLayers) % mNumActiveLayers;
                resetNodeListIndexForCurrentLayer();
                resetProcessIndexForCurrentNodeList();
            }
            break;
        case FRAMEWORK_LINE_NODE_LIST: {
            layer_class* cur_layer = getCurrentLayer();
            if (cur_layer != NULL && cur_layer->node_tree.mNumLists > 0 && cur_layer->node_tree.mpLists != NULL) {
                cycleValidIndex(mCurrentNodeListIndex, cur_layer->node_tree.mNumLists, -1, isNodeListValid, cur_layer);
                resetProcessIndexForCurrentNodeList();
            }
            break;
        }
        case FRAMEWORK_LINE_PROCESS: {
            node_list_class* cur_list = getCurrentNodeList(getCurrentLayer());
            if (cur_list != NULL && cur_list->mSize > 0) {
                cycleValidIndex(mCurrentProcessIndex, cur_list->mSize, -1, isProcessValid, cur_list);
            }
            break;
        }
        }
    }

    if (gzPad::getTrigB()) {
        gzChangeMenu<gzMainMenu_c>();
        return;
    }

    updateDynamicLines();
    mpMeterHaihai->_execute(0);
}

void gzFrameworkMenu_c::draw() {
    static const f32 X_ALIGNMENT = 40.0f;
    static const f32 Y_ALIGNMENT = 100.0f;
    static const f32 LINE_SPACING = 22.0f;
    static const f32 OPTIONS_X_OFFSET = -150.0f;
    static const f32 HAIHAI_X_OFFSET = 305.0f;
    static const f32 HAIHAI_Y_OFFSET = -7.0f;
    static const f32 HAIHAI_SCALE_FACTOR = 0.04f;
    static const f32 HAIHAI_EXTRA_SPACING = 30.0f;
    static const f32 CURSOR_X = 170.0f;
    static const f32 CURSOR_Y_BASE = 82.5f;
    static const f32 DESCRIPTION_Y = 420.0f;
    static const f32 METADATA_X_OFFSET = 200.0f;
    static const f32 METADATA_Y_OFFSET = -25.0f;

    J2DTextBox::TFontSize font_size;
    mpLineOptions[0]->getFontSize(font_size); // assume that all lines have the same font size
    mpMeterHaihai->setScale(font_size.mSizeY * HAIHAI_SCALE_FACTOR);

    u32 cursor_color = gzInfo_getCursorColor();

    f32 x_alignment_opts = X_ALIGNMENT + OPTIONS_X_OFFSET;
    f32 x_alignment_haihai = x_alignment_opts + HAIHAI_X_OFFSET;
    f32 y_alignment_haihai = Y_ALIGNMENT + HAIHAI_Y_OFFSET;
    f32 x_alignment_metadata = X_ALIGNMENT + METADATA_X_OFFSET;

    for (int i = 0; i < LINE_NUM; i++) {
        f32 y_pos = Y_ALIGNMENT + ((i - 1) * LINE_SPACING);
        f32 y_pos_haihai = y_alignment_haihai + ((i - 1) * LINE_SPACING);
        f32 y_pos_cursor = CURSOR_Y_BASE + ((i - 1) * LINE_SPACING);
        f32 y_pos_metadata = Y_ALIGNMENT + ((i - 1) * LINE_SPACING);

        if (mCursor.y == i) {
            // Spacing between arrows determined by text box bound size
            f32 x_size_haihai = mpLineOptions[i]->mBounds.f.x + HAIHAI_EXTRA_SPACING;

            if (mpLineOptions[i]->mStringLength != 0) {
                mpMeterHaihai->drawHaihai(getHaihaiFlags(i), x_alignment_haihai, y_pos_haihai, x_size_haihai, 0.0f);
            }

            mpLines[i]->draw(X_ALIGNMENT, y_pos, cursor_color);
            mpDrawCursor->setPos(CURSOR_X, y_pos_cursor, (J2DPane*)mpLines[i], true);
            mpLineOptions[i]->draw(x_alignment_opts, y_pos, cursor_color, HBIND_CENTER);
            mpLinesMetadata[i]->draw(x_alignment_metadata, y_pos_metadata, COLOR_WHITE);
        } else {
            mpLines[i]->draw(X_ALIGNMENT, y_pos, COLOR_WHITE);
            mpLineOptions[i]->draw(x_alignment_opts, y_pos, COLOR_WHITE, HBIND_CENTER);
            mpLinesMetadata[i]->draw(x_alignment_metadata, y_pos_metadata, COLOR_WHITE);
        }
    }

    // Draw description if valid
    if (mpLines[mCursor.y] && *mpLines[mCursor.y]->m_description != 0) {
        mpDescription->setString(mpLines[mCursor.y]->m_description);
        mpDescription->draw(X_ALIGNMENT, DESCRIPTION_Y, cursor_color);
    }

    if (gzInfo_isCursorTypeTP()) mpDrawCursor->draw();
}
