#include "Component/Component.hpp"
#include "Component/ScatterGraph.hpp"
#include "EdgeBuilderDistance.hpp"
#include "Utils/Grid.hpp"
#include "Utils/ComponentList.hpp"

#include <cmath>
#include <memory>
#include <vector>

void EdgeBuilderDistance::build(Grid& grid, ComponentList& components) {
    ComponentList queue = components;
    std::shared_ptr<Component> currentComponent = components.back();
    components.pop_back();
    while (!queue.empty()) {
        if (auto pointPtr = std::dynamic_pointer_cast<Point>(currentComponent)) {
            std::shared_ptr<Point> closestPoint;
            float minDistance = 100; // TODO: CHANGE
            for (const auto& component : queue) {
                if (auto graphPtr = std::dynamic_pointer_cast<ScatterGraph>(component)) {
                    build(grid, graphPtr->getComponents());
                } else {auto otherPointPtr = std::dynamic_pointer_cast<Point>(component);
                    if (otherPointPtr &&
                    calculateDistance(pointPtr->getPosition(), otherPointPtr->getPosition()) < minDistance) {
                        closestPoint = otherPointPtr;
                    }
                }
            }
            traceLine(grid, *pointPtr, *closestPoint);
        } else {
            auto currentComponentPtr
                = std::dynamic_pointer_cast<ScatterGraph>(currentComponent);
            build(grid, currentComponentPtr->getComponents());
        }
    }
}

float EdgeBuilderDistance::calculateDistance(Math::Position start, Math::Position end) {
    int deltaX = end.getX() - start.getX();
    int deltaY = end.getY() - start.getY();
    return sqrt(pow(deltaX, 2) + pow(deltaY, 2));
}