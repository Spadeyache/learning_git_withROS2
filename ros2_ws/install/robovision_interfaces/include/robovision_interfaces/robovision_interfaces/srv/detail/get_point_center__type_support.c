// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robovision_interfaces:srv/GetPointCenter.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robovision_interfaces/srv/detail/get_point_center__rosidl_typesupport_introspection_c.h"
#include "robovision_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robovision_interfaces/srv/detail/get_point_center__functions.h"
#include "robovision_interfaces/srv/detail/get_point_center__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robovision_interfaces__srv__GetPointCenter_Request__rosidl_typesupport_introspection_c__GetPointCenter_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robovision_interfaces__srv__GetPointCenter_Request__init(message_memory);
}

void robovision_interfaces__srv__GetPointCenter_Request__rosidl_typesupport_introspection_c__GetPointCenter_Request_fini_function(void * message_memory)
{
  robovision_interfaces__srv__GetPointCenter_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robovision_interfaces__srv__GetPointCenter_Request__rosidl_typesupport_introspection_c__GetPointCenter_Request_message_member_array[2] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robovision_interfaces__srv__GetPointCenter_Request, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robovision_interfaces__srv__GetPointCenter_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robovision_interfaces__srv__GetPointCenter_Request__rosidl_typesupport_introspection_c__GetPointCenter_Request_message_members = {
  "robovision_interfaces__srv",  // message namespace
  "GetPointCenter_Request",  // message name
  2,  // number of fields
  sizeof(robovision_interfaces__srv__GetPointCenter_Request),
  false,  // has_any_key_member_
  robovision_interfaces__srv__GetPointCenter_Request__rosidl_typesupport_introspection_c__GetPointCenter_Request_message_member_array,  // message members
  robovision_interfaces__srv__GetPointCenter_Request__rosidl_typesupport_introspection_c__GetPointCenter_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  robovision_interfaces__srv__GetPointCenter_Request__rosidl_typesupport_introspection_c__GetPointCenter_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robovision_interfaces__srv__GetPointCenter_Request__rosidl_typesupport_introspection_c__GetPointCenter_Request_message_type_support_handle = {
  0,
  &robovision_interfaces__srv__GetPointCenter_Request__rosidl_typesupport_introspection_c__GetPointCenter_Request_message_members,
  get_message_typesupport_handle_function,
  &robovision_interfaces__srv__GetPointCenter_Request__get_type_hash,
  &robovision_interfaces__srv__GetPointCenter_Request__get_type_description,
  &robovision_interfaces__srv__GetPointCenter_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robovision_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robovision_interfaces, srv, GetPointCenter_Request)() {
  if (!robovision_interfaces__srv__GetPointCenter_Request__rosidl_typesupport_introspection_c__GetPointCenter_Request_message_type_support_handle.typesupport_identifier) {
    robovision_interfaces__srv__GetPointCenter_Request__rosidl_typesupport_introspection_c__GetPointCenter_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robovision_interfaces__srv__GetPointCenter_Request__rosidl_typesupport_introspection_c__GetPointCenter_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robovision_interfaces/srv/detail/get_point_center__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robovision_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robovision_interfaces/srv/detail/get_point_center__functions.h"
// already included above
// #include "robovision_interfaces/srv/detail/get_point_center__struct.h"


// Include directives for member types
// Member `point`
#include "robovision_interfaces/msg/object_centroid.h"
// Member `point`
#include "robovision_interfaces/msg/detail/object_centroid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robovision_interfaces__srv__GetPointCenter_Response__rosidl_typesupport_introspection_c__GetPointCenter_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robovision_interfaces__srv__GetPointCenter_Response__init(message_memory);
}

void robovision_interfaces__srv__GetPointCenter_Response__rosidl_typesupport_introspection_c__GetPointCenter_Response_fini_function(void * message_memory)
{
  robovision_interfaces__srv__GetPointCenter_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robovision_interfaces__srv__GetPointCenter_Response__rosidl_typesupport_introspection_c__GetPointCenter_Response_message_member_array[1] = {
  {
    "point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robovision_interfaces__srv__GetPointCenter_Response, point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robovision_interfaces__srv__GetPointCenter_Response__rosidl_typesupport_introspection_c__GetPointCenter_Response_message_members = {
  "robovision_interfaces__srv",  // message namespace
  "GetPointCenter_Response",  // message name
  1,  // number of fields
  sizeof(robovision_interfaces__srv__GetPointCenter_Response),
  false,  // has_any_key_member_
  robovision_interfaces__srv__GetPointCenter_Response__rosidl_typesupport_introspection_c__GetPointCenter_Response_message_member_array,  // message members
  robovision_interfaces__srv__GetPointCenter_Response__rosidl_typesupport_introspection_c__GetPointCenter_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  robovision_interfaces__srv__GetPointCenter_Response__rosidl_typesupport_introspection_c__GetPointCenter_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robovision_interfaces__srv__GetPointCenter_Response__rosidl_typesupport_introspection_c__GetPointCenter_Response_message_type_support_handle = {
  0,
  &robovision_interfaces__srv__GetPointCenter_Response__rosidl_typesupport_introspection_c__GetPointCenter_Response_message_members,
  get_message_typesupport_handle_function,
  &robovision_interfaces__srv__GetPointCenter_Response__get_type_hash,
  &robovision_interfaces__srv__GetPointCenter_Response__get_type_description,
  &robovision_interfaces__srv__GetPointCenter_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robovision_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robovision_interfaces, srv, GetPointCenter_Response)() {
  robovision_interfaces__srv__GetPointCenter_Response__rosidl_typesupport_introspection_c__GetPointCenter_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robovision_interfaces, msg, ObjectCentroid)();
  if (!robovision_interfaces__srv__GetPointCenter_Response__rosidl_typesupport_introspection_c__GetPointCenter_Response_message_type_support_handle.typesupport_identifier) {
    robovision_interfaces__srv__GetPointCenter_Response__rosidl_typesupport_introspection_c__GetPointCenter_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robovision_interfaces__srv__GetPointCenter_Response__rosidl_typesupport_introspection_c__GetPointCenter_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robovision_interfaces/srv/detail/get_point_center__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robovision_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robovision_interfaces/srv/detail/get_point_center__functions.h"
// already included above
// #include "robovision_interfaces/srv/detail/get_point_center__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "robovision_interfaces/srv/get_point_center.h"
// Member `request`
// Member `response`
// already included above
// #include "robovision_interfaces/srv/detail/get_point_center__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__GetPointCenter_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robovision_interfaces__srv__GetPointCenter_Event__init(message_memory);
}

void robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__GetPointCenter_Event_fini_function(void * message_memory)
{
  robovision_interfaces__srv__GetPointCenter_Event__fini(message_memory);
}

size_t robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__size_function__GetPointCenter_Event__request(
  const void * untyped_member)
{
  const robovision_interfaces__srv__GetPointCenter_Request__Sequence * member =
    (const robovision_interfaces__srv__GetPointCenter_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__get_const_function__GetPointCenter_Event__request(
  const void * untyped_member, size_t index)
{
  const robovision_interfaces__srv__GetPointCenter_Request__Sequence * member =
    (const robovision_interfaces__srv__GetPointCenter_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__get_function__GetPointCenter_Event__request(
  void * untyped_member, size_t index)
{
  robovision_interfaces__srv__GetPointCenter_Request__Sequence * member =
    (robovision_interfaces__srv__GetPointCenter_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__fetch_function__GetPointCenter_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robovision_interfaces__srv__GetPointCenter_Request * item =
    ((const robovision_interfaces__srv__GetPointCenter_Request *)
    robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__get_const_function__GetPointCenter_Event__request(untyped_member, index));
  robovision_interfaces__srv__GetPointCenter_Request * value =
    (robovision_interfaces__srv__GetPointCenter_Request *)(untyped_value);
  *value = *item;
}

void robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__assign_function__GetPointCenter_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robovision_interfaces__srv__GetPointCenter_Request * item =
    ((robovision_interfaces__srv__GetPointCenter_Request *)
    robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__get_function__GetPointCenter_Event__request(untyped_member, index));
  const robovision_interfaces__srv__GetPointCenter_Request * value =
    (const robovision_interfaces__srv__GetPointCenter_Request *)(untyped_value);
  *item = *value;
}

bool robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__resize_function__GetPointCenter_Event__request(
  void * untyped_member, size_t size)
{
  robovision_interfaces__srv__GetPointCenter_Request__Sequence * member =
    (robovision_interfaces__srv__GetPointCenter_Request__Sequence *)(untyped_member);
  robovision_interfaces__srv__GetPointCenter_Request__Sequence__fini(member);
  return robovision_interfaces__srv__GetPointCenter_Request__Sequence__init(member, size);
}

size_t robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__size_function__GetPointCenter_Event__response(
  const void * untyped_member)
{
  const robovision_interfaces__srv__GetPointCenter_Response__Sequence * member =
    (const robovision_interfaces__srv__GetPointCenter_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__get_const_function__GetPointCenter_Event__response(
  const void * untyped_member, size_t index)
{
  const robovision_interfaces__srv__GetPointCenter_Response__Sequence * member =
    (const robovision_interfaces__srv__GetPointCenter_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__get_function__GetPointCenter_Event__response(
  void * untyped_member, size_t index)
{
  robovision_interfaces__srv__GetPointCenter_Response__Sequence * member =
    (robovision_interfaces__srv__GetPointCenter_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__fetch_function__GetPointCenter_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robovision_interfaces__srv__GetPointCenter_Response * item =
    ((const robovision_interfaces__srv__GetPointCenter_Response *)
    robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__get_const_function__GetPointCenter_Event__response(untyped_member, index));
  robovision_interfaces__srv__GetPointCenter_Response * value =
    (robovision_interfaces__srv__GetPointCenter_Response *)(untyped_value);
  *value = *item;
}

void robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__assign_function__GetPointCenter_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robovision_interfaces__srv__GetPointCenter_Response * item =
    ((robovision_interfaces__srv__GetPointCenter_Response *)
    robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__get_function__GetPointCenter_Event__response(untyped_member, index));
  const robovision_interfaces__srv__GetPointCenter_Response * value =
    (const robovision_interfaces__srv__GetPointCenter_Response *)(untyped_value);
  *item = *value;
}

bool robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__resize_function__GetPointCenter_Event__response(
  void * untyped_member, size_t size)
{
  robovision_interfaces__srv__GetPointCenter_Response__Sequence * member =
    (robovision_interfaces__srv__GetPointCenter_Response__Sequence *)(untyped_member);
  robovision_interfaces__srv__GetPointCenter_Response__Sequence__fini(member);
  return robovision_interfaces__srv__GetPointCenter_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__GetPointCenter_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robovision_interfaces__srv__GetPointCenter_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robovision_interfaces__srv__GetPointCenter_Event, request),  // bytes offset in struct
    NULL,  // default value
    robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__size_function__GetPointCenter_Event__request,  // size() function pointer
    robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__get_const_function__GetPointCenter_Event__request,  // get_const(index) function pointer
    robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__get_function__GetPointCenter_Event__request,  // get(index) function pointer
    robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__fetch_function__GetPointCenter_Event__request,  // fetch(index, &value) function pointer
    robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__assign_function__GetPointCenter_Event__request,  // assign(index, value) function pointer
    robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__resize_function__GetPointCenter_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robovision_interfaces__srv__GetPointCenter_Event, response),  // bytes offset in struct
    NULL,  // default value
    robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__size_function__GetPointCenter_Event__response,  // size() function pointer
    robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__get_const_function__GetPointCenter_Event__response,  // get_const(index) function pointer
    robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__get_function__GetPointCenter_Event__response,  // get(index) function pointer
    robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__fetch_function__GetPointCenter_Event__response,  // fetch(index, &value) function pointer
    robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__assign_function__GetPointCenter_Event__response,  // assign(index, value) function pointer
    robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__resize_function__GetPointCenter_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__GetPointCenter_Event_message_members = {
  "robovision_interfaces__srv",  // message namespace
  "GetPointCenter_Event",  // message name
  3,  // number of fields
  sizeof(robovision_interfaces__srv__GetPointCenter_Event),
  false,  // has_any_key_member_
  robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__GetPointCenter_Event_message_member_array,  // message members
  robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__GetPointCenter_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__GetPointCenter_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__GetPointCenter_Event_message_type_support_handle = {
  0,
  &robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__GetPointCenter_Event_message_members,
  get_message_typesupport_handle_function,
  &robovision_interfaces__srv__GetPointCenter_Event__get_type_hash,
  &robovision_interfaces__srv__GetPointCenter_Event__get_type_description,
  &robovision_interfaces__srv__GetPointCenter_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robovision_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robovision_interfaces, srv, GetPointCenter_Event)() {
  robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__GetPointCenter_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__GetPointCenter_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robovision_interfaces, srv, GetPointCenter_Request)();
  robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__GetPointCenter_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robovision_interfaces, srv, GetPointCenter_Response)();
  if (!robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__GetPointCenter_Event_message_type_support_handle.typesupport_identifier) {
    robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__GetPointCenter_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__GetPointCenter_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robovision_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robovision_interfaces/srv/detail/get_point_center__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robovision_interfaces__srv__detail__get_point_center__rosidl_typesupport_introspection_c__GetPointCenter_service_members = {
  "robovision_interfaces__srv",  // service namespace
  "GetPointCenter",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // robovision_interfaces__srv__detail__get_point_center__rosidl_typesupport_introspection_c__GetPointCenter_Request_message_type_support_handle,
  NULL,  // response message
  // robovision_interfaces__srv__detail__get_point_center__rosidl_typesupport_introspection_c__GetPointCenter_Response_message_type_support_handle
  NULL  // event_message
  // robovision_interfaces__srv__detail__get_point_center__rosidl_typesupport_introspection_c__GetPointCenter_Response_message_type_support_handle
};


static rosidl_service_type_support_t robovision_interfaces__srv__detail__get_point_center__rosidl_typesupport_introspection_c__GetPointCenter_service_type_support_handle = {
  0,
  &robovision_interfaces__srv__detail__get_point_center__rosidl_typesupport_introspection_c__GetPointCenter_service_members,
  get_service_typesupport_handle_function,
  &robovision_interfaces__srv__GetPointCenter_Request__rosidl_typesupport_introspection_c__GetPointCenter_Request_message_type_support_handle,
  &robovision_interfaces__srv__GetPointCenter_Response__rosidl_typesupport_introspection_c__GetPointCenter_Response_message_type_support_handle,
  &robovision_interfaces__srv__GetPointCenter_Event__rosidl_typesupport_introspection_c__GetPointCenter_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    robovision_interfaces,
    srv,
    GetPointCenter
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    robovision_interfaces,
    srv,
    GetPointCenter
  ),
  &robovision_interfaces__srv__GetPointCenter__get_type_hash,
  &robovision_interfaces__srv__GetPointCenter__get_type_description,
  &robovision_interfaces__srv__GetPointCenter__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robovision_interfaces, srv, GetPointCenter_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robovision_interfaces, srv, GetPointCenter_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robovision_interfaces, srv, GetPointCenter_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robovision_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robovision_interfaces, srv, GetPointCenter)(void) {
  if (!robovision_interfaces__srv__detail__get_point_center__rosidl_typesupport_introspection_c__GetPointCenter_service_type_support_handle.typesupport_identifier) {
    robovision_interfaces__srv__detail__get_point_center__rosidl_typesupport_introspection_c__GetPointCenter_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robovision_interfaces__srv__detail__get_point_center__rosidl_typesupport_introspection_c__GetPointCenter_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robovision_interfaces, srv, GetPointCenter_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robovision_interfaces, srv, GetPointCenter_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robovision_interfaces, srv, GetPointCenter_Event)()->data;
  }

  return &robovision_interfaces__srv__detail__get_point_center__rosidl_typesupport_introspection_c__GetPointCenter_service_type_support_handle;
}
