#pragma once

#include "Component/Component.hpp"

#include <memory>
#include <vector>
#include <string>

using Grid = std::vector<std::vector<std::string>>;
using ComponentList = std::vector<std::shared_ptr<Component>>;
