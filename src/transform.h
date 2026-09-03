#ifndef TRANSFORM_H
#define TRANSFORM_H

#include <cglm/cglm.h>

typedef struct TreeTransform {
    vec3 translation;
    vec3 scale;
    versor rotation;
} TreeTransform;

#endif
