#include "CommandD.hpp"
#include <iostream>

CommandD::CommandD(ComponentList& componentList)
        : Command(componentList) {}

void CommandD::execute() {
    std::cout << "CommandD executed \n";
}

void CommandD::undo() {
    std::cout << "Undo CommandD \n";
}