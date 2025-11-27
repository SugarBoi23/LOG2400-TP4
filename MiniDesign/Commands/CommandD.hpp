#pragma once
#include "Command.hpp"

class CommandD : public Command {
public:
    CommandD(ScatterGraph& scatterGraph);
    void execute() const override;
};