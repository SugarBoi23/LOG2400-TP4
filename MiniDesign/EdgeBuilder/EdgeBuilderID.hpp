#pragma once

#include "affichage.hpp"
#include "EdgeBuilder.hpp"

class EdgeBuilderID : public EdgeBuilder {
public:
    EdgeBuilderID() = default;
    ~EdgeBuilderID() = default;

    void build(std::map<std::string, Point>& points) override;
};
