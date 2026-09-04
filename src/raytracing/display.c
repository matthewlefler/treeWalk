#include <raylib.h>

#include "display.h"

void debug_draw_bvh_node(BVHNode node, vec3 parent_transform) {
    float center_x = (node.aabb.end[0] - node.aabb.beginning[0]) / 2.0f;
    float center_y = (node.aabb.end[1] - node.aabb.beginning[1]) / 2.0f;
    float center_z = (node.aabb.end[2] - node.aabb.beginning[2]) / 2.0f;

    float width  = node.aabb.end[0] - node.aabb.beginning[0];
    float height = node.aabb.end[1] - node.aabb.beginning[1];
    float depth  = node.aabb.end[2] - node.aabb.beginning[2];

    Vector3 center = {
        .x = center_x + parent_transform[0],
        .y = center_y + parent_transform[1],
        .z = center_z + parent_transform[2],
    };

    DrawCubeWires(center, width, height, depth, RED);
}

void debug_draw_bvh(BVH bvh, vec3 parent_transform) {
    printf("len: %ld\n", bvh.array_length);
    fflush(stdout);
    for (size_t i = 0; i < bvh.array_length; i++) {
        debug_draw_bvh_node(bvh.array[i], parent_transform);
    }
}