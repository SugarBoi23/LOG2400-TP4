#pragma once

#include "Components/ScatterGraph.hpp"
#include "Command.hpp"

class CommandS : public Command {
public:
    explicit CommandS(ScatterGraph& scatterGraph);
    void execute() override;
    void undo() override;
};