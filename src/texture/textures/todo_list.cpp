#include "../../../includes/texture/textures/todo_list.hpp"

void TodoListTextures::Load() {
    task_incomplete_256x128 = LoadTexture("../texture/todo_list/button_task_incomplete_256x128.png");
}

void TodoListTextures::Unload() {
    UnloadTexture(task_incomplete_256x128);
}