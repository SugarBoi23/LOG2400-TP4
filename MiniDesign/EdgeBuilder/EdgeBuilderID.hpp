#pragma once

#include "Component/Component.hpp"
#include "EdgeBuilder.hpp"

#include <vector>

class EdgeBuilderID : public EdgeBuilder {
public:
    EdgeBuilderID() = default;
    ~EdgeBuilderID() = default;

    void build(std::vector<Component>& components) override;
};
