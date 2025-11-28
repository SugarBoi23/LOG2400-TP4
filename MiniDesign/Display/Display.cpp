#include "Display.hpp"
#include "Utils/Utils.hpp"

#include <iostream>
#include <vector>

void Display::show(Grid &grid, const ComponentList& components, const std::string& texture) {}

void Display::showGrid(const Grid &grid) {
    for (const auto& row : grid) {
        for (const auto& cell : row) {
            std::cout << cell;
        }
        std::cout << std::endl;
    }
}
