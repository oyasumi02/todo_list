#pragma once
#include "raylib.h"
#include <map>
#include <string>

class TextureHandler {
private:
    unsigned int texture_count;
    std::map<std::string, Texture2D> textures;
public:
    void Initialize();
    void DeInitialize();

    Texture2D Texture(std::string t);
    unsigned int TextureCount();
};