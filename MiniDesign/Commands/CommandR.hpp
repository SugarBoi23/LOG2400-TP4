#pragma once
#include "Command.hpp"

class CommandR : public Command {
public:
    CommandR(ScatterGraph& scatterGraph);
    void execute() const override;
};