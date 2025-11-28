#pragma once
#include "Command.hpp"

class CommandD : public Command {
public:
    explicit CommandD(ComponentList& componentList);
    void execute() override;
    void undo() override;
};