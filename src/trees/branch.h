#ifndef BRANCH_H
#define BRANCH_H

#include <stdlib.h>

#include "../cglm/include/cglm/cglm.h"

typedef struct Branch {
    vec3 start_point;
    vec3 end_point;
    size_t parent; // index to parent
    size_t children_len; 
    size_t* children; // array of indices
    float length;
} Branch;

Branch create_branch(vec3 start, vec3 end);

#endif
