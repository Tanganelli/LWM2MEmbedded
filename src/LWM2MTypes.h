//
// Created by jacko on 20/01/17.
//

#ifndef TEST_SIMBA_LWM2MTYPE_H
#define TEST_SIMBA_LWM2MTYPE_H


#include <IPAddress.h>

#define LWM2M_MAX_ID (65535)
#define LWM2M_OPERATIONS_LEN (4)

typedef enum
{
    MandatoryEnum_Optional = 0,
    MandatoryEnum_Mandatory = 1,
} MandatoryEnum;

typedef enum
{
    MultipleInstancesEnum_Single = 1,
    MultipleInstancesEnum_Multiple = LWM2M_MAX_ID,
} MultipleInstancesEnum;

typedef enum
{
    Lwm2mRegistrationState_NotRegistered,
    Lwm2mRegistrationState_Register,
    Lwm2mRegistrationState_Registering,
    Lwm2mRegistrationState_Registered,
    Lwm2mRegistrationState_Deregister,
    Lwm2mRegistrationState_Deregistering,
    Lwm2mRegistrationState_RegisterFailed,
    Lwm2mRegistrationState_RegisterFailedRetry,
    Lwm2mRegistrationState_UpdatingRegistration,

} Lwm2mRegistrationState;

typedef enum
{
    LWM2MResourceOperations_Invalid = -1, /**< indicates an invalid resource operation */

    LWM2MResourceOperations_None,         /**< indicates no operations are permitted to a management server */
    LWM2MResourceOperations_ReadOnly,     /**< indicates the resource is read-only to a management server */
    LWM2MResourceOperations_WriteOnly,    /**< indicates the resource is write-only to a management server */
    LWM2MResourceOperations_ReadWrite,    /**< indicates the resource can be read and written by a management server */
    LWM2MResourceOperations_Execute,      /**< indicates the resource can be executed by a management server */

} LWM2MOperations;

typedef enum
{
    LWM2MResourceType_Invalid = 0,     /**< indicates an invalid resource type */

    LWM2MResourceType_None,            /**< indicates a resource with no type */
    LWM2MResourceType_String,          /**< indicates a resource capable of holding an ASCII string (UTF-8 is not supported) */
    LWM2MResourceType_Integer,         /**< indicates a resource capable of holding a LWM2M Integer value */
    LWM2MResourceType_Float,           /**< indicates a resource capable of holding a LWM2M Float value */
    LWM2MResourceType_Boolean,         /**< indicates a resource capable of holding a LWM2M Boolean value */
    LWM2MResourceType_Opaque,          /**< indicates a resource capable of holding a LWM2M Opaque value */
    LWM2MResourceType_Time,            /**< indicates a resource capable of holding a LWM2M Time value */
    LWM2MResourceType_ObjectLink,      /**< indicates a resource capable of holding a LWM2M ObjectLink value */

    // arrays (for multiple resource instances) are their own type
            LWM2MResourceType_StringArray,     /**< indicates a multiple-instance resource capable of holding a number of ASCII string values */
    LWM2MResourceType_IntegerArray,    /**< indicates a multiple-instance resource capable of holding a number of LWM2M Integer values */
    LWM2MResourceType_FloatArray,      /**< indicates a multiple-instance resource capable of holding a number of LWM2M Float values */
    LWM2MResourceType_BooleanArray,    /**< indicates a multiple-instance resource capable of holding a number of LWM2M Boolean values */
    LWM2MResourceType_OpaqueArray,     /**< indicates a multiple-instance resource capable of holding a number of LWM2M Opaque values */
    LWM2MResourceType_TimeArray,       /**< indicates a multiple-instance resource capable of holding a number of LWM2M Time values */
    LWM2MResourceType_ObjectLinkArray, /**< indicates a multiple-instance resource capable of holding a number of LWM2M ObjectLink values */

} LWM2MResourceType;

typedef int ObjectIDType;
typedef int ObjectInstanceIDType;
typedef int ResourceIDType;
typedef int ResourceInstanceIDType;

class AddressType {
private:
    IPAddress ip;
public:
    const IPAddress &getIp() const;

    void setIp(const IPAddress &ip);

    int getPort() const;

    void setPort(int port);

private:
    int port;
};


#endif //TEST_SIMBA_LWM2MTYPE_H
