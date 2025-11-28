#include "EdgeBuilder/EdgeBuilder.hpp"
#include "Display/Display.hpp"
#include "ScatterGraph.hpp"

#include <algorithm>
#include <iostream>
#include <memory>
#include <string>
#include <sstream>

ScatterGraph::ScatterGraph(const std::string& points)
    : texture_(".") {

    std::istringstream stream(points);
    std::string pointsStr;

    while (stream >> pointsStr) {
        std::erase(pointsStr, '(');
        std::erase(pointsStr, ')');

        if (const size_t commaIndex = pointsStr.find(','); commaIndex != std::string::npos) {
            const int x = std::stoi(pointsStr.substr(0, commaIndex));
            const int y = std::stoi(pointsStr.substr(commaIndex + 1));
            components_.emplace_back(std::make_shared<Point>(Point{x, y}));
        }
    }

    grid_ = std::vector<std::vector<std::string>> (
        HEIGHT, std::vector<std::string>(WIDTH, " "));
}

ScatterGraph::ScatterGraph(const ScatterGraph& other)
    : Component(other),
      grid_(other.grid_),
      components_(other.components_),
      texture_(other.texture_) {}

ComponentList & ScatterGraph::getComponents() {
    return components_;
}

std::shared_ptr<Component> ScatterGraph::getComponent(int ID) const {
    for (const auto& component : components_) {
        if (component->getID() == ID) {
            return component;
        }
    }
    return {};
}

bool ScatterGraph::isScatterGraph() const {
    return true;
}

void ScatterGraph::listPoints() {
    std::cout << "List of ScatterGraph#" << getID() <<  " :" << std::endl;
    for (const auto& component : components_) {
        if (auto pointPtr = std::dynamic_pointer_cast<Point>(component)) {
            std::cout << pointPtr->getID() << ":"
                      << " Position: (" << pointPtr->getPosition().getX()
                      << "," << pointPtr->getPosition().getY() << ")"
                      << " | Texture: " << texture_
                      << std::endl;
        } if (auto graphPtr = std::dynamic_pointer_cast<ScatterGraph>(component)) {
            if (this != graphPtr.get()) {
                std::cout << graphPtr->getID() << " ScatterGraph" << std::endl;
                graphPtr->listPoints();
            }
        }
    }
}

void ScatterGraph::showPoints() {
    if (display_) {
        display_->show(grid_, components_, texture_);
        std::cout << "Display applied with texture '" << texture_ << "'." << std::endl;
    }
}

void ScatterGraph::fusion() {
    texture_ = textures_[getID() % textures_.size()];
    std::cout << "Fusion applied with texture '" << texture_ << "' to points: ";

    for (const auto& component : components_) {
        if (auto pointPtr = std::dynamic_pointer_cast<Point>(component)) {
            std::cout << pointPtr->getID() << " ";
        }
    }
    std::cout << std::endl;
}

void ScatterGraph::movePoint(const int ID, const Math::Position& newPosition) {
    std::dynamic_pointer_cast<Point>(getComponent(ID))->setPosition(newPosition);
}

void ScatterGraph::deletePoint(int ID) {
    for (int i = 0; i < static_cast<int>(components_.size()); ++i) {
        if (components_[i]->getID() == ID) {
            components_.erase(components_.begin() + i);
            break;
        }
    }
}

void ScatterGraph::buildEdges() {
    if (edgeBuilder_) {
        std::cout << "BUILD!";
        edgeBuilder_->build(grid_, components_);
    }
}

void ScatterGraph::setDisplay(std::unique_ptr<Display> &&otherDisplay) {
    display_ = std::move(otherDisplay);
}

void ScatterGraph::setEdgeBuilder(std::unique_ptr<EdgeBuilder> &&otherEdgeBuilder) {
    edgeBuilder_ = std::move(otherEdgeBuilder);
}