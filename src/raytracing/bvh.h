#ifndef BVH_H
#define BVH_H

/**
 * https://jacco.ompf2.com/2022/04/13/how-to-build-a-bvh-part-1-basics/
 */

#include "aabb.h"
#include "triangle.h"

/**
 * a node in a BVH tree
 */
typedef struct BVHNode {
    AABB aabb;                              // axis aligned bounding box 
    size_t left_child, right_child;         // child AABBs
    size_t geometry_begin, geometry_length; // underlying geometry index and length, only valid if `geometry_length` is more than zero
} BVHNode;

/**
 * A tree of BVH nodes
 */
typedef struct BVH {
    size_t root_node_index;                     // index of root node
    size_t* indirection_array;                  // the array of index's to the underlying geometry indices, this is used so the original array is unmodified
    size_t indirection_array_length;            // the current length of the indirection array
    size_t indirection_array_allocated_length;  // the allocated length of the indirection array
    BVHNode* array;                             // the array of nodes in an undefined order
    size_t array_length;                        // the current length of the BVHNode array
    size_t array_allocated_length;              // the allocated length of the BVHNode array
} BVH;

/**
 * 
 */
BVH create_empty_bvh(void);

/**
 * 
 */
BVH build_bvh(size_t geometry_length, Triangle geometry[geometry_length]);

/**
 * @brief Copies a BVH so that no element is dependent on the input BVH 
 * 
 * @param bvh The BVH to copy
 * 
 * @return A new BVH that is a copy of the input
 */
BVH copy_bvh(BVH* bvh);

/**
 * frees allocated BVH memory
 */
void free_bvh(BVH* bvh);

/**
 * prints BVH stucture to stdout
 */
void debug_print_bvh(BVH* bvh);

#endif