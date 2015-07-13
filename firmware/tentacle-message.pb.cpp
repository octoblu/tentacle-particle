/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.3 at Sun Jul 12 20:15:16 2015. */

#include "tentacle-message.pb.h"

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t TentacleMessage_fields[9] = {
    PB_FIELD(  1, UINT32  , OPTIONAL, STATIC  , FIRST, TentacleMessage, version, version, 0),
    PB_FIELD(  2, ENUM    , OPTIONAL, STATIC  , OTHER, TentacleMessage, topic, version, 0),
    PB_FIELD(  3, BOOL    , OPTIONAL, STATIC  , OTHER, TentacleMessage, response, topic, 0),
    PB_FIELD(  4, MESSAGE , REPEATED, CALLBACK, OTHER, TentacleMessage, pins, response, &Pin_fields),
    PB_FIELD(  5, MESSAGE , OPTIONAL, STATIC  , OTHER, TentacleMessage, authentication, pins, &MeshbluAuthentication_fields),
    PB_FIELD(  6, BOOL    , OPTIONAL, STATIC  , OTHER, TentacleMessage, broadcastPins, authentication, 0),
    PB_FIELD(  7, UINT32  , OPTIONAL, STATIC  , OTHER, TentacleMessage, broadcastInterval, broadcastPins, 0),
    PB_FIELD(  8, STRING  , OPTIONAL, CALLBACK, OTHER, TentacleMessage, customData, broadcastInterval, 0),
    PB_LAST_FIELD
};

const pb_field_t Pin_fields[4] = {
    PB_FIELD(  1, UINT32  , OPTIONAL, STATIC  , FIRST, Pin, number, number, 0),
    PB_FIELD(  2, UINT32  , OPTIONAL, STATIC  , OTHER, Pin, value, number, 0),
    PB_FIELD(  3, ENUM    , OPTIONAL, STATIC  , OTHER, Pin, action, value, 0),
    PB_LAST_FIELD
};

const pb_field_t MeshbluAuthentication_fields[3] = {
    PB_FIELD(  1, STRING  , OPTIONAL, STATIC  , FIRST, MeshbluAuthentication, uuid, uuid, 0),
    PB_FIELD(  2, STRING  , OPTIONAL, STATIC  , OTHER, MeshbluAuthentication, token, uuid, 0),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(TentacleMessage, pins) < 65536 && pb_membersize(TentacleMessage, authentication) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_TentacleMessage_Pin_MeshbluAuthentication)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(TentacleMessage, pins) < 256 && pb_membersize(TentacleMessage, authentication) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_TentacleMessage_Pin_MeshbluAuthentication)
#endif


