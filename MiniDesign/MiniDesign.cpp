#include "Commands/Invoker.hpp"
#include "Commands/CommandHandler.hpp"
#include "Components/ScatterGraph.hpp"

#include <iostream>
#include <memory>
#include <sstream>
#include <string>

int main(int argc, char* argv[]) {
    std::string args;
    // On accepte des points en entrée.
    if (argc > 1) {
        std::ostringstream oss;
        for (int i = 1; i < argc; ++i) oss << argv[i] << " "; {
            args = oss.str();
        }
    } else {
        std::cout << "Enter the points in the following format: (x,y) (a,b) :\n> ";
        std::getline(std::cin, args);
    }

    std::string input;
    const ScatterGraph scatterGraph(args);
    CommandHandler handler(scatterGraph);
    
    // Menu
    while (input != "q") {
        std::cout << "\nCommands:\n"
                  << "a  - Show points and scatter graphs\n"
                  << "o1 - Show orthosis with the points' textures\n"
                  << "o2 - Show orthosis with the points' IDs\n"
                  << "f  - Fusion the points into a scatter graph (and apply texture)\n"
                  << "d  - Move a point (ID)\n"
                  << "s  - Delete a point (ID)\n"
                  << "c1 - Create surfaces depending on ID ascending order\n"
                  << "c2 - Create surfaces depending minimum distance\n"
                  << "q  - Quit\n> ";
        getline(std::cin, input);

        if (std::unique_ptr<Command> cmd = handler.findCommand(input)) {
            Invoker::execute(*cmd);
        }
    }

    return 0;
}