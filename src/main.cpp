#include <iostream>
#include <raylib.h>
#include "../includes/font/font.hpp"
#include "../includes/texture/load_textures.hpp"

int main() {

    const int scrw = 1600;
    const int scrh = 800;

    InitWindow(scrw, scrh, "A Window!");

    SetTargetFPS(165);

    // :: Initialize ::

    // -- Load Fonts --
    Fonts fonts;
    fonts.LoadFonts();

    TextureHandler texture_handler;
    texture_handler.Initialize();

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
    texture_handler.DeInitialize();
    CloseWindow();

    return 0;
}