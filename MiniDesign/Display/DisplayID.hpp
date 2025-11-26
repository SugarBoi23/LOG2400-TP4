#pragma once

#include "Display.hpp"

#include <array>
#include <map>
#include <string>

class DisplayID : public Display {
public:
    DisplayID() = default;
    ~DisplayID() override = default;

    void show(std::map<std::string, Point>& points) override;
};