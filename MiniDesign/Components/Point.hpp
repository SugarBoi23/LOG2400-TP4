#pragma once

#include "Component.hpp"
#include "Math/Position.hpp"

class Point : public Component {
public:
    Point();
    explicit Point(const Math::Position& position);
    Point(int x, int y);

    [[nodiscard]] int getX();
    [[nodiscard]] int getY();
    [[nodiscard]] Math::Position getPosition();
    void setPosition(const Math::Position& position);
    [[nodiscard]] bool isScatterGraph() const override;

private:
    Math::Position position_;
};

