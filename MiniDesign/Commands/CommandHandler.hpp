#pragma once

#include "Commands/Command.hpp"
#include "Components/ScatterGraph.hpp"
#include "Utils/Utils.hpp"

#include <unordered_map>
#include <string>
#include <memory>
#include <stack>

class CommandHandler {
public:
    explicit CommandHandler(const ScatterGraph& scatterGraph);
    Command* findCommand(const std::string& key);
    void undo();
    void redo();
private:
    template<typename T>
    void Register(const std::string& key);
    void registerCommand(const std::string& key, std::unique_ptr<Command> cmd);

    ScatterGraph scatterGraph_;
    CommandMap commands_;

    // Stack for undo (commands that have been executed)
    CommandStack undoStack;
    // Stack for redo (commands that have been undone)
    CommandStack redoStack;
};
