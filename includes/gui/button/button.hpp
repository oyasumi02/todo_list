#pragma once
#include "raylib.h"

enum class ButtonState {
    INACTIVE,
    HOVERED,
    PRESSED,
    INDEX_END
};

class TDButton {

public:
    TDButton() {}

    // Draw Buttons here
    struct Draw {
        static void TaskDone(Vector2 mouse_point);
        static void TaskIncomplete();
        static void TaskMissed();
    };

    Draw draw;
};

extern TDButton button;