#include <raylib.h>

#include "display.h"

void debug_draw_bvh_node(BVHNode node, vec3 parent_transform) {
    float width  = node.aabb.end[0] - node.aabb.beginning[0];
    float height = node.aabb.end[1] - node.aabb.beginning[1];
    float depth  = node.aabb.end[2] - node.aabb.beginning[2];

    float center_x = node.aabb.beginning[0] + (width  / 2.0f);
    float center_y = node.aabb.beginning[1] + (height / 2.0f);
    float center_z = node.aabb.beginning[2] + (depth  / 2.0f);

    Vector3 center = {
        .x = center_x + parent_transform[0],
        .y = center_y + parent_transform[1],
        .z = center_z + parent_transform[2],
    };

    DrawCubeWires(center, width, height, depth, RED);
}

void debug_draw_bvh(BVH bvh, vec3 parent_transform) {
    for (size_t i = 0; i < bvh.array_length; i++) {
        debug_draw_bvh_node(bvh.array[i], parent_transform);
    }
}