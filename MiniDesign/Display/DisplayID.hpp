#pragma once

#include "Display.hpp"

#include <map>
#include <string>

class DisplayID : public Display {
public:
    explicit DisplayID(std::map<std::string, Point>& points);

    void show() override;
};