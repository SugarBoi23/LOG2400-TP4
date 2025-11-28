#include "DisplayTexture.hpp"
#include "Utils/Utils.hpp"

#include <vector>
#include <string>

void DisplayTexture::show(Grid& grid, ComponentList& components, const std::string& texture) {
    mergeGraphs(components);
    for (const auto& component : components) {
        if (const auto& pointPtr = std::dynamic_pointer_cast<Point>(component)) {
            const int x = pointPtr->getX();
            const int y = pointPtr->getY();
            if (y >= 0 && y < HEIGHT &&
                x >= 0 && x < WIDTH) {
                grid[y][x] = texture;
            }
        }
    }
    showGrid(grid);
}
