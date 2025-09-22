#include "../../includes/texture/load_textures.hpp"
// #include "../../includes/texture/textures/todo_list.hpp"
#include "raylib.h"
#include <iostream>
#include <string>
#include <filesystem>

using namespace std;

void TextureHandler::Initialize() {
    string texture_path = "../texture/";
    int texture_count;
    TraceLog(LOG_INFO, "[TEXTURE HANDLER] LOADING TEXTURES...");
    try {
        for (const auto& texture : filesystem::recursive_directory_iterator(texture_path)) {
            // When a texture is found
            if (texture.is_regular_file()) {
                std::string texture_name = texture.path().filename().string();
                std::string texture_path = texture.path().string();

                textures[texture_name] = LoadTexture(texture_path.c_str());
                TraceLog(LOG_INFO, TextFormat("[TEXTURE HANDLER] Loaded %s", texture_name.c_str()));
            }
        }

        // Count the amount of textures loaded into the map
        texture_count = textures.size();
        TraceLog(LOG_INFO, TextFormat("[TEXTURE HANDLER] %d Textures loaded.", texture_count));

    } catch (const filesystem::filesystem_error& e) {
        cerr << "[TEXTURE HANDLER] :: ERROR :: | " << e.what() << "\n";
    }
}

void TextureHandler::DeInitialize() {
    try {
        textures.clear(); // Wipe textures from map
        TraceLog(LOG_INFO, "[TEXTURE HANDLER] Done unloading.");
        for (auto &t : textures) {
            cout << t.first << "\n";
        }
    } catch (const filesystem::filesystem_error& e) {
        cerr << "[TEXTURE HANDLER ERROR] " << e.what() << "\n";
    }
}

Texture2D TextureHandler::Texture(std::string t) {
    if (texture_count == 0) {
        TraceLog(LOG_ERROR, TextFormat("[TEXTURE HANDLER] There are no textures in the textures map."));
    }

    if (!(textures.find(t) != textures.end())) {
        TraceLog(LOG_ERROR, TextFormat("[TEXTURE HANDLER] Could not find texture \"%s\" in textures map."));
    }

    TraceLog(LOG_DEBUG, TextFormat("[TEXTURE HANDLER] Texture %s successfully located in textures map."));
    return textures[t];
}

unsigned TextureHandler::TextureCount() {
    return texture_count;
}