#include "Components/ScatterGraph.hpp"
#include "CommandD.hpp"
#include "Math/Position.hpp"

#include <iostream>

CommandD::CommandD(ScatterGraph& scatterGraph)
        : Command(scatterGraph) {}

void CommandD::execute() {
    // TODO: get ID and newPosition from user input
    // TODO: add variadic arguments to invoker execute
    // scatterGraph_.movePoint(ID, newPosition);
    std::cout << "CommandD executed \n";
}

void CommandD::undo() {
    std::cout << "Undo CommandD \n";
}

std::unique_ptr<Command> CommandD::clone() const {
    std::cout << "Clone CommandD \n";
    return std::make_unique<CommandD>(*this);
}