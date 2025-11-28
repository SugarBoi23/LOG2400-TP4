#include "Components/ScatterGraph.hpp"
#include "Display.hpp"
#include "Utils/Utils.hpp"

#include <iostream>
#include <vector>

void Display::show(Grid &grid, ComponentList& components, const std::string& texture) {}

void Display::showGrid(const Grid &grid) {
    for (int y = HEIGHT - 1; y >= 0; --y) {
        for (int x = 0; x < WIDTH; ++x) {
            std::cout << grid[y][x];
        }
        std::cout << std::endl;
    }
}

void Display::mergeGraphs(ComponentList& components) {
    ComponentList newComponents{};
    for (const auto & component : components) {
        if (const auto graphPtr = std::dynamic_pointer_cast<ScatterGraph>(component)) {
            newComponents.insert(newComponents.end(),
                                 graphPtr->getComponents().begin(),
                                 graphPtr->getComponents().end());
        }
    }
    components.insert(components.end(), newComponents.begin(), newComponents.end());

    for (int i = static_cast<int>(components.size()) - 1; i >= 0; --i) {
        if (std::dynamic_pointer_cast<ScatterGraph>(components[i])) {
            components.erase(components.begin() + i);
        }
    }
}
