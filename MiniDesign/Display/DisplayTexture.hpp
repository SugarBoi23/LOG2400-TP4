#pragma once

#include "Display.hpp"

#include <map>
#include <string>

class DisplayTexture : public Display {
public:
    DisplayTexture() = default;
    ~DisplayTexture() override = default;

    void show(std::map<std::string, Point>& points) override;
};