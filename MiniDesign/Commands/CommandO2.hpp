#pragma once
#include "Command.hpp"

class CommandO2 : public Command {
public:
    CommandO2(ScatterGraph& scatterGraph);
    void execute() const override;
};