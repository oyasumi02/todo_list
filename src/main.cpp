#include <iostream>
#include <raylib.h>
#include "../includes/program/window.hpp"
#include "../includes/font/font.hpp"
#include "../includes/program/screen_state.hpp"
#include "../includes/texture/texture_handler.hpp"
#include "../includes/gui/draw_screen.hpp"

int main() {

    // :: Initialize ::
    // -- Variables --
    InitWindow(SCRW, SCRH, "To-Do List");
    SetTargetFPS(165);
    ScreenState screen_state = ScreenState::DEBUG;
    Vector2 mouse_point = {0.0f, 0.0f};

    // -- Load Fonts --
    Fonts fonts;
    fonts.LoadFonts();

    // -- Load Textures --
    texture_handler.Initialize();

    while (!WindowShouldClose()) {
        // :: UPDATE ::
        // -- Variable updates --
        mouse_point = GetMousePosition();

        // TODO: Make switch states
        
        // :: DRAW ::
        BeginDrawing();
        {
            switch (screen_state) {
                case (ScreenState::TODO_LIST): {
                    
                } break;

                case (ScreenState::DEBUG): {
                    DrawScreen::DrawTodoList(mouse_point);
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