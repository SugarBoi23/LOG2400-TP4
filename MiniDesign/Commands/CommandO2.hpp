#pragma once

#include "Components/ScatterGraph.hpp"
#include "Command.hpp"

class CommandO2 : public Command {
public:
    explicit CommandO2(const ScatterGraph& scatterGraph);
    void execute() override;
};