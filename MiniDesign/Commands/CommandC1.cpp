#include "Components/ScatterGraph.hpp"
#include "CommandC1.hpp"
#include "EdgeBuilder/EdgeBuilderID.hpp"

#include <memory>

CommandC1::CommandC1(ScatterGraph& scatterGraph)
        : Command(scatterGraph) {}

void CommandC1::execute() {
    scatterGraph_.setEdgeBuilder(std::make_shared<EdgeBuilderID>());
    scatterGraph_.buildEdges();
}

std::unique_ptr<Command> CommandC1::clone() const {
    return std::make_unique<CommandC1>(*this);
}