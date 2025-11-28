#pragma once
#include "Command.hpp"

class CommandA : public Command {
public:
    explicit CommandA(ComponentList& componentList);
    void execute() override;
};