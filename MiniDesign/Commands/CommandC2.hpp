#pragma once
#include "Command.hpp"

class CommandC2 : public Command {
public:
    explicit CommandC2(ComponentList& componentList);
    void execute() override;
};