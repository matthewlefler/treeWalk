#include <stdlib.h>
#include <string.h>

#include "../utilities/logger/logger.h"

#include "bvh.h"
#include "triangle.h"

const size_t INIT_BVH_ALLOC_SIZE = 100;

size_t add_bvh_node(BVH* bvh, BVHNode node) {
    if(bvh->array_allocated_length <= bvh->array_length) {
        bvh->array_allocated_length = bvh->array_allocated_length << 1;
        bvh->array = realloc(bvh->array, sizeof(BVHNode) * bvh->array_allocated_length);
    }

    bvh->array[bvh->array_length] = node;
    ++bvh->array_length;

    return bvh->array_length - 1;
}

BVH create_empty_bvh(void) {
    return (BVH) {
        .array = NULL,
        .array_allocated_length = 0,
        .array_length = 0,
        .root_node_index = 0,
        .indirection_array = NULL,
        .indirection_array_length = 0,
        .indirection_array_allocated_length = 0
    };
}

BVH build_bvh(size_t geometry_length, Triangle geometry[geometry_length]) {
    printf("creating bvh: geometry_length: %ld\n", geometry_length);
    if(geometry_length <= 0) {
        printf("returning empty bvh\n");
        return create_empty_bvh();
    }
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

        printf("(%f %f %f) ", center_x, center_y, center_z);
    }
    printf("\n");

    size_t* indirection_array = malloc(sizeof(size_t) * geometry_length);
    for (size_t i = 0; i < geometry_length; i++) {
        indirection_array[i] = i;
    }
    
    BVH bvh = {
        .root_node_index = 0,
        .array = malloc(sizeof(BVHNode) * INIT_BVH_ALLOC_SIZE),
        .array_length = 0,
        .array_allocated_length = INIT_BVH_ALLOC_SIZE,

        .indirection_array = indirection_array,
        .indirection_array_length = geometry_length,
        .indirection_array_allocated_length = geometry_length
    };

    // root node
    size_t root_index = add_bvh_node(&bvh, (BVHNode) { 
        .aabb = get_aabb(geometry_length, geometry),
        .geometry_begin = 0,
        .geometry_length = geometry_length,
        .left_child = 0,
        .right_child = 0
    });

    printf("root_index: %ld\n", root_index);

    size_t stack_alloc_size = 100;
    size_t stack_size = 1;
    size_t* stack = malloc(sizeof(size_t) * stack_alloc_size);
    stack[0] = bvh.root_node_index; 

    size_t minimum_triangles = 2;

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
        printf("begin stack_size %ld alloc'ed %ld\n", stack_size, stack_alloc_size);        

        index = stack[--stack_size];
        printf("getting index %ld\n", index);
        node = bvh.array[index];

        // split plane
        // long axis / 2
        int long_axis = get_long_axis(node.aabb); // 0 for x, 1 for y, 2 for z
        float pivot = node.aabb.beginning[long_axis] + (node.aabb.end[long_axis] - node.aabb.beginning[long_axis]) / 2.0f;
        size_t larger_elements_start_index = 0;

        printf("long_axis: %d, pivot: %f", long_axis, pivot);
        printf("\tleft,  b: %ld l: %ld, l_child: %ld r_child: %ld\n", node.geometry_begin, node.geometry_length, node.left_child, node.right_child);
        printf("\taabb begin (%f, %f, %f) end (%f, %f, %f)\n",
            node.aabb.beginning[0], node.aabb.beginning[0], node.aabb.beginning[0],
            node.aabb.end[0], node.aabb.end[0], node.aabb.end[0]
        );

        // pivot sort
        // values smaller than pivot go on the left, larger on the right 
        for (size_t i = 0; i < node.geometry_length; i++) {
            size_t index = indirection_array[node.geometry_begin + i];
            if(triangle_centriods[index][long_axis] < pivot) {
                //swap i and larger_elements_start_index
                size_t tmp = indirection_array[node.geometry_begin + i];
                indirection_array[node.geometry_begin + i] = indirection_array[index];
                indirection_array[index] = tmp;

                ++larger_elements_start_index;
            }
        }

        for (size_t i = 0; i < node.geometry_length; i++) {
            printf("%f, ", triangle_centriods[indirection_array[node.geometry_begin + i]][long_axis]);
        }
        printf("\n");
        
        BVHNode left = {
            .aabb = get_aabb_with_indirection(node.geometry_begin, larger_elements_start_index, indirection_array, geometry),
            .geometry_begin = node.geometry_begin,
            .geometry_length = larger_elements_start_index,
            .left_child = 0,
            .right_child = 0
        };
        BVHNode right = {
            .aabb = get_aabb_with_indirection(node.geometry_begin + larger_elements_start_index, node.geometry_length - larger_elements_start_index, indirection_array, geometry),
            .geometry_begin = node.geometry_begin + larger_elements_start_index,
            .geometry_length = node.geometry_length - larger_elements_start_index,
            .left_child = 0,
            .right_child = 0
        };

        printf("\tleft,  b: %ld l: %ld", left.geometry_begin, left.geometry_length);
        printf(",\t (%f, %f, %f) -> (%f, %f, %f)\n", 
            left.aabb.beginning[0], left.aabb.beginning[1], left.aabb.beginning[2],
            left.aabb.end[0], left.aabb.end[1], left.aabb.end[2]
        );
        printf("\tright, b: %ld l: %ld", right.geometry_begin, right.geometry_length);
        printf(",\t (%f, %f, %f) -> (%f, %f, %f)\n", 
            left.aabb.beginning[0], left.aabb.beginning[1], left.aabb.beginning[2],
            right.aabb.end[0], right.aabb.end[1], right.aabb.end[2]
        );

        if(left.geometry_length <= 0 || right.geometry_length <= 0) {
            // skip this split
            continue;
        }
        
        size_t left_index = add_bvh_node(&bvh, left);
        size_t right_index = add_bvh_node(&bvh, right);
        printf("left_index %ld right_index %ld\n", left_index, right_index);
        bvh.array[index].left_child = left_index;
        bvh.array[index].right_child = right_index;
        bvh.array->geometry_length = 0;

        // add to stack
        if(stack_size + 1 >= stack_alloc_size) {
            stack_alloc_size = stack_alloc_size << 1;
            stack = realloc(stack, stack_alloc_size);
        }

        stack[stack_size    ] = left_index;
        stack[stack_size + 1] = right_index;
        stack_size += 2;
        printf("end stack_size %ld alloc'ed %ld\n", stack_size, stack_alloc_size);

    }

    free(stack);
    free(triangle_centriods);

    return bvh;
}

BVH copy_bvh(BVH* bvh) {
    BVH new_bvh = *bvh;

    new_bvh.array = malloc(sizeof(BVHNode) * bvh->array_allocated_length);
    new_bvh.indirection_array = malloc(sizeof(size_t) * bvh->indirection_array_allocated_length);

    memcpy(new_bvh.array, bvh->array, sizeof(BVHNode) * bvh->array_length);
    memcpy(new_bvh.array, bvh->indirection_array, sizeof(size_t) * bvh->indirection_array_length);

    return new_bvh;
}

void free_bvh(BVH* bvh) {
    free(bvh->array);
    free(bvh->indirection_array);
}

void debug_print_bvh_node(BVH* bvh, size_t index, size_t depth) {
    BVHNode node = bvh->array[index];

    printf("%ld: ", depth);
    for (size_t i = 0; i < depth; i++) {
        printf("\t");
    }

    printf("(%f, %f, %f) -> (%f, %f, %f) | start: %ld len: %ld\n", 
        node.aabb.beginning[0], node.aabb.beginning[1], node.aabb.beginning[2], 
        node.aabb.end[0], node.aabb.end[1], node.aabb.end[2],
        node.geometry_begin, node.geometry_length
    );
    
    if(node.geometry_length == 0) {
        debug_print_bvh_node(bvh, node.left_child, depth + 1);
        debug_print_bvh_node(bvh, node.right_child, depth + 1);
    }
}

void debug_print_bvh(BVH* bvh) {
    debug_print_bvh_node(bvh, bvh->root_node_index, 0);
}