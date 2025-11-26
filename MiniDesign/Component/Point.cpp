#include "Math/Position.hpp"
#include "Point.hpp"

Point::Point() {
    position_ = Math::Position();
}

Point::Point(const Math::Position& position) {
    position_ = position;
}

Point::Point(int x, int y) {
    position_ = Math::Position(x, y);
}

bool Point::isScatterGraph() const {
    return false;
}
