#include <iostream>
#include <raylib.h>
#include "../includes/font/font.hpp"
#include "../includes/texture/load_textures.hpp"
#include "../includes/program/screen_state.hpp"

int main() {

    const int scrw = 1600;
    const int scrh = 800;

    // :: Initialize ::
    InitWindow(scrw, scrh, "To-Do List");
    SetTargetFPS(165);
    ScreenState screen_state = ScreenState::TODO_LIST;

    // -- Load Fonts --
    Fonts fonts;
    fonts.LoadFonts();

    // -- Load Textures --
    TextureHandler texture_handler;
    texture_handler.Initialize();

    while (!WindowShouldClose()) {
        // :: UPDATE ::
        // TODO: Make switch states
        
        // :: DRAW ::
        BeginDrawing();
        {
            switch (screen_state) {
                case (ScreenState::TODO_LIST): {

                } break;

                case (ScreenState::DEBUG): {

                } break;

                case (ScreenState::QUIT): {

                } break;
            }
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