#ifndef TREE_H
#define TREE_H

#include <raymath.h>
#include <stdint.h>

#include "../random/xoshiro256.h"

#include "tree_settings.h"

#include "branch.h"
#include "meristem.h"

typedef struct Tree {
    Transform transform;
    
    size_t branches_len;
    size_t meristems_len;
    size_t branches_alloc_size;
    size_t meristems_alloc_size;

    Branch* branches;
    Meristem* meristems;

    TreeSettings* tree_settings;

    uint64_t seed;
    Xoshiro256ssState prand_state; // pesudo-random number generator state
} Tree;

Tree new_tree_from_name(char* name, uint64_t seed);

void update_tree(Tree* tree);

void add_branch(Tree* tree, Branch branch);

void add_meristem(Tree* tree, Meristem meristem);

Tree copy_tree(Tree* tree);

#endif