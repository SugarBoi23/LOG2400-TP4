#pragma once

#include "Components/ScatterGraph.hpp"
#include "Utils/Utils.hpp"

class Command {
public:
    virtual ~Command() = default;
    virtual void execute() = 0;
    virtual void undo();

protected:
    explicit Command(ScatterGraph& scatterGraph);
    ScatterGraph& scatterGraph_;
};