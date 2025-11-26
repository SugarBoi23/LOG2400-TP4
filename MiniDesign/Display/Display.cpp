#include "Display.hpp"

#include <map>
#include <string>

Display::Display(std::map<std::string, Point>& points)
    : points(points) { }

