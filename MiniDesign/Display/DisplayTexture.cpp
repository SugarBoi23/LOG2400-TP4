#include "DisplayTexture.hpp"
#include "Utils/Utils.hpp"

#include <vector>
#include <string>

void DisplayTexture::show(Grid& grid, const ComponentList& components, const std::string& texture) {
    for (const auto& component : components) {
        if (auto pointPtr = std::dynamic_pointer_cast<Point>(component)) {
            int x = pointPtr->getX();
            int y = pointPtr->getY();
            if (y >= 0 && y < HEIGHT &&
                x >= 0 && x < WIDTH) {
                grid[y][x] = texture;
            }
        }
    }
    showGrid(grid);
}
