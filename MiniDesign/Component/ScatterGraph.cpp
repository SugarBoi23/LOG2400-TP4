#include "EdgeBuilder/EdgeBuilder.hpp"
#include "Display/Display.hpp"
#include "ScatterGraph.hpp"

#include <algorithm>
#include <string>
#include <sstream>

ScatterGraph::ScatterGraph(const std::string& points) {
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
}

ComponentList & ScatterGraph::getComponents() {
    return components_;
}

void ScatterGraph::setGrid(const Grid& grid) {
    grid_ = grid;
}

bool ScatterGraph::isScatterGraph() const {
    return true;
}

void ScatterGraph::fusion() {

    // TODO
}

void ScatterGraph::showPoints() {
    // TODO
}

void ScatterGraph::movePoint(const std::string& ID, const Point newPosition) {
    // TODO
}

void ScatterGraph::listPoints() {
    // TODO
}

void ScatterGraph::deletePoint(const std::string &ID) {
    // TODO
}

void ScatterGraph::buildEdges() {
    // TODO
}

void ScatterGraph::exit() {
    // TODO
}

void ScatterGraph::setDisplay(const Display& otherDisplay) {
    display_ = otherDisplay;
}

void ScatterGraph::setEdgeBuilder(const EdgeBuilder& otherEdgeBuilder) {
    edgeBuilder_ = otherEdgeBuilder;
}

