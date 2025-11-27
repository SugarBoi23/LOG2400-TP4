#pragma once
#include "Command.hpp"

class CommandS : public Command {
public:
    CommandS(ScatterGraph& scatterGraph);
    void execute() const override;
};