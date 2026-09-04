#ifndef RAYTRACING_DISPLAY_H
#define RAYTRACING_DISPLAY_H

#include <cglm/cglm.h>

#include "bvh.h"

void debug_draw_bvh(BVH bvh, vec3 parent_transform);

#endif
