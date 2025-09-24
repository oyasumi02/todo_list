#include "../../../includes/gui/button/button.hpp"
#include "../../../includes/texture/texture_handler.hpp"
#include "raylib.h"

void TDButton::SetButtonState(ButtonState s) {
    button_state = s;
}

ButtonState TDButton::GetButtonState() {
    return button_state;
}

// :: Draw Struct ::

void TDButton::Draw::TaskDone() {
    Texture2D texture = texture_handler.Texture("button_task_done_256x128.png");
    static Rectangle src_rec = {0, 0, (float)texture.width, }
}

void TDButton::Draw::TaskIncomplete() {

}

void TDButton::Draw::TaskMissed() {

}

TDButton button;