#include "Component.hpp"

Component::Component() {
    ID_ = IDCounter++;
}

int Component::getID() const {
    return ID_;
}

bool Component::isScatterGraph() const {
    return false;
}
