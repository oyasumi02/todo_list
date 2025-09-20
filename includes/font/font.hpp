#pragma once
#include "raylib.h"
#include <iostream>

class Fonts {
private:
    // * FONTS *
    Font boldpixels;
public:
    inline void LoadFonts() {
        // Font Paths go here
        boldpixels = LoadFontEx("../font/boldpixels/BoldPixels.ttf", 32, 0, 250);
    }
    inline void UnloadFonts() {
        UnloadFont(boldpixels);
    }

    // Font Methods
    Font& BoldPixels() { return boldpixels; }
};