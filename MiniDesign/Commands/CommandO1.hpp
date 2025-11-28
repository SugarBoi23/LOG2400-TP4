#pragma once
#include "Command.hpp"

class CommandO1 : public Command {
public:
    explicit CommandO1(ComponentList& componentList);
    void execute() override;
};