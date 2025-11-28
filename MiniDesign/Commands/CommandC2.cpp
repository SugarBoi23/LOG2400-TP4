#include "Components/ScatterGraph.hpp"
#include "CommandC2.hpp"
#include "EdgeBuilder/EdgeBuilderDistance.hpp"

#include <memory>

CommandC2::CommandC2(ScatterGraph& scatterGraph)
        : Command(scatterGraph) {}

void CommandC2::execute() {
    scatterGraph_.setEdgeBuilder(std::make_shared<EdgeBuilderDistance>());
    scatterGraph_.buildEdges();
}