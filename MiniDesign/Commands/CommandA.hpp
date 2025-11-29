#pragma once

#include "Components/ScatterGraph.hpp"
#include "Command.hpp"

class CommandA : public Command {
public:
    explicit CommandA(ScatterGraph& scatterGraph);
    void execute() override;
    [[nodiscard]] std::unique_ptr<Command> clone() const override;
};