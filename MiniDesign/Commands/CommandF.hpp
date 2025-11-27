#pragma once
#include "Command.hpp"

class CommandF : public Command {
public:
    CommandF(ScatterGraph& scatterGraph);
    void execute() const override;
};