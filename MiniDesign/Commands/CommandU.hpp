#pragma once
#include "Command.hpp"

class CommandU : public Command {
public:
    CommandU(ScatterGraph& scatterGraph);
    void execute() const override;
};