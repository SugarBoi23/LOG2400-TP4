#include "Display.hpp"
#include "DisplayTexture.hpp"

#include <map>
#include <string>

DisplayTexture::DisplayTexture(std::map<std::string, Point>& points)
        : Display(points) {};

void DisplayTexture::show() {

}