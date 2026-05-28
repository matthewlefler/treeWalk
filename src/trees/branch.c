#ifndef BRANCH_C
#define BRANCH_C

#include "branch.h"

#include <raylib.h>
#include <raymath.h>

Branch create_branch(Vector3 start, Vector3 end) {
    float length = Vector3Length(Vector3Subtract(end, start));

    Branch branch = {
        .start_point = start,
        .end_point = end,
        .length = length,
    };
    
    return branch;
}

#endif
