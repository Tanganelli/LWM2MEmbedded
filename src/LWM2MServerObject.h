//
// Created by jacko on 20/01/17.
//

#ifndef LWM2MEMBEDDED_LWM2MSERVEROBJECT_H
#define LWM2MEMBEDDED_LWM2MSERVEROBJECT_H


#include <stdint.h>
#include "LWM2MTypes.h"

#define SERVER_URI_LEN (255)
#define MSISDN_LEN (16)

class LWM2MServerObject {
private:
    char ServerURI[SERVER_URI_LEN];     // Uniquely identifies the LWM2M server or Bootstrap server. i.e coap://host:port
    AddressType address;                // Stores the host IP address and port
    Lwm2mRegistrationState RegistrationState;
    int ServerObjectInstanceID;         // resource created on the server
    uint32_t LastUpdate;
    int LifeTime;
    char Binding[4];    // maximum "UQS" + '\0'
    char Version[4];    // "1.0" + '\0'
    char Sms[MSISDN_LEN];   // 15 + '\0'

public:
    LWM2MServerObject();

    const char *getServerURI() const;

    const AddressType &getAddress() const;

    void setAddress(const AddressType &address);

    Lwm2mRegistrationState getRegistrationState() const;

    void setRegistrationState(Lwm2mRegistrationState RegistrationState);

    int getServerObjectInstanceID() const;

    void setServerObjectInstanceID(int ServerObjectInstanceID);

    uint32_t getLastUpdate() const;

    void setLastUpdate(uint32_t LastUpdate);

    int getLifeTime() const;

    void setLifeTime(int LifeTime);

    const char *getBinding() const;

    const char *getVersion() const;

    const char *getSms() const;

};


#endif //LWM2MEMBEDDED_LWM2MSERVEROBJECT_H
