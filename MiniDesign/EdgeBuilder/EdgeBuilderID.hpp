#pragma once

#include "Component/Component.hpp"
#include "EdgeBuilder.hpp"
#include "Utils/Grid.hpp"
#include "Utils/ComponentList.hpp"

#include <vector>

class EdgeBuilderID : public EdgeBuilder {
public:
    EdgeBuilderID() = default;
    ~EdgeBuilderID() = default;

    void build(Grid& grid, ComponentList& components) override;
};
