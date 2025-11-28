#include "Commands/Invoker.hpp"
#include "Commands/CommandHandler.hpp"
#include "Components/ScatterGraph.hpp"

#include <iostream>
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
        std::cout << "Entrez les points au format (x,y) :\n> ";
        std::getline(std::cin, args);
    }

    std::string input;
    const ScatterGraph scatterGraph(args);
    CommandHandler handler(scatterGraph);
    
    // Menu
    while (input != "q") {
        std::cout << "\nCommandes:\n"
                  << "a  - Afficher les points et les nuages\n"
                  << "o1 - Afficher l'orthèse avec les textures des points\n"
                  << "o2 - Afficher l'orthèse avec les IDs des points\n"
                  << "f  - Fusionner des points dans un nuage (et appliquer texture)\n"
                  << "d  - Deplacer un point (ID)\n"
                  << "s  - Supprimer un point (ID)\n"
                  << "c1 - Créer les surfaces selon l'ordre des IDs\n"
                  << "c2 - Créer les surfaces selon la distance minimale\n"
                  << "q  - Quitter\n> ";
        getline(std::cin, input);

        Command* cmd = handler.findCommand(input);
        if (cmd) {
            Invoker::execute(*cmd);
        }
    }

    return 0;
}