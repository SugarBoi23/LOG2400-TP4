#pragma once
#include <string>

class BuildEdges {
public:
    explicit BuildEdges(std::map<std::string, Point>& points);
    virtual ~BuildEdges() = default;

    virtual void build() = 0;
};
