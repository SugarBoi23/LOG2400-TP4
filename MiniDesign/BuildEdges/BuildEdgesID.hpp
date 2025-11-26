#pragma once

#include "affichage.hpp"
#include "BuildEdges.hpp"

class BuildEdgesID : public BuildEdges {
public:
    BuildEdgesID() = default;
    ~BuildEdgesID() = default;

    void build(std::map<std::string, Point>& points) override;
};
