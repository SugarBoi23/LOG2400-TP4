#pragma once

#include "Component/Component.hpp"
#include "EdgeBuilder.hpp"
#include "Math/Position.hpp"
#include "Utils/Utils.hpp"

class EdgeBuilderDistance : public EdgeBuilder {
public:
    EdgeBuilderDistance() = default;
    ~EdgeBuilderDistance() override = default;

    void build(Grid& grid, ComponentList components) override;

private:
    static double calculateDistance(Math::Position start, Math::Position end);
};
