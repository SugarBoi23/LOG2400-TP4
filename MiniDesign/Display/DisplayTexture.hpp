#pragma once

#include "Display.hpp"

#include <map>
#include <string>

class DisplayTexture : public Display {
public:
    explicit DisplayTexture(std::map<std::string, Point>& points);

    void show() override;
};