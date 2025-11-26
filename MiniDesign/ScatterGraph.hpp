#pragma once

#include "affichage.hpp"
#include "Display/DisplayID.hpp"
#include "Display/DisplayTexture.hpp"
#include "EdgeBuilder/EdgeBuilderID.hpp"
#include "EdgeBuilder/EdgeBuilderDistance.hpp"

#include <map>
#include <string>

class ScatterGraph {
public:
    explicit ScatterGraph() = default;
    ~ScatterGraph() = default;

    // command a
    void listPoints();
    // command o1 & o2
    void showPoints();
    // command f
    void fusion();
    // command d
    void movePoint(const std::string& ID, Point newPosition);
    // command s
    void deletePoint(const std::string& ID);
    // command c1 & c2
    void buildEdges();
    // command q
    void exit();


private:
    std::map<std::string, Point> points_;
    std::string texture_;

    Display display_;
    EdgeBuilder edgeBuilder_;
};

