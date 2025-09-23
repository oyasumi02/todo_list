#include "../../../includes/gui/button/button.hpp"

void TDButton::SetButtonState(ButtonState s) {
    button_state = s;
}

ButtonState TDButton::GetButtonState() {
    return button_state;
}

// :: Draw Struct ::

void TDButton::Draw::TaskDone() {

}

void TDButton::Draw::TaskIncomplete() {

}

void TDButton::Draw::TaskMissed() {
    
}

TDButton button;