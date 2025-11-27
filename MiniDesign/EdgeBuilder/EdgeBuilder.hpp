#pragma once

#include "Component/Component.hpp"
#include "Component/Point.hpp"
#include "Utils/Grid.hpp"
#include "Utils/ComponentList.hpp"

#include <memory>
#include <vector>
#include <string>

class EdgeBuilder {
public:
    EdgeBuilder() = default;
    virtual ~EdgeBuilder() = default;

    void traceLine(Grid& grid, Point start, Point end);
    virtual void build(Grid& grid, ComponentList& points);

private:
    static const int WIDTH = 30;
    static const int HEIGHT = 20;
};
