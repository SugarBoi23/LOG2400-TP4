#include "Components/ScatterGraph.hpp"
#include "CommandF.hpp"

CommandF::CommandF(ScatterGraph& scatterGraph)
        : Command(scatterGraph) {}

void CommandF::execute() {
    scatterGraph_.fusion();
}

std::unique_ptr<Command> CommandF::clone() const {
    return std::make_unique<CommandF>(*this);
}