#include "Command.hpp"

Command::Command(ComponentList& componentList)
        : componentList(componentList) {}

void Command::undo() {
    // Default nothing
}