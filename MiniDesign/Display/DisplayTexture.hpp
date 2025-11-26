#pragma once

#include "Component/Component.hpp"
#include "Display.hpp"

#include <vector>

class DisplayTexture : public Display {
public:
    DisplayTexture() = default;
    ~DisplayTexture() override = default;

    void show(std::vector<Component>& components) override;
};