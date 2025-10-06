#include "d/dolzel.h" // IWYU pragma: keep

#include "gz/gz.h"
#include "gz/gz_menu.h"

gzMenu_c::gzCursor gzFrameworkMenu_c::mCursor = {0, 0};

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

void gzFrameworkMenu_c::resetNodeListIndexForCurrentLayer() {
    layer_class* current_layer = getCurrentLayer();
    mCurrentNodeListIndex = getFirstActiveNodeListIndex(current_layer);
}

int gzFrameworkMenu_c::getFirstActiveNodeIndex(node_list_class* list) {
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

void gzFrameworkMenu_c::resetNodeIndexForCurrentNodeList() {
    node_list_class* current_list = getCurrentNodeList(getCurrentLayer());
    mCurrentNodeIndex = getFirstActiveNodeIndex(current_list);
}

layer_class* gzFrameworkMenu_c::getCurrentLayer() {
    if (mNumActiveLayers > 0) {
        return mpActiveLayers[mCurrentLayerIndex];
    }

    return NULL;
}

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

base_process_class* gzFrameworkMenu_c::getCurrentProcess(node_list_class* i_node_list) {
    if (i_node_list == NULL || i_node_list->mSize <= 0 || mCurrentNodeIndex < 0 || mCurrentNodeIndex >= i_node_list->mSize) {
        return NULL;
    }

    node_class* node = i_node_list->mpHead;
    for (int i = 0; i < mCurrentNodeIndex; ++i) {
        if (node == NULL) return NULL;
        node = node->mpNextNode;
    }

    if (node == NULL) return NULL;

    create_tag_class* tag = (create_tag_class*)node;
    return (base_process_class*)tag->mpTagData;
}

void gzFrameworkMenu_c::updateDynamicLines() {
    OSReport("updating dynamic lines!\n");
    layer_class* current_layer = getCurrentLayer();
    if (current_layer != NULL) {
        node_list_class* current_layer_node_list = getCurrentNodeList(current_layer);
        if (current_layer_node_list != NULL) {
            OSReport("setting current node list idx: %d\n", mCurrentNodeListIndex);
            base_process_class* current_node_list_process = getCurrentProcess(current_layer_node_list);
            if (current_node_list_process != NULL) {
                OSReport("setting current process: %d\n", current_node_list_process->name);
                mpLineOptions[FRAMEWORK_LINE_LAYER]->setStringf("%u", current_layer->layer_id);
                mpLineOptions[FRAMEWORK_LINE_NODE_LIST]->setStringf("%d", mCurrentNodeListIndex);
                mpLineOptions[FRAMEWORK_LINE_NODE]->setStringf("%u", current_node_list_process->id);
                mpLineOptions[FRAMEWORK_LINE_PROCESS]->setStringf("%d", current_node_list_process->name);
            } else {
                mpLineOptions[FRAMEWORK_LINE_NODE]->setString("n/a");
                mpLineOptions[FRAMEWORK_LINE_PROCESS]->setString("n/a");
            }
        } else {
            mpLineOptions[FRAMEWORK_LINE_NODE_LIST]->setString("n/a");
            mpLineOptions[FRAMEWORK_LINE_NODE]->setString("n/a");
            mpLineOptions[FRAMEWORK_LINE_PROCESS]->setString("n/a");
        }
    } else {
        mpLineOptions[FRAMEWORK_LINE_LAYER]->setString("n/a");
        mpLineOptions[FRAMEWORK_LINE_NODE_LIST]->setString("n/a");
        mpLineOptions[FRAMEWORK_LINE_NODE]->setString("n/a");
        mpLineOptions[FRAMEWORK_LINE_PROCESS]->setString("n/a");
    }

    J2DTextBox::TFontSize font_size;

    // update option box bounds
    for (int i = 0; i < LINE_NUM; i++) {
        mpLineOptions[i]->getFontSize(font_size);
        // applying font_size.mSizeX against a scaling factor 
        // to create a linear relationship between string length 
        // and text box bound size
        font_size.mSizeX *= 0.5f;
        mpLineOptions[i]->mBounds.f.x = mpLineOptions[i]->mStringLength * font_size.mSizeX;
    }
}

gzFrameworkMenu_c::gzFrameworkMenu_c() {
    OSReport("creating gzFrameworkMenu_c\n");

    mCurrentLayerIndex = 0;
    mNumActiveLayers = 0;
    mCurrentNodeListIndex = 0;
    mCurrentNodeIndex = 0;
    memset(mpActiveLayers, 0, sizeof(mpActiveLayers));

    for (int i = 0; i < LINE_NUM; i++) {
        mpLines[i] = new gzTextBox();

        mpLineOptions[i] = new gzTextBox();
        mpLineOptions[i]->mBounds.f.y = 10.0f;
    }

    mpDescription = new gzTextBox();

    mpLines[FRAMEWORK_LINE_LAYER]->setStringDesc("layer", "layer containing node lists");
    mpLines[FRAMEWORK_LINE_NODE_LIST]->setStringDesc("node list", "node lists in this layer");
    mpLines[FRAMEWORK_LINE_NODE]->setStringDesc("node", "nodes in this node list");
    mpLines[FRAMEWORK_LINE_PROCESS]->setStringDesc("process", "processes in this node");

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
    }

    delete mpDescription;
    mpDescription = NULL;

    delete mpDrawCursor;
    mpDrawCursor = NULL;

    delete mpMeterHaihai;
    mpMeterHaihai = NULL;
}

void gzFrameworkMenu_c::execute() {
    mNumActiveLayers = 0;
    memset(mpActiveLayers, 0, sizeof(mpActiveLayers));

    layer_class* layer = fpcLy_RootLayer();
    while (layer != NULL && mNumActiveLayers < MAX_LAYERS) {
        mpActiveLayers[mNumActiveLayers++] = layer;

        OSReport("Layer %p ID %u numlists %d mplists %p\n", layer, layer->layer_id, layer->node_tree.mNumLists, layer->node_tree.mpLists);
        if (layer->node_tree.mNumLists > 0 && layer->node_tree.mpLists != NULL) {
            for (int list_idx = 0; list_idx < layer->node_tree.mNumLists; list_idx++) {
                OSReport("List %d size %d\n", list_idx, layer->node_tree.mpLists[list_idx].mSize);
            }
        }

        layer = (layer_class*)layer->node.mpNextNode;
    }

    if (mNumActiveLayers == 0) {
        mCurrentLayerIndex = 0;
    } else {
        if (mCurrentLayerIndex < 0 || mCurrentLayerIndex >= mNumActiveLayers) {
            mCurrentLayerIndex = 0;
        }
    }

    // Conditional reset for node list
    layer_class* cur_layer = getCurrentLayer();
    bool need_list_reset = true;
    if (cur_layer != NULL && cur_layer->node_tree.mpLists != NULL &&
        mCurrentNodeListIndex >= 0 && mCurrentNodeListIndex < cur_layer->node_tree.mNumLists &&
        cur_layer->node_tree.mpLists[mCurrentNodeListIndex].mSize > 0) {
        need_list_reset = false;
    }
    if (need_list_reset) {
        resetNodeListIndexForCurrentLayer();
    }

    // Conditional reset for node
    node_list_class* cur_list = getCurrentNodeList(cur_layer);
    bool need_node_reset = true;
    if (cur_list != NULL && mCurrentNodeIndex >= 0 && mCurrentNodeIndex < cur_list->mSize) {
        node_class* node = cur_list->mpHead;
        for (int i = 0; i < mCurrentNodeIndex; ++i) {
            if (node == NULL) {
                need_node_reset = true;
                break;
            }
            node = node->mpNextNode;
        }
        if (node != NULL) {
            create_tag_class* tag = (create_tag_class*)node;
            base_process_class* process = (base_process_class*)tag->mpTagData;
            if (process != NULL) {
                need_node_reset = false;
            }
        }
    }
    if (need_node_reset) {
        resetNodeIndexForCurrentNodeList();
    }

    if (gzPad::getTrigDown() && mCursor.y < LINE_NUM) {
        mCursor.y++;
    }

    if (gzPad::getTrigUp() && mCursor.y >= 0) {
        mCursor.y--;
    }

    if (mCursor.y < 0) {
        mCursor.y = LINE_NUM - 1;
    } else if (mCursor.y > LINE_NUM - 1) {
        mCursor.y = 0;
    }

    if (gzPad::getTrigRight()) {
        switch (mCursor.y) {
        case FRAMEWORK_LINE_LAYER:
            if (mNumActiveLayers > 0) {
                mCurrentLayerIndex = (mCurrentLayerIndex + 1) % mNumActiveLayers;
                resetNodeListIndexForCurrentLayer();
                resetNodeIndexForCurrentNodeList();
            }
            break;
        case FRAMEWORK_LINE_NODE_LIST: {
            layer_class* cur_layer = getCurrentLayer();
            if (cur_layer != NULL && cur_layer->node_tree.mNumLists > 0 && cur_layer->node_tree.mpLists != NULL) {
                int idx = mCurrentNodeListIndex;
                if (idx < 0) {
                    idx = -1;
                }
                int num_lists = cur_layer->node_tree.mNumLists;
                int steps = 0;
                while (steps < num_lists) {
                    idx = (idx + 1 + num_lists) % num_lists;
                    steps++;
                    if (cur_layer->node_tree.mpLists[idx].mSize > 0) {
                        mCurrentNodeListIndex = idx;
                        resetNodeIndexForCurrentNodeList();
                        break;
                    }
                }
                if (steps == num_lists) {
                    mCurrentNodeListIndex = -1;
                }
            }
            break;
        }
        case FRAMEWORK_LINE_NODE: {
            node_list_class* cur_list = getCurrentNodeList(getCurrentLayer());
            if (cur_list != NULL && cur_list->mSize > 0) {
                int idx = mCurrentNodeIndex;
                if (idx < 0) {
                    idx = -1;
                }
                int num_nodes = cur_list->mSize;
                int steps = 0;
                while (steps < num_nodes) {
                    idx = (idx + 1 + num_nodes) % num_nodes;
                    steps++;
                    node_class* node = cur_list->mpHead;
                    for (int j = 0; j < idx; ++j) {
                        if (node == NULL) break;
                        node = node->mpNextNode;
                    }
                    if (node != NULL) {
                        create_tag_class* tag = (create_tag_class*)node;
                        base_process_class* process = (base_process_class*)tag->mpTagData;
                        if (process != NULL) {
                            mCurrentNodeIndex = idx;
                            break;
                        }
                    }
                }
                if (steps == num_nodes) {
                    mCurrentNodeIndex = -1;
                }
            }
            break;
        }
        case FRAMEWORK_LINE_PROCESS: {
            node_list_class* cur_list = getCurrentNodeList(getCurrentLayer());
            if (cur_list != NULL && cur_list->mSize > 0) {
                int idx = mCurrentNodeIndex;
                if (idx < 0) {
                    idx = -1;
                }
                int num_nodes = cur_list->mSize;
                int steps = 0;
                while (steps < num_nodes) {
                    idx = (idx + 1 + num_nodes) % num_nodes;
                    steps++;
                    node_class* node = cur_list->mpHead;
                    for (int j = 0; j < idx; ++j) {
                        if (node == NULL) break;
                        node = node->mpNextNode;
                    }
                    if (node != NULL) {
                        create_tag_class* tag = (create_tag_class*)node;
                        base_process_class* process = (base_process_class*)tag->mpTagData;
                        if (process != NULL) {
                            mCurrentNodeIndex = idx;
                            break;
                        }
                    }
                }
                if (steps == num_nodes) {
                    mCurrentNodeIndex = -1;
                }
            }
            break;
        }
        }
    }

    if (gzPad::getTrigLeft()) {
        switch (mCursor.y) {
        case FRAMEWORK_LINE_LAYER:
            if (mNumActiveLayers > 0) {
                mCurrentLayerIndex--;
                if (mCurrentLayerIndex < 0) mCurrentLayerIndex = mNumActiveLayers - 1;
                resetNodeListIndexForCurrentLayer();
                resetNodeIndexForCurrentNodeList();
            }
            break;
        case FRAMEWORK_LINE_NODE_LIST: {
            layer_class* cur_layer = getCurrentLayer();
            if (cur_layer != NULL && cur_layer->node_tree.mNumLists > 0 && cur_layer->node_tree.mpLists != NULL) {
                int idx = mCurrentNodeListIndex;
                if (idx < 0) {
                    idx = cur_layer->node_tree.mNumLists;
                }
                int num_lists = cur_layer->node_tree.mNumLists;
                int steps = 0;
                while (steps < num_lists) {
                    idx = (idx - 1 + num_lists) % num_lists;
                    steps++;
                    if (cur_layer->node_tree.mpLists[idx].mSize > 0) {
                        mCurrentNodeListIndex = idx;
                        resetNodeIndexForCurrentNodeList();
                        break;
                    }
                }
                if (steps == num_lists) {
                    mCurrentNodeListIndex = -1;
                }
            }
            break;
        }
        case FRAMEWORK_LINE_NODE: {
            node_list_class* cur_list = getCurrentNodeList(getCurrentLayer());
            if (cur_list != NULL && cur_list->mSize > 0) {
                int idx = mCurrentNodeIndex;
                if (idx < 0) {
                    idx = cur_list->mSize;
                }
                int num_nodes = cur_list->mSize;
                int steps = 0;
                while (steps < num_nodes) {
                    idx = (idx - 1 + num_nodes) % num_nodes;
                    steps++;
                    node_class* node = cur_list->mpHead;
                    for (int j = 0; j < idx; ++j) {
                        if (node == NULL) break;
                        node = node->mpNextNode;
                    }
                    if (node != NULL) {
                        create_tag_class* tag = (create_tag_class*)node;
                        base_process_class* process = (base_process_class*)tag->mpTagData;
                        if (process != NULL) {
                            mCurrentNodeIndex = idx;
                            break;
                        }
                    }
                }
                if (steps == num_nodes) {
                    mCurrentNodeIndex = -1;
                }
            }
            break;
        }
        case FRAMEWORK_LINE_PROCESS: {
            node_list_class* cur_list = getCurrentNodeList(getCurrentLayer());
            if (cur_list != NULL && cur_list->mSize > 0) {
                int idx = mCurrentNodeIndex;
                if (idx < 0) {
                    idx = cur_list->mSize;
                }
                int num_nodes = cur_list->mSize;
                int steps = 0;
                while (steps < num_nodes) {
                    idx = (idx - 1 + num_nodes) % num_nodes;
                    steps++;
                    node_class* node = cur_list->mpHead;
                    for (int j = 0; j < idx; ++j) {
                        if (node == NULL) break;
                        node = node->mpNextNode;
                    }
                    if (node != NULL) {
                        create_tag_class* tag = (create_tag_class*)node;
                        base_process_class* process = (base_process_class*)tag->mpTagData;
                        if (process != NULL) {
                            mCurrentNodeIndex = idx;
                            break;
                        }
                    }
                }
                if (steps == num_nodes) {
                    mCurrentNodeIndex = -1;
                }
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
    OSReport("-------\n");
}

void gzFrameworkMenu_c::draw() {
    f32 x_alignment = 30.0f;
    f32 y_alignment = 90.0f;

    f32 x_alignment_opts = x_alignment - 150.0f;

    f32 x_alignment_haihai = x_alignment_opts + 305.0f;
    f32 y_alignment_haihai = y_alignment - 7.0f;

    J2DTextBox::TFontSize font_size;
    
    mpMeterHaihai->_execute(0);

    u32 cursor_color = g_gzInfo.getCursorType() & g_gzInfo.CURSOR_CLASSIC ? g_gzInfo.getTextColor() : COLOR_WHITE;

    for (int i = 0; i < LINE_NUM; i++) {
        if (mpLines[i] != NULL && mpLineOptions[i] != NULL && mpMeterHaihai != NULL && mpDrawCursor != NULL) {
            mpLineOptions[i]->getFontSize(font_size);
            mpMeterHaihai->setScale(font_size.mSizeY * 0.04f);
        
            if (mCursor.y == i) {
                // spacing between arrows will be determined off text box bound size
                f32 x_size_haihai = mpLineOptions[i]->mBounds.f.x + 30.0f;
                
                if (mpLineOptions[i]->mStringLength != 0) {
                    mpMeterHaihai->drawHaihai((ARROW_LEFT | ARROW_RIGHT), x_alignment_haihai, y_alignment_haihai + ((i - 1) * 22.0f), x_size_haihai, 0.0f);
                }

                mpLines[i]->draw(x_alignment, y_alignment + ((i - 1) * 22.0f), cursor_color);
                mpDrawCursor->setPos(170.0f, 82.5f + ((i - 1) * 22.0f), (J2DPane*)mpLines[i], true);
                mpLineOptions[i]->draw(x_alignment_opts, y_alignment + ((i - 1) * 22.0f), cursor_color, HBIND_CENTER);
            } else {
                mpLines[i]->draw(x_alignment, y_alignment + ((i - 1) * 22.0f), COLOR_WHITE);
                mpLineOptions[i]->draw(x_alignment_opts, y_alignment + ((i - 1) * 22.0f), COLOR_WHITE, HBIND_CENTER);
            }
        }
    }

    if (mpDescription != NULL && mpLines[mCursor.y] != NULL && *mpLines[mCursor.y]->m_description != 0) {
        mpDescription->setString(mpLines[mCursor.y]->m_description);
        mpDescription->draw(30.0f, 420.0f, cursor_color);
    }

    if (g_gzInfo.getCursorType() & g_gzInfo.CURSOR_TP) mpDrawCursor->draw();
}
