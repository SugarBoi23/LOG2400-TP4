#pragma once

#include "Component/Component.hpp"
#include "Display.hpp"

#include <vector>

class DisplayID : public Display {
public:
    DisplayID() = default;
    ~DisplayID() override = default;

    void show(std::vector<Component>& components) override;
};