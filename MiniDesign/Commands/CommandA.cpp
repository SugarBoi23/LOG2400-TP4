#include "Components/ScatterGraph.hpp"
#include "CommandA.hpp"

#include <iostream>

CommandA::CommandA(ScatterGraph& scatterGraph)
        : Command(scatterGraph) {}

void CommandA::execute() {
    scatterGraph_.listPoints();
}

std::unique_ptr<Command> CommandA::clone() const {
    return std::make_unique<CommandA>(*this);
}