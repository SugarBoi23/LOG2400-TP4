#pragma once

#include "Component/ScatterGraph.hpp"
#include "Display.hpp"
#include "Utils/Utils.hpp"

#include <vector>

class DisplayTexture : public Display {
public:
    DisplayTexture() = default;
    ~DisplayTexture() override = default;

    void show(Grid& grid, const ComponentList& components, const std::string& texture) override;
};