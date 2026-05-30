#ifndef LEAF_C
#define LEAF_C

#include "leaf.h"

Leaf create_leaf(vec3 p1, vec3 p2, vec3 p3) {
    Leaf leaf;

    glm_vec3_copy(p1, leaf.points[0]);
    glm_vec3_copy(p2, leaf.points[1]);
    glm_vec3_copy(p3, leaf.points[2]);

    return leaf;
}

// float Determinant(vec3 c0, vec3 c1, vec3 c2)
// {
//     float d00 = c0.x * (c1.y * c2.z - c1.z * c2.y);
//     float d01 = c1.x * (c0.y * c2.z - c0.z * c2.y);
//     float d02 = c2.x * (c0.y * c1.z - c0.z * c1.y);
//     return d00 - d01 + d02;
// }

// float Ax = -Qx;
// float Ay = -Qy;
// float Az = -Qz;
// float Bx = P1x - P0x;
// float Bx = P1y - P0y;
// float Bx = P1z - P0z;
// float Cx = P2x - P0x;
// float Cx = P2y - P0y;
// float Cx = P2z - P0z;
// float Dx = Sx - P0x;
// float Dx = Sy - P0y;
// float Dx = Sz - P0z;

// bool ray_intersect_tri() {
    
// }

void update_light(size_t leaves_len, Leaf* leaves) {
    for(size_t i = 0; i < leaves_len; ++i) {
        Leaf leaf = leaves[i];
    }
}

#endif