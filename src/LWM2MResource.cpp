//
// Created by jacko on 20/01/17.
//

#include "LWM2MResource.h"

char *LWM2MResource::getResourceName() const {
    return ResourceName;
}

void LWM2MResource::setResourceName(char *ResourceName) {
    LWM2MResource::ResourceName = ResourceName;
}

ResourceIDType LWM2MResource::getResourceID() const {
    return ResourceID;
}

void LWM2MResource::setResourceID(ResourceIDType ResourceID) {
    LWM2MResource::ResourceID = ResourceID;
}

void *const *LWM2MResource::getHandlers() const {
    return handlers;
}

LWM2MOperations LWM2MResource::getOperations() const {
    return operations;
}

void LWM2MResource::setOperations(LWM2MOperations operations) {
    LWM2MResource::operations = operations;
}

const std::list<LWM2MResource> &LWM2MResource::getChildren() const {
    return children;
}

void LWM2MResource::setChildren(const std::list<LWM2MResource> &children) {
    LWM2MResource::children = children;
}

LWM2MResourceType LWM2MResource::getType() const {
    return Type;
}

void LWM2MResource::setType(LWM2MResourceType Type) {
    LWM2MResource::Type = Type;
}
