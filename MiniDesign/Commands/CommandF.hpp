#pragma once

#include "Components/ScatterGraph.hpp"
#include "Command.hpp"

class CommandF : public Command {
public:
    explicit CommandF(ScatterGraph& scatterGraph);
    void execute() override;
    [[nodiscard]] std::unique_ptr<Command> clone() const override;
};