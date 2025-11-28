#pragma once

#include "Components/ScatterGraph.hpp"
#include "Command.hpp"

class CommandD : public Command {
public:
    explicit CommandD(const ScatterGraph& scatterGraph);
    void execute() override;
    void undo() override;
};