#include "aabb.h"

AABB get_aabb(size_t triangle_array_len, Triangle triangle_array[triangle_array_len]) {
    float max_x;
    float max_y;
    float max_z;

    float min_x;
    float min_y;
    float min_z;

    float x;
    float y;
    float z;
    Triangle tri;
    for (size_t i = 0; i < triangle_array_len; i++) {
        tri = triangle_array[i];
        for (size_t j = 0; j < 3; j++) {
            x = tri.vertices[j][0];
            y = tri.vertices[j][1];
            z = tri.vertices[j][2];

            if(x > max_x) { max_x = x; }
            if(y > max_y) { max_y = y; }
            if(z > max_z) { max_z = z; }

            if(x < min_x) { min_x = x; }
            if(y < min_y) { min_y = y; }
            if(z < min_z) { min_z = z; }
        }
    }
    
    return (AABB) {
        .beginning = {min_x, min_y, min_z},
        .end       = {max_x, max_y, max_z}
    };
}

int get_long_axis(AABB aabb) {
    float dx = aabb.end[0] - aabb.beginning[0]; // should be positive
    float dy = aabb.end[1] - aabb.beginning[1];
    float dz = aabb.end[2] - aabb.beginning[2];

    if(dx > dy && dx > dz) {
        return 0;
    }
    if(dy > dz) {
        return 1;
    }
    return 2;
}