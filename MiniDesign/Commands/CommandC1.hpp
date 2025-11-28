#pragma once
#include "Command.hpp"

class CommandC1 : public Command {
public:
    explicit CommandC1(ComponentList& componentList);
    void execute() override;
};