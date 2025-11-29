#include "Invoker.hpp"

void Invoker::execute(Command& cmd) {
    cmd.execute();
}

void Invoker::undo(Command& cmd) {
    cmd.undo();
}