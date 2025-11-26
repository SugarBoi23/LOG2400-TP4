#include "Position.hpp"

Math::Position::Position() {
    x_ = 0;
    y_ = 0;
}

Math::Position::Position(const Position& otherPosition) {
    x_ = otherPosition.x;
    y_ = otherPosition.y;
}

Math::Position::Position(int x, int y) {
    x_ = x;
    y_ = y;
}