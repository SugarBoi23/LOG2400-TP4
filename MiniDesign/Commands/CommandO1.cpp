#include "Components/ScatterGraph.hpp"
#include "CommandO1.hpp"
#include "Display/DisplayTexture.hpp"

#include <memory>

CommandO1::CommandO1(ScatterGraph& scatterGraph)
        : Command(scatterGraph) {}

void CommandO1::execute() {
    scatterGraph_.setDisplay(std::make_shared<DisplayTexture>());
    scatterGraph_.showPoints();
}