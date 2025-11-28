#pragma once
#include "Command.hpp"

class CommandF : public Command {
public:
    explicit CommandF(ComponentList& componentList);
    void execute() override;
};