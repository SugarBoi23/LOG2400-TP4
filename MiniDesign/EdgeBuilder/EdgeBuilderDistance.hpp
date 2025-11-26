#pragma once

#include "Component/Component.hpp"
#include "EdgeBuilder.hpp"

#include <vector>

class EdgeBuilderDistance : public EdgeBuilder {
public:
    EdgeBuilderDistance() = default;
    ~EdgeBuilderDistance() override = default;

    void build(std::vector<Component>& components) override;
};
