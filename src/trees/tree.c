#ifndef TREE_C
#define TREE_C

#include <stdint.h>
#include <string.h>
#include <stdio.h>

#include <raymath.h>

#include "../random/xoshiro256.h"

#include "tree.h"
#include "tree_settings.h"

#include "branch.h"
#include "meristem.h"


#define INIT_SIZE 10

Tree new_tree_from_name(char* name, uint64_t seed) {
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

        .seed = seed,
    };

    xorshift256_init(&tree.prand_state, tree.seed);

    tree.meristems[0] = create_meristem(Vector3Zero(), QuaternionIdentity(), ALIVE);

    return tree;
}

constexpr uint64_t bud_die_chance = ((((uint64_t) 2 << 63) - 1) / 2);

void update_tree(Tree* tree) {
    uint32_t nodes_per_growth = tree->tree_settings->nodes_per_growth;
    float grow_distance = tree->tree_settings->grow_distance;
    float angle_between_nodes = tree->tree_settings->angle_between_nodes;

    // tropisms
    float gravity_tropism                = tree->tree_settings->gravity_tropism;
    float horizontal_when_shaded_tropism = tree->tree_settings->horizontal_when_shaded_tropism;
    float to_light_tropism               = tree->tree_settings->to_light_tropism;
    float random_tropism                 = tree->tree_settings->random_tropism;
    float twist_tropism                  = tree->tree_settings->twist_tropism;

    Vector3 perpendifular_vector;
    Vector3 unit_vector;
    Vector3 x = (Vector3) {1, 0, 0};
    Vector3 y = (Vector3) {0, 1, 0};

    Vector3 offset_vector;

    Vector3 gravity_tropism_vector = (Vector3) {0, gravity_tropism, 0};
    Vector3 horizontal_when_shaded_tropism_vector; // not completely implemented
    Vector3 to_light_tropism_vector = (Vector3) {0, 0, 0}; // unimplemented
    Vector3 random_tropism_vector;
    Vector3 twist_tropism_vector = (Vector3) {0, 0, 0}; // unimplemented

    size_t meristems_len = tree->meristems_len;

    for(size_t i = 0; i < meristems_len; ++i) {
        Meristem meristem = tree->meristems[i];

        if(meristem.state == BUD) {
            if(xoshiro256ss(&tree->prand_state) > bud_die_chance) {
                meristem.state = DEAD;
            } else { 
                meristem.state = ALIVE;
            }
        }
        if(meristem.state == DEAD) {
            continue;
        }

        float angle = 0;
        for(int j = 0; j < nodes_per_growth; j++) {
            angle += angle_between_nodes;

            perpendifular_vector = Vector3RotateByQuaternion(x, meristem.transform.rotation);
            unit_vector = Vector3RotateByQuaternion(y, meristem.transform.rotation);

            horizontal_when_shaded_tropism_vector = (Vector3) {unit_vector.x * horizontal_when_shaded_tropism, 0, unit_vector.z * horizontal_when_shaded_tropism};
            random_tropism_vector = Vector3RotateByAxisAngle(Vector3Scale(perpendifular_vector, random_tropism), unit_vector, (float) xoshiro256ss(&tree->prand_state));

            // sum all vectors
            offset_vector = (Vector3) {
                gravity_tropism_vector.x + horizontal_when_shaded_tropism_vector.x + to_light_tropism_vector.x + random_tropism_vector.x + twist_tropism_vector.x,
                gravity_tropism_vector.y + horizontal_when_shaded_tropism_vector.y + to_light_tropism_vector.y + random_tropism_vector.y + twist_tropism_vector.y,
                gravity_tropism_vector.z + horizontal_when_shaded_tropism_vector.z + to_light_tropism_vector.z + random_tropism_vector.z + twist_tropism_vector.z,
            };

            Vector3 new_meristem_translation = Vector3Add(meristem.transform.translation, offset_vector);

            add_branch(tree, create_branch(meristem.transform.translation, new_meristem_translation));
            add_meristem(tree, create_meristem(new_meristem_translation, QuaternionMultiply(QuaternionFromAxisAngle(unit_vector, angle), QuaternionFromVector3ToVector3(y, perpendifular_vector)), BUD));

            meristem.transform.translation = new_meristem_translation;
            meristem.transform.rotation = QuaternionFromVector3ToVector3(y, offset_vector);
        }
        tree->meristems[i] = meristem;

        printf("\tmeristem %d/%d\n", i + 1, meristems_len);
    }
}

void add_branch(Tree* tree, Branch branch) {
    if(tree->branches_len >= tree->branches_alloc_size) {
        tree->branches_alloc_size = tree->branches_alloc_size << 1;
        tree->branches = realloc(tree->branches, sizeof(Branch) * tree->branches_alloc_size);
    }

    tree->branches[tree->branches_len] = branch;
    ++tree->branches_len;
}

void add_meristem(Tree* tree, Meristem meristem) {
    if(tree->meristems_len >= tree->meristems_alloc_size) {
        tree->meristems_alloc_size = tree->meristems_alloc_size << 1;
        tree->meristems = realloc(tree->meristems, sizeof(Meristem) * tree->meristems_alloc_size);
    }

    tree->meristems[tree->meristems_len] = meristem;
    ++tree->meristems_len;
}

Tree copy_tree(Tree* tree) {
    Tree new_tree = *tree;
    
    new_tree.branches = malloc(sizeof(Branch) * tree->branches_alloc_size);
    new_tree.meristems = malloc(sizeof(Meristem) * tree->meristems_alloc_size);
    
    memcpy(new_tree.branches, tree->branches, sizeof(Branch) * tree->branches_len);
    memcpy(new_tree.meristems, tree->meristems, sizeof(Meristem) * tree->meristems_len);

    return new_tree;
}

#endif