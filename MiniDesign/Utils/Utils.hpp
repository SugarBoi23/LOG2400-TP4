#pragma once

#include <memory>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

class Component;
class Command;

using Grid = std::vector<std::vector<std::string>>;
using ComponentList = std::vector<std::shared_ptr<Component>>;
using CommandMap = std::unordered_map<std::string, std::unique_ptr<Command>>;
using CommandStack = std::stack<std::unique_ptr<Command>>;

constexpr int WIDTH = 30;
constexpr int HEIGHT = 20;
