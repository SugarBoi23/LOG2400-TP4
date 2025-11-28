#include "CommandF.hpp"
#include <iostream>

CommandF::CommandF(ComponentList& componentList)
        : Command(componentList) {}

void CommandF::execute() {
    std::cout << "CommandF executed \n";
}