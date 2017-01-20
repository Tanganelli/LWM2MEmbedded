//
// Created by jacko on 20/01/17.
//

#include "LWM2MTypes.h"

const IPAddress &AddressType::getIp() const {
    return ip;
}

void AddressType::setIp(const IPAddress &ip) {
    AddressType::ip = ip;
}

int AddressType::getPort() const {
    return port;
}

void AddressType::setPort(int port) {
    AddressType::port = port;
}
