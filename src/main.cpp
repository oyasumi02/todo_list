#include <iostream>
#include <raylib.h>
#include "../includes/font/font.hpp"

int main() {

    const int scrw = 1600;
    const int scrh = 800;

    InitWindow(scrw, scrh, "A Window!");

    Texture2D devbox = LoadTexture("../texture/dev_textures/devbox_64x64.png");

    SetTargetFPS(165);

    // :: Initialize ::

    // -- Load Fonts --
    Fonts fonts;
    fonts.LoadFonts();

    while (!WindowShouldClose()) {
        // :: UPDATE ::

        // :: DRAW ::
        BeginDrawing();
        {
            ClearBackground(BLACK);
            DrawTextEx(fonts.BoldPixels(), "This is a test!", (Vector2){400, 400}, 32, 2, WHITE);
        }
        EndDrawing();
    }

    // Unload Sector
    // fonts.UnloadFonts();
    UnloadTexture(devbox);
    CloseWindow();

    return 0;
}