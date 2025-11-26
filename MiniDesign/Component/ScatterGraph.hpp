#pragma once

#include "affichage.hpp"
#include "Component.hpp"
#include "Display/DisplayID.hpp"
#include "Display/DisplayTexture.hpp"
#include "EdgeBuilder/EdgeBuilderID.hpp"
#include "EdgeBuilder/EdgeBuilderDistance.hpp"

#include <string>
#include <vector>

class ScatterGraph : Component {
public:
    explicit ScatterGraph() = default;
    ~ScatterGraph() override = default;

    [[nodiscard]] bool isScatterGraph() const override;

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

    void setDisplay(const Display& otherDisplay);
    void setEdgeBuilder(const EdgeBuilder& otherEdgeBuilder);

private:
    std::vector<Component> components;
    std::string texture_;

    Display display_;
    EdgeBuilder edgeBuilder_;
};

