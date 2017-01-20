//
// Created by jacko on 20/01/17.
//

#ifndef TEST_SIMBA_LWM2MOBJECT_H
#define TEST_SIMBA_LWM2MOBJECT_H

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
};


#endif //TEST_SIMBA_LWM2MOBJECT_H
