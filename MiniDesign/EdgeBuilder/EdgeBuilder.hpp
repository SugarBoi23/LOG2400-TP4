#pragma once

#include "Component/Component.hpp"

#include <vector>

class EdgeBuilder {
public:
    EdgeBuilder() = default;
    virtual ~EdgeBuilder() = default;

    virtual void build(std::vector<Component>& points);
};
