#include "CommandS.hpp"
#include <iostream>

CommandS::CommandS(ComponentList& componentList)
        : Command(componentList) {}

void CommandS::execute() {
    std::cout << "CommandS executed \n";
}

void CommandS::undo() {
    std::cout << "Undo CommandS \n";
}
