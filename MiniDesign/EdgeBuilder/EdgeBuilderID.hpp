#pragma once

#include "Component/Component.hpp"
#include "EdgeBuilder.hpp"
#include "Utils/Utils.hpp"

#include <vector>

class EdgeBuilderID : public EdgeBuilder {
public:
    EdgeBuilderID() = default;
    ~EdgeBuilderID() override = default;

    void build(Grid& grid, ComponentList components) override;
};
