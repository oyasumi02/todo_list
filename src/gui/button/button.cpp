#include "../../../includes/gui/button/button.hpp"
#include "../../../includes/texture/texture_handler.hpp"
#include "../../../includes/program/window.hpp"
#include "raylib.h"


// :: Draw Struct ::

void TDButton::Draw::TaskDone() {
    static bool button_action = false;
    Texture2D texture = texture_handler.Texture("button_task_done_256x128.png");

    const Rectangle src_rec = {0, 0, (float)texture.width, (float)texture.height};
    const Rectangle btn_bounds = {SCRW/2.0f - texture.width/2.0f, SCRH/2.0f, (float)texture.width, (float)texture.height};

    
}

void TDButton::Draw::TaskIncomplete() {

}

void TDButton::Draw::TaskMissed() {

}

TDButton button;