// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robovision_interfaces:srv/GetPointCenter.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robovision_interfaces/srv/get_point_center.h"


#ifndef ROBOVISION_INTERFACES__SRV__DETAIL__GET_POINT_CENTER__STRUCT_H_
#define ROBOVISION_INTERFACES__SRV__DETAIL__GET_POINT_CENTER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetPointCenter in the package robovision_interfaces.
typedef struct robovision_interfaces__srv__GetPointCenter_Request
{
  int64_t x;
  int64_t y;
} robovision_interfaces__srv__GetPointCenter_Request;

// Struct for a sequence of robovision_interfaces__srv__GetPointCenter_Request.
typedef struct robovision_interfaces__srv__GetPointCenter_Request__Sequence
{
  robovision_interfaces__srv__GetPointCenter_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robovision_interfaces__srv__GetPointCenter_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "robovision_interfaces/msg/detail/object_centroid__struct.h"

/// Struct defined in srv/GetPointCenter in the package robovision_interfaces.
typedef struct robovision_interfaces__srv__GetPointCenter_Response
{
  robovision_interfaces__msg__ObjectCentroid point;
} robovision_interfaces__srv__GetPointCenter_Response;

// Struct for a sequence of robovision_interfaces__srv__GetPointCenter_Response.
typedef struct robovision_interfaces__srv__GetPointCenter_Response__Sequence
{
  robovision_interfaces__srv__GetPointCenter_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robovision_interfaces__srv__GetPointCenter_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  robovision_interfaces__srv__GetPointCenter_Event__request__MAX_SIZE = 1
};
// response
enum
{
  robovision_interfaces__srv__GetPointCenter_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetPointCenter in the package robovision_interfaces.
typedef struct robovision_interfaces__srv__GetPointCenter_Event
{
  service_msgs__msg__ServiceEventInfo info;
  robovision_interfaces__srv__GetPointCenter_Request__Sequence request;
  robovision_interfaces__srv__GetPointCenter_Response__Sequence response;
} robovision_interfaces__srv__GetPointCenter_Event;

// Struct for a sequence of robovision_interfaces__srv__GetPointCenter_Event.
typedef struct robovision_interfaces__srv__GetPointCenter_Event__Sequence
{
  robovision_interfaces__srv__GetPointCenter_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robovision_interfaces__srv__GetPointCenter_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOVISION_INTERFACES__SRV__DETAIL__GET_POINT_CENTER__STRUCT_H_
