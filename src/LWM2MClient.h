//
// Created by jacko on 20/01/17.
//

#ifndef LWM2MEMBEDDED_LWM2MCLIENT_H
#define LWM2MEMBEDDED_LWM2MCLIENT_H


#include <IPAddress.h>
#include "LWM2MBootstrap.h"
#include "LWM2MServerObject.h"
#include "LWM2MObject.h"
#include "LWM2MRegistration.h"
#include <list>
#include <map>
#include <memory>


class LWM2MClient {
private:
    std::list<LWM2MServerObject> LWM2MServers; // list of LWM2M Servers
    std::map<String, LWM2MObject> LWM2MObjects;
    std::unique_ptr<LWM2MRegistration> registrationObject;
/*
    Lwm2mBootStrapState BootStrapState;       // Current bootstrap state
    uint32_t LastBootStrapUpdate;             // Time that the last bootstrap state-machine update was performed
    std::list<LWM2MServerObject> ServerList;  // Linked list of "Lwm2mServerType" for the registration process
    std::list<LWM2MSecurityInfo>  SecurityObjectList;       // Linked list of "LWM2MSecurityInfo"
    LWM2MObjectTree ObjectTree;
    ObjectStore * Store;                      // Object store associated with this context
    AttributeStore * AttributeStore;          // Notification Attributes store associated with this context
    DefinitionRegistry * Definitions;         // Storage for object/resource definitions.
    ResourceEndPointList EndPointList;        // CoaP endpoints.
    CoapInfo * Coap;                          // CoAP library context information
    char EndPointName[MAX_ENDPOINT_NAME_LENGTH];  // Client EndPoint name
    bool UseFactoryBootstrap;                 // Factory bootstrap information has been loaded from file.
    struct ListHead ObserverList;
    void * ApplicationContext;*/

};


#endif //LWM2MEMBEDDED_LWM2MCLIENT_H
