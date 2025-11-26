#pragma once

#include "Affichage.hpp"

class AffichageTexture : public Affichage {
public:
    explicit AffichageTexture(std::vector<Point>& points);

    void imprimer() override;
};