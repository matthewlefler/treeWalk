#include <raymath.h>
#include <raylib.h>

#include "branch.h"
#include "meristem.h"

#include "tree.h"

#include "display.h"

void debug_draw_tree(Tree* tree) {
    for(size_t i = 0; i < tree->branches_len; ++i) {
        debug_draw_branch(tree->branches + i);
    }

    for(size_t i = 0; i < tree->meristems_len; ++i) {
        debug_draw_meristem(tree->meristems + i);
    }
}

void debug_draw_branch(Branch* branch_addr) {
    /*
    typedef struct Branch {
        Vector3 start_point;
        Vector3 end_point;
        size_t parent;
        size_t children_len;
        size_t* children;
        float length;
    } Branch;
    */
    Branch branch = *branch_addr;

    DrawLine3D(branch.start_point, branch.end_point, WHITE);
}

void debug_draw_meristem(Meristem* meristem_addr) {
    /*
    enum MeristemState {
        BUD,
        ALIVE,
        DEAD,
    };

    typedef struct Meristem {
        Transform transform;
        enum MeristemState state;
    } Meristem;
    */
    Meristem meristem = *meristem_addr;
    Color color = GREEN;
    if(meristem.state == DEAD) {
        color = RED;
    }
    if(meristem.state == BUD) {
        color = BLUE;
    }

    Vector3 offset = Vector3RotateByQuaternion((Vector3) {0, 0.1, 0}, meristem.transform.rotation);
    DrawLine3D(meristem.transform.translation, Vector3Add(meristem.transform.translation, offset), color);
}