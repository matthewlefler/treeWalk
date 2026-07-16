#ifndef DISPLAY_H
#define DISPLAY_H

#include "../../cglm/include/cglm/cglm.h"

#include "../transform.h"
#include "tree.h"

void debug_draw_tree(Tree* tree);

void debug_draw_branch(Branch* branch_addr, Transform parent_transform);

void debug_draw_meristem(Meristem* meristem_addr, Transform parent_transform);

void debug_draw_leaf(Leaf* leaf_addr, Transform parent_transform);

#endif