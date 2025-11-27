#pragma once
#include "Command.hpp"

class CommandQ : public Command {
public:
    CommandQ(ScatterGraph& scatterGraph);
    void execute() const override;
};