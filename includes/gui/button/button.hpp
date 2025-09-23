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
    TDButton() {
        button_state = ButtonState::INACTIVE;
    }
    void SetButtonState(ButtonState s);
    ButtonState GetButtonState();

    // Draw Buttons here
    struct Draw {
        static void TaskDone();
        static void TaskIncomplete();
        static void TaskMissed();
    };

    Draw draw;
};

extern TDButton button;