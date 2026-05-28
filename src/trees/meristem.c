#ifndef MERISTEM_C
#define MERISTEM_C

#include <raymath.h>

#include "meristem.h"

Meristem create_meristem(Vector3 position, Quaternion rotation, enum MeristemState state) {
    Meristem meristem = {
        .state = state,

        .transform = {
            .rotation = rotation,
            .translation = position,
            .scale = {1, 1, 1},
        }
    };

    return meristem;
}

#endif