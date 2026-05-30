#ifndef DISPLAY_C
#define DISPLAY_C

#include <stdio.h>

#include "../transform.h"

#include "branch.h"
#include "meristem.h"

#include "tree.h"

#include "display.h"

// void debug_draw_tree(Tree* tree) {
//     Transform tree_transform = tree->transform;
//     for(size_t i = 0; i < tree->branches_len; ++i) {
//         debug_draw_branch(tree->branches + i, tree_transform);
//     }

//     for(size_t i = 0; i < tree->meristems_len; ++i) {
//         debug_draw_meristem(tree->meristems + i, tree_transform);
//     }

//     for(size_t i = 0; i < tree->leaves_len; ++i) {
//         debug_draw_leaf(tree->leaves + i, tree_transform);
//     }

//     // printf("draw done\n");
// }

// void debug_draw_branch(Branch* branch_addr, Transform parent_transform) {
//     /*
//     typedef struct Branch {
//         vec3 start_point;
//         vec3 end_point;
//         size_t parent;
//         size_t children_len;
//         size_t* children;
//         float length;
//     } Branch;
//     */
//     Branch branch = *branch_addr;

//     vec3 p1 = Vector3Add(Vector3RotateByQuaternion(branch.start_point, parent_transform.rotation), parent_transform.translation);
//     vec3 p2 = Vector3Add(Vector3RotateByQuaternion(branch.end_point, parent_transform.rotation), parent_transform.translation);

//     DrawLine3D(p1, p2, WHITE);
// }

// void debug_draw_meristem(Meristem* meristem_addr, Transform parent_transform) {
//     /*
//     enum MeristemState {
//         BUD,
//         ALIVE,
//         DEAD,
//     };

//     typedef struct Meristem {
//         Transform transform;
//         enum MeristemState state;
//     } Meristem;
//     */
//     Meristem meristem = *meristem_addr;
//     Color color = GREEN;
//     if(meristem.state == DEAD) {
//         color = RED;
//     }
//     if(meristem.state == BUD) {
//         color = BLUE;
//     }

//     vec3 offset = Vector3RotateByQuaternion((vec3) {0, 0.1, 0}, meristem.transform.rotation);
    
//     vec3 p1 = Vector3Add(Vector3RotateByQuaternion(meristem.transform.translation, parent_transform.rotation), parent_transform.translation);
//     vec3 p2 = Vector3Add(Vector3RotateByQuaternion(Vector3Add(meristem.transform.translation, offset), parent_transform.rotation), parent_transform.translation);

//     // printf("(%f, %f, %f) -> (%f, %f, %f)\n", 
//     //     p1.x, p1.y, p1.z,
//     //     p2.x, p2.y, p2.z
//     // );

//     DrawLine3D(p1, p2, color);
// }

// void debug_draw_leaf(Leaf* leaf_addr, Transform parent_transform) {
//     vec3 p1 = Vector3Add(Vector3RotateByQuaternion(leaf_addr->points[0], parent_transform.rotation), parent_transform.translation);
//     vec3 p2 = Vector3Add(Vector3RotateByQuaternion(leaf_addr->points[1], parent_transform.rotation), parent_transform.translation);
//     vec3 p3 = Vector3Add(Vector3RotateByQuaternion(leaf_addr->points[2], parent_transform.rotation), parent_transform.translation);

//     // printf("drawing leaf: p1 (%f, %f, %f) p2 (%f, %f, %f) p3 (%f, %f, %f)\n",
//     //     p1.x, p1.y, p1.z,
//     //     p2.x, p2.y, p2.z,
//     //     p3.x, p3.y, p3.z
//     // );

//     DrawLine3D(p1, p2, DARKGREEN);
//     DrawLine3D(p2, p3, DARKGREEN);
//     DrawLine3D(p3, p1, DARKGREEN);
// }

#endif
