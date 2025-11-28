#pragma once

#include "Components/Point.hpp"
#include "Utils/Utils.hpp"

class EdgeBuilder {
public:
    EdgeBuilder() = default;
    virtual ~EdgeBuilder() = default;

    static void traceLine(Grid& grid, Point start, Point end);
    virtual void build(Grid& grid, ComponentList points);
protected:
    static void mergeGraphs(ComponentList& components);
    static void clearGrid(Grid& grid);
};
