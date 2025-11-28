#include "EdgeBuilderID.hpp"
#include "Utils/Utils.hpp"

#include <vector>

void EdgeBuilderID::build(Grid& grid, ComponentList components) {
    clearGrid(grid);
    mergeGraphs(components);

    for (size_t i = 0; i < components.size(); ++i) {
        auto currentPoint = std::dynamic_pointer_cast<Point>(components[i]);
        auto nextPoint = std::dynamic_pointer_cast<Point>(components[(i + 1) % components.size()]);
        traceLine(grid, *currentPoint, *nextPoint);
    }
}