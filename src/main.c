#ifndef MAIN_C
#define MAIN_C

#include <stdio.h>
#include <stdlib.h>

#include <raylib.h>

#include "trees/tree.h"
#include "trees/display.h"

#include "raytracing/display.h"

#include "utilities/logger/logger.h"

int main(int argc, char** argv)
{
    set_log_level(LOG_LEVEL_VERBOSE);

    load_settings("../data/trees/");    
    Tree tree = new_tree_from_name("test", 0x1ABC123115812754);

    size_t num = 7;
    Tree trees[num];
    for(size_t i = 0; i < num; ++i) {
        trees[i] = copy_tree(&tree);
        trees[i].translation[0] = i * 3;

        update_tree(&tree);

        printf("gen tree iter: %ld\n", i);

        printf("\tleaf list len: %ld\n", trees[i].leaves_len);
        for(size_t j = 0; j < trees[i].meristems_len; ++j) {
            Meristem l1 = trees[i].meristems[j];
            // for(size_t k = 0; k < trees[i].meristems_len; ++k) {
            //     if(k == j) {continue;}
            //     Meristem l2 = trees[i].meristems[k];
            //     if(
            //         l1.translation[0] == l2.translation[0] &&
            //         l1.translation[1] == l2.translation[1] &&
            //         l1.translation[2] == l2.translation[2] &&
            //         l1.rotation[0] == l2.rotation[0] &&
            //         l1.rotation[1] == l2.rotation[1] &&
            //         l1.rotation[2] == l2.rotation[2] &&
            //         l1.rotation[3] == l2.rotation[3]
            //     ) {
            //         printf("found duplicate meristem %ld, and %ld\n", j, k);
            //     }
            // }
        }
        fflush(stdout);
    }

    // create camera object
    Camera camera = { 0 };
    camera.position = (Vector3){ 0.0f, 2.0f, -1.0f };
    camera.target = (Vector3){ 0.0f, 0.0f, 0.0f };
    camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };
    camera.fovy = 90.0f;
    
    Vector3 zero = (Vector3) {-2, 0, 0};
    Vector3 x = (Vector3) {-1, 0, 0};
    Vector3 y = (Vector3) {-2, 1, 0};
    Vector3 z = (Vector3) {-2, 0, 1};

    InitWindow(1600, 1000, "TreeWalk | raylib");

    DisableCursor();
    while (!WindowShouldClose()) {        
        UpdateCamera(&camera, CAMERA_FIRST_PERSON);
        
        //----------------------------------------------------------------------------------
        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();
 
            ClearBackground(BLACK);
 
                DrawText(TextFormat("fps: %i", GetFPS()), 10, 10, 20, WHITE);
 
                BeginMode3D(camera);
 
                    DrawLine3D(zero, x, RED);
                    DrawLine3D(zero, y, GREEN);
                    DrawLine3D(zero, z, BLUE);

                    for (size_t i = 0; i < num; i++) {
                        debug_draw_tree(&trees[i]);
                        debug_draw_bvh(trees[i].bounding_volume_hierarchy, trees[i].translation);
                    }
                       
 
                EndMode3D();
 
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    CloseWindow();

    for (size_t i = 0; i < num; i++) {
        free_tree(trees + i);
    }

    free_tree(&tree);

    free_tree_settings();
}

#endif