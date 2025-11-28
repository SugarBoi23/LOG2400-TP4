#include "CommandO1.hpp"
#include <iostream>

CommandO1::CommandO1(ComponentList& componentList)
        : Command(componentList) {}

void CommandO1::execute() {
    std::cout << "CommandO1 executed \n";
}