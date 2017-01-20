//
// Created by jacko on 20/01/17.
//

#ifndef LWM2MEMBEDDED_LWM2MOBJECT_H
#define LWM2MEMBEDDED_LWM2MOBJECT_H

#include <list>
#include "LWM2MTypes.h"
#include "LWM2MResource.h"

class LWM2MObject {
private:
    char * ObjectName;
    ObjectIDType ObjectID;
    std::list<LWM2MResource> Resources;
    void* handlers[LWM2M_OPERATIONS_LEN];

    std::list<LWM2MObject> children;

public:
    char *getObjectName() const;

    void setObjectName(char *ObjectName);

    ObjectIDType getObjectID() const;

    void setObjectID(ObjectIDType ObjectID);

    const std::list<LWM2MResource> &getResources() const;

    void setResources(const std::list<LWM2MResource> &Resources);

    void *const *getHandlers() const;

    const std::list<LWM2MObject> &getChildren() const;

    void setChildren(const std::list<LWM2MObject> &children);
};


#endif //LWM2MEMBEDDED_LWM2MOBJECT_H
