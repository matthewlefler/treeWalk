#ifndef AABB_H
#define AABB_H

#include <cglm/cglm.h>

#include "triangle.h"

// axis aligned bounding box
// rectangular prism from the point beginning to the point end
typedef struct AABB {
    vec3 beginning; // front lower left
    vec3 end;       // back upper right
} AABB;

AABB get_aabb(size_t triangle_array_len, Triangle triangle_array[triangle_array_len]);

int get_long_axis(AABB aabb);

#endif