#include "Components/ScatterGraph.hpp"
#include "CommandA.hpp"

CommandA::CommandA(ScatterGraph& scatterGraph)
        : Command(scatterGraph) {}

void CommandA::execute() {
    scatterGraph_.listPoints();
}