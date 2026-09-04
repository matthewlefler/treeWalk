#include <stdio.h>

#include <raylib.h>

#include "branch.h"
#include "meristem.h"

#include "tree.h"

#include "display.h"

void debug_draw_tree(Tree* tree) {
    TreeTransform tree_transform;

    glm_vec3_copy(tree->translation, tree_transform.translation);
    glm_vec3_copy(tree->rotation, tree_transform.rotation);
    glm_vec3_copy(tree->scale, tree_transform.scale);
    
    for(size_t i = 0; i < tree->branches_len; ++i) {
        debug_draw_branch(tree->branches + i, tree_transform);
    }

    for(size_t i = 0; i < tree->meristems_len; ++i) {
        debug_draw_meristem(tree->meristems + i, tree_transform);
    }

    for(size_t i = 0; i < tree->leaves_len; ++i) {
        debug_draw_leaf(tree->leaves + i, tree_transform);
    }

    // printf("draw done\n");
}

void debug_draw_branch(Branch* branch_addr, TreeTransform parent_transform) {
    /*
    typedef struct Branch {
        vec3 start_point;
        vec3 end_point;
        size_t parent;
        size_t children_len;
        size_t* children;
        float length;
    } Branch;
    */
    Branch branch = *branch_addr;
    
    vec3 p1; 
    vec3 p2;
    glm_quat_rotatev(parent_transform.rotation, branch.start_point, p1);
    glm_quat_rotatev(parent_transform.rotation, branch.end_point, p2);
    glm_vec3_add(p1, parent_transform.translation, p1);
    glm_vec3_add(p2, parent_transform.translation, p2);

    Vector3 ray_p1 = {
        .x = p1[0],
        .y = p1[1],
        .z = p1[2],
    };
    Vector3 ray_p2 = {
        .x = p2[0],
        .y = p2[1],
        .z = p2[2],
    };

    DrawLine3D(ray_p1, ray_p2, WHITE);
}

void debug_draw_meristem(Meristem* meristem_addr, TreeTransform parent_transform) {
    /*
    enum MeristemState {
        BUD,
        ALIVE,
        DEAD,
    };

    typedef struct Meristem {
        Transform transform;
        enum MeristemState state;
    } Meristem;
    */
    Meristem meristem = *meristem_addr;
    Color color = GREEN;
    if(meristem.state == DEAD) {
        color = RED;
    }
    if(meristem.state == BUD) {
        color = BLUE;
    }

    vec3 offset;
    glm_quat_rotatev(meristem.rotation, (vec3) {0, 0.1, 0}, offset);
    
    vec3 p1;
    vec3 p2;

    glm_vec3_add(meristem.translation, offset, p1);
    glm_quat_rotatev(parent_transform.rotation, p1, p1);
    glm_quat_rotatev(parent_transform.rotation, meristem.translation, p2);
    glm_vec3_add(p1, parent_transform.translation, p1);
    glm_vec3_add(p2, parent_transform.translation, p2);

    Vector3 ray_p1 = {
        .x = p1[0],
        .y = p1[1],
        .z = p1[2],
    };
    Vector3 ray_p2 = {
        .x = p2[0],
        .y = p2[1],
        .z = p2[2],
    };

    DrawLine3D(ray_p1, ray_p2, color);
}

void debug_draw_leaf(Leaf* leaf_addr, TreeTransform parent_transform) {
    vec3 p1;
    vec3 p2;
    vec3 p3;

    glm_quat_rotatev(parent_transform.rotation, leaf_addr->vertices[0], p1);
    glm_quat_rotatev(parent_transform.rotation, leaf_addr->vertices[1], p2);
    glm_quat_rotatev(parent_transform.rotation, leaf_addr->vertices[2], p3);

    glm_vec3_add(p1, parent_transform.translation, p1);
    glm_vec3_add(p2, parent_transform.translation, p2);
    glm_vec3_add(p3, parent_transform.translation, p3);

    Vector3 ray_p1 = {
        .x = p1[0],
        .y = p1[1],
        .z = p1[2],
    };
    Vector3 ray_p2 = {
        .x = p2[0],
        .y = p2[1],
        .z = p2[2],
    };
    Vector3 ray_p3 = {
        .x = p3[0],
        .y = p3[1],
        .z = p3[2],
    };

    DrawLine3D(ray_p1, ray_p2, DARKGREEN);
    DrawLine3D(ray_p2, ray_p3, DARKGREEN);
    DrawLine3D(ray_p3, ray_p1, DARKGREEN);
}
