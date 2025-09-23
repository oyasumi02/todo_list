#pragma once

enum class ButtonState {
    INACTIVE,
    HOVERED,
    PRESSED
};

class TDButton {
private:
    ButtonState button_state;
public:
    void SetButtonState(ButtonState s);
    ButtonState GetButtonState();
};