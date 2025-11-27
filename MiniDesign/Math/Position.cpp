#include "Position.hpp"

Math::Position::Position() {
    x_ = 0;
    y_ = 0;
}

Math::Position::Position(const Position& otherPosition) {
    x_ = otherPosition.x_;
    y_ = otherPosition.y_;
}

Math::Position::Position(int x, int y) {
    x_ = x;
    y_ = y;
}

int Math::Position::getX() {
    return x_;
}

int Math::Position::getY() {
    return y_;
}
