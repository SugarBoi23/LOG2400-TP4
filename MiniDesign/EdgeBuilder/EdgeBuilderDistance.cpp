#include "Component/Component.hpp"
#include "Component/ScatterGraph.hpp"
#include "EdgeBuilderDistance.hpp"
#include "Utils/Utils.hpp"

#include <cmath>
#include <memory>
#include <vector>

void EdgeBuilderDistance::build(Grid& grid, ComponentList components) {
    ComponentList newComponents{};
    for (const auto & component : components) {
        if (auto graphPtr = std::dynamic_pointer_cast<ScatterGraph>(component)) {
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

    if (components.empty()) {
        return;
    }

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