#pragma once

#include "Display.hpp"

class DisplayID : public Display {
public:
    explicit DisplayID(std::vector<Point>& points);

    void show() override;
};