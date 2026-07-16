#ifndef TREE_H
#define TREE_H

#include <stdint.h>

#include "../../cglm/include/cglm/cglm.h"

#include "../random/xoshiro256.h"

#include "tree_settings.h"

#include "branch.h"
#include "meristem.h"
#include "leaf.h"

typedef struct Tree {
    vec4 rotation;
    vec3 translation;
    vec3 scale;
    
    size_t branches_len;
    size_t meristems_len;
    size_t leaves_len;
    
    size_t branches_alloc_size;
    size_t meristems_alloc_size;
    size_t leaves_alloc_size;
    
    Branch* branches;
    Meristem* meristems;
    Leaf* leaves;
    
    TreeSettings* tree_settings;

    uint64_t seed;
    Xoshiro256ssState prand_state; // pesudo-random number generator state
} Tree;

Tree new_tree_from_name(char* name, uint64_t seed);

void update_tree(Tree* tree);

void create_leaves(Tree* tree);
void update_meristems(Tree* treeree);

void add_branch(Tree* tree, Branch branch);

void add_meristem(Tree* tree, Meristem meristem);

void add_leaf(Tree* tree, Leaf leaf);

Tree copy_tree(Tree* tree);

#endif