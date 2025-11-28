#pragma once

#include "Components/ScatterGraph.hpp"
#include "Command.hpp"

class CommandO1 : public Command {
public:
    explicit CommandO1(const ScatterGraph& scatterGraph);
    void execute() override;
};