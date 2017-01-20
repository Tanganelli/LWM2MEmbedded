//
// Created by jacko on 20/01/17.
//

#include "LWM2MObject.h"

char *LWM2MObject::getObjectName() const {
    return ObjectName;
}

void LWM2MObject::setObjectName(char *ObjectName) {
    LWM2MObject::ObjectName = ObjectName;
}

ObjectIDType LWM2MObject::getObjectID() const {
    return ObjectID;
}

void LWM2MObject::setObjectID(ObjectIDType ObjectID) {
    LWM2MObject::ObjectID = ObjectID;
}

const std::list<LWM2MResource> &LWM2MObject::getResources() const {
    return Resources;
}

void LWM2MObject::setResources(const std::list<LWM2MResource> &Resources) {
    LWM2MObject::Resources = Resources;
}

void *const *LWM2MObject::getHandlers() const {
    return handlers;
}

const std::list<LWM2MObject> &LWM2MObject::getChildren() const {
    return children;
}

void LWM2MObject::setChildren(const std::list<LWM2MObject> &children) {
    LWM2MObject::children = children;
}
