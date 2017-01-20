//
// Created by jacko on 20/01/17.
//

#ifndef LWM2MEMBEDDED_LWM2MRESOURCE_H
#define LWM2MEMBEDDED_LWM2MRESOURCE_H


#include <list>
#include "LWM2MTypes.h"

class LWM2MResource {
private:
    char * ResourceName;
    ResourceIDType ResourceID;
    void* handlers[LWM2M_OPERATIONS_LEN];
    LWM2MOperations operations;
    std::list<LWM2MResource> children;
    LWM2MResourceType Type;
};


#endif //LWM2MEMBEDDED_LWM2MRESOURCE_H
