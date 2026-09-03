#ifndef DISPLAY_H
#define DISPLAY_H

#include <cglm/cglm.h>

#include "../transform.h"

#include "tree.h"

void debug_draw_tree(Tree* tree);

void debug_draw_branch(Branch* branch_addr, TreeTransform parent_position);

void debug_draw_meristem(Meristem* meristem_addr, TreeTransform parent_position);

void debug_draw_leaf(Leaf* leaf_addr, TreeTransform parent_position);

#endif