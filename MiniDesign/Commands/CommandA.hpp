#pragma once
#include "Command.hpp"

class CommandA : public Command {
public:
    CommandA(ScatterGraph& scatterGraph);
    void execute() const override;
};