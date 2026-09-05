#ifndef TREE_C
#define TREE_C

#include <stdint.h>
#include <string.h>
#include <stdio.h>

#include <cglm/cglm.h>

#include "../random/xoshiro256.h"

#include "tree.h"
#include "tree_settings.h"

#include "branch.h"
#include "meristem.h"

#define INIT_SIZE 10

Tree new_tree_from_name(char* name, uint64_t seed) {
    Tree tree;

    glm_vec3_copy(GLM_VEC3_ZERO, tree.translation);
    glm_vec3_copy(GLM_VEC3_ONE, tree.scale);
    glm_quat_copy(GLM_QUAT_IDENTITY, tree.rotation);

    tree.bounding_volume_hierarchy = create_empty_bvh();

    tree.branches_len = 0;
    tree.branches_alloc_size = INIT_SIZE;

    tree.meristems_len = 0;
    tree.meristems_alloc_size = INIT_SIZE;

    tree.leaves_len = 0;
    tree.leaves_alloc_size = INIT_SIZE;

    tree.branches = malloc(sizeof(Branch) * INIT_SIZE);
    tree.meristems = malloc(sizeof(Meristem) * INIT_SIZE);
    tree.leaves = malloc(sizeof(Leaf) * INIT_SIZE);

    tree.tree_settings = get_setting(name);

    tree.seed = seed;
    xorshift256_init(&tree.prand_state, tree.seed);

    add_meristem(&tree, create_meristem(GLM_VEC3_ZERO, GLM_QUAT_IDENTITY, BUD));

    return tree;
}

constexpr uint64_t bud_die_chance = ((((uint64_t) 2 << 63) - 1) / 2);

void update_tree(Tree* tree) {
    update_meristems(tree);
    create_leaves(tree);
    
    free_bvh(&tree->bounding_volume_hierarchy);
    tree->bounding_volume_hierarchy = build_bvh(tree->leaves_len, tree->leaves);
}

void create_leaves(Tree* tree) {
    tree->leaves_len = 0;

    vec3 leaf_template_point_1 = {-0.1, 0, 0};
    vec3 leaf_template_point_2 = {0, 0, 0.16};
    vec3 leaf_template_point_3 = {0.1, 0, 0};

    vec3 x = {1, 0, 0};
    vec3 tmp;

    vec3 p1;
    vec3 p2;
    vec3 p3;

    versor rotation;

    size_t meristems_len = tree->meristems_len;
    Meristem meristem;
    for(size_t i = 0; i < meristems_len; ++i) {
        meristem = tree->meristems[i];

        if(meristem.state == BUD) {
            if(xoshiro256ss(&tree->prand_state) > bud_die_chance) {
                meristem.state = DEAD;
            } else {
                meristem.state = ALIVE;
                
                glm_quat_rotatev(meristem.rotation, leaf_template_point_2, tmp);
                
                tmp[1] = 0.0f;
                
                if(glm_vec3_norm2(tmp) == 0) {
                    glm_vec3_copy(GLM_XUP, tmp);
                }
                
                glm_vec3_normalize(tmp);

                glm_quat_from_vecs(GLM_XUP, tmp, rotation);

                glm_quat_rotatev(rotation, leaf_template_point_1, p1);
                glm_quat_rotatev(rotation, leaf_template_point_2, p2);
                glm_quat_rotatev(rotation, leaf_template_point_3, p3);

                glm_vec3_add(meristem.translation, p1, p1);
                glm_vec3_add(meristem.translation, p2, p2);
                glm_vec3_add(meristem.translation, p3, p3);

                add_leaf(tree, create_leaf(p1, p2, p3));
            }
        }
    }
}

void update_meristems(Tree* tree) {
    uint32_t nodes_per_growth = tree->tree_settings->nodes_per_growth;
    float grow_distance = tree->tree_settings->grow_distance;
    float angle_between_nodes = tree->tree_settings->angle_between_nodes;

    // tropisms
    float gravity_tropism                = tree->tree_settings->gravity_tropism;
    float horizontal_when_shaded_tropism = tree->tree_settings->horizontal_when_shaded_tropism;
    float to_light_tropism               = tree->tree_settings->to_light_tropism;
    float random_tropism                 = tree->tree_settings->random_tropism;
    float twist_tropism                  = tree->tree_settings->twist_tropism;

    vec3 local_x_vector;
    vec3 local_y_vector;
    vec3 local_z_vector;

    vec3 offset_vector;

    vec3 growth_unit_vector = {0, grow_distance / nodes_per_growth, 0}; 

    vec3 growth_vector;
    vec3 gravity_tropism_vector = {0, gravity_tropism, 0};
    vec3 horizontal_when_shaded_tropism_vector = {0, 0, 0}; // not completely implemented
    vec3 to_light_tropism_vector = {0, 0, 0}; // unimplemented
    vec3 random_tropism_vector;
    vec3 twist_tropism_vector = {0, 0, 0}; // unimplemented

    
    size_t meristems_len = tree->meristems_len;
    Meristem meristem;
    vec3 new_meristem_translation;
    for(size_t i = 0; i < meristems_len; ++i) {
        meristem = tree->meristems[i];

        if(meristem.state == DEAD) {
            continue;
        }

        float angle = 0;
        for(int j = 0; j < nodes_per_growth; j++) {
            angle += angle_between_nodes;

            glm_quat_rotatev(meristem.rotation, GLM_XUP, local_x_vector);
            glm_quat_rotatev(meristem.rotation, GLM_YUP, local_y_vector);
            glm_quat_rotatev(meristem.rotation, GLM_ZUP, local_z_vector);

            glm_quat_rotatev(meristem.rotation, growth_unit_vector, growth_vector);

            horizontal_when_shaded_tropism_vector[0] = local_y_vector[0] * horizontal_when_shaded_tropism;
            horizontal_when_shaded_tropism_vector[2] = local_y_vector[2] * horizontal_when_shaded_tropism;

            glm_vec3_scale(local_x_vector, random_tropism, random_tropism_vector);
            glm_vec3_rotate(random_tropism_vector, (float) xoshiro256ss(&tree->prand_state), local_y_vector);

            // sum all vectors
            offset_vector[0] = growth_vector[0] + gravity_tropism_vector[0] + horizontal_when_shaded_tropism_vector[0] + to_light_tropism_vector[0] + random_tropism_vector[0] + twist_tropism_vector[0];
            offset_vector[1] = growth_vector[1] + gravity_tropism_vector[1] + horizontal_when_shaded_tropism_vector[1] + to_light_tropism_vector[1] + random_tropism_vector[1] + twist_tropism_vector[1];
            offset_vector[2] = growth_vector[2] + gravity_tropism_vector[2] + horizontal_when_shaded_tropism_vector[2] + to_light_tropism_vector[2] + random_tropism_vector[2] + twist_tropism_vector[2];

            offset_vector[0] /= 6.0;
            offset_vector[1] /= 6.0;
            offset_vector[2] /= 6.0;
            
            // get new position
            glm_vec3_add(meristem.translation, offset_vector, new_meristem_translation);

            // add new branch
            add_branch(tree, create_branch(
                meristem.translation,
                new_meristem_translation
            ));

            versor q1;
            glm_quatv(q1, angle, local_y_vector);
            versor q2;
            glm_quat_from_vecs(GLM_YUP, local_x_vector, q1);
            glm_quat_mul(q1, q2, q1);
            // add new bud
            add_meristem(tree, create_meristem(
                new_meristem_translation,
                q1,
                BUD
            ));

            glm_vec3_copy(new_meristem_translation, meristem.translation);
            glm_quat_from_vecs(GLM_YUP, offset_vector, meristem.rotation);
        }
        tree->meristems[i] = meristem;

        // printf("\tmeristem %d/%d\n", i + 1, meristems_len);
    }
}

void add_branch(Tree* tree, Branch branch) {
    if(tree->branches_len >= tree->branches_alloc_size) {
        tree->branches_alloc_size = tree->branches_alloc_size << 1;
        tree->branches = realloc(tree->branches, sizeof(Branch) * tree->branches_alloc_size);
    }
    
    // printf("adding branch, len %ld, alloc len %ld, ptr %p\n", tree->branches_len, tree->branches_alloc_size, tree->branches);

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

void add_leaf(Tree* tree, Leaf leaf) {
    if(tree->leaves_len >= tree->leaves_alloc_size) {
        tree->leaves_alloc_size = tree->leaves_alloc_size << 1;
        tree->leaves = realloc(tree->leaves, sizeof(Leaf) * tree->leaves_alloc_size);
    }

    tree->leaves[tree->leaves_len] = leaf;
    ++tree->leaves_len;
}

Tree copy_tree(Tree* tree) {
    Tree new_tree = *tree;
    
    new_tree.branches = malloc(sizeof(Branch) * tree->branches_alloc_size);
    new_tree.meristems = malloc(sizeof(Meristem) * tree->meristems_alloc_size);
    new_tree.leaves = malloc(sizeof(Leaf) * tree->meristems_alloc_size);
    
    memcpy(new_tree.branches, tree->branches, sizeof(Branch) * tree->branches_len);
    memcpy(new_tree.meristems, tree->meristems, sizeof(Meristem) * tree->meristems_len);
    memcpy(new_tree.leaves, tree->leaves, sizeof(Leaf) * tree->leaves_len);

    new_tree.bounding_volume_hierarchy = copy_bvh(&tree->bounding_volume_hierarchy);

    return new_tree;
}

void free_tree(Tree* tree) {
    free_bvh(&tree->bounding_volume_hierarchy);
    free(tree->branches);
    free(tree->meristems);
    free(tree->leaves);
}

#endif