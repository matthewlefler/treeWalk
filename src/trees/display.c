#include <stdio.h>

#include <raymath.h>
#include <raylib.h>

#include "branch.h"
#include "meristem.h"

#include "tree.h"

#include "display.h"

void debug_draw_tree(Tree* tree) {
    Transform tree_transform = tree->transform;
    for(size_t i = 0; i < tree->branches_len; ++i) {
        debug_draw_branch(tree->branches + i, tree_transform);
    }

    for(size_t i = 0; i < tree->meristems_len; ++i) {
        debug_draw_meristem(tree->meristems + i, tree_transform);
    }

    // printf("draw done\n");
}

void debug_draw_branch(Branch* branch_addr, Transform parent_transform) {
    /*
    typedef struct Branch {
        Vector3 start_point;
        Vector3 end_point;
        size_t parent;
        size_t children_len;
        size_t* children;
        float length;
    } Branch;
    */
    Branch branch = *branch_addr;

    Vector3 p1 = Vector3Add(Vector3RotateByQuaternion(branch.start_point, parent_transform.rotation), parent_transform.translation);
    Vector3 p2 = Vector3Add(Vector3RotateByQuaternion(branch.end_point, parent_transform.rotation), parent_transform.translation);

    DrawLine3D(p1, p2, WHITE);
}

void debug_draw_meristem(Meristem* meristem_addr, Transform parent_transform) {
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

    Vector3 offset = Vector3RotateByQuaternion((Vector3) {0, 0.1, 0}, meristem.transform.rotation);
    
    Vector3 p1 = Vector3Add(Vector3RotateByQuaternion(meristem.transform.translation, parent_transform.rotation), parent_transform.translation);
    Vector3 p2 = Vector3Add(Vector3RotateByQuaternion(Vector3Add(meristem.transform.translation, offset), parent_transform.rotation), parent_transform.translation);

    // printf("(%f, %f, %f) -> (%f, %f, %f)\n", 
    //     p1.x, p1.y, p1.z,
    //     p2.x, p2.y, p2.z
    // );

    DrawLine3D(p1, p2, color);
}