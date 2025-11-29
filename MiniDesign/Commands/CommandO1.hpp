#pragma once

#include "Components/ScatterGraph.hpp"
#include "Command.hpp"

class CommandO1 : public Command {
public:
    explicit CommandO1(ScatterGraph& scatterGraph);
    void execute() override;
    [[nodiscard]] std::unique_ptr<Command> clone() const override;
};