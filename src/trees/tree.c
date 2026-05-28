#ifndef TREE_C
#define TREE_C

#include "tree.h"
#include "tree_settings.h"

#include "branch.h"
#include "meristem.h"

#include <raymath.h>

#define INIT_SIZE 10

Tree new_tree_from_name(char* name) {
    Tree tree = {
        .transform = {
            .translation = Vector3Zero(),
            .rotation = QuaternionIdentity(),
            .scale = Vector3One(),
        },

        .branches_len = 0,
        .branches_alloc_size = INIT_SIZE,
        .meristems_len = 1,
        .meristems_alloc_size = INIT_SIZE,

        .branches = malloc(sizeof(Branch) * INIT_SIZE),
        .meristems = malloc(sizeof(Meristem) * INIT_SIZE),
        .tree_settings = get_setting(name),
    };

    tree.meristems[0] = create_meristem(Vector3Zero(), QuaternionIdentity(), ALIVE);

    return tree;
}

void add_branch(Tree* tree, Branch branch) {
    
}

#endif