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

void update_tree(Tree* tree) {
    int nodes_per_growth = tree->tree_settings->nodes_per_growth;
    float grow_distance = tree->tree_settings->grow_distance;

    for(size_t i = 0; i < tree->meristems_len; ++i) {
        Meristem meristem = tree->meristems[i];
        for(int j = 0; j < nodes_per_growth; j++) {
            
        } 
    }
}

void add_branch(Tree* tree, Branch branch) {

}

void add_meristem(Tree* tree, Meristem meristem) {

}

#endif