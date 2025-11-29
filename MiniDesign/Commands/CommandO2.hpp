#pragma once

#include "Components/ScatterGraph.hpp"
#include "Command.hpp"

class CommandO2 : public Command {
public:
    explicit CommandO2(ScatterGraph& scatterGraph);
    void execute() override;
    [[nodiscard]] std::unique_ptr<Command> clone() const override;
};