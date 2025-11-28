#include "CommandC1.hpp"
#include <iostream>

CommandC1::CommandC1(ComponentList& componentList)
        : Command(componentList) {}

void CommandC1::execute() {
    std::cout << "CommandC1 executed \n";
}