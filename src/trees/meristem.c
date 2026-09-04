#include <cglm/cglm.h>

#include "meristem.h"

Meristem create_meristem(vec3 translation, versor rotation, enum MeristemState state) {
    Meristem meristem;

    meristem.state = state;

    glm_vec3_copy(translation, meristem.translation);
    glm_quat_copy(rotation, meristem.rotation);

    return meristem;
}
