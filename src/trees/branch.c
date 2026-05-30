#ifndef BRANCH_C
#define BRANCH_C

#include "branch.h"

#include "../cglm/include/cglm/cglm.h"

Branch create_branch(vec3 start, vec3 end) {
    float length = glm_vec3_distance(end, start);

    Branch branch;
    branch.length = length;

    glm_vec3_copy(end, branch.end_point);
    glm_vec3_copy(start, branch.start_point);
    
    return branch;
}

#endif
