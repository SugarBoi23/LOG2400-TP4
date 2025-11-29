#pragma once

#include "Components/ScatterGraph.hpp"
#include "Command.hpp"

class CommandD : public Command {
public:
    explicit CommandD(ScatterGraph& scatterGraph);
    void execute() override;
    void undo() override;
    [[nodiscard]] std::unique_ptr<Command> clone() const override;
};