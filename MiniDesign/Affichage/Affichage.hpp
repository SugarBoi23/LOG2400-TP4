#pragma once

#include <vector>
#include <affichage.hpp>

class Affichage {
public:
    explicit Affichage(std::vector<Point>& points);
    ~Affichage() = default;

    virtual void imprimer() = 0;

private:
    std::vector<Point> points;
};
