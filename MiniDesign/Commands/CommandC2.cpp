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

std::unique_ptr<Command> CommandC2::clone() const {
    return std::make_unique<CommandC2>(*this);
}