/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.3 at Thu Jul 16 00:07:18 2015. */

#ifndef PB_TENTACLE_MESSAGE_PB_H_INCLUDED
#define PB_TENTACLE_MESSAGE_PB_H_INCLUDED
#include "pb.h"

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _TentacleMessageTopic {
    TentacleMessageTopic_config = 0,
    TentacleMessageTopic_action = 1,
    TentacleMessageTopic_authentication = 2,
    TentacleMessageTopic_ping = 3
} TentacleMessageTopic;

typedef enum _Action {
    Action_digitalRead = 0,
    Action_digitalReadPullup = 1,
    Action_digitalWrite = 2,
    Action_analogRead = 3,
    Action_analogReadPullup = 4,
    Action_analogWrite = 5,
    Action_servoWrite = 6,
    Action_pwmWrite = 7,
    Action_i2cWrite = 8,
    Action_i2cRead = 9,
    Action_ignore = 10
} Action;

/* Struct definitions */
typedef struct _MeshbluAuthentication {
    bool has_uuid;
    char uuid[64];
    bool has_token;
    char token[64];
} MeshbluAuthentication;

typedef struct _Pin {
    bool has_number;
    uint32_t number;
    bool has_value;
    uint32_t value;
    bool has_action;
    Action action;
} Pin;

typedef struct _TentacleMessage {
    bool has_version;
    uint32_t version;
    bool has_topic;
    TentacleMessageTopic topic;
    bool has_response;
    bool response;
    pb_callback_t pins;
    bool has_authentication;
    MeshbluAuthentication authentication;
    bool has_broadcastPins;
    bool broadcastPins;
    bool has_broadcastInterval;
    uint32_t broadcastInterval;
    pb_callback_t customData;
} TentacleMessage;

/* Default values for struct fields */

/* Initializer values for message structs */
#define TentacleMessage_init_default             {false, 0, false, (TentacleMessageTopic)0, false, 0, {{NULL}, NULL}, false, MeshbluAuthentication_init_default, false, 0, false, 0, {{NULL}, NULL}}
#define Pin_init_default                         {false, 0, false, 0, false, (Action)0}
#define MeshbluAuthentication_init_default       {false, "", false, ""}
#define TentacleMessage_init_zero                {false, 0, false, (TentacleMessageTopic)0, false, 0, {{NULL}, NULL}, false, MeshbluAuthentication_init_zero, false, 0, false, 0, {{NULL}, NULL}}
#define Pin_init_zero                            {false, 0, false, 0, false, (Action)0}
#define MeshbluAuthentication_init_zero          {false, "", false, ""}

/* Field tags (for use in manual encoding/decoding) */
#define MeshbluAuthentication_uuid_tag           1
#define MeshbluAuthentication_token_tag          2
#define Pin_number_tag                           1
#define Pin_value_tag                            2
#define Pin_action_tag                           3
#define TentacleMessage_version_tag              1
#define TentacleMessage_topic_tag                2
#define TentacleMessage_response_tag             3
#define TentacleMessage_pins_tag                 4
#define TentacleMessage_authentication_tag       5
#define TentacleMessage_broadcastPins_tag        6
#define TentacleMessage_broadcastInterval_tag    7
#define TentacleMessage_customData_tag           8

/* Struct field encoding specification for nanopb */
extern const pb_field_t TentacleMessage_fields[9];
extern const pb_field_t Pin_fields[4];
extern const pb_field_t MeshbluAuthentication_fields[3];

/* Maximum encoded size of messages (where known) */
#define Pin_size                                 18
#define MeshbluAuthentication_size               132

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define TENTACLE_MESSAGE_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
