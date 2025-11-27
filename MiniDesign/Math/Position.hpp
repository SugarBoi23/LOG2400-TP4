#pragma once

namespace Math {
    class Position {
    public:
        Position();
        Position(const Position& otherPosition);
        Position(int x, int y);

        [[nodiscard]] int getX();
        [[nodiscard]] int getY();

    private:
        int x_;
        int y_;
    };
}