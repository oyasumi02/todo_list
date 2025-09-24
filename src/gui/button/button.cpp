#include "../../../includes/gui/button/button.hpp"
#include "../../../includes/texture/texture_handler.hpp"
#include "../../../includes/program/window.hpp"
#include "raylib.h"


// :: Draw Struct ::

void TDButton::Draw::TaskStatusButton(Vector2 mouse_point) {
    static ButtonState button_state = ButtonState::INACTIVE;
    static ButtonType button_type = ButtonType::COMPLETE;
    bool button_action = false;
    Texture2D button = texture_handler.Texture("button_task_done_256x128.png");

    const Rectangle src_rec = {0, 0, (float)button.width, (float)button.height};
    const Rectangle btn_bounds = {SCRW/2.0f - button.width/2.0f, SCRH/2.0f, (float)button.width, (float)button.height};

    if (CheckCollisionPointRec(mouse_point, btn_bounds)) {
        if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) {
            button_state = ButtonState::PRESSED;
        } else {
            TraceLog(LOG_INFO, "Mouse is hovering over button!");
            button_state = ButtonState::HOVERED;
        }

        if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT)) {
            button_action = true;
        }
    } else {
        button_state = ButtonState::INACTIVE;
    }

    if (button_action) {
        switch (button_type) {
            case (ButtonType::INCOMPLETE): {
                
            } break;

            case (ButtonType::COMPLETE): {

            } break;

            case (ButtonType::MISSED): {

            } break;
        }
        button_type = ButtonType::MISSED;
        TraceLog(LOG_INFO, "BUTTON HAS BEEN CLICKED");
    }

    DrawTextureRec(button, src_rec, (Vector2) {btn_bounds.x, btn_bounds.y}, WHITE);
}

void TDButton::Draw::TaskIncomplete() {

}

void TDButton::Draw::TaskMissed() {

}

TDButton button;