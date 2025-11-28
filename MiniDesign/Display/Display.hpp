#pragma once

#include "Utils/Utils.hpp"

#include <string>
#include <vector>

class Display {
public:
    Display() = default;
    virtual ~Display() = default;

    virtual void show(Grid& grid, const ComponentList& components, const std::string& texture);
    static void showGrid(const Grid& grid);
};