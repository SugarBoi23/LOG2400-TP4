#pragma once
#include "Utils/Utils.hpp"

class Command {
public:
    virtual ~Command() = default;
    virtual void execute() = 0;
    virtual void undo();

protected:
    explicit Command(ComponentList& componentList);
    ComponentList& componentList;
};