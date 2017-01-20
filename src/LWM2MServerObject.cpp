//
// Created by jacko on 20/01/17.
//

#include "LWM2MServerObject.h"

const char *LWM2MServerObject::getServerURI() const {
    return ServerURI;
}

const AddressType &LWM2MServerObject::getAddress() const {
    return address;
}

void LWM2MServerObject::setAddress(const AddressType &address) {
    LWM2MServerObject::address = address;
}

Lwm2mRegistrationState LWM2MServerObject::getRegistrationState() const {
    return RegistrationState;
}

void LWM2MServerObject::setRegistrationState(Lwm2mRegistrationState RegistrationState) {
    LWM2MServerObject::RegistrationState = RegistrationState;
}

int LWM2MServerObject::getServerObjectInstanceID() const {
    return ServerObjectInstanceID;
}

void LWM2MServerObject::setServerObjectInstanceID(int ServerObjectInstanceID) {
    LWM2MServerObject::ServerObjectInstanceID = ServerObjectInstanceID;
}

uint32_t LWM2MServerObject::getLastUpdate() const {
    return LastUpdate;
}

void LWM2MServerObject::setLastUpdate(uint32_t LastUpdate) {
    LWM2MServerObject::LastUpdate = LastUpdate;
}

int LWM2MServerObject::getLifeTime() const {
    return LifeTime;
}

void LWM2MServerObject::setLifeTime(int LifeTime) {
    LWM2MServerObject::LifeTime = LifeTime;
}

const char *LWM2MServerObject::getBinding() const {
    return Binding;
}

const char *LWM2MServerObject::getVersion() const {
    return Version;
}

const char *LWM2MServerObject::getSms() const {
    return Sms;
}

LWM2MServerObject::LWM2MServerObject() : RegistrationState(Lwm2mRegistrationState_NotRegistered) {

}
