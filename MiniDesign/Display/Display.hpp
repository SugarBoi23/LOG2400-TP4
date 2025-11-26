#pragma once

#include "Component/Component.hpp"

#include <vector>

class Display {
public:
    Display() = default;
    virtual ~Display() = default;

    virtual void show(std::vector<Component>& components);
};