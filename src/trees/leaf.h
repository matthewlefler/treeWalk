#ifndef LEAF_H
#define LEAF_H

#include "../../cglm/include/cglm/cglm.h"

typedef struct Leaf {
    vec3 points[3];
} Leaf;

Leaf create_leaf(vec3 p1, vec3 p2, vec3 p3);

void update_light(size_t leaves_len, Leaf* leaves);

#endif