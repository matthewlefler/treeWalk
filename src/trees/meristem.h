#ifndef MERISTEM_H
#define MERISTEM_H

#include <cglm/cglm.h>

enum MeristemState {
    BUD,
    ALIVE,
    DEAD,
};

typedef struct Meristem {
    vec3 translation;
    vec4 rotation;
    enum MeristemState state;
} Meristem;

Meristem create_meristem(vec3 translation, vec4 rotation, enum MeristemState state);

#endif 