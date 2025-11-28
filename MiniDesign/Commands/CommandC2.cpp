#include "Components/ScatterGraph.hpp"
#include "CommandC2.hpp"
#include "EdgeBuilder/EdgeBuilderDistance.hpp"

#include <memory>

CommandC2::CommandC2(const ScatterGraph& scatterGraph)
        : Command(scatterGraph) {}

void CommandC2::execute() {
    scatterGraph_.setEdgeBuilder(std::make_unique<EdgeBuilderDistance>());
    scatterGraph_.buildEdges();
}