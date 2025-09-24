#include "../../includes/gui/draw_screen.hpp"
#include "../../includes/texture/texture_handler.hpp"
#include "../../includes/program/window.hpp"
#include "../../includes/gui/button/button.hpp"
#include "raylib.h"

void DrawScreen::DrawTodoList(Vector2 mouse_point) {
    // Task Done Button
    TDButton::Draw::TaskDone(mouse_point);
};