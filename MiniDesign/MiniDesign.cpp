#include "affichage.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

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
    
    // Voici des fonctions utiles pour réaliser le TP. 
    // TODO: Il faudrait les placer dans des classes appropriées.
    std::vector<Point> points = creerPoints(args);
    imprimerGrille(points);
    
    // Ce sont différentes textures possibles. Seules les 2 premières sont utilisées dans les scénarios du TP.
    std::vector<char> texturesNuages = {'o', '#', '$'};
    std::string cmd;
    
    // Menu
    while (true) {
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
        getline(std::cin, cmd);

        if (cmd == "q") break;
    }

    return 0;
}