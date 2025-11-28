#include "Component/Component.hpp"
#include "Component/ScatterGraph.hpp"
#include "EdgeBuilderDistance.hpp"
#include "Utils/Utils.hpp"

#include <cmath>
#include <memory>
#include <vector>

void EdgeBuilderDistance::build(Grid& grid, ComponentList components) {
    clearGrid(grid);
    mergeGraphs(components);

    std::shared_ptr<Component> currentComponent = components.back();
    std::shared_ptr<Component> firstComponent = currentComponent;
    components.pop_back();
    while (!components.empty()) {
        if (auto pointPtr = std::dynamic_pointer_cast<Point>(currentComponent)) {
            std::shared_ptr<Point> closestPointPtr;
            int closestIndex = -1;
            int index = 0;
            double minDistance = std::numeric_limits<double>::max();
            for (const auto& component : components) {
                auto otherPointPtr = std::dynamic_pointer_cast<Point>(component);
                if (otherPointPtr &&
                    calculateDistance(pointPtr->getPosition(), otherPointPtr->getPosition()) < minDistance) {
                    closestPointPtr = otherPointPtr;
                    closestIndex = index;
                }
                index++;
            }
            traceLine(grid, *pointPtr, *closestPointPtr);
            currentComponent = closestPointPtr;
            components.erase(components.begin() + closestIndex);
        }
    }
    traceLine(grid,
              *std::dynamic_pointer_cast<Point>(firstComponent),
              *std::dynamic_pointer_cast<Point>(currentComponent));
}

double EdgeBuilderDistance::calculateDistance(Math::Position start, Math::Position end) {
    int deltaX = end.getX() - start.getX();
    int deltaY = end.getY() - start.getY();
    return sqrt(pow(deltaX, 2) + pow(deltaY, 2));
}