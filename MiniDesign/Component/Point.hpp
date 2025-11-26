#include "Component.hpp"
#include "Math/Position.hpp"

class Point : public Component {
public:
    Point();
    explicit Point(const Math::Position& position);
    Point(int x, int y);

    [[nodiscard]] bool isScatterGraph() const override;

private:
    Math::Position position_;
};

