#ifndef MAIN_C
#define MAIN_C

#include <stdio.h>
#include <stdlib.h>

#include <raylib.h>

#include "trees/tree.h"
#include "trees/display.h"

#include "utilities/logger/logger.h"

int main(int argc, char** argv)
{
    set_log_level(LOG_LEVEL_VERBOSE);

    load_settings("../data/trees/");    
    Tree tree = new_tree_from_name("test", 0x1ABC123115812754);

    size_t num = 5;
    Tree trees[num];
    for(size_t i = 0; i < num; ++i) {
        trees[i] = copy_tree(&tree);
        trees[i].translation[0] = i * i;
        update_tree(&tree);

        printf("gen tree iter: %ld\n", i);

        printf("\tleaf list len: %ld\n", trees[i].leaves_len);
        for(size_t j = 0; j < trees[i].meristems_len; ++j) {
            Meristem l1 = trees[i].meristems[j];
            for(size_t k = 0; k < trees[i].meristems_len; ++k) {
                if(k == j) {continue;}
                Meristem l2 = trees[i].meristems[k];
                if(
                    l1.translation[0] == l2.translation[0] &&
                    l1.translation[1] == l2.translation[1] &&
                    l1.translation[2] == l2.translation[2] &&
                    l1.rotation[0] == l2.rotation[0] &&
                    l1.rotation[1] == l2.rotation[1] &&
                    l1.rotation[2] == l2.rotation[2] &&
                    l1.rotation[3] == l2.rotation[3]
                ) {
                    printf("found duplicate meristem %ld, and %ld\n", j, k);
                }
            }
        }
        fflush(stdout);
    }

    InitWindow(800, 450, "raylib example - basic window");

    while (!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(BLACK);

            for (size_t i = 0; i < num; i++) {
                debug_draw_tree(trees + i);
            }
            
        EndDrawing();
    }

    CloseWindow();
}

#endif