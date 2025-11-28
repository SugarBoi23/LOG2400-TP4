#include "EdgeBuilder/EdgeBuilder.hpp"
#include "Display/Display.hpp"
#include "ScatterGraph.hpp"

#include <algorithm>
#include <memory>
#include <string>
#include <sstream>

ScatterGraph::ScatterGraph(const std::string& points)
    : texture_(getID()%2 == 0 ? textures_[0] : textures_[1]) {

    std::istringstream stream(points);
    std::string pointsStr;

    while (stream >> pointsStr) {
        pointsStr.erase(
                std::remove(pointsStr.begin(), pointsStr.end(), '('),
                pointsStr.end());
        pointsStr.erase(
                std::remove(pointsStr.begin(),
                pointsStr.end(), ')'), pointsStr.end());

        size_t commaIndex = pointsStr.find(',');
        if (commaIndex != std::string::npos) {
            int x = std::stoi(pointsStr.substr(0, commaIndex));
            int y = std::stoi(pointsStr.substr(commaIndex + 1));
            components_.emplace_back(std::make_shared<Point>(Point{x, y}));
        }
    }

    grid_ = std::vector<std::vector<std::string>> (
        HEIGHT, std::vector<std::string>(WIDTH, " "));
}

Grid ScatterGraph::getGrid() {
    return grid_;
}

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

std::string ScatterGraph::getTexture() const {
    return texture_;
}

bool ScatterGraph::isScatterGraph() const {
    return true;
}

void ScatterGraph::fusion() {
    // TODO
}

void ScatterGraph::showPoints() {
    if (display_) {
        display_->show(grid_, components_, texture_);
    }
}

void ScatterGraph::movePoint(int ID, const Math::Position& newPosition) {
    std::dynamic_pointer_cast<Point>(getComponent(ID))->setPosition(newPosition);
}

void ScatterGraph::listPoints() {
    // TODO
}

void ScatterGraph::deletePoint(int ID) {
    // TODO
}

void ScatterGraph::buildEdges() {
    edgeBuilder_->build(grid_, components_);
}

void ScatterGraph::exit() {
    // TODO
}

void ScatterGraph::setDisplay(std::shared_ptr<Display> &&otherDisplay) {
    display_ = std::move(otherDisplay);
}

void ScatterGraph::setEdgeBuilder(std::shared_ptr<EdgeBuilder> &&otherEdgeBuilder) {
    edgeBuilder_ = std::move(otherEdgeBuilder);
}