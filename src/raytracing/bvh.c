#include <stdlib.h>
#include <string.h>

#include "../utilities/logger/logger.h"

#include "bvh.h"
#include "triangle.h"

const size_t INIT_BVH_ALLOC_SIZE = 100;

BVH create_empty_bvh(void) {
    return (BVH) {
        .array = NULL,
        .array_allocated_length = 0,
        .array_length = 0,
        .root_node_index = 0
    };
}

BVH build_bvh(size_t geometry_length, Triangle geometry[geometry_length]) {
    // calc centroids
    vec3* triangle_centriods = malloc(sizeof(vec3) * geometry_length);
    float center_x;
    float center_y;
    float center_z;
    for (size_t i = 0; i < geometry_length; i++) {
        center_x = (geometry[i].vertices[0][0] + geometry[i].vertices[1][0] + geometry[i].vertices[2][0]) / 3.0f;
        center_y = (geometry[i].vertices[0][1] + geometry[i].vertices[1][1] + geometry[i].vertices[2][1]) / 3.0f;
        center_z = (geometry[i].vertices[0][2] + geometry[i].vertices[1][2] + geometry[i].vertices[2][2]) / 3.0f;

        triangle_centriods[i][0] = center_x;
        triangle_centriods[i][1] = center_y;
        triangle_centriods[i][2] = center_z;
    }

    BVH bvh = {
        .root_node_index = 0,
        .array = malloc(sizeof(BVHNode) * INIT_BVH_ALLOC_SIZE),
        .array_length = 0,
        .array_allocated_length = INIT_BVH_ALLOC_SIZE,
    };

    // root node
    add_bvh_node(&bvh, (BVHNode) { 
        .aabb = get_aabb(geometry_length, geometry),
        .geometry_begin = 0,
        .geometry_end = geometry_length,
        .left_child = 0,
        .right_child = 0,
        .parent = 0
    });

    size_t stack_alloc_size = 100;
    size_t stack_size = 1;
    size_t* stack = malloc(sizeof(size_t) * stack_alloc_size);
    stack[0] = bvh.root_node_index; 

    size_t minimum_triangles = 1;

    //  let stack = init_bvh_node
    //  while stack not empty:
    //      pop
    //      get split plane
    //      split array
    //      for child in children:
    //          if requirement not met:
    //              add child to stack 
    size_t index;
    BVHNode node;
    while(stack_size > 0) {
        index = stack[--stack_size];
        node = bvh.array[index];

        // split plane
        // long axis / 2
        int long_axis = get_long_axis(node.aabb); // 0 for x, 1 for y, 2 for z
        float pivot = node.aabb.beginning[long_axis] + (node.aabb.end[long_axis] - node.aabb.beginning[long_axis]);
        size_t larger_elements_start_index = 0;
        for (size_t i = node.geometry_begin; i < node.geometry_end; i++) {
            if(triangle_centriods[i][long_axis] < pivot) {
                //swap i and larger_elements_start_index
                glm_vec3_swap(triangle_centriods[i], triangle_centriods[larger_elements_start_index + node.geometry_begin]);
                glm_vec3_swap(geometry[i].vertices[0], geometry[larger_elements_start_index + node.geometry_begin].vertices[0]);
                glm_vec3_swap(geometry[i].vertices[1], geometry[larger_elements_start_index + node.geometry_begin].vertices[1]);
                glm_vec3_swap(geometry[i].vertices[2], geometry[larger_elements_start_index + node.geometry_begin].vertices[2]);

                ++larger_elements_start_index;
            }
        }

        BVHNode left = {
            .aabb = get_aabb(larger_elements_start_index, &geometry[node.geometry_begin]),
            .geometry_begin = node.geometry_begin,
            .geometry_end = node.geometry_begin + larger_elements_start_index,
            .parent = index,
            .left_child = 0,
            .right_child = 0
        };
        BVHNode right = {
            .aabb = get_aabb(larger_elements_start_index, &geometry[node.geometry_begin + larger_elements_start_index]),
            .geometry_begin = node.geometry_begin + larger_elements_start_index,
            .geometry_end = node.geometry_end,
            .parent = index,
            .left_child = 0,
            .right_child = 0
        };
        
        size_t left_index = add_bvh_node(&bvh, left);
        size_t right_index = add_bvh_node(&bvh, right);
        node.left_child = left_index;
        node.right_child = right_index;

        if((left.geometry_end - left.geometry_begin) > minimum_triangles) {
            // add to stack
            if(stack_size >= stack_alloc_size) {
                stack_alloc_size = stack_alloc_size << 1;
                stack = realloc(stack, stack_alloc_size);
            }

            stack[stack_size] = left_index;
            ++stack_size;
        }
        if((right.geometry_end - right.geometry_begin) > minimum_triangles) {
            // add to stack
            if(stack_size >= stack_alloc_size) {
                stack_alloc_size = stack_alloc_size << 1;
                stack = realloc(stack, stack_alloc_size);
            }

            stack[stack_size] = right_index;
            ++stack_size;
        }
    }

    free(stack);
    free(triangle_centriods);

    return bvh;
}

size_t add_bvh_node(BVH* bvh, BVHNode node) {
    if(bvh->array_allocated_length <= bvh->array_length) {
        bvh->array_allocated_length = bvh->array_allocated_length << 1;
        bvh->array = realloc(bvh->array, sizeof(BVHNode) * bvh->array_allocated_length);
    }

    bvh->array[bvh->array_length] = node;
    ++bvh->array_length;

    return bvh->array_length;
}

BVH copy_bvh(BVH* bvh) {
    BVH new_bvh = *bvh;

    new_bvh.array = malloc(sizeof(BVHNode) * bvh->array_allocated_length);

    memcpy(new_bvh.array, bvh->array, sizeof(BVHNode) * bvh->array_length);

    return new_bvh;
}

void free_bvh(BVH* bvh) {
    free(bvh->array);
}
