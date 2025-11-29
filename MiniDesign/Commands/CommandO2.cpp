#include "Components/ScatterGraph.hpp"
#include "CommandO2.hpp"
#include "Display/DisplayID.hpp"

#include <memory>

CommandO2::CommandO2(ScatterGraph& scatterGraph)
        : Command(scatterGraph) {}

void CommandO2::execute() {
    scatterGraph_.setDisplay(std::make_shared<DisplayID>());
    scatterGraph_.showPoints();
}

std::unique_ptr<Command> CommandO2::clone() const {
    return std::make_unique<CommandO2>(*this);
}