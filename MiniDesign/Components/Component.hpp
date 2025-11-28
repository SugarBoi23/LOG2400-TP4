#pragma once

class Component {
public:
    Component();
    virtual ~Component() = default;

    [[nodiscard]] int getID() const;
    [[nodiscard]] virtual bool isScatterGraph() const;

private:
    static inline int IDCounter;
    int ID_;
};
