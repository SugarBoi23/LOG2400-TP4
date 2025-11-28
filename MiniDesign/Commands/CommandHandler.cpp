#include "CommandHandler.hpp"
#include <iostream>

CommandHandler::CommandHandler(ComponentList& componentList)
        : componentList(componentList) {
    Register<CommandA>("a");
    Register<CommandC1>("c1");
    Register<CommandC2>("c2");
    Register<CommandD>("d");
    Register<CommandF>("f");
    Register<CommandO1>("o1");
    Register<CommandO2>("o2");
    Register<CommandS>("s");

}

Command* CommandHandler::findCommand(const std::string& key) {
    auto it = commands_.find(key);
    if (it != commands_.end()) {
        return it->second.get();
    } else {
        std::cout << "Unknown command: " << key << "\n";
        return nullptr;
    }
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
    registerCommand(key, std::make_unique<T>(componentList));
}

void CommandHandler::registerCommand(const std::string& key, std::unique_ptr<Command> cmd) {
    commands_[key] = std::move(cmd);
}
