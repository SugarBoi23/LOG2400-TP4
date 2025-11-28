#include "Components/ScatterGraph.hpp"
#include "Command.hpp"

Command::Command(const ScatterGraph& scatterGraph)
        : scatterGraph_(scatterGraph) {}

void Command::undo() {
    // Default nothing
}