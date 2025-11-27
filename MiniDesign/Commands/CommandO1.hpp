#pragma once
#include "Command.hpp"

class CommandO1 : public Command {
public:
    CommandO1(ScatterGraph& scatterGraph);
    void execute() const override;
};