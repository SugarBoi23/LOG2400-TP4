#pragma once

#include "Component/Component.hpp"
#include "EdgeBuilder.hpp"
#include "Math/Position.hpp"
#include "Utils/Grid.hpp"
#include "Utils/ComponentList.hpp"

class EdgeBuilderDistance : public EdgeBuilder {
public:
    EdgeBuilderDistance() = default;
    ~EdgeBuilderDistance() override = default;

    void build(Grid& grid, ComponentList& components) override;

private:
    float calculateDistance(Math::Position start, Math::Position end);
};
