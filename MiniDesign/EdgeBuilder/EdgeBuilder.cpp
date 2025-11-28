#include "Component/ScatterGraph.hpp"
#include "EdgeBuilder.hpp"
#include "Utils/Utils.hpp"

#include <cmath>
#include <memory>
#include <vector>

void EdgeBuilder::traceLine(Grid& grid, Point start, Point end) {
    int x0 = start.getX();
    int y0 = start.getY();
    int x1 = end.getX();
    int y1 = end.getY();
    int lignes = abs(y1 - y0);
    // Si la ligne est horizontale
    if (lignes == 0) {
        // On prend distance horizontale
        lignes = abs(x1 - x0);
        for (int i = 0; i <= lignes; ++i) {
            // On trace chaque point de la ligne, de gauche à droite ou de droite à gauche selon la direction.
            int x = (x0 < x1) ? x0 + i : x0 - i;
            if (y1 >= 0 && y1 < HEIGHT && x >= 0 && x < WIDTH) {
                grid[y1][x] = '/';
            }
        }
    } else {
        // Si la ligne est verticale ou diagonale
        for (int i = 0; i <= lignes; ++i) {
            double t = (double)i / lignes;
            // On fait une interpolation lineaire
            int x = round(x0 + t * (x1 - x0));
            int y = round(y0 + t * (y1 - y0));
            if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT) {
                grid[y][x] = '/';
            }
        }
    }
}

void EdgeBuilder::build(Grid& grid, ComponentList points) {}

void EdgeBuilder::mergeGraphs(ComponentList& components) {
    ComponentList newComponents{};
    for (const auto & component : components) {
        if (auto graphPtr = std::dynamic_pointer_cast<ScatterGraph>(component)) {
            newComponents.insert(newComponents.end(),
                                 graphPtr->getComponents().begin(),
                                 graphPtr->getComponents().end());
        }
    }
    components.insert(components.end(), newComponents.begin(), newComponents.end());

    for (int i = static_cast<int>(components.size()) - 1; i >= 0; --i) {
        if (std::dynamic_pointer_cast<ScatterGraph>(components[i])) {
            components.erase(components.begin() + i);
        }
    }
}

void EdgeBuilder::clearGrid(Grid& grid) {
    for (int y = 0; y < HEIGHT; ++y) {
        for (int x = 0; x < WIDTH; ++x) {
            grid[y][x] = " ";
        }
    }
}
