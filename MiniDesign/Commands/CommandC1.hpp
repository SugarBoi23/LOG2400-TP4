#pragma once

#include "Components/ScatterGraph.hpp"
#include "Command.hpp"

class CommandC1 : public Command {
public:
    explicit CommandC1(ScatterGraph& scatterGraph);
    void execute() override;
    [[nodiscard]] std::unique_ptr<Command> clone() const override;
};