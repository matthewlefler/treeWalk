#ifndef TRANSFORM_H
#define TRANSFORM_H

#include "cglm/include/cglm/cglm.h"

typedef struct Transform {
    versor rotation;
    vec3 translation;
    vec3 scale;
} Transform;

#endif
