#pragma once

#include <map>
#include <string>

class BuildEdges {
public:
    BuildEdges() = default;
    virtual ~BuildEdges() = default;

    virtual void build(std::map<std::string, Point>& points);
};
