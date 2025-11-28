#pragma once

#include "Component/Component.hpp"
#include "Component/Point.hpp"
#include "Utils/Utils.hpp"

#include <memory>
#include <vector>
#include <string>

class EdgeBuilder {
public:
    EdgeBuilder() = default;
    virtual ~EdgeBuilder() = default;

    void traceLine(Grid& grid, Point start, Point end);
    virtual void build(Grid& grid, ComponentList points);
protected:
    static void mergeGraphs(ComponentList& components);
    static void clearGrid(Grid& grid);
};
