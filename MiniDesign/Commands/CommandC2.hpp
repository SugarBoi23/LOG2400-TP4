#pragma once

#include "Components/ScatterGraph.hpp"
#include "Command.hpp"

class CommandC2 : public Command {
public:
    explicit CommandC2(ScatterGraph& scatterGraph);
    void execute() override;
    [[nodiscard]] std::unique_ptr<Command> clone() const override;
};