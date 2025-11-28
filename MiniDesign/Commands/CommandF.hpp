#pragma once

#include "Components/ScatterGraph.hpp"
#include "Command.hpp"

class CommandF : public Command {
public:
    explicit CommandF(const ScatterGraph& scatterGraph);
    void execute() override;
};