//
// Created by jacko on 20/01/17.
//

#ifndef TEST_SIMBA_LWM2MBOOTSTRAP_H
#define TEST_SIMBA_LWM2MBOOTSTRAP_H

typedef enum
{
    Lwm2mBootStrapState_NotBootStrapped,
    Lwm2mBootStrapState_BootStrapPending,
    Lwm2mBootStrapState_CheckExisting,
    Lwm2mBootStrapState_ClientHoldOff,
    Lwm2mBootStrapState_BootStrapFinishPending,  // Waiting for the server to send a bootstrap finished.
    Lwm2mBootStrapState_BootStrapped,
    Lwm2mBootStrapState_BootStrapFailed,

} Lwm2mBootStrapState;

class LWM2MBootstrap {

};


#endif //TEST_SIMBA_LWM2MBOOTSTRAP_H
