#include "Components/ScatterGraph.hpp"
#include "CommandF.hpp"

CommandF::CommandF(const ScatterGraph& scatterGraph)
        : Command(scatterGraph) {}

void CommandF::execute() {
    scatterGraph_.fusion();
}