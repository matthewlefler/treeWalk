
#include <raylib.h>

#include "tree.h"

debug_draw_tree(Tree* tree) {
    for(size_t i = 0; i < tree->branches_len; ++i) {
        debug_draw_branch(tree->branches + i);
    }

    for(size_t i = 0; i < tree->meristems_len; ++i) {
        debug_draw_meristem(tree->meristems + i);
    }
}

debug_draw_branch(Meristem* meristem_addr) {
    Meristem meristem = *meristem_addr;

}

debug_draw_meristem() {

}