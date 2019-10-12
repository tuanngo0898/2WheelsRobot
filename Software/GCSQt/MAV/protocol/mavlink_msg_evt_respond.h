#pragma once
// MESSAGE EVT_RESPOND PACKING

#define MAVLINK_MSG_ID_EVT_RESPOND 0

MAVPACKED(
typedef struct __mavlink_evt_respond_t {
 uint8_t EVT_RESPOND; /*<  Respond*/
}) mavlink_evt_respond_t;

#define MAVLINK_MSG_ID_EVT_RESPOND_LEN 1
#define MAVLINK_MSG_ID_EVT_RESPOND_MIN_LEN 1
#define MAVLINK_MSG_ID_0_LEN 1
#define MAVLINK_MSG_ID_0_MIN_LEN 1

#define MAVLINK_MSG_ID_EVT_RESPOND_CRC 80
#define MAVLINK_MSG_ID_0_CRC 80



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_EVT_RESPOND { \
    0, \
    "EVT_RESPOND", \
    1, \
    {  { "EVT_RESPOND", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_evt_respond_t, EVT_RESPOND) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_EVT_RESPOND { \
    "EVT_RESPOND", \
    1, \
    {  { "EVT_RESPOND", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_evt_respond_t, EVT_RESPOND) }, \
         } \
}
#endif

/**
 * @brief Pack a evt_respond message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param EVT_RESPOND  Respond
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_evt_respond_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t EVT_RESPOND)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EVT_RESPOND_LEN];
    _mav_put_uint8_t(buf, 0, EVT_RESPOND);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EVT_RESPOND_LEN);
#else
    mavlink_evt_respond_t packet;
    packet.EVT_RESPOND = EVT_RESPOND;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EVT_RESPOND_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_EVT_RESPOND;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_EVT_RESPOND_MIN_LEN, MAVLINK_MSG_ID_EVT_RESPOND_LEN, MAVLINK_MSG_ID_EVT_RESPOND_CRC);
}

/**
 * @brief Pack a evt_respond message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param EVT_RESPOND  Respond
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_evt_respond_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t EVT_RESPOND)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EVT_RESPOND_LEN];
    _mav_put_uint8_t(buf, 0, EVT_RESPOND);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EVT_RESPOND_LEN);
#else
    mavlink_evt_respond_t packet;
    packet.EVT_RESPOND = EVT_RESPOND;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EVT_RESPOND_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_EVT_RESPOND;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_EVT_RESPOND_MIN_LEN, MAVLINK_MSG_ID_EVT_RESPOND_LEN, MAVLINK_MSG_ID_EVT_RESPOND_CRC);
}

/**
 * @brief Encode a evt_respond struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param evt_respond C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_evt_respond_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_evt_respond_t* evt_respond)
{
    return mavlink_msg_evt_respond_pack(system_id, component_id, msg, evt_respond->EVT_RESPOND);
}

/**
 * @brief Encode a evt_respond struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param evt_respond C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_evt_respond_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_evt_respond_t* evt_respond)
{
    return mavlink_msg_evt_respond_pack_chan(system_id, component_id, chan, msg, evt_respond->EVT_RESPOND);
}

/**
 * @brief Send a evt_respond message
 * @param chan MAVLink channel to send the message
 *
 * @param EVT_RESPOND  Respond
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_evt_respond_send(mavlink_channel_t chan, uint8_t EVT_RESPOND)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EVT_RESPOND_LEN];
    _mav_put_uint8_t(buf, 0, EVT_RESPOND);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EVT_RESPOND, buf, MAVLINK_MSG_ID_EVT_RESPOND_MIN_LEN, MAVLINK_MSG_ID_EVT_RESPOND_LEN, MAVLINK_MSG_ID_EVT_RESPOND_CRC);
#else
    mavlink_evt_respond_t packet;
    packet.EVT_RESPOND = EVT_RESPOND;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EVT_RESPOND, (const char *)&packet, MAVLINK_MSG_ID_EVT_RESPOND_MIN_LEN, MAVLINK_MSG_ID_EVT_RESPOND_LEN, MAVLINK_MSG_ID_EVT_RESPOND_CRC);
#endif
}

/**
 * @brief Send a evt_respond message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_evt_respond_send_struct(mavlink_channel_t chan, const mavlink_evt_respond_t* evt_respond)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_evt_respond_send(chan, evt_respond->EVT_RESPOND);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EVT_RESPOND, (const char *)evt_respond, MAVLINK_MSG_ID_EVT_RESPOND_MIN_LEN, MAVLINK_MSG_ID_EVT_RESPOND_LEN, MAVLINK_MSG_ID_EVT_RESPOND_CRC);
#endif
}

#if MAVLINK_MSG_ID_EVT_RESPOND_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_evt_respond_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t EVT_RESPOND)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, EVT_RESPOND);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EVT_RESPOND, buf, MAVLINK_MSG_ID_EVT_RESPOND_MIN_LEN, MAVLINK_MSG_ID_EVT_RESPOND_LEN, MAVLINK_MSG_ID_EVT_RESPOND_CRC);
#else
    mavlink_evt_respond_t *packet = (mavlink_evt_respond_t *)msgbuf;
    packet->EVT_RESPOND = EVT_RESPOND;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EVT_RESPOND, (const char *)packet, MAVLINK_MSG_ID_EVT_RESPOND_MIN_LEN, MAVLINK_MSG_ID_EVT_RESPOND_LEN, MAVLINK_MSG_ID_EVT_RESPOND_CRC);
#endif
}
#endif

#endif

// MESSAGE EVT_RESPOND UNPACKING


/**
 * @brief Get field EVT_RESPOND from evt_respond message
 *
 * @return  Respond
 */
static inline uint8_t mavlink_msg_evt_respond_get_EVT_RESPOND(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a evt_respond message into a struct
 *
 * @param msg The message to decode
 * @param evt_respond C-struct to decode the message contents into
 */
static inline void mavlink_msg_evt_respond_decode(const mavlink_message_t* msg, mavlink_evt_respond_t* evt_respond)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    evt_respond->EVT_RESPOND = mavlink_msg_evt_respond_get_EVT_RESPOND(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_EVT_RESPOND_LEN? msg->len : MAVLINK_MSG_ID_EVT_RESPOND_LEN;
        memset(evt_respond, 0, MAVLINK_MSG_ID_EVT_RESPOND_LEN);
    memcpy(evt_respond, _MAV_PAYLOAD(msg), len);
#endif
}