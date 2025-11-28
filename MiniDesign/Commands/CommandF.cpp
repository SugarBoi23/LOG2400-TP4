#include "Components/ScatterGraph.hpp"
#include "CommandF.hpp"

CommandF::CommandF(ScatterGraph& scatterGraph)
        : Command(scatterGraph) {}

void CommandF::execute() {
    scatterGraph_.fusion();
}