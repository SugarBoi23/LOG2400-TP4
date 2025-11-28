#pragma once

#include "Display.hpp"
#include "Utils/Utils.hpp"

#include <vector>

class DisplayID : public Display {
public:
    DisplayID() = default;
    ~DisplayID() override = default;

    void show(Grid& grid, ComponentList& components, const std::string& texture) override;
};