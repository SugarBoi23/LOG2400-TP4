#pragma once

#include "Command.hpp"

class Invoker {
public:
    Invoker() = default;
    static void execute(Command& cmd);
    static void undo(Command& cmd);
};