#pragma once
#include "Command.hpp"

class CommandC1 : public Command {
public:
    CommandC1(ScatterGraph& scatterGraph);
    void execute() const override;
};