#pragma once

#include "Display.hpp"

class DisplayTexture : public Display {
public:
    explicit DisplayTexture(std::vector<Point>& points);

    void show() override;
};