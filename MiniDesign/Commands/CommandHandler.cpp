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
        std::cout << "Closing...\n";
        return nullptr;
    }

    if (key == "u") {
        return undo();
    }

    if (key == "r") {
        return redo();
    }

    if (const auto it = commands_.find(key); it != commands_.end()) {
        auto cmd = it->second->clone();
        if (key == "d" || key == "s") {
            undoStack.push(cmd->clone());
            while (!redoStack.empty()) redoStack.pop();
        }
        return cmd;
    }

    std::cout << "Unknown command: " << key << "\n";
    return nullptr;
}

std::unique_ptr<Command> CommandHandler::undo() {
    if (undoStack.empty()) {
        std::cout << "Nothing to undo.\n";
        return nullptr;
    }
    auto cmd = std::move(undoStack.top());
    undoStack.pop();
    redoStack.push(cmd->clone());
    return std::move(cmd);
}

std::unique_ptr<Command> CommandHandler::redo() {
    if (redoStack.empty()) {
        std::cout << "Nothing to redo.\n";
        return nullptr;
    }
    auto cmd = std::move(redoStack.top());
    redoStack.pop();
    undoStack.push(cmd->clone());
    return std::move(cmd);
}

template<typename T>
void CommandHandler::Register(const std::string& key) {
    registerCommand(key, std::make_unique<T>(scatterGraph_));
}

void CommandHandler::registerCommand(const std::string& key, std::unique_ptr<Command> cmd) {
    commands_[key] = std::move(cmd);
}
