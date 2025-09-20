#pragma once
#include "raylib.h"

class TodoListTextures {
private:
    int texture_count;
    Texture2D task_done_256x128;
    Texture2D task_incomplete_256x128;
    Texture2D task_missed_256;
public:
    void Load();
    void Unload();
};