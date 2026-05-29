#ifndef MAIN_C
#define MAIN_C

#include <stdio.h>

#include <raylib.h>

#include "trees/tree.h"
#include "trees/display.h"

int main(int argc, char** argv)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1600;
    const int screenHeight = 900;

    InitWindow(screenWidth, screenHeight, "raylib - basic window");

    SetTargetFPS(165);               // Set our game to run at 60 frames-per-second

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
    
    DisableCursor();

    load_settings("data/trees/");    
    Tree tree = new_tree_from_name("test", 0x1ABC123115812754);

    size_t num = 8;
    Tree trees[num];
    for(size_t i = 0; i < num; ++i) {
        trees[i] = copy_tree(&tree);
        trees[i].transform.translation.x = i * 5;
        update_tree(&tree);
        printf("gen tree iter: %d\n", i);
        fflush(stdout);
    }
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
        UpdateCamera(&camera, CAMERA_FIRST_PERSON);

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(BLACK);

                DrawText(TextFormat("fps: %i", GetFPS()), 10, 10, 20, WHITE);

                BeginMode3D(camera);

                    DrawLine3D(zero, x, RED); 
                    DrawLine3D(zero, y, GREEN); 
                    DrawLine3D(zero, z, BLUE);

                    for(size_t i = 0; i < num; ++i) {
                        debug_draw_tree(&trees[i]);
                    }

                EndMode3D();

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    free_tree_settings();
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

#endif