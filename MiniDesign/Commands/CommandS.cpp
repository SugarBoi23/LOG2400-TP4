#include "Components/ScatterGraph.hpp"
#include "CommandS.hpp"

#include <iostream>

CommandS::CommandS(ScatterGraph& scatterGraph)
        : Command(scatterGraph) {}

void CommandS::execute() {
    // TODO: get ID from user input
    // TODO: add variadic arguments to invoker execute
    // scatterGraph_.deletePoint(ID);
    std::cout << "Execute CommandS \n";
}

void CommandS::undo() {
    std::cout << "Undo CommandS \n";
}

std::unique_ptr<Command> CommandS::clone() const {
    std::cout << "Clone CommandS \n";
    return std::make_unique<CommandS>(*this);
}