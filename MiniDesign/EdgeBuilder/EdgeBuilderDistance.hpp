#pragma once

#include "affichage.hpp"
#include "EdgeBuilder.hpp"

#include <map>
#include <string>

class EdgeBuilderDistance : public EdgeBuilder {
public:
    EdgeBuilderDistance() = default;
    ~EdgeBuilderDistance() override = default;

    void build(std::map<std::string, Point>& points) override;
};
