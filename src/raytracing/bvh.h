#ifndef BVH_H
#define BVH_H

#include "aabb.h"
#include "triangle.h"

/**
 * a node in a BVH tree
 */
typedef struct BVHNode {
    AABB aabb;                              // axis aligned bounding box 
    size_t parent;                          // parent BVHNode index
    size_t left_child, right_child;         // child AABBs
    size_t geometry_begin, geometry_end;    // underlying geometry indices, only valid if `left_child == right_child == 0`
} BVHNode;

/**
 * A tree of BVH nodes
 */
typedef struct BVH {
    size_t root_node_index;         // index of root node
    BVHNode* array;                 // the array of nodes in an undefined order
    size_t array_length;            // the current lenght of the BVHNode array
    size_t array_allocated_length;  // the allocated length of the BVHNode array
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
 * @brief Inserts a new node into the `BVH` at the end of the array
 * 
 * @param bvh The tree
 * @param node The node to add
 * 
 * @return The index of new node
 */
size_t add_bvh_node(BVH* bvh, BVHNode node);

/**
 * @brief Copies a BVH so that no element is dependent on the input BVH 
 * 
 * @param bvh The BVH to copy
 * 
 * @return A new BVH that is a copy of the input
 */
BVH copy_bvh(BVH* bvh);

void free_bvh(BVH* bvh);

#endif