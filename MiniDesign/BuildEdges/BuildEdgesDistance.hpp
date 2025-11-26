#pragma once

#include "affichage.hpp"
#include "BuildEdges.hpp"

#include <map>
#include <string>

class BuildEdgesDistance : public BuildEdges {
public:
    BuildEdgesDistance() = default;
    ~BuildEdgesDistance() override = default;

    void build(std::map<std::string, Point>& points) override;
};
