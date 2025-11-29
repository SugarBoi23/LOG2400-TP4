#pragma once

#include "Components/ScatterGraph.hpp"
#include "Command.hpp"

class CommandS : public Command {
public:
    explicit CommandS(ScatterGraph& scatterGraph);
    void execute() override;
    void undo() override;
    [[nodiscard]] std::unique_ptr<Command> clone() const override;
};