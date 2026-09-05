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

AABB get_aabb_with_indirection(size_t indirection_array_start, size_t indirection_array_len, size_t indirection_array[], Triangle triangle_array[]);

int get_long_axis(AABB aabb);

#endif