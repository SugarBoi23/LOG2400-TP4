#pragma once
#include "Command.hpp"

class CommandS : public Command {
public:
    explicit CommandS(ComponentList& componentList);
    void execute() override;
    void undo() override;
};