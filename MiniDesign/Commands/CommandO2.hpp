#pragma once
#include "Command.hpp"

class CommandO2 : public Command {
public:
    explicit CommandO2(ComponentList& componentList);
    void execute() override;
};