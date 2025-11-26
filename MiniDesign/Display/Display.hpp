#pragma once

#include "affichage.hpp"

#include <map>
#include <String>

class Display {
public:
    Display() = default;
    virtual ~Display() = default;

    virtual void show(std::map<std::string, Point>& points);
};