#include "CommandC2.hpp"
#include <iostream>

CommandC2::CommandC2(ComponentList& componentList)
        : Command(componentList) {}

void CommandC2::execute() {
    std::cout << "CommandC2 executed \n";
}