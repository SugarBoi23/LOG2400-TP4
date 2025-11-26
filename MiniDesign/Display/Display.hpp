#pragma once

#include <affichage.hpp>

#include <map>
#include <String>

class Display {
public:
    explicit Display(std::map<std::string, Point>& points);
    virtual ~Display() = default;

    virtual void show() = 0;

private:
    std::map<std::string, Point> points;
};
