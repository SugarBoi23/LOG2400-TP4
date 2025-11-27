#include "EdgeBuilder/EdgeBuilder.hpp"
#include "Display/Display.hpp"
#include "ScatterGraph.hpp"

#include <string>

ComponentList & ScatterGraph::getComponents() {
    return components_;
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

