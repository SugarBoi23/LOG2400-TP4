#pragma once

#include "affichage.hpp"
#include "Component.hpp"
#include "Display/Display.hpp"
#include "EdgeBuilder/EdgeBuilder.hpp"
#include "Utils/Utils.hpp"

#include <array>
#include <string>
#include <type_traits>
#include <vector>

class ScatterGraph : public Component {
public:
    explicit ScatterGraph(const std::string& points);
    ~ScatterGraph() override = default;

    Grid getGrid();
    [[nodiscard]] ComponentList& getComponents();
    [[nodiscard]] std::shared_ptr<Component> getComponent(int ID) const;
    [[nodiscard]] bool isScatterGraph() const override;

    // command a
    void listPoints();
    // command o1 & o2
    void showPoints();
    // command f
    void fusion();
    // command d
    void movePoint(int ID, const Math::Position& newPosition);
    // command s
    void deletePoint(int ID);
    // command c1 & c2
    void buildEdges();
    // command q
    void exit();

    void setDisplay(std::shared_ptr<Display> &&otherDisplay);
    void setEdgeBuilder(std::shared_ptr<EdgeBuilder> &&otherEdgeBuilder);

private:
    constexpr static std::array<std::string, 3> textures_ = {"o", "#", "$"};

    Grid grid_;
    ComponentList components_;
    std::string texture_;

    std::shared_ptr<Display> display_;
    std::shared_ptr<EdgeBuilder> edgeBuilder_;
};
