#pragma once

#include "Display.hpp"

#include <map>
#include <string>

class DisplayID : public Display {
public:
    DisplayID() = default;
    ~DisplayID() override = default;

    void show(std::map<std::string, Point>& points) override;
};