#include "Components/ScatterGraph.hpp"
#include "CommandD.hpp"
#include "Math/Position.hpp"

#include <iostream>

CommandD::CommandD(const ScatterGraph& scatterGraph)
        : Command(scatterGraph) {}

void CommandD::execute() {
    // TODO: get ID and newPosition from user input
    // TODO: add variadic arguments to invoker execute
    // scatterGraph_.movePoint(ID, newPosition);
}

void CommandD::undo() {
    std::cout << "Undo CommandD \n";
}