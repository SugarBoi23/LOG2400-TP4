#pragma once

#include "EdgeBuilder.hpp"
#include "Utils/Utils.hpp"

class EdgeBuilderID : public EdgeBuilder {
public:
    EdgeBuilderID() = default;
    ~EdgeBuilderID() override = default;

    void build(Grid& grid, ComponentList components) override;
};
