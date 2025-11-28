#include "Components/ScatterGraph.hpp"
#include "CommandHandler.hpp"
#include "CommandA.hpp"
#include "CommandC1.hpp"
#include "CommandC2.hpp"
#include "CommandD.hpp"
#include "CommandF.hpp"
#include "CommandO1.hpp"
#include "CommandO2.hpp"
#include "CommandS.hpp"

#include <iostream>
#include <memory>

CommandHandler::CommandHandler(const ScatterGraph& scatterGraph)
        : scatterGraph_(scatterGraph) {
    Register<CommandA>("a");
    Register<CommandC1>("c1");
    Register<CommandC2>("c2");
    Register<CommandD>("d");
    Register<CommandF>("f");
    Register<CommandO1>("o1");
    Register<CommandO2>("o2");
    Register<CommandS>("s");
}

std::unique_ptr<Command> CommandHandler::findCommand(const std::string& key) {
    if (key == "q") {
        std::cout << "Closing..." << std::endl;
        return nullptr;
    }
    auto it = commands_.find(key);
    if (it != commands_.end()) {
        return std::unique_ptr<Command>(it->second.get());
    }
    std::cout << "Unknown command: " << key << "\n";
    return nullptr;
}

void CommandHandler::undo() {
    // TODO
}

// Redo the last undone command if possible
void CommandHandler::redo() {
    // TODO
}

template<typename T>
void CommandHandler::Register(const std::string& key) {
    registerCommand(key, std::make_unique<T>(scatterGraph_));
}

void CommandHandler::registerCommand(const std::string& key, std::unique_ptr<Command> cmd) {
    commands_[key] = std::move(cmd);
}
