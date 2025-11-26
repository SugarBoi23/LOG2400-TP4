#pragma once

class ConstructEdges {
public:
    explicit ConstructEdges();
    virtual ~ConstructEdges() = default;

    virtual void build() = 0;
};
