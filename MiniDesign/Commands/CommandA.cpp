#include "Components/ScatterGraph.hpp"
#include "CommandA.hpp"

CommandA::CommandA(const ScatterGraph& scatterGraph)
        : Command(scatterGraph) {}

void CommandA::execute() {
    scatterGraph_.listPoints();
}