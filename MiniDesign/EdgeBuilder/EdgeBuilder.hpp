#pragma once

#include <map>
#include <string>

class EdgeBuilder {
public:
    EdgeBuilder() = default;
    virtual ~EdgeBuilder() = default;

    virtual void build(std::map<std::string, Point>& points);
};
