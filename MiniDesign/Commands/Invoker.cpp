#include "Invoker.hpp"

void Invoker::execute(Command& cmd) {
    cmd.execute();
}