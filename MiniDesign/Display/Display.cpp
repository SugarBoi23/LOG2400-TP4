#include "Display.hpp"
#include "Utils/Utils.hpp"

#include <iostream>
#include <vector>

void Display::show(Grid &grid, const ComponentList& components, const std::string& texture) {}

void Display::showGrid(const Grid &grid) {
    for (int y = HEIGHT - 1; y >= 0; --y) {
        for (int x = 0; x < WIDTH; ++x) {
            std::cout << grid[y][x];
        }
        std::cout << std::endl;
    }
}
