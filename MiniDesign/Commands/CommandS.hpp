#pragma once

#include "Components/ScatterGraph.hpp"
#include "Command.hpp"

class CommandS : public Command {
public:
    explicit CommandS(const ScatterGraph& scatterGraph);
    void execute() override;
    void undo() override;
};