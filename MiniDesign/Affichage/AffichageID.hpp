#pragma once

#include "Affichage.hpp"

class AffichageID : public Affichage {
public:
    explicit AffichageID(std::vector<Point>& points);

    void imprimer() override;
};