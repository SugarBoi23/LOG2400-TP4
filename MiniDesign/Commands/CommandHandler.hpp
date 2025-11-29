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
    std::unique_ptr<Command> findCommand(const std::string& key);
    std::unique_ptr<Command> undo();
    std::unique_ptr<Command> redo();
private:
    template<typename T>
    void Register(const std::string& key);
    void registerCommand(const std::string& key, std::unique_ptr<Command> cmd);

    ScatterGraph scatterGraph_;
    CommandMap commands_;

    CommandStack undoStack;
    CommandStack redoStack;
};
