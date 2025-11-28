#include "CommandA.hpp"
#include <iostream>

CommandA::CommandA(ComponentList& componentList)
        : Command(componentList) {}

void CommandA::execute() {
    std::cout << "CommandA executed \n";
}