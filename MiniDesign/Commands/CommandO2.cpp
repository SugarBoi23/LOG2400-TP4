#include "Components/ScatterGraph.hpp"
#include "CommandO2.hpp"
#include "Display/DisplayID.hpp"

#include <memory>

CommandO2::CommandO2(const ScatterGraph& scatterGraph)
        : Command(scatterGraph) {}

void CommandO2::execute() {
    scatterGraph_.setDisplay(std::make_unique<DisplayID>());
    scatterGraph_.showPoints();
}