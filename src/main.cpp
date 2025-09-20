#include <iostream>
#include <raylib.h>

int main() {

    const int scrw = 1600;
    const int scrh = 800;

    InitWindow(scrw, scrh, "A Window!");

    Texture2D devbox = LoadTexture("../texture/dev_textures/devbox_64x64.png");

    SetTargetFPS(165);


    while (!WindowShouldClose()) {
        // :: UPDATE ::

        // :: DRAW ::
        BeginDrawing();
        {
            ClearBackground(BLACK);
            DrawTexture(devbox, scrw/2 - devbox.width/2, scrh/2 - devbox.height/2, WHITE);
            DrawText("This is text", 100, 200, 20, WHITE);
        }
        EndDrawing();
    }

    UnloadTexture(devbox);
    CloseWindow();

    return 0;
}