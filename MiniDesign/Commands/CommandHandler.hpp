#pragma once
#include <unordered_map>
#include <string>
#include <memory>
#include <stack>
#include "Command.hpp"
#include "CommandA.hpp"
#include "CommandC1.hpp"
#include "CommandC2.hpp"
#include "CommandD.hpp"
#include "CommandF.hpp"
#include "CommandO1.hpp"
#include "CommandO2.hpp"
#include "CommandS.hpp"
#include "Utils/Utils.hpp"

class CommandHandler {
public:
    explicit CommandHandler(ComponentList& componentList);
    Command* findCommand(const std::string& key);
    void undo();
    void redo();
private:
    template<typename T>
    void Register(const std::string& key);
    void registerCommand(const std::string& key, std::unique_ptr<Command> cmd);

    ComponentList& componentList;
    std::unordered_map<std::string, std::unique_ptr<Command>> commands_;

    // Stack for undo (commands that have been executed)
    std::stack<std::unique_ptr<Command>> undoStack;
    // Stack for redo (commands that have been undone)
    std::stack<std::unique_ptr<Command>> redoStack;
};
