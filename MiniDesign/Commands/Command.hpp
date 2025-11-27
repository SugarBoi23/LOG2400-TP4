#pragma once
#include "ScatterGraph.hpp"

class Command{
public:
    virtual ~Command() = default;

    virtual void execute() const = 0;
    
protected:
    Command(ScatterGraph& scatterGraph);
    ScatterGraph& scatterGraph_;
};