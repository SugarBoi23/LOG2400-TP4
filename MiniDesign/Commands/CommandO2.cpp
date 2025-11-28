#include "CommandO2.hpp"
#include <iostream>

CommandO2::CommandO2(ComponentList& componentList)
        : Command(componentList) {}

void CommandO2::execute() {
    std::cout << "CommandO2 executed \n";
}