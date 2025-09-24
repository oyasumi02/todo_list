#pragma once
#include "raylib.h"

enum class ButtonState {
    INACTIVE,
    HOVERED,
    PRESSED,
    INDEX_END
};

enum class ButtonType {
    INCOMPLETE,
    COMPLETE,
    MISSED
};

class TDButton {
public:
    TDButton() {}

    // Draw Buttons here
    struct Draw {
        static void TaskStatusButton(Vector2 mouse_point);
        static void TaskIncomplete();
        static void TaskMissed();
    };

    Draw draw;
};

extern TDButton button;