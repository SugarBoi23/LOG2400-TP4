#include "Components/ScatterGraph.hpp"
#include "CommandS.hpp"

#include <iostream>

CommandS::CommandS(const ScatterGraph& scatterGraph)
        : Command(scatterGraph) {}

void CommandS::execute() {
    // TODO: get ID from user input
    // TODO: add variadic arguments to invoker execute
    // scatterGraph_.deletePoint(ID);
}

void CommandS::undo() {
    std::cout << "Undo CommandS \n";
}
