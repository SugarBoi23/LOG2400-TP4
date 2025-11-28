#include "Components/ScatterGraph.hpp"
#include "Command.hpp"

Command::Command(ScatterGraph& scatterGraph)
        : scatterGraph_(scatterGraph) {}

void Command::undo() {
    // Default nothing
}