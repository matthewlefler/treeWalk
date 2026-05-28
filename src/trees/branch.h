#ifndef BRANCH_H
#define BRANCH_H

#include <stdlib.h>

#include <raylib.h>

typedef struct Branch {
    Vector3 start_point;
    Vector3 end_point;
    size_t parent;
    size_t children_len;
    size_t* children;
    float length;
} Branch;

Branch create_branch(Vector3 start, Vector3 end);

#endif
