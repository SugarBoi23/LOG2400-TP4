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

int Point::getX() {
    return position_.getX();
}

int Point::getY() {
    return position_.getY();
}

Math::Position Point::getPosition() {
    return position_;
}

void Point::setPosition(const Math::Position& position) {
    position_ = position;
}

bool Point::isScatterGraph() const {
    return false;
}
