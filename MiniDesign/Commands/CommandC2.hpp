#pragma once
#include "Command.hpp"

class CommandC2 : public Command {
public:
    CommandC2(ScatterGraph& scatterGraph);
    void execute() const override;
};