#include "Components/ScatterGraph.hpp"
#include "CommandC1.hpp"
#include "EdgeBuilder/EdgeBuilderID.hpp"

#include <memory>

CommandC1::CommandC1(const ScatterGraph& scatterGraph)
        : Command(scatterGraph) {}

void CommandC1::execute() {
    scatterGraph_.setEdgeBuilder(std::make_unique<EdgeBuilderID>());
    scatterGraph_.buildEdges();
}