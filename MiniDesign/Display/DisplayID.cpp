#include "Component/Point.hpp"
#include "DisplayID.hpp"
#include "Utils/Utils.hpp"

#include <vector>

void DisplayID::show(Grid& grid, const ComponentList& components, const std::string& texture) {
    for (const auto& component : components) {
        if (auto pointPtr = std::dynamic_pointer_cast<Point>(component)) {
            int x = pointPtr->getX();
            int y = pointPtr->getY();
            if (y >= 0 && y < HEIGHT &&
                x >= 0 && x < WIDTH) {
                grid[y][x] = std::to_string(component->getID());
            }
        }
    }
    showGrid(grid);
}