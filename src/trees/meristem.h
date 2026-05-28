#ifndef MERISTEM_H
#define MERISTEM_H

#include <raymath.h>
#include <raylib.h>

enum MeristemState {
    BUD,
    ALIVE,
    DEAD,
};

typedef struct Meristem {
    Transform transform;
    enum MeristemState state;
} Meristem;

Meristem create_meristem(Vector3 position, Quaternion rotation, enum MeristemState state);

#endif 