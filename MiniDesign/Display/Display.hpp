#pragma once

#include <vector>
#include <affichage.hpp>

class Display {
public:
    explicit Display(std::vector<Point>& points);
    virtual ~Display() = default;

    virtual void show() = 0;

private:
    std::vector<Point> points;
};
